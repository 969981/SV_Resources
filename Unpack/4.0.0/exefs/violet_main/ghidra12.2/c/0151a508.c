/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


