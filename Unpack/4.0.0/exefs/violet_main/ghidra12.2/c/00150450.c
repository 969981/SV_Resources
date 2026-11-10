/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00150450; name: FUN_00150450
 */


void FUN_00150450(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  lVar2 = 0;
  *param_2 = (*param_3 + 0.0 + param_3[1] + param_3[2] + param_3[3] + param_3[4] + param_3[5] +
              param_3[6] + param_3[7] + param_3[8] + param_3[9] + param_3[10] + param_3[0xb] +
              param_3[0xc] + param_3[0xd] + param_3[0xe] + param_3[0xf]) * 0.0625;
  fVar5 = (param_3[0x10] + 0.0 + param_3[0x11] + param_3[0x12] + param_3[0x13] + param_3[0x14] +
           param_3[0x15] + param_3[0x16] + param_3[0x17] + param_3[0x18] + param_3[0x19] +
           param_3[0x1a] + param_3[0x1b] + param_3[0x1c] + param_3[0x1d] + param_3[0x1e] +
          param_3[0x1f]) * 0.0625;
  param_2[1] = fVar5;
  fVar10 = 0.0;
  fVar4 = (param_3[0x20] + 0.0 + param_3[0x21] + param_3[0x22] + param_3[0x23] + param_3[0x24] +
           param_3[0x25] + param_3[0x26] + param_3[0x27] + param_3[0x28] + param_3[0x29] +
           param_3[0x2a] + param_3[0x2b] + param_3[0x2c] + param_3[0x2d] + param_3[0x2e] +
          param_3[0x2f]) * 0.0625;
  fVar6 = 0.0;
  param_2[2] = fVar4;
  do {
    pfVar1 = (float *)((long)param_3 + lVar2);
    lVar2 = lVar2 + 4;
    fVar12 = pfVar1[0x10] - fVar5;
    fVar11 = *pfVar1 - *param_2;
    fVar13 = pfVar1[0x20] - fVar4;
    fVar10 = fVar10 + fVar11 * fVar11;
    fVar9 = fVar9 + fVar11 * fVar13;
    fVar6 = fVar6 + fVar11 * fVar12;
    fVar8 = fVar8 + fVar12 * fVar12;
    fVar7 = fVar7 + fVar12 * fVar13;
    fVar3 = fVar3 + fVar13 * fVar13;
  } while (lVar2 != 0x40);
  *param_1 = fVar10;
  param_1[1] = fVar6;
  param_1[2] = fVar9;
  param_1[3] = fVar8;
  param_1[4] = fVar7;
  param_1[5] = fVar3;
  return;
}


