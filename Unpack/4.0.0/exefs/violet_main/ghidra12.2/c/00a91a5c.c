/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a91a5c; name: FUN_00a91a5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00a91a5c(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar19;
  undefined1 auVar18 [16];
  float fVar20;
  undefined1 auVar21 [12];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar22 [16];
  float fVar28;
  undefined1 auVar23 [16];
  float fVar29;
  undefined1 auVar24 [16];
  float fVar30;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar35;
  float fVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  float fVar40;
  int iVar41;
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  
  if (((DAT_04837608 & 1) == 0) && (iVar35 = __cxa_guard_acquire(&DAT_04837608), iVar35 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  DAT_04837610 = DAT_048375f8;
  lVar3 = *(long *)(DAT_048375f8 + 0x1b8);
  fVar10 = (float)*param_1;
  fVar11 = (float)((ulong)*param_1 >> 0x20);
  fVar12 = (float)param_1[1];
  fVar13 = (float)((ulong)param_1[1] >> 0x20);
  if (lVar3 != *(long *)(DAT_048375f8 + 0x1c0)) {
    do {
      fVar14 = *(float *)(lVar3 + 0x20) - fVar10;
      fVar16 = *(float *)(lVar3 + 0x24) - fVar11;
      fVar17 = *(float *)(lVar3 + 0x28) - fVar12;
      fVar14 = fVar14 * fVar14;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      auVar15._0_4_ = fVar14 + fVar16;
      auVar15._4_4_ = fVar17 + 0.0;
      auVar15._8_4_ = fVar14 + fVar16;
      auVar15._12_4_ = fVar17 + 0.0;
      auVar15 = NEON_ext(auVar15,auVar15,4,1);
      if (auVar15._0_4_ + auVar15._4_4_ <= *(float *)(lVar3 + 0x30) * *(float *)(lVar3 + 0x30)) {
        if ((long *)*param_2 == (long *)param_2[1]) {
          DAT_04837610 = DAT_048375f8;
          return 1;
        }
        lVar4 = 0;
        plVar5 = (long *)*param_2;
        do {
          plVar6 = plVar5 + 4;
          if (*plVar5 == *(long *)(lVar3 + 0x40)) {
            lVar4 = lVar4 + 1;
          }
          plVar5 = plVar6;
        } while ((long *)param_2[1] != plVar6);
        if (lVar4 == 0) {
          DAT_04837610 = DAT_048375f8;
          return 1;
        }
      }
      lVar3 = lVar3 + 0x60;
    } while (lVar3 != *(long *)(DAT_048375f8 + 0x1c0));
  }
  lVar3 = *(long *)(DAT_048375f8 + 0x1f0);
  if (lVar3 != *(long *)(DAT_048375f8 + 0x1f8)) {
    fVar14 = *(float *)PTR_DAT_047d41b0;
    do {
      fVar16 = *(float *)(lVar3 + 0x30);
      fVar17 = *(float *)(lVar3 + 0x34);
      fVar19 = *(float *)(lVar3 + 0x38);
      fVar28 = *(float *)(lVar3 + 0x3c);
      fVar20 = fVar16 * (float)*(undefined8 *)PTR_DAT_047d41d0;
      fVar25 = fVar17 * (float)((ulong)*(undefined8 *)PTR_DAT_047d41d0 >> 0x20);
      fVar26 = fVar19 * (float)*(undefined8 *)(PTR_DAT_047d41d0 + 8);
      fVar27 = fVar28 * (float)((ulong)*(undefined8 *)(PTR_DAT_047d41d0 + 8) >> 0x20);
      auVar62._0_4_ = fVar20 + fVar25;
      auVar62._4_4_ = fVar26 + fVar27;
      auVar62._8_4_ = fVar20 + fVar25;
      auVar62._12_4_ = fVar26 + fVar27;
      auVar15 = NEON_ext(auVar62,auVar62,4,1);
      fVar20 = auVar15._0_4_ + auVar15._4_4_;
      fVar20 = ((float)(*(float *)PTR_DAT_047d4180 <= fVar20) * fVar20 +
               *(float *)PTR_DAT_047d41a0 * (float)(fVar20 < *(float *)PTR_DAT_047d4180) * fVar20) -
               *(float *)PTR_DAT_047d4190;
      bVar1 = false;
      bVar2 = true;
      if (*(float *)PTR_DAT_047d41c0 <= fVar20) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar20) && !NAN(fVar14)) {
          bVar1 = fVar20 == fVar14;
          bVar2 = fVar14 <= fVar20;
        }
      }
      if (bVar2 && !bVar1) {
        auVar64._0_4_ = fVar16 * fVar16 + fVar17 * fVar17;
        auVar64._4_4_ = fVar19 * fVar19 + fVar28 * fVar28;
        auVar64._8_4_ = fVar16 * fVar16 + fVar17 * fVar17;
        auVar64._12_4_ = fVar19 * fVar19 + fVar28 * fVar28;
        auVar15 = NEON_ext(auVar64,auVar64,4,1);
        fVar27 = auVar15._0_4_ + auVar15._4_4_;
        fVar7 = auVar15._8_4_ + auVar15._12_4_;
        fVar8 = auVar15._0_4_ + auVar15._4_4_;
        fVar9 = auVar15._8_4_ + auVar15._12_4_;
        fVar20 = *(float *)(lVar3 + 0x40);
        fVar25 = *(float *)(lVar3 + 0x44);
        fVar26 = *(float *)(lVar3 + 0x48);
        fVar16 = -fVar16 / fVar27;
        fVar17 = -fVar17 / fVar7;
        fVar19 = -fVar19 / fVar8;
        fVar28 = fVar28 / fVar9;
        iVar35 = -(uint)(fVar27 == 0.0);
        iVar37 = -(uint)(fVar7 == 0.0);
        iVar39 = -(uint)(fVar8 == 0.0);
        iVar41 = -(uint)(fVar9 == 0.0);
        fVar30 = fVar10 - fVar20;
        fVar33 = fVar11 - fVar25;
        fVar34 = fVar12 - fVar26;
        auVar52._4_4_ = fVar34;
        auVar52._0_4_ = fVar34;
        auVar52._8_4_ = fVar34;
        auVar52._12_4_ = fVar34;
        fVar7 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                                CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                         ~(byte)((uint)iVar35 >> 0x10),
                                         CONCAT11((byte)((uint)fVar16 >> 8) &
                                                  ~(byte)((uint)iVar35 >> 8),
                                                  SUB41(fVar16,0) & ~(byte)iVar35)));
        auVar21._0_8_ =
             CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                      CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                               CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar37 >> 8),
                                        CONCAT14(SUB41(fVar17,0) & ~(byte)iVar37,fVar7))));
        auVar21[8] = SUB41(fVar19,0) & ~(byte)iVar39;
        auVar21[9] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar39 >> 8);
        auVar21[10] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
        auVar21[0xb] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
        auVar23[0xc] = SUB41(fVar28,0) & ~(byte)iVar41;
        auVar23._0_12_ = auVar21;
        auVar23[0xd] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar41 >> 8);
        auVar23[0xe] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
        auVar23[0xf] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
        auVar53._4_12_ = auVar52._4_12_;
        auVar53._0_4_ = fVar30;
        auVar55._0_8_ = auVar53._0_8_;
        auVar55._8_4_ = fVar33;
        auVar55._12_4_ = fVar34;
        auVar54._8_8_ = auVar55._8_8_;
        auVar54._4_4_ = fVar34;
        auVar54._0_4_ = fVar30;
        auVar56._0_12_ = auVar54._0_12_;
        auVar56._12_4_ = fVar34;
        auVar65 = NEON_ext(auVar56,auVar56,8,1);
        fVar29 = auVar23._12_4_;
        fVar36 = -fVar7;
        fVar8 = (float)((ulong)auVar21._0_8_ >> 0x20);
        fVar38 = -fVar8;
        fVar9 = auVar21._8_4_;
        fVar40 = -fVar9;
        auVar61._4_4_ = fVar9;
        auVar61._0_4_ = fVar9;
        auVar61._8_4_ = fVar9;
        auVar61._12_4_ = fVar9;
        auVar62 = NEON_ext(auVar61,auVar23,0xc,1);
        auVar42._4_4_ = fVar40;
        auVar42._0_4_ = fVar40;
        auVar42._8_4_ = fVar40;
        auVar42._12_4_ = fVar40;
        auVar63._4_4_ = fVar8;
        auVar63._0_4_ = fVar8;
        auVar63._8_4_ = fVar8;
        auVar63._12_4_ = fVar8;
        fVar17 = (float)_DAT_03cab640;
        fVar19 = (float)((ulong)_DAT_03cab640 >> 0x20);
        fVar28 = (float)_UNK_03cab648;
        fVar27 = (float)((ulong)_UNK_03cab648 >> 0x20);
        fVar16 = auVar65._0_4_;
        auVar57._4_12_ = auVar56._4_12_;
        auVar57._0_4_ = fVar16;
        auVar59._0_8_ = auVar57._0_8_;
        auVar59._8_4_ = auVar65._8_4_;
        auVar59._12_4_ = fVar34;
        auVar58._8_8_ = auVar59._8_8_;
        auVar58._4_4_ = fVar30;
        auVar58._0_4_ = fVar16;
        auVar60._0_12_ = auVar58._0_12_;
        auVar60._12_4_ = fVar33;
        auVar64 = NEON_ext(auVar63,auVar62,0xc,1);
        auVar15 = NEON_ext(auVar60,auVar65,8,1);
        auVar15 = NEON_ext(auVar15,auVar15,0xc,1);
        auVar43._4_12_ = auVar42._4_12_;
        auVar43._0_4_ = fVar36;
        auVar45._0_8_ = auVar43._0_8_;
        auVar45._8_4_ = fVar38;
        auVar45._12_4_ = fVar40;
        auVar44._8_8_ = auVar45._8_8_;
        auVar44._4_4_ = fVar40;
        auVar44._0_4_ = fVar36;
        auVar46._0_12_ = auVar44._0_12_;
        auVar46._12_4_ = fVar40;
        auVar31._0_4_ =
             (fVar30 * fVar29 + fVar7 * fVar17 * 0.0 + auVar15._0_4_ * auVar64._0_4_ * fVar17) -
             auVar62._0_4_ * fVar16;
        auVar31._4_4_ =
             (fVar33 * fVar29 + fVar8 * fVar19 * 0.0 + auVar15._4_4_ * auVar64._4_4_ * fVar19) -
             auVar62._4_4_ * auVar65._4_4_;
        auVar31._8_4_ =
             (fVar34 * fVar29 + fVar9 * fVar28 * 0.0 + auVar15._8_4_ * auVar64._8_4_ * fVar28) -
             auVar62._8_4_ * auVar65._8_4_;
        auVar31._12_4_ =
             (fVar29 * 0.0 + fVar30 * fVar7 * fVar27 + auVar15._12_4_ * auVar64._12_4_ * fVar27) -
             auVar62._12_4_ * auVar65._12_4_;
        auVar24._4_4_ = auVar31._8_4_;
        auVar24._0_4_ = auVar31._8_4_;
        auVar24._8_4_ = auVar31._8_4_;
        auVar24._12_4_ = auVar31._8_4_;
        auVar51._4_4_ = auVar31._4_4_;
        auVar51._0_4_ = auVar31._4_4_;
        auVar51._8_4_ = auVar31._4_4_;
        auVar51._12_4_ = auVar31._4_4_;
        auVar62 = NEON_ext(auVar46,auVar46,8,1);
        auVar15 = NEON_ext(auVar24,auVar31,0xc,1);
        fVar16 = auVar62._0_4_;
        auVar47._4_12_ = auVar46._4_12_;
        auVar47._0_4_ = fVar16;
        auVar49._0_8_ = auVar47._0_8_;
        auVar49._8_4_ = auVar62._8_4_;
        auVar49._12_4_ = fVar40;
        auVar48._8_8_ = auVar49._8_8_;
        auVar48._4_4_ = fVar36;
        auVar48._0_4_ = fVar16;
        auVar50._0_12_ = auVar48._0_12_;
        auVar50._12_4_ = fVar38;
        auVar65 = NEON_ext(auVar51,auVar15,0xc,1);
        auVar64 = NEON_ext(auVar50,auVar62,8,1);
        auVar64 = NEON_ext(auVar64,auVar64,0xc,1);
        fVar27 = ABS(*(float *)(lVar3 + 0x20) * 0.5);
        fVar7 = ABS(*(float *)(lVar3 + 0x24) * 0.5);
        fVar8 = ABS(*(float *)(lVar3 + 0x28) * 0.5);
        fVar16 = fVar20 + ((fVar36 * auVar31._12_4_ + fVar29 * auVar31._0_4_ * fVar17 +
                           auVar64._0_4_ * auVar65._0_4_ * fVar17) - auVar15._0_4_ * fVar16);
        fVar17 = fVar25 + ((fVar38 * auVar31._12_4_ + fVar29 * auVar31._4_4_ * fVar19 +
                           auVar64._4_4_ * auVar65._4_4_ * fVar19) - auVar15._4_4_ * auVar62._4_4_);
        fVar19 = fVar26 + ((fVar40 * auVar31._12_4_ + fVar29 * auVar31._8_4_ * fVar28 +
                           auVar64._8_4_ * auVar65._8_4_ * fVar28) - auVar15._8_4_ * auVar62._8_4_);
        fVar28 = *(float *)(lVar3 + 0x4c) + 0.0;
        auVar32._0_4_ = fVar16 - (fVar20 - fVar27);
        auVar32._4_4_ = fVar17 - (fVar25 - fVar7);
        auVar32._8_4_ = fVar19 - (fVar26 - fVar8);
        auVar32._12_4_ = fVar28 - 0.0;
        auVar65._0_4_ = (fVar20 + fVar27) - fVar16;
        auVar65._4_4_ = (fVar25 + fVar7) - fVar17;
        auVar65._8_4_ = (fVar26 + fVar8) - fVar19;
        auVar65._12_4_ = 0.0 - fVar28;
        auVar15 = NEON_fmin(auVar32,auVar65,4);
        auVar21 = auVar15._0_12_;
      }
      else {
        fVar16 = ABS(*(float *)(lVar3 + 0x20) * 0.5);
        fVar17 = ABS(*(float *)(lVar3 + 0x24) * 0.5);
        fVar19 = ABS(*(float *)(lVar3 + 0x28) * 0.5);
        auVar22._0_4_ = fVar10 - (*(float *)(lVar3 + 0x40) - fVar16);
        auVar22._4_4_ = fVar11 - (*(float *)(lVar3 + 0x44) - fVar17);
        auVar22._8_4_ = fVar12 - (*(float *)(lVar3 + 0x48) - fVar19);
        auVar22._12_4_ = fVar13 - 0.0;
        auVar18._0_4_ = (*(float *)(lVar3 + 0x40) + fVar16) - fVar10;
        auVar18._4_4_ = (*(float *)(lVar3 + 0x44) + fVar17) - fVar11;
        auVar18._8_4_ = (*(float *)(lVar3 + 0x48) + fVar19) - fVar12;
        auVar18._12_4_ = 0.0 - fVar13;
        auVar15 = NEON_fmin(auVar22,auVar18,4);
        auVar21 = auVar15._0_12_;
      }
      if (((0.0 <= auVar21._8_4_) && (0.0 <= auVar21._0_4_)) && (0.0 <= auVar21._4_4_)) {
        if ((long *)*param_2 == (long *)param_2[1]) {
          DAT_04837610 = DAT_048375f8;
          return 1;
        }
        lVar4 = 0;
        plVar5 = (long *)*param_2;
        do {
          plVar6 = plVar5 + 4;
          if (*plVar5 == *(long *)(lVar3 + 0x50)) {
            lVar4 = lVar4 + 1;
          }
          plVar5 = plVar6;
        } while ((long *)param_2[1] != plVar6);
        if (lVar4 == 0) {
          DAT_04837610 = DAT_048375f8;
          return 1;
        }
      }
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != *(long *)(DAT_048375f8 + 0x1f8));
  }
  return 0;
}


