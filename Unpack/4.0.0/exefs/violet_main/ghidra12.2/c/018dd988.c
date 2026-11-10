/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dd988; name: FUN_018dd988
 */


void FUN_018dd988(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d0940;
  puVar1 = PTR_DAT_047d0938;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar2 + 0x10);
  param_1[5] = (long)(puVar2 + 0x68);
  param_1[2] = (long)(param_1 + 6);
  param_1[3] = 0x50;
  FUN_02bdba04(param_1 + 1);
  return;
}


