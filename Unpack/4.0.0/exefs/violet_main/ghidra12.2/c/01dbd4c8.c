/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbd4c8; name: FUN_01dbd4c8
 */


void FUN_01dbd4c8(long *param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long *local_38;
  
  if (*param_1 != 0) {
    uVar7 = FUN_00cf4c90(*param_1,2);
    if ((uVar7 & 1) != 0) {
      uVar6 = FUN_00e677bc(*param_1);
      plVar8 = (long *)*param_1;
      local_38 = plVar8;
      if (plVar8 == (long *)0x0) {
        FUN_00e674ac(&local_38,param_2,1);
      }
      else {
        plVar1 = plVar8 + 5;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar5 + 1;
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
        FUN_00e674ac(&local_38,param_2,1);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 5;
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
            (**(code **)(*plVar8 + 0x10))(plVar8);
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
      FUN_00e679bc(*param_1,uVar6 & 1);
      return;
    }
  }
  return;
}


