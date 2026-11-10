/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f877c; name: FUN_026f877c
 */


uint FUN_026f877c(undefined1 param_1 [16],long param_2,void *param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined4 uVar10;
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
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auStack_60 [48];
  
  fVar11 = param_1._4_4_;
  fVar9 = param_1._0_4_;
  fVar12 = *(float *)(param_2 + 0x1d0);
  fVar18 = *(float *)(param_2 + 0x1b0);
  fVar19 = *(float *)(param_2 + 0x1b4);
  fVar20 = *(float *)(param_2 + 0x1b8);
  fVar21 = *(float *)(param_2 + 0x1bc);
  fVar22 = (float)*(undefined8 *)(param_2 + 0x1c0) * fVar12;
  fVar23 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c0) >> 0x20) * fVar12;
  fVar24 = (float)*(undefined8 *)(param_2 + 0x1c8) * fVar12;
  fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c8) >> 0x20) * fVar12;
  fVar17 = (float)*(undefined8 *)(param_2 + 0x170);
  fVar27 = fVar17 * fVar17;
  fVar34 = fVar9 * fVar17;
  fVar35 = fVar11 * fVar17;
  fVar36 = param_1._8_4_ * fVar17;
  fVar37 = param_1._12_4_ * fVar17;
  fVar30 = fVar18 + fVar22;
  fVar31 = fVar19 + fVar23;
  fVar32 = fVar20 + fVar24;
  fVar33 = fVar21 + fVar12;
  fVar13 = (float)*(undefined8 *)((long)param_3 + 0x20);
  fVar14 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x20) >> 0x20);
  uVar25 = CONCAT44(fVar19 - fVar14,fVar18 - fVar13);
  fVar15 = (float)*(undefined8 *)((long)param_3 + 0x28);
  fVar16 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x28) >> 0x20);
  uVar26 = CONCAT44(fVar21 - fVar16,fVar20 - fVar15);
  fVar38 = (fVar18 - fVar13) * fVar34;
  fVar40 = (fVar19 - fVar14) * fVar35;
  fVar41 = (fVar20 - fVar15) * fVar36;
  fVar43 = (fVar21 - fVar16) * fVar37;
  auVar28._0_4_ = fVar38 + fVar40;
  auVar28._4_4_ = fVar41 + fVar43;
  auVar28._8_4_ = fVar38 + fVar40;
  auVar28._12_4_ = fVar41 + fVar43;
  auVar28 = NEON_ext(auVar28,auVar28,4,1);
  fVar38 = fVar30 - fVar13;
  fVar40 = fVar31 - fVar14;
  auVar29._0_8_ = CONCAT44(fVar40,fVar38);
  auVar29._8_4_ = fVar32 - fVar15;
  auVar29._12_4_ = fVar33 - fVar16;
  fVar38 = fVar34 * fVar38;
  fVar40 = fVar35 * fVar40;
  fVar41 = fVar18 - (auVar28._0_4_ + auVar28._4_4_) * (fVar34 / fVar27);
  fVar43 = fVar19 - (auVar28._8_4_ + auVar28._12_4_) * (fVar35 / fVar27);
  fVar42 = fVar20 - (auVar28._0_4_ + auVar28._4_4_) * (fVar36 / fVar27);
  fVar44 = fVar21 - (auVar28._8_4_ + auVar28._12_4_) * (fVar37 / fVar27);
  auVar39._0_4_ = fVar38 + fVar40;
  auVar39._4_4_ = fVar36 * auVar29._8_4_ + fVar37 * auVar29._12_4_;
  auVar39._8_4_ = fVar38 + fVar40;
  auVar39._12_4_ = fVar36 * auVar29._8_4_ + fVar37 * auVar29._12_4_;
  auVar28 = NEON_ext(auVar39,auVar39,4,1);
  fVar38 = (fVar30 - (fVar34 / fVar27) * (auVar28._0_4_ + auVar28._4_4_)) - fVar41;
  fVar40 = (fVar31 - (fVar35 / fVar27) * (auVar28._8_4_ + auVar28._12_4_)) - fVar43;
  fVar30 = (fVar32 - (fVar36 / fVar27) * (auVar28._0_4_ + auVar28._4_4_)) - fVar42;
  fVar27 = (fVar33 - (fVar37 / fVar27) * (auVar28._8_4_ + auVar28._12_4_)) - fVar44;
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar38 < 1.1920929e-07) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar38)) {
      bVar1 = fVar38 < -1.1920929e-07;
      bVar3 = fVar38 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar40))) {
    bVar2 = fVar40 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar40)) {
      bVar1 = fVar40 < -1.1920929e-07;
      bVar3 = fVar40 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar30))) {
    bVar2 = fVar30 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar30)) {
      bVar1 = fVar30 < -1.1920929e-07;
      bVar3 = fVar30 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar1 != bVar4) {
    fVar31 = (fVar13 - fVar41) * fVar38;
    fVar32 = (fVar14 - fVar43) * fVar40;
    fVar33 = (fVar15 - fVar42) * fVar30;
    fVar34 = (fVar16 - fVar44) * fVar27;
    auVar6._0_4_ = fVar31 + fVar32;
    auVar6._4_4_ = fVar33 + fVar34;
    auVar6._8_4_ = fVar31 + fVar32;
    auVar6._12_4_ = fVar33 + fVar34;
    auVar7._0_4_ = fVar38 * fVar38 + fVar40 * fVar40;
    auVar7._4_4_ = fVar30 * fVar30 + fVar27 * fVar27;
    auVar7._8_4_ = fVar38 * fVar38 + fVar40 * fVar40;
    auVar7._12_4_ = fVar30 * fVar30 + fVar27 * fVar27;
    auVar39 = NEON_ext(auVar6,auVar6,4,1);
    auVar28 = NEON_ext(auVar7,auVar7,4,1);
    fVar27 = (auVar39._0_4_ + auVar39._4_4_) / (auVar28._0_4_ + auVar28._4_4_);
    if ((0.0 < fVar27) && (uVar26 = auVar29._8_8_, uVar25 = auVar29._0_8_, fVar27 < 1.0)) {
      uVar25 = CONCAT44((fVar19 + fVar23 * fVar27) - fVar14,(fVar18 + fVar22 * fVar27) - fVar13);
      uVar26 = CONCAT44((fVar21 + fVar12 * fVar27) - fVar16,(fVar20 + fVar24 * fVar27) - fVar15);
    }
  }
  fVar18 = fVar9 * (float)uVar25;
  fVar19 = fVar11 * (float)((ulong)uVar25 >> 0x20);
  fVar20 = param_1._8_4_ * (float)uVar26;
  fVar21 = param_1._12_4_ * (float)((ulong)uVar26 >> 0x20);
  auVar8._0_4_ = fVar18 + fVar19;
  auVar8._4_4_ = fVar20 + fVar21;
  auVar8._8_4_ = fVar18 + fVar19;
  auVar8._12_4_ = fVar20 + fVar21;
  auVar28 = NEON_ext(auVar8,auVar8,4,1);
  fVar18 = auVar28._0_4_ + auVar28._4_4_;
  fVar19 = 1.0;
  if (fVar18 < 0.0) {
    fVar19 = 0.0;
  }
  fVar19 = fVar19 * fVar18;
  fVar18 = 1.0;
  if (fVar17 <= fVar19) {
    fVar18 = 0.0;
  }
  fVar20 = 1.0;
  if (fVar17 > fVar19) {
    fVar20 = 0.0;
  }
  fVar18 = fVar19 * fVar18 + fVar17 * fVar20;
  if (fVar18 / fVar17 <= 0.0) {
    memcpy(auStack_60,param_3,0x30);
  }
  else {
    uVar10 = FUN_02370200(param_3);
    FUN_015e8ddc(uVar10,*(undefined8 *)((long)param_3 + 0x10),
                 CONCAT44(fVar14 + fVar11 * fVar18,fVar13 + fVar9 * fVar18),auStack_60);
  }
  uVar5 = FUN_00ca3e00(param_2,auStack_60,param_4 & 1);
  return uVar5 & 1;
}


