/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e2afc; name: FUN_007e2afc
 */


long FUN_007e2afc(long param_1,char param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    for (lVar1 = *(long *)(param_1 + 0xb0); lVar1 != param_1 + 0xa8; lVar1 = *(long *)(lVar1 + 8)) {
      if (*(char *)(lVar1 + 0x38) == param_2) {
        return lVar1 + 0x10;
      }
    }
  }
  return 0;
}


