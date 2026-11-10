/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008621fc; name: FUN_008621fc
 */


void FUN_008621fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_10;
  float local_c;
  
  pfVar1 = (float *)*param_1;
  fVar12 = (float)((ulong)*param_2 >> 0x20);
  fVar11 = (float)*param_2;
  fVar13 = (float)param_2[1];
  auVar19._0_8_ =
       CONCAT44(pfVar1[1] * fVar11 + pfVar1[5] * fVar12 + pfVar1[9] * fVar13,
                *pfVar1 * fVar11 + pfVar1[4] * fVar12 + pfVar1[8] * fVar13);
  auVar19._8_4_ = pfVar1[2] * fVar11 + pfVar1[6] * fVar12 + pfVar1[10] * fVar13;
  auVar19._12_4_ = pfVar1[3] * fVar11 + pfVar1[7] * fVar12 + pfVar1[0xb] * fVar13;
  auVar16 = *(undefined1 (*) [16])(PTR_DAT_047d19c8 + 0x50);
  uVar14 = auVar16._0_8_;
  uVar17 = auVar16._8_8_;
  if ((int)*(uint *)(param_1 + 1) < 2) {
    auVar19._8_8_ = auVar19._8_8_;
  }
  else {
    lVar2 = (ulong)*(uint *)(param_1 + 1) - 1;
    pfVar3 = pfVar1 + 0x14;
    auVar8 = auVar16;
    do {
      auVar7._0_4_ = auVar8._0_4_ + (int)*(undefined8 *)(PTR_DAT_047d19c8 + 0x40);
      auVar7._4_4_ = auVar8._4_4_ + (int)((ulong)*(undefined8 *)(PTR_DAT_047d19c8 + 0x40) >> 0x20);
      auVar7._8_4_ = auVar8._8_4_ + (int)*(undefined8 *)(PTR_DAT_047d19c8 + 0x48);
      auVar7._12_4_ = auVar8._12_4_ + (int)((ulong)*(undefined8 *)(PTR_DAT_047d19c8 + 0x48) >> 0x20)
      ;
      lVar2 = lVar2 + -1;
      fVar20 = fVar11 * pfVar3[-8] + fVar12 * pfVar3[-4] + fVar13 * *pfVar3;
      fVar21 = fVar11 * pfVar3[-7] + fVar12 * pfVar3[-3] + fVar13 * pfVar3[1];
      fVar22 = fVar11 * pfVar3[-6] + fVar12 * pfVar3[-2] + fVar13 * pfVar3[2];
      fVar23 = fVar11 * pfVar3[-5] + fVar12 * pfVar3[-1] + fVar13 * pfVar3[3];
      auVar15._0_8_ = CONCAT44(-(uint)(auVar19._4_4_ < fVar21),-(uint)(auVar19._0_4_ < fVar20));
      auVar15._8_4_ = -(uint)(auVar19._8_4_ < fVar22);
      auVar15._12_4_ = -(uint)(auVar19._12_4_ < fVar23);
      auVar18._8_8_ = auVar15._8_8_;
      auVar18._0_8_ = auVar15._0_8_;
      auVar8._8_8_ = uVar17;
      auVar8._0_8_ = uVar14;
      auVar16._8_8_ = uVar17;
      auVar16._0_8_ = uVar14;
      auVar16 = auVar16 ^ (auVar8 ^ auVar7) & auVar15;
      uVar17 = auVar16._8_8_;
      uVar14 = auVar16._0_8_;
      auVar10._4_4_ = fVar21;
      auVar10._0_4_ = fVar20;
      auVar10._8_4_ = fVar22;
      auVar10._12_4_ = fVar23;
      auVar19 = auVar19 ^ (auVar19 ^ auVar10) & auVar18;
      pfVar3 = pfVar3 + 0xc;
      auVar8 = auVar7;
    } while (lVar2 != 0);
  }
  auVar8 = NEON_rev64(auVar19,4);
  auVar9._0_4_ = -(uint)(auVar8._0_4_ <= auVar19._0_4_);
  auVar9._4_4_ = -(uint)(auVar8._4_4_ <= auVar19._4_4_);
  auVar9._8_4_ = -(uint)(auVar8._8_4_ <= auVar19._8_4_);
  auVar9._12_4_ = -(uint)(auVar8._12_4_ <= auVar19._12_4_);
  auVar19 = NEON_fmax(auVar19,auVar8,4);
  auVar8 = NEON_rev64(auVar16,4);
  auVar8 = auVar8 ^ (auVar8 ^ auVar16) & auVar9;
  auVar16 = NEON_ext(auVar19,auVar19,8,1);
  auVar10 = NEON_ext(auVar8,auVar8,8,1);
  uVar6 = auVar10._0_8_ ^
          (auVar10._0_8_ ^ auVar8._0_8_) & (ulong)-(uint)(auVar16._0_4_ <= auVar19._0_4_);
  uVar5 = (uint)uVar6;
  uVar4 = (ulong)(uVar5 >> 2);
  if ((uVar5 & 3) == 2) {
    local_10 = pfVar1[uVar4 * 0xc + 2];
    local_c = pfVar1[uVar4 * 0xc + 6];
    pfVar1 = pfVar1 + uVar4 * 0xc + 10;
  }
  else if ((uVar5 & 3) == 1) {
    local_10 = pfVar1[uVar4 * 0xc + 1];
    local_c = pfVar1[uVar4 * 0xc + 5];
    pfVar1 = pfVar1 + uVar4 * 0xc + 9;
  }
  else if ((uVar6 & 3) == 0) {
    pfVar1 = pfVar1 + uVar4 * 0xc;
    local_10 = *pfVar1;
    local_c = pfVar1[4];
    pfVar1 = pfVar1 + 8;
  }
  else {
    local_10 = pfVar1[uVar4 * 0xc + 3];
    local_c = pfVar1[uVar4 * 0xc + 7];
    pfVar1 = pfVar1 + uVar4 * 0xc + 0xb;
  }
  param_3[1] = CONCAT44(uVar5,*pfVar1) | 0x3f00000000000000;
  *param_3 = CONCAT44(local_c,local_10);
  return;
}


