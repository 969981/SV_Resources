/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193bee0; name: FUN_0193bee0
 */


void FUN_0193bee0(char *param_1,code *param_2,ulong param_3,undefined1 *param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  short *psVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  short sVar11;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  undefined8 local_28;
  
  cVar2 = *param_1;
  lVar7 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 != 0)) {
      plVar6 = (long *)(lVar8 + lVar7 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      plVar9 = (long *)*param_5;
      uVar3 = *param_4;
      *param_5 = 0;
      local_38 = (long *)*param_6;
      local_30 = (long *)param_6[1];
      local_28 = param_6[2];
      plVar10 = (long *)param_6[3];
      param_6[3] = 0;
      (*param_2)(plVar6,uVar3,(long)register0x00000008 + -0x18,&local_38);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      if (plVar9 != (long *)0x0) {
        lVar7 = plVar9[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))();
        }
        else if (sVar11 == 0) {
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
  if (cVar2 != '\x03') {
    if (cVar2 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 8) + lVar7);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar6);
        }
        plVar9 = (long *)*param_5;
        uVar3 = *param_4;
        *param_5 = 0;
        local_38 = (long *)*param_6;
        local_30 = (long *)param_6[1];
        local_28 = param_6[2];
        plVar10 = (long *)param_6[3];
        param_6[3] = 0;
        (*param_2)(plVar6,uVar3,(long)register0x00000008 + -0x18,&local_38);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        if (plVar9 != (long *)0x0) {
          lVar7 = plVar9[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))();
          }
          else if (sVar11 == 0) {
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
    if (cVar2 != '\0') {
      return;
    }
    if (*(long *)(param_1 + 8) != 0) {
      plVar6 = (long *)(*(long *)(param_1 + 8) + lVar7);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      plVar9 = (long *)*param_5;
      uVar3 = *param_4;
      *param_5 = 0;
      local_38 = (long *)*param_6;
      local_30 = (long *)param_6[1];
      local_28 = param_6[2];
      plVar10 = (long *)param_6[3];
      param_6[3] = 0;
      (*param_2)(plVar6,uVar3,(long)register0x00000008 + -0x18,&local_38);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      if (plVar9 != (long *)0x0) {
        lVar7 = plVar9[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))();
        }
        else if (sVar11 == 0) {
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
  lVar7 = *(long *)(param_1 + 8);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar11 = *(short *)(lVar7 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_0193c258;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0193c258:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar9 = (long *)*param_5;
          local_28 = *(long *)(lVar7 + 0x10) + -0x28;
          uVar3 = *param_4;
          *param_5 = 0;
          local_50 = *param_6;
          uStack_48 = param_6[1];
          local_40 = param_6[2];
          plVar6 = (long *)param_6[3];
          param_6[3] = 0;
          local_38 = plVar6;
          local_30 = plVar9;
          FUN_01b9fc28(&local_28,param_2,param_3,uVar3,&local_30,&local_50);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          if (plVar9 != (long *)0x0) {
            lVar7 = plVar9[6];
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar11 = *psVar1;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (sVar11 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))(plVar9);
            }
            else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          goto LAB_0193c20c;
        }
        break;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  local_28 = 0;
LAB_0193c20c:
  FUN_00c7f318(&local_28);
  return;
}


