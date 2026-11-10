/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c0938; name: FUN_014c0938
 */


void FUN_014c0938(long param_1,undefined8 *param_2,undefined4 param_3,short param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_28;
  
  sVar6 = FUN_014c0c04(param_1,param_3);
  FUN_014c0d14(param_1,param_3,0);
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar8 = *(undefined8 *)PTR_DAT_047d8ac8;
  local_60 = 0x2ae056de5b5ebc92;
  pcStack_58 = "btl_attack";
  local_50 = 10;
  local_48 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar8;
  FUN_01286898(&local_28,uVar8,&local_60,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_00e388b8(local_28,sVar6 + param_4 * 4,*(undefined8 *)(param_1 + 0x40));
  uVar8 = *param_2;
  plVar2 = *(long **)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    plVar9 = plVar2 + 5;
    do {
      lVar10 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar10 == -1) goto LAB_014c0bfc;
  }
  lVar10 = *(long *)(lVar3 + 0x118);
  *(undefined4 *)(lVar3 + 0xcc) = 0;
  *(undefined2 *)(lVar3 + 0xd0) = 0;
  *(undefined4 *)(lVar3 + 0xd4) = 0;
  *(undefined4 *)(lVar3 + 0xdc) = 0;
  FUN_0109c76c(lVar3,plVar2);
  if (*(char *)(lVar10 + 0x54) != '\0') {
    **(undefined2 **)(lVar10 + 0x30) = 0;
    *(undefined2 *)(lVar10 + 0x52) = 0;
  }
  FUN_0109c334(lVar3,lVar10,plVar2,0,0);
  plVar9 = *(long **)(lVar3 + 0x118);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar3 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar3 == -1) {
LAB_014c0bfc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_015514e4(uVar8,plVar9);
  plVar1 = plVar9 + 5;
  do {
    lVar3 = *plVar1;
    iVar7 = (int)lVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else if ((int)lVar3 == 0) goto LAB_014c0b90;
  plVar9 = plVar2 + 5;
  do {
    lVar3 = *plVar9;
    iVar7 = (int)lVar3 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *(int *)plVar9 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  else if ((int)lVar3 == 0) goto LAB_014c0b90;
  if (local_28 != (long *)0x0) {
    plVar2 = local_28 + 5;
    do {
      lVar3 = *plVar2;
      iVar7 = (int)lVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar3 == 0) {
LAB_014c0b90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


