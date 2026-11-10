/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a9280; name: FUN_007a9280
 */


void FUN_007a9280(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d0be0;
  param_1[0x1f] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078cb10(param_1 + 0xc);
  thunk_FUN_0078ccbc(param_1);
  return;
}


