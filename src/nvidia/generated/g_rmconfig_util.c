// This file is automatically generated by rmconfig - DO NOT EDIT!
//
// rmconfig runtime support that will be part of "core" resman.
//
// Profile:  shipping-gpus-openrm
// Template: templates/gt_rmconfig_util.c
//
// Chips:    TU10X, GA100, GA102, GA103, GA104, GA106, GA107, AD102, AD103, AD104, GH10X
//

#include "gpu/gpu.h"

#include "nvoc/runtime.h"
#include "nvoc/rtti.h"

// NVOC RTTI provider for IOM objects
const NVOC_RTTI_PROVIDER __iom_rtti_provider = { 0 };

//
// helper functions for IsCHIP() et.al.
// These help to reduce code size for runtime IsCHIP() and IsCHIPALIAS() invocations
//

NvBool rmcfg_IsTU102(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_TU102, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsTU104(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_TU104, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsTU104orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_TU104, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsTU106(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_TU106, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsTU106orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_TU106, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsTU116(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_TU116, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsTU116orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_TU116, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsTU117(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_TU117, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsTU117orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_TU117, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsTU10X(POBJGPU pGpu)
{
    return IsTU102(pGpu) || IsTU104(pGpu) || IsTU106(pGpu) || IsTU116(pGpu) || IsTU117(pGpu);
}

NvBool rmcfg_IsGA100(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_GA100, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA100orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_GA100, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA102(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_GA102, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA102orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_GA102, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA103(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_GA103, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA103orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_GA103, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA104(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_GA104, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA104orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_GA104, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA106(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_GA106, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA106orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_GA106, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA107(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_GA107, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA107orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_GA107, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA10BorBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_GA10B, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA10X(POBJGPU pGpu)
{
    return IsGA100(pGpu) || IsGA102(pGpu) || IsGA103(pGpu) || IsGA104(pGpu) || IsGA106(pGpu) || IsGA107(pGpu);
}

NvBool rmcfg_IsGA10XorBetter(POBJGPU pGpu)
{
    return IsGA100orBetter(pGpu);
}

NvBool rmcfg_IsGA102ForBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_GA102F, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGA10XForBetter(POBJGPU pGpu)
{
    return IsAD102orBetter(pGpu);
}

NvBool rmcfg_IsAD102(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_AD102, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsAD102orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_AD102, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsAD103(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_AD103, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsAD103orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_AD103, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsAD104(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_AD104, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsAD104orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_AD104, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsAD10X(POBJGPU pGpu)
{
    return IsAD102(pGpu) || IsAD103(pGpu) || IsAD104(pGpu);
}

NvBool rmcfg_IsAD10XorBetter(POBJGPU pGpu)
{
    return IsAD102orBetter(pGpu);
}

NvBool rmcfg_IsGH100(POBJGPU pGpu)
{
    return gpuIsImplementation(pGpu, HAL_IMPL_GH100, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGH100orBetter(POBJGPU pGpu)
{
    return gpuIsImplementationOrBetter(pGpu, HAL_IMPL_GH100, GPU_NO_MASK_REVISION, GPU_NO_REVISION);
}

NvBool rmcfg_IsGH10X(POBJGPU pGpu)
{
    return IsGH100(pGpu);
}

NvBool rmcfg_IsGH10XorBetter(POBJGPU pGpu)
{
    return IsGH100orBetter(pGpu);
}

NvBool rmcfg_IsDISPLAYLESS(POBJGPU pGpu)
{
    return IsGA100(pGpu) || IsGH100(pGpu);
}

NvBool rmcfg_IsdTURING(POBJGPU pGpu)
{
    return IsTU102(pGpu) || IsTU104(pGpu) || IsTU106(pGpu) || IsTU116(pGpu) || IsTU117(pGpu);
}

NvBool rmcfg_IsTURING_CLASSIC_GPUS(POBJGPU pGpu)
{
    return IsTU102(pGpu) || IsTU104(pGpu) || IsTU106(pGpu) || IsTU116(pGpu) || IsTU117(pGpu);
}

NvBool rmcfg_IsdAMPERE(POBJGPU pGpu)
{
    return IsGA100(pGpu) || IsGA102(pGpu) || IsGA103(pGpu) || IsGA104(pGpu) || IsGA106(pGpu) || IsGA107(pGpu);
}

NvBool rmcfg_IsdAMPEREorBetter(POBJGPU pGpu)
{
    return IsGA100orBetter(pGpu);
}

NvBool rmcfg_IsAMPERE_CLASSIC_GPUS(POBJGPU pGpu)
{
    return IsGA100(pGpu) || IsGA102(pGpu) || IsGA103(pGpu) || IsGA104(pGpu) || IsGA106(pGpu) || IsGA107(pGpu);
}

NvBool rmcfg_IsAMPERE_CLASSIC_GPUSorBetter(POBJGPU pGpu)
{
    return IsGA100orBetter(pGpu);
}

NvBool rmcfg_IsdADA(POBJGPU pGpu)
{
    return IsAD102(pGpu) || IsAD103(pGpu) || IsAD104(pGpu);
}

NvBool rmcfg_IsdADAorBetter(POBJGPU pGpu)
{
    return IsAD102orBetter(pGpu);
}

NvBool rmcfg_IsADA_CLASSIC_GPUS(POBJGPU pGpu)
{
    return IsAD102(pGpu) || IsAD103(pGpu) || IsAD104(pGpu);
}

NvBool rmcfg_IsADA_CLASSIC_GPUSorBetter(POBJGPU pGpu)
{
    return IsAD102orBetter(pGpu);
}

NvBool rmcfg_IsdHOPPER(POBJGPU pGpu)
{
    return IsGH100(pGpu);
}

NvBool rmcfg_IsdHOPPERorBetter(POBJGPU pGpu)
{
    return IsGH100orBetter(pGpu);
}

NvBool rmcfg_IsHOPPER_CLASSIC_GPUS(POBJGPU pGpu)
{
    return IsGH100(pGpu);
}

NvBool rmcfg_IsHOPPER_CLASSIC_GPUSorBetter(POBJGPU pGpu)
{
    return IsGH100orBetter(pGpu);
}



// NVOC class ID uniqueness checks
#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0x0x05c7b5 = 1;      /* OBJGPIO */
char __nvoc_class_id_uniqueness_check_0x0xaa1d70 = 1;      /* OBJOS */
char __nvoc_class_id_uniqueness_check_0x0x1ab16a = 1;      /* OBJRPC */
char __nvoc_class_id_uniqueness_check_0x0xd4dff8 = 1;      /* OBJRPCSTRUCTURECOPY */

#endif
