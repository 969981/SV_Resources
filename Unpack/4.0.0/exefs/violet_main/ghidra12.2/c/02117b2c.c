/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02117b2c; name: FUN_02117b2c
 */


void FUN_02117b2c(undefined8 *param_1,undefined8 param_2,void *param_3)

{
  FUN_018b4ea4(param_1,0x809e7c342dc76a3c,&DAT_04594170,param_2);
  *param_1 = &PTR_LAB_04594058;
  param_1[4] = &PTR_LAB_045940d8;
  param_1[5] = &PTR_LAB_04594128;
  memcpy(param_1 + 0xf,param_3,0x2588);
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  return;
}


