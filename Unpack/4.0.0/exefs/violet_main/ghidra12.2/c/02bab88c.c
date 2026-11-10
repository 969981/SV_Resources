/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


