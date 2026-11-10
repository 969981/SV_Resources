/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029263dc; name: FUN_029263dc
 */


void FUN_029263dc(undefined8 *param_1,undefined8 param_2,void *param_3)

{
  FUN_0149896c(param_1,0xfc32f375ea6da047,&DAT_045f0c80,param_2);
  *param_1 = &DAT_045f0b68;
  param_1[4] = &PTR_LAB_045f0be8;
  param_1[5] = &PTR_LAB_045f0c38;
  memcpy(param_1 + 0xf,param_3,0x238);
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  return;
}


