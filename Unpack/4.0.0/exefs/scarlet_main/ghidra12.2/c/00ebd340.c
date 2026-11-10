/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ebd340; name: FUN_00ebd340
 */


void FUN_00ebd340(long *param_1,undefined8 param_2,int *param_3,uint param_4)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  void *__dest;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 7) ||
     (uVar7 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar7 == 0)) {
    lVar9 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_3 + uVar7);
    lVar9 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar7 = (param_1[1] - *param_1 >> 3) * 0x38e38e39;
  if ((int)uVar7 != 0) {
    puVar1 = (uint *)(lVar9 + 4 + (ulong)param_4 * 4);
    piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
    puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
    uVar4 = *(uint *)(*param_1 + 0x40);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = *(uint *)((long)puVar1 + (ulong)*puVar1) / uVar4;
    }
    lVar11 = 0;
    do {
      puVar1 = (uint *)(lVar9 + 4 + (ulong)param_4 * 4);
      piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar8 == 0)) {
        lVar12 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar2 + uVar8);
        lVar12 = (long)puVar1 + (ulong)*puVar1;
      }
      lVar3 = *param_1 + lVar11;
      FUN_00ebd51c(lVar3,param_2,uVar5,1);
      lVar10 = *(long *)(lVar3 + 0x38);
      pcVar6 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x110),lVar10 + 0x30)
      ;
      if (*pcVar6 == '\0' || *(long *)(pcVar6 + 8) == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (*(long *)(*(long *)(pcVar6 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_buffer","Map",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                     ,0x31);
        }
        __dest = (void *)(**(code **)PTR_DAT_047d8da8)();
      }
      memcpy(__dest,(void *)(lVar12 + 4),(ulong)(*(int *)(lVar3 + 0x40) * uVar5));
      FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x110),lVar10 + 0x30);
      lVar11 = lVar11 + 0x48;
      param_4 = param_4 + 1;
    } while (((uVar7 & 0xffffffff) * 8 + (uVar7 & 0xffffffff)) * 8 != lVar11);
  }
  return;
}


