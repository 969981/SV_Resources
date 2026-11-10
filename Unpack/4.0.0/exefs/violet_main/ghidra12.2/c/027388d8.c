/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027388d8; name: FUN_027388d8
 */


void FUN_027388d8(long param_1,int param_2)

{
  char *pcVar1;
  void *__dest;
  
  pcVar1 = (char *)FUN_00ccbbb0(*(long *)(*(long *)(param_1 + 0x70) + 0x110) + (long)param_2,
                                param_1 + 0x30);
  if (*pcVar1 == '\0' || *(long *)(pcVar1 + 8) == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar1 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    __dest = (void *)(**(code **)PTR_DAT_047d8da8)();
  }
  memcpy(__dest,(void *)(param_1 + 0x7c),0x8000);
  FUN_00ccbbb0(*(long *)(*(long *)(param_1 + 0x70) + 0x110) + (long)param_2,param_1 + 0x30);
  return;
}


