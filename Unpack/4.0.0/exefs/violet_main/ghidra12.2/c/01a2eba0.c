/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2eba0; name: FUN_01a2eba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a2eba0(long param_1,uint param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar1 = *(ulong *)(param_1 + 0x2d0);
  if ((param_2 & 1) == 0) {
    uVar1 = uVar1 & 0xfffffffffffffffb;
  }
  else {
    auVar20 = *(undefined1 (*) [16])(param_1 + 0x2a0);
    fVar4 = auVar20._8_4_;
    auVar11._4_4_ = fVar4;
    auVar11._0_4_ = fVar4;
    auVar11._8_4_ = fVar4;
    auVar11._12_4_ = fVar4;
    fVar2 = auVar20._0_4_;
    fVar7 = -fVar2;
    fVar3 = auVar20._4_4_;
    fVar9 = -fVar3;
    fVar10 = -fVar4;
    fVar5 = auVar20._12_4_;
    auVar19._4_4_ = fVar3;
    auVar19._0_4_ = fVar3;
    auVar19._8_4_ = fVar3;
    auVar19._12_4_ = fVar3;
    auVar11 = NEON_ext(auVar11,auVar20,0xc,1);
    fVar22 = (float)_DAT_03cab640;
    fVar23 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar24 = (float)_UNK_03cab648;
    fVar25 = (float)((ulong)_UNK_03cab648 >> 0x20);
    auVar20 = NEON_ext(auVar19,auVar11,0xc,1);
    auVar8._12_4_ = auVar11._12_4_;
    auVar6._0_4_ = (float)_DAT_03cabe60 * fVar5 + fVar2 * fVar22 * 0.0 +
                   (float)_DAT_03caaaa0 * auVar20._0_4_ * fVar22 +
                   (float)_DAT_03cab1d0 * auVar11._0_4_;
    auVar6._4_4_ = (float)((ulong)_DAT_03cabe60 >> 0x20) * fVar5 + fVar3 * fVar23 * 0.0 +
                   (float)((ulong)_DAT_03caaaa0 >> 0x20) * auVar20._4_4_ * fVar23 +
                   (float)((ulong)_DAT_03cab1d0 >> 0x20) * auVar11._4_4_;
    auVar6._8_4_ = (float)_UNK_03cabe68 * fVar5 + fVar4 * fVar24 * 0.0 +
                   (float)_UNK_03caaaa8 * auVar20._8_4_ * fVar24 +
                   (float)_UNK_03cab1d8 * auVar11._8_4_;
    auVar6._12_4_ =
         (float)((ulong)_UNK_03cabe68 >> 0x20) * fVar5 + fVar2 * fVar25 * 0.0 +
         (float)((ulong)_UNK_03caaaa8 >> 0x20) * auVar20._12_4_ * fVar25 +
         (float)((ulong)_UNK_03cab1d8 >> 0x20) * auVar8._12_4_;
    auVar20._4_4_ = auVar6._8_4_;
    auVar20._0_4_ = auVar6._8_4_;
    auVar20._8_4_ = auVar6._8_4_;
    auVar20._12_4_ = auVar6._8_4_;
    auVar12._4_12_ = auVar11._4_12_;
    auVar12._0_4_ = fVar7;
    auVar8._0_8_ = auVar12._0_8_;
    auVar8._8_4_ = fVar9;
    auVar18._8_8_ = auVar8._8_8_;
    auVar18._4_4_ = fVar10;
    auVar18._0_4_ = fVar7;
    auVar13._0_12_ = auVar18._0_12_;
    auVar13._12_4_ = fVar10;
    auVar21._4_4_ = auVar6._4_4_;
    auVar21._0_4_ = auVar6._4_4_;
    auVar21._8_4_ = auVar6._4_4_;
    auVar21._12_4_ = auVar6._4_4_;
    auVar20 = NEON_ext(auVar20,auVar6,0xc,1);
    auVar18 = NEON_ext(auVar13,auVar13,8,1);
    fVar2 = auVar18._0_4_;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = fVar2;
    auVar16._0_8_ = auVar14._0_8_;
    auVar16._8_4_ = auVar18._8_4_;
    auVar16._12_4_ = fVar10;
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._4_4_ = fVar7;
    auVar15._0_4_ = fVar2;
    auVar17._0_12_ = auVar15._0_12_;
    auVar17._12_4_ = fVar9;
    auVar8 = NEON_ext(auVar21,auVar20,0xc,1);
    auVar11 = NEON_ext(auVar17,auVar18,8,1);
    auVar11 = NEON_ext(auVar11,auVar11,0xc,1);
    *(ulong *)(param_1 + 0x2d0) = uVar1 | 4;
    uVar1 = uVar1 & 0xfffffffffffffff7 | 4;
    *(ulong *)(param_1 + 0x268) =
         (ulong)(uint)((fVar10 * auVar6._12_4_ + fVar5 * auVar6._8_4_ * fVar24 +
                       auVar11._8_4_ * auVar8._8_4_ * fVar24) - auVar20._8_4_ * auVar18._8_4_);
    *(ulong *)(param_1 + 0x260) =
         CONCAT44((fVar9 * auVar6._12_4_ + fVar5 * auVar6._4_4_ * fVar23 +
                  auVar11._4_4_ * auVar8._4_4_ * fVar23) - auVar20._4_4_ * auVar18._4_4_,
                  (fVar7 * auVar6._12_4_ + fVar5 * auVar6._0_4_ * fVar22 +
                  auVar11._0_4_ * auVar8._0_4_ * fVar22) - auVar20._0_4_ * fVar2);
  }
  *(ulong *)(param_1 + 0x2d0) = uVar1;
  return;
}


