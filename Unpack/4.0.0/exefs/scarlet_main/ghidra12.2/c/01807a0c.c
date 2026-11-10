/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01807a0c; name: FUN_01807a0c
 */


void FUN_01807a0c(undefined4 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_2 + 0x18) + 8) = param_1;
  }
  return;
}


