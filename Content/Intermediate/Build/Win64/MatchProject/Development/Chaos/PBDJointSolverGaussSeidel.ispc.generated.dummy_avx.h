//
// D:\MatchProject\Intermediate\Build\Win64\MatchProject\Development\Chaos\PBDJointSolverGaussSeidel.ispc.generated.dummy_avx.h
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

#ifndef __ISPC_STRUCT_FVector4__
#define __ISPC_STRUCT_FVector4__
struct FVector4 {
    float4  V;
};
#endif

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_FRigidTransform__
#define __ISPC_STRUCT_FRigidTransform__
struct FRigidTransform {
    struct FVector4 Rotation;
    struct FVector Translation;
    struct FVector Scale3D;
};
#endif

#ifndef __ISPC_STRUCT_FMatrix__
#define __ISPC_STRUCT_FMatrix__
struct FMatrix {
    float M[16];
};
#endif

#ifndef __ISPC_STRUCT_FJointSolverGaussSeidel__
#define __ISPC_STRUCT_FJointSolverGaussSeidel__
struct FJointSolverGaussSeidel {
    struct FRigidTransform XLs[2];
    struct FVector InvILs[2];
    float InvMs[2];
    struct FVector Xs[2];
    struct FVector4 Rs[2];
    struct FVector Ps[2];
    struct FVector4 Qs[2];
    struct FVector Vs[2];
    struct FVector Ws[2];
    struct FMatrix InvIs[2];
    struct FVector InitPs[2];
    struct FVector4 InitQs[2];
    struct FVector InitXs[2];
    struct FVector4 InitRs[2];
    struct FVector NetLinearImpulse;
    struct FVector NetAngularImpulse;
    float LinearSoftLambda;
    float TwistSoftLambda;
    float SwingSoftLambda;
    struct FVector LinearDriveLambdas;
    struct FVector RotationDriveLambdas;
    struct FVector LinearConstraintPadding;
    struct FVector AngularConstraintPadding;
    float PositionTolerance;
    float AngleTolerance;
    struct FVector LastPs[2];
    struct FVector4 LastQs[2];
    int32_t NumActiveConstraints;
    bool bIsActive;
};
#endif

#ifndef __ISPC_STRUCT_FJointSolverJointState__
#define __ISPC_STRUCT_FJointSolverJointState__
struct FJointSolverJointState {
    struct FRigidTransform XLs[2];
    struct FVector InvILs[2];
    float InvMs[2];
    struct FVector Xs[2];
    struct FVector4 Rs[2];
    struct FVector Ps[2];
    struct FVector4 Qs[2];
    struct FMatrix InvIs[2];
    struct FVector PrevPs[2];
    struct FVector4 PrevQs[2];
    struct FVector PrevXs[2];
    struct FVector DPs[2];
    struct FVector DRs[2];
    float PositionTolerance;
    float AngleTolerance;
};
#endif

#ifndef __ISPC_STRUCT_FJointSolverConstraintRowData__
#define __ISPC_STRUCT_FJointSolverConstraintRowData__
struct FJointSolverConstraintRowData {
    int32_t UpdateType;
    int32_t JointIndex;
    int32_t ConstraintIndex;
    int32_t NumRows;
    float Stiffness;
    float Damping;
    float Limit;
    bool bIsAccelerationMode;
    bool bIsSoft;
};
#endif

#ifndef __ISPC_STRUCT_FJointSolverConstraintRowState__
#define __ISPC_STRUCT_FJointSolverConstraintRowState__
struct FJointSolverConstraintRowState {
    struct FVector DPs[2];
    struct FVector DRs[2];
    struct FVector Axis;
    float Error;
    float Lambda;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void ApplyPointPositionConstraintDD(struct FJointSolverGaussSeidel * M, const struct FVector &CX, const float LinearStiffness);
    extern void ApplyPointPositionConstraintKD(struct FJointSolverGaussSeidel * M, const int32_t KIndex, const int32_t DIndex, const struct FVector &CX, const float LinearStiffness);
    extern void ApplyPositionConstraintSoft(struct FJointSolverGaussSeidel * M, const float Dt, const float Stiffness, const float Damping, const bool bAccelerationMode, const struct FVector &Axis, const float Delta, const float TargetVel, float &Lambda);
    extern void ApplyRotationConstraintSoftDD(struct FJointSolverGaussSeidel * M, const float Dt, const float Stiffness, const float Damping, const bool bAccelerationMode, const struct FVector &Axis, const float Angle, const float AngVelTarget, float &Lambda);
    extern void ApplyRotationConstraintSoftKD(struct FJointSolverGaussSeidel * M, const int32_t KIndex, const int32_t DIndex, const float Dt, const float Stiffness, const float Damping, const bool bAccelerationMode, const struct FVector &Axis, const float Angle, const float AngVelTarget, float &Lambda);
    extern void ApplyRotationDelta2(struct FJointSolverGaussSeidel * M, const float Stiffness, const struct FVector &DR0, const struct FVector &DR1);
    extern int32_t BatchApplyPositionConstraints(float Dt, struct FJointSolverJointState * JointStates, struct FJointSolverConstraintRowData * RowDatas, struct FJointSolverConstraintRowState * RowStates, int32_t JointIndexBegin, int32_t JointIndexEnd, int32_t RowIndexBegin, int32_t RowIndexEnd);
    extern int32_t BatchApplyRotationConstraints(float Dt, struct FJointSolverJointState * JointStates, struct FJointSolverConstraintRowData * RowDatas, struct FJointSolverConstraintRowState * RowStates, int32_t JointIndexBegin, int32_t JointIndexEnd, int32_t RowIndexBegin, int32_t RowIndexEnd);
    extern void BatchUpdateDerivedState(struct FJointSolverJointState * Joints, int32_t JointIndexBegin, int32_t JointIndexEnd);
    extern int32_t SizeofFJointSolverConstraintRowData();
    extern int32_t SizeofFJointSolverConstraintRowState();
    extern int32_t SizeofFJointSolverGaussSeidel();
    extern int32_t SizeofFJointSolverJointState();
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
