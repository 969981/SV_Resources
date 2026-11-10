/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00853dc4; name: FUN_00853dc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00853dc4(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar9;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar18;
  undefined1 auVar14 [12];
  undefined8 uVar13;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  lVar3 = *(long *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar3 + 0x1f0);
  if (iVar1 == 3) {
    FUN_0325fab4(&local_50,*(undefined8 *)(lVar3 + 0x30));
    uVar13 = NEON_fminp(CONCAT44(fStack_34,fStack_44),CONCAT44(fStack_34,fStack_44),4);
    uVar13 = NEON_fmin(CONCAT44(fStack_24,fStack_24),uVar13,4);
    cVar2 = PTR_DAT_047d19d8
            [(-(uint)(fStack_34 <= (float)((ulong)uVar13 >> 0x20)) & 2) +
             (uint)(fStack_44 <= (float)uVar13) | -(uint)(fStack_24 <= (float)uVar13) & 4];
    fVar4 = *(float *)(PTR_DAT_047d19b0 + (long)cVar2 * 0x10 + 0x200);
    fVar5 = *(float *)(PTR_DAT_047d19b0 + (long)cVar2 * 0x10 + 0x204);
    fVar9 = *(float *)(PTR_DAT_047d19b0 + (long)cVar2 * 0x10 + 0x208);
    auVar7._0_4_ = local_30 * fVar9 + local_50 * fVar4 + fStack_40 * fVar5;
    auVar7._4_4_ = fStack_2c * fVar9 + fStack_4c * fVar4 + fStack_3c * fVar5;
    auVar7._8_4_ = fStack_28 * fVar9 + fStack_48 * fVar4 + fStack_38 * fVar5;
  }
  else if (iVar1 == 2) {
    auVar7 = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x120),0);
  }
  else if (iVar1 == 1) {
    auVar16 = *(undefined1 (*) [16])(lVar3 + 0x110);
    fVar5 = auVar16._0_4_ * auVar16._0_4_;
    fVar9 = auVar16._4_4_ * auVar16._4_4_;
    auVar15._0_12_ = auVar16._0_12_;
    auVar15._12_4_ = 0;
    auVar16._8_8_ = _UNK_03caaa68;
    auVar16._0_8_ = _DAT_03caaa60;
    auVar19 = a64_TBL(ZEXT816(0),auVar15,auVar16);
    auVar20._8_8_ = _UNK_03cabbb8;
    auVar20._0_8_ = _DAT_03cabbb0;
    auVar16 = a64_TBL(ZEXT816(0),auVar15,auVar20);
    fVar12 = auVar16._0_4_;
    auVar10._0_4_ = fVar12 * fVar12;
    auVar10._4_4_ = auVar16._4_4_ * auVar16._4_4_;
    auVar10._8_4_ = auVar16._8_4_ * auVar16._8_4_;
    auVar10._12_4_ = auVar16._12_4_ * auVar16._12_4_;
    auVar20 = NEON_ext(auVar10,auVar10,8,1);
    fVar4 = auVar20._0_4_ + auVar20._4_4_;
    auVar11._4_12_ = auVar19._4_12_;
    auVar11._0_4_ = -auVar19._0_4_;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = -fVar12;
    auVar19._0_8_ =
         CONCAT44(-(uint)(fVar5 + fVar9 < auVar10._0_4_ + auVar10._4_4_ + fVar4),
                  -(uint)(fVar5 + fVar9 < auVar10._0_4_ + auVar10._4_4_ + fVar4));
    auVar19._8_8_ = auVar19._0_8_;
    auVar11 = auVar11 ^ (auVar11 ^ auVar17) & auVar19;
    fVar4 = auVar11._0_4_;
    fVar5 = auVar11._4_4_;
    fVar9 = auVar11._8_4_;
    fVar12 = fVar4 * fVar4 + fVar5 * fVar5 + fVar9 * fVar9;
    fVar18 = fVar4 * fVar4 + fVar5 * fVar5 + fVar9 * fVar9;
    if (fVar12 == 0.0) {
      uVar13 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    }
    else {
      uVar13 = CONCAT44((float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x60) >> 0x20) /
                        SQRT(fVar18),(float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x60) / SQRT(fVar12))
      ;
    }
    auVar6._0_4_ = (int)((uint)(0.0 < fVar12) * -0x80000000) >> 0x1f;
    auVar6._4_4_ = (int)((uint)(0.0 < fVar18) * -0x80000000) >> 0x1f;
    auVar6._8_4_ = (int)((uint)(0.0 < fVar12) * -0x80000000) >> 0x1f;
    auVar14._0_4_ = fVar4 * (float)uVar13;
    auVar14._4_4_ = fVar5 * (float)((ulong)uVar13 >> 0x20);
    auVar14._8_4_ = fVar9 * (float)uVar13;
    auVar7 = auVar11._0_12_ ^ (auVar11._0_12_ ^ auVar14) & auVar6;
  }
  else {
    auVar7 = SUB1612(ZEXT816(0),0);
  }
  auVar8._12_4_ = 0;
  auVar8._0_12_ = auVar7;
  return auVar8;
}


