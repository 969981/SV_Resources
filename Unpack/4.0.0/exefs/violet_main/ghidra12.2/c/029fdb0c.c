/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fdb0c; name: FUN_029fdb0c
 */


void FUN_029fdb0c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047e4f10;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = (long)(puVar1 + 0x10);
  memset(param_1 + 4,0xff,0x104);
  return;
}


