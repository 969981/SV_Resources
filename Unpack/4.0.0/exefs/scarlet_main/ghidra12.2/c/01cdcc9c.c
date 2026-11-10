/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cdcc9c; name: FUN_01cdcc9c
 */


void FUN_01cdcc9c(undefined8 *param_1,byte *param_2,code *param_3,ulong param_4,undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *local_50;
  long local_48;
  undefined8 local_28;
  
  if (3 < *param_2) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  }
  lVar4 = (long)param_4 >> 1;
  switch(*param_2) {
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      plVar7 = (long *)(*(long *)(param_2 + 8) + lVar4);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar7);
      }
      plVar6 = (long *)*param_5;
      *param_5 = 0;
      (*param_3)(plVar7,(long)register0x00000008 + -0x18);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 5;
        do {
          lVar4 = *plVar7;
          iVar3 = (int)lVar4 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *(int *)plVar7 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar5 == 0)) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      plVar7 = (long *)(lVar5 + lVar4 + -0x28);
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar7);
      }
      plVar6 = (long *)*param_5;
      *param_5 = 0;
      (*param_3)(plVar7,(long)register0x00000008 + -0x18);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 5;
        do {
          lVar4 = *plVar7;
          iVar3 = (int)lVar4 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *(int *)plVar7 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  case 3:
    if (*(long *)(param_2 + 8) == 0) {
      local_48 = 0;
    }
    else {
      FUN_0196c128(&local_28);
      local_48 = local_28;
      if (local_28 != 0) {
        plVar7 = (long *)*param_5;
        *param_5 = 0;
        local_50 = plVar7;
        FUN_01cdd078(param_1,&local_48,param_3,param_4,&local_50);
        if (plVar7 != (long *)0x0) {
          plVar6 = plVar7 + 5;
          do {
            lVar4 = *plVar6;
            iVar3 = (int)lVar4 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *(int *)plVar6 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
          else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        FUN_0196c0b0(&local_48);
        return;
      }
    }
    FUN_0196c0b0(&local_48);
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
  }
  else {
    plVar7 = (long *)(*(long *)(param_2 + 8) + lVar4);
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar7);
    }
    plVar6 = (long *)*param_5;
    *param_5 = 0;
    (*param_3)(plVar7,(long)register0x00000008 + -0x18);
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar4 = *plVar7;
        iVar3 = (int)lVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar4 == 0) {
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


