/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a80c3c; name: FUN_00a80c3c
 */


void FUN_00a80c3c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_38;
  long *local_30;
  undefined8 local_28;
  
  if (((*PTR_DAT_047d8550 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  lVar9 = *(long *)PTR_DAT_047d8558;
  *(long *)PTR_DAT_047d8560 = lVar9;
  lVar9 = *(long *)(lVar9 + 0x140);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar5 = *plVar2;
      iVar7 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_00a80e20;
  }
  *(long *)(param_1 + 0x30) = lVar9;
  FUN_00a6a108(lVar9);
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x27c) = 5;
  FUN_0119544c();
  FUN_01df0f30(*(undefined8 *)(param_1 + 0x30),0,0);
  FUN_01df05ac(&local_30,*(undefined8 *)(param_1 + 0x30));
  plVar8 = local_30;
  FUN_015d81e0(local_30[6],0);
  FUN_01decf1c(plVar8);
  FUN_01df060c(&local_38,local_30);
  local_28 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_014a3154(&local_28);
  uVar6 = local_38;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  FUN_014a3154(&local_38);
  FUN_0187066c(*(long *)(param_1 + 0x30),0,*(int *)(*(long *)(param_1 + 0x30) + 0x298) == 0,0,0);
  if (local_30 != (long *)0x0) {
    plVar8 = local_30 + 5;
    do {
      lVar9 = *plVar8;
      iVar7 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
LAB_00a80e20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


