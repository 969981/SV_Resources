/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119c69c; name: FUN_0119c69c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0119c69c(undefined1 (*param_1) [16])

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [12];
  float fVar31;
  undefined1 auVar30 [16];
  float fVar32;
  undefined1 auVar33 [12];
  int iVar34;
  int iVar44;
  int iVar45;
  int iVar46;
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  
  uVar4 = _UNK_03cab648;
  uVar5 = _DAT_03cab640;
  if (*(int *)(DAT_0483af70 + 0xc0) == 0) {
    lVar7 = *(long *)(DAT_0483af70 + 0x88);
    lVar1 = DAT_0483af70 + 0x80;
    if (lVar7 != lVar1) {
      pfVar8 = (float *)PTR_DAT_047d41d0;
      pfVar9 = (float *)PTR_DAT_047d4180;
      pfVar10 = (float *)PTR_DAT_047d41a0;
      pfVar11 = (float *)PTR_DAT_047d4190;
      pfVar12 = (float *)PTR_DAT_047d41c0;
      pfVar13 = (float *)PTR_DAT_047d41b0;
      do {
        if (*(char *)(lVar7 + 0x20) != '\0') {
          iVar34 = *(int *)(lVar7 + 0x30);
          if (iVar34 == 2) {
            fVar19 = *(float *)(lVar7 + 0x70);
            fVar22 = *(float *)(lVar7 + 0x74);
            fVar23 = *(float *)(lVar7 + 0x78);
            fVar32 = *(float *)(lVar7 + 0x7c);
            auVar59._0_4_ = fVar19 * *pfVar8 + fVar22 * pfVar8[1];
            auVar59._4_4_ = fVar23 * pfVar8[2] + fVar32 * pfVar8[3];
            auVar59._8_4_ = fVar19 * *pfVar8 + fVar22 * pfVar8[1];
            auVar59._12_4_ = fVar23 * pfVar8[2] + fVar32 * pfVar8[3];
            auVar25 = NEON_ext(auVar59,auVar59,4,1);
            fVar14 = auVar25._0_4_ + auVar25._4_4_;
            fVar24 = *(float *)*param_1;
            fVar27 = *(float *)(*param_1 + 4);
            fVar28 = *(float *)(*param_1 + 8);
            fVar15 = *(float *)(*param_1 + 0xc);
            fVar14 = ((float)(*pfVar9 <= fVar14) * fVar14 +
                     *pfVar10 * (float)(fVar14 < *pfVar9) * fVar14) - *pfVar11;
            if ((fVar14 < *pfVar12) || (*pfVar13 < fVar14)) {
              auVar61._0_4_ = fVar19 * fVar19 + fVar22 * fVar22;
              auVar61._4_4_ = fVar23 * fVar23 + fVar32 * fVar32;
              auVar61._8_4_ = fVar19 * fVar19 + fVar22 * fVar22;
              auVar61._12_4_ = fVar23 * fVar23 + fVar32 * fVar32;
              auVar25 = NEON_ext(auVar61,auVar61,4,1);
              fVar15 = auVar25._0_4_ + auVar25._4_4_;
              fVar16 = auVar25._8_4_ + auVar25._12_4_;
              fVar17 = auVar25._0_4_ + auVar25._4_4_;
              fVar18 = auVar25._8_4_ + auVar25._12_4_;
              fVar14 = *(float *)(lVar7 + 0x80);
              fVar2 = *(float *)(lVar7 + 0x84);
              fVar3 = *(float *)(lVar7 + 0x88);
              fVar24 = fVar24 - fVar14;
              fVar27 = fVar27 - fVar2;
              fVar28 = fVar28 - fVar3;
              fVar19 = -fVar19 / fVar15;
              fVar31 = -fVar22 / fVar16;
              fVar23 = -fVar23 / fVar17;
              fVar32 = fVar32 / fVar18;
              auVar49._4_4_ = fVar28;
              auVar49._0_4_ = fVar28;
              auVar49._8_4_ = fVar28;
              auVar49._12_4_ = fVar28;
              iVar34 = -(uint)(fVar15 == 0.0);
              iVar44 = -(uint)(fVar16 == 0.0);
              iVar45 = -(uint)(fVar17 == 0.0);
              iVar46 = -(uint)(fVar18 == 0.0);
              fVar22 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                                       CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                ~(byte)((uint)iVar34 >> 0x10),
                                                CONCAT11((byte)((uint)fVar19 >> 8) &
                                                         ~(byte)((uint)iVar34 >> 8),
                                                         SUB41(fVar19,0) & ~(byte)iVar34)));
              auVar29._0_8_ =
                   CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                            CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                                     CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar44 >> 8)
                                              ,CONCAT14(SUB41(fVar31,0) & ~(byte)iVar44,fVar22))));
              auVar29[8] = SUB41(fVar23,0) & ~(byte)iVar45;
              auVar29[9] = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar45 >> 8);
              auVar29[10] = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
              auVar29[0xb] = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
              auVar48[0xc] = SUB41(fVar32,0) & ~(byte)iVar46;
              auVar48._0_12_ = auVar29;
              auVar48[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar46 >> 8);
              auVar48[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
              auVar48[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
              auVar50._4_12_ = auVar49._4_12_;
              auVar50._0_4_ = fVar24;
              auVar52._0_8_ = auVar50._0_8_;
              auVar52._8_4_ = fVar27;
              auVar52._12_4_ = fVar28;
              auVar51._8_8_ = auVar52._8_8_;
              auVar51._4_4_ = fVar28;
              auVar51._0_4_ = fVar24;
              auVar53._0_12_ = auVar51._0_12_;
              auVar53._12_4_ = fVar28;
              auVar62 = NEON_ext(auVar53,auVar53,8,1);
              fVar15 = auVar48._12_4_;
              fVar16 = -fVar22;
              fVar23 = (float)((ulong)auVar29._0_8_ >> 0x20);
              fVar17 = -fVar23;
              fVar32 = auVar29._8_4_;
              fVar18 = -fVar32;
              auVar58._4_4_ = fVar32;
              auVar58._0_4_ = fVar32;
              auVar58._8_4_ = fVar32;
              auVar58._12_4_ = fVar32;
              auVar59 = NEON_ext(auVar58,auVar48,0xc,1);
              auVar35._4_4_ = fVar18;
              auVar35._0_4_ = fVar18;
              auVar35._8_4_ = fVar18;
              auVar35._12_4_ = fVar18;
              auVar60._4_4_ = fVar23;
              auVar60._0_4_ = fVar23;
              auVar60._8_4_ = fVar23;
              auVar60._12_4_ = fVar23;
              fVar31 = (float)uVar5;
              fVar63 = (float)((ulong)uVar5 >> 0x20);
              fVar64 = (float)uVar4;
              fVar65 = (float)((ulong)uVar4 >> 0x20);
              fVar19 = auVar62._0_4_;
              auVar54._4_12_ = auVar53._4_12_;
              auVar54._0_4_ = fVar19;
              auVar56._0_8_ = auVar54._0_8_;
              auVar56._8_4_ = auVar62._8_4_;
              auVar56._12_4_ = fVar28;
              auVar55._8_8_ = auVar56._8_8_;
              auVar55._4_4_ = fVar24;
              auVar55._0_4_ = fVar19;
              auVar57._0_12_ = auVar55._0_12_;
              auVar57._12_4_ = fVar27;
              auVar61 = NEON_ext(auVar60,auVar59,0xc,1);
              auVar25 = NEON_ext(auVar57,auVar62,8,1);
              auVar25 = NEON_ext(auVar25,auVar25,0xc,1);
              auVar36._4_12_ = auVar35._4_12_;
              auVar36._0_4_ = fVar16;
              auVar38._0_8_ = auVar36._0_8_;
              auVar38._8_4_ = fVar17;
              auVar38._12_4_ = fVar18;
              auVar37._8_8_ = auVar38._8_8_;
              auVar37._4_4_ = fVar18;
              auVar37._0_4_ = fVar16;
              auVar39._0_12_ = auVar37._0_12_;
              auVar39._12_4_ = fVar18;
              auVar26._0_4_ =
                   (fVar24 * fVar15 + fVar22 * fVar31 * 0.0 + auVar25._0_4_ * auVar61._0_4_ * fVar31
                   ) - auVar59._0_4_ * fVar19;
              auVar26._4_4_ =
                   (fVar27 * fVar15 + fVar23 * fVar63 * 0.0 + auVar25._4_4_ * auVar61._4_4_ * fVar63
                   ) - auVar59._4_4_ * auVar62._4_4_;
              auVar26._8_4_ =
                   (fVar28 * fVar15 + fVar32 * fVar64 * 0.0 + auVar25._8_4_ * auVar61._8_4_ * fVar64
                   ) - auVar59._8_4_ * auVar62._8_4_;
              auVar26._12_4_ =
                   (fVar15 * 0.0 + fVar24 * fVar22 * fVar65 +
                   auVar25._12_4_ * auVar61._12_4_ * fVar65) - auVar59._12_4_ * auVar62._12_4_;
              auVar62._4_4_ = auVar26._8_4_;
              auVar62._0_4_ = auVar26._8_4_;
              auVar62._8_4_ = auVar26._8_4_;
              auVar62._12_4_ = auVar26._8_4_;
              auVar47._4_4_ = auVar26._4_4_;
              auVar47._0_4_ = auVar26._4_4_;
              auVar47._8_4_ = auVar26._4_4_;
              auVar47._12_4_ = auVar26._4_4_;
              auVar59 = NEON_ext(auVar39,auVar39,8,1);
              auVar25 = NEON_ext(auVar62,auVar26,0xc,1);
              fVar19 = auVar59._0_4_;
              auVar40._4_12_ = auVar39._4_12_;
              auVar40._0_4_ = fVar19;
              auVar42._0_8_ = auVar40._0_8_;
              auVar42._8_4_ = auVar59._8_4_;
              auVar42._12_4_ = fVar18;
              auVar41._8_8_ = auVar42._8_8_;
              auVar41._4_4_ = fVar16;
              auVar41._0_4_ = fVar19;
              auVar43._0_12_ = auVar41._0_12_;
              auVar43._12_4_ = fVar17;
              auVar48 = NEON_ext(auVar47,auVar25,0xc,1);
              auVar61 = NEON_ext(auVar43,auVar59,8,1);
              auVar61 = NEON_ext(auVar61,auVar61,0xc,1);
              fVar22 = ABS(*(float *)(lVar7 + 0x60) * 0.5);
              fVar23 = ABS(*(float *)(lVar7 + 100) * 0.5);
              fVar32 = ABS(*(float *)(lVar7 + 0x68) * 0.5);
              auVar33._0_4_ = fVar14 - fVar22;
              auVar33._4_4_ = fVar2 - fVar23;
              auVar33._8_4_ = fVar3 - fVar32;
              fVar24 = fVar14 + ((fVar16 * auVar26._12_4_ + fVar15 * auVar26._0_4_ * fVar31 +
                                 auVar61._0_4_ * auVar48._0_4_ * fVar31) - auVar25._0_4_ * fVar19);
              fVar27 = fVar2 + ((fVar17 * auVar26._12_4_ + fVar15 * auVar26._4_4_ * fVar63 +
                                auVar61._4_4_ * auVar48._4_4_ * fVar63) -
                               auVar25._4_4_ * auVar59._4_4_);
              fVar28 = fVar3 + ((fVar18 * auVar26._12_4_ + fVar15 * auVar26._8_4_ * fVar64 +
                                auVar61._8_4_ * auVar48._8_4_ * fVar64) -
                               auVar25._8_4_ * auVar59._8_4_);
              fVar15 = *(float *)(lVar7 + 0x8c) + 0.0;
              auVar20._0_4_ = fVar14 + fVar22;
              auVar20._4_4_ = fVar2 + fVar23;
              auVar20._8_4_ = fVar3 + fVar32;
            }
            else {
              fVar19 = ABS(*(float *)(lVar7 + 0x60) * 0.5);
              fVar22 = ABS(*(float *)(lVar7 + 100) * 0.5);
              fVar23 = ABS(*(float *)(lVar7 + 0x68) * 0.5);
              auVar33._0_4_ = *(float *)(lVar7 + 0x80) - fVar19;
              auVar33._4_4_ = *(float *)(lVar7 + 0x84) - fVar22;
              auVar33._8_4_ = *(float *)(lVar7 + 0x88) - fVar23;
              auVar20._0_4_ = *(float *)(lVar7 + 0x80) + fVar19;
              auVar20._4_4_ = *(float *)(lVar7 + 0x84) + fVar22;
              auVar20._8_4_ = *(float *)(lVar7 + 0x88) + fVar23;
            }
            auVar30._0_4_ = fVar24 - auVar33._0_4_;
            auVar30._4_4_ = fVar27 - auVar33._4_4_;
            auVar30._8_4_ = fVar28 - auVar33._8_4_;
            auVar30._12_4_ = fVar15 - 0.0;
            auVar21._0_4_ = auVar20._0_4_ - fVar24;
            auVar21._4_4_ = auVar20._4_4_ - fVar27;
            auVar21._8_4_ = auVar20._8_4_ - fVar28;
            auVar21._12_4_ = 0.0 - fVar15;
            auVar25 = NEON_fmin(auVar30,auVar21,4);
            if (((0.0 <= auVar25._8_4_) && (0.0 <= auVar25._0_4_)) && (0.0 <= auVar25._4_4_))
            goto LAB_0119c7f8;
          }
          else if (iVar34 == 1) {
            fVar19 = *(float *)(lVar7 + 0x40) - *(float *)*param_1;
            fVar22 = *(float *)(lVar7 + 0x44) - *(float *)(*param_1 + 4);
            fVar23 = *(float *)(lVar7 + 0x48) - *(float *)(*param_1 + 8);
            fVar19 = fVar19 * fVar19;
            fVar22 = fVar22 * fVar22;
            fVar23 = fVar23 * fVar23;
            auVar25._0_4_ = fVar19 + fVar22;
            auVar25._4_4_ = fVar23 + 0.0;
            auVar25._8_4_ = fVar19 + fVar22;
            auVar25._12_4_ = fVar23 + 0.0;
            auVar25 = NEON_ext(auVar25,auVar25,4,1);
            if (auVar25._0_4_ + auVar25._4_4_ <= *(float *)(lVar7 + 0x50) * *(float *)(lVar7 + 0x50)
               ) goto LAB_0119c7f8;
          }
          else if ((iVar34 == 3) &&
                  (uVar6 = FUN_0119cfd8(*param_1,lVar7 + 0x90), pfVar8 = (float *)PTR_DAT_047d41d0,
                  pfVar9 = (float *)PTR_DAT_047d4180, pfVar10 = (float *)PTR_DAT_047d41a0,
                  pfVar11 = (float *)PTR_DAT_047d4190, pfVar12 = (float *)PTR_DAT_047d41c0,
                  pfVar13 = (float *)PTR_DAT_047d41b0, (uVar6 & 1) != 0)) goto LAB_0119c7f8;
        }
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != lVar1);
    }
    uVar5 = 0;
  }
  else {
LAB_0119c7f8:
    uVar5 = 1;
  }
  return uVar5;
}


