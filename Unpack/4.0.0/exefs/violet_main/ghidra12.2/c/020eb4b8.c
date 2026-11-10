/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020eb4b8; name: FUN_020eb4b8
 */


void FUN_020eb4b8(long param_1,uint param_2)

{
  if ((0x20 < param_2) || ((1L << ((ulong)param_2 & 0x3f) & 0x100010100U) == 0)) {
    param_2 = 0x20;
  }
  *(char *)(param_1 + 0x56f) = (char)param_2;
  return;
}


