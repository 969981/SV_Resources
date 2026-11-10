/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ed0c4; name: FUN_014ed0c4
 */


void FUN_014ed0c4(void)

{
  int iVar1;
  undefined8 uVar2;
  long *local_50 [4];
  long *local_30;
  char *local_8;
  
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8ac8;
  local_8 = "message/dat/JPN/common/strinput.dat";
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar2;
  FUN_00e52f24(local_50,&local_8);
  FUN_014ed280(uVar2,local_50);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50[0] != (long *)0x0) {
    (**(code **)(*local_50[0] + 0x20))();
  }
  return;
}


