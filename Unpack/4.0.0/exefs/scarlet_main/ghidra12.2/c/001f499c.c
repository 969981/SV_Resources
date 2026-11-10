/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f499c; name: FUN_001f499c
 */


void FUN_001f499c(byte *param_1,undefined4 *param_2)

{
  FUN_001ed53c(param_1,*param_2);
  if (*(char *)(param_2 + 2) != '\0') {
    *param_1 = *param_1 | 0x80;
  }
  param_1[4] = *(char *)(param_2 + 1) - 1;
  return;
}


