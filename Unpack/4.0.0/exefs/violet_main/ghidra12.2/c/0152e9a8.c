/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152e9a8; name: FUN_0152e9a8
 */


void FUN_0152e9a8(long param_1,uint param_2,uint param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *local_50;
  long *local_48;
  
  if ((param_2 < 0x21) && (param_3 < 0x1e)) {
    if (*param_4 == 0) {
      FUN_0152ebc8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
      return;
    }
    plVar7 = *(long **)(param_1 + 0x948);
    local_48 = plVar7;
    if (plVar7 == (long *)0x0) {
      uVar6 = FUN_00f1386c(param_1,param_2,param_3,&local_48,1);
    }
    else {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_0152eb78;
      uVar6 = FUN_00f1386c(param_1,param_2,param_3,&local_48,1);
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
        do {
          lVar5 = *plVar1;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        else if ((int)lVar5 == 0) goto LAB_0152eba0;
      }
    }
    if ((uVar6 & 1) != 0) {
      FUN_0152ebc8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    }
    param_4 = (long *)*param_4;
    local_50 = param_4;
    if (param_4 == (long *)0x0) {
      FUN_0152ee44(param_1,&local_50,param_2,param_3);
    }
    else {
      plVar7 = param_4 + 5;
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) {
LAB_0152eb78:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      FUN_0152ee44(param_1,&local_50,param_2,param_3);
      if (param_4 != (long *)0x0) {
        plVar7 = param_4 + 5;
        do {
          lVar5 = *plVar7;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *(int *)plVar7 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0152eb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_4 + 0x10))(param_4);
          return;
        }
        if ((int)lVar5 == 0) {
LAB_0152eba0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


