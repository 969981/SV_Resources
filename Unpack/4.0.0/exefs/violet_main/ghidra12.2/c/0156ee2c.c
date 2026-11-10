/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156ee2c; name: FUN_0156ee2c
 */


void FUN_0156ee2c(long *param_1)

{
  undefined *puVar1;
  
  FUN_0156eea8();
  puVar1 = PTR_DAT_047e2458 + 0x40;
  *param_1 = (long)(PTR_DAT_047e2458 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_0156efd4(param_1 + 7);
  param_1[0xb] = 0;
  FUN_0156f114(param_1 + 0xc);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  return;
}


