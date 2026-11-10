/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc78c0; name: FUN_01dc78c0
 */


void FUN_01dc78c0(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long *local_48;
  long *local_28;
  
  if (param_2 == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(long **)(param_1 + 0x48);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar7 == -1) goto LAB_01dc79f4;
    }
    FUN_0152f420(uVar10,&local_28,param_3,param_4);
    if (local_28 == (long *)0x0) {
      return;
    }
    plVar1 = local_28 + 5;
    do {
      iVar4 = (int)*plVar1;
      iVar5 = iVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar6 = local_28;
    } while (cVar2 != '\0');
  }
  else {
    if ((int)param_3 == 0) {
      return;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    local_48 = *(long **)(param_1 + 0x48);
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 5;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar7 == -1) {
LAB_01dc79f4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    iVar4 = (int)param_3 + -1;
    uVar8 = FUN_01dc71b0(*(undefined8 *)(param_1 + 0x40),iVar4,param_4);
    uVar9 = FUN_01dc71d4(*(undefined8 *)(param_1 + 0x40),iVar4,param_4);
    FUN_0152f420(uVar10,&local_48,uVar8,uVar9);
    if (local_48 == (long *)0x0) {
      return;
    }
    plVar1 = local_48 + 5;
    do {
      iVar4 = (int)*plVar1;
      iVar5 = iVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar6 = local_48;
    } while (cVar2 != '\0');
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  else if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


