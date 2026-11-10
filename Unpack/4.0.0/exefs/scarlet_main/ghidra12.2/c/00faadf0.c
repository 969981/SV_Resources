/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00faadf0; name: FUN_00faadf0
 */


long FUN_00faadf0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x28) != param_1 + 0x20) {
    return *(long *)(param_1 + 0x28) + -8;
  }
  do {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = (long *)(param_1 + 0x10);
    param_1 = lVar2;
  } while (*plVar1 == lVar2 + 0x20);
  return *plVar1 + -8;
}


