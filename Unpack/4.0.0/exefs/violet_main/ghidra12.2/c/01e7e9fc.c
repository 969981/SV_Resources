/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e7e9fc; name: FUN_01e7e9fc
 */


void FUN_01e7e9fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_02781e68();
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_FUN_045df3a0;
  param_1[10] = &PTR_LAB_045df4e0;
  param_1[4] = &PTR_LAB_045df438;
  param_1[5] = &DAT_045df488;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((long)param_1 + 0x9d) = 0;
  return;
}


