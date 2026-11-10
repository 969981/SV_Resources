/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03447c20; name: FUN_03447c20
 */


void FUN_03447c20(long param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = param_3[7] - *(float *)(param_1 + 0x7c);
  fVar2 = param_3[6] - *(float *)(param_1 + 0x78);
  fVar1 = *(float *)(param_1 + 0x84);
  fVar4 = param_3[8] - *(float *)(param_1 + 0x80);
  fVar5 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  if (*(long *)(*(long *)(param_2 + 8) + 0x78) != *(long *)(*(long *)(param_1 + 8) + 0x78)) {
    fVar1 = *(float *)(param_2 + 0x50) * fVar1;
  }
  param_3[0x15] = fVar1;
  param_3[9] = fVar5 / fVar1;
  if (fVar5 <= 0.0) {
    param_3[10] = 0.0;
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)NEON_fminnm((-(param_3[2] * fVar4) - (*param_3 * fVar2 + fVar3 * param_3[1])) /
                               fVar5,0x3f800000);
    if (fVar1 <= -1.0) {
      fVar1 = -1.0;
    }
    fVar7 = ABS(fVar1);
    fVar7 = (fVar7 * (fVar7 * (fVar7 * (fVar7 * (fVar7 * 84.31466 + -242.71996) + 262.81305) +
                              -131.11235) + 29.66154) + -1.4518384) * fVar7;
    fVar6 = 1.5379527 - fVar7;
    if (fVar1 < 0.0) {
      fVar6 = fVar7 + 1.6036401;
    }
    param_3[10] = fVar6;
    fVar2 = (float)NEON_fminnm((*(float *)(param_1 + 0x60) * fVar2 +
                                fVar3 * *(float *)(param_1 + 100) +
                               fVar4 * *(float *)(param_1 + 0x68)) / fVar5,0x3f800000);
    if (fVar2 <= -1.0) {
      fVar2 = -1.0;
    }
    fVar3 = ABS(fVar2);
    fVar3 = (fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * 84.31466 + -242.71996) + 262.81305) +
                              -131.11235) + 29.66154) + -1.4518384) * fVar3;
    fVar1 = 1.5379527 - fVar3;
    if (fVar2 < 0.0) {
      fVar1 = fVar3 + 1.6036401;
    }
  }
  param_3[0xb] = fVar1;
  return;
}


