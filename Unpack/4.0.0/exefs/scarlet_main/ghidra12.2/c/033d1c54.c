/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d1c54; name: FUN_033d1c54
 */


void FUN_033d1c54(long param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar29;
  float fVar31;
  undefined1 auVar26 [16];
  int iVar30;
  int iVar32;
  float fVar33;
  int iVar34;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar42;
  int iVar47;
  int iVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  
  fVar14 = *param_2;
  fVar13 = param_2[1];
  pfVar2 = param_2 + ((ulong)*(uint *)(param_1 + 8) & 0xfffffffe);
  fVar12 = *pfVar2;
  uVar9 = (ulong)*(uint *)(param_1 + 8) & 0xfffffffe;
  fVar11 = pfVar2[1];
  if ((int)uVar9 != 0) {
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar17 = NEON_fmov(0xbf800000,4);
    pfVar10 = param_2;
    do {
      fVar15 = pfVar10[1];
      fVar6 = pfVar10[3];
      fVar20 = pfVar10[4];
      fVar7 = pfVar10[5];
      fVar8 = pfVar10[7];
      auVar26._4_4_ = pfVar10[2];
      auVar26._0_4_ = *pfVar10;
      auVar26._8_4_ = fVar20;
      auVar26._12_4_ = pfVar10[6];
      auVar35._0_4_ = -(uint)(1e-18 < ABS(*pfVar10));
      auVar35._4_4_ = -(uint)(1e-18 < ABS(pfVar10[2]));
      auVar35._8_4_ = -(uint)(1e-18 < ABS(fVar20));
      auVar35._12_4_ = -(uint)(1e-18 < ABS(pfVar10[6]));
      auVar21._8_4_ = 0x219392ef;
      auVar21._0_8_ = 0x219392ef219392ef;
      auVar21._12_4_ = 0x219392ef;
      auVar26 = auVar26 ^ (auVar26 ^ auVar21) & ~auVar35;
      iVar50 = -(uint)(fVar15 < 0.0);
      iVar51 = -(uint)(fVar6 < 0.0);
      iVar52 = -(uint)(fVar7 < 0.0);
      iVar53 = -(uint)(fVar8 < 0.0);
      auVar36 = NEON_frecpe(auVar26,4);
      auVar21 = NEON_frecps(auVar26,auVar36,4);
      fVar20 = auVar36._0_4_ * fVar15 * auVar21._0_4_;
      fVar22 = auVar36._4_4_ * fVar6 * auVar21._4_4_;
      fVar23 = auVar36._8_4_ * fVar7 * auVar21._8_4_;
      fVar24 = auVar36._12_4_ * fVar8 * auVar21._12_4_;
      auVar37._0_8_ =
           CONCAT44(-(uint)(auVar16._4_4_ < ABS(fVar22)),-(uint)(auVar16._0_4_ < ABS(fVar20)));
      auVar37._8_4_ = -(uint)(auVar16._8_4_ < ABS(fVar23));
      auVar37._12_4_ = -(uint)(auVar16._12_4_ < ABS(fVar24));
      auVar38._8_8_ = auVar37._8_8_;
      auVar38._0_8_ = auVar37._0_8_;
      auVar46._8_4_ = 0x3e8f5c29;
      auVar46._0_8_ = 0x3e8f5c293e8f5c29;
      auVar46._12_4_ = 0x3e8f5c29;
      auVar4._8_4_ = 0x40649249;
      auVar4._0_8_ = 0x4064924940649249;
      auVar4._12_4_ = 0x40649249;
      auVar39._8_4_ = 0x40649249;
      auVar39._0_8_ = 0x4064924940649249;
      auVar39._12_4_ = 0x40649249;
      auVar39 = auVar39 ^ (auVar4 ^ auVar46) & auVar38;
      auVar43._8_8_ = auVar37._8_8_;
      auVar43._0_8_ = auVar37._0_8_;
      auVar3._8_4_ = 0x3e8f5c29;
      auVar3._0_8_ = 0x3e8f5c293e8f5c29;
      auVar3._12_4_ = 0x3e8f5c29;
      auVar44._8_4_ = 0x3e8f5c29;
      auVar44._0_8_ = 0x3e8f5c293e8f5c29;
      auVar44._12_4_ = 0x3e8f5c29;
      auVar44 = auVar44 ^ (auVar3 ^ auVar17) & auVar43;
      auVar40._0_4_ = (auVar39._0_4_ + fVar20 * fVar20) * auVar44._0_4_;
      auVar40._4_4_ = (auVar39._4_4_ + fVar22 * fVar22) * auVar44._4_4_;
      auVar40._8_4_ = (auVar39._8_4_ + fVar23 * fVar23) * auVar44._8_4_;
      auVar40._12_4_ = (auVar39._12_4_ + fVar24 * fVar24) * auVar44._12_4_;
      auVar45._0_4_ = -(uint)(1e-18 < ABS(auVar40._0_4_));
      auVar45._4_4_ = -(uint)(1e-18 < ABS(auVar40._4_4_));
      auVar45._8_4_ = -(uint)(1e-18 < ABS(auVar40._8_4_));
      auVar45._12_4_ = -(uint)(1e-18 < ABS(auVar40._12_4_));
      auVar36._8_4_ = 0x219392ef;
      auVar36._0_8_ = 0x219392ef219392ef;
      auVar36._12_4_ = 0x219392ef;
      auVar40 = auVar40 ^ (auVar40 ^ auVar36) & ~auVar45;
      auVar46 = NEON_frecpe(auVar40,4);
      auVar36 = NEON_frecps(auVar40,auVar46,4);
      iVar42 = -(uint)(0.0 <= fVar15);
      iVar47 = -(uint)(0.0 <= fVar6);
      iVar48 = -(uint)(0.0 <= fVar7);
      iVar49 = -(uint)(0.0 <= fVar8);
      fVar25 = auVar26._0_4_;
      fVar29 = auVar26._4_4_;
      fVar31 = auVar26._8_4_;
      fVar33 = auVar26._12_4_;
      auVar41._0_4_ = fVar25 * fVar25 + fVar15 * fVar15;
      auVar41._4_4_ = fVar29 * fVar29 + fVar6 * fVar6;
      auVar41._8_4_ = fVar31 * fVar31 + fVar7 * fVar7;
      auVar41._12_4_ = fVar33 * fVar33 + fVar8 * fVar8;
      iVar30 = -(uint)(fVar29 < 0.0);
      iVar32 = -(uint)(fVar31 < 0.0);
      iVar34 = -(uint)(fVar33 < 0.0);
      auVar27._0_8_ =
           CONCAT17((char)((uint)iVar30 >> 0x18),
                    CONCAT16((char)((uint)iVar30 >> 0x10),
                             CONCAT15((char)((uint)iVar30 >> 8),
                                      CONCAT14((char)iVar30,-(uint)(fVar25 < 0.0))))) &
           0x40490fdb40490fdb;
      auVar27[8] = (byte)iVar32 & 0xdb;
      auVar27[9] = (byte)((uint)iVar32 >> 8) & 0xf;
      auVar27[10] = (byte)((uint)iVar32 >> 0x10) & 0x49;
      auVar27[0xb] = (byte)((uint)iVar32 >> 0x18) & 0x40;
      auVar27[0xc] = (byte)iVar34 & 0xdb;
      auVar27[0xd] = (byte)((uint)iVar34 >> 8) & 0xf;
      auVar27[0xe] = (byte)((uint)iVar34 >> 0x10) & 0x49;
      auVar27[0xf] = (byte)((uint)iVar34 >> 0x18) & 0x40;
      fVar15 = (float)CONCAT13((byte)((uint)iVar50 >> 0x18) & auVar17[3] |
                               (byte)((uint)iVar42 >> 0x18) & auVar16[3],
                               CONCAT12((byte)((uint)iVar50 >> 0x10) & auVar17[2] |
                                        (byte)((uint)iVar42 >> 0x10) & auVar16[2],
                                        CONCAT11((byte)((uint)iVar50 >> 8) & auVar17[1] |
                                                 (byte)((uint)iVar42 >> 8) & auVar16[1],
                                                 (byte)iVar50 & auVar17[0] |
                                                 (byte)iVar42 & auVar16[0])));
      auVar18._0_8_ =
           CONCAT17((byte)((uint)iVar51 >> 0x18) & auVar17[7] |
                    (byte)((uint)iVar47 >> 0x18) & auVar16[7],
                    CONCAT16((byte)((uint)iVar51 >> 0x10) & auVar17[6] |
                             (byte)((uint)iVar47 >> 0x10) & auVar16[6],
                             CONCAT15((byte)((uint)iVar51 >> 8) & auVar17[5] |
                                      (byte)((uint)iVar47 >> 8) & auVar16[5],
                                      CONCAT14((byte)iVar51 & auVar17[4] | (byte)iVar47 & auVar16[4]
                                               ,fVar15))));
      auVar18[8] = (byte)iVar52 & auVar17[8] | (byte)iVar48 & auVar16[8];
      auVar18[9] = (byte)((uint)iVar52 >> 8) & auVar17[9] | (byte)((uint)iVar48 >> 8) & auVar16[9];
      auVar18[10] = (byte)((uint)iVar52 >> 0x10) & auVar17[10] |
                    (byte)((uint)iVar48 >> 0x10) & auVar16[10];
      auVar18[0xb] = (byte)((uint)iVar52 >> 0x18) & auVar17[0xb] |
                     (byte)((uint)iVar48 >> 0x18) & auVar16[0xb];
      auVar19[0xc] = (byte)iVar53 & auVar17[0xc] | (byte)iVar49 & auVar16[0xc];
      auVar19._0_12_ = auVar18;
      auVar19[0xd] = (byte)((uint)iVar53 >> 8) & auVar17[0xd] |
                     (byte)((uint)iVar49 >> 8) & auVar16[0xd];
      auVar19[0xe] = (byte)((uint)iVar53 >> 0x10) & auVar17[0xe] |
                     (byte)((uint)iVar49 >> 0x10) & auVar16[0xe];
      auVar19[0xf] = (byte)((uint)iVar53 >> 0x18) & auVar17[0xf] |
                     (byte)((uint)iVar49 >> 0x18) & auVar16[0xf];
      auVar5._8_4_ = 0x3fc90fdb;
      auVar5._0_8_ = 0x3fc90fdb3fc90fdb;
      auVar5._12_4_ = 0x3fc90fdb;
      auVar27 = auVar27 ^ (auVar27 ^ auVar5) & auVar37;
      auVar21 = NEON_frsqrte(auVar41,4);
      auVar28._0_4_ = -(auVar46._0_4_ * fVar20 * auVar36._0_4_ + fVar15 * auVar27._0_4_);
      auVar28._4_4_ =
           -(auVar46._4_4_ * fVar22 * auVar36._4_4_ +
            (float)((ulong)auVar18._0_8_ >> 0x20) * auVar27._4_4_);
      auVar28._8_4_ = -(auVar46._8_4_ * fVar23 * auVar36._8_4_ + auVar18._8_4_ * auVar27._8_4_);
      auVar28._12_4_ = -(auVar46._12_4_ * fVar24 * auVar36._12_4_ + auVar19._12_4_ * auVar27._12_4_)
      ;
      auVar21 = NEON_frecpe(auVar21,4);
      auVar36 = NEON_ext(auVar21,auVar21,8,1);
      auVar46 = NEON_ext(auVar28,auVar28,8,1);
      *pfVar10 = auVar21._0_4_;
      pfVar10[1] = auVar28._0_4_;
      pfVar10[2] = auVar21._4_4_;
      pfVar10[3] = auVar28._4_4_;
      pfVar1 = pfVar10 + 8;
      pfVar10[4] = auVar36._0_4_;
      pfVar10[5] = auVar46._0_4_;
      pfVar10[6] = auVar36._4_4_;
      pfVar10[7] = auVar46._4_4_;
      pfVar10 = pfVar1;
    } while (pfVar1 < param_2 + uVar9);
  }
  *param_2 = SQRT(fVar14 * fVar14 + fVar13 * fVar13);
  if (fVar14 == 0.0) {
    if (fVar13 <= 0.0) {
      if (fVar13 == 0.0) {
        fVar15 = 0.0;
        if ((int)fVar14 < 0) {
          fVar15 = 3.1415927;
        }
        goto LAB_033d1e80;
      }
      fVar15 = -1.5707964;
    }
    else {
      fVar15 = 1.5707964;
    }
  }
  else {
    fVar15 = fVar13 / fVar14;
    if (1.0 <= ABS(fVar15)) {
      if (0.0 <= fVar13) {
        fVar13 = 1.5707964;
      }
      else {
        fVar13 = -1.5707964;
      }
      fVar15 = fVar13 - fVar15 / (fVar15 * fVar15 + 0.28);
    }
    else {
      fVar15 = fVar15 / (fVar15 * fVar15 * 0.28 + 1.0);
      if (fVar14 < 0.0) {
        if (0.0 <= fVar13) {
          fVar13 = 3.1415927;
        }
        else {
          fVar13 = -3.1415927;
        }
        fVar15 = fVar15 + fVar13;
      }
    }
  }
LAB_033d1e80:
  param_2[1] = fVar15;
  *pfVar2 = SQRT(fVar12 * fVar12 + fVar11 * fVar11);
  if (fVar12 == 0.0) {
    if (fVar11 <= 0.0) {
      if (fVar11 == 0.0) {
        fVar13 = 0.0;
        if ((int)fVar12 < 0) {
          fVar13 = 3.1415927;
        }
        goto LAB_033d1f78;
      }
      fVar13 = -1.5707964;
    }
    else {
      fVar13 = 1.5707964;
    }
  }
  else {
    fVar13 = fVar11 / fVar12;
    if (1.0 <= ABS(fVar13)) {
      if (0.0 <= fVar11) {
        fVar11 = 1.5707964;
      }
      else {
        fVar11 = -1.5707964;
      }
      fVar13 = fVar11 - fVar13 / (fVar13 * fVar13 + 0.28);
    }
    else {
      fVar13 = fVar13 / (fVar13 * fVar13 * 0.28 + 1.0);
      if (fVar12 < 0.0) {
        if (0.0 <= fVar11) {
          fVar11 = 3.1415927;
        }
        else {
          fVar11 = -3.1415927;
        }
        fVar13 = fVar13 + fVar11;
      }
    }
  }
LAB_033d1f78:
  pfVar2[1] = fVar13;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}


