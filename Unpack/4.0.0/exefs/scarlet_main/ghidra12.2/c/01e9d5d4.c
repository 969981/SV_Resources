/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9d5d4; name: FUN_01e9d5d4
 */


undefined8 FUN_01e9d5d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long *local_38;
  
  puVar1 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar3 = PTR_DAT_047d4ca8;
  puVar2 = PTR_DAT_047d4ca0;
  uVar6 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar6;
  FUN_00d8fb98(auStack_50,&DAT_045538b8);
  uVar5 = FUN_01e9e4d0(uVar6,auStack_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar6 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar6;
    FUN_00d8fb98(auStack_50,&DAT_045538b8);
    FUN_0157f7bc(uVar6,auStack_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar6 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar6;
    FUN_00d8fb98(auStack_50,&DAT_045538b8);
    FUN_0157f828(uVar6,auStack_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar6 = 1;
  }
  return uVar6;
}


