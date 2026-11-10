/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdfe2c; name: FUN_00fdfe2c
 */


void FUN_00fdfe2c(long param_1,long *param_2)

{
  long lVar1;
  size_t *psVar2;
  char *pcVar3;
  void *__src;
  
  lVar1 = *param_2;
  psVar2 = (size_t *)param_2[1];
  pcVar3 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x110),param_1 + 0x30);
  if (*pcVar3 == '\0' || *(long *)(pcVar3 + 8) == 0) {
    __src = (void *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar3 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    __src = (void *)(**(code **)PTR_DAT_047d8da8)();
  }
  memcpy(*(void **)(lVar1 + 0x98),__src,*psVar2);
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x110),param_1 + 0x30);
  return;
}


