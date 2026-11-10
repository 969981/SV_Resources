/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008dad6c; name: FUN_008dad6c
 */


void FUN_008dad6c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d25b8 + 0x10);
  FUN_008daa84(param_1,0);
  FUN_01327a58(param_1 + 0x5f);
  FUN_008f080c(param_1 + 0x54);
  FUN_01327a58(param_1 + 0x29);
  FUN_008f080c(param_1 + 0x1e);
  operator_delete(param_1);
  return;
}


