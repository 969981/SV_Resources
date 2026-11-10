/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de09a8; name: FUN_01de09a8
 */


void FUN_01de09a8(long param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *local_18;
  
  if (param_3 != (long *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 0x1a8);
    plVar1 = param_3 + 5;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_18 = param_3;
    if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_014e63f0(uVar6,&local_18,6,param_2,0);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 5;
      do {
        lVar4 = *plVar1;
        iVar5 = (int)lVar4 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    FUN_01195854();
    FUN_014e6ddc(*(undefined8 *)(param_1 + 0x1a8),6,param_2,0);
    uVar6 = *(undefined8 *)(param_1 + 0x1a8);
    if ((*(char *)(param_1 + 0x1714) == '\0') ||
       (iVar5 = FUN_014e94fc(param_1,1,0,param_2), iVar5 != 2)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 2;
    }
    FUN_014e56f4(uVar6,6,param_2,uVar7,0);
  }
  return;
}


