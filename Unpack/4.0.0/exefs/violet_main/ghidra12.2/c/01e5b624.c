/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5b624; name: FUN_01e5b624
 */


void FUN_01e5b624(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)*param_2 - *(float *)(param_3 + 0x40);
  fVar3 = (float)((ulong)*param_2 >> 0x20) - *(float *)(param_3 + 0x44);
  fVar4 = (float)param_2[1] - *(float *)(param_3 + 0x48);
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  auVar1._0_4_ = fVar2 + fVar3;
  auVar1._4_4_ = fVar4 + 0.0;
  auVar1._8_4_ = fVar2 + fVar3;
  auVar1._12_4_ = fVar4 + 0.0;
  NEON_ext(auVar1,auVar1,4,1);
  return;
}


