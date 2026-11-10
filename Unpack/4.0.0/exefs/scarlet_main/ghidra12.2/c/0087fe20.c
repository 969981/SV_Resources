/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087fe20; name: FUN_0087fe20
 */


undefined4
FUN_0087fe20(float param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6,
            int param_7,long param_8,int param_9,int param_10)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint7 uVar37;
  uint7 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  float fVar47;
  undefined1 auVar44 [16];
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  int iVar52;
  float fVar53;
  int iVar54;
  float fVar55;
  int iVar56;
  float fVar57;
  int iVar58;
  float fVar59;
  float fVar60;
  int iVar61;
  uint5 uVar62;
  float fVar65;
  int iVar66;
  float fVar67;
  int iVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar69;
  int iVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  undefined1 auVar95 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  long local_3c0 [12];
  float local_360 [12];
  undefined8 local_330 [6];
  float local_300 [12];
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  float local_2a0 [12];
  undefined8 local_270 [6];
  float local_240 [12];
  float local_210 [12];
  undefined8 local_1e0 [6];
  undefined8 local_1b0 [6];
  undefined8 local_180 [6];
  undefined8 local_150 [6];
  float local_120 [12];
  undefined8 local_f0 [6];
  float local_c0 [15];
  int local_84;
  
  uVar9 = 0x80260201;
  if ((((param_2 != 0) && (param_4 != 0)) && (param_5 < 0x101)) && (param_6 < 0xd)) {
    lVar10 = *(long *)(param_3 + 0x18);
    if (lVar10 == 0) {
      local_3c0[10] = 0;
      local_3c0[0xb] = 0;
      local_3c0[8] = 0;
      local_3c0[9] = 0;
      local_3c0[6] = 0;
      local_3c0[7] = 0;
      local_3c0[4] = 0;
      local_3c0[5] = 0;
      local_3c0[2] = 0;
      local_3c0[3] = 0;
      local_3c0[0] = 0;
      local_3c0[1] = 0;
      auVar22 = NEON_fmov(0x3f800000,4);
    }
    else {
      local_3c0[0] = lVar10;
      if (*(long *)(param_2 + 0x210) != 0) {
        local_3c0[0] = *(long *)(param_2 + 0x210);
      }
      local_3c0[1] = lVar10;
      if (*(long *)(param_2 + 0x218) != 0) {
        local_3c0[1] = *(long *)(param_2 + 0x218);
      }
      local_3c0[2] = lVar10;
      if (*(long *)(param_2 + 0x220) != 0) {
        local_3c0[2] = *(long *)(param_2 + 0x220);
      }
      local_3c0[3] = lVar10;
      if (*(long *)(param_2 + 0x228) != 0) {
        local_3c0[3] = *(long *)(param_2 + 0x228);
      }
      local_3c0[4] = lVar10;
      if (*(long *)(param_2 + 0x230) != 0) {
        local_3c0[4] = *(long *)(param_2 + 0x230);
      }
      local_3c0[5] = lVar10;
      if (*(long *)(param_2 + 0x238) != 0) {
        local_3c0[5] = *(long *)(param_2 + 0x238);
      }
      local_3c0[6] = lVar10;
      if (*(long *)(param_2 + 0x240) != 0) {
        local_3c0[6] = *(long *)(param_2 + 0x240);
      }
      local_3c0[7] = lVar10;
      if (*(long *)(param_2 + 0x248) != 0) {
        local_3c0[7] = *(long *)(param_2 + 0x248);
      }
      local_3c0[8] = lVar10;
      if (*(long *)(param_2 + 0x250) != 0) {
        local_3c0[8] = *(long *)(param_2 + 0x250);
      }
      local_3c0[9] = lVar10;
      if (*(long *)(param_2 + 600) != 0) {
        local_3c0[9] = *(long *)(param_2 + 600);
      }
      local_3c0[10] = lVar10;
      if (*(long *)(param_2 + 0x260) != 0) {
        local_3c0[10] = *(long *)(param_2 + 0x260);
      }
      local_3c0[0xb] = lVar10;
      if (*(long *)(param_2 + 0x268) != 0) {
        local_3c0[0xb] = *(long *)(param_2 + 0x268);
      }
      auVar22 = NEON_fmov(0x3f800000,4);
    }
    fVar21 = auVar22._0_4_;
    fVar23 = auVar22._4_4_;
    fVar24 = auVar22._8_4_;
    fVar25 = auVar22._12_4_;
    if (param_6 != 0) {
      uVar13 = 0;
      do {
        puVar1 = (undefined8 *)(param_2 + (ulong)(ushort)uVar13 * 4);
        uVar26 = puVar1[0x2b];
        uVar20 = puVar1[0x2a];
        uVar12 = (ulong)(uVar13 >> 2 & 0x3fff);
        uVar13 = uVar13 + 4;
        *(undefined8 *)(local_120 + uVar12 * 4 + 2) = uVar26;
        *(undefined8 *)(local_120 + uVar12 * 4) = uVar20;
        uVar27 = *puVar1;
        local_1b0[uVar12 * 2 + 1] = puVar1[1];
        local_1b0[uVar12 * 2] = uVar27;
        uVar28 = puVar1[0xd];
        uVar27 = puVar1[0xc];
        *(undefined8 *)(local_210 + uVar12 * 4 + 2) = uVar28;
        *(undefined8 *)(local_210 + uVar12 * 4) = uVar27;
        uVar30 = puVar1[0x13];
        uVar29 = puVar1[0x12];
        local_270[uVar12 * 2 + 1] = uVar30;
        local_270[uVar12 * 2] = uVar29;
        uVar31 = puVar1[0x24];
        local_180[uVar12 * 2 + 1] = puVar1[0x25];
        local_180[uVar12 * 2] = uVar31;
        uVar31 = puVar1[0x18];
        local_1e0[uVar12 * 2 + 1] = puVar1[0x19];
        local_1e0[uVar12 * 2] = uVar31;
        uVar31 = puVar1[0x3c];
        *(undefined8 *)(local_300 + (uVar12 * 2 + 1) * 2) = puVar1[0x3d];
        *(undefined8 *)(local_300 + uVar12 * 4) = uVar31;
        uVar32 = puVar1[0x1f];
        uVar31 = puVar1[0x1e];
        local_150[uVar12 * 2 + 1] =
             CONCAT44(fVar25 - (float)((ulong)uVar26 >> 0x20),fVar24 - (float)uVar26);
        local_150[uVar12 * 2] =
             CONCAT44(fVar23 - (float)((ulong)uVar20 >> 0x20),fVar21 - (float)uVar20);
        *(ulong *)(local_240 + uVar12 * 4 + 2) =
             CONCAT44(fVar25 - (float)((ulong)uVar28 >> 0x20),fVar24 - (float)uVar28);
        *(ulong *)(local_240 + uVar12 * 4) =
             CONCAT44(fVar23 - (float)((ulong)uVar27 >> 0x20),fVar21 - (float)uVar27);
        *(ulong *)(local_2a0 + (uVar12 * 2 + 1) * 2) =
             CONCAT44(fVar25 - (float)((ulong)uVar30 >> 0x20),fVar24 - (float)uVar30);
        *(ulong *)(local_2a0 + uVar12 * 4) =
             CONCAT44(fVar23 - (float)((ulong)uVar29 >> 0x20),fVar21 - (float)uVar29);
        local_330[uVar12 * 2 + 1] = uVar32;
        local_330[uVar12 * 2] = uVar31;
        uVar20 = puVar1[0x30];
        *(undefined8 *)(local_c0 + uVar12 * 4 + 2) = puVar1[0x31];
        *(undefined8 *)(local_c0 + uVar12 * 4) = uVar20;
        uVar26 = puVar1[0x37];
        uVar20 = puVar1[0x36];
        (local_300 + (uVar12 * 2 + 6) * 2)[0] = 0.0;
        (local_300 + (uVar12 * 2 + 6) * 2)[1] = 0.0;
        (local_2a0 + (uVar12 * 2 + -5) * 2)[0] = 0.0;
        (local_2a0 + (uVar12 * 2 + -5) * 2)[1] = 0.0;
        local_f0[uVar12 * 2 + 1] = uVar26;
        local_f0[uVar12 * 2] = uVar20;
      } while ((uVar13 & 0xffff) < param_6);
    }
    if (param_5 != 0) {
      auVar40 = NEON_fmov(0x3e800000,4);
      auVar41 = NEON_fmov(0x3f400000,4);
      uVar12 = 0;
      local_84 = param_10;
      do {
        iVar11 = (int)uVar12;
        if (param_6 == 0) {
          if ((uVar12 & 0x1f) == 0) {
            fVar42 = 1.0;
            uVar15 = 0;
            if (param_9 == 2) goto LAB_008802a0;
LAB_00880278:
            if (param_9 == 1) {
              uStack_2c8 = CONCAT44(fVar42,fVar42);
              local_2d0 = CONCAT44(fVar42,fVar42);
              uStack_2b8 = CONCAT44(fVar42,fVar42);
              uStack_2c0 = CONCAT44(fVar42,fVar42);
              uStack_2a8 = CONCAT44(fVar42,fVar42);
              local_2b0 = CONCAT44(fVar42,fVar42);
            }
            goto LAB_00880330;
          }
        }
        else {
          if ((uVar12 & 0x1f) == 0) {
            uVar15 = 0;
            do {
              uVar16 = uVar15 >> 2;
              pfVar2 = (float *)(param_4 + (ulong)(uint)((int)uVar15 + iVar11 * param_7) * 4);
              fVar53 = *pfVar2;
              fVar55 = pfVar2[1];
              fVar57 = pfVar2[2];
              fVar59 = pfVar2[3];
              uVar13 = (int)uVar15 + 4U & 0xffff;
              uVar15 = (ulong)uVar13;
              fVar42 = local_c0[uVar16 * 4] * (float)local_150[uVar16 * 2] +
                       fVar53 * fVar53 * local_120[uVar16 * 4];
              fVar45 = local_c0[uVar16 * 4 + 1] * (float)((ulong)local_150[uVar16 * 2] >> 0x20) +
                       fVar55 * fVar55 * local_120[uVar16 * 4 + 1];
              uVar48 = (undefined1)((uint)fVar45 >> 8);
              uVar49 = (undefined1)((uint)fVar45 >> 0x10);
              fVar46 = local_c0[uVar16 * 4 + 2] * (float)local_150[uVar16 * 2 + 1] +
                       fVar57 * fVar57 * local_120[uVar16 * 4 + 2];
              fVar47 = local_c0[uVar16 * 4 + 3] * (float)((ulong)local_150[uVar16 * 2 + 1] >> 0x20)
                       + fVar59 * fVar59 * local_120[uVar16 * 4 + 3];
              uVar50 = (undefined1)((uint)fVar47 >> 8);
              uVar51 = (undefined1)((uint)fVar47 >> 0x10);
              fVar87 = (float)local_180[uVar16 * 2];
              fVar88 = (float)((ulong)local_180[uVar16 * 2] >> 0x20);
              fVar89 = (float)local_180[uVar16 * 2 + 1];
              fVar90 = (float)((ulong)local_180[uVar16 * 2 + 1] >> 0x20);
              auVar7 = *(undefined1 (*) [16])(local_330 + uVar16 * 2);
              uVar62 = CONCAT14((char)((uint)fVar45 >> 0x17),(uint)fVar42 >> 0x17) & 0xff000000ff;
              auVar95 = NEON_frecpe(auVar7,4);
              auVar63._0_4_ = (int)uVar62 + -0x7f;
              auVar63._4_4_ = (byte)(uVar62 >> 0x20) - 0x7f;
              auVar63._8_4_ = ((uint)fVar46 >> 0x17 & 0xff) - 0x7f;
              auVar63._12_4_ = ((uint)fVar47 >> 0x17 & 0xff) - 0x7f;
              uVar37 = CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(SUB41(fVar45,0),
                                                                (uint)(SUB43(fVar42,0) & 0x7fffff)))
                               ) & 0x7fffffffffffff;
              uVar38 = CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(SUB41(fVar47,0),
                                                                (uint)(SUB43(fVar46,0) & 0x7fffff)))
                               ) & 0x7fffffffffffff;
              fVar60 = (float)CONCAT13(auVar22[3],
                                       CONCAT12((byte)(uVar37 >> 0x10) | auVar22[2],
                                                CONCAT11((byte)(uVar37 >> 8) | auVar22[1],
                                                         (byte)uVar37 | auVar22[0])));
              fVar67 = (float)CONCAT13(auVar22[0xb],
                                       CONCAT12((byte)(uVar38 >> 0x10) | auVar22[10],
                                                CONCAT11((byte)(uVar38 >> 8) | auVar22[9],
                                                         (byte)uVar38 | auVar22[8])));
              fVar65 = (float)(CONCAT17(auVar22[7],
                                        CONCAT16((byte)(uVar37 >> 0x30) | auVar22[6],
                                                 CONCAT15((byte)(uVar37 >> 0x28) | auVar22[5],
                                                          CONCAT14((byte)(uVar37 >> 0x20) |
                                                                   auVar22[4],fVar60)))) >> 0x20);
              fVar69 = (float)(CONCAT17(auVar22[0xf],
                                        CONCAT16((byte)(uVar38 >> 0x30) | auVar22[0xe],
                                                 CONCAT15((byte)(uVar38 >> 0x28) | auVar22[0xd],
                                                          CONCAT14((byte)(uVar38 >> 0x20) |
                                                                   auVar22[0xc],fVar67)))) >> 0x20);
              iVar33 = -(uint)(auVar7._0_4_ == 0.0);
              iVar34 = -(uint)(auVar7._4_4_ == 0.0);
              iVar35 = -(uint)(auVar7._8_4_ == 0.0);
              iVar36 = -(uint)(auVar7._12_4_ == 0.0);
              *(ulong *)(local_c0 + uVar16 * 4 + 2) =
                   CONCAT17((char)((uint)fVar47 >> 0x18),
                            CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(SUB41(fVar47,0),fVar46))));
              *(ulong *)(local_c0 + uVar16 * 4) =
                   CONCAT17((char)((uint)fVar45 >> 0x18),
                            CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(SUB41(fVar45,0),fVar42))));
              auVar64 = NEON_scvtf(auVar63,4);
              auVar39 = NEON_frecps(auVar7,auVar95,4);
              uVar26 = *(undefined8 *)(local_300 + (uVar16 * 2 + 1) * 2);
              uVar20 = *(undefined8 *)(local_300 + uVar16 * 4);
              fVar60 = (auVar64._0_4_ + -1.6666666 + (fVar60 * -0.33333334 + 2.0) * fVar60) *
                       3.0103002;
              fVar65 = (auVar64._4_4_ + -1.6666666 + (fVar65 * -0.33333334 + 2.0) * fVar65) *
                       3.0103002;
              fVar67 = (auVar64._8_4_ + -1.6666666 + (fVar67 * -0.33333334 + 2.0) * fVar67) *
                       3.0103002;
              fVar69 = (auVar64._12_4_ + -1.6666666 + (fVar69 * -0.33333334 + 2.0) * fVar69) *
                       3.0103002;
              uVar28 = local_1b0[uVar16 * 2 + 1];
              uVar27 = local_1b0[uVar16 * 2];
              local_360[uVar16 * 4 + 2] = fVar57;
              local_360[uVar16 * 4 + 3] = fVar59;
              local_360[uVar16 * 4] = fVar53;
              local_360[uVar16 * 4 + 1] = fVar55;
              fVar60 = (float)((uint)fVar60 ^ ((uint)fVar60 ^ 0xc2c80000) & ~-(uint)(0.0 <= fVar42))
              ;
              fVar65 = (float)((uint)fVar65 ^ ((uint)fVar65 ^ 0xc2c80000) & ~-(uint)(0.0 <= fVar45))
              ;
              fVar67 = (float)((uint)fVar67 ^ ((uint)fVar67 ^ 0xc2c80000) & ~-(uint)(0.0 <= fVar46))
              ;
              fVar69 = (float)((uint)fVar69 ^ ((uint)fVar69 ^ 0xc2c80000) & ~-(uint)(0.0 <= fVar47))
              ;
              fVar42 = (float)uVar20;
              fVar96 = fVar60 - fVar42;
              fVar45 = (float)((ulong)uVar20 >> 0x20);
              fVar97 = fVar65 - fVar45;
              fVar46 = (float)uVar26;
              fVar98 = fVar67 - fVar46;
              fVar47 = (float)((ulong)uVar26 >> 0x20);
              fVar99 = fVar69 - fVar47;
              iVar52 = -(uint)(fVar96 < auVar7._0_4_);
              iVar54 = -(uint)(fVar97 < auVar7._4_4_);
              iVar56 = -(uint)(fVar98 < auVar7._8_4_);
              iVar58 = -(uint)(fVar99 < auVar7._12_4_);
              fVar53 = (float)uVar27;
              fVar55 = (float)((ulong)uVar27 >> 0x20);
              fVar57 = (float)uVar28;
              fVar59 = (float)((ulong)uVar28 >> 0x20);
              iVar91 = -(uint)(fVar60 <= fVar53);
              iVar92 = -(uint)(fVar65 <= fVar55);
              iVar93 = -(uint)(fVar67 <= fVar57);
              iVar94 = -(uint)(fVar69 <= fVar59);
              iVar61 = -(uint)(fVar60 <= fVar42);
              iVar66 = -(uint)(fVar65 <= fVar45);
              iVar68 = -(uint)(fVar67 <= fVar46);
              iVar70 = -(uint)(fVar69 <= fVar47);
              fVar53 = (fVar53 - fVar60) * fVar87;
              fVar55 = (fVar55 - fVar65) * fVar88;
              fVar57 = (fVar57 - fVar67) * fVar89;
              fVar59 = (fVar59 - fVar69) * fVar90;
              bVar71 = SUB41(fVar53,0) & ~(byte)iVar91;
              bVar72 = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar91 >> 8);
              bVar73 = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
              bVar74 = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
              bVar75 = SUB41(fVar55,0) & ~(byte)iVar92;
              bVar76 = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar92 >> 8);
              bVar77 = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
              bVar78 = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
              bVar79 = SUB41(fVar57,0) & ~(byte)iVar93;
              bVar80 = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar93 >> 8);
              bVar81 = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
              bVar82 = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
              bVar83 = SUB41(fVar59,0) & ~(byte)iVar94;
              bVar84 = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar94 >> 8);
              bVar85 = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
              bVar86 = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
              fVar42 = (fVar42 - fVar60) +
                       fVar96 + fVar96 * fVar87 * -0.5 * auVar95._0_4_ * auVar39._0_4_ * fVar96;
              fVar45 = (fVar45 - fVar65) +
                       fVar97 + fVar97 * fVar88 * -0.5 * auVar95._4_4_ * auVar39._4_4_ * fVar97;
              fVar46 = (fVar46 - fVar67) +
                       fVar98 + fVar98 * fVar89 * -0.5 * auVar95._8_4_ * auVar39._8_4_ * fVar98;
              fVar47 = (fVar47 - fVar69) +
                       fVar99 + fVar99 * fVar90 * -0.5 * auVar95._12_4_ * auVar39._12_4_ * fVar99;
              auVar64[0] = (byte)iVar52 & ~(byte)iVar33;
              auVar64[1] = (byte)((uint)iVar52 >> 8) & ~(byte)((uint)iVar33 >> 8);
              auVar64[2] = (byte)((uint)iVar52 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
              auVar64[3] = (byte)((uint)iVar52 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
              auVar64[4] = (byte)iVar54 & ~(byte)iVar34;
              auVar64[5] = (byte)((uint)iVar54 >> 8) & ~(byte)((uint)iVar34 >> 8);
              auVar64[6] = (byte)((uint)iVar54 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
              auVar64[7] = (byte)((uint)iVar54 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
              auVar64[8] = (byte)iVar56 & ~(byte)iVar35;
              auVar64[9] = (byte)((uint)iVar56 >> 8) & ~(byte)((uint)iVar35 >> 8);
              auVar64[10] = (byte)((uint)iVar56 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
              auVar64[0xb] = (byte)((uint)iVar56 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
              auVar64[0xc] = (byte)iVar58 & ~(byte)iVar36;
              auVar64[0xd] = (byte)((uint)iVar58 >> 8) & ~(byte)((uint)iVar36 >> 8);
              auVar64[0xe] = (byte)((uint)iVar58 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
              auVar64[0xf] = (byte)((uint)iVar58 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
              auVar95[0] = SUB41(fVar42,0) & ~(byte)iVar61;
              auVar95[1] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar61 >> 8);
              auVar95[2] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
              auVar95[3] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
              auVar95[4] = SUB41(fVar45,0) & ~(byte)iVar66;
              auVar95[5] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar66 >> 8);
              auVar95[6] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
              auVar95[7] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
              auVar95[8] = SUB41(fVar46,0) & ~(byte)iVar68;
              auVar95[9] = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar68 >> 8);
              auVar95[10] = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
              auVar95[0xb] = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
              auVar95[0xc] = SUB41(fVar47,0) & ~(byte)iVar70;
              auVar95[0xd] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar70 >> 8);
              auVar95[0xe] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
              auVar95[0xf] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
              auVar7[1] = bVar72;
              auVar7[0] = bVar71;
              auVar7[2] = bVar73;
              auVar7[3] = bVar74;
              auVar7[4] = bVar75;
              auVar7[5] = bVar76;
              auVar7[6] = bVar77;
              auVar7[7] = bVar78;
              auVar7[8] = bVar79;
              auVar7[9] = bVar80;
              auVar7[10] = bVar81;
              auVar7[0xb] = bVar82;
              auVar7[0xc] = bVar83;
              auVar7[0xd] = bVar84;
              auVar7[0xe] = bVar85;
              auVar7[0xf] = bVar86;
              auVar39[1] = bVar72;
              auVar39[0] = bVar71;
              auVar39[2] = bVar73;
              auVar39[3] = bVar74;
              auVar39[4] = bVar75;
              auVar39[5] = bVar76;
              auVar39[6] = bVar77;
              auVar39[7] = bVar78;
              auVar39[8] = bVar79;
              auVar39[9] = bVar80;
              auVar39[10] = bVar81;
              auVar39[0xb] = bVar82;
              auVar39[0xc] = bVar83;
              auVar39[0xd] = bVar84;
              auVar39[0xe] = bVar85;
              auVar39[0xf] = bVar86;
              auVar39 = auVar39 ^ (auVar7 ^ auVar95) & auVar64;
              fVar42 = auVar39._0_4_ * 0.1660964;
              fVar45 = auVar39._4_4_ * 0.1660964;
              fVar46 = auVar39._8_4_ * 0.1660964;
              fVar47 = auVar39._12_4_ * 0.1660964;
              local_2a0[(uVar16 * 2 + -5) * 2] =
                   (float)((int)fVar46 * 0x800000 +
                          (int)(fVar24 + (auVar41._8_4_ +
                                         (fVar46 - (float)(int)fVar46) * auVar40._8_4_) *
                                         (fVar46 - (float)(int)fVar46)));
              local_2a0[uVar16 * 4 + -9] =
                   (float)((int)fVar47 * 0x800000 +
                          (int)(fVar25 + (auVar41._12_4_ +
                                         (fVar47 - (float)(int)fVar47) * auVar40._12_4_) *
                                         (fVar47 - (float)(int)fVar47)));
              local_300[(uVar16 * 2 + 6) * 2] =
                   (float)((int)fVar42 * 0x800000 +
                          (int)(fVar21 + (auVar41._0_4_ +
                                         (fVar42 - (float)(int)fVar42) * auVar40._0_4_) *
                                         (fVar42 - (float)(int)fVar42)));
              local_300[uVar16 * 4 + 0xd] =
                   (float)((int)fVar45 * 0x800000 +
                          (int)(fVar23 + (auVar41._4_4_ +
                                         (fVar45 - (float)(int)fVar45) * auVar40._4_4_) *
                                         (fVar45 - (float)(int)fVar45)));
            } while (uVar13 < param_6);
            fVar42 = 1.0;
            uVar16 = 0;
            uVar15 = 0;
            do {
              uVar14 = (uint)uVar16;
              fVar45 = *(float *)((ulong)(local_300 + ((uVar16 >> 2) * 2 + 6) * 2) |
                                 (ulong)(uVar14 & 3) << 2);
              bVar8 = fVar42 <= fVar45;
              fVar42 = (float)NEON_fminnm(fVar45,fVar42);
              uVar13 = uVar14;
              if (bVar8) {
                uVar13 = (uint)uVar15;
              }
              uVar15 = (ulong)uVar13;
              uVar13 = uVar14 + 1 & 0xffff;
              uVar16 = (ulong)uVar13;
            } while (uVar13 < param_6);
            if (param_9 != 2) goto LAB_00880278;
LAB_008802a0:
            if (fVar42 < 1.0) {
              fVar45 = fVar42 * param_1;
              uVar48 = SUB41(fVar45,0);
              uVar49 = (undefined1)((uint)fVar45 >> 8);
              uVar50 = (undefined1)((uint)fVar45 >> 0x10);
              uVar51 = (undefined1)((uint)fVar45 >> 0x18);
              uStack_2c8 = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,fVar45)))
                                   );
              local_2d0 = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,fVar45))))
              ;
              uStack_2b8 = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,fVar45)))
                                   );
              uStack_2c0 = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,fVar45)))
                                   );
              uStack_2a8 = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,fVar45)))
                                   );
              local_2b0 = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,fVar45))))
              ;
              uVar13 = (uint)uVar15;
              if ((local_84 == 1) &&
                 (uVar14 = *(uint *)(param_8 + uVar15 * 4), (uVar14 & 0xfffffffe) != 2)) {
                uVar17 = (ulong)(uVar13 - (uVar14 & 1));
                uVar15 = ((ulong)~uVar14 & 1) + uVar15;
                uVar16 = uVar15 & 3;
                uVar15 = (ulong)(uint)((int)uVar15 << 2) & 0x7fff0;
                *(float *)((ulong)(local_300 + (uVar17 & 0xfffffffc) + 0xc) | (uVar17 & 3) << 2) =
                     fVar42;
              }
              else {
                uVar16 = (ulong)(uVar13 & 3);
                uVar15 = (ulong)(uVar13 << 2) & 0x3fff0;
              }
              *(float *)((long)local_300 + uVar15 + 0x30 | uVar16 << 2) = fVar42;
            }
          }
          else {
            uVar15 = 0;
            do {
              uVar16 = uVar15 >> 2;
              iVar33 = (int)uVar15;
              uVar13 = iVar33 + 4U & 0xffff;
              uVar15 = (ulong)uVar13;
              uVar26 = local_150[uVar16 * 2 + 1];
              uVar20 = local_150[uVar16 * 2];
              fVar46 = local_c0[uVar16 * 4];
              fVar42 = local_c0[uVar16 * 4 + 1];
              fVar47 = local_c0[uVar16 * 4 + 2];
              fVar45 = local_c0[uVar16 * 4 + 3];
              pfVar2 = (float *)(param_4 + (ulong)(uint)(iVar33 + iVar11 * param_7) * 4);
              fVar53 = *pfVar2;
              fVar55 = pfVar2[1];
              fVar57 = pfVar2[2];
              fVar59 = pfVar2[3];
              fVar60 = local_120[uVar16 * 4];
              fVar65 = local_120[uVar16 * 4 + 1];
              fVar67 = local_120[uVar16 * 4 + 2];
              fVar69 = local_120[uVar16 * 4 + 3];
              local_360[uVar16 * 4 + 2] = fVar57;
              local_360[uVar16 * 4 + 3] = fVar59;
              local_360[uVar16 * 4] = fVar53;
              local_360[uVar16 * 4 + 1] = fVar55;
              fVar42 = fVar42 * (float)((ulong)uVar20 >> 0x20) + fVar55 * fVar55 * fVar65;
              fVar45 = fVar45 * (float)((ulong)uVar26 >> 0x20) + fVar59 * fVar59 * fVar69;
              *(ulong *)(local_c0 + uVar16 * 4 + 2) =
                   CONCAT17((char)((uint)fVar45 >> 0x18),
                            CONCAT16((char)((uint)fVar45 >> 0x10),
                                     CONCAT15((char)((uint)fVar45 >> 8),
                                              CONCAT14(SUB41(fVar45,0),
                                                       fVar47 * (float)uVar26 +
                                                       fVar57 * fVar57 * fVar67))));
              *(ulong *)(local_c0 + uVar16 * 4) =
                   CONCAT17((char)((uint)fVar42 >> 0x18),
                            CONCAT16((char)((uint)fVar42 >> 0x10),
                                     CONCAT15((char)((uint)fVar42 >> 8),
                                              CONCAT14(SUB41(fVar42,0),
                                                       fVar46 * (float)uVar20 +
                                                       fVar53 * fVar53 * fVar60))));
            } while (uVar13 < param_6);
          }
LAB_00880330:
          if (param_6 != 0) {
            uVar15 = 0;
            if (lVar10 == 0) {
              do {
                uVar12 = uVar15 >> 2;
                uVar26 = local_1e0[uVar12 * 2 + 1];
                uVar20 = local_1e0[uVar12 * 2];
                uVar28 = *(undefined8 *)(local_360 + uVar12 * 4 + 2);
                uVar27 = *(undefined8 *)(local_360 + uVar12 * 4);
                fVar59 = local_300[(uVar12 * 2 + 6) * 2];
                fVar60 = local_300[uVar12 * 4 + 0xd];
                fVar65 = local_2a0[(uVar12 * 2 + -5) * 2];
                fVar67 = local_2a0[uVar12 * 4 + -9];
                fVar42 = (float)local_f0[uVar12 * 2];
                fVar45 = (float)((ulong)local_f0[uVar12 * 2] >> 0x20);
                fVar46 = (float)local_f0[uVar12 * 2 + 1];
                fVar47 = (float)((ulong)local_f0[uVar12 * 2 + 1] >> 0x20);
                auVar44._0_4_ = fVar42 * local_240[uVar12 * 4] + fVar59 * local_210[uVar12 * 4];
                auVar44._4_4_ =
                     fVar45 * local_240[uVar12 * 4 + 1] + fVar60 * local_210[uVar12 * 4 + 1];
                auVar44._8_4_ =
                     fVar46 * local_240[uVar12 * 4 + 2] + fVar65 * local_210[uVar12 * 4 + 2];
                auVar44._12_4_ =
                     fVar47 * local_240[uVar12 * 4 + 3] + fVar67 * local_210[uVar12 * 4 + 3];
                fVar53 = (float)((ulong)*(undefined8 *)(local_2a0 + uVar12 * 4) >> 0x20) * fVar45 +
                         (float)((ulong)local_270[uVar12 * 2] >> 0x20) * fVar60;
                fVar55 = (float)*(undefined8 *)(local_2a0 + (uVar12 * 2 + 1) * 2) * fVar46 +
                         (float)local_270[uVar12 * 2 + 1] * fVar65;
                fVar57 = (float)((ulong)*(undefined8 *)(local_2a0 + (uVar12 * 2 + 1) * 2) >> 0x20) *
                         fVar47 + (float)((ulong)local_270[uVar12 * 2 + 1] >> 0x20) * fVar67;
                iVar33 = -(uint)(fVar45 <= fVar60);
                iVar34 = -(uint)(fVar46 <= fVar65);
                iVar35 = -(uint)(fVar47 <= fVar67);
                auVar6[4] = SUB41(fVar53,0);
                auVar6._0_4_ = (float)*(undefined8 *)(local_2a0 + uVar12 * 4) * fVar42 +
                               (float)local_270[uVar12 * 2] * fVar59;
                auVar6[5] = (char)((uint)fVar53 >> 8);
                auVar6[6] = (char)((uint)fVar53 >> 0x10);
                auVar6[7] = (char)((uint)fVar53 >> 0x18);
                auVar6[8] = SUB41(fVar55,0);
                auVar6[9] = (char)((uint)fVar55 >> 8);
                auVar6[10] = (char)((uint)fVar55 >> 0x10);
                auVar6[0xb] = (char)((uint)fVar55 >> 0x18);
                auVar6[0xc] = SUB41(fVar57,0);
                auVar6[0xd] = (char)((uint)fVar57 >> 8);
                auVar6[0xe] = (char)((uint)fVar57 >> 0x10);
                auVar6[0xf] = (char)((uint)fVar57 >> 0x18);
                auVar4[4] = (char)iVar33;
                auVar4._0_4_ = -(uint)(fVar42 <= fVar59);
                auVar4[5] = (char)((uint)iVar33 >> 8);
                auVar4[6] = (char)((uint)iVar33 >> 0x10);
                auVar4[7] = (char)((uint)iVar33 >> 0x18);
                auVar4[8] = (char)iVar34;
                auVar4[9] = (char)((uint)iVar34 >> 8);
                auVar4[10] = (char)((uint)iVar34 >> 0x10);
                auVar4[0xb] = (char)((uint)iVar34 >> 0x18);
                auVar4[0xc] = (char)iVar35;
                auVar4[0xd] = (char)((uint)iVar35 >> 8);
                auVar4[0xe] = (char)((uint)iVar35 >> 0x10);
                auVar4[0xf] = (char)((uint)iVar35 >> 0x18);
                auVar44 = auVar44 ^ (auVar44 ^ auVar6) & auVar4;
                local_f0[uVar12 * 2 + 1] = auVar44._8_8_;
                local_f0[uVar12 * 2] = auVar44._0_8_;
                fVar42 = auVar44._0_4_ * (float)uVar20 * (float)uVar27;
                fVar45 = auVar44._4_4_ *
                         (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar27 >> 0x20);
                fVar46 = auVar44._8_4_ * (float)uVar26 * (float)uVar28;
                fVar47 = auVar44._12_4_ *
                         (float)((ulong)uVar26 >> 0x20) * (float)((ulong)uVar28 >> 0x20);
                local_360[uVar12 * 4 + 2] = fVar46;
                local_360[uVar12 * 4 + 3] = fVar47;
                local_360[uVar12 * 4] = fVar42;
                local_360[uVar12 * 4 + 1] = fVar45;
                iVar33 = (int)uVar15;
                uVar13 = iVar33 + 4U & 0xffff;
                uVar15 = (ulong)uVar13;
                pfVar2 = (float *)(param_4 + (ulong)(uint)(iVar33 + iVar11 * param_7) * 4);
                pfVar2[2] = fVar46;
                pfVar2[3] = fVar47;
                *pfVar2 = fVar42;
                pfVar2[1] = fVar45;
              } while (uVar13 < param_6);
            }
            else {
              do {
                uVar16 = uVar15 >> 2;
                iVar36 = (int)uVar15;
                fVar59 = local_300[(uVar16 * 2 + 6) * 2];
                fVar60 = local_300[uVar16 * 4 + 0xd];
                fVar65 = local_2a0[(uVar16 * 2 + -5) * 2];
                fVar67 = local_2a0[uVar16 * 4 + -9];
                fVar42 = (float)local_f0[uVar16 * 2];
                fVar45 = (float)((ulong)local_f0[uVar16 * 2] >> 0x20);
                fVar46 = (float)local_f0[uVar16 * 2 + 1];
                fVar47 = (float)((ulong)local_f0[uVar16 * 2 + 1] >> 0x20);
                auVar43._0_4_ = fVar42 * local_240[uVar16 * 4] + fVar59 * local_210[uVar16 * 4];
                auVar43._4_4_ =
                     fVar45 * local_240[uVar16 * 4 + 1] + fVar60 * local_210[uVar16 * 4 + 1];
                auVar43._8_4_ =
                     fVar46 * local_240[uVar16 * 4 + 2] + fVar65 * local_210[uVar16 * 4 + 2];
                auVar43._12_4_ =
                     fVar47 * local_240[uVar16 * 4 + 3] + fVar67 * local_210[uVar16 * 4 + 3];
                fVar53 = (float)((ulong)*(undefined8 *)(local_2a0 + uVar16 * 4) >> 0x20) * fVar45 +
                         (float)((ulong)local_270[uVar16 * 2] >> 0x20) * fVar60;
                fVar55 = (float)*(undefined8 *)(local_2a0 + (uVar16 * 2 + 1) * 2) * fVar46 +
                         (float)local_270[uVar16 * 2 + 1] * fVar65;
                fVar57 = (float)((ulong)*(undefined8 *)(local_2a0 + (uVar16 * 2 + 1) * 2) >> 0x20) *
                         fVar47 + (float)((ulong)local_270[uVar16 * 2 + 1] >> 0x20) * fVar67;
                iVar33 = -(uint)(fVar45 <= fVar60);
                iVar34 = -(uint)(fVar46 <= fVar65);
                iVar35 = -(uint)(fVar47 <= fVar67);
                lVar19 = local_3c0[uVar15];
                auVar5[4] = SUB41(fVar53,0);
                auVar5._0_4_ = (float)*(undefined8 *)(local_2a0 + uVar16 * 4) * fVar42 +
                               (float)local_270[uVar16 * 2] * fVar59;
                auVar5[5] = (char)((uint)fVar53 >> 8);
                auVar5[6] = (char)((uint)fVar53 >> 0x10);
                auVar5[7] = (char)((uint)fVar53 >> 0x18);
                auVar5[8] = SUB41(fVar55,0);
                auVar5[9] = (char)((uint)fVar55 >> 8);
                auVar5[10] = (char)((uint)fVar55 >> 0x10);
                auVar5[0xb] = (char)((uint)fVar55 >> 0x18);
                auVar5[0xc] = SUB41(fVar57,0);
                auVar5[0xd] = (char)((uint)fVar57 >> 8);
                auVar5[0xe] = (char)((uint)fVar57 >> 0x10);
                auVar5[0xf] = (char)((uint)fVar57 >> 0x18);
                auVar3[4] = (char)iVar33;
                auVar3._0_4_ = -(uint)(fVar42 <= fVar59);
                auVar3[5] = (char)((uint)iVar33 >> 8);
                auVar3[6] = (char)((uint)iVar33 >> 0x10);
                auVar3[7] = (char)((uint)iVar33 >> 0x18);
                auVar3[8] = (char)iVar34;
                auVar3[9] = (char)((uint)iVar34 >> 8);
                auVar3[10] = (char)((uint)iVar34 >> 0x10);
                auVar3[0xb] = (char)((uint)iVar34 >> 0x18);
                auVar3[0xc] = (char)iVar35;
                auVar3[0xd] = (char)((uint)iVar35 >> 8);
                auVar3[0xe] = (char)((uint)iVar35 >> 0x10);
                auVar3[0xf] = (char)((uint)iVar35 >> 0x18);
                auVar43 = auVar43 ^ (auVar43 ^ auVar5) & auVar3;
                uVar26 = *(undefined8 *)(local_360 + uVar16 * 4 + 2);
                uVar20 = *(undefined8 *)(local_360 + uVar16 * 4);
                fVar53 = auVar43._0_4_ * (float)local_1e0[uVar16 * 2];
                fVar55 = auVar43._4_4_ * (float)((ulong)local_1e0[uVar16 * 2] >> 0x20);
                fVar57 = auVar43._8_4_ * (float)local_1e0[uVar16 * 2 + 1];
                fVar59 = auVar43._12_4_ * (float)((ulong)local_1e0[uVar16 * 2 + 1] >> 0x20);
                local_f0[uVar16 * 2 + 1] = auVar43._8_8_;
                local_f0[uVar16 * 2] = auVar43._0_8_;
                fVar42 = fVar53 * (float)uVar20;
                fVar45 = fVar55 * (float)((ulong)uVar20 >> 0x20);
                fVar46 = fVar57 * (float)uVar26;
                fVar47 = fVar59 * (float)((ulong)uVar26 >> 0x20);
                local_360[uVar16 * 4 + 2] = fVar46;
                local_360[uVar16 * 4 + 3] = fVar47;
                local_360[uVar16 * 4] = fVar42;
                local_360[uVar16 * 4 + 1] = fVar45;
                lVar18 = uVar12 * 4;
                *(float *)(lVar19 + lVar18) = fVar53;
                *(float *)(local_3c0[iVar36 + 1] + lVar18) = fVar55;
                *(float *)(local_3c0[iVar36 + 2] + lVar18) = fVar57;
                uVar13 = iVar36 + 4U & 0xffff;
                uVar15 = (ulong)uVar13;
                *(float *)(local_3c0[iVar36 + 3] + lVar18) = fVar59;
                pfVar2 = (float *)(param_4 + (ulong)(uint)(iVar36 + iVar11 * param_7) * 4);
                pfVar2[2] = fVar46;
                pfVar2[3] = fVar47;
                *pfVar2 = fVar42;
                pfVar2[1] = fVar45;
              } while (uVar13 < param_6);
            }
          }
        }
        uVar13 = iVar11 + 1U & 0xffff;
        uVar12 = (ulong)uVar13;
      } while (uVar13 < param_5);
    }
    if (param_6 != 0) {
      uVar13 = 0;
      do {
        uVar12 = (ulong)(uVar13 >> 2 & 0x3fff);
        lVar10 = param_2 + (ulong)(ushort)uVar13 * 4;
        uVar20 = *(undefined8 *)(local_c0 + uVar12 * 4);
        uVar13 = uVar13 + 4;
        *(undefined8 *)(lVar10 + 0x188) = *(undefined8 *)(local_c0 + uVar12 * 4 + 2);
        *(undefined8 *)(lVar10 + 0x180) = uVar20;
        uVar20 = local_f0[uVar12 * 2];
        *(undefined8 *)(lVar10 + 0x1b8) = local_f0[uVar12 * 2 + 1];
        *(undefined8 *)(lVar10 + 0x1b0) = uVar20;
      } while ((uVar13 & 0xffff) < param_6);
    }
    uVar9 = 0;
  }
  return uVar9;
}


