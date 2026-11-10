/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03457f88; name: FUN_03457f88
 */


void FUN_03457f88(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_FUN_047c06b0;
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[5] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(1);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  puVar1 = PTR_DAT_047e70a0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


