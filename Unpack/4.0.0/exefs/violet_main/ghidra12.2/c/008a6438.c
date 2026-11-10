/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a6438; name: FUN_008a6438
 */


void FUN_008a6438(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d21c0;
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  *param_1 = (long)(puVar1 + 0x10);
  FUN_008a5e04();
  return;
}


