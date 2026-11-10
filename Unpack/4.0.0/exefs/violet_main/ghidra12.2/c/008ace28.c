/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ace28; name: FUN_008ace28
 */


void FUN_008ace28(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_008a5dac();
  *param_1 = (long)(PTR_DAT_047d21c0 + 0x10);
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  FUN_008a68f8(param_1,param_2,0,0,0);
  puVar1 = PTR_DAT_047d23c0;
  param_1[0x1d] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x1b] = (long)(param_1 + 0x1b);
  param_1[0x1c] = (long)(param_1 + 0x1b);
  return;
}


