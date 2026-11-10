/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9f3a8; name: FUN_02b9f3a8
 */


undefined1  [16] FUN_02b9f3a8(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 *param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = (float)((ulong)*param_3 >> 0x20) - param_1._4_4_ * param_2._4_4_;
  auVar1._0_4_ = (float)*param_3 - param_1._0_4_ * param_2._0_4_;
  auVar1._12_4_ = (float)((ulong)param_3[1] >> 0x20) - param_1._12_4_ * param_2._12_4_;
  auVar1._8_4_ = (float)param_3[1] - param_1._8_4_ * param_2._8_4_;
  return auVar1;
}


