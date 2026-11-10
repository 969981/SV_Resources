/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014988f8; name: FUN_014988f8
 */


void FUN_014988f8(undefined8 *param_1,undefined8 param_2,void *param_3)

{
  FUN_0149896c(param_1,0xa84c7bac977786c1,&DAT_045f0780,param_2);
  *param_1 = &DAT_045f0668;
  param_1[4] = &PTR_LAB_045f06e8;
  param_1[5] = &PTR_LAB_045f0738;
  memcpy(param_1 + 0xf,param_3,0x238);
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  return;
}


