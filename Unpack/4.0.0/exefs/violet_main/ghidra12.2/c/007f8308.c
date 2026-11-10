/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f8308; name: FUN_007f8308
 */


void FUN_007f8308(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0078f9d4();
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0078f9d4();
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_0078cfe4(param_1 + 0xb,param_3);
  FUN_007c70a8(param_1 + 0xf);
  FUN_0079704c(param_1 + 0x11);
  param_1[0xdb] = 0;
  FUN_00797134(param_1 + 0x11);
  FUN_007f7fbc(param_1 + 0xdc);
  FUN_007f8240(param_1,param_2);
  return;
}


