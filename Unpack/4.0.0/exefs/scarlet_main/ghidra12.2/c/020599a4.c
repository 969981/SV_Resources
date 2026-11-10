/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020599a4; name: FUN_020599a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_020599a4(long param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar12;
  undefined1 auVar4 [16];
  undefined1 auVar6 [16];
  undefined1 auVar5 [16];
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  undefined1 auVar7 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    auVar2 = ZEXT816(0);
  }
  else {
    auVar2 = FUN_00e42dbc(DAT_0485a0e8,param_1 + 0x24);
    fVar1 = auVar2._0_4_;
    auVar5._0_4_ = -fVar1;
    fVar20 = auVar2._4_4_;
    fVar12 = -fVar20;
    fVar21 = auVar2._8_4_;
    auVar4._8_4_ = -fVar21;
    fVar3 = auVar2._12_4_;
    auVar14._4_4_ = fVar21;
    auVar14._0_4_ = fVar21;
    auVar14._8_4_ = fVar21;
    auVar14._12_4_ = fVar21;
    auVar2 = NEON_ext(auVar14,auVar2,0xc,1);
    auVar17._4_4_ = fVar20;
    auVar17._0_4_ = fVar20;
    auVar17._8_4_ = fVar20;
    auVar17._12_4_ = fVar20;
    auVar18 = NEON_ext(auVar17,auVar2,0xc,1);
    fVar23 = (float)_DAT_03cab640;
    fVar24 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar25 = (float)_UNK_03cab648;
    fVar22 = (float)((ulong)_UNK_03cab648 >> 0x20);
    fVar19 = (float)_DAT_03caa5b0 * fVar3 + fVar1 * fVar23 * 0.0 +
             (float)DAT_03cab620 * auVar18._0_4_ * fVar23 + (float)_DAT_03caad80 * auVar2._0_4_;
    fVar20 = (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar3 + fVar20 * fVar24 * 0.0 +
             (float)((ulong)DAT_03cab620 >> 0x20) * auVar18._4_4_ * fVar24 +
             (float)((ulong)_DAT_03caad80 >> 0x20) * auVar2._4_4_;
    fVar21 = (float)_UNK_03caa5b8 * fVar3 + fVar21 * fVar25 * 0.0 +
             (float)DAT_03cab628 * auVar18._8_4_ * fVar25 + (float)_UNK_03caad88 * auVar2._8_4_;
    fVar22 = (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar3 + fVar1 * fVar22 * 0.0 +
             (float)((ulong)DAT_03cab628 >> 0x20) * auVar18._12_4_ * fVar22 +
             (float)((ulong)_UNK_03caad88 >> 0x20) * auVar2._12_4_;
    auVar4._4_4_ = auVar4._8_4_;
    auVar4._0_4_ = auVar4._8_4_;
    auVar4._12_4_ = auVar4._8_4_;
    auVar11._4_4_ = fVar21;
    auVar11._0_4_ = fVar21;
    auVar11._8_4_ = fVar21;
    auVar11._12_4_ = fVar21;
    auVar18._4_4_ = fVar20;
    auVar18._0_4_ = fVar19;
    auVar18._8_4_ = fVar21;
    auVar18._12_4_ = fVar22;
    auVar18 = NEON_ext(auVar11,auVar18,0xc,1);
    auVar15._4_4_ = fVar20;
    auVar15._0_4_ = fVar20;
    auVar15._8_4_ = fVar20;
    auVar15._12_4_ = fVar20;
    auVar5._4_12_ = auVar4._4_12_;
    auVar16._0_8_ = auVar5._0_8_;
    auVar16._8_4_ = fVar12;
    auVar16._12_4_ = auVar4._8_4_;
    auVar13._8_8_ = auVar16._8_8_;
    auVar13._4_4_ = auVar4._8_4_;
    auVar13._0_4_ = auVar5._0_4_;
    auVar6._0_12_ = auVar13._0_12_;
    auVar6._12_4_ = auVar4._8_4_;
    auVar13 = NEON_ext(auVar6,auVar6,8,1);
    fVar1 = auVar13._0_4_;
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = fVar1;
    auVar9._0_8_ = auVar7._0_8_;
    auVar9._8_4_ = auVar13._8_4_;
    auVar9._12_4_ = auVar4._8_4_;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._4_4_ = auVar5._0_4_;
    auVar8._0_4_ = fVar1;
    auVar10._0_12_ = auVar8._0_12_;
    auVar10._12_4_ = fVar12;
    auVar16 = NEON_ext(auVar15,auVar18,0xc,1);
    auVar2 = NEON_ext(auVar10,auVar13,8,1);
    auVar11 = NEON_ext(auVar2,auVar2,0xc,1);
    auVar2._0_4_ = -((auVar5._0_4_ * fVar22 + fVar3 * fVar19 * fVar23 +
                     auVar11._0_4_ * auVar16._0_4_ * fVar23) - auVar18._0_4_ * fVar1);
    auVar2._4_4_ = -((fVar12 * fVar22 + fVar3 * fVar20 * fVar24 +
                     auVar11._4_4_ * auVar16._4_4_ * fVar24) - auVar18._4_4_ * auVar13._4_4_);
    auVar2._8_4_ = -((auVar4._8_4_ * fVar22 + fVar3 * fVar21 * fVar25 +
                     auVar11._8_4_ * auVar16._8_4_ * fVar25) - auVar18._8_4_ * auVar13._8_4_);
    auVar2._12_4_ = 0x80000000;
  }
  return auVar2;
}


