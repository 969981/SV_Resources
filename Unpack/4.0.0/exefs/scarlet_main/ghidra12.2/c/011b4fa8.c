/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b4fa8; name: FUN_011b4fa8
 */


undefined8 FUN_011b4fa8(undefined8 param_1,long *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  long *local_28;
  long *local_8;
  
  uVar6 = 1;
  piVar7 = &DAT_04590dc8;
  for (piVar8 = &DAT_04586b20; *piVar8 != param_3; piVar8 = piVar8 + 0x14) {
    if (uVar6 == 0x411) goto LAB_011b5010;
    if (piVar8[10] == param_3) goto LAB_011b5000;
    uVar6 = uVar6 + 2;
  }
  uVar6 = uVar6 - 1;
LAB_011b5000:
  piVar7 = (int *)((uVar6 & 0xffffffff) * 0x28 + 0x4586b28);
LAB_011b5010:
  if (*piVar7 == 2) {
    param_2 = (long *)*param_2;
    local_28 = param_2;
    if (param_2 == (long *)0x0) {
      FUN_011b5164(param_1,&local_28);
      return 1;
    }
    plVar1 = param_2 + 5;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) goto LAB_011b5114;
    FUN_011b5164(param_1,&local_28);
    if (param_2 == (long *)0x0) {
      return 1;
    }
    plVar1 = param_2 + 5;
    do {
      iVar2 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*piVar7 != 1) {
      return 0;
    }
    param_2 = (long *)*param_2;
    local_8 = param_2;
    if (param_2 == (long *)0x0) {
      FUN_011b5388(param_1,&local_8);
      return 1;
    }
    plVar1 = param_2 + 5;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) {
LAB_011b5114:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_011b5388(param_1,&local_8);
    if (param_2 == (long *)0x0) {
      return 1;
    }
    plVar1 = param_2 + 5;
    do {
      iVar2 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar2 == 1) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  else if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return 1;
}


