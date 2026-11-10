/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00798384; name: FUN_00798384
 */


void FUN_00798384(long *param_1)

{
  undefined *puVar1;
  
  param_1[2] = -1;
  param_1[3] = 0xffffffffffff;
  puVar1 = PTR_DAT_047d0a10;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_018dd988(param_1 + 6);
  return;
}


