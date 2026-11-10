/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089e868; name: FUN_0089e868
 */


void FUN_0089e868(long *param_1)

{
  undefined *puVar1;
  
  FUN_0089da30();
  puVar1 = PTR_DAT_047d2330;
  param_1[9] = (long)(param_1 + 9);
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}


