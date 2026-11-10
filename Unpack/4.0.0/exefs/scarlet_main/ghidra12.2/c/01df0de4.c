/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df0de4; name: FUN_01df0de4
 */


void FUN_01df0de4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_30;
  long *local_28;
  undefined8 local_8;
  
  FUN_01967b00(&local_8);
  plVar7 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
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
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01df0ee8;
  }
  *(undefined8 *)(param_1 + 0x30) = local_8;
  FUN_0119543c(local_8,7,1);
  FUN_01df0f30(*(undefined8 *)(param_1 + 0x30),0,1);
  FUN_01df05ac(&local_28,*(undefined8 *)(param_1 + 0x30));
  FUN_015d8100(local_28,5);
  FUN_01df060c(&local_30,local_28);
  local_8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_014a3154(&local_8);
  uVar6 = local_30;
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  FUN_014a3154(&local_30);
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_0187066c(*(undefined8 *)(param_1 + 0x30),0,1,0,0);
  if (local_28 != (long *)0x0) {
    plVar7 = local_28 + 5;
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
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
LAB_01df0ee8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


