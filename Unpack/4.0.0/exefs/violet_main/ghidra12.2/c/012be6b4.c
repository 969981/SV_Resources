/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012be6b4; name: FUN_012be6b4
 */


void FUN_012be6b4(undefined8 *param_1)

{
  FUN_012bed74();
  *param_1 = &PTR_LAB_045ebc98;
  param_1[4] = &PTR_LAB_045ebcc8;
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  nn::os::InitializeLightEvent(param_1 + 8,0,1);
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 100) = 1;
  nn::os::InitializeLightEvent(param_1 + 0xb,0,1);
  param_1[0xd] = 0;
  param_1[0xe] = param_1 + 0xd;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_1[1];
  param_1[0x13] = 0xffffffffffffffff;
  FUN_012be750(param_1 + 0x16);
  FUN_012be7f4(param_1 + 0x25);
  param_1[0x2c] = 0;
  return;
}


