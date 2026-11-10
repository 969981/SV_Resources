/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d2120; name: FUN_034d2120
 */


void FUN_034d2120(uint param_1,long param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar4;
  float *pfVar3;
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
  float afStack_210 [128];
  
  pfVar2 = afStack_210 + (ulong)param_1 * -4 + 0x80;
  pfVar1 = pfVar2 + (param_1 << 2);
  pfVar3 = pfVar2;
  do {
    pfVar4 = pfVar3 + 4;
    pfVar3[0] = 0.0;
    pfVar3[1] = 0.0;
    pfVar3[2] = 1.0;
    pfVar3[3] = 1.0;
    pfVar3 = pfVar4;
  } while (pfVar4 < pfVar1);
  fVar8 = *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_2 + 0x1c);
  fVar11 = *(float *)(param_2 + 0x20);
  fVar6 = fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11;
  fVar5 = 0.0;
  if (0.0 < fVar6) {
    fVar7 = 1.0;
    fVar6 = 1.0 / SQRT(fVar6);
    fVar8 = fVar6 * fVar8;
    fVar11 = fVar6 * fVar11;
    fVar6 = fVar6 * -fVar10;
    fVar10 = fVar8 * fVar8 + fVar6 * fVar6;
    if (1.1920929e-07 < fVar10) {
      fVar10 = SQRT(fVar10);
      fVar13 = 1.0 - fVar11;
      fVar6 = (1.0 / fVar10) * fVar6;
      fVar8 = (1.0 / fVar10) * fVar8;
      fVar12 = fVar8 * fVar10;
      fVar7 = fVar11 + fVar13 * fVar6 * fVar6;
      fVar9 = fVar6 * fVar13 * fVar8;
      fVar5 = -(fVar8 * fVar10);
      fVar13 = fVar11 + fVar13 * fVar8 * fVar8;
      fVar8 = fVar6 * fVar10;
      fVar6 = -(fVar6 * fVar10);
      goto LAB_034d2224;
    }
    if (fVar11 < 0.0) {
      fVar13 = -1.0;
      fVar9 = 0.0;
      fVar8 = 0.0;
      fVar12 = 0.0;
      fVar6 = 0.0;
      fVar11 = -1.0;
      goto LAB_034d2224;
    }
  }
  fVar7 = 1.0;
  fVar9 = 0.0;
  fVar8 = 0.0;
  fVar12 = 0.0;
  fVar6 = 0.0;
  fVar13 = 1.0;
  fVar11 = 1.0;
LAB_034d2224:
  do {
    fVar10 = *pfVar2;
    fVar14 = pfVar2[1];
    fVar15 = pfVar2[2];
    pfVar2 = pfVar2 + 4;
    *param_3 = fVar10 * fVar7 + fVar9 * fVar14 + fVar12 * fVar15;
    param_3[1] = fVar10 * fVar9 + fVar13 * fVar14 + fVar6 * fVar15;
    param_3[2] = fVar10 * fVar5 + fVar8 * fVar14 + fVar11 * fVar15;
    param_3 = param_3 + 4;
  } while (pfVar2 < pfVar1);
  return;
}


