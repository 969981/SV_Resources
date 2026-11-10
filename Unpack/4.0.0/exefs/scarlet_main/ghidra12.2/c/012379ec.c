/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012379ec; name: FUN_012379ec
 */


uint FUN_012379ec(char *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *local_28;
  long *local_8;
  
  cVar2 = *param_1;
  lVar7 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 != 0)) {
      plVar6 = (long *)(lVar8 + lVar7 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_8 = (long *)*param_4;
      *param_4 = 0;
      uVar5 = (*param_2)(plVar6,&local_8);
      if (local_8 != (long *)0x0) {
        lVar7 = local_8[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*local_8 + 0x50))();
        }
        else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      goto LAB_01237a4c;
    }
  }
  else {
    if (cVar2 == '\x03') {
      lVar7 = *(long *)(param_1 + 8);
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar9 = *(short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar9) {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_01237d00;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01237d00:
            bVar4 = false;
          }
          if (bVar4) {
            if (*(long *)(lVar7 + 0x10) != 0) {
              local_8 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
              plVar6 = (long *)*param_4;
              *param_4 = 0;
              local_28 = plVar6;
              uVar5 = FUN_01b9facc(&local_8,param_2,param_3,&local_28);
              if (plVar6 != (long *)0x0) {
                lVar7 = plVar6[6];
                psVar1 = (short *)(lVar7 + 0x1a);
                do {
                  sVar9 = *psVar1;
                  cVar2 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar4) {
                    *psVar1 = sVar9 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (sVar9 == 1) {
                  *(undefined8 *)(lVar7 + 0x10) = 0;
                  (**(code **)(*plVar6 + 0x50))(plVar6);
                }
                else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
              }
              FUN_00c7f318(&local_8);
              goto LAB_01237cb8;
            }
            break;
          }
          sVar9 = sVar3;
        } while (sVar3 != 0);
      }
      local_8 = (long *)0x0;
      FUN_00c7f318(&local_8);
      uVar5 = 0;
LAB_01237cb8:
      return uVar5 & 1;
    }
    if (cVar2 == '\x01') {
      if (*(long *)(param_1 + 8) == 0) {
        uVar5 = 0;
      }
      else {
        plVar6 = (long *)(*(long *)(param_1 + 8) + lVar7);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar6);
        }
        local_8 = (long *)*param_4;
        *param_4 = 0;
        uVar5 = (*param_2)(plVar6,&local_8);
        if (local_8 != (long *)0x0) {
          lVar7 = local_8[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*local_8 + 0x50))();
          }
          else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      return uVar5 & 1;
    }
    if (cVar2 == '\0') {
      if (*(long *)(param_1 + 8) == 0) {
        uVar5 = 0;
      }
      else {
        plVar6 = (long *)(*(long *)(param_1 + 8) + lVar7);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar6);
        }
        local_8 = (long *)*param_4;
        *param_4 = 0;
        uVar5 = (*param_2)(plVar6,&local_8);
        if (local_8 != (long *)0x0) {
          lVar7 = local_8[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*local_8 + 0x50))();
          }
          else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      return uVar5 & 1;
    }
  }
  uVar5 = 0;
LAB_01237a4c:
  return uVar5 & 1;
}


