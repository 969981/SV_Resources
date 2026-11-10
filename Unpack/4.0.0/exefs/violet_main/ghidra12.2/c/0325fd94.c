/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0325fd94; name: FUN_0325fd94
 */


void FUN_0325fd94(undefined1 (*param_1) [12],undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  
  fVar17 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  auVar3 = *(undefined1 (*) [16])(param_1[1] + 4);
  auVar20 = NEON_ext(auVar3,auVar3,8,1);
  auVar18._12_4_ = fVar17;
  auVar18._0_12_ = *param_1;
  auVar26._12_4_ = fVar17;
  auVar26._0_12_ = *param_1;
  auVar18 = NEON_ext(auVar18,auVar26,8,1);
  pauVar1 = (undefined1 (*) [12])(param_1[2] + 8);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1[3] + 4) >> 0x20);
  fVar10 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar4._12_4_ = fVar19;
  auVar4._0_12_ = *pauVar1;
  auVar5._12_4_ = fVar19;
  auVar5._0_12_ = *pauVar1;
  auVar26 = NEON_ext(auVar4,auVar5,8,1);
  fVar23 = (float)*param_2 - (float)*(undefined8 *)param_1[4];
  fVar24 = (float)((ulong)*param_2 >> 0x20) - (float)((ulong)*(undefined8 *)param_1[4] >> 0x20);
  fVar25 = (float)param_2[1] - (float)*(undefined8 *)(param_1[4] + 8);
  uVar11 = 0;
  uVar14 = 0;
  fVar7 = auVar18._0_4_ * fVar25 +
          (float)*(undefined8 *)*param_1 * fVar23 +
          (float)((ulong)*(undefined8 *)*param_1 >> 0x20) * fVar24;
  fVar8 = auVar20._0_4_ * fVar25 + auVar3._0_4_ * fVar23 + auVar3._4_4_ * fVar24;
  fVar9 = auVar26._0_4_ * fVar25 + (float)*(undefined8 *)*pauVar1 * fVar23 + fVar10 * fVar24;
  fVar25 = auVar26._4_4_ * fVar25 + fVar10 * fVar23 + auVar26._4_4_ * fVar24;
  fVar10 = fVar17 + 0.0;
  fVar23 = auVar3._12_4_ + 0.0;
  fVar24 = fVar19 + 0.0;
  auVar20._4_4_ = fVar8;
  auVar20._0_4_ = fVar7;
  auVar20._8_4_ = fVar9;
  auVar20._12_4_ = fVar25;
  auVar6._4_4_ = 0.0 - auVar3._12_4_;
  auVar6._0_4_ = 0.0 - fVar17;
  auVar6._8_4_ = 0.0 - fVar19;
  auVar6._12_4_ = 0;
  auVar18 = NEON_fmax(auVar20,auVar6,4);
  auVar3[4] = SUB41(fVar23,0);
  auVar3._0_4_ = fVar10;
  auVar3[5] = (char)((uint)fVar23 >> 8);
  auVar3[6] = (char)((uint)fVar23 >> 0x10);
  auVar3[7] = (char)((uint)fVar23 >> 0x18);
  auVar3[8] = SUB41(fVar24,0);
  auVar3[9] = (char)((uint)fVar24 >> 8);
  auVar3[10] = (char)((uint)fVar24 >> 0x10);
  auVar3[0xb] = (char)((uint)fVar24 >> 0x18);
  auVar3._12_4_ = 0;
  auVar16 = NEON_fmin(auVar18,auVar3,4);
  fVar19 = auVar16._0_4_ - fVar7;
  fVar21 = auVar16._4_4_ - fVar8;
  fVar22 = auVar16._8_4_ - fVar9;
  fVar17 = fVar19 * fVar19 + fVar21 * fVar21 + fVar22 * fVar22;
  if (fVar17 == 0.0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = SQRT(fVar17);
    uVar11 = CONCAT44(fVar21 / SQRT(fVar19 * fVar19 + fVar21 * fVar21 + fVar22 * fVar22),
                      fVar19 / fVar17);
    uVar14 = (ulong)(uint)(fVar22 / fVar17);
  }
  if (fVar17 < 1e-05) {
    fVar17 = ABS(auVar16._0_4_);
    fVar21 = ABS(auVar16._4_4_);
    fVar12 = ABS(auVar16._8_4_);
    fVar19 = ABS(fVar17 - fVar10);
    fVar22 = ABS(fVar21 - fVar23);
    uVar11 = CONCAT44(fVar22,fVar19);
    fVar13 = ABS(fVar12 - fVar24);
    uVar11 = NEON_fminp(uVar11,uVar11,4);
    uVar11 = NEON_fmin(CONCAT44(fVar13,fVar13),uVar11,4);
    cVar2 = PTR_DAT_047d19d8
            [(-(uint)(fVar22 <= (float)((ulong)uVar11 >> 0x20)) & 2) +
             (uint)(fVar19 <= (float)uVar11) | -(uint)(fVar13 <= (float)uVar11) & 4];
    fVar10 = fVar17 - fVar10;
    if (cVar2 == '\x01') {
      fVar10 = fVar21 - fVar23;
    }
    fVar23 = fVar12 - fVar24;
    if (cVar2 != '\x02') {
      fVar23 = fVar10;
    }
    fVar17 = ABS(auVar16._12_4_) - 0.0;
    if (cVar2 != 3) {
      fVar17 = fVar23;
    }
    uVar15 = *(undefined8 *)((long)(PTR_DAT_047d19b0 + (long)(cVar2 + 0x20) * 0x10) + 8);
    uVar11 = *(undefined8 *)(PTR_DAT_047d19b0 + (long)(cVar2 + 0x20) * 0x10);
    fVar10 = (float)CONCAT13((byte)((ulong)uVar11 >> 0x18) ^
                             (byte)(-(uint)(0.0 < fVar7) >> 0x18) & 0x80,(int3)uVar11);
    uVar11 = CONCAT17((byte)((ulong)uVar11 >> 0x38) ^ (byte)(-(uint)(0.0 < fVar8) >> 0x18) & 0x80,
                      CONCAT16((char)((ulong)uVar11 >> 0x30),
                               CONCAT15((char)((ulong)uVar11 >> 0x28),
                                        CONCAT14((char)((ulong)uVar11 >> 0x20),fVar10))));
    fVar23 = (float)CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                             (byte)(-(uint)(0.0 < fVar9) >> 0x18) & 0x80,(int3)uVar15);
    uVar14 = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(-(uint)(0.0 < fVar25) >> 0x18) & 0x80,
                      CONCAT16((char)((ulong)uVar15 >> 0x30),
                               CONCAT15((char)((ulong)uVar15 >> 0x28),
                                        CONCAT14((char)((ulong)uVar15 >> 0x20),fVar23))));
    auVar16._0_4_ = fVar7 + fVar17 * fVar10;
    auVar16._4_4_ = fVar8 + fVar17 * (float)((ulong)uVar11 >> 0x20);
    auVar16._8_4_ = fVar9 + fVar17 * fVar23;
    auVar16._12_4_ = fVar25 + fVar17 * (float)(uVar14 >> 0x20);
  }
  param_3[1] = CONCAT44(fVar17,(int)uVar14);
  *param_3 = uVar11;
  param_3[3] = auVar16._8_8_;
  param_3[2] = auVar16._0_8_;
  *(undefined4 *)((long)param_3 + 0x1c) = 0x3f00001e;
  return;
}


