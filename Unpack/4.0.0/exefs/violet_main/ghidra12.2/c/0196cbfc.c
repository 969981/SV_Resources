/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196cbfc; name: FUN_0196cbfc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0196cbfc(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,undefined4 param_6)

{
  undefined1 auVar1 [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  float fVar10;
  undefined1 auVar7 [16];
  float fVar11;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  float fVar39;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulong uStack_28;
  
  local_30 = param_4._0_8_;
  fVar22 = param_3._8_4_;
  fVar21 = param_3._4_4_;
  fVar18 = param_3._0_4_;
  fVar11 = param_2._12_4_;
  fVar10 = param_2._8_4_;
  fVar9 = param_2._4_4_;
  fVar8 = param_2._0_4_;
  fVar5 = param_1._4_4_;
  fVar4 = param_1._0_4_;
  if (*(int *)(param_5 + 0x128) == 4) {
    fVar14 = param_1._8_4_;
    fVar15 = param_1._12_4_;
    auVar24._0_4_ = fVar4 * fVar4 + fVar5 * fVar5;
    auVar24._4_4_ = fVar14 * fVar14 + fVar15 * fVar15;
    auVar24._8_4_ = fVar4 * fVar4 + fVar5 * fVar5;
    auVar24._12_4_ = fVar14 * fVar14 + fVar15 * fVar15;
    auVar29._0_4_ = fVar8 * fVar8 + fVar9 * fVar9;
    auVar29._4_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar29._8_4_ = fVar8 * fVar8 + fVar9 * fVar9;
    auVar29._12_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar12 = NEON_fmov(0x3f800000,4);
    auVar16 = NEON_ext(auVar24,auVar24,4,1);
    auVar24 = NEON_ext(auVar29,auVar29,4,1);
    fVar23 = param_3._12_4_ * param_3._12_4_;
    fVar28 = SQRT(auVar16._0_4_ + auVar16._4_4_);
    auVar3._0_4_ = fVar18 * fVar18 + fVar21 * fVar21;
    auVar3._4_4_ = fVar22 * fVar22 + fVar23;
    auVar3._8_4_ = fVar18 * fVar18 + fVar21 * fVar21;
    auVar3._12_4_ = fVar22 * fVar22 + fVar23;
    auVar19 = NEON_ext(auVar3,auVar3,4,1);
    uStack_28 = (ulong)param_4._8_4_;
    fVar23 = SQRT(auVar24._0_4_ + auVar24._4_4_);
    fVar30 = SQRT(auVar19._0_4_ + auVar19._4_4_);
    auVar36._0_4_ = fVar4 / fVar28;
    auVar36._4_4_ = fVar5 / SQRT(auVar16._8_4_ + auVar16._12_4_);
    auVar36._8_4_ = fVar14 / SQRT(auVar16._0_4_ + auVar16._4_4_);
    auVar36._12_4_ = fVar15 / SQRT(auVar16._8_4_ + auVar16._12_4_);
    auVar29 = NEON_ext(auVar36,auVar36,8,1);
    uStack_48 = (ulong)(uint)fVar30;
    auVar17._0_4_ = fVar8 / fVar23;
    auVar17._4_4_ = fVar9 / SQRT(auVar24._8_4_ + auVar24._12_4_);
    auVar17._8_4_ = fVar10 / SQRT(auVar24._0_4_ + auVar24._4_4_);
    auVar17._12_4_ = fVar11 / SQRT(auVar24._8_4_ + auVar24._12_4_);
    fVar18 = fVar18 / fVar30;
    fVar21 = fVar21 / SQRT(auVar19._8_4_ + auVar19._12_4_);
    fVar22 = fVar22 / SQRT(auVar19._0_4_ + auVar19._4_4_);
    auVar16 = NEON_ext(auVar17,auVar17,8,1);
    fVar4 = auVar16._0_4_;
    fVar11 = auVar12._0_4_ + (float)_DAT_03cab3a0 * auVar36._0_4_ +
             (float)_DAT_03cac210 * auVar17._4_4_ + (float)_DAT_03cabb00 * fVar22;
    fVar14 = auVar12._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * auVar36._0_4_ +
             (float)((ulong)_DAT_03cac210 >> 0x20) * auVar17._4_4_ +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar22;
    fVar15 = auVar12._8_4_ + (float)_UNK_03cab3a8 * auVar36._0_4_ +
             (float)_UNK_03cac218 * auVar17._4_4_ + (float)_UNK_03cabb08 * fVar22;
    fVar22 = auVar12._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * auVar36._0_4_ +
             (float)((ulong)_UNK_03cac218 >> 0x20) * auVar17._4_4_ +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar22;
    auVar12 = NEON_fmov(0x40800000,4);
    auVar6._0_4_ = SQRT(fVar11) * 0.5 * auVar12._0_4_;
    auVar6._4_4_ = SQRT(fVar14) * 0.5 * auVar12._4_4_;
    auVar6._8_4_ = SQRT(fVar15) * 0.5 * auVar12._8_4_;
    auVar6._12_4_ = SQRT(fVar22) * 0.5 * auVar12._12_4_;
    auVar12 = NEON_frecpe(auVar6,4);
    auVar16 = NEON_frecps(auVar12,auVar6,4);
    auVar25._0_4_ = auVar12._0_4_ * auVar16._0_4_;
    auVar25._4_4_ = auVar12._4_4_ * auVar16._4_4_;
    auVar25._8_4_ = auVar12._8_4_ * auVar16._8_4_;
    auVar25._12_4_ = auVar12._12_4_ * auVar16._12_4_;
    auVar12 = NEON_frecps(auVar25,auVar6,4);
    fVar5 = auVar25._0_4_ * auVar12._0_4_;
    fVar8 = auVar25._4_4_ * auVar12._4_4_;
    fVar9 = auVar25._8_4_ * auVar12._8_4_;
    fVar10 = auVar25._12_4_ * auVar12._12_4_;
    fVar30 = auVar29._0_4_ + fVar18;
    auVar1._8_4_ = fVar4 + -fVar21;
    auVar1._4_4_ = fVar30;
    fVar35 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)fVar14) & -(uint)(fVar11 <= fVar14));
    fVar37 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)fVar14) & -(uint)(fVar11 <= fVar14));
    fVar38 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)fVar14) & -(uint)(fVar11 <= fVar14));
    fVar39 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)fVar14) & -(uint)(fVar11 <= fVar14));
    auVar1._0_4_ = (auVar36._4_4_ + auVar17._0_4_) * fVar5;
    auVar26._0_8_ = auVar1._0_8_ << 0x20;
    auVar26._8_4_ = fVar30 * fVar5;
    auVar26._12_4_ = (fVar4 + -fVar21) * fVar5;
    auVar27._4_12_ = auVar26._4_12_;
    auVar27._0_4_ = SQRT(fVar11) * 0.5;
    auVar20._0_4_ = (auVar29._0_4_ + fVar18) * fVar9;
    auVar20._4_4_ = (fVar4 + fVar21) * fVar9;
    auVar20._12_4_ = (auVar36._4_4_ - auVar17._0_4_) * fVar9;
    auVar7._0_4_ = (fVar4 - fVar21) * fVar10;
    auVar7._4_4_ = (fVar18 - auVar36._8_4_) * fVar10;
    auVar7._8_4_ = (auVar36._4_4_ - auVar17._0_4_) * fVar10;
    auVar12._4_4_ = SQRT(fVar14) * 0.5;
    auVar12._0_4_ = (auVar36._4_4_ + auVar17._0_4_) * fVar8;
    auVar12._8_4_ = (fVar4 + fVar21) * fVar8;
    auVar12._12_4_ = (fVar18 + -auVar36._8_4_) * fVar8;
    auVar19._4_4_ = -(uint)(fVar11 <= fVar14);
    auVar19._0_4_ = -(uint)(fVar11 <= fVar14);
    auVar19._8_4_ = -(uint)(fVar11 <= fVar14);
    auVar19._12_4_ = -(uint)(fVar11 <= fVar14);
    uVar31 = -(uint)(fVar35 <= fVar15);
    uVar32 = -(uint)(fVar37 <= fVar15);
    uVar33 = -(uint)(fVar38 <= fVar15);
    uVar34 = -(uint)(fVar39 <= fVar15);
    auVar20._8_4_ = SQRT(fVar15) * 0.5;
    auVar7._12_4_ = SQRT(fVar22) * 0.5;
    auVar16._4_4_ = uVar32;
    auVar16._0_4_ = uVar31;
    auVar16._8_4_ = uVar33;
    auVar16._12_4_ = uVar34;
    auVar20 = auVar20 ^ (auVar20 ^ auVar27 ^ (auVar27 ^ auVar12) & auVar19) & ~auVar16;
    auVar13._0_4_ =
         -(uint)((float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)fVar35) & ~uVar31) <= fVar22);
    auVar13._4_4_ =
         -(uint)((float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)fVar37) & ~uVar32) <= fVar22);
    auVar13._8_4_ =
         -(uint)((float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)fVar38) & ~uVar33) <= fVar22);
    auVar13._12_4_ =
         -(uint)((float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)fVar39) & ~uVar34) <= fVar22);
    auVar20 = auVar20 ^ (auVar20 ^ auVar7) & auVar13;
    local_50 = CONCAT44(fVar23,fVar28);
    uStack_38 = auVar20._8_8_;
    uStack_40 = auVar20._0_8_;
    uVar2 = *(undefined8 *)(param_5 + 0x130);
    FUN_00dfcd7c(&local_50);
    FUN_0277f78c(uVar2,param_6);
  }
  return;
}


