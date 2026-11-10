/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01acb168; name: FUN_01acb168
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acb168(long *param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar36;
  float fVar37;
  undefined1 auVar35 [16];
  float fVar38;
  undefined1 auVar39 [16];
  
  plVar8 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
  puVar6 = (uint *)(**(code **)(*plVar8 + 0x10))(plVar8,0x10,0x10);
  if (puVar6 == (uint *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    auVar2 = *param_2;
    pauVar1 = param_2 + 1;
    uVar18 = (undefined4)((ulong)*(undefined8 *)(param_2[1] + 8) >> 0x20);
    fVar17 = (float)*(undefined8 *)*pauVar1;
    fVar14 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar11 = NEON_fmov(0x3f800000,4);
    fVar3 = *(float *)param_2[2];
    fVar4 = *(float *)(param_2[2] + 4);
    fVar9 = *(float *)(param_2[2] + 8);
    auVar26._12_4_ = uVar18;
    auVar26._0_12_ = *(undefined1 (*) [12])*pauVar1;
    auVar33._12_4_ = uVar18;
    auVar33._0_12_ = *(undefined1 (*) [12])*pauVar1;
    auVar35 = NEON_ext(auVar26,auVar33,8,1);
    auVar39 = NEON_ext(auVar2,auVar2,8,1);
    fVar15 = auVar2._0_4_;
    fVar10 = auVar11._0_4_ + (float)_DAT_03cab3a0 * fVar15 + (float)_DAT_03cac210 * fVar14 +
             (float)_DAT_03cabb00 * fVar9;
    fVar12 = auVar11._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar15 +
             (float)((ulong)_DAT_03cac210 >> 0x20) * fVar14 +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar9;
    fVar13 = auVar11._8_4_ + (float)_UNK_03cab3a8 * fVar15 + (float)_UNK_03cac218 * fVar14 +
             (float)_UNK_03cabb08 * fVar9;
    fVar14 = auVar11._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar15 +
             (float)((ulong)_UNK_03cac218 >> 0x20) * fVar14 +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar9;
    fVar15 = SQRT(fVar10) * 0.5;
    fVar16 = SQRT(fVar13) * 0.5;
    auVar26 = NEON_fmov(0x40800000,4);
    auVar11._0_4_ = fVar15 * auVar26._0_4_;
    auVar11._4_4_ = SQRT(fVar12) * 0.5 * auVar26._4_4_;
    auVar11._8_4_ = fVar16 * auVar26._8_4_;
    auVar11._12_4_ = SQRT(fVar14) * 0.5 * auVar26._12_4_;
    auVar26 = NEON_frecpe(auVar11,4);
    auVar33 = NEON_frecps(auVar26,auVar11,4);
    fVar9 = auVar35._0_4_;
    auVar35._0_4_ = auVar26._0_4_ * auVar33._0_4_;
    auVar35._4_4_ = auVar26._4_4_ * auVar33._4_4_;
    auVar35._8_4_ = auVar26._8_4_ * auVar33._8_4_;
    auVar35._12_4_ = auVar26._12_4_ * auVar33._12_4_;
    auVar26 = NEON_frecps(auVar35,auVar11,4);
    fVar25 = auVar35._0_4_ * auVar26._0_4_;
    fVar27 = auVar35._4_4_ * auVar26._4_4_;
    fVar28 = auVar35._8_4_ * auVar26._8_4_;
    fVar29 = auVar35._12_4_ * auVar26._12_4_;
    fVar30 = auVar2._4_4_;
    fVar34 = (float)((uint)fVar10 ^ ((uint)fVar10 ^ (uint)fVar12) & -(uint)(fVar10 <= fVar12));
    fVar36 = (float)((uint)fVar10 ^ ((uint)fVar10 ^ (uint)fVar12) & -(uint)(fVar10 <= fVar12));
    fVar37 = (float)((uint)fVar10 ^ ((uint)fVar10 ^ (uint)fVar12) & -(uint)(fVar10 <= fVar12));
    fVar38 = (float)((uint)fVar10 ^ ((uint)fVar10 ^ (uint)fVar12) & -(uint)(fVar10 <= fVar12));
    fVar31 = (fVar17 + fVar30) * fVar25;
    fVar32 = (auVar39._0_4_ + fVar3) * fVar25;
    fVar25 = (fVar9 + -fVar4) * fVar25;
    fVar19 = (auVar39._0_4_ + fVar3) * fVar28;
    fVar21 = (fVar9 + fVar4) * fVar28;
    fVar28 = (fVar30 - fVar17) * fVar28;
    uVar20 = (uint)fVar19 ^
             ((uint)fVar19 ^
             (uint)fVar15 ^
             ((uint)fVar15 ^ (uint)((fVar30 + fVar17) * fVar27)) & -(uint)(fVar10 <= fVar12)) &
             ~-(uint)(fVar34 <= fVar13);
    uVar22 = (uint)fVar21 ^
             ((uint)fVar21 ^
             (uint)fVar31 ^ ((uint)fVar31 ^ (uint)(SQRT(fVar12) * 0.5)) & -(uint)(fVar10 <= fVar12))
             & ~-(uint)(fVar36 <= fVar13);
    uVar23 = (uint)fVar16 ^
             ((uint)fVar16 ^
             (uint)fVar32 ^
             ((uint)fVar32 ^ (uint)((fVar9 + fVar4) * fVar27)) & -(uint)(fVar10 <= fVar12)) &
             ~-(uint)(fVar37 <= fVar13);
    uVar24 = (uint)fVar28 ^
             ((uint)fVar28 ^
             (uint)fVar25 ^
             ((uint)fVar25 ^ (uint)((fVar3 + -auVar2._8_4_) * fVar27)) & -(uint)(fVar10 <= fVar12))
             & ~-(uint)(fVar38 <= fVar13);
    puVar6[2] = uVar23 ^ (uVar23 ^ (uint)((fVar30 - fVar17) * fVar29)) &
                         -(uint)((float)((uint)fVar37 ^
                                        ((uint)fVar37 ^ (uint)fVar13) & -(uint)(fVar37 <= fVar13))
                                <= fVar14);
    puVar6[3] = uVar24 ^ (uVar24 ^ (uint)(SQRT(fVar14) * 0.5)) &
                         -(uint)((float)((uint)fVar38 ^
                                        ((uint)fVar38 ^ (uint)fVar13) & -(uint)(fVar38 <= fVar13))
                                <= fVar14);
    *puVar6 = uVar20 ^ (uVar20 ^ (uint)((fVar9 - fVar4) * fVar29)) &
                       -(uint)((float)((uint)fVar34 ^
                                      ((uint)fVar34 ^ (uint)fVar13) & -(uint)(fVar34 <= fVar13)) <=
                              fVar14);
    puVar6[1] = uVar22 ^ (uVar22 ^ (uint)((fVar3 - auVar2._8_4_) * fVar29)) &
                         -(uint)((float)((uint)fVar36 ^
                                        ((uint)fVar36 ^ (uint)fVar13) & -(uint)(fVar36 <= fVar13))
                                <= fVar14);
    *param_1 = (long)puVar6;
    param_1[1] = (long)plVar8;
    param_1[2] = 0x10;
    param_1[3] = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


