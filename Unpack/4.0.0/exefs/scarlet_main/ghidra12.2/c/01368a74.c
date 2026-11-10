/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01368a74; name: FUN_01368a74
 */


undefined8 FUN_01368a74(long param_1,int *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_28;
  
  *(undefined1 *)(param_1 + 0x9f) = 1;
  iVar3 = *param_2;
  if (iVar3 == 0) {
    plVar6 = *(long **)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01368b70;
    }
    plVar6 = *(long **)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = 0;
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_01368b70:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    local_28 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    FUN_017b1314(&local_28);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(code **)(param_1 + 0x50) = FUN_01a53720;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        return 0;
      }
      FUN_013697e0(*(undefined8 *)(param_1 + 0x1a8));
      iVar3 = *param_2;
      uVar7 = 1;
      goto LAB_01368ae8;
    }
    uVar8 = FUN_0136a15c(param_1);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = 0;
  iVar3 = *param_2;
LAB_01368ae8:
  *param_2 = iVar3 + 1;
  return uVar7;
}


