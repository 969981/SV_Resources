/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341a340; name: FUN_0341a340
 */


undefined8 FUN_0341a340(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
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
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar6 = param_1[0x1e];
  fVar3 = fVar6 * fVar6;
  if (fVar3 <= 0.001) {
    return 0;
  }
  fVar4 = param_1[2];
  fVar5 = param_1[3] * fVar6;
  fVar15 = *param_3;
  fVar16 = param_3[1];
  fVar7 = param_1[4] * fVar6;
  fVar6 = param_1[5] * fVar6;
  fVar17 = param_3[2];
  fVar8 = param_1[1];
  fVar10 = fVar8 - param_2[1];
  fVar14 = *param_1 - *param_2;
  fVar13 = fVar4 - param_2[2];
  fVar12 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
  fVar9 = fVar14 * fVar5 + fVar7 * fVar10 + fVar6 * fVar13;
  if (fVar12 <= 0.001) {
LAB_0341a400:
    fVar9 = -fVar9;
  }
  else {
    fVar11 = fVar15 * fVar5 + fVar7 * fVar16 + fVar6 * fVar17;
    fVar18 = fVar12 * fVar3 - fVar11 * fVar11;
    if (fVar18 == 0.0) {
      return 0;
    }
    fVar10 = fVar15 * fVar14 + fVar10 * fVar16 + fVar13 * fVar17;
    fVar18 = (fVar11 * fVar10 - fVar12 * fVar9) / fVar18;
    fVar12 = (fVar10 + fVar11 * fVar18) / fVar12;
    if (fVar12 < 0.0) goto LAB_0341a400;
    if (fVar12 <= 1.0) goto LAB_0341a408;
    fVar9 = fVar11 - fVar9;
  }
  fVar18 = fVar9 / fVar3;
LAB_0341a408:
  bVar1 = false;
  bVar2 = false;
  if (0.0 < fVar18) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar18)) {
      bVar1 = fVar18 < 1.0;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    return 0;
  }
  *param_4 = *param_1 + fVar5 * fVar18;
  param_4[1] = fVar8 + fVar7 * fVar18;
  param_4[2] = fVar4 + fVar6 * fVar18;
  return 1;
}


