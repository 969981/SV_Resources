/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fc044; name: FUN_026fc044
 */


undefined8
FUN_026fc044(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
            float *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar19 = *(float *)(param_1 + 4);
  fVar13 = *(float *)(param_2 + 4);
  uVar10 = param_1[1];
  uVar8 = *param_1;
  fVar4 = *(float *)(param_1 + 2);
  fVar16 = *(float *)((long)param_1 + 0x14);
  fVar20 = fVar4 * fVar19;
  fVar21 = fVar16 * fVar19;
  fVar12 = (float)param_2[2];
  fVar14 = (float)((ulong)param_2[2] >> 0x20);
  fVar22 = fVar20 * fVar14 * fVar13 - fVar21 * fVar12 * fVar13;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar22 < 1.1920929e-07) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar22)) {
      bVar1 = fVar22 < -1.1920929e-07;
      bVar2 = fVar22 == -1.1920929e-07;
      bVar3 = false;
    }
  }
  fVar6 = (float)uVar8;
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  fVar7 = (float)*param_2;
  fVar15 = (float)((ulong)*param_2 >> 0x20);
  fVar18 = (float)uVar10;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  if (bVar2 || bVar1 != bVar3) {
    fVar12 = (fVar14 * fVar13 * (fVar7 - fVar6) - fVar12 * fVar13 * (fVar15 - fVar9)) *
             (1.0 / fVar22);
    fVar14 = (fVar21 * (fVar7 - fVar6) - fVar20 * (fVar15 - fVar9)) * (1.0 / fVar22);
    if (param_3 != (undefined8 *)0x0) {
      param_3[1] = CONCAT44(fVar11 + *(float *)((long)param_1 + 0x1c) * fVar19 * fVar12,
                            fVar18 + *(float *)(param_1 + 3) * fVar19 * fVar12);
      *param_3 = CONCAT44(fVar9 + fVar16 * fVar19 * fVar12,fVar6 + fVar4 * fVar19 * fVar12);
    }
  }
  else {
    fVar16 = (float)param_2[1];
    fVar19 = fVar12 * (fVar6 - fVar7);
    fVar20 = fVar14 * (fVar9 - fVar15);
    fVar4 = (float)param_2[3];
    fVar21 = fVar4 * (fVar18 - fVar16);
    fVar22 = (float)((ulong)param_2[3] >> 0x20) * (fVar11 - (float)((ulong)param_2[1] >> 0x20));
    auVar17._0_4_ = fVar19 + fVar20;
    auVar17._4_4_ = fVar21 + fVar22;
    auVar17._8_4_ = fVar19 + fVar20;
    auVar17._12_4_ = fVar21 + fVar22;
    auVar17 = NEON_ext(auVar17,auVar17,4,1);
    fVar19 = fVar6 - (fVar7 + fVar12 * (auVar17._0_4_ + auVar17._4_4_));
    fVar14 = fVar9 - (fVar15 + fVar14 * (auVar17._8_4_ + auVar17._12_4_));
    fVar18 = fVar18 - (fVar16 + fVar4 * (auVar17._0_4_ + auVar17._4_4_));
    fVar12 = 0.0;
    fVar19 = fVar19 * fVar19;
    fVar14 = fVar14 * fVar14;
    fVar18 = fVar18 * fVar18;
    auVar5._0_4_ = fVar19 + fVar14;
    auVar5._4_4_ = fVar18 + 0.0;
    auVar5._8_4_ = fVar19 + fVar14;
    auVar5._12_4_ = fVar18 + 0.0;
    auVar17 = NEON_ext(auVar5,auVar5,4,1);
    fVar4 = auVar17._0_4_ + auVar17._4_4_;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar4 < 1.1920929e-07) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 < -1.1920929e-07;
        bVar2 = fVar4 == -1.1920929e-07;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      return 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      param_3[1] = uVar10;
      *param_3 = uVar8;
    }
    fVar7 = fVar7 - fVar6;
    bVar1 = false;
    if ((-1.1920929e-07 < fVar7) && (bVar1 = false, !NAN(fVar7))) {
      bVar1 = fVar7 < 1.1920929e-07;
    }
    fVar14 = fVar15 - fVar9;
    if (!bVar1) {
      fVar14 = fVar7;
    }
    fVar14 = fVar14 / fVar13;
  }
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (0.0 <= fVar12) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar12)) {
      bVar1 = fVar12 < 1.0;
      bVar2 = fVar12 == 1.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= fVar14) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar14)) {
        bVar1 = fVar14 < 1.0;
        bVar2 = fVar14 == 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      if (param_4 != (float *)0x0) {
        *param_4 = fVar12;
      }
      if (param_5 != (float *)0x0) {
        *param_5 = fVar14;
      }
      return 1;
    }
  }
  return 0;
}


