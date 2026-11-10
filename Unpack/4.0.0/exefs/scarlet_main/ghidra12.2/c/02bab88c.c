/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bab88c; name: FUN_02bab88c
 */


undefined1  [16] FUN_02bab88c(undefined8 *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = *(float *)(param_1 + 4);
  auVar2._0_4_ = (float)*param_1 + (float)param_1[2] * fVar1 * 0.5;
  auVar2._4_4_ = (float)((ulong)*param_1 >> 0x20) + (float)((ulong)param_1[2] >> 0x20) * fVar1 * 0.5
  ;
  auVar2._8_4_ = (float)param_1[1] + (float)param_1[3] * fVar1 * 0.5;
  auVar2._12_4_ =
       (float)((ulong)param_1[1] >> 0x20) + (float)((ulong)param_1[3] >> 0x20) * fVar1 * 0.5;
  return auVar2;
}


