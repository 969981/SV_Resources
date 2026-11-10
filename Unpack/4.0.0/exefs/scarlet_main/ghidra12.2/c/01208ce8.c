/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01208ce8; name: FUN_01208ce8
 */


undefined8
FUN_01208ce8(undefined8 *param_1,float *param_2,undefined8 *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar12 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar18 = *(float *)(param_1 + 4);
  uVar8 = param_1[1];
  uVar6 = *param_1;
  fVar11 = *(float *)(param_1 + 2);
  fVar14 = *(float *)((long)param_1 + 0x14);
  fVar15 = *(float *)(param_1 + 3);
  fVar16 = *(float *)((long)param_1 + 0x1c);
  fVar10 = fVar11 * fVar18;
  fVar13 = fVar14 * fVar18;
  fVar19 = (float)*(undefined8 *)(param_2 + 4);
  fVar23 = fVar19 * param_2[8];
  fVar20 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar24 = fVar20 * param_2[8];
  fVar25 = fVar10 * fVar24 - fVar13 * fVar23;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar25 < 1.1920929e-07) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar25)) {
      bVar1 = fVar25 < -1.1920929e-07;
      bVar2 = fVar25 == -1.1920929e-07;
      bVar3 = false;
    }
  }
  fVar5 = (float)uVar6;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar21 = (float)*(undefined8 *)param_2;
  fVar22 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar17 = (float)uVar8;
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  if (bVar2 || bVar1 != bVar3) {
    if (param_5 != (float *)0x0) {
      *param_5 = (fVar13 * (fVar21 - fVar5) - fVar10 * (fVar22 - fVar7)) * (1.0 / fVar25);
    }
    fVar10 = (fVar24 * (fVar21 - fVar5) - fVar23 * (fVar22 - fVar7)) * (1.0 / fVar25);
    if (param_3 != (undefined8 *)0x0) {
      param_3[1] = CONCAT44(fVar9 + fVar16 * fVar18 * fVar10,fVar17 + fVar15 * fVar18 * fVar10);
      *param_3 = CONCAT44(fVar7 + fVar14 * fVar18 * fVar10,fVar5 + fVar11 * fVar18 * fVar10);
    }
  }
  else {
    fVar13 = (float)*(undefined8 *)(param_2 + 2);
    fVar11 = fVar19 * (fVar5 - fVar21);
    fVar14 = fVar20 * (fVar7 - fVar22);
    fVar10 = (float)*(undefined8 *)(param_2 + 6);
    fVar15 = fVar10 * (fVar17 - fVar13);
    fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) *
             (fVar9 - (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20));
    auVar12._0_4_ = fVar11 + fVar14;
    auVar12._4_4_ = fVar15 + fVar16;
    auVar12._8_4_ = fVar11 + fVar14;
    auVar12._12_4_ = fVar15 + fVar16;
    auVar12 = NEON_ext(auVar12,auVar12,4,1);
    fVar11 = fVar5 - (fVar21 + fVar19 * (auVar12._0_4_ + auVar12._4_4_));
    fVar14 = fVar7 - (fVar22 + fVar20 * (auVar12._8_4_ + auVar12._12_4_));
    fVar17 = fVar17 - (fVar13 + fVar10 * (auVar12._0_4_ + auVar12._4_4_));
    fVar10 = 0.0;
    fVar11 = fVar11 * fVar11;
    fVar14 = fVar14 * fVar14;
    fVar17 = fVar17 * fVar17;
    auVar4._0_4_ = fVar11 + fVar14;
    auVar4._4_4_ = fVar17 + 0.0;
    auVar4._8_4_ = fVar11 + fVar14;
    auVar4._12_4_ = fVar17 + 0.0;
    auVar12 = NEON_ext(auVar4,auVar4,4,1);
    fVar11 = auVar12._0_4_ + auVar12._4_4_;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar11 < 1.1920929e-07) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar11)) {
        bVar1 = fVar11 < -1.1920929e-07;
        bVar2 = fVar11 == -1.1920929e-07;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      return 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      param_3[1] = uVar8;
      *param_3 = uVar6;
    }
    if (param_5 != (float *)0x0) {
      fVar5 = *param_2 - fVar5;
      bVar1 = false;
      if ((-1.1920929e-07 < fVar5) && (bVar1 = false, !NAN(fVar5))) {
        bVar1 = fVar5 < 1.1920929e-07;
      }
      fVar11 = param_2[1] - fVar7;
      if (!bVar1) {
        fVar11 = fVar5;
      }
      *param_5 = fVar11 / param_2[8];
    }
  }
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (0.0 <= fVar10) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar10)) {
      bVar1 = fVar10 < 1.0;
      bVar2 = fVar10 == 1.0;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    return 0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar10;
  }
  return 1;
}


