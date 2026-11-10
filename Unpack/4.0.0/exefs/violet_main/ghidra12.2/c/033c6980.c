/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c6980; name: FUN_033c6980
 */


void FUN_033c6980(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  float fVar2;
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
  float fVar14;
  float fVar15;
  
  if (param_2 != 0) {
    uVar1 = 0;
    fVar11 = *(float *)(param_1 + 0xa4);
    fVar3 = fVar11 * 4.0;
    fVar9 = *(float *)(param_1 + 0x98);
    fVar2 = fVar11 + *(float *)(param_1 + 0xac);
    fVar4 = fVar9 + *(float *)(param_1 + 0xa0);
    fVar12 = fVar2 + fVar11;
    fVar14 = fVar4 + fVar9;
    fVar13 = fVar12 + fVar11;
    fVar15 = fVar14 + fVar9;
    fVar11 = fVar13 + fVar11;
    fVar10 = fVar9 * 4.0;
    fVar9 = fVar15 + fVar9;
    do {
      fVar5 = ((float)*param_3 + fVar4 * (float)*param_4) * fVar2;
      fVar6 = ((float)((ulong)*param_3 >> 0x20) + fVar14 * (float)((ulong)*param_4 >> 0x20)) *
              fVar12;
      fVar7 = ((float)param_3[1] + fVar15 * (float)param_4[1]) * fVar13;
      fVar8 = ((float)((ulong)param_3[1] >> 0x20) + fVar9 * (float)((ulong)param_4[1] >> 0x20)) *
              fVar11;
      uVar1 = uVar1 + 4;
      fVar2 = fVar2 + fVar3;
      fVar12 = fVar12 + fVar3;
      fVar13 = fVar13 + fVar3;
      fVar11 = fVar11 + fVar3;
      param_3[1] = CONCAT44(fVar8,fVar7);
      *param_3 = CONCAT44(fVar6,fVar5);
      param_3 = param_3 + 2;
      param_4 = param_4 + 2;
      fVar4 = fVar4 + fVar10;
      fVar14 = fVar14 + fVar10;
      fVar15 = fVar15 + fVar10;
      fVar9 = fVar9 + fVar10;
    } while (uVar1 < param_2);
  }
  return;
}


