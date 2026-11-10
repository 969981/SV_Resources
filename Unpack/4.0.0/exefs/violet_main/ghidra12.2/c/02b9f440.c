/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9f440; name: FUN_02b9f440
 */


undefined1  [16] FUN_02b9f440(undefined1 param_1 [16],float param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)*param_3;
  fVar3 = (float)((ulong)*param_3 >> 0x20);
  fVar4 = (float)param_3[1];
  fVar5 = (float)((ulong)param_3[1] >> 0x20);
  auVar1._4_4_ = fVar3 + (param_1._4_4_ - fVar3) * param_2;
  auVar1._0_4_ = fVar2 + (param_1._0_4_ - fVar2) * param_2;
  auVar1._12_4_ = fVar5 + (param_1._12_4_ - fVar5) * param_2;
  auVar1._8_4_ = fVar4 + (param_1._8_4_ - fVar4) * param_2;
  return auVar1;
}


