/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01defbfc; name: FUN_01defbfc
 */


bool FUN_01defbfc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  long local_30 [2];
  
  iVar5 = FUN_01def898(*(undefined8 *)(param_1 + 0x30));
  if (iVar5 == 3) {
    FUN_01195bb4(local_30,*(undefined8 *)(param_1 + 0x30),3);
    if (local_30[0] == 0) {
      return false;
    }
    if (*(short *)(local_30[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_30[0] + 0x1a);
      sVar7 = *(short *)(local_30[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01defc6c;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01defc6c:
          bVar4 = false;
        }
        if (bVar4) {
          plVar8 = (long *)0x0;
          if (*(long *)(local_30[0] + 0x10) != 0) {
            plVar8 = (long *)(*(long *)(local_30[0] + 0x10) + -0x28);
          }
          goto LAB_01defc94;
        }
        sVar7 = sVar2;
      } while (sVar2 != 0);
    }
    plVar8 = (long *)0x0;
LAB_01defc94:
    psVar1 = (short *)(local_30[0] + 0x18);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      FUN_0116e168();
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar8 != (long *)0x0) {
      iVar5 = FUN_01dcd22c(plVar8);
      lVar6 = plVar8[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar7 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar7 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
        return iVar5 == 1;
      }
      if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return iVar5 == 1;
    }
  }
  return false;
}


