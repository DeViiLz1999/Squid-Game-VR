using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[AddComponentMenu("Nokobot/Modern Guns/Simple Shoot")]
public class SimpleShoot : MonoBehaviour
{
    [Header("Prefab Refrences")]
    public GameObject bulletPrefab;
    public GameObject casingPrefab;
    public GameObject muzzleFlashPrefab;

    [Header("Location Refrences")]
    [SerializeField] private Animator gunAnimator;
    [SerializeField] private Transform barrelLocation;
    [SerializeField] private Transform casingExitLocation;

    [Header("Settings")]
    [Tooltip("Specify time to destory the casing object")] [SerializeField] private float destroyTimer = 2f;
    [Tooltip("Bullet Speed")] [SerializeField] private float shotPower = 500f;
    [Tooltip("Casing Ejection Speed")] [SerializeField] private float ejectPower = 150f;

    public AudioSource source;
    public AudioClip fireSound;

    //private GameObject Sphere;
    //private GameObject Enemy;

    private void Awake()
    {
        //Sphere = GameObject.Find("Sphere");
        //Enemy = GameObject.FindWithTag("contestants");
    }
    void Start()
    {
        if (barrelLocation == null)
            barrelLocation = transform;

        if (gunAnimator == null)
            gunAnimator = GetComponentInChildren<Animator>();
    }

    public void PullTrigger()
    {
        gunAnimator.SetTrigger("Fire");
    }


    //This function creates the bullet behavior
    void Shoot()
    {
        source.volume = 0.5f;
        source.PlayOneShot(fireSound);

        if (muzzleFlashPrefab)
        {
            //Create the muzzle flash
            GameObject tempFlash;
            tempFlash = Instantiate(muzzleFlashPrefab, barrelLocation.position, barrelLocation.rotation);

            //Destroy the muzzle flash effect
            Destroy(tempFlash, destroyTimer);
        }

        //cancels if there's no bullet prefeb
        if (!bulletPrefab)
        { return; }

        // Create a bullet and add force on it in direction of the barrel
        //Instantiate(bulletPrefab, barrelLocation.position, barrelLocation.rotation).GetComponent<Rigidbody>().AddForce(barrelLocation.forward * shotPower);
        GameObject bullet = Instantiate(bulletPrefab, barrelLocation.position, barrelLocation.rotation);
        bullet.GetComponent<Rigidbody>().velocity = barrelLocation.forward * shotPower;
        Destroy(bullet, destroyTimer);

        // Create a raycast for the bullet in the direction of the barrel
        RaycastHit hitInfo;
        if(Physics.Raycast(barrelLocation.position, barrelLocation.forward, out hitInfo, 100))
        {
            //Debug.Log(hitInfo.transform.name);

            Debug.DrawRay(barrelLocation.position, barrelLocation.TransformDirection(barrelLocation.forward) * 100, Color.green);

            TargetEnemy contestants = hitInfo.transform.GetComponent<TargetEnemy>();
            Pickup powerups = hitInfo.transform.GetComponent<Pickup>();
            QuitGame quitGame = hitInfo.transform.GetComponent<QuitGame>();

            if(contestants != null)
            {
                contestants.TakeDamage();
            }

            if(powerups != null)
            {
                powerups.PickUp();
            }

            if(quitGame != null)
            {
                quitGame.QuitGameButton();
            }
            // Debug.Log(hitInfo.transform.tag);

            /*if (hitInfo.transform.tag == "contestants")
            {
                Destroy(Sphere, 0.1f);
                Destroy(Enemy, 0.1f);
            }*/
        }

        /*if(line)
        {
            GameObject linear = Instantiate(line);
            linear.GetComponent<LineRenderer>().SetPositions(new Vector3[] {barrelLocation.position, hasHit ? hitInfo.point :
                barrelLocation.position + barrelLocation.forward * 100});
            Destroy(linear, 0.5f);
        }*/

    }

    //This function creates a casing at the ejection slot
    void CasingRelease()
    {
        //Cancels function if ejection slot hasn't been set or there's no casing
        if (!casingExitLocation || !casingPrefab)
        { return; }

        //Create the casing
        GameObject tempCasing;
        tempCasing = Instantiate(casingPrefab, casingExitLocation.position, casingExitLocation.rotation) as GameObject;
        //Add force on casing to push it out
        tempCasing.GetComponent<Rigidbody>().AddExplosionForce(Random.Range(ejectPower * 0.7f, ejectPower), (casingExitLocation.position - casingExitLocation.right * 0.3f - casingExitLocation.up * 0.6f), 1f);
        //Add torque to make casing spin in random direction
        tempCasing.GetComponent<Rigidbody>().AddTorque(new Vector3(0, Random.Range(100f, 500f), Random.Range(100f, 1000f)), ForceMode.Impulse);

        //Destroy casing after X seconds
        Destroy(tempCasing, destroyTimer);
    }

   /* private void OnCollisionEnter(Collision collision)
    {
        if(collision.transform.tag == "contestants")
        {
            Destroy(collision.gameObject);
        }
    }*/
}
