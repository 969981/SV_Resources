/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341f140; name: FUN_0341f140
 */


void FUN_0341f140(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  float *pfVar7;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  if ((*(long *)(param_1 + 0x1c) == -1) || (param_1[0x16] == 0.0)) {
    param_1[0xc] = 3.4028235e+38;
    param_1[0xd] = 3.4028235e+38;
    param_1[0xe] = 3.4028235e+38;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  else {
    fVar11 = param_1[5];
    fVar22 = param_1[6];
    fVar18 = 0.0;
    fVar8 = param_1[10];
    fVar13 = 0.0;
    plVar4 = *(long **)(param_1 + 0x14);
    fVar27 = param_1[3];
    fVar25 = param_1[4];
    fVar14 = 0.0;
    fVar10 = 0.0;
    fVar33 = 0.0;
    fVar30 = 0.0;
    fVar29 = param_1[7];
    fVar26 = param_1[8];
    fVar15 = param_1[9];
    fVar3 = 0.0;
    fVar21 = param_1[0xb];
    lVar5 = (ulong)(uint)param_1[0x16] << 3;
    bVar6 = true;
    fVar32 = 0.0;
    fVar34 = 0.0;
    do {
      pfVar7 = (float *)*plVar4;
      fVar19 = pfVar7[0xc];
      fVar24 = pfVar7[0xd];
      fVar16 = -fVar24;
      fVar28 = *pfVar7 - pfVar7[3] * fVar19;
      fVar35 = pfVar7[6] * fVar16;
      fVar9 = pfVar7[1] - pfVar7[4] * fVar19;
      fVar23 = pfVar7[7] * fVar16;
      fVar16 = pfVar7[8] * fVar16;
      fVar17 = fVar35 + fVar28;
      fVar20 = fVar23 + fVar9;
      fVar12 = pfVar7[2] - pfVar7[5] * fVar19;
      fVar31 = fVar16 + fVar12;
      fVar1 = fVar17;
      fVar2 = fVar20;
      if (!bVar6) {
        fVar1 = fVar32;
        fVar2 = fVar3;
      }
      fVar3 = fVar2;
      fVar20 = fVar20 - fVar3;
      fVar17 = fVar17 - fVar1;
      fVar2 = fVar31;
      if (!bVar6) {
        fVar2 = fVar34;
      }
      fVar31 = fVar31 - fVar2;
      fVar34 = fVar17 * fVar27 + fVar25 * fVar20 + fVar11 * fVar31;
      fVar32 = fVar17 * fVar22 + fVar29 * fVar20 + fVar26 * fVar31;
      if (fVar34 <= fVar30) {
        if (fVar14 <= fVar34) goto LAB_0341f2ac;
      }
      else {
        fVar30 = fVar34;
LAB_0341f2ac:
        fVar34 = fVar14;
      }
      fVar14 = fVar17 * fVar15 + fVar8 * fVar20 + fVar21 * fVar31;
      if (fVar32 <= fVar33) {
        if (fVar13 <= fVar32) goto LAB_0341f2d4;
      }
      else {
        fVar33 = fVar32;
LAB_0341f2d4:
        fVar32 = fVar13;
      }
      fVar13 = fVar18;
      if (fVar14 < fVar18) {
        fVar13 = fVar14;
      }
      if (fVar14 <= fVar10) {
        fVar18 = fVar13;
      }
      fVar13 = pfVar7[6] * fVar24;
      fVar17 = pfVar7[7] * fVar24;
      if (fVar14 <= fVar10) {
        fVar14 = fVar10;
      }
      fVar24 = pfVar7[8] * fVar24;
      fVar31 = (fVar13 + fVar28) - fVar1;
      fVar10 = (fVar17 + fVar9) - fVar3;
      fVar20 = (fVar24 + fVar12) - fVar2;
      fVar12 = fVar31 * fVar22 + fVar29 * fVar10 + fVar26 * fVar20;
      fVar9 = fVar31 * fVar27 + fVar25 * fVar10 + fVar11 * fVar20;
      fVar20 = fVar31 * fVar15 + fVar8 * fVar10 + fVar21 * fVar20;
      fVar10 = fVar34;
      if (fVar9 < fVar34) {
        fVar10 = fVar9;
      }
      if (fVar9 <= fVar30) {
        fVar34 = fVar10;
        fVar9 = fVar30;
      }
      fVar30 = fVar32;
      if (fVar12 < fVar32) {
        fVar30 = fVar12;
      }
      if (fVar12 <= fVar33) {
        fVar32 = fVar30;
        fVar12 = fVar33;
      }
      fVar30 = fVar18;
      if (fVar20 < fVar18) {
        fVar30 = fVar20;
      }
      if (fVar20 <= fVar14) {
        fVar18 = fVar30;
        fVar20 = fVar14;
      }
      fVar33 = *pfVar7 + pfVar7[3] * fVar19;
      fVar14 = pfVar7[1] + pfVar7[4] * fVar19;
      fVar31 = pfVar7[2] + pfVar7[5] * fVar19;
      fVar30 = (fVar35 + fVar33) - fVar1;
      fVar23 = (fVar23 + fVar14) - fVar3;
      fVar10 = (fVar16 + fVar31) - fVar2;
      fVar16 = fVar30 * fVar27 + fVar25 * fVar23 + fVar11 * fVar10;
      fVar19 = fVar30 * fVar22 + fVar29 * fVar23 + fVar26 * fVar10;
      fVar10 = fVar30 * fVar15 + fVar8 * fVar23 + fVar21 * fVar10;
      fVar30 = fVar34;
      if (fVar16 < fVar34) {
        fVar30 = fVar16;
      }
      if (fVar16 <= fVar9) {
        fVar34 = fVar30;
        fVar16 = fVar9;
      }
      fVar30 = fVar32;
      if (fVar19 < fVar32) {
        fVar30 = fVar19;
      }
      if (fVar19 <= fVar12) {
        fVar32 = fVar30;
        fVar19 = fVar12;
      }
      fVar13 = (fVar13 + fVar33) - fVar1;
      fVar9 = (fVar24 + fVar31) - fVar2;
      fVar30 = fVar18;
      if (fVar10 < fVar18) {
        fVar30 = fVar10;
      }
      fVar12 = fVar18;
      if (fVar10 <= fVar20) {
        fVar12 = fVar30;
      }
      fVar18 = (fVar17 + fVar14) - fVar3;
      fVar30 = fVar13 * fVar27 + fVar25 * fVar18 + fVar11 * fVar9;
      if (fVar10 <= fVar20) {
        fVar10 = fVar20;
      }
      fVar33 = fVar13 * fVar22 + fVar29 * fVar18 + fVar26 * fVar9;
      fVar18 = fVar13 * fVar15 + fVar8 * fVar18 + fVar21 * fVar9;
      fVar13 = fVar34;
      if (fVar30 < fVar34) {
        fVar13 = fVar30;
      }
      fVar14 = fVar34;
      if (fVar30 <= fVar16) {
        fVar14 = fVar13;
        fVar30 = fVar16;
      }
      fVar34 = fVar32;
      if (fVar33 < fVar32) {
        fVar34 = fVar33;
      }
      fVar13 = fVar32;
      if (fVar33 <= fVar19) {
        fVar13 = fVar34;
        fVar33 = fVar19;
      }
      if (fVar18 <= fVar10) {
        if (fVar12 <= fVar18) goto LAB_0341f4b0;
      }
      else {
        fVar10 = fVar18;
LAB_0341f4b0:
        fVar18 = fVar12;
      }
      bVar6 = false;
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
      fVar32 = fVar1;
      fVar34 = fVar2;
    } while (lVar5 != 0);
    fVar30 = (fVar30 - fVar14) * 0.5;
    fVar32 = (fVar33 - fVar13) * 0.5;
    fVar33 = (fVar10 - fVar18) * 0.5;
    param_1[0xc] = fVar30;
    param_1[0xd] = fVar32;
    fVar30 = fVar30 + fVar14;
    fVar32 = fVar32 + fVar13;
    param_1[0xe] = fVar33;
    fVar33 = fVar33 + fVar18;
    param_1[2] = fVar2 + fVar11 * fVar30 + fVar26 * fVar32 + fVar21 * fVar33;
    *param_1 = fVar1 + fVar27 * fVar30 + fVar22 * fVar32 + fVar15 * fVar33;
    param_1[1] = fVar3 + fVar25 * fVar30 + fVar29 * fVar32 + fVar8 * fVar33;
  }
  return;
}


