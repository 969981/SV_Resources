/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ed19c; name: FUN_014ed19c
 */


uint FUN_014ed19c(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  long *local_28;
  
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d8ac8;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar3;
  local_58 = &DAT_ce02c237861a2a94;
  pcStack_50 = "strinput";
  local_48 = 8;
  FUN_00d8fb98(auStack_40,&local_58);
  uVar1 = FUN_0107276c(uVar3,auStack_40,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar1 & 1;
}


