/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f94ac; name: FUN_026f94ac
 */


void FUN_026f94ac(undefined1 param_1 [16],long param_2,void *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
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
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auStack_50 [48];
  
  fVar10 = param_1._4_4_;
  fVar8 = param_1._0_4_;
  fVar11 = *(float *)(param_2 + 0x1d0);
  fVar17 = *(float *)(param_2 + 0x1b0);
  fVar18 = *(float *)(param_2 + 0x1b4);
  fVar19 = *(float *)(param_2 + 0x1b8);
  fVar20 = *(float *)(param_2 + 0x1bc);
  fVar21 = (float)*(undefined8 *)(param_2 + 0x1c0) * fVar11;
  fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c0) >> 0x20) * fVar11;
  fVar23 = (float)*(undefined8 *)(param_2 + 0x1c8) * fVar11;
  fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c8) >> 0x20) * fVar11;
  fVar16 = (float)*(undefined8 *)(param_2 + 0x170);
  fVar26 = fVar16 * fVar16;
  fVar33 = fVar8 * fVar16;
  fVar34 = fVar10 * fVar16;
  fVar35 = param_1._8_4_ * fVar16;
  fVar36 = param_1._12_4_ * fVar16;
  fVar29 = fVar17 + fVar21;
  fVar30 = fVar18 + fVar22;
  fVar31 = fVar19 + fVar23;
  fVar32 = fVar20 + fVar11;
  fVar12 = (float)*(undefined8 *)((long)param_3 + 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x20) >> 0x20);
  uVar24 = CONCAT44(fVar18 - fVar13,fVar17 - fVar12);
  fVar14 = (float)*(undefined8 *)((long)param_3 + 0x28);
  fVar15 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x28) >> 0x20);
  uVar25 = CONCAT44(fVar20 - fVar15,fVar19 - fVar14);
  fVar37 = (fVar17 - fVar12) * fVar33;
  fVar39 = (fVar18 - fVar13) * fVar34;
  fVar40 = (fVar19 - fVar14) * fVar35;
  fVar42 = (fVar20 - fVar15) * fVar36;
  auVar27._0_4_ = fVar37 + fVar39;
  auVar27._4_4_ = fVar40 + fVar42;
  auVar27._8_4_ = fVar37 + fVar39;
  auVar27._12_4_ = fVar40 + fVar42;
  auVar27 = NEON_ext(auVar27,auVar27,4,1);
  fVar37 = fVar29 - fVar12;
  fVar39 = fVar30 - fVar13;
  auVar28._0_8_ = CONCAT44(fVar39,fVar37);
  auVar28._8_4_ = fVar31 - fVar14;
  auVar28._12_4_ = fVar32 - fVar15;
  fVar37 = fVar33 * fVar37;
  fVar39 = fVar34 * fVar39;
  fVar40 = fVar17 - (auVar27._0_4_ + auVar27._4_4_) * (fVar33 / fVar26);
  fVar42 = fVar18 - (auVar27._8_4_ + auVar27._12_4_) * (fVar34 / fVar26);
  fVar41 = fVar19 - (auVar27._0_4_ + auVar27._4_4_) * (fVar35 / fVar26);
  fVar43 = fVar20 - (auVar27._8_4_ + auVar27._12_4_) * (fVar36 / fVar26);
  auVar38._0_4_ = fVar37 + fVar39;
  auVar38._4_4_ = fVar35 * auVar28._8_4_ + fVar36 * auVar28._12_4_;
  auVar38._8_4_ = fVar37 + fVar39;
  auVar38._12_4_ = fVar35 * auVar28._8_4_ + fVar36 * auVar28._12_4_;
  auVar27 = NEON_ext(auVar38,auVar38,4,1);
  fVar37 = (fVar29 - (fVar33 / fVar26) * (auVar27._0_4_ + auVar27._4_4_)) - fVar40;
  fVar39 = (fVar30 - (fVar34 / fVar26) * (auVar27._8_4_ + auVar27._12_4_)) - fVar42;
  fVar29 = (fVar31 - (fVar35 / fVar26) * (auVar27._0_4_ + auVar27._4_4_)) - fVar41;
  fVar26 = (fVar32 - (fVar36 / fVar26) * (auVar27._8_4_ + auVar27._12_4_)) - fVar43;
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar37 < 1.1920929e-07) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar37)) {
      bVar1 = fVar37 < -1.1920929e-07;
      bVar3 = fVar37 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar39))) {
    bVar2 = fVar39 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar39)) {
      bVar1 = fVar39 < -1.1920929e-07;
      bVar3 = fVar39 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar29))) {
    bVar2 = fVar29 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar29)) {
      bVar1 = fVar29 < -1.1920929e-07;
      bVar3 = fVar29 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar1 != bVar4) {
    fVar30 = (fVar12 - fVar40) * fVar37;
    fVar31 = (fVar13 - fVar42) * fVar39;
    fVar32 = (fVar14 - fVar41) * fVar29;
    fVar33 = (fVar15 - fVar43) * fVar26;
    auVar5._0_4_ = fVar30 + fVar31;
    auVar5._4_4_ = fVar32 + fVar33;
    auVar5._8_4_ = fVar30 + fVar31;
    auVar5._12_4_ = fVar32 + fVar33;
    auVar6._0_4_ = fVar37 * fVar37 + fVar39 * fVar39;
    auVar6._4_4_ = fVar29 * fVar29 + fVar26 * fVar26;
    auVar6._8_4_ = fVar37 * fVar37 + fVar39 * fVar39;
    auVar6._12_4_ = fVar29 * fVar29 + fVar26 * fVar26;
    auVar38 = NEON_ext(auVar5,auVar5,4,1);
    auVar27 = NEON_ext(auVar6,auVar6,4,1);
    fVar26 = (auVar38._0_4_ + auVar38._4_4_) / (auVar27._0_4_ + auVar27._4_4_);
    if ((0.0 < fVar26) && (uVar25 = auVar28._8_8_, uVar24 = auVar28._0_8_, fVar26 < 1.0)) {
      uVar24 = CONCAT44((fVar18 + fVar22 * fVar26) - fVar13,(fVar17 + fVar21 * fVar26) - fVar12);
      uVar25 = CONCAT44((fVar20 + fVar11 * fVar26) - fVar15,(fVar19 + fVar23 * fVar26) - fVar14);
    }
  }
  fVar17 = fVar8 * (float)uVar24;
  fVar18 = fVar10 * (float)((ulong)uVar24 >> 0x20);
  fVar19 = param_1._8_4_ * (float)uVar25;
  fVar20 = param_1._12_4_ * (float)((ulong)uVar25 >> 0x20);
  auVar7._0_4_ = fVar17 + fVar18;
  auVar7._4_4_ = fVar19 + fVar20;
  auVar7._8_4_ = fVar17 + fVar18;
  auVar7._12_4_ = fVar19 + fVar20;
  auVar27 = NEON_ext(auVar7,auVar7,4,1);
  fVar17 = auVar27._0_4_ + auVar27._4_4_;
  fVar18 = 1.0;
  if (fVar17 < 0.0) {
    fVar18 = 0.0;
  }
  fVar18 = fVar18 * fVar17;
  fVar17 = 1.0;
  if (fVar16 <= fVar18) {
    fVar17 = 0.0;
  }
  fVar19 = 1.0;
  if (fVar16 > fVar18) {
    fVar19 = 0.0;
  }
  fVar17 = fVar18 * fVar17 + fVar16 * fVar19;
  if (fVar17 / fVar16 <= 0.0) {
    memcpy(auStack_50,param_3,0x30);
  }
  else {
    uVar9 = FUN_02370200(param_3);
    FUN_015e8ddc(uVar9,*(undefined8 *)((long)param_3 + 0x10),
                 CONCAT44(fVar13 + fVar10 * fVar17,fVar12 + fVar8 * fVar17),auStack_50);
  }
  FUN_026f8a48(param_2,auStack_50);
  return;
}


