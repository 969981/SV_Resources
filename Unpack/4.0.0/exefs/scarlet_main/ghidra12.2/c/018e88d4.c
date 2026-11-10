/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e88d4; name: FUN_018e88d4
 */


void FUN_018e88d4(char *param_1,code *param_2,ulong param_3,undefined4 *param_4,undefined8 *param_5,
                 undefined1 *param_6,undefined4 *param_7)

{
  short *psVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  undefined8 local_28;
  
  cVar3 = *param_1;
  lVar8 = (long)param_3 >> 1;
  if (cVar3 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      plVar7 = (long *)(*(long *)(param_1 + 8) + lVar8);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar7);
      }
      plVar9 = (long *)*param_5;
      uVar2 = *param_4;
      *param_5 = 0;
      (*param_2)(plVar7,uVar2,(long)register0x00000008 + -0x18,*param_6,*param_7);
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 5;
        do {
          lVar8 = *plVar7;
          iVar6 = (int)lVar8 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *(int *)plVar7 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  }
  if (cVar3 != '\x03') {
    if (cVar3 == '\x02') {
      if ((*(long *)(param_1 + 8) != 0) &&
         (lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar10 != 0)) {
        plVar7 = (long *)(lVar10 + lVar8 + -0x28);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar7);
        }
        plVar9 = (long *)*param_5;
        uVar2 = *param_4;
        *param_5 = 0;
        (*param_2)(plVar7,uVar2,(long)register0x00000008 + -0x18,*param_6,*param_7);
        if (plVar9 != (long *)0x0) {
          plVar7 = plVar9 + 5;
          do {
            lVar8 = *plVar7;
            iVar6 = (int)lVar8 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
          else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      return;
    }
    if (cVar3 != '\0') {
      return;
    }
    if (*(long *)(param_1 + 8) != 0) {
      plVar7 = (long *)(*(long *)(param_1 + 8) + lVar8);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar7);
      }
      plVar9 = (long *)*param_5;
      uVar2 = *param_4;
      *param_5 = 0;
      (*param_2)(plVar7,uVar2,(long)register0x00000008 + -0x18,*param_6,*param_7);
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 5;
        do {
          lVar8 = *plVar7;
          iVar6 = (int)lVar8 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *(int *)plVar7 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  }
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar11 = *(short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_018e8b88;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018e8b88:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar7 = (long *)*param_5;
          uVar2 = *param_4;
          *param_5 = 0;
          local_28 = plVar7;
          FUN_01b32734((long)register0x00000008 + -8,param_2,param_3,uVar2,&local_28,*param_6,
                       *param_7);
          if (plVar7 != (long *)0x0) {
            plVar9 = plVar7 + 5;
            do {
              lVar8 = *plVar9;
              iVar6 = (int)lVar8 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
            else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        break;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  FUN_01b326bc((long)register0x00000008 + -8);
  return;
}


