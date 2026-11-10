/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1eac4; name: FUN_00f1eac4
 */


undefined1  [16] FUN_00f1eac4(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = (float)param_1[2] - (float)*param_1;
  auVar1._4_4_ = (float)((ulong)param_1[2] >> 0x20) - (float)((ulong)*param_1 >> 0x20);
  auVar1._8_4_ = (float)param_1[3] - (float)param_1[1];
  auVar1._12_4_ = (float)((ulong)param_1[3] >> 0x20) - (float)((ulong)param_1[1] >> 0x20);
  return auVar1;
}


