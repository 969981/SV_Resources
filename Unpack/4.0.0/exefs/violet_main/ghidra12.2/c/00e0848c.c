/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e0848c; name: FUN_00e0848c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e0848c(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  undefined1 auVar18 [16];
  int iVar20;
  float fVar21;
  float fVar22;
  int iVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  int iVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  float fVar34;
  
  uVar11 = _UNK_03caa5b8;
  uVar10 = _DAT_03caa5b0;
  if (*(int *)(param_1 + 0x40) != 2) {
    return;
  }
  auVar24 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x48) + 0x1c0);
  if ((*(char *)(param_1 + 0x57c) == '\0') && (*(int *)(param_1 + 0x578) == 2)) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x5a0);
LAB_00e084d8:
    lVar12 = *(long *)(param_1 + 0x130);
    lVar13 = *(long *)(lVar12 + 0x100);
    if (lVar13 == 0) {
      fVar15 = (float)_UNK_03cabe68;
      fVar17 = (float)((ulong)_UNK_03cabe68 >> 0x20);
      fVar14 = (float)_DAT_03cabe60;
      fVar16 = (float)((ulong)_DAT_03cabe60 >> 0x20);
    }
    else {
      fVar15 = (float)*(undefined8 *)(lVar13 + 0x48);
      fVar17 = (float)((ulong)*(undefined8 *)(lVar13 + 0x48) >> 0x20);
      fVar14 = (float)*(undefined8 *)(lVar13 + 0x40);
      fVar16 = (float)((ulong)*(undefined8 *)(lVar13 + 0x40) >> 0x20);
    }
    auVar18 = **(undefined1 (**) [16])PTR_PTR_047d1bb0;
    iVar20 = CONCAT13(auVar18[3] & auVar24[3],
                      CONCAT12(auVar18[2] & auVar24[2],
                               CONCAT11(auVar18[1] & auVar24[1],auVar18[0] & auVar24[0])));
    auVar30._0_8_ =
         CONCAT17(auVar18[7] & auVar24[7],
                  CONCAT16(auVar18[6] & auVar24[6],
                           CONCAT15(auVar18[5] & auVar24[5],CONCAT14(auVar18[4] & auVar24[4],iVar20)
                                   )));
    auVar30[8] = auVar18[8] & auVar24[8];
    auVar30[9] = auVar18[9] & auVar24[9];
    auVar30[10] = auVar18[10] & auVar24[10];
    auVar30[0xb] = auVar18[0xb] & auVar24[0xb];
    auVar32[0xc] = auVar18[0xc] & auVar24[0xc];
    auVar32._0_12_ = auVar30;
    auVar32[0xd] = auVar18[0xd] & auVar24[0xd];
    auVar32[0xe] = auVar18[0xe] & auVar24[0xe];
    auVar32[0xf] = auVar18[0xf] & auVar24[0xf];
    iVar20 = -(uint)(iVar20 == auVar18._0_4_);
    iVar25 = -(uint)((int)((ulong)auVar30._0_8_ >> 0x20) == auVar18._4_4_);
    iVar27 = -(uint)(auVar30._8_4_ == auVar18._8_4_);
    iVar29 = -(uint)(auVar32._12_4_ == auVar18._12_4_);
    if (CONCAT13(~(byte)((uint)iVar25 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18) &
                 ~(byte)((uint)iVar27 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                 CONCAT12(~(byte)((uint)iVar25 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10) &
                          ~(byte)((uint)iVar27 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                          CONCAT11(~(byte)((uint)iVar25 >> 8) & ~(byte)((uint)iVar20 >> 8) &
                                   ~(byte)((uint)iVar27 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                   ~(byte)iVar25 & ~(byte)iVar20 & ~(byte)iVar27 & ~(byte)iVar29)))
        != 0) {
      fVar21 = fVar14 * auVar24._0_4_;
      fVar26 = fVar16 * auVar24._4_4_;
      fVar28 = fVar15 * auVar24._8_4_;
      fVar22 = fVar28 + fVar21 + fVar26;
      fVar28 = fVar28 + fVar21 + fVar26;
      auVar18._0_4_ = auVar24._0_4_ - fVar14 * fVar22;
      auVar18._4_4_ = auVar24._4_4_ - fVar16 * fVar28;
      auVar18._8_4_ = auVar24._8_4_ - fVar15 * fVar22;
      auVar18._12_4_ = auVar24._12_4_ - fVar17 * fVar28;
      fVar21 = auVar18._0_4_ * auVar18._0_4_ + auVar18._4_4_ * auVar18._4_4_ +
               auVar18._8_4_ * auVar18._8_4_;
      fVar22 = auVar18._0_4_ * auVar18._0_4_ + auVar18._4_4_ * auVar18._4_4_ +
               auVar18._8_4_ * auVar18._8_4_;
      uVar1 = (uint)(0.0 < fVar21);
      iVar20 = -uVar1;
      uVar2 = (uint)(0.0 < fVar22);
      iVar25 = -uVar2;
      if (fVar21 == 0.0) {
        fVar21 = 0.0;
        fVar22 = 0.0;
      }
      else {
        uVar33 = NEON_fmov(0x3f800000,4);
        fVar21 = (float)uVar33 / SQRT(fVar21);
        fVar22 = (float)((ulong)uVar33 >> 0x20) / SQRT(fVar22);
      }
      if (CONCAT13((byte)((uint)iVar25 >> 0x18) | (byte)((uint)iVar20 >> 0x18),
                   CONCAT12((byte)((uint)iVar25 >> 0x10) | (byte)((uint)iVar20 >> 0x10),
                            CONCAT11((byte)((uint)iVar25 >> 8) | (byte)((uint)iVar20 >> 8),
                                     (byte)iVar25 | (byte)iVar20))) != 0) {
        auVar23._0_4_ = (int)(uVar1 * -0x80000000) >> 0x1f;
        auVar23._4_4_ = (int)(uVar2 * -0x80000000) >> 0x1f;
        auVar23._8_4_ = (int)(uVar1 * -0x80000000) >> 0x1f;
        auVar23._12_4_ = (int)(uVar2 * -0x80000000) >> 0x1f;
        auVar31._0_4_ = auVar18._0_4_ * fVar21;
        auVar31._4_4_ = auVar18._4_4_ * fVar22;
        auVar31._8_4_ = auVar18._8_4_ * fVar21;
        auVar31._12_4_ = auVar18._12_4_ * fVar22;
        auVar18 = auVar18 ^ (auVar18 ^ auVar31) & auVar23;
        auVar24._4_4_ = fVar16;
        auVar24._0_4_ = fVar14;
        auVar24._8_4_ = fVar15;
        auVar24._12_4_ = fVar17;
        auVar3._4_4_ = fVar16;
        auVar3._0_4_ = fVar14;
        auVar3._8_4_ = fVar15;
        auVar3._12_4_ = fVar17;
        auVar24 = NEON_ext(auVar24,auVar3,4,1);
        auVar32 = NEON_ext(auVar18,auVar18,4,1);
        fVar26 = auVar18._0_4_;
        fVar28 = auVar18._4_4_;
        fVar19 = auVar18._8_4_;
        fVar21 = fVar14 * auVar32._0_4_ - auVar24._0_4_ * fVar26;
        fVar22 = fVar16 * auVar32._4_4_ - auVar24._4_4_ * fVar28;
        fVar14 = fVar15 * fVar26 - fVar14 * fVar19;
        fVar16 = fVar17 * fVar28 - fVar16 * auVar18._12_4_;
        auVar4._4_4_ = fVar22;
        auVar4._0_4_ = fVar21;
        auVar4._8_4_ = fVar14;
        auVar4._12_4_ = fVar16;
        auVar5._4_4_ = fVar22;
        auVar5._0_4_ = fVar21;
        auVar5._8_4_ = fVar14;
        auVar5._12_4_ = fVar16;
        auVar24 = NEON_ext(auVar4,auVar5,4,1);
        fVar15 = (float)*(undefined8 *)(lVar12 + 0x98);
        fVar17 = (float)((ulong)*(undefined8 *)(lVar12 + 0x98) >> 0x20);
        fVar14 = (float)*(undefined8 *)(lVar12 + 0x90);
        fVar16 = (float)((ulong)*(undefined8 *)(lVar12 + 0x90) >> 0x20);
        fVar26 = fVar26 * fVar14;
        fVar28 = fVar28 * fVar16;
        fVar22 = fVar19 * fVar15;
        fVar34 = auVar18._12_4_ * fVar17;
        auVar8._4_4_ = fVar28;
        auVar8._0_4_ = fVar26;
        auVar8._8_4_ = fVar22;
        auVar8._12_4_ = fVar34;
        auVar9._4_4_ = fVar28;
        auVar9._0_4_ = fVar26;
        auVar9._8_4_ = fVar22;
        auVar9._12_4_ = fVar34;
        auVar32 = NEON_ext(auVar8,auVar9,8,1);
        fVar14 = auVar24._0_4_ * fVar14;
        fVar16 = auVar24._4_4_ * fVar16;
        fVar15 = fVar21 * fVar15;
        fVar17 = fVar17 * 0.0;
        *(float *)(param_1 + 0x178) = fVar19;
        *(undefined4 *)(param_1 + 0x17c) = 0;
        *(long *)(param_1 + 0x170) = auVar18._0_8_;
        *(ulong *)(param_1 + 0x188) = (ulong)(uint)fVar21;
        *(long *)(param_1 + 0x180) = auVar24._0_8_;
        auVar6._4_4_ = fVar16;
        auVar6._0_4_ = fVar14;
        auVar6._8_4_ = fVar15;
        auVar6._12_4_ = fVar17;
        auVar7._4_4_ = fVar16;
        auVar7._0_4_ = fVar14;
        auVar7._8_4_ = fVar15;
        auVar7._12_4_ = fVar17;
        auVar24 = NEON_ext(auVar6,auVar7,8,1);
        fVar14 = auVar24._0_4_ + fVar14 + fVar16;
        *(float *)(param_1 + 400) = fVar26 + fVar28 + auVar32._0_4_;
        goto LAB_00e08608;
      }
    }
  }
  else if (*(int *)(*(long *)(param_1 + 0x48) + 400) == 0) goto LAB_00e084d8;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x178) = uVar11;
  *(undefined8 *)(param_1 + 0x170) = uVar10;
  *(undefined8 *)(param_1 + 0x188) = uVar11;
  *(undefined8 *)(param_1 + 0x180) = uVar10;
  fVar14 = 0.0;
LAB_00e08608:
  *(float *)(param_1 + 0x194) = fVar14;
  return;
}


