/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019ab5b0; name: FUN_019ab5b0
 */


void FUN_019ab5b0(char *param_1)

{
  if (param_1[0x44] != '\0') {
    param_1[0x44] = '\0';
  }
  if (param_1[0x30] != '\0') {
    param_1[0x30] = '\0';
  }
  if (param_1[0x20] != '\0') {
    param_1[0x20] = '\0';
  }
  if (param_1[8] != '\0') {
    param_1[8] = '\0';
  }
  if (*param_1 != '\0') {
    *param_1 = '\0';
  }
  return;
}


