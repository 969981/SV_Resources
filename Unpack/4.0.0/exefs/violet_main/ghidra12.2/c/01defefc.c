/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01defefc; name: FUN_01defefc
 */


bool FUN_01defefc(long param_1)

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
  
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar6 = FUN_01def898();
    if (iVar6 == 3) {
      return true;
    }
    if (iVar6 == 1) {
      lVar8 = FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
      return lVar8 != 0;
    }
    if ((iVar6 == 0) && (FUN_01195bb4(local_30,*(undefined8 *)(param_1 + 0x30),0), local_30[0] != 0)
       ) {
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
            if (cVar4 != '\0') goto LAB_01deffb0;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01deffb0:
            bVar5 = false;
          }
          if (bVar5) {
            plVar10 = (long *)0x0;
            if (*(long *)(local_30[0] + 0x10) != 0) {
              plVar10 = (long *)(*(long *)(local_30[0] + 0x10) + -0x28);
            }
            goto LAB_01deffd8;
          }
          sVar9 = sVar2;
        } while (sVar2 != 0);
      }
      plVar10 = (long *)0x0;
LAB_01deffd8:
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
        if (uVar7 >> 0x20 == 0) {
          bVar5 = false;
        }
        else {
          lVar8 = FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
          bVar5 = lVar8 != 0;
        }
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
  }
  return false;
}


