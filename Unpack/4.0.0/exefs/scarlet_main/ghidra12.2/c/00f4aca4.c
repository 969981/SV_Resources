/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f4aca4; name: FUN_00f4aca4
 */


void FUN_00f4aca4(long param_1)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  
  iVar2 = *(int *)(param_1 + 0x174);
  if (iVar2 == 0) {
    plVar6 = (long *)FUN_00f47d18(param_1);
    lVar7 = *plVar6;
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f4ad34;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f4ad34:
          bVar5 = false;
        }
        if (bVar5) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            return;
          }
          if (*(char *)(lVar7 + 0xf2) == '\0') {
            lVar8 = *(long *)(lVar7 + 0x70);
            psVar1 = (short *)(lVar8 + 0x1a);
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
              *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00f4aebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))();
              return;
            }
            if (sVar9 != 0) {
              return;
            }
            goto LAB_00f4ae50;
          }
          *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
          lVar8 = *(long *)(lVar7 + 0x70);
          psVar1 = (short *)(lVar8 + 0x1a);
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
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))();
          }
          else if (sVar9 == 0) goto LAB_00f4ae50;
          goto LAB_00f4ad8c;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
  }
  else if (iVar2 == 1) {
LAB_00f4ad8c:
    plVar6 = (long *)FUN_00f47d18(param_1);
    lVar7 = *plVar6;
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00f4add0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f4add0:
          bVar5 = false;
        }
        if (bVar5) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            return;
          }
          plVar6 = (long *)(lVar7 + -0x28);
          FUN_0152fbdc(plVar6);
          *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
          lVar7 = *(long *)(lVar7 + 0x70);
          psVar1 = (short *)(lVar7 + 0x1a);
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
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))(plVar6);
          }
          else if (sVar9 == 0) {
LAB_00f4ae50:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          goto LAB_00f4acf0;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
  }
  else if (iVar2 == 2) {
LAB_00f4acf0:
    *(undefined1 *)(param_1 + 0x178) = 1;
    *(undefined4 *)(param_1 + 0x170) = 1;
  }
  return;
}


