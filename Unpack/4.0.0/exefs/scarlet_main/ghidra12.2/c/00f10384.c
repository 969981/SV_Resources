/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f10384; name: FUN_00f10384
 */


void FUN_00f10384(long *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_3 < *(uint *)(param_2 + 0x88)) {
    uVar1 = *(long *)(param_2 + 0x80) + (long)(int)param_3;
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x48) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                     (uVar1 & 0x1ff) * 8);
    *param_1 = lVar8;
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar6;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  else {
    *param_1 = 0;
  }
  if (*param_1 == 0) {
    *param_1 = 0;
    return;
  }
  plVar7 = (long *)(*(long *)(param_2 + 0x48) +
                   (*(ulong *)(param_2 + 0x80) >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_2 + 0x50) == *(long *)(param_2 + 0x48)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar7 + (*(ulong *)(param_2 + 0x80) & 0x1ff) * 8;
  }
  if (param_3 != 0) {
    uVar1 = (lVar8 - *plVar7 >> 3) + (long)(int)param_3;
    if ((long)uVar1 < 1) {
      uVar9 = 0x1ff - uVar1;
      uVar1 = 0x3fe - uVar1;
      if (-1 < (long)uVar9) {
        uVar1 = uVar9;
      }
      plVar7 = plVar7 + -((long)uVar1 >> 9);
      lVar8 = *plVar7 + ((uVar1 & 0x1ffffffffffffe00) - uVar9) * 8 + 0xff8;
    }
    else {
      plVar7 = (long *)((long)plVar7 + (uVar1 >> 6 & 0x3fffffffffffff8));
      lVar8 = *plVar7 + (uVar1 & 0x1ff) * 8;
    }
  }
  FUN_0141be1c(param_2 + 0x40,plVar7,lVar8);
  return;
}


