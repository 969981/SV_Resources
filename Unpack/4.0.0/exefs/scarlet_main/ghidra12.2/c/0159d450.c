/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159d450; name: FUN_0159d450
 */


void FUN_0159d450(undefined4 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x38) != 0) {
    if ((*(uint *)(param_2 + 0x4c) & 0xfffffffd) == 1) {
      *(undefined4 *)(param_2 + 0x4c) = 1;
    }
    *(undefined4 *)(param_2 + 0x54) = param_1;
  }
  return;
}


