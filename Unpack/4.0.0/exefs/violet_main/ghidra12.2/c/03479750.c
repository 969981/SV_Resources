/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03479750; name: FUN_03479750
 */


void FUN_03479750(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_FUN_047c2450;
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[7] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(1);
  }
  param_1[7] = 0;
  if (param_1[6] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  param_1[6] = 0;
  if (param_1[4] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  *param_1 = (long)(PTR_DAT_047e70a0 + 0x10);
  return;
}


