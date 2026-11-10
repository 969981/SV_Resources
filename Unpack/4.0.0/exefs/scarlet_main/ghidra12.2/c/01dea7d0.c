/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dea7d0; name: FUN_01dea7d0
 */


void FUN_01dea7d0(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *param_2;
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x28);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar7 = *(long **)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar8 = *plVar1;
      iVar5 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_01400eec(*(long *)(param_1 + 0x48),0);
  }
  FUN_01dea984(param_1,0,uVar6);
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_01400eec(*(long *)(param_1 + 0x48),1);
  }
  FUN_01dea984(param_1,1,uVar6);
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_01400eec(*(long *)(param_1 + 0x48),2);
  }
  FUN_01dea984(param_1,2,uVar6);
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_01400eec(*(long *)(param_1 + 0x48),3);
  }
  FUN_01dea984(param_1,3,uVar6);
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_01400eec(*(long *)(param_1 + 0x48),4);
  }
  FUN_01dea984(param_1,4,uVar6);
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_01400eec(*(long *)(param_1 + 0x48),5);
  }
  FUN_01dea984(param_1,5,uVar6);
  return;
}


