/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e704b0; name: FUN_01e704b0
 */


long FUN_01e704b0(long *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *local_18;
  
  if (*param_1 == 0) {
    lVar7 = 4;
  }
  else {
    bVar2 = *(byte *)(*param_2 + 0x90);
    bVar5 = FUN_01e70610();
    if ((bVar5 < bVar2) ||
       (bVar2 = *(byte *)(*param_2 + 0x90), bVar5 = FUN_01e70628(*param_1), bVar2 < bVar5)) {
      lVar7 = 1;
    }
    else {
      plVar9 = (long *)*param_2;
      local_18 = plVar9;
      if (plVar9 == (long *)0x0) {
        uVar8 = FUN_01e70304(param_1,&local_18);
      }
      else {
        plVar1 = plVar9 + 5;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        uVar8 = FUN_01e70304(param_1,&local_18);
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 5;
          do {
            lVar7 = *plVar1;
            iVar6 = (int)lVar7 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
          else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      if ((uVar8 & 1) == 0) {
        lVar7 = 3;
      }
      else {
        iVar6 = thunk_FUN_021eee50(*param_2,5);
        lVar7 = (ulong)(iVar6 != 0) << 2;
      }
    }
  }
  return lVar7;
}


