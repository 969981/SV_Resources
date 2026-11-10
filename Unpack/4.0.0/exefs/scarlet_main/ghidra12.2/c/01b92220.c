/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b92220; name: FUN_01b92220
 */


undefined8 FUN_01b92220(undefined8 param_1)

{
  int iVar1;
  
  if (((DAT_0480ad70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480ad70), iVar1 != 0)) {
    __cxa_guard_release(&DAT_0480ad70);
  }
  iVar1 = FUN_01b92280();
  FUN_00c5d960(param_1,(long)iVar1);
  return 1;
}


