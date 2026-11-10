/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ebe1b0; name: FUN_00ebe1b0
 */


void FUN_00ebe1b0(long *param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  void *__dest;
  ulong uVar6;
  ushort *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar8 = (param_1[1] - *param_1 >> 3) * 0x38e38e39;
  if ((int)uVar8 != 0) {
    uVar6 = (ulong)(int)*param_3;
    puVar1 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (4 - uVar6)));
    uVar3 = *(uint *)(*param_1 + 0x40);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = *(uint *)((long)puVar1 + (ulong)*puVar1) / uVar3;
    }
    lVar9 = 0;
    while( true ) {
      puVar7 = (ushort *)((long)param_3 - (long)(int)uVar6);
      if ((*puVar7 < 5) || (uVar6 = (ulong)puVar7[2], uVar6 == 0)) {
        lVar11 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_3 + uVar6);
        lVar11 = (long)puVar1 + (ulong)*puVar1;
      }
      lVar2 = *param_1 + lVar9;
      FUN_00ebd51c(lVar2,param_2,uVar4,1);
      lVar10 = *(long *)(lVar2 + 0x38);
      pcVar5 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x110),lVar10 + 0x30)
      ;
      if (*pcVar5 == '\0' || *(long *)(pcVar5 + 8) == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (*(long *)(*(long *)(pcVar5 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_buffer","Map",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                     ,0x31);
        }
        __dest = (void *)(**(code **)PTR_DAT_047d8da8)();
      }
      memcpy(__dest,(void *)(lVar11 + 4),(ulong)(*(int *)(lVar2 + 0x40) * uVar4));
      FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x110),lVar10 + 0x30);
      if ((uVar8 & 0xffffffff) * 0x48 + -0x48 == lVar9) break;
      uVar6 = (ulong)*param_3;
      lVar9 = lVar9 + 0x48;
    }
  }
  return;
}


