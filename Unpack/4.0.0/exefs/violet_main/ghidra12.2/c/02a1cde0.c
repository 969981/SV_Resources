/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a1cde0; name: FUN_02a1cde0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a1cde0(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  float *pfVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  int iVar32;
  int iVar37;
  int iVar38;
  undefined1 auVar33 [16];
  int iVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar40;
  int iVar54;
  undefined1 auVar41 [12];
  int iVar53;
  undefined1 auVar42 [16];
  int iVar55;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar73;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  undefined1 auVar79 [12];
  float fVar84;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar85;
  float fVar87;
  float fVar88;
  undefined1 auVar86 [16];
  float fVar89;
  undefined1 auVar90 [16];
  float local_60;
  float fStack_5c;
  
  lVar10 = *(long *)(param_1 + 8);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02a1ce58;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a1ce58:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar10 + 0x10) == 0) {
          return;
        }
        plVar12 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
        lVar10 = (**(code **)(*plVar12 + 0x68))(plVar12);
        auVar6 = *(undefined1 (*) [16])(lVar10 + 0x30);
        local_60 = auVar6._0_4_;
        fStack_5c = auVar6._4_4_;
        pfVar8 = (float *)(**(code **)(*plVar12 + 0x68))(plVar12);
        fVar18 = *pfVar8;
        fVar22 = pfVar8[1];
        fVar24 = pfVar8[2];
        fVar26 = pfVar8[3];
        fVar27 = pfVar8[4];
        fVar29 = pfVar8[5];
        fVar30 = pfVar8[6];
        fVar31 = pfVar8[7];
        auVar90._0_4_ = fVar18 * fVar18 + fVar22 * fVar22;
        auVar90._4_4_ = fVar24 * fVar24 + fVar26 * fVar26;
        auVar90._8_4_ = fVar18 * fVar18 + fVar22 * fVar22;
        auVar90._12_4_ = fVar24 * fVar24 + fVar26 * fVar26;
        auVar33 = NEON_ext(auVar90,auVar90,4,1);
        auVar13._0_4_ = auVar33._0_4_ + auVar33._4_4_;
        auVar13._4_4_ = auVar33._8_4_ + auVar33._12_4_;
        auVar13._8_4_ = auVar33._0_4_ + auVar33._4_4_;
        auVar13._12_4_ = auVar33._8_4_ + auVar33._12_4_;
        auVar33 = NEON_frsqrte(auVar13,4);
        auVar56._0_4_ = auVar13._0_4_ * auVar33._0_4_;
        auVar56._4_4_ = auVar13._4_4_ * auVar33._4_4_;
        auVar56._8_4_ = auVar13._8_4_ * auVar33._8_4_;
        auVar56._12_4_ = auVar13._12_4_ * auVar33._12_4_;
        auVar57 = NEON_frsqrts(auVar33,auVar56,4);
        auVar42._0_4_ = auVar33._0_4_ * auVar57._0_4_;
        auVar42._4_4_ = auVar33._4_4_ * auVar57._4_4_;
        auVar42._8_4_ = auVar33._8_4_ * auVar57._8_4_;
        auVar42._12_4_ = auVar33._12_4_ * auVar57._12_4_;
        auVar58._0_4_ = auVar13._0_4_ * auVar42._0_4_;
        auVar58._4_4_ = auVar13._4_4_ * auVar42._4_4_;
        auVar58._8_4_ = auVar13._8_4_ * auVar42._8_4_;
        auVar58._12_4_ = auVar13._12_4_ * auVar42._12_4_;
        iVar32 = -(uint)(auVar13._0_4_ == 0.0);
        iVar37 = -(uint)(auVar13._4_4_ == 0.0);
        iVar38 = -(uint)(auVar13._8_4_ == 0.0);
        iVar39 = -(uint)(auVar13._12_4_ == 0.0);
        auVar33 = NEON_frsqrts(auVar42,auVar58,4);
        fVar18 = fVar18 * auVar42._0_4_ * auVar33._0_4_;
        fVar22 = fVar22 * auVar42._4_4_ * auVar33._4_4_;
        fVar24 = fVar24 * auVar42._8_4_ * auVar33._8_4_;
        fVar26 = fVar26 * auVar42._12_4_ * auVar33._12_4_;
        auVar14._0_4_ = fVar27 * fVar27 + fVar29 * fVar29;
        auVar14._4_4_ = fVar30 * fVar30 + fVar31 * fVar31;
        auVar14._8_4_ = fVar27 * fVar27 + fVar29 * fVar29;
        auVar14._12_4_ = fVar30 * fVar30 + fVar31 * fVar31;
        auVar33 = NEON_ext(auVar14,auVar14,4,1);
        auVar15._0_4_ = auVar33._0_4_ + auVar33._4_4_;
        auVar15._4_4_ = auVar33._8_4_ + auVar33._12_4_;
        auVar15._8_4_ = auVar33._0_4_ + auVar33._4_4_;
        auVar15._12_4_ = auVar33._8_4_ + auVar33._12_4_;
        auVar33 = NEON_frsqrte(auVar15,4);
        auVar61._0_4_ = auVar15._0_4_ * auVar33._0_4_;
        auVar61._4_4_ = auVar15._4_4_ * auVar33._4_4_;
        auVar61._8_4_ = auVar15._8_4_ * auVar33._8_4_;
        auVar61._12_4_ = auVar15._12_4_ * auVar33._12_4_;
        auVar57 = NEON_frsqrts(auVar33,auVar61,4);
        auVar59._0_4_ = auVar33._0_4_ * auVar57._0_4_;
        auVar59._4_4_ = auVar33._4_4_ * auVar57._4_4_;
        auVar59._8_4_ = auVar33._8_4_ * auVar57._8_4_;
        auVar59._12_4_ = auVar33._12_4_ * auVar57._12_4_;
        auVar62._0_4_ = auVar15._0_4_ * auVar59._0_4_;
        auVar62._4_4_ = auVar15._4_4_ * auVar59._4_4_;
        auVar62._8_4_ = auVar15._8_4_ * auVar59._8_4_;
        auVar62._12_4_ = auVar15._12_4_ * auVar59._12_4_;
        iVar40 = -(uint)(auVar15._0_4_ == 0.0);
        iVar53 = -(uint)(auVar15._4_4_ == 0.0);
        iVar54 = -(uint)(auVar15._8_4_ == 0.0);
        iVar55 = -(uint)(auVar15._12_4_ == 0.0);
        auVar33 = NEON_frsqrts(auVar59,auVar62,4);
        fVar27 = fVar27 * auVar59._0_4_ * auVar33._0_4_;
        fVar29 = fVar29 * auVar59._4_4_ * auVar33._4_4_;
        fVar30 = fVar30 * auVar59._8_4_ * auVar33._8_4_;
        fVar31 = fVar31 * auVar59._12_4_ * auVar33._12_4_;
        fVar19 = pfVar8[8];
        fVar23 = pfVar8[9];
        fVar25 = pfVar8[10];
        fVar73 = pfVar8[0xb] * pfVar8[0xb];
        auVar16._0_4_ = fVar19 * fVar19 + fVar23 * fVar23;
        auVar16._4_4_ = fVar25 * fVar25 + fVar73;
        auVar16._8_4_ = fVar19 * fVar19 + fVar23 * fVar23;
        auVar16._12_4_ = fVar25 * fVar25 + fVar73;
        auVar33 = NEON_ext(auVar16,auVar16,4,1);
        auVar17._0_4_ = auVar33._0_4_ + auVar33._4_4_;
        auVar17._4_4_ = auVar33._8_4_ + auVar33._12_4_;
        auVar17._8_4_ = auVar33._0_4_ + auVar33._4_4_;
        auVar17._12_4_ = auVar33._8_4_ + auVar33._12_4_;
        auVar33 = NEON_frsqrte(auVar17,4);
        auVar80._0_4_ = auVar17._0_4_ * auVar33._0_4_;
        auVar80._4_4_ = auVar17._4_4_ * auVar33._4_4_;
        auVar80._8_4_ = auVar17._8_4_ * auVar33._8_4_;
        auVar80._12_4_ = auVar17._12_4_ * auVar33._12_4_;
        auVar57 = NEON_frsqrts(auVar33,auVar80,4);
        auVar74._0_4_ = auVar33._0_4_ * auVar57._0_4_;
        auVar74._4_4_ = auVar33._4_4_ * auVar57._4_4_;
        auVar74._8_4_ = auVar33._8_4_ * auVar57._8_4_;
        auVar74._12_4_ = auVar33._12_4_ * auVar57._12_4_;
        auVar81._0_4_ = auVar17._0_4_ * auVar74._0_4_;
        auVar81._4_4_ = auVar17._4_4_ * auVar74._4_4_;
        auVar81._8_4_ = auVar17._8_4_ * auVar74._8_4_;
        auVar81._12_4_ = auVar17._12_4_ * auVar74._12_4_;
        auVar33 = NEON_frsqrts(auVar74,auVar81,4);
        fVar78 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                 CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                          ~(byte)((uint)iVar32 >> 0x10),
                                          CONCAT11((byte)((uint)fVar18 >> 8) &
                                                   ~(byte)((uint)iVar32 >> 8),
                                                   SUB41(fVar18,0) & ~(byte)iVar32)));
        auVar79._0_8_ =
             CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                      CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                               CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar37 >> 8),
                                        CONCAT14(SUB41(fVar22,0) & ~(byte)iVar37,fVar78))));
        auVar79[8] = SUB41(fVar24,0) & ~(byte)iVar38;
        auVar79[9] = (byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar38 >> 8);
        auVar79[10] = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
        auVar79[0xb] = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
        auVar82[0xc] = SUB41(fVar26,0) & ~(byte)iVar39;
        auVar82._0_12_ = auVar79;
        auVar82[0xd] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar39 >> 8);
        auVar82[0xe] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
        auVar82[0xf] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
        iVar32 = -(uint)(auVar17._0_4_ == 0.0);
        iVar37 = -(uint)(auVar17._4_4_ == 0.0);
        iVar38 = -(uint)(auVar17._8_4_ == 0.0);
        fVar73 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                 CONCAT12((byte)((uint)fVar27 >> 0x10) &
                                          ~(byte)((uint)iVar40 >> 0x10),
                                          CONCAT11((byte)((uint)fVar27 >> 8) &
                                                   ~(byte)((uint)iVar40 >> 8),
                                                   SUB41(fVar27,0) & ~(byte)iVar40)));
        auVar34._0_8_ =
             CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                      CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                               CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                        CONCAT14(SUB41(fVar29,0) & ~(byte)iVar53,fVar73))));
        auVar34[8] = SUB41(fVar30,0) & ~(byte)iVar54;
        auVar34[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar54 >> 8);
        auVar34[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
        auVar34[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
        auVar34[0xc] = SUB41(fVar31,0) & ~(byte)iVar55;
        auVar34[0xd] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar55 >> 8);
        auVar34[0xe] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
        auVar34[0xf] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
        fVar19 = fVar19 * auVar74._0_4_ * auVar33._0_4_;
        fVar23 = fVar23 * auVar74._4_4_ * auVar33._4_4_;
        fVar25 = fVar25 * auVar74._8_4_ * auVar33._8_4_;
        fVar29 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                 CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                          ~(byte)((uint)iVar32 >> 0x10),
                                          CONCAT11((byte)((uint)fVar19 >> 8) &
                                                   ~(byte)((uint)iVar32 >> 8),
                                                   SUB41(fVar19,0) & ~(byte)iVar32)));
        auVar41._0_8_ =
             CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                      CONCAT16((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                               CONCAT15((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar37 >> 8),
                                        CONCAT14(SUB41(fVar23,0) & ~(byte)iVar37,fVar29))));
        auVar41[8] = SUB41(fVar25,0) & ~(byte)iVar38;
        auVar41[9] = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar38 >> 8);
        auVar41[10] = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
        auVar41[0xb] = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
        auVar33 = NEON_fmov(0x3f800000,4);
        fVar18 = (float)((ulong)auVar34._0_8_ >> 0x20);
        fVar27 = auVar41._8_4_;
        fVar22 = auVar33._0_4_ + (float)_DAT_03cab3a0 * fVar78 + (float)_DAT_03cac210 * fVar18 +
                 (float)_DAT_03cabb00 * fVar27;
        fVar24 = auVar33._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar78 +
                 (float)((ulong)_DAT_03cac210 >> 0x20) * fVar18 +
                 (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar27;
        fVar26 = auVar33._8_4_ + (float)_UNK_03cab3a8 * fVar78 + (float)_UNK_03cac218 * fVar18 +
                 (float)_UNK_03cabb08 * fVar27;
        fVar27 = auVar33._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar78 +
                 (float)((ulong)_UNK_03cac218 >> 0x20) * fVar18 +
                 (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar27;
        fVar30 = (float)((ulong)auVar41._0_8_ >> 0x20);
        auVar33 = NEON_fmov(0x40800000,4);
        auVar60._0_4_ = SQRT(fVar22) * 0.5 * auVar33._0_4_;
        auVar60._4_4_ = SQRT(fVar24) * 0.5 * auVar33._4_4_;
        auVar60._8_4_ = SQRT(fVar26) * 0.5 * auVar33._8_4_;
        auVar60._12_4_ = SQRT(fVar27) * 0.5 * auVar33._12_4_;
        auVar33 = NEON_frecpe(auVar60,4);
        auVar86 = NEON_ext(auVar34,auVar34,8,1);
        auVar90 = NEON_ext(auVar82,auVar82,8,1);
        auVar57 = NEON_frecps(auVar33,auVar60,4);
        auVar63._0_4_ = auVar33._0_4_ * auVar57._0_4_;
        auVar63._4_4_ = auVar33._4_4_ * auVar57._4_4_;
        auVar63._8_4_ = auVar33._8_4_ * auVar57._8_4_;
        auVar63._12_4_ = auVar33._12_4_ * auVar57._12_4_;
        fVar18 = auVar86._0_4_;
        auVar33 = NEON_frecps(auVar63,auVar60,4);
        fVar31 = auVar63._0_4_ * auVar33._0_4_;
        fVar19 = auVar63._4_4_ * auVar33._4_4_;
        fVar23 = auVar63._8_4_ * auVar33._8_4_;
        fVar25 = auVar63._12_4_ * auVar33._12_4_;
        fVar84 = (float)((ulong)auVar79._0_8_ >> 0x20);
        fVar78 = auVar90._0_4_ + fVar29;
        auVar7._8_4_ = fVar18 + -fVar30;
        auVar7._4_4_ = fVar78;
        fVar85 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar24) & -(uint)(fVar22 <= fVar24));
        fVar87 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar24) & -(uint)(fVar22 <= fVar24));
        fVar88 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar24) & -(uint)(fVar22 <= fVar24));
        fVar89 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar24) & -(uint)(fVar22 <= fVar24));
        auVar7._0_4_ = (fVar84 + fVar73) * fVar31;
        auVar75._0_8_ = auVar7._0_8_ << 0x20;
        auVar75._8_4_ = fVar78 * fVar31;
        auVar75._12_4_ = (fVar18 + -fVar30) * fVar31;
        auVar76._4_12_ = auVar75._4_12_;
        auVar76._0_4_ = SQRT(fVar22) * 0.5;
        auVar43._0_4_ = (auVar90._0_4_ + fVar29) * fVar23;
        auVar43._4_4_ = (fVar18 + fVar30) * fVar23;
        auVar43._12_4_ = (fVar84 - fVar73) * fVar23;
        auVar35._0_4_ = (fVar18 - fVar30) * fVar25;
        auVar35._4_4_ = (fVar29 - auVar79._8_4_) * fVar25;
        auVar35._8_4_ = (fVar84 - fVar73) * fVar25;
        auVar33._4_4_ = SQRT(fVar24) * 0.5;
        auVar33._0_4_ = (fVar84 + fVar73) * fVar19;
        auVar33._8_4_ = (fVar18 + fVar30) * fVar19;
        auVar33._12_4_ = (fVar29 + -auVar79._8_4_) * fVar19;
        auVar86._4_4_ = -(uint)(fVar22 <= fVar24);
        auVar86._0_4_ = -(uint)(fVar22 <= fVar24);
        auVar86._8_4_ = -(uint)(fVar22 <= fVar24);
        auVar86._12_4_ = -(uint)(fVar22 <= fVar24);
        auVar43._8_4_ = SQRT(fVar26) * 0.5;
        auVar35._12_4_ = SQRT(fVar27) * 0.5;
        auVar57._4_4_ = -(uint)(fVar87 <= fVar26);
        auVar57._0_4_ = -(uint)(fVar85 <= fVar26);
        auVar57._8_4_ = -(uint)(fVar88 <= fVar26);
        auVar57._12_4_ = -(uint)(fVar89 <= fVar26);
        auVar43 = auVar43 ^ (auVar43 ^ auVar76 ^ (auVar76 ^ auVar33) & auVar86) & ~auVar57;
        fVar73 = (float)_UNK_03cab648;
        fVar78 = (float)((ulong)_UNK_03cab648 >> 0x20);
        fVar23 = (float)_DAT_03cab640;
        fVar25 = (float)((ulong)_DAT_03cab640 >> 0x20);
        auVar20._0_4_ =
             -(uint)((float)((uint)fVar85 ^
                            ((uint)fVar85 ^ (uint)fVar26) & -(uint)(fVar85 <= fVar26)) <= fVar27);
        auVar20._4_4_ =
             -(uint)((float)((uint)fVar87 ^
                            ((uint)fVar87 ^ (uint)fVar26) & -(uint)(fVar87 <= fVar26)) <= fVar27);
        auVar20._8_4_ =
             -(uint)((float)((uint)fVar88 ^
                            ((uint)fVar88 ^ (uint)fVar26) & -(uint)(fVar88 <= fVar26)) <= fVar27);
        auVar20._12_4_ =
             -(uint)((float)((uint)fVar89 ^
                            ((uint)fVar89 ^ (uint)fVar26) & -(uint)(fVar89 <= fVar26)) <= fVar27);
        auVar43 = auVar43 ^ (auVar43 ^ auVar35) & auVar20;
        fVar18 = *(float *)(param_1 + 0x90);
        fVar22 = *(float *)(param_1 + 0x94);
        fVar24 = *(float *)(param_1 + 0x98);
        fVar27 = auVar43._0_4_;
        auVar45._0_4_ = -fVar27;
        fVar29 = auVar43._4_4_;
        fVar19 = -fVar29;
        fVar30 = auVar43._8_4_;
        auVar44._8_4_ = -fVar30;
        fVar31 = auVar43._12_4_;
        auVar64._4_4_ = fVar24;
        auVar64._0_4_ = fVar24;
        auVar64._8_4_ = fVar24;
        auVar64._12_4_ = fVar24;
        auVar77._4_4_ = fVar30;
        auVar77._0_4_ = fVar30;
        auVar77._8_4_ = fVar30;
        auVar77._12_4_ = fVar30;
        auVar65._4_12_ = auVar64._4_12_;
        auVar65._0_4_ = fVar18;
        auVar67._0_8_ = auVar65._0_8_;
        auVar67._8_4_ = fVar22;
        auVar67._12_4_ = fVar24;
        auVar66._8_8_ = auVar67._8_8_;
        auVar66._4_4_ = fVar24;
        auVar66._0_4_ = fVar18;
        auVar68._0_12_ = auVar66._0_12_;
        auVar68._12_4_ = fVar24;
        auVar57 = NEON_ext(auVar77,auVar43,0xc,1);
        auVar83._4_4_ = fVar29;
        auVar83._0_4_ = fVar29;
        auVar83._8_4_ = fVar29;
        auVar83._12_4_ = fVar29;
        auVar86 = NEON_ext(auVar83,auVar57,0xc,1);
        auVar90 = NEON_ext(auVar68,auVar68,8,1);
        fVar26 = auVar90._0_4_;
        auVar69._4_12_ = auVar68._4_12_;
        auVar69._0_4_ = fVar26;
        auVar71._0_8_ = auVar69._0_8_;
        auVar71._8_4_ = auVar90._8_4_;
        auVar71._12_4_ = fVar24;
        auVar70._8_8_ = auVar71._8_8_;
        auVar70._4_4_ = fVar18;
        auVar70._0_4_ = fVar26;
        auVar72._0_12_ = auVar70._0_12_;
        auVar72._12_4_ = fVar22;
        auVar33 = NEON_ext(auVar72,auVar90,8,1);
        auVar33 = NEON_ext(auVar33,auVar33,0xc,1);
        auVar44._4_4_ = auVar44._8_4_;
        auVar44._0_4_ = auVar44._8_4_;
        auVar44._12_4_ = auVar44._8_4_;
        auVar45._4_12_ = auVar44._4_12_;
        auVar47._0_8_ = auVar45._0_8_;
        auVar47._8_4_ = fVar19;
        auVar47._12_4_ = auVar44._8_4_;
        auVar46._8_8_ = auVar47._8_8_;
        auVar46._4_4_ = auVar44._8_4_;
        auVar46._0_4_ = auVar45._0_4_;
        auVar48._0_12_ = auVar46._0_12_;
        auVar48._12_4_ = auVar44._8_4_;
        auVar36._0_4_ =
             (fVar18 * fVar31 + fVar27 * fVar23 * 0.0 + auVar33._0_4_ * auVar86._0_4_ * fVar23) -
             auVar57._0_4_ * fVar26;
        auVar36._4_4_ =
             (fVar22 * fVar31 + fVar29 * fVar25 * 0.0 + auVar33._4_4_ * auVar86._4_4_ * fVar25) -
             auVar57._4_4_ * auVar90._4_4_;
        auVar36._8_4_ =
             (fVar24 * fVar31 + fVar30 * fVar73 * 0.0 + auVar33._8_4_ * auVar86._8_4_ * fVar73) -
             auVar57._8_4_ * auVar90._8_4_;
        auVar36._12_4_ =
             (fVar31 * 0.0 + fVar18 * fVar27 * fVar78 + auVar33._12_4_ * auVar86._12_4_ * fVar78) -
             auVar57._12_4_ * auVar90._12_4_;
        auVar21._4_4_ = auVar36._8_4_;
        auVar21._0_4_ = auVar36._8_4_;
        auVar21._8_4_ = auVar36._8_4_;
        auVar21._12_4_ = auVar36._8_4_;
        auVar90 = NEON_ext(auVar48,auVar48,8,1);
        auVar33 = NEON_ext(auVar21,auVar36,0xc,1);
        auVar28._4_4_ = auVar36._4_4_;
        auVar28._0_4_ = auVar36._4_4_;
        auVar28._8_4_ = auVar36._4_4_;
        auVar28._12_4_ = auVar36._4_4_;
        fVar18 = auVar90._0_4_;
        auVar49._4_12_ = auVar48._4_12_;
        auVar49._0_4_ = fVar18;
        auVar51._0_8_ = auVar49._0_8_;
        auVar51._8_4_ = auVar90._8_4_;
        auVar51._12_4_ = auVar44._8_4_;
        auVar50._8_8_ = auVar51._8_8_;
        auVar50._4_4_ = auVar45._0_4_;
        auVar50._0_4_ = fVar18;
        auVar52._0_12_ = auVar50._0_12_;
        auVar52._12_4_ = fVar19;
        auVar57 = NEON_ext(auVar28,auVar33,0xc,1);
        auVar86 = NEON_ext(auVar52,auVar90,8,1);
        auVar86 = NEON_ext(auVar86,auVar86,0xc,1);
        local_60 = local_60 +
                   ((auVar45._0_4_ * auVar36._12_4_ + fVar31 * auVar36._0_4_ * fVar23 +
                    auVar86._0_4_ * auVar57._0_4_ * fVar23) - auVar33._0_4_ * fVar18);
        fStack_5c = fStack_5c +
                    ((fVar19 * auVar36._12_4_ + fVar31 * auVar36._4_4_ * fVar25 +
                     auVar86._4_4_ * auVar57._4_4_ * fVar25) - auVar33._4_4_ * auVar90._4_4_);
        fVar18 = auVar6._8_4_ +
                 ((auVar44._8_4_ * auVar36._12_4_ + fVar31 * auVar36._8_4_ * fVar73 +
                  auVar86._8_4_ * auVar57._8_4_ * fVar73) - auVar33._8_4_ * auVar90._8_4_);
        if (((*(char *)(param_1 + 0xa0) == '\0') ||
            (lVar10 = *(long *)(param_1 + 0x28), lVar10 == 0)) || (*(short *)(lVar10 + 0x1a) == 0))
        goto LAB_02a1d154;
        psVar1 = (short *)(lVar10 + 0x1a);
        sVar11 = *(short *)(lVar10 + 0x1a);
        goto LAB_02a1d19c;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return;
LAB_02a1d234:
  if (*plVar2 == 0) goto code_r0x02a1d23c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x20));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x20));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02a1d244;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02a1d244:
  cVar4 = *(char *)(lVar10 + 0x3c);
  *(undefined8 *)(lVar10 + 0x18) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x20));
  if (cVar4 == '\0') {
    *(undefined4 *)(lVar10 + 0x44) = 2;
    *(ulong *)(lVar10 + 0xe0) = (ulong)(uint)fVar18;
    *(ulong *)(lVar10 + 0xd8) = CONCAT44(fStack_5c,local_60);
  }
  lVar9 = *(long *)(lVar10 + 8);
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar11 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar11 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
  }
  else if (sVar11 == 0) goto LAB_02a1d30c;
  goto LAB_02a1d154;
code_r0x02a1d23c:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar5) {
    *plVar2 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_02a1d244;
  goto LAB_02a1d234;
LAB_02a1d2ac:
  if (*plVar2 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x20));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x20));
          while (*plVar2 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02a1d2bc;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02a1d2bc:
    cVar4 = *(char *)(lVar10 + 0x3c);
    *(undefined8 *)(lVar10 + 0x18) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x20));
    if (cVar4 == '\0') {
      *(ulong *)(lVar10 + 0x1b0) = (ulong)(uint)fVar18;
      *(ulong *)(lVar10 + 0x1a8) = CONCAT44(fStack_5c,local_60);
      *(undefined4 *)(lVar10 + 0x44) = 2;
    }
    lVar9 = *(long *)(lVar10 + 8);
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
    }
    else if (sVar11 == 0) {
LAB_02a1d30c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    goto LAB_02a1d164;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar5) {
    *plVar2 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_02a1d2bc;
  goto LAB_02a1d2ac;
  while (sVar11 = sVar3, sVar3 != 0) {
LAB_02a1d19c:
    sVar3 = *psVar1;
    if (sVar3 == sVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02a1d1c0;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02a1d1c0:
      bVar5 = false;
    }
    if (bVar5) {
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 != 0) {
        plVar2 = (long *)(lVar10 + 0x18);
        lVar9 = nn::os::GetCurrentThread();
        goto LAB_02a1d234;
      }
      break;
    }
  }
LAB_02a1d154:
  if (((*(char *)(param_1 + 0xa1) != '\0') && (lVar10 = *(long *)(param_1 + 0x38), lVar10 != 0)) &&
     (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02a1d208;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a1d208:
        bVar5 = false;
      }
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          plVar2 = (long *)(lVar10 + 0x18);
          lVar9 = nn::os::GetCurrentThread();
          goto LAB_02a1d2ac;
        }
        break;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
LAB_02a1d164:
                    /* WARNING: Could not recover jumptable at 0x02a1d188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar12 + 0x60))(plVar12);
  return;
}


