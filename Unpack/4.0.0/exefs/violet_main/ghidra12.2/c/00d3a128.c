/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3a128; name: FUN_00d3a128
 */


ulong FUN_00d3a128(float param_1,float param_2,long param_3,float *param_4,ulong param_5,
                  ulong param_6,ulong param_7,uint param_8,ulong param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(int *)(param_3 + 0x4bc) == 2) || ((*(int *)(param_3 + 0x4bc) == 1 && ((param_8 & 1) == 0)))
     ) {
    uVar2 = 0;
  }
  else {
    fVar6 = *param_4 * *param_4 + param_4[1] * param_4[1];
    fVar5 = SQRT(fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
      param_9 = param_9 & 0xffffffff;
      param_7 = param_7 & 0xffffffff;
    }
    if (param_2 < fVar5) {
      fVar6 = *param_4 / fVar5;
      fVar5 = param_4[1] / fVar5;
      fVar8 = fVar6 + fVar5 * 0.0;
      fVar7 = fVar5 * 0.0 - fVar6;
      uVar3 = (ulong)(0.0 < fVar8);
      uVar4 = (ulong)(param_1 < fVar8);
      fVar8 = fVar6 * 0.0 + fVar5;
      uVar2 = uVar4 << 0xe | 0x1000;
      if (fVar7 <= param_1) {
        uVar2 = uVar4 << 0xe;
      }
      uVar4 = uVar3 << 0xe | 0x1000;
      if (fVar7 <= 0.0) {
        uVar4 = uVar3 << 0xe;
      }
      fVar5 = fVar6 * 0.0 - fVar5;
      uVar3 = uVar2 | 0x2000;
      if (fVar8 <= param_1) {
        uVar3 = uVar2;
      }
      uVar1 = uVar4 | 0x2000;
      if (fVar8 <= 0.0) {
        uVar1 = uVar4;
      }
      uVar4 = uVar3 | 0x8000;
      if (fVar5 <= param_1) {
        uVar4 = uVar3;
      }
      uVar2 = uVar1 | 0x8000;
      if (fVar5 <= 0.0) {
        uVar2 = uVar1;
      }
      if (uVar4 != 0) {
        return uVar4;
      }
    }
    else {
      uVar2 = 0;
    }
    if ((param_6 == 0) && ((param_9 & 1) != 0)) {
      if ((param_7 & 1) == 0) {
        param_5 = param_5 >> 8;
      }
      else {
        param_5 = param_5 >> 4;
      }
      uVar2 = param_5 & 0xf000;
    }
    else {
      uVar2 = uVar2 & param_6;
    }
  }
  return uVar2;
}


