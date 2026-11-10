/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199e63c; name: FUN_0199e63c
 */


void FUN_0199e63c(long param_1)

{
  if (*(long *)(param_1 + 0x1c0) != 0) {
    thunk_FUN_0011f610(*(undefined8 *)(*(long *)(param_1 + 0x1c0) + -8));
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  if (*(long *)(param_1 + 0x1c8) != 0) {
    thunk_FUN_0011f610(*(undefined8 *)(*(long *)(param_1 + 0x1c8) + -8));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  return;
}


