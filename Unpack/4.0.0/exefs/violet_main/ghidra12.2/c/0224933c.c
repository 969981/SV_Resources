/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0224933c; name: FUN_0224933c
 */


void FUN_0224933c(long param_1,long *param_2,uint param_3)

{
  if ((*(long *)(param_1 + 0x128) == 0) || (*param_2 == 0)) {
    return;
  }
  FUN_016b3370(*param_2,param_1 + 0x128,param_3 & 1);
  return;
}


