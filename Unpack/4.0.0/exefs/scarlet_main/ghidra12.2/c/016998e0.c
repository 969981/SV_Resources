/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016998e0; name: FUN_016998e0
 */


undefined8 FUN_016998e0(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (((DAT_048092c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048092c8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_048092c8);
  }
  uVar1 = FUN_01699940();
  FUN_00c5d960(param_1,uVar1);
  return 1;
}


