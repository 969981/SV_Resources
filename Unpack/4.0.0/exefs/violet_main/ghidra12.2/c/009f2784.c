/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


