/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ac4cc; name: FUN_007ac4cc
 */


void FUN_007ac4cc(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d0ce8;
  param_1[0x16] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078cb10(param_1 + 0xc);
  thunk_FUN_0078ccbc(param_1);
  return;
}


