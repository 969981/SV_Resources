/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199ad1c; name: FUN_0199ad1c
 */


void FUN_0199ad1c(long param_1)

{
  *(undefined8 *)(param_1 + 100) = 0x3f4ccccd3f4ccccd;
  if (*(int *)(param_1 + 0x28) == 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  FUN_0186cbc8();
  return;
}


