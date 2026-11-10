/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ff170; name: FUN_020ff170
 */


void FUN_020ff170(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  param_1[1] = param_4;
  param_1[2] = param_2;
  *param_1 = (param_5 & 0xff) << 0x14 | (param_3 & 0xffff) << 4 | 2;
  return;
}


