/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9f384; name: FUN_02b9f384
 */


undefined1  [16] FUN_02b9f384(undefined1 param_1 [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = (float)*param_2 / param_1._0_4_;
  auVar1._4_4_ = (float)((ulong)*param_2 >> 0x20) / param_1._4_4_;
  auVar1._8_4_ = (float)param_2[1] / param_1._8_4_;
  auVar1._12_4_ = 0;
  return auVar1;
}


