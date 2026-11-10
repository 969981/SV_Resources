/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013fdb94; name: FUN_013fdb94
 */


void FUN_013fdb94(char *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  long *local_28 [2];
  long *local_18;
  
  cVar2 = *param_1;
  lVar6 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 != 0)) {
      plVar5 = (long *)(lVar7 + lVar6 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_18 = (long *)*param_4;
      *param_4 = 0;
      (*param_2)(plVar5,&local_18);
      if (local_18 != (long *)0x0) {
        lVar6 = local_18[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_18 + 0x50))();
        }
        else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  else {
    if (cVar2 == '\x03') {
      lVar6 = *(long *)(param_1 + 8);
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar8 = *(short *)(lVar6 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar8) {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_013fde70;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_013fde70:
            bVar4 = false;
          }
          if (bVar4) {
            if (*(long *)(lVar6 + 0x10) != 0) {
              plVar5 = (long *)*param_4;
              *param_4 = 0;
              local_28[0] = plVar5;
              FUN_01b9f978(local_28 + 4,param_2,param_3,local_28);
              if (plVar5 != (long *)0x0) {
                lVar6 = plVar5[6];
                psVar1 = (short *)(lVar6 + 0x1a);
                do {
                  sVar8 = *psVar1;
                  cVar2 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar4) {
                    *psVar1 = sVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (sVar8 == 1) {
                  *(undefined8 *)(lVar6 + 0x10) = 0;
                  (**(code **)(*plVar5 + 0x50))(plVar5);
                }
                else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
              }
            }
            break;
          }
          sVar8 = sVar3;
        } while (sVar3 != 0);
      }
      FUN_00c7f318(local_28 + 4);
      return;
    }
    if (cVar2 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        plVar5 = (long *)(*(long *)(param_1 + 8) + lVar6);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar5);
        }
        local_18 = (long *)*param_4;
        *param_4 = 0;
        (*param_2)(plVar5,&local_18);
        if (local_18 != (long *)0x0) {
          lVar6 = local_18[6];
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*local_18 + 0x50))();
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      return;
    }
    if (cVar2 == '\0') {
      if (*(long *)(param_1 + 8) != 0) {
        plVar5 = (long *)(*(long *)(param_1 + 8) + lVar6);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar5);
        }
        local_18 = (long *)*param_4;
        *param_4 = 0;
        (*param_2)(plVar5,&local_18);
        if (local_18 != (long *)0x0) {
          lVar6 = local_18[6];
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*local_18 + 0x50))();
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      return;
    }
  }
  return;
}


