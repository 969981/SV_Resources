/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1ead0; name: FUN_00f1ead0
 */


undefined1  [16] FUN_00f1ead0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = ((float)param_1[2] + (float)*param_1) * 0.5;
  auVar1._4_4_ = ((float)((ulong)param_1[2] >> 0x20) + (float)((ulong)*param_1 >> 0x20)) * 0.5;
  auVar1._8_4_ = ((float)param_1[3] + (float)param_1[1]) * 0.5;
  auVar1._12_4_ = ((float)((ulong)param_1[3] >> 0x20) + (float)((ulong)param_1[1] >> 0x20)) * 0.5;
  return auVar1;
}


