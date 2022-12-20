//
// D:\MatchProject\Intermediate\Build\Win64\MatchProject\Development\Chaos\PBDCollisionConstraints.ispc.generated.dummy.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus

///////////////////////////////////////////////////////////////////////////
// Vector types with external visibility from ispc code
///////////////////////////////////////////////////////////////////////////

#ifndef __ISPC_VECTOR_float4__
#define __ISPC_VECTOR_float4__
#ifdef _MSC_VER
__declspec( align(16) ) struct float4 { float v[4]; };
#else
struct float4 { float v[4]; } __attribute__ ((aligned(16)));
#endif
#endif



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

#ifndef __ISPC_STRUCT_FCollisionContact__
#define __ISPC_STRUCT_FCollisionContact__
struct FCollisionContact {
    bool bDisabled;
    struct FVector Normal;
    struct FVector Location;
    float Phi;
    float Friction;
    float AngularFriction;
    float Restitution;
    float InvInertiaScale0;
    float InvInertiaScale1;
    int32_t ShapesType;
    int32_t * Implicit[2];
};
#endif

#ifndef __ISPC_STRUCT_FVector4__
#define __ISPC_STRUCT_FVector4__
struct FVector4 {
    float4  V;
};
#endif

#ifndef __ISPC_STRUCT_FTransform__
#define __ISPC_STRUCT_FTransform__
struct FTransform {
    struct FVector4 Rotation;
    struct FVector4 Translation;
    struct FVector4 Scale3D;
};
#endif

#ifndef __ISPC_STRUCT_FIntVector__
#define __ISPC_STRUCT_FIntVector__
struct FIntVector {
    int32_t V[3];
};
#endif

#ifndef __ISPC_STRUCT_TArrayND__
#define __ISPC_STRUCT_TArrayND__
struct TArrayND {
    struct FIntVector MCounts;
    float * MArray;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void ApplyContact2(const struct FCollisionContact * Contact, struct FVector &PActor0, struct FVector4 &QActor0, struct FVector &PActor1, struct FVector4 &QActor1, const float InvM0, const struct FVector &InvILocal0, const struct FVector &PCoMLocal0, const struct FVector4 &QCoMLocal0, const float InvM1, const struct FVector &InvILocal1, const struct FVector &PCoMLocal1, const struct FVector4 &QCoMLocal1);
    extern bool SampleBoxNoNormal(const struct FVector &BoxMin, const struct FVector &BoxMax, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const int32_t * PotentialParticles, int32_t &DeepestParticle, float &Phi, const uint32_t NumParticles);
    extern bool SampleBoxNoNormalAll(const struct FVector &BoxMin, const struct FVector &BoxMax, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, int32_t &DeepestParticle, float &Phi, const uint32_t NumParticles);
    extern void SampleBoxNormalAverage(const struct FVector &BoxMin, const struct FVector &BoxMax, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const int32_t * PotentialParticles, const float Thickness, float &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern void SampleBoxNormalAverageAll(const struct FVector &BoxMin, const struct FVector &BoxMax, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const float Thickness, float &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern bool SampleLevelSetNoNormal(const struct FVector &GridMinCorner, const struct FVector &GridMaxCorner, const struct FVector &GridDx, const struct FIntVector &GridCounts, const struct TArrayND * LevelSetPhiArray, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const int32_t * PotentialParticles, int32_t &DeepestParticle, float &Phi, const uint32_t NumParticles);
    extern bool SampleLevelSetNoNormalAll(const struct FVector &GridMinCorner, const struct FVector &GridMaxCorner, const struct FVector &GridDx, const struct FIntVector &GridCounts, const struct TArrayND * LevelSetPhiArray, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, int32_t &DeepestParticle, float &Phi, const uint32_t NumParticles);
    extern void SampleLevelSetNormalAverage(const struct FVector &GridMinCorner, const struct FVector &GridMaxCorner, const struct FVector &GridDx, const struct FIntVector &GridCounts, const struct TArrayND * LevelSetPhiArray, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const int32_t * PotentialParticles, const float Thickness, float &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern void SampleLevelSetNormalAverageAll(const struct FVector &GridMinCorner, const struct FVector &GridMaxCorner, const struct FVector &GridDx, const struct FIntVector &GridCounts, const struct TArrayND * LevelSetPhiArray, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const float Thickness, float &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern bool SamplePlaneNoNormalAll(const struct FVector &ObjectNormal, const struct FVector &ObjectMX, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, int32_t &DeepestParticle, float &Phi, const uint32_t NumParticles);
    extern void SamplePlaneNormalAverageAll(const struct FVector &ObjectNormal, const struct FVector &ObjectMX, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const float Thickness, float &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern bool SampleSphereNoNormalAll(const float &ObjectRadius, const struct FVector &ObjectMX, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, int32_t &DeepestParticle, float &Phi, const uint32_t NumParticles);
    extern void SampleSphereNormalAverageAll(const float &ObjectRadius, const struct FVector &ObjectMX, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const float Thickness, float &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern int32_t SizeofFCollisionContact();
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
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



#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
