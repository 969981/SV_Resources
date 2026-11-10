/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f7ccc; name: FUN_007f7ccc
 */


void FUN_007f7ccc(long *param_1)

{
  undefined *puVar1;
  
  FUN_007f9e64();
  puVar1 = PTR_DAT_047d1588;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xe2] = 0;
  return;
}


