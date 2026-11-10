/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151a508; name: FUN_0151a508
 */


void FUN_0151a508(char *param_1)

{
  if (*param_1 != '\0') {
    if (param_1[0x160] != '\0') {
      param_1[0x160] = '\0';
    }
    if (param_1[0x148] != '\0') {
      param_1[0x148] = '\0';
    }
    if (param_1[0xe0] != '\0') {
      param_1[0xe0] = '\0';
    }
    if (param_1[0x34] != '\0') {
      param_1[0x34] = '\0';
    }
    *param_1 = '\0';
  }
  return;
}


