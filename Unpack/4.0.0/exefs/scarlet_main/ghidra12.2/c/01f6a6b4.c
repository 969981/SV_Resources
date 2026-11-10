/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6a6b4; name: FUN_01f6a6b4
 */


void FUN_01f6a6b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_047d4c98;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_01f6c49c(param_1);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 4) {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    puVar3 = PTR_DAT_047d4ca8;
    puVar2 = PTR_DAT_047d4ca0;
    uVar5 = *(undefined8 *)PTR_DAT_047d4ca0;
    *(undefined8 *)PTR_DAT_047d4ca8 = uVar5;
    uVar6 = FUN_0157f7bc(uVar5,param_1 + 0x48);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar5 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar5;
    FUN_0157f828(uVar5,param_1 + 0x48);
    uVar7 = 5;
  }
  else if (iVar4 == 2) {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar5 = *(undefined8 *)PTR_DAT_047d4ca0;
    *(undefined8 *)PTR_DAT_047d4ca8 = uVar5;
    uVar6 = FUN_01e9e4d0(uVar5,param_1 + 0x48);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar7 = 3;
  }
  else {
    if (iVar4 != 1) {
      return;
    }
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    puVar3 = PTR_DAT_047d4ca8;
    puVar2 = PTR_DAT_047d4ca0;
    uVar5 = *(undefined8 *)PTR_DAT_047d4ca0;
    *(undefined8 *)PTR_DAT_047d4ca8 = uVar5;
    uVar6 = FUN_017d1984(uVar5,param_1 + 0x48);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar5 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar5;
    FUN_017d1bd8(uVar5,param_1 + 0x48,0);
    uVar7 = 2;
  }
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  return;
}


