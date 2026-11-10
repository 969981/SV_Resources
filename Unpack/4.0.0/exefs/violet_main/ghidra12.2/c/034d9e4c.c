/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034d9e4c; name: FUN_034d9e4c
 */


void FUN_034d9e4c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_FUN_047c5570;
  if (param_1[3] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
  }
  puVar1 = PTR_DAT_047e70a0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


