/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01917e2c; name: FUN_01917e2c
 */


void FUN_01917e2c(long *param_1,undefined8 param_2)

{
  FUN_00d1a240(param_1,0x8009809f);
  *param_1 = (long)&DAT_045deef0;
  param_1[0x24] = 0;
  param_1[4] = (long)&PTR_LAB_045df040;
  param_1[5] = (long)&DAT_045df168;
  param_1[6] = (long)&PTR_LAB_045df1c0;
  param_1[7] = (long)&PTR_LAB_045df1e8;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x26] = (long)&PTR_FUN_045df220;
  param_1[0x27] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_01917f00(param_1 + 0x2e);
  FUN_01917f00(param_1 + 0x35);
  FUN_01917f00(param_1 + 0x3c);
  param_1[0x44] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  param_1[0x43] = 0;
  (**(code **)(*param_1 + 0x70))(param_1,0);
  FUN_00c6a514(param_1 + 7,0);
  FUN_0191803c(param_1,param_2);
  return;
}


