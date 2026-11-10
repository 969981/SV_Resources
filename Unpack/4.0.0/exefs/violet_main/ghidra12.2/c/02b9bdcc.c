/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9bdcc; name: FUN_02b9bdcc
 */


undefined1  [16] FUN_02b9bdcc(undefined1 param_1 [16],undefined8 *param_2)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  
  fVar4 = param_1._8_4_;
  fVar3 = param_1._4_4_;
  fVar1 = param_1._0_4_;
  auVar2._0_4_ = (float)*param_2 * fVar1 + (float)param_2[2] * fVar3 + (float)param_2[4] * fVar4 +
                 (float)param_2[6];
  auVar2._4_4_ = (float)((ulong)*param_2 >> 0x20) * fVar1 +
                 (float)((ulong)param_2[2] >> 0x20) * fVar3 +
                 (float)((ulong)param_2[4] >> 0x20) * fVar4 + (float)((ulong)param_2[6] >> 0x20);
  auVar2._8_4_ = (float)param_2[1] * fVar1 + (float)param_2[3] * fVar3 + (float)param_2[5] * fVar4 +
                 (float)param_2[7];
  auVar2._12_4_ =
       (float)((ulong)param_2[1] >> 0x20) * fVar1 + (float)((ulong)param_2[3] >> 0x20) * fVar3 +
       (float)((ulong)param_2[5] >> 0x20) * fVar4 + 0.0;
  return auVar2;
}


