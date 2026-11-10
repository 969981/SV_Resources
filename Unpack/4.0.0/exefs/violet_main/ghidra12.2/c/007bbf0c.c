/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007bbf0c; name: FUN_007bbf0c
 */


void FUN_007bbf0c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d0f38;
  puVar1 = PTR_DAT_047d0a10;
  *param_1 = (long)(PTR_DAT_047d0f30 + 0x10);
  param_1[100] = (long)(puVar2 + 0x10);
  param_1[0x68] = (long)(puVar1 + 0x10);
  FUN_018dd490(param_1 + 0x6e);
  FUN_007a5e24(param_1);
  operator_delete(param_1);
  return;
}


