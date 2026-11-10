/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df00b8; name: FUN_01df00b8
 */


bool FUN_01df00b8(long param_1)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long local_30 [2];
  
  iVar6 = FUN_01def898(*(undefined8 *)(param_1 + 0x30));
  if (iVar6 == 0) {
    FUN_01195bb4(local_30,*(undefined8 *)(param_1 + 0x30),0);
    if (local_30[0] == 0) {
      return false;
    }
    if (*(short *)(local_30[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_30[0] + 0x1a);
      sVar9 = *(short *)(local_30[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01df0138;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01df0138:
          bVar5 = false;
        }
        if (bVar5) {
          plVar10 = (long *)0x0;
          if (*(long *)(local_30[0] + 0x10) != 0) {
            plVar10 = (long *)(*(long *)(local_30[0] + 0x10) + -0x28);
          }
          goto LAB_01df0160;
        }
        sVar9 = sVar2;
      } while (sVar2 != 0);
    }
    plVar10 = (long *)0x0;
LAB_01df0160:
    psVar1 = (short *)(local_30[0] + 0x18);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      FUN_0116e168();
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar10 != (long *)0x0) {
      uVar7 = FUN_01dcd22c(plVar10);
      bVar5 = uVar7 >> 0x20 == 0;
      lVar8 = plVar10[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
        return bVar5;
      }
      if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return bVar5;
    }
  }
  return false;
}


