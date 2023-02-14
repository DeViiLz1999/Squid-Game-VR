#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000011 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000016 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000017 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000018 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000019 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001A System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001C System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000020 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000021 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000022 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000024 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000025 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000026 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000027 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000043 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000044 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000045 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000046 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000047 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000048 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000049 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000004A System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004C System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000004E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000004F System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000050 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000051 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000054 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000055 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000056 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000057 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000058 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000059 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000005A System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005B System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000005C System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005D System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000005E TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000005F System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000060 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000062 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000064 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000066 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000067 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000068 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000069 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000006A System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000006E System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000070 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000071 System.Int32 System.Collections.Generic.HashSet`1::RemoveWhere(System.Predicate`1<T>)
// 0x00000072 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000074 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000075 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000076 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000077 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000078 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000079 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000007A T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000007B System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000007C System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[124] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[124] = 
{
	4599,
	4795,
	4795,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[44] = 
{
	{ 0x02000004, { 70, 4 } },
	{ 0x02000005, { 74, 9 } },
	{ 0x02000006, { 85, 7 } },
	{ 0x02000007, { 94, 10 } },
	{ 0x02000008, { 106, 11 } },
	{ 0x02000009, { 120, 9 } },
	{ 0x0200000A, { 132, 12 } },
	{ 0x0200000B, { 147, 1 } },
	{ 0x0200000C, { 148, 2 } },
	{ 0x0200000D, { 150, 2 } },
	{ 0x0200000F, { 152, 3 } },
	{ 0x02000010, { 157, 5 } },
	{ 0x02000011, { 162, 7 } },
	{ 0x02000012, { 169, 3 } },
	{ 0x02000013, { 172, 7 } },
	{ 0x02000014, { 179, 4 } },
	{ 0x02000015, { 183, 23 } },
	{ 0x02000017, { 206, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 2 } },
	{ 0x06000009, { 32, 1 } },
	{ 0x0600000A, { 33, 3 } },
	{ 0x0600000B, { 36, 2 } },
	{ 0x0600000C, { 38, 4 } },
	{ 0x0600000D, { 42, 4 } },
	{ 0x0600000E, { 46, 4 } },
	{ 0x0600000F, { 50, 3 } },
	{ 0x06000010, { 53, 1 } },
	{ 0x06000011, { 54, 1 } },
	{ 0x06000012, { 55, 3 } },
	{ 0x06000013, { 58, 3 } },
	{ 0x06000014, { 61, 2 } },
	{ 0x06000015, { 63, 2 } },
	{ 0x06000016, { 65, 5 } },
	{ 0x06000026, { 83, 2 } },
	{ 0x0600002B, { 92, 2 } },
	{ 0x06000030, { 104, 2 } },
	{ 0x06000036, { 117, 3 } },
	{ 0x0600003B, { 129, 3 } },
	{ 0x06000040, { 144, 3 } },
	{ 0x0600004B, { 155, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[208] = 
{
	{ (Il2CppRGCTXDataType)2, 2517 },
	{ (Il2CppRGCTXDataType)3, 11266 },
	{ (Il2CppRGCTXDataType)2, 4169 },
	{ (Il2CppRGCTXDataType)2, 3571 },
	{ (Il2CppRGCTXDataType)3, 20435 },
	{ (Il2CppRGCTXDataType)2, 2661 },
	{ (Il2CppRGCTXDataType)2, 3578 },
	{ (Il2CppRGCTXDataType)3, 20470 },
	{ (Il2CppRGCTXDataType)2, 3573 },
	{ (Il2CppRGCTXDataType)3, 20447 },
	{ (Il2CppRGCTXDataType)2, 2518 },
	{ (Il2CppRGCTXDataType)3, 11267 },
	{ (Il2CppRGCTXDataType)2, 4202 },
	{ (Il2CppRGCTXDataType)2, 3583 },
	{ (Il2CppRGCTXDataType)3, 20485 },
	{ (Il2CppRGCTXDataType)2, 2691 },
	{ (Il2CppRGCTXDataType)2, 3591 },
	{ (Il2CppRGCTXDataType)3, 20649 },
	{ (Il2CppRGCTXDataType)2, 3587 },
	{ (Il2CppRGCTXDataType)3, 20560 },
	{ (Il2CppRGCTXDataType)2, 863 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1600 },
	{ (Il2CppRGCTXDataType)3, 8032 },
	{ (Il2CppRGCTXDataType)2, 865 },
	{ (Il2CppRGCTXDataType)3, 55 },
	{ (Il2CppRGCTXDataType)3, 56 },
	{ (Il2CppRGCTXDataType)2, 1612 },
	{ (Il2CppRGCTXDataType)3, 8037 },
	{ (Il2CppRGCTXDataType)2, 3174 },
	{ (Il2CppRGCTXDataType)3, 16397 },
	{ (Il2CppRGCTXDataType)3, 8944 },
	{ (Il2CppRGCTXDataType)2, 1065 },
	{ (Il2CppRGCTXDataType)3, 1130 },
	{ (Il2CppRGCTXDataType)3, 1131 },
	{ (Il2CppRGCTXDataType)2, 2662 },
	{ (Il2CppRGCTXDataType)3, 12036 },
	{ (Il2CppRGCTXDataType)2, 2267 },
	{ (Il2CppRGCTXDataType)2, 1790 },
	{ (Il2CppRGCTXDataType)2, 1910 },
	{ (Il2CppRGCTXDataType)2, 2024 },
	{ (Il2CppRGCTXDataType)2, 2268 },
	{ (Il2CppRGCTXDataType)2, 1791 },
	{ (Il2CppRGCTXDataType)2, 1911 },
	{ (Il2CppRGCTXDataType)2, 2025 },
	{ (Il2CppRGCTXDataType)2, 2269 },
	{ (Il2CppRGCTXDataType)2, 1792 },
	{ (Il2CppRGCTXDataType)2, 1912 },
	{ (Il2CppRGCTXDataType)2, 2026 },
	{ (Il2CppRGCTXDataType)2, 1913 },
	{ (Il2CppRGCTXDataType)2, 2027 },
	{ (Il2CppRGCTXDataType)3, 8033 },
	{ (Il2CppRGCTXDataType)2, 1360 },
	{ (Il2CppRGCTXDataType)2, 1902 },
	{ (Il2CppRGCTXDataType)2, 1903 },
	{ (Il2CppRGCTXDataType)2, 2022 },
	{ (Il2CppRGCTXDataType)3, 8031 },
	{ (Il2CppRGCTXDataType)2, 1901 },
	{ (Il2CppRGCTXDataType)2, 2021 },
	{ (Il2CppRGCTXDataType)3, 8030 },
	{ (Il2CppRGCTXDataType)2, 1789 },
	{ (Il2CppRGCTXDataType)2, 1909 },
	{ (Il2CppRGCTXDataType)2, 1788 },
	{ (Il2CppRGCTXDataType)3, 23746 },
	{ (Il2CppRGCTXDataType)3, 7358 },
	{ (Il2CppRGCTXDataType)2, 1461 },
	{ (Il2CppRGCTXDataType)2, 1905 },
	{ (Il2CppRGCTXDataType)2, 2023 },
	{ (Il2CppRGCTXDataType)2, 2123 },
	{ (Il2CppRGCTXDataType)3, 11268 },
	{ (Il2CppRGCTXDataType)3, 11270 },
	{ (Il2CppRGCTXDataType)2, 643 },
	{ (Il2CppRGCTXDataType)3, 11269 },
	{ (Il2CppRGCTXDataType)3, 11278 },
	{ (Il2CppRGCTXDataType)2, 2521 },
	{ (Il2CppRGCTXDataType)2, 3574 },
	{ (Il2CppRGCTXDataType)3, 20448 },
	{ (Il2CppRGCTXDataType)3, 11279 },
	{ (Il2CppRGCTXDataType)2, 1955 },
	{ (Il2CppRGCTXDataType)2, 2054 },
	{ (Il2CppRGCTXDataType)3, 8044 },
	{ (Il2CppRGCTXDataType)3, 23711 },
	{ (Il2CppRGCTXDataType)2, 3588 },
	{ (Il2CppRGCTXDataType)3, 20561 },
	{ (Il2CppRGCTXDataType)3, 11271 },
	{ (Il2CppRGCTXDataType)2, 2520 },
	{ (Il2CppRGCTXDataType)2, 3572 },
	{ (Il2CppRGCTXDataType)3, 20436 },
	{ (Il2CppRGCTXDataType)3, 8043 },
	{ (Il2CppRGCTXDataType)3, 11272 },
	{ (Il2CppRGCTXDataType)3, 23710 },
	{ (Il2CppRGCTXDataType)2, 3584 },
	{ (Il2CppRGCTXDataType)3, 20486 },
	{ (Il2CppRGCTXDataType)3, 11285 },
	{ (Il2CppRGCTXDataType)2, 2522 },
	{ (Il2CppRGCTXDataType)2, 3579 },
	{ (Il2CppRGCTXDataType)3, 20471 },
	{ (Il2CppRGCTXDataType)3, 12131 },
	{ (Il2CppRGCTXDataType)3, 6021 },
	{ (Il2CppRGCTXDataType)3, 8045 },
	{ (Il2CppRGCTXDataType)3, 6020 },
	{ (Il2CppRGCTXDataType)3, 11286 },
	{ (Il2CppRGCTXDataType)3, 23712 },
	{ (Il2CppRGCTXDataType)2, 3592 },
	{ (Il2CppRGCTXDataType)3, 20650 },
	{ (Il2CppRGCTXDataType)3, 11299 },
	{ (Il2CppRGCTXDataType)2, 2524 },
	{ (Il2CppRGCTXDataType)2, 3590 },
	{ (Il2CppRGCTXDataType)3, 20563 },
	{ (Il2CppRGCTXDataType)3, 11300 },
	{ (Il2CppRGCTXDataType)2, 1958 },
	{ (Il2CppRGCTXDataType)2, 2057 },
	{ (Il2CppRGCTXDataType)3, 8049 },
	{ (Il2CppRGCTXDataType)3, 8048 },
	{ (Il2CppRGCTXDataType)2, 3576 },
	{ (Il2CppRGCTXDataType)3, 20450 },
	{ (Il2CppRGCTXDataType)3, 23717 },
	{ (Il2CppRGCTXDataType)2, 3589 },
	{ (Il2CppRGCTXDataType)3, 20562 },
	{ (Il2CppRGCTXDataType)3, 11292 },
	{ (Il2CppRGCTXDataType)2, 2523 },
	{ (Il2CppRGCTXDataType)2, 3586 },
	{ (Il2CppRGCTXDataType)3, 20488 },
	{ (Il2CppRGCTXDataType)3, 8047 },
	{ (Il2CppRGCTXDataType)3, 8046 },
	{ (Il2CppRGCTXDataType)3, 11293 },
	{ (Il2CppRGCTXDataType)2, 3575 },
	{ (Il2CppRGCTXDataType)3, 20449 },
	{ (Il2CppRGCTXDataType)3, 23716 },
	{ (Il2CppRGCTXDataType)2, 3585 },
	{ (Il2CppRGCTXDataType)3, 20487 },
	{ (Il2CppRGCTXDataType)3, 11306 },
	{ (Il2CppRGCTXDataType)2, 2525 },
	{ (Il2CppRGCTXDataType)2, 3594 },
	{ (Il2CppRGCTXDataType)3, 20652 },
	{ (Il2CppRGCTXDataType)3, 12132 },
	{ (Il2CppRGCTXDataType)3, 6023 },
	{ (Il2CppRGCTXDataType)3, 8051 },
	{ (Il2CppRGCTXDataType)3, 8050 },
	{ (Il2CppRGCTXDataType)3, 6022 },
	{ (Il2CppRGCTXDataType)3, 11307 },
	{ (Il2CppRGCTXDataType)2, 3577 },
	{ (Il2CppRGCTXDataType)3, 20451 },
	{ (Il2CppRGCTXDataType)3, 23718 },
	{ (Il2CppRGCTXDataType)2, 3593 },
	{ (Il2CppRGCTXDataType)3, 20651 },
	{ (Il2CppRGCTXDataType)3, 8041 },
	{ (Il2CppRGCTXDataType)3, 8042 },
	{ (Il2CppRGCTXDataType)3, 8055 },
	{ (Il2CppRGCTXDataType)2, 4211 },
	{ (Il2CppRGCTXDataType)2, 1361 },
	{ (Il2CppRGCTXDataType)2, 870 },
	{ (Il2CppRGCTXDataType)3, 118 },
	{ (Il2CppRGCTXDataType)3, 16384 },
	{ (Il2CppRGCTXDataType)2, 3175 },
	{ (Il2CppRGCTXDataType)3, 16398 },
	{ (Il2CppRGCTXDataType)2, 1066 },
	{ (Il2CppRGCTXDataType)3, 1132 },
	{ (Il2CppRGCTXDataType)3, 16390 },
	{ (Il2CppRGCTXDataType)3, 5969 },
	{ (Il2CppRGCTXDataType)2, 673 },
	{ (Il2CppRGCTXDataType)3, 16385 },
	{ (Il2CppRGCTXDataType)2, 3171 },
	{ (Il2CppRGCTXDataType)3, 1644 },
	{ (Il2CppRGCTXDataType)2, 1111 },
	{ (Il2CppRGCTXDataType)2, 1414 },
	{ (Il2CppRGCTXDataType)3, 5975 },
	{ (Il2CppRGCTXDataType)3, 16386 },
	{ (Il2CppRGCTXDataType)3, 5964 },
	{ (Il2CppRGCTXDataType)3, 5965 },
	{ (Il2CppRGCTXDataType)3, 5963 },
	{ (Il2CppRGCTXDataType)3, 5966 },
	{ (Il2CppRGCTXDataType)2, 1410 },
	{ (Il2CppRGCTXDataType)2, 4261 },
	{ (Il2CppRGCTXDataType)3, 8039 },
	{ (Il2CppRGCTXDataType)3, 5968 },
	{ (Il2CppRGCTXDataType)2, 1876 },
	{ (Il2CppRGCTXDataType)3, 5967 },
	{ (Il2CppRGCTXDataType)2, 1795 },
	{ (Il2CppRGCTXDataType)2, 4206 },
	{ (Il2CppRGCTXDataType)2, 1929 },
	{ (Il2CppRGCTXDataType)2, 2032 },
	{ (Il2CppRGCTXDataType)3, 7379 },
	{ (Il2CppRGCTXDataType)2, 1471 },
	{ (Il2CppRGCTXDataType)3, 8751 },
	{ (Il2CppRGCTXDataType)3, 8752 },
	{ (Il2CppRGCTXDataType)3, 8757 },
	{ (Il2CppRGCTXDataType)2, 2131 },
	{ (Il2CppRGCTXDataType)3, 8754 },
	{ (Il2CppRGCTXDataType)3, 24444 },
	{ (Il2CppRGCTXDataType)2, 1425 },
	{ (Il2CppRGCTXDataType)3, 6007 },
	{ (Il2CppRGCTXDataType)1, 1871 },
	{ (Il2CppRGCTXDataType)2, 4219 },
	{ (Il2CppRGCTXDataType)3, 8753 },
	{ (Il2CppRGCTXDataType)1, 4219 },
	{ (Il2CppRGCTXDataType)1, 2131 },
	{ (Il2CppRGCTXDataType)2, 4282 },
	{ (Il2CppRGCTXDataType)2, 4219 },
	{ (Il2CppRGCTXDataType)3, 16429 },
	{ (Il2CppRGCTXDataType)3, 8758 },
	{ (Il2CppRGCTXDataType)3, 8759 },
	{ (Il2CppRGCTXDataType)3, 8756 },
	{ (Il2CppRGCTXDataType)3, 8755 },
	{ (Il2CppRGCTXDataType)2, 492 },
	{ (Il2CppRGCTXDataType)3, 6024 },
	{ (Il2CppRGCTXDataType)2, 652 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	124,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	44,
	s_rgctxIndices,
	208,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
