/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9f27c; name: FUN_02b9f27c
 */


undefined1  [16] FUN_02b9f27c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = ABS((float)*param_1);
  auVar1._4_4_ = ABS((float)((ulong)*param_1 >> 0x20));
  auVar1._8_4_ = ABS((float)param_1[1]);
  auVar1._12_4_ = ABS((float)((ulong)param_1[1] >> 0x20));
  return auVar1;
}


