/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ed93c; name: FUN_001ed93c
 */


undefined8 FUN_001ed93c(byte *param_1,long param_2)

{
  if (param_2 != 0) {
    if (*param_1 == 0x3a) {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
    }
    while (*(int *)(&DAT_03cc1718 + (ulong)*param_1 * 4) != 0) {
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      if (param_2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


