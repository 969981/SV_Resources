/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b24cc; name: FUN_016b24cc
 */


undefined8 FUN_016b24cc(long param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  undefined8 uVar9;
  long *plVar10;
  
  plVar10 = (long *)(param_1 + 0x30);
  plVar6 = (long *)*plVar10;
  if (plVar6 != (long *)0x0) {
    bVar4 = param_2 <= (ulong)plVar6[4];
    plVar5 = plVar10;
    if (bVar4) {
      plVar5 = plVar6;
    }
    while (plVar6 = (long *)plVar6[!bVar4], plVar6 != (long *)0x0) {
      bVar4 = param_2 <= (ulong)plVar6[4];
      if (bVar4) {
        plVar5 = plVar6;
      }
    }
    if ((plVar5 != plVar10) && ((ulong)plVar5[4] <= param_2)) {
      if ((*(long *)(plVar5[5] + 0x28) == 0) ||
         (((*(short *)(*(long *)(plVar5[5] + 0x28) + 0x1a) == 0 ||
           (*(long *)(plVar5[5] + 0x28) == 0)) ||
          (*(short *)(*(long *)(plVar5[5] + 0x28) + 0x1a) == 0)))) {
        uVar9 = 0;
      }
      else {
        lVar7 = *(long *)(plVar5[5] + 0x28);
        if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
          plVar6 = (long *)0x0;
        }
        else {
          psVar1 = (short *)(lVar7 + 0x1a);
          sVar8 = *(short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            if (sVar2 == sVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_016b2744;
              bVar4 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_016b2744:
              bVar4 = false;
            }
            if (bVar4) {
              plVar6 = (long *)0x0;
              if (*(long *)(lVar7 + 0x10) != 0) {
                plVar6 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
              }
              break;
            }
            plVar6 = (long *)0x0;
            sVar8 = sVar2;
          } while (sVar2 != 0);
        }
        uVar9 = 1;
        (**(code **)(*plVar6 + 0x120))(plVar6,1);
        if (plVar6 != (long *)0x0) {
          lVar7 = plVar6[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))(plVar6);
          }
          else if (sVar8 == 0) {
LAB_016b26e8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          uVar9 = 1;
        }
      }
      lVar7 = *(long *)(plVar5[5] + 0x28);
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar8) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_016b2690;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_016b2690:
            bVar4 = false;
          }
          if (bVar4) {
            lVar7 = *(long *)(lVar7 + 0x10);
            if (lVar7 != 0) {
              plVar6 = (long *)(lVar7 + -0x28);
              (**(code **)(*(long *)(lVar7 + -0x28) + 0x120))(plVar6,1);
              lVar7 = *(long *)(lVar7 + 8);
              psVar1 = (short *)(lVar7 + 0x1a);
              do {
                sVar8 = *psVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar4) {
                  *psVar1 = sVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar8 != 1) {
                if (sVar8 != 0) break;
                goto LAB_016b26e8;
              }
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*plVar6 + 0x50))(plVar6);
            }
            break;
          }
          sVar8 = sVar2;
        } while (sVar2 != 0);
      }
      plVar6 = *(long **)(param_1 + 0x30);
      if (plVar6 == (long *)0x0) {
        return uVar9;
      }
      bVar4 = param_2 <= (ulong)plVar6[4];
      plVar5 = plVar10;
      if (bVar4) {
        plVar5 = plVar6;
      }
      while (plVar6 = (long *)plVar6[!bVar4], plVar6 != (long *)0x0) {
        bVar4 = param_2 <= (ulong)plVar6[4];
        if (bVar4) {
          plVar5 = plVar6;
        }
      }
      if (plVar5 == plVar10) {
        return uVar9;
      }
      if (param_2 < (ulong)plVar5[4]) {
        return uVar9;
      }
      FUN_01484e2c(param_1 + 0x28);
      return uVar9;
    }
  }
  return 0;
}


