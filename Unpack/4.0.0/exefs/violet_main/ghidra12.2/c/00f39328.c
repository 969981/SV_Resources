/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f39328; name: FUN_00f39328
 */


void FUN_00f39328(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  void *__src;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_047d8da8;
  plVar3 = *(long **)(param_1 + 0x10e8);
  lVar4 = *plVar3;
  if (*(long *)(lVar4 + 0x38) != *(long *)(lVar4 + 0x30)) {
    lVar5 = 0;
    uVar6 = 0;
    lVar7 = 0x20;
    do {
      if (*(char *)(*(long *)(lVar4 + 0x30) + lVar7) != '\0') {
        lVar4 = *(long *)(*(long *)(param_1 + 0x1078) + uVar6 * 8);
        pcVar2 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar4 + 0x70) + 0x110),lVar4 + 0x30)
        ;
        if (*pcVar2 == '\0' || *(long *)(pcVar2 + 8) == 0) {
          __src = (void *)0x0;
        }
        else {
          if (*(long *)(*(long *)(pcVar2 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_buffer","Map",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                       ,0x31);
          }
          __src = (void *)(**(code **)puVar1)();
        }
        memcpy((void *)(*(long *)(param_1 + 0x10b0) + lVar5),__src,0x4000);
        FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar4 + 0x70) + 0x110),lVar4 + 0x30);
        plVar3 = *(long **)(param_1 + 0x10e8);
      }
      lVar4 = *plVar3;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x4000;
      lVar7 = lVar7 + 0x30;
    } while (uVar6 < (ulong)((*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x30) >> 4) *
                            -0x5555555555555555));
  }
  return;
}


