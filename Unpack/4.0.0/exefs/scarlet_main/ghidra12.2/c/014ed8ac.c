/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ed8ac; name: FUN_014ed8ac
 */


void FUN_014ed8ac(void)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  long *local_28;
  long *local_8;
  
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d8ac8;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar7;
  local_58 = &DAT_ce02c237861a2a94;
  pcStack_50 = "strinput";
  local_48 = 8;
  FUN_00d8fb98(auStack_40,&local_58);
  local_60 = 0xb9e4e16c5c7aa083;
  FUN_00f1203c(&local_8,uVar7,auStack_40,&local_60,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  cVar4 = FUN_0168d1c0();
  if ((byte)(cVar4 - 1U) < 10) {
    uVar6 = *(undefined4 *)(&DAT_03d2fe30 + (long)(char)(cVar4 - 1U) * 4);
  }
  else {
    uVar6 = 0xc;
  }
  local_68 = local_8;
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 5;
    do {
      lVar3 = *plVar1;
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = (int)lVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  FUN_014edb40(&local_68,&local_70,&local_78,1,uVar6,1);
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 5;
    do {
      lVar3 = *plVar1;
      iVar5 = (int)lVar3 + -1;
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = iVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar3 == 0) goto LAB_014eda64;
  }
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 5;
    do {
      lVar3 = *plVar1;
      iVar5 = (int)lVar3 + -1;
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = iVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar3 == 0) goto LAB_014eda64;
  }
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 5;
    do {
      lVar3 = *plVar1;
      iVar5 = (int)lVar3 + -1;
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = iVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar3 == 0) goto LAB_014eda64;
  }
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 5;
    do {
      lVar3 = *plVar1;
      iVar5 = (int)lVar3 + -1;
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = iVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_8 + 0x10))();
    }
    else if ((int)lVar3 == 0) {
LAB_014eda64:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


