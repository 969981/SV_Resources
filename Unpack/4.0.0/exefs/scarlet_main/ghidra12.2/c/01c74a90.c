/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c74a90; name: FUN_01c74a90
 */


undefined8 FUN_01c74a90(undefined8 param_1)

{
  int iVar1;
  
  if (((DAT_04814db0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04814db0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04814db0);
  }
  iVar1 = FUN_01c74af0();
  FUN_00c5d960(param_1,(long)iVar1);
  return 1;
}


