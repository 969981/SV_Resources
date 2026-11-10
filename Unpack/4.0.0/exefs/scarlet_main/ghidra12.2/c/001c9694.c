/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c9694; name: FUN_001c9694
 */


void FUN_001c9694(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    FUN_001c8f6c(param_2);
    return;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_001dc298(param_1,3,2);
  }
  FUN_001c8f6c(param_2);
  if (*(long *)(param_1 + 0xe8) == 0) {
    return;
  }
  FUN_001dc2d8(param_1,3);
  return;
}


