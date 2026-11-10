/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e674ac; name: FUN_00e674ac
 */


void FUN_00e674ac(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  tm *ptVar6;
  long *plVar7;
  long *local_40;
  time_t local_38;
  undefined8 local_18;
  
  local_18 = FUN_00e675fc();
  local_38 = FUN_00e675f4(&local_18);
  ptVar6 = localtime(&local_38);
  if (ptVar6 != (tm *)0x0) {
    local_40 = (long *)*param_1;
    if (local_40 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = local_40 + 5;
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
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar7 = local_40;
    }
    FUN_00e672f4(&local_40,param_2,ptVar6->tm_year % 100,ptVar6->tm_mon + 1,ptVar6->tm_mday,param_3)
    ;
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
      else if ((int)lVar5 == 0) {
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


