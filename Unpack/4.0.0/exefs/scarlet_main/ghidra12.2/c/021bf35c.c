/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021bf35c; name: FUN_021bf35c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021bf35c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [12];
  ulong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  undefined1 auVar7 [16];
  undefined1 auVar6 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
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
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar3 = *(ulong *)(param_2 + 0x2d0);
  fVar23 = (float)*(undefined8 *)(param_2 + 0x2a8);
  fVar28 = (float)((ulong)*(undefined8 *)(param_2 + 0x2a8) >> 0x20);
  uVar1 = *(undefined8 *)*(undefined1 (*) [12])(param_2 + 0x2a0);
  auVar2 = *(undefined1 (*) [12])(param_2 + 0x2a0);
  fVar4 = (float)uVar1;
  fVar22 = (float)((ulong)uVar1 >> 0x20);
  *(ulong *)(param_2 + 0x2d0) = uVar3 & 0xffffffffffffffec;
  if (((uint)uVar3 >> 2 & 1) == 0) {
    *(ulong *)(param_2 + 0x2d0) = uVar3 & 0xffffffffffffffe0 | 8;
  }
  else {
    FUN_01a2eba0(param_2,1);
  }
  auVar5._0_4_ = -fVar4;
  auVar5._4_4_ = -fVar22;
  auVar5._8_4_ = -fVar23;
  auVar18._4_4_ = fVar23;
  auVar18._0_4_ = fVar23;
  auVar18._8_4_ = fVar23;
  auVar18._12_4_ = fVar23;
  auVar5._12_4_ = fVar28;
  auVar20._12_4_ = fVar28;
  auVar20._0_12_ = auVar2;
  auVar16 = NEON_ext(auVar18,auVar20,0xc,1);
  auVar19._4_4_ = fVar22;
  auVar19._0_4_ = fVar22;
  auVar19._8_4_ = fVar22;
  auVar19._12_4_ = fVar22;
  fVar27 = (float)_UNK_03cab648;
  fVar24 = (float)((ulong)_UNK_03cab648 >> 0x20);
  fVar25 = (float)_DAT_03cab640;
  fVar26 = (float)((ulong)_DAT_03cab640 >> 0x20);
  auVar20 = NEON_ext(auVar19,auVar16,0xc,1);
  fVar21 = (float)_DAT_03caa5b0 * fVar28 + fVar4 * fVar25 * 0.0 +
           (float)DAT_03cab620 * auVar20._0_4_ * fVar25 + (float)_DAT_03caad80 * auVar16._0_4_;
  fVar22 = (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar28 + fVar22 * fVar26 * 0.0 +
           (float)((ulong)DAT_03cab620 >> 0x20) * auVar20._4_4_ * fVar26 +
           (float)((ulong)_DAT_03caad80 >> 0x20) * auVar16._4_4_;
  fVar23 = (float)_UNK_03caa5b8 * fVar28 + fVar23 * fVar27 * 0.0 +
           (float)DAT_03cab628 * auVar20._8_4_ * fVar27 + (float)_UNK_03caad88 * auVar16._8_4_;
  fVar24 = (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar28 + fVar4 * fVar24 * 0.0 +
           (float)((ulong)DAT_03cab628 >> 0x20) * auVar20._12_4_ * fVar24 +
           (float)((ulong)_UNK_03caad88 >> 0x20) * auVar16._12_4_;
  auVar15._4_4_ = fVar23;
  auVar15._0_4_ = fVar23;
  auVar15._8_4_ = fVar23;
  auVar15._12_4_ = fVar23;
  auVar16._4_4_ = fVar22;
  auVar16._0_4_ = fVar21;
  auVar16._8_4_ = fVar23;
  auVar16._12_4_ = fVar24;
  auVar15 = NEON_ext(auVar15,auVar16,0xc,1);
  auVar17._4_4_ = fVar22;
  auVar17._0_4_ = fVar22;
  auVar17._8_4_ = fVar22;
  auVar17._12_4_ = fVar22;
  auVar18 = NEON_ext(auVar17,auVar15,0xc,1);
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = auVar5._0_4_;
  auVar8._0_8_ = auVar6._0_8_;
  auVar8._8_4_ = auVar5._4_4_;
  auVar8._12_4_ = fVar28;
  auVar7._8_8_ = auVar8._8_8_;
  auVar7._4_4_ = auVar5._8_4_;
  auVar7._0_4_ = auVar5._0_4_;
  auVar9._0_12_ = auVar7._0_12_;
  auVar9._12_4_ = auVar5._8_4_;
  auVar20 = NEON_ext(auVar9,auVar9,8,1);
  fVar4 = auVar20._0_4_;
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = fVar4;
  auVar12._0_8_ = auVar10._0_8_;
  auVar12._8_4_ = auVar20._8_4_;
  auVar12._12_4_ = auVar5._8_4_;
  auVar11._8_8_ = auVar12._8_8_;
  auVar11._4_4_ = auVar5._0_4_;
  auVar11._0_4_ = fVar4;
  auVar13._0_12_ = auVar11._0_12_;
  auVar13._12_4_ = auVar5._4_4_;
  auVar16 = NEON_ext(auVar13,auVar20,8,1);
  auVar16 = NEON_ext(auVar16,auVar16,0xc,1);
  auVar14._0_8_ =
       CONCAT44(-((auVar5._4_4_ * fVar24 + fVar28 * fVar22 * fVar26 +
                  auVar16._4_4_ * auVar18._4_4_ * fVar26) - auVar15._4_4_ * auVar20._4_4_),
                -((auVar5._0_4_ * fVar24 + fVar28 * fVar21 * fVar25 +
                  auVar16._0_4_ * auVar18._0_4_ * fVar25) - auVar15._0_4_ * fVar4));
  auVar14._8_4_ =
       -((auVar5._8_4_ * fVar24 + fVar28 * fVar23 * fVar27 + auVar16._8_4_ * auVar18._8_4_ * fVar27)
        - auVar15._8_4_ * auVar20._8_4_);
  auVar14._12_4_ = 0x80000000;
  *(long *)(param_2 + 600) = auVar14._8_8_;
  *(undefined8 *)(param_2 + 0x250) = auVar14._0_8_;
  *param_1 = param_2 + 0x128;
                    /* WARNING: Could not recover jumptable at 0x021bf46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x128) + 0x10))();
  return;
}


