/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c25fc; name: FUN_008c25fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c25fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ushort *param_4)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
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
  float fVar16;
  
  fVar11 = (float)param_1;
  if ((ulong)param_4[8] < 2) {
    fVar5 = *(float *)(param_4 + 0xc);
    fVar9 = *(float *)(param_4 + 0xe);
  }
  else {
    lVar4 = 1;
    pfVar1 = *(float **)(param_4 + 0xc) + -9;
    fVar9 = **(float **)(param_4 + 0xc);
    do {
      fVar5 = fVar9;
      pfVar2 = pfVar1;
      fVar9 = pfVar2[0x17];
      pfVar1 = pfVar2 + 0xe;
      if ((long)((ulong)param_4[8] - 1) <= lVar4) break;
      lVar4 = lVar4 + 1;
    } while (fVar9 <= fVar11 || fVar11 < fVar5);
    fVar9 = (fVar11 - fVar5) / (fVar9 - fVar5);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    fVar6 = 1.0 - fVar9;
    fVar8 = fVar6 * fVar6 * fVar6;
    fVar7 = fVar6 * fVar9 * 3.0 * fVar6;
    fVar6 = fVar6 * fVar9 * fVar9 * 3.0;
    fVar9 = fVar9 * fVar9 * fVar9;
    fVar5 = pfVar2[0x10] * fVar9 +
            (float)*(undefined8 *)pfVar1 * fVar8 + (*pfVar1 + pfVar2[0x12]) * fVar7 +
            (pfVar2[0x10] + pfVar2[0x14]) * fVar6;
    fVar9 = pfVar2[0x11] * fVar9 +
            (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) * fVar8 +
            (pfVar2[0xf] + pfVar2[0x13]) * fVar7 + (pfVar2[0x11] + pfVar2[0x15]) * fVar6;
  }
  fVar5 = -fVar5;
  fVar9 = -fVar9;
  fVar6 = (float)FUN_008bea60(param_1,param_4 + 0x10);
  fVar7 = (float)FUN_008bea60(param_1,param_4 + 0x18);
  fVar8 = (float)FUN_008bea60(param_1,param_4 + 0x28);
  if ((ulong)*param_4 < 2) {
    fVar10 = *(float *)(param_4 + 4);
    fVar11 = *(float *)(param_4 + 6);
  }
  else {
    lVar4 = 1;
    pfVar1 = *(float **)(param_4 + 4) + -9;
    fVar10 = **(float **)(param_4 + 4);
    do {
      fVar14 = fVar10;
      pfVar2 = pfVar1;
      fVar10 = pfVar2[0x17];
      if ((long)((ulong)*param_4 - 1) <= lVar4) break;
      lVar4 = lVar4 + 1;
      pfVar1 = pfVar2 + 0xe;
    } while (fVar10 <= fVar11 || fVar11 < fVar14);
    fVar13 = pfVar2[0xe];
    fVar11 = (fVar11 - fVar14) / (fVar10 - fVar14);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (1.0 < fVar11) {
      fVar11 = 1.0;
    }
    fVar14 = 1.0 - fVar11;
    fVar16 = fVar14 * fVar14 * fVar14;
    fVar12 = fVar14 * fVar11 * 3.0 * fVar14;
    fVar14 = fVar14 * fVar11 * fVar11 * 3.0;
    fVar11 = fVar11 * fVar11 * fVar11;
    fVar10 = pfVar2[0x10] * fVar11 +
             fVar13 * fVar16 + (fVar13 + pfVar2[0x12]) * fVar12 +
             (pfVar2[0x10] + pfVar2[0x14]) * fVar14;
    fVar11 = pfVar2[0x11] * fVar11 +
             pfVar2[0xf] * fVar16 + (pfVar2[0xf] + pfVar2[0x13]) * fVar12 +
             (pfVar2[0x11] + pfVar2[0x15]) * fVar14;
  }
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  uVar3 = (ulong)(fVar8 * (fVar14 / *(float *)PTR_FloatDegree180_047d2390));
  pfVar1 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar3 >> 0x18 & 0xff) * 0x10);
  fVar8 = (float)((uint)uVar3 & 0xffffff) * 5.9604645e-08;
  fVar15 = pfVar1[1] + pfVar1[3] * fVar8;
  fVar8 = *pfVar1 + pfVar1[2] * fVar8;
  fVar12 = fVar6 * fVar8;
  fVar6 = fVar6 * fVar15;
  fVar15 = fVar15 * -fVar7;
  fVar7 = fVar7 * fVar8;
  fVar8 = (float)_DAT_03caa5b0;
  fVar14 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
  fVar13 = (float)_UNK_03caa5b8;
  fVar16 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
  param_3[5] = CONCAT44(fVar5 * 0.0 + fVar9 * 0.0 + fVar16 + 0.0,fVar13 + 0.0 + 0.0);
  param_3[4] = CONCAT44(fVar14 + 0.0 + 0.0,fVar8 + 0.0 + 0.0);
  param_3[1] = CONCAT44(fVar10 + fVar5 * fVar12 + fVar9 * fVar15 + fVar16 * 0.0,
                        fVar12 * 0.0 + fVar15 * 0.0 + fVar13 * 0.0 + 0.0);
  *param_3 = CONCAT44(fVar12 * 0.0 + fVar15 * 1.0 + fVar14 * 0.0 + 0.0,
                      fVar12 * 1.0 + fVar15 * 0.0 + fVar8 * 0.0 + 0.0);
  param_3[3] = CONCAT44(fVar11 + fVar5 * fVar6 + fVar9 * fVar7 + fVar16 * 0.0,
                        fVar6 * 0.0 + fVar7 * 0.0 + fVar13 * 0.0 + 0.0);
  param_3[2] = CONCAT44(fVar6 * 0.0 + fVar7 * 1.0 + fVar14 * 0.0 + 0.0,
                        fVar6 * 1.0 + fVar7 * 0.0 + fVar8 * 0.0 + 0.0);
  return;
}


