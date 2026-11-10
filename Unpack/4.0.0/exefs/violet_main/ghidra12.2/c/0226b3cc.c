/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0226b3cc; name: FUN_0226b3cc
 */


void FUN_0226b3cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 local_4;
  
  FUN_0153edf0();
  *param_1 = &DAT_045ae1c0;
  param_1[4] = &PTR_LAB_045ae2d8;
  param_1[5] = &DAT_045ae328;
  FUN_0226e698(param_1);
  local_4 = 9;
  puVar1 = (undefined8 *)FUN_00d2ae18(param_1 + 0x18,&local_4);
  *puVar1 = param_1[0x92];
  return;
}


