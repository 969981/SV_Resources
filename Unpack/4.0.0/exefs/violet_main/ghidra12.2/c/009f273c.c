/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009f273c; name: FUN_009f273c
 */


ulong FUN_009f273c(long param_1,uint param_2,undefined4 param_3)

{
  undefined1 auVar1 [12];
  
  if (param_2 < 4) {
    return (ulong)*(uint *)(param_1 + (ulong)param_2 * 4);
  }
  auVar1 = FUN_00975e50();
  if (auVar1._8_4_ < 4) {
    *(undefined4 *)(auVar1._0_8_ + (ulong)auVar1._8_4_ * 4) = param_3;
    return auVar1._0_8_;
  }
  FUN_00975e50();
  return 4;
}


