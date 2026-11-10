/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010186a4; name: FUN_010186a4
 */


void FUN_010186a4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_00d1a240(param_1,*param_3);
  *param_1 = &PTR_FUN_04564778;
  param_1[4] = &PTR_LAB_045648d8;
  param_1[5] = &DAT_04564a00;
  param_1[6] = &PTR_LAB_04564a58;
  param_1[7] = &PTR_LAB_04564a80;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_00cbb698(param_1 + 0x24,param_2);
  param_1[0x26] = 0;
  param_1[0x27] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}


