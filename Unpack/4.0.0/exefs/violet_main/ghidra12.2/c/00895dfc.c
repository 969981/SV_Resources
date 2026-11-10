/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00895dfc; name: FUN_00895dfc
 */


void FUN_00895dfc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_008a6438(param_1,0,0,param_2,param_4);
  *param_1 = (long)(PTR_DAT_047d2210 + 0x10);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd | *(char *)(param_4 + 0xde) << 1;
  return;
}


