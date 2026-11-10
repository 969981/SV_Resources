/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


