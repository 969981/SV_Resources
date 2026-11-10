/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0180f0d0; name: FUN_0180f0d0
 */


undefined8 FUN_0180f0d0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_8;
  
  if (((DAT_04802838 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04802838), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04802838);
  }
  local_8 = FUN_0180f134();
  FUN_0180f1b0(param_1,&local_8);
  return 1;
}


