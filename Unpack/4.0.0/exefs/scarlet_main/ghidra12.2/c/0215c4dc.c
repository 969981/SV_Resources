/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215c4dc; name: FUN_0215c4dc
 */


undefined4 FUN_0215c4dc(long param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    param_2 = param_2 + 1;
  }
  return *param_2;
}


