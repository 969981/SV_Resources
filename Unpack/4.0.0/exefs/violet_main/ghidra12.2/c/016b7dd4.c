/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b7dd4; name: FUN_016b7dd4
 */


void FUN_016b7dd4(long *param_1)

{
  undefined *puVar1;
  
  FUN_00d5a934();
  puVar1 = PTR_DAT_047db450;
  param_1[0x1e] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x1d] = 0;
  FUN_016b7e34(param_1 + 0x1f);
  *param_1 = (long)&PTR_LAB_0460b408;
  param_1[0x24] = -1;
  FUN_00d5ae1c(param_1 + 0x1d,1);
  return;
}


