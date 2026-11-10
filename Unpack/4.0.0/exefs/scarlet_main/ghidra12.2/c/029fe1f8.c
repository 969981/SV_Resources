/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029fe1f8; name: FUN_029fe1f8
 */


void FUN_029fe1f8(long param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x2c) & 0x7fffffff) == 0) {
    FUN_030bb974(param_1 + 0x20,1);
  }
  if (*(int *)(param_1 + 0x28) != 1) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  **(undefined4 **)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


