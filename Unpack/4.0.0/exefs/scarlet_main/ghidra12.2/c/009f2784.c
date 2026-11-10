/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009f2784; name: FUN_009f2784
 */


long FUN_009f2784(long param_1,uint param_2)

{
  long lVar1;
  uint extraout_w1;
  undefined4 extraout_s0;
  
  if (param_2 < 9) {
    return param_1;
  }
  lVar1 = FUN_00975e50();
  if (extraout_w1 < 9) {
    *(undefined4 *)(lVar1 + (ulong)extraout_w1 * 4 + 0x10) = extraout_s0;
    return lVar1;
  }
  FUN_00975e50();
  return 9;
}


