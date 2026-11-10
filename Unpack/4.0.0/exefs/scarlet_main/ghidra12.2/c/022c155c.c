/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022c155c; name: FUN_022c155c
 */


void FUN_022c155c(byte *param_1,code *param_2,ulong param_3,undefined8 *param_4,undefined2 *param_5)

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
  
  if (3 < *param_1) {
    return;
  }
  lVar4 = (long)param_3 >> 1;
  switch(*param_1) {
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar7 = (long *)(*(long *)(param_1 + 8) + lVar4);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar7);
      }
      plVar6 = (long *)*param_4;
      *param_4 = 0;
      (*param_2)(plVar7,(long)register0x00000008 + -0x18,*param_5);
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
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 != 0)) {
      plVar7 = (long *)(lVar5 + lVar4 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar7);
      }
      plVar6 = (long *)*param_4;
      *param_4 = 0;
      (*param_2)(plVar7,(long)register0x00000008 + -0x18,*param_5);
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
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  case 3:
    if (*(long *)(param_1 + 8) == 0) {
      local_48 = 0;
    }
    else {
      FUN_022bfc28(&local_28);
      local_48 = local_28;
      if (local_28 != 0) {
        plVar7 = (long *)*param_4;
        *param_4 = 0;
        local_50 = plVar7;
        FUN_022c188c(&local_48,param_2,param_3,&local_50,*param_5);
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
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
    }
    FUN_022bfcb4(&local_48);
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 8) + lVar4);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar7);
    }
    plVar6 = (long *)*param_4;
    *param_4 = 0;
    (*param_2)(plVar7,(long)register0x00000008 + -0x18,*param_5);
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
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


