/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5b864; name: FUN_01e5b864
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01e5b864(long param_1,float *param_2,long param_3)

{
  short *psVar1;
  float *pfVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [12];
  undefined *puVar7;
  long *plVar8;
  float *pfVar9;
  long lVar10;
  short sVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar33;
  undefined1 auVar34 [12];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  int iVar39;
  int iVar53;
  int iVar54;
  undefined1 auVar40 [16];
  int iVar55;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  int iVar56;
  int iVar65;
  undefined1 auVar57 [12];
  int iVar64;
  undefined1 auVar58 [16];
  int iVar66;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  undefined1 auVar86 [12];
  float fVar90;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar91;
  float fVar93;
  float fVar94;
  undefined1 auVar92 [16];
  float fVar95;
  undefined1 auVar96 [16];
  float local_54;
  float local_18;
  float local_14;
  
  plVar8 = (long *)FUN_01e022fc();
  lVar10 = *plVar8;
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
        if (cVar4 != '\0') goto LAB_01e5b8f0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e5b8f0:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar10 + 0x10) == 0) {
          return 0.0;
        }
        plVar8 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
        pfVar9 = (float *)(**(code **)(*plVar8 + 0x68))(plVar8);
        puVar7 = PTR_FloatPi_047d23a0;
        fVar22 = *pfVar9;
        fVar28 = pfVar9[1];
        fVar30 = pfVar9[2];
        fVar32 = pfVar9[3];
        fVar33 = pfVar9[4];
        fVar36 = pfVar9[5];
        fVar37 = pfVar9[6];
        fVar38 = pfVar9[7];
        auVar96._0_4_ = fVar22 * fVar22 + fVar28 * fVar28;
        auVar96._4_4_ = fVar30 * fVar30 + fVar32 * fVar32;
        auVar96._8_4_ = fVar22 * fVar22 + fVar28 * fVar28;
        auVar96._12_4_ = fVar30 * fVar30 + fVar32 * fVar32;
        auVar40 = NEON_ext(auVar96,auVar96,4,1);
        auVar12._0_4_ = auVar40._0_4_ + auVar40._4_4_;
        auVar12._4_4_ = auVar40._8_4_ + auVar40._12_4_;
        auVar12._8_4_ = auVar40._0_4_ + auVar40._4_4_;
        auVar12._12_4_ = auVar40._8_4_ + auVar40._12_4_;
        auVar40 = NEON_frsqrte(auVar12,4);
        auVar67._0_4_ = auVar12._0_4_ * auVar40._0_4_;
        auVar67._4_4_ = auVar12._4_4_ * auVar40._4_4_;
        auVar67._8_4_ = auVar12._8_4_ * auVar40._8_4_;
        auVar67._12_4_ = auVar12._12_4_ * auVar40._12_4_;
        auVar68 = NEON_frsqrts(auVar40,auVar67,4);
        auVar58._0_4_ = auVar40._0_4_ * auVar68._0_4_;
        auVar58._4_4_ = auVar40._4_4_ * auVar68._4_4_;
        auVar58._8_4_ = auVar40._8_4_ * auVar68._8_4_;
        auVar58._12_4_ = auVar40._12_4_ * auVar68._12_4_;
        auVar69._0_4_ = auVar12._0_4_ * auVar58._0_4_;
        auVar69._4_4_ = auVar12._4_4_ * auVar58._4_4_;
        auVar69._8_4_ = auVar12._8_4_ * auVar58._8_4_;
        auVar69._12_4_ = auVar12._12_4_ * auVar58._12_4_;
        iVar39 = -(uint)(auVar12._0_4_ == 0.0);
        iVar53 = -(uint)(auVar12._4_4_ == 0.0);
        iVar54 = -(uint)(auVar12._8_4_ == 0.0);
        iVar55 = -(uint)(auVar12._12_4_ == 0.0);
        auVar40 = NEON_frsqrts(auVar58,auVar69,4);
        fVar22 = fVar22 * auVar58._0_4_ * auVar40._0_4_;
        fVar28 = fVar28 * auVar58._4_4_ * auVar40._4_4_;
        fVar30 = fVar30 * auVar58._8_4_ * auVar40._8_4_;
        fVar32 = fVar32 * auVar58._12_4_ * auVar40._12_4_;
        auVar13._0_4_ = fVar33 * fVar33 + fVar36 * fVar36;
        auVar13._4_4_ = fVar37 * fVar37 + fVar38 * fVar38;
        auVar13._8_4_ = fVar33 * fVar33 + fVar36 * fVar36;
        auVar13._12_4_ = fVar37 * fVar37 + fVar38 * fVar38;
        auVar40 = NEON_ext(auVar13,auVar13,4,1);
        auVar14._0_4_ = auVar40._0_4_ + auVar40._4_4_;
        auVar14._4_4_ = auVar40._8_4_ + auVar40._12_4_;
        auVar14._8_4_ = auVar40._0_4_ + auVar40._4_4_;
        auVar14._12_4_ = auVar40._8_4_ + auVar40._12_4_;
        auVar40 = NEON_frsqrte(auVar14,4);
        auVar75._0_4_ = auVar14._0_4_ * auVar40._0_4_;
        auVar75._4_4_ = auVar14._4_4_ * auVar40._4_4_;
        auVar75._8_4_ = auVar14._8_4_ * auVar40._8_4_;
        auVar75._12_4_ = auVar14._12_4_ * auVar40._12_4_;
        auVar68 = NEON_frsqrts(auVar40,auVar75,4);
        auVar70._0_4_ = auVar40._0_4_ * auVar68._0_4_;
        auVar70._4_4_ = auVar40._4_4_ * auVar68._4_4_;
        auVar70._8_4_ = auVar40._8_4_ * auVar68._8_4_;
        auVar70._12_4_ = auVar40._12_4_ * auVar68._12_4_;
        auVar76._0_4_ = auVar14._0_4_ * auVar70._0_4_;
        auVar76._4_4_ = auVar14._4_4_ * auVar70._4_4_;
        auVar76._8_4_ = auVar14._8_4_ * auVar70._8_4_;
        auVar76._12_4_ = auVar14._12_4_ * auVar70._12_4_;
        iVar56 = -(uint)(auVar14._0_4_ == 0.0);
        iVar64 = -(uint)(auVar14._4_4_ == 0.0);
        iVar65 = -(uint)(auVar14._8_4_ == 0.0);
        iVar66 = -(uint)(auVar14._12_4_ == 0.0);
        auVar40 = NEON_frsqrts(auVar70,auVar76,4);
        fVar33 = fVar33 * auVar70._0_4_ * auVar40._0_4_;
        fVar36 = fVar36 * auVar70._4_4_ * auVar40._4_4_;
        fVar37 = fVar37 * auVar70._8_4_ * auVar40._8_4_;
        fVar38 = fVar38 * auVar70._12_4_ * auVar40._12_4_;
        fVar23 = pfVar9[8];
        fVar29 = pfVar9[9];
        fVar31 = pfVar9[10];
        fVar80 = pfVar9[0xb] * pfVar9[0xb];
        auVar15._0_4_ = fVar23 * fVar23 + fVar29 * fVar29;
        auVar15._4_4_ = fVar31 * fVar31 + fVar80;
        auVar15._8_4_ = fVar23 * fVar23 + fVar29 * fVar29;
        auVar15._12_4_ = fVar31 * fVar31 + fVar80;
        auVar40 = NEON_ext(auVar15,auVar15,4,1);
        auVar16._0_4_ = auVar40._0_4_ + auVar40._4_4_;
        auVar16._4_4_ = auVar40._8_4_ + auVar40._12_4_;
        auVar16._8_4_ = auVar40._0_4_ + auVar40._4_4_;
        auVar16._12_4_ = auVar40._8_4_ + auVar40._12_4_;
        auVar40 = NEON_frsqrte(auVar16,4);
        auVar87._0_4_ = auVar16._0_4_ * auVar40._0_4_;
        auVar87._4_4_ = auVar16._4_4_ * auVar40._4_4_;
        auVar87._8_4_ = auVar16._8_4_ * auVar40._8_4_;
        auVar87._12_4_ = auVar16._12_4_ * auVar40._12_4_;
        auVar68 = NEON_frsqrts(auVar40,auVar87,4);
        auVar81._0_4_ = auVar40._0_4_ * auVar68._0_4_;
        auVar81._4_4_ = auVar40._4_4_ * auVar68._4_4_;
        auVar81._8_4_ = auVar40._8_4_ * auVar68._8_4_;
        auVar81._12_4_ = auVar40._12_4_ * auVar68._12_4_;
        auVar88._0_4_ = auVar16._0_4_ * auVar81._0_4_;
        auVar88._4_4_ = auVar16._4_4_ * auVar81._4_4_;
        auVar88._8_4_ = auVar16._8_4_ * auVar81._8_4_;
        auVar88._12_4_ = auVar16._12_4_ * auVar81._12_4_;
        auVar40 = NEON_frsqrts(auVar81,auVar88,4);
        fVar85 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                 CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                          ~(byte)((uint)iVar39 >> 0x10),
                                          CONCAT11((byte)((uint)fVar22 >> 8) &
                                                   ~(byte)((uint)iVar39 >> 8),
                                                   SUB41(fVar22,0) & ~(byte)iVar39)));
        auVar86._0_8_ =
             CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                      CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                               CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                        CONCAT14(SUB41(fVar28,0) & ~(byte)iVar53,fVar85))));
        auVar86[8] = SUB41(fVar30,0) & ~(byte)iVar54;
        auVar86[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar54 >> 8);
        auVar86[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
        auVar86[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
        auVar89[0xc] = SUB41(fVar32,0) & ~(byte)iVar55;
        auVar89._0_12_ = auVar86;
        auVar89[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar55 >> 8);
        auVar89[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
        auVar89[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
        iVar39 = -(uint)(auVar16._0_4_ == 0.0);
        iVar53 = -(uint)(auVar16._4_4_ == 0.0);
        iVar54 = -(uint)(auVar16._8_4_ == 0.0);
        fVar80 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                                 CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                          ~(byte)((uint)iVar56 >> 0x10),
                                          CONCAT11((byte)((uint)fVar33 >> 8) &
                                                   ~(byte)((uint)iVar56 >> 8),
                                                   SUB41(fVar33,0) & ~(byte)iVar56)));
        auVar41._0_8_ =
             CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                      CONCAT16((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                               CONCAT15((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar64 >> 8),
                                        CONCAT14(SUB41(fVar36,0) & ~(byte)iVar64,fVar80))));
        auVar41[8] = SUB41(fVar37,0) & ~(byte)iVar65;
        auVar41[9] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar65 >> 8);
        auVar41[10] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
        auVar41[0xb] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
        auVar41[0xc] = SUB41(fVar38,0) & ~(byte)iVar66;
        auVar41[0xd] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar66 >> 8);
        auVar41[0xe] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
        auVar41[0xf] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
        fVar23 = fVar23 * auVar81._0_4_ * auVar40._0_4_;
        fVar29 = fVar29 * auVar81._4_4_ * auVar40._4_4_;
        fVar31 = fVar31 * auVar81._8_4_ * auVar40._8_4_;
        fVar36 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                 CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                          ~(byte)((uint)iVar39 >> 0x10),
                                          CONCAT11((byte)((uint)fVar23 >> 8) &
                                                   ~(byte)((uint)iVar39 >> 8),
                                                   SUB41(fVar23,0) & ~(byte)iVar39)));
        auVar57._0_8_ =
             CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                      CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                               CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                        CONCAT14(SUB41(fVar29,0) & ~(byte)iVar53,fVar36))));
        auVar57[8] = SUB41(fVar31,0) & ~(byte)iVar54;
        auVar57[9] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar54 >> 8);
        auVar57[10] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
        auVar57[0xb] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
        auVar40 = NEON_fmov(0x3f800000,4);
        fVar22 = (float)((ulong)auVar41._0_8_ >> 0x20);
        fVar33 = auVar57._8_4_;
        fVar28 = auVar40._0_4_ + (float)_DAT_03cab3a0 * fVar85 + (float)_DAT_03cac210 * fVar22 +
                 (float)_DAT_03cabb00 * fVar33;
        fVar30 = auVar40._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar85 +
                 (float)((ulong)_DAT_03cac210 >> 0x20) * fVar22 +
                 (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar33;
        fVar32 = auVar40._8_4_ + (float)_UNK_03cab3a8 * fVar85 + (float)_UNK_03cac218 * fVar22 +
                 (float)_UNK_03cabb08 * fVar33;
        fVar33 = auVar40._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar85 +
                 (float)((ulong)_UNK_03cac218 >> 0x20) * fVar22 +
                 (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar33;
        fVar37 = (float)((ulong)auVar57._0_8_ >> 0x20);
        auVar40 = NEON_fmov(0x40800000,4);
        auVar71._0_4_ = SQRT(fVar28) * 0.5 * auVar40._0_4_;
        auVar71._4_4_ = SQRT(fVar30) * 0.5 * auVar40._4_4_;
        auVar71._8_4_ = SQRT(fVar32) * 0.5 * auVar40._8_4_;
        auVar71._12_4_ = SQRT(fVar33) * 0.5 * auVar40._12_4_;
        auVar40 = NEON_frecpe(auVar71,4);
        auVar92 = NEON_ext(auVar41,auVar41,8,1);
        auVar96 = NEON_ext(auVar89,auVar89,8,1);
        auVar68 = NEON_frecps(auVar40,auVar71,4);
        auVar77._0_4_ = auVar40._0_4_ * auVar68._0_4_;
        auVar77._4_4_ = auVar40._4_4_ * auVar68._4_4_;
        auVar77._8_4_ = auVar40._8_4_ * auVar68._8_4_;
        auVar77._12_4_ = auVar40._12_4_ * auVar68._12_4_;
        fVar22 = auVar92._0_4_;
        auVar40 = NEON_frecps(auVar77,auVar71,4);
        fVar38 = auVar77._0_4_ * auVar40._0_4_;
        fVar23 = auVar77._4_4_ * auVar40._4_4_;
        fVar29 = auVar77._8_4_ * auVar40._8_4_;
        fVar31 = auVar77._12_4_ * auVar40._12_4_;
        fVar90 = (float)((ulong)auVar86._0_8_ >> 0x20);
        fVar85 = auVar96._0_4_ + fVar36;
        auVar6._8_4_ = fVar22 + -fVar37;
        auVar6._4_4_ = fVar85;
        fVar91 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ (uint)fVar30) & -(uint)(fVar28 <= fVar30));
        fVar93 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ (uint)fVar30) & -(uint)(fVar28 <= fVar30));
        fVar94 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ (uint)fVar30) & -(uint)(fVar28 <= fVar30));
        fVar95 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ (uint)fVar30) & -(uint)(fVar28 <= fVar30));
        auVar6._0_4_ = (fVar90 + fVar80) * fVar38;
        auVar82._0_8_ = auVar6._0_8_ << 0x20;
        auVar82._8_4_ = fVar85 * fVar38;
        auVar82._12_4_ = (fVar22 + -fVar37) * fVar38;
        auVar83._4_12_ = auVar82._4_12_;
        auVar83._0_4_ = SQRT(fVar28) * 0.5;
        auVar59._0_4_ = (auVar96._0_4_ + fVar36) * fVar29;
        auVar59._4_4_ = (fVar22 + fVar37) * fVar29;
        auVar59._12_4_ = (fVar90 - fVar80) * fVar29;
        auVar42._0_4_ = (fVar22 - fVar37) * fVar31;
        auVar42._4_4_ = (fVar36 - auVar86._8_4_) * fVar31;
        auVar42._8_4_ = (fVar90 - fVar80) * fVar31;
        auVar40._4_4_ = SQRT(fVar30) * 0.5;
        auVar40._0_4_ = (fVar90 + fVar80) * fVar23;
        auVar40._8_4_ = (fVar22 + fVar37) * fVar23;
        auVar40._12_4_ = (fVar36 + -auVar86._8_4_) * fVar23;
        auVar92._4_4_ = -(uint)(fVar28 <= fVar30);
        auVar92._0_4_ = -(uint)(fVar28 <= fVar30);
        auVar92._8_4_ = -(uint)(fVar28 <= fVar30);
        auVar92._12_4_ = -(uint)(fVar28 <= fVar30);
        auVar59._8_4_ = SQRT(fVar32) * 0.5;
        auVar42._12_4_ = SQRT(fVar33) * 0.5;
        auVar68._4_4_ = -(uint)(fVar93 <= fVar32);
        auVar68._0_4_ = -(uint)(fVar91 <= fVar32);
        auVar68._8_4_ = -(uint)(fVar94 <= fVar32);
        auVar68._12_4_ = -(uint)(fVar95 <= fVar32);
        auVar59 = auVar59 ^ (auVar59 ^ auVar83 ^ (auVar83 ^ auVar40) & auVar92) & ~auVar68;
        auVar25._0_4_ =
             -(uint)((float)((uint)fVar91 ^
                            ((uint)fVar91 ^ (uint)fVar32) & -(uint)(fVar91 <= fVar32)) <= fVar33);
        auVar25._4_4_ =
             -(uint)((float)((uint)fVar93 ^
                            ((uint)fVar93 ^ (uint)fVar32) & -(uint)(fVar93 <= fVar32)) <= fVar33);
        auVar25._8_4_ =
             -(uint)((float)((uint)fVar94 ^
                            ((uint)fVar94 ^ (uint)fVar32) & -(uint)(fVar94 <= fVar32)) <= fVar33);
        auVar25._12_4_ =
             -(uint)((float)((uint)fVar95 ^
                            ((uint)fVar95 ^ (uint)fVar32) & -(uint)(fVar95 <= fVar32)) <= fVar33);
        auVar59 = auVar59 ^ (auVar59 ^ auVar42) & auVar25;
        fVar22 = auVar59._0_4_;
        fVar33 = -fVar22;
        fVar28 = auVar59._4_4_;
        fVar36 = -fVar28;
        fVar30 = auVar59._8_4_;
        fVar37 = -fVar30;
        fVar32 = auVar59._12_4_;
        auVar60._4_4_ = fVar30;
        auVar60._0_4_ = fVar30;
        auVar60._8_4_ = fVar30;
        auVar60._12_4_ = fVar30;
        auVar43._4_4_ = fVar37;
        auVar43._0_4_ = fVar37;
        auVar43._8_4_ = fVar37;
        auVar43._12_4_ = fVar37;
        auVar40 = NEON_ext(auVar60,auVar59,0xc,1);
        auVar72._4_4_ = fVar28;
        auVar72._0_4_ = fVar28;
        auVar72._8_4_ = fVar28;
        auVar72._12_4_ = fVar28;
        auVar68 = NEON_ext(auVar72,auVar40,0xc,1);
        fVar38 = (float)_DAT_03cab640;
        fVar23 = (float)((ulong)_DAT_03cab640 >> 0x20);
        fVar29 = (float)_UNK_03cab648;
        fVar31 = (float)((ulong)_UNK_03cab648 >> 0x20);
        auVar44._4_12_ = auVar43._4_12_;
        auVar44._0_4_ = fVar33;
        auVar46._0_8_ = auVar44._0_8_;
        auVar46._8_4_ = fVar36;
        auVar46._12_4_ = fVar37;
        auVar45._8_8_ = auVar46._8_8_;
        auVar45._4_4_ = fVar37;
        auVar45._0_4_ = fVar33;
        auVar47._0_12_ = auVar45._0_12_;
        auVar47._12_4_ = fVar37;
        auVar84._0_4_ =
             (float)_DAT_03cab1c0 * fVar32 + (float)_DAT_03cab5c0 * fVar22 * fVar38 +
             (float)_DAT_03cab1d0 * auVar68._0_4_ * fVar38 + (float)_DAT_03cac000 * auVar40._0_4_;
        auVar84._4_4_ =
             (float)((ulong)_DAT_03cab1c0 >> 0x20) * fVar32 +
             (float)((ulong)_DAT_03cab5c0 >> 0x20) * fVar28 * fVar23 +
             (float)((ulong)_DAT_03cab1d0 >> 0x20) * auVar68._4_4_ * fVar23 +
             (float)((ulong)_DAT_03cac000 >> 0x20) * auVar40._4_4_;
        auVar84._8_4_ =
             (float)_UNK_03cab1c8 * fVar32 + (float)_UNK_03cab5c8 * fVar30 * fVar29 +
             (float)_UNK_03cab1d8 * auVar68._8_4_ * fVar29 + (float)_UNK_03cac008 * auVar40._8_4_;
        auVar84._12_4_ =
             (float)((ulong)_UNK_03cab1c8 >> 0x20) * fVar32 +
             (float)((ulong)_UNK_03cab5c8 >> 0x20) * fVar22 * fVar31 +
             (float)((ulong)_UNK_03cab1d8 >> 0x20) * auVar68._12_4_ * fVar31 +
             (float)((ulong)_UNK_03cac008 >> 0x20) * auVar40._12_4_;
        auVar26._4_4_ = auVar84._8_4_;
        auVar26._0_4_ = auVar84._8_4_;
        auVar26._8_4_ = auVar84._8_4_;
        auVar26._12_4_ = auVar84._8_4_;
        auVar68 = NEON_ext(auVar47,auVar47,8,1);
        auVar40 = NEON_ext(auVar26,auVar84,0xc,1);
        auVar61._4_4_ = auVar84._4_4_;
        auVar61._0_4_ = auVar84._4_4_;
        auVar61._8_4_ = auVar84._4_4_;
        auVar61._12_4_ = auVar84._4_4_;
        fVar22 = auVar68._0_4_;
        auVar48._4_12_ = auVar47._4_12_;
        auVar48._0_4_ = fVar22;
        auVar50._0_8_ = auVar48._0_8_;
        auVar50._8_4_ = auVar68._8_4_;
        auVar50._12_4_ = fVar37;
        auVar49._8_8_ = auVar50._8_8_;
        auVar49._4_4_ = fVar33;
        auVar49._0_4_ = fVar22;
        auVar51._0_12_ = auVar49._0_12_;
        auVar51._12_4_ = fVar36;
        auVar96 = NEON_ext(auVar61,auVar40,0xc,1);
        auVar92 = NEON_ext(auVar51,auVar68,8,1);
        auVar92 = NEON_ext(auVar92,auVar92,0xc,1);
        auVar73._0_4_ =
             (fVar33 * auVar84._12_4_ + fVar32 * auVar84._0_4_ * fVar38 +
             auVar92._0_4_ * auVar96._0_4_ * fVar38) - auVar40._0_4_ * fVar22;
        auVar73._4_4_ =
             (fVar36 * auVar84._12_4_ + fVar32 * auVar84._4_4_ * fVar23 +
             auVar92._4_4_ * auVar96._4_4_ * fVar23) - auVar40._4_4_ * auVar68._4_4_;
        auVar73._8_4_ =
             (fVar37 * auVar84._12_4_ + fVar32 * auVar84._8_4_ * fVar29 +
             auVar92._8_4_ * auVar96._8_4_ * fVar29) - auVar40._8_4_ * auVar68._8_4_;
        auVar73._12_4_ =
             (fVar32 * auVar84._12_4_ + fVar33 * auVar84._0_4_ * fVar31 +
             auVar92._12_4_ * auVar96._12_4_ * fVar31) - auVar40._12_4_ * auVar68._12_4_;
        auVar40 = NEON_rev64(auVar73,4);
        fVar22 = auVar40._4_4_;
        fVar28 = auVar40._12_4_;
        auVar17._0_4_ = fVar22 * fVar22 + 0.0;
        auVar17._4_4_ = fVar28 * fVar28 + 0.0;
        auVar17._8_4_ = fVar22 * fVar22 + 0.0;
        auVar17._12_4_ = fVar28 * fVar28 + 0.0;
        auVar40 = NEON_ext(auVar17,auVar17,4,1);
        auVar18._0_4_ = auVar40._0_4_ + auVar40._4_4_;
        auVar18._4_4_ = auVar40._8_4_ + auVar40._12_4_;
        auVar18._8_4_ = auVar40._0_4_ + auVar40._4_4_;
        auVar18._12_4_ = auVar40._8_4_ + auVar40._12_4_;
        auVar40 = NEON_frsqrte(auVar18,4);
        auVar62._0_4_ = auVar18._0_4_ * auVar40._0_4_;
        auVar62._4_4_ = auVar18._4_4_ * auVar40._4_4_;
        auVar62._8_4_ = auVar18._8_4_ * auVar40._8_4_;
        auVar62._12_4_ = auVar18._12_4_ * auVar40._12_4_;
        auVar68 = NEON_frsqrts(auVar40,auVar62,4);
        auVar52._0_4_ = auVar40._0_4_ * auVar68._0_4_;
        auVar52._4_4_ = auVar40._4_4_ * auVar68._4_4_;
        auVar52._8_4_ = auVar40._8_4_ * auVar68._8_4_;
        auVar52._12_4_ = auVar40._12_4_ * auVar68._12_4_;
        auVar63._0_4_ = auVar18._0_4_ * auVar52._0_4_;
        auVar63._4_4_ = auVar18._4_4_ * auVar52._4_4_;
        auVar63._8_4_ = auVar18._8_4_ * auVar52._8_4_;
        auVar63._12_4_ = auVar18._12_4_ * auVar52._12_4_;
        iVar39 = -(uint)(auVar18._0_4_ == 0.0);
        iVar53 = -(uint)(auVar18._4_4_ == 0.0);
        iVar54 = -(uint)(auVar18._8_4_ == 0.0);
        iVar55 = -(uint)(auVar18._12_4_ == 0.0);
        auVar40 = NEON_frsqrts(auVar52,auVar63,4);
        fVar22 = auVar52._0_4_ * auVar40._0_4_ * fVar22;
        fVar30 = auVar52._4_4_ * auVar40._4_4_ * 0.0;
        fVar28 = auVar52._8_4_ * auVar40._8_4_ * fVar28;
        fVar32 = auVar52._12_4_ * auVar40._12_4_ * 0.0;
        local_18 = -1.0;
        fVar22 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                 CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                          ~(byte)((uint)iVar39 >> 0x10),
                                          CONCAT11((byte)((uint)fVar22 >> 8) &
                                                   ~(byte)((uint)iVar39 >> 8),
                                                   SUB41(fVar22,0) & ~(byte)iVar39)));
        auVar24._0_8_ =
             CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                      CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                               CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                        CONCAT14(SUB41(fVar30,0) & ~(byte)iVar53,fVar22))));
        auVar24[8] = SUB41(fVar28,0) & ~(byte)iVar54;
        auVar24[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar54 >> 8);
        auVar24[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
        auVar24[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
        auVar27[0xc] = SUB41(fVar32,0) & ~(byte)iVar55;
        auVar27._0_12_ = auVar24;
        auVar27[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar55 >> 8);
        auVar27[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
        auVar27[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
        local_54 = 1.0;
        fVar28 = *param_2 - *(float *)(param_3 + 0x40);
        fVar32 = param_2[2] - *(float *)(param_3 + 0x48);
        fVar33 = 0.0 - *(float *)(param_3 + 0x4c);
        auVar19._0_4_ = fVar28 * fVar28 + 0.0;
        auVar19._4_4_ = fVar32 * fVar32 + fVar33 * fVar33;
        auVar19._8_4_ = fVar28 * fVar28 + 0.0;
        auVar19._12_4_ = fVar32 * fVar32 + fVar33 * fVar33;
        auVar40 = NEON_ext(auVar19,auVar19,4,1);
        auVar20._0_4_ = auVar40._0_4_ + auVar40._4_4_;
        auVar20._4_4_ = auVar40._8_4_ + auVar40._12_4_;
        auVar20._8_4_ = auVar40._0_4_ + auVar40._4_4_;
        auVar20._12_4_ = auVar40._8_4_ + auVar40._12_4_;
        auVar40 = NEON_frsqrte(auVar20,4);
        auVar78._0_4_ = auVar20._0_4_ * auVar40._0_4_;
        auVar78._4_4_ = auVar20._4_4_ * auVar40._4_4_;
        auVar78._8_4_ = auVar20._8_4_ * auVar40._8_4_;
        auVar78._12_4_ = auVar20._12_4_ * auVar40._12_4_;
        auVar68 = NEON_frsqrts(auVar40,auVar78,4);
        auVar74._0_4_ = auVar40._0_4_ * auVar68._0_4_;
        auVar74._4_4_ = auVar40._4_4_ * auVar68._4_4_;
        auVar74._8_4_ = auVar40._8_4_ * auVar68._8_4_;
        auVar74._12_4_ = auVar40._12_4_ * auVar68._12_4_;
        auVar79._0_4_ = auVar20._0_4_ * auVar74._0_4_;
        auVar79._4_4_ = auVar20._4_4_ * auVar74._4_4_;
        auVar79._8_4_ = auVar20._8_4_ * auVar74._8_4_;
        auVar79._12_4_ = auVar20._12_4_ * auVar74._12_4_;
        auVar40 = NEON_frsqrts(auVar74,auVar79,4);
        fVar28 = fVar28 * auVar74._0_4_ * auVar40._0_4_;
        fVar30 = auVar74._4_4_ * auVar40._4_4_ * 0.0;
        fVar32 = fVar32 * auVar74._8_4_ * auVar40._8_4_;
        fVar33 = fVar33 * auVar74._12_4_ * auVar40._12_4_;
        iVar39 = -(uint)(auVar20._0_4_ == 0.0);
        iVar53 = -(uint)(auVar20._4_4_ == 0.0);
        iVar54 = -(uint)(auVar20._8_4_ == 0.0);
        iVar55 = -(uint)(auVar20._12_4_ == 0.0);
        fVar28 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                 CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                          ~(byte)((uint)iVar39 >> 0x10),
                                          CONCAT11((byte)((uint)fVar28 >> 8) &
                                                   ~(byte)((uint)iVar39 >> 8),
                                                   SUB41(fVar28,0) & ~(byte)iVar39)));
        auVar34._0_8_ =
             CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                      CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                               CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                        CONCAT14(SUB41(fVar30,0) & ~(byte)iVar53,fVar28))));
        auVar34[8] = SUB41(fVar32,0) & ~(byte)iVar54;
        auVar34[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar54 >> 8);
        auVar34[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
        auVar34[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
        auVar35[0xc] = SUB41(fVar33,0) & ~(byte)iVar55;
        auVar35._0_12_ = auVar34;
        auVar35[0xd] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar55 >> 8);
        auVar35[0xe] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
        auVar35[0xf] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
        fVar28 = fVar28 * fVar22;
        fVar22 = (float)((ulong)auVar34._0_8_ >> 0x20) * (float)((ulong)auVar24._0_8_ >> 0x20);
        fVar30 = auVar34._8_4_ * auVar24._8_4_;
        fVar32 = auVar35._12_4_ * auVar27._12_4_;
        auVar21._0_4_ = fVar28 + fVar22;
        auVar21._4_4_ = fVar30 + fVar32;
        auVar21._8_4_ = fVar28 + fVar22;
        auVar21._12_4_ = fVar30 + fVar32;
        auVar40 = NEON_ext(auVar21,auVar21,4,1);
        local_14 = auVar40._0_4_ + auVar40._4_4_;
        pfVar9 = &local_54;
        if (local_14 <= 1.0) {
          pfVar9 = &local_14;
        }
        pfVar2 = &local_18;
        if (-1.0 <= local_14) {
          pfVar2 = pfVar9;
        }
        fVar22 = *pfVar2;
        if (0.0 <= fVar22) {
          if (0.70710677 < fVar22) {
            fVar28 = 1.0 - fVar22 * fVar22;
            fVar30 = SQRT(fVar28);
            if (NAN(fVar30)) {
              fVar30 = sqrtf(fVar28);
            }
            fVar30 = fVar30 / fVar22;
            fVar22 = fVar30 * fVar30;
            fVar30 = fVar30 * (fVar22 * (fVar22 * (*(float *)(PTR_AtanCoefficients_047d24f0 + 0x18)
                                                  + fVar22 * (fVar22 * (*(float *)(
                                                  PTR_AtanCoefficients_047d24f0 + 0x10) +
                                                  fVar22 * (fVar22 * (*(float *)(
                                                  PTR_AtanCoefficients_047d24f0 + 8) +
                                                  fVar22 * (*(float *)PTR_AtanCoefficients_047d24f0
                                                            * fVar22 -
                                                           *(float *)(PTR_AtanCoefficients_047d24f0
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_047d24f0 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_047d24f0 + 0x14)
                                                  )) -
                                        *(float *)(PTR_AtanCoefficients_047d24f0 + 0x1c)) + 1.0);
            goto LAB_01e5be80;
          }
          fVar32 = 1.0 - fVar22 * fVar22;
          fVar28 = SQRT(fVar32);
          fVar30 = *(float *)PTR_FloatPiDivided2_047d23f0;
          if (NAN(fVar28)) {
            fVar28 = sqrtf(fVar32);
          }
          fVar22 = fVar22 / fVar28;
        }
        else {
          if (-0.70710677 <= fVar22) {
            fVar32 = 1.0 - fVar22 * fVar22;
            fVar28 = SQRT(fVar32);
            fVar30 = *(float *)PTR_FloatPiDivided2_047d23f0;
            if (NAN(fVar28)) {
              fVar28 = sqrtf(fVar32);
            }
            fVar28 = -fVar22 / fVar28;
            fVar22 = fVar28 * fVar28;
            fVar30 = fVar30 + fVar28 * (fVar22 * (fVar22 * (*(float *)(PTR_AtanCoefficients_047d24f0
                                                                      + 0x18) +
                                                           fVar22 * (fVar22 * (*(float *)(
                                                  PTR_AtanCoefficients_047d24f0 + 0x10) +
                                                  fVar22 * (fVar22 * (*(float *)(
                                                  PTR_AtanCoefficients_047d24f0 + 8) +
                                                  fVar22 * (*(float *)PTR_AtanCoefficients_047d24f0
                                                            * fVar22 -
                                                           *(float *)(PTR_AtanCoefficients_047d24f0
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_047d24f0 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_047d24f0 + 0x14)
                                                  )) - *(float *)(PTR_AtanCoefficients_047d24f0 +
                                                                 0x1c)) + 1.0);
            goto LAB_01e5be80;
          }
          fVar32 = 1.0 - fVar22 * fVar22;
          fVar28 = SQRT(fVar32);
          fVar30 = *(float *)PTR_FloatPi_047d23a0;
          if (NAN(fVar28)) {
            fVar28 = sqrtf(fVar32);
          }
          fVar22 = -fVar28 / fVar22;
        }
        fVar28 = fVar22 * fVar22;
        fVar30 = fVar30 - fVar22 * (fVar28 * (fVar28 * (*(float *)(PTR_AtanCoefficients_047d24f0 +
                                                                  0x18) +
                                                       fVar28 * (fVar28 * (*(float *)(
                                                  PTR_AtanCoefficients_047d24f0 + 0x10) +
                                                  fVar28 * (fVar28 * (*(float *)(
                                                  PTR_AtanCoefficients_047d24f0 + 8) +
                                                  fVar28 * (*(float *)PTR_AtanCoefficients_047d24f0
                                                            * fVar28 -
                                                           *(float *)(PTR_AtanCoefficients_047d24f0
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_047d24f0 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_047d24f0 + 0x14)
                                                  )) - *(float *)(PTR_AtanCoefficients_047d24f0 +
                                                                 0x1c)) + 1.0);
LAB_01e5be80:
        fVar22 = fVar30 * (*(float *)PTR_FloatDegree180_047d2390 / *(float *)puVar7) -
                 *(float *)(param_1 + 0xb8);
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        fVar22 = fVar22 / (*(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb8));
        fVar28 = *(float *)(param_1 + 0xb0);
        fVar30 = *(float *)(param_1 + 0xb4);
        if (1.0 < fVar22) {
          fVar22 = 1.0;
        }
        (**(code **)(*plVar8 + 0x60))(plVar8);
        return fVar30 + (fVar28 - fVar30) * (1.0 - fVar22);
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return 0.0;
}


