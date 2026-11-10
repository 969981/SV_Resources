/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018b52a4; name: FUN_018b52a4
 */


void FUN_018b52a4(undefined8 *param_1,undefined8 param_2,void *param_3)

{
  FUN_018b4ea4(param_1,0xae1b39fccfd09053,&DAT_045942b0,param_2);
  *param_1 = &PTR_LAB_04594198;
  param_1[4] = &PTR_LAB_04594218;
  param_1[5] = &PTR_LAB_04594268;
  memcpy(param_1 + 0xf,param_3,0x240);
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  return;
}


