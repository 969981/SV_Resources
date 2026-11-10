/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01480790; name: FUN_01480790
 */


void FUN_01480790(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  *param_1 = (param_4 & 0xf) << 4 | (param_3 & 0xffff) << 8 | 1;
  return;
}


