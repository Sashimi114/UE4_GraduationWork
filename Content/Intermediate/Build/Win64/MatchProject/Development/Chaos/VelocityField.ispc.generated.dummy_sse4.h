//
// D:\MatchProject\Intermediate\Build\Win64\MatchProject\Development\Chaos\VelocityField.ispc.generated.dummy_sse4.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus

#ifndef __ISPC_ALIGN__
#if defined(__clang__) || !defined(_MSC_VER)
// Clang, GCC, ICC
#define __ISPC_ALIGN__(s) __attribute__((aligned(s)))
#define __ISPC_ALIGNED_STRUCT__(s) struct __ISPC_ALIGN__(s)
#else
// Visual Studio
#define __ISPC_ALIGN__(s) __declspec(align(s))
#define __ISPC_ALIGNED_STRUCT__(s) __ISPC_ALIGN__(s) struct
#endif
#endif

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_FIntVector__
#define __ISPC_STRUCT_FIntVector__
struct FIntVector {
    int32_t V[3];
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void UpdateField(struct FVector * Forces, const struct FIntVector * Elements, const struct FVector * V, const struct FVector * X, const struct FVector &Velocity, const float QuarterRho, const float Cd, const float Cl, const int32_t NumElements);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
