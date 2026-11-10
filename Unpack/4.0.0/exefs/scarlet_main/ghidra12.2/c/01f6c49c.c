/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6c49c; name: FUN_01f6c49c
 */


void FUN_01f6c49c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  puVar3 = PTR_DAT_047d4c98;
  if (*(int *)((long)param_1 + 0x44) == 2) {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    puVar5 = PTR_DAT_047d4ca8;
    puVar4 = PTR_DAT_047d4ca0;
    plVar1 = param_1 + 9;
    uVar7 = *(undefined8 *)PTR_DAT_047d4ca0;
    *(undefined8 *)PTR_DAT_047d4ca8 = uVar7;
    uVar8 = FUN_01e9e4d0(uVar7,plVar1);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar7 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar7;
    FUN_0157f7bc(uVar7,plVar1);
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar7 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar7;
    FUN_0157f828(uVar7,plVar1);
  }
  else {
    if (*(int *)((long)param_1 + 0x44) != 1) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 8);
    if (uVar2 - 2 < 3) {
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      puVar5 = PTR_DAT_047d4ca8;
      puVar4 = PTR_DAT_047d4ca0;
      uVar7 = *(undefined8 *)PTR_DAT_047d4ca0;
      *(undefined8 *)PTR_DAT_047d4ca8 = uVar7;
      uVar8 = FUN_01e9e4d0(uVar7,param_1 + 9);
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      uVar7 = *(undefined8 *)puVar4;
      *(undefined8 *)puVar5 = uVar7;
      FUN_0157f828(uVar7,param_1 + 9);
    }
    else if (1 < uVar2) {
      if (uVar2 != 5) {
        return;
      }
      (**(code **)(*param_1 + 0x70))(param_1);
      puVar3 = PTR_DAT_047d4c98;
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      puVar5 = PTR_DAT_047d4ca8;
      puVar4 = PTR_DAT_047d4ca0;
      uVar7 = *(undefined8 *)PTR_DAT_047d4ca0;
      *(undefined8 *)PTR_DAT_047d4ca8 = uVar7;
      uVar8 = FUN_017d1984(uVar7,param_1 + 9);
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      uVar7 = *(undefined8 *)puVar4;
      *(undefined8 *)puVar5 = uVar7;
      FUN_017d1bd8(uVar7,param_1 + 9,1);
      uVar9 = 2;
      goto LAB_01f6c560;
    }
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  uVar9 = 3;
LAB_01f6c560:
  *(undefined4 *)((long)param_1 + 0x44) = uVar9;
  return;
}


