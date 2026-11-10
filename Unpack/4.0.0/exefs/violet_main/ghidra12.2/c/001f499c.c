/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


