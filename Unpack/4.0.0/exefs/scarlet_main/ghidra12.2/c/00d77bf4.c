/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d77bf4; name: FUN_00d77bf4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d77bf4(undefined4 *param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  undefined1 auVar7 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  (**(code **)(*param_2 + 0x40))(*param_1,param_2);
  (**(code **)(*param_2 + 0x50))(param_1[1],param_2);
  (**(code **)(*param_2 + 0x60))(param_1[2],param_2);
  (**(code **)(*param_2 + 0xa0))((int)*(undefined8 *)(param_1 + 4),param_2);
  (**(code **)(*param_2 + 0xa8))((int)*(undefined8 *)(param_1 + 8),param_2);
  uVar2 = (**(code **)(*param_2 + 0xb0))(param_2);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_2 + 0xb8))((int)*(undefined8 *)(param_1 + 0xc),param_2);
  }
  uVar2 = (**(code **)(*param_2 + 200))(param_2);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_2 + 0xd0))(param_1[0x10],param_2);
  }
  uVar2 = (**(code **)(*param_2 + 0x110))(param_2);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_2 + 0xf0))((int)*(undefined8 *)(param_1 + 0x14),param_2);
  }
  fVar23 = (float)*(undefined8 *)(param_1 + 6);
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
  fVar3 = (float)uVar1;
  fVar4 = (float)((ulong)uVar1 >> 0x20);
  auVar7._0_4_ = -fVar3;
  auVar6._8_4_ = -fVar23;
  auVar15._4_4_ = fVar23;
  auVar15._0_4_ = fVar23;
  auVar15._8_4_ = fVar23;
  auVar15._12_4_ = fVar23;
  auVar16._12_4_ = fVar5;
  auVar16._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
  auVar16 = NEON_ext(auVar15,auVar16,0xc,1);
  auVar6._4_4_ = auVar6._8_4_;
  auVar6._0_4_ = auVar6._8_4_;
  auVar6._12_4_ = auVar6._8_4_;
  auVar17._4_4_ = fVar4;
  auVar17._0_4_ = fVar4;
  auVar17._8_4_ = fVar4;
  auVar17._12_4_ = fVar4;
  auVar18 = NEON_ext(auVar17,auVar16,0xc,1);
  fVar25 = (float)_DAT_03cab640;
  fVar22 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar24 = (float)((ulong)_UNK_03cab648 >> 0x20);
  fVar21 = (float)_DAT_03cab1c0 * fVar5 + (float)_DAT_03cab5c0 * fVar3 * fVar25 +
           (float)_DAT_03cab1d0 * auVar18._0_4_ * fVar25 + (float)_DAT_03cac000 * auVar16._0_4_;
  fVar22 = (float)((ulong)_DAT_03cab1c0 >> 0x20) * fVar5 +
           (float)((ulong)_DAT_03cab5c0 >> 0x20) * fVar4 * fVar22 +
           (float)((ulong)_DAT_03cab1d0 >> 0x20) * auVar18._4_4_ * fVar22 +
           (float)((ulong)_DAT_03cac000 >> 0x20) * auVar16._4_4_;
  fVar23 = (float)_UNK_03cab1c8 * fVar5 + (float)_UNK_03cab5c8 * fVar23 * (float)_UNK_03cab648 +
           (float)_UNK_03cab1d8 * auVar18._8_4_ * (float)_UNK_03cab648 +
           (float)_UNK_03cac008 * auVar16._8_4_;
  fVar24 = (float)((ulong)_UNK_03cab1c8 >> 0x20) * fVar5 +
           (float)((ulong)_UNK_03cab5c8 >> 0x20) * fVar3 * fVar24 +
           (float)((ulong)_UNK_03cab1d8 >> 0x20) * auVar18._12_4_ * fVar24 +
           (float)((ulong)_UNK_03cac008 >> 0x20) * auVar16._12_4_;
  auVar19._4_4_ = fVar22;
  auVar19._0_4_ = fVar22;
  auVar19._8_4_ = fVar22;
  auVar19._12_4_ = fVar22;
  auVar18._4_4_ = fVar23;
  auVar18._0_4_ = fVar23;
  auVar18._8_4_ = fVar23;
  auVar18._12_4_ = fVar23;
  auVar20._4_4_ = fVar22;
  auVar20._0_4_ = fVar21;
  auVar20._8_4_ = fVar23;
  auVar20._12_4_ = fVar24;
  auVar18 = NEON_ext(auVar18,auVar20,0xc,1);
  auVar20 = NEON_ext(auVar19,auVar18,0xc,1);
  auVar7._4_12_ = auVar6._4_12_;
  auVar9._0_8_ = auVar7._0_8_;
  auVar9._8_4_ = -fVar4;
  auVar9._12_4_ = auVar6._8_4_;
  auVar8._8_8_ = auVar9._8_8_;
  auVar8._4_4_ = auVar6._8_4_;
  auVar8._0_4_ = auVar7._0_4_;
  auVar10._0_12_ = auVar8._0_12_;
  auVar10._12_4_ = auVar6._8_4_;
  auVar16 = NEON_ext(auVar10,auVar10,8,1);
  fVar3 = auVar16._0_4_;
  auVar11._4_12_ = auVar10._4_12_;
  auVar11._0_4_ = fVar3;
  auVar13._0_8_ = auVar11._0_8_;
  auVar13._8_4_ = auVar16._8_4_;
  auVar13._12_4_ = auVar6._8_4_;
  auVar12._8_8_ = auVar13._8_8_;
  auVar12._4_4_ = auVar7._0_4_;
  auVar12._0_4_ = fVar3;
  auVar14._0_12_ = auVar12._0_12_;
  auVar14._12_4_ = -fVar4;
  auVar16 = NEON_ext(auVar14,auVar16,8,1);
  auVar16 = NEON_ext(auVar16,auVar16,0xc,1);
                    /* WARNING: Could not recover jumptable at 0x00d77d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe0))
            ((auVar7._0_4_ * fVar24 + fVar5 * fVar21 * fVar25 +
             auVar16._0_4_ * auVar20._0_4_ * fVar25) - auVar18._0_4_ * fVar3,param_2);
  return;
}


