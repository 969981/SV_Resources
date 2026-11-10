/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019aebac; name: FUN_019aebac
 */


int FUN_019aebac(undefined8 param_1,undefined4 param_2,long *param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long *local_58;
  
  iVar9 = 0;
  iVar8 = 0;
  do {
    plVar7 = (long *)*param_3;
    local_58 = plVar7;
    if (plVar7 == (long *)0x0) {
      uVar6 = FUN_00f1386c(param_1,param_2,iVar9,&local_58,param_4 & 1);
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
      if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      uVar6 = FUN_00f1386c(param_1,param_2,iVar9,&local_58,param_4 & 1);
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
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + (uVar6 & 1);
    if (iVar9 == 0x1e) {
      return iVar8;
    }
  } while( true );
}


