/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02003ba4; name: FUN_02003ba4
 */


undefined8 FUN_02003ba4(long param_1)

{
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_0200409c();
    if (*(long *)(param_1 + 0xb8) == 0) {
      FUN_02004134(param_1);
    }
  }
  return 1;
}


