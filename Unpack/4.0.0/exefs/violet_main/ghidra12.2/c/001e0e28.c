/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e0e28; name: FUN_001e0e28
 */


int FUN_001e0e28(int param_1,int param_2,int param_3,int param_4)

{
  param_1 = param_1 - param_3;
  if (0x20c49a < param_1) {
    return 0x7fffffff;
  }
  if (param_1 < -0x20c49a) {
    return -0x80000000;
  }
  return (param_2 - param_4) / 1000 + param_1 * 1000;
}


