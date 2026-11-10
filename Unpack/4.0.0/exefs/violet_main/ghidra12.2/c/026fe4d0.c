/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fe4d0; name: FUN_026fe4d0
 */


undefined1  [16] FUN_026fe4d0(undefined8 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  
  fVar1 = cosf(*(float *)(param_2 + 0x20));
  fVar2 = sinf(*(float *)(param_2 + 0x20));
  fVar4 = (float)((ulong)param_1 >> 0x20);
  auVar3._4_4_ = fVar1 * fVar4 + fVar2 * (float)param_1;
  auVar3._0_4_ = fVar1 * (float)param_1 - fVar2 * fVar4;
  auVar3._8_8_ = 0;
  return auVar3;
}


