/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026d4fdc; name: FUN_026d4fdc
 */


void FUN_026d4fdc(undefined8 *param_1,undefined8 param_2,undefined2 param_3,byte param_4)

{
  FUN_026d505c();
  *param_1 = &PTR_FUN_045cbe88;
  param_1[4] = &PTR_LAB_045cc028;
  param_1[5] = &DAT_045cc150;
  param_1[6] = &PTR_LAB_045cc1a8;
  param_1[7] = &PTR_LAB_045cc1d0;
  *(undefined4 *)((long)param_1 + 0x134) = 1;
  *(undefined2 *)(param_1 + 0x27) = param_3;
  *(byte *)((long)param_1 + 0x13a) = param_4 & 1;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_00c6a514(param_1 + 7,0x82);
  return;
}


