/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfdda8; name: FUN_01dfdda8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01dfdda8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [12];
  long *plVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  bool bVar11;
  undefined1 auVar12 [16];
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
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  int iVar40;
  int iVar44;
  int iVar45;
  undefined1 auVar41 [16];
  int iVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar47;
  int iVar54;
  undefined1 auVar48 [12];
  int iVar53;
  undefined1 auVar49 [16];
  int iVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar65;
  undefined1 auVar64 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  undefined1 auVar71 [12];
  float fVar75;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar76;
  float fVar78;
  float fVar79;
  undefined1 auVar77 [16];
  float fVar80;
  undefined1 auVar81 [16];
  undefined8 local_40;
  ulong uStack_38;
  long *local_30;
  long *local_28;
  
  FUN_00c9e664(&local_30,param_1 + 0xe8);
  if (local_30 != (long *)0x0) {
    plVar6 = (long *)FUN_01dfd3b8();
    lVar9 = *plVar6;
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar10 = *(short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar10) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01dfde70;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01dfde70:
          bVar11 = false;
        }
        if (bVar11) {
          if (*(long *)(lVar9 + 0x10) == 0) goto LAB_01dfdddc;
          plVar6 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          (**(code **)(*plVar6 + 0x68))(plVar6);
          lVar9 = (**(code **)(*(long *)local_28[9] + 0x68))();
          uStack_38 = (ulong)SUB164(*(undefined1 (*) [16])(lVar9 + 0x30),8);
          local_40 = SUB168(*(undefined1 (*) [16])(lVar9 + 0x30),0);
          pfVar7 = (float *)(**(code **)(*plVar6 + 0x68))(plVar6);
          fVar18 = *pfVar7;
          fVar22 = pfVar7[1];
          fVar24 = pfVar7[2];
          fVar26 = pfVar7[3];
          fVar27 = pfVar7[4];
          fVar37 = pfVar7[5];
          fVar38 = pfVar7[6];
          fVar39 = pfVar7[7];
          auVar81._0_4_ = fVar18 * fVar18 + fVar22 * fVar22;
          auVar81._4_4_ = fVar24 * fVar24 + fVar26 * fVar26;
          auVar81._8_4_ = fVar18 * fVar18 + fVar22 * fVar22;
          auVar81._12_4_ = fVar24 * fVar24 + fVar26 * fVar26;
          auVar41 = NEON_ext(auVar81,auVar81,4,1);
          auVar12._0_4_ = auVar41._0_4_ + auVar41._4_4_;
          auVar12._4_4_ = auVar41._8_4_ + auVar41._12_4_;
          auVar12._8_4_ = auVar41._0_4_ + auVar41._4_4_;
          auVar12._12_4_ = auVar41._8_4_ + auVar41._12_4_;
          auVar41 = NEON_frsqrte(auVar12,4);
          auVar56._0_4_ = auVar12._0_4_ * auVar41._0_4_;
          auVar56._4_4_ = auVar12._4_4_ * auVar41._4_4_;
          auVar56._8_4_ = auVar12._8_4_ * auVar41._8_4_;
          auVar56._12_4_ = auVar12._12_4_ * auVar41._12_4_;
          auVar57 = NEON_frsqrts(auVar41,auVar56,4);
          auVar49._0_4_ = auVar41._0_4_ * auVar57._0_4_;
          auVar49._4_4_ = auVar41._4_4_ * auVar57._4_4_;
          auVar49._8_4_ = auVar41._8_4_ * auVar57._8_4_;
          auVar49._12_4_ = auVar41._12_4_ * auVar57._12_4_;
          auVar58._0_4_ = auVar12._0_4_ * auVar49._0_4_;
          auVar58._4_4_ = auVar12._4_4_ * auVar49._4_4_;
          auVar58._8_4_ = auVar12._8_4_ * auVar49._8_4_;
          auVar58._12_4_ = auVar12._12_4_ * auVar49._12_4_;
          iVar40 = -(uint)(auVar12._0_4_ == 0.0);
          iVar44 = -(uint)(auVar12._4_4_ == 0.0);
          iVar45 = -(uint)(auVar12._8_4_ == 0.0);
          iVar46 = -(uint)(auVar12._12_4_ == 0.0);
          auVar41 = NEON_frsqrts(auVar49,auVar58,4);
          fVar18 = fVar18 * auVar49._0_4_ * auVar41._0_4_;
          fVar22 = fVar22 * auVar49._4_4_ * auVar41._4_4_;
          fVar24 = fVar24 * auVar49._8_4_ * auVar41._8_4_;
          fVar26 = fVar26 * auVar49._12_4_ * auVar41._12_4_;
          auVar13._0_4_ = fVar27 * fVar27 + fVar37 * fVar37;
          auVar13._4_4_ = fVar38 * fVar38 + fVar39 * fVar39;
          auVar13._8_4_ = fVar27 * fVar27 + fVar37 * fVar37;
          auVar13._12_4_ = fVar38 * fVar38 + fVar39 * fVar39;
          auVar41 = NEON_ext(auVar13,auVar13,4,1);
          auVar14._0_4_ = auVar41._0_4_ + auVar41._4_4_;
          auVar14._4_4_ = auVar41._8_4_ + auVar41._12_4_;
          auVar14._8_4_ = auVar41._0_4_ + auVar41._4_4_;
          auVar14._12_4_ = auVar41._8_4_ + auVar41._12_4_;
          auVar41 = NEON_frsqrte(auVar14,4);
          auVar62._0_4_ = auVar14._0_4_ * auVar41._0_4_;
          auVar62._4_4_ = auVar14._4_4_ * auVar41._4_4_;
          auVar62._8_4_ = auVar14._8_4_ * auVar41._8_4_;
          auVar62._12_4_ = auVar14._12_4_ * auVar41._12_4_;
          auVar57 = NEON_frsqrts(auVar41,auVar62,4);
          auVar59._0_4_ = auVar41._0_4_ * auVar57._0_4_;
          auVar59._4_4_ = auVar41._4_4_ * auVar57._4_4_;
          auVar59._8_4_ = auVar41._8_4_ * auVar57._8_4_;
          auVar59._12_4_ = auVar41._12_4_ * auVar57._12_4_;
          auVar63._0_4_ = auVar14._0_4_ * auVar59._0_4_;
          auVar63._4_4_ = auVar14._4_4_ * auVar59._4_4_;
          auVar63._8_4_ = auVar14._8_4_ * auVar59._8_4_;
          auVar63._12_4_ = auVar14._12_4_ * auVar59._12_4_;
          iVar47 = -(uint)(auVar14._0_4_ == 0.0);
          iVar53 = -(uint)(auVar14._4_4_ == 0.0);
          iVar54 = -(uint)(auVar14._8_4_ == 0.0);
          iVar55 = -(uint)(auVar14._12_4_ == 0.0);
          auVar41 = NEON_frsqrts(auVar59,auVar63,4);
          fVar27 = fVar27 * auVar59._0_4_ * auVar41._0_4_;
          fVar37 = fVar37 * auVar59._4_4_ * auVar41._4_4_;
          fVar38 = fVar38 * auVar59._8_4_ * auVar41._8_4_;
          fVar39 = fVar39 * auVar59._12_4_ * auVar41._12_4_;
          fVar19 = pfVar7[8];
          fVar23 = pfVar7[9];
          fVar25 = pfVar7[10];
          fVar65 = pfVar7[0xb] * pfVar7[0xb];
          auVar15._0_4_ = fVar19 * fVar19 + fVar23 * fVar23;
          auVar15._4_4_ = fVar25 * fVar25 + fVar65;
          auVar15._8_4_ = fVar19 * fVar19 + fVar23 * fVar23;
          auVar15._12_4_ = fVar25 * fVar25 + fVar65;
          auVar41 = NEON_ext(auVar15,auVar15,4,1);
          auVar16._0_4_ = auVar41._0_4_ + auVar41._4_4_;
          auVar16._4_4_ = auVar41._8_4_ + auVar41._12_4_;
          auVar16._8_4_ = auVar41._0_4_ + auVar41._4_4_;
          auVar16._12_4_ = auVar41._8_4_ + auVar41._12_4_;
          auVar41 = NEON_frsqrte(auVar16,4);
          auVar72._0_4_ = auVar16._0_4_ * auVar41._0_4_;
          auVar72._4_4_ = auVar16._4_4_ * auVar41._4_4_;
          auVar72._8_4_ = auVar16._8_4_ * auVar41._8_4_;
          auVar72._12_4_ = auVar16._12_4_ * auVar41._12_4_;
          auVar57 = NEON_frsqrts(auVar41,auVar72,4);
          auVar66._0_4_ = auVar41._0_4_ * auVar57._0_4_;
          auVar66._4_4_ = auVar41._4_4_ * auVar57._4_4_;
          auVar66._8_4_ = auVar41._8_4_ * auVar57._8_4_;
          auVar66._12_4_ = auVar41._12_4_ * auVar57._12_4_;
          auVar73._0_4_ = auVar16._0_4_ * auVar66._0_4_;
          auVar73._4_4_ = auVar16._4_4_ * auVar66._4_4_;
          auVar73._8_4_ = auVar16._8_4_ * auVar66._8_4_;
          auVar73._12_4_ = auVar16._12_4_ * auVar66._12_4_;
          auVar41 = NEON_frsqrts(auVar66,auVar73,4);
          fVar70 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                   CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                            ~(byte)((uint)iVar40 >> 0x10),
                                            CONCAT11((byte)((uint)fVar18 >> 8) &
                                                     ~(byte)((uint)iVar40 >> 8),
                                                     SUB41(fVar18,0) & ~(byte)iVar40)));
          auVar71._0_8_ =
               CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                        CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                                 CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar44 >> 8),
                                          CONCAT14(SUB41(fVar22,0) & ~(byte)iVar44,fVar70))));
          auVar71[8] = SUB41(fVar24,0) & ~(byte)iVar45;
          auVar71[9] = (byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar45 >> 8);
          auVar71[10] = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
          auVar71[0xb] = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
          auVar74[0xc] = SUB41(fVar26,0) & ~(byte)iVar46;
          auVar74._0_12_ = auVar71;
          auVar74[0xd] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar46 >> 8);
          auVar74[0xe] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
          auVar74[0xf] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
          iVar40 = -(uint)(auVar16._0_4_ == 0.0);
          iVar44 = -(uint)(auVar16._4_4_ == 0.0);
          iVar45 = -(uint)(auVar16._8_4_ == 0.0);
          fVar65 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                                   CONCAT12((byte)((uint)fVar27 >> 0x10) &
                                            ~(byte)((uint)iVar47 >> 0x10),
                                            CONCAT11((byte)((uint)fVar27 >> 8) &
                                                     ~(byte)((uint)iVar47 >> 8),
                                                     SUB41(fVar27,0) & ~(byte)iVar47)));
          auVar42._0_8_ =
               CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                        CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                                 CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                          CONCAT14(SUB41(fVar37,0) & ~(byte)iVar53,fVar65))));
          auVar42[8] = SUB41(fVar38,0) & ~(byte)iVar54;
          auVar42[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar54 >> 8);
          auVar42[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
          auVar42[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
          auVar42[0xc] = SUB41(fVar39,0) & ~(byte)iVar55;
          auVar42[0xd] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar55 >> 8);
          auVar42[0xe] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
          auVar42[0xf] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
          fVar19 = fVar19 * auVar66._0_4_ * auVar41._0_4_;
          fVar23 = fVar23 * auVar66._4_4_ * auVar41._4_4_;
          fVar25 = fVar25 * auVar66._8_4_ * auVar41._8_4_;
          fVar37 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                   CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                            ~(byte)((uint)iVar40 >> 0x10),
                                            CONCAT11((byte)((uint)fVar19 >> 8) &
                                                     ~(byte)((uint)iVar40 >> 8),
                                                     SUB41(fVar19,0) & ~(byte)iVar40)));
          auVar48._0_8_ =
               CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                        CONCAT16((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                                 CONCAT15((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar44 >> 8),
                                          CONCAT14(SUB41(fVar23,0) & ~(byte)iVar44,fVar37))));
          auVar48[8] = SUB41(fVar25,0) & ~(byte)iVar45;
          auVar48[9] = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar45 >> 8);
          auVar48[10] = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
          auVar48[0xb] = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
          auVar41 = NEON_fmov(0x3f800000,4);
          fVar18 = (float)((ulong)auVar42._0_8_ >> 0x20);
          fVar27 = auVar48._8_4_;
          fVar22 = auVar41._0_4_ + (float)_DAT_03cab3a0 * fVar70 + (float)_DAT_03cac210 * fVar18 +
                   (float)_DAT_03cabb00 * fVar27;
          fVar24 = auVar41._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar70 +
                   (float)((ulong)_DAT_03cac210 >> 0x20) * fVar18 +
                   (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar27;
          fVar26 = auVar41._8_4_ + (float)_UNK_03cab3a8 * fVar70 + (float)_UNK_03cac218 * fVar18 +
                   (float)_UNK_03cabb08 * fVar27;
          fVar27 = auVar41._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar70 +
                   (float)((ulong)_UNK_03cac218 >> 0x20) * fVar18 +
                   (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar27;
          fVar38 = (float)((ulong)auVar48._0_8_ >> 0x20);
          auVar41 = NEON_fmov(0x40800000,4);
          auVar60._0_4_ = SQRT(fVar22) * 0.5 * auVar41._0_4_;
          auVar60._4_4_ = SQRT(fVar24) * 0.5 * auVar41._4_4_;
          auVar60._8_4_ = SQRT(fVar26) * 0.5 * auVar41._8_4_;
          auVar60._12_4_ = SQRT(fVar27) * 0.5 * auVar41._12_4_;
          auVar41 = NEON_frecpe(auVar60,4);
          auVar77 = NEON_ext(auVar42,auVar42,8,1);
          auVar81 = NEON_ext(auVar74,auVar74,8,1);
          auVar57 = NEON_frecps(auVar41,auVar60,4);
          auVar64._0_4_ = auVar41._0_4_ * auVar57._0_4_;
          auVar64._4_4_ = auVar41._4_4_ * auVar57._4_4_;
          auVar64._8_4_ = auVar41._8_4_ * auVar57._8_4_;
          auVar64._12_4_ = auVar41._12_4_ * auVar57._12_4_;
          fVar18 = auVar77._0_4_;
          auVar41 = NEON_frecps(auVar64,auVar60,4);
          fVar39 = auVar64._0_4_ * auVar41._0_4_;
          fVar19 = auVar64._4_4_ * auVar41._4_4_;
          fVar23 = auVar64._8_4_ * auVar41._8_4_;
          fVar25 = auVar64._12_4_ * auVar41._12_4_;
          fVar75 = (float)((ulong)auVar71._0_8_ >> 0x20);
          fVar70 = auVar81._0_4_ + fVar37;
          auVar5._8_4_ = fVar18 + -fVar38;
          auVar5._4_4_ = fVar70;
          fVar76 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar24) & -(uint)(fVar22 <= fVar24))
          ;
          fVar78 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar24) & -(uint)(fVar22 <= fVar24))
          ;
          fVar79 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar24) & -(uint)(fVar22 <= fVar24))
          ;
          fVar80 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)fVar24) & -(uint)(fVar22 <= fVar24))
          ;
          auVar5._0_4_ = (fVar75 + fVar65) * fVar39;
          auVar67._0_8_ = auVar5._0_8_ << 0x20;
          auVar67._8_4_ = fVar70 * fVar39;
          auVar67._12_4_ = (fVar18 + -fVar38) * fVar39;
          auVar68._4_12_ = auVar67._4_12_;
          auVar68._0_4_ = SQRT(fVar22) * 0.5;
          auVar50._0_4_ = (auVar81._0_4_ + fVar37) * fVar23;
          auVar50._4_4_ = (fVar18 + fVar38) * fVar23;
          auVar50._12_4_ = (fVar75 - fVar65) * fVar23;
          auVar43._0_4_ = (fVar18 - fVar38) * fVar25;
          auVar43._4_4_ = (fVar37 - auVar71._8_4_) * fVar25;
          auVar43._8_4_ = (fVar75 - fVar65) * fVar25;
          auVar41._4_4_ = SQRT(fVar24) * 0.5;
          auVar41._0_4_ = (fVar75 + fVar65) * fVar19;
          auVar41._8_4_ = (fVar18 + fVar38) * fVar19;
          auVar41._12_4_ = (fVar37 + -auVar71._8_4_) * fVar19;
          auVar77._4_4_ = -(uint)(fVar22 <= fVar24);
          auVar77._0_4_ = -(uint)(fVar22 <= fVar24);
          auVar77._8_4_ = -(uint)(fVar22 <= fVar24);
          auVar77._12_4_ = -(uint)(fVar22 <= fVar24);
          auVar50._8_4_ = SQRT(fVar26) * 0.5;
          auVar43._12_4_ = SQRT(fVar27) * 0.5;
          auVar57._4_4_ = -(uint)(fVar78 <= fVar26);
          auVar57._0_4_ = -(uint)(fVar76 <= fVar26);
          auVar57._8_4_ = -(uint)(fVar79 <= fVar26);
          auVar57._12_4_ = -(uint)(fVar80 <= fVar26);
          auVar50 = auVar50 ^ (auVar50 ^ auVar68 ^ (auVar68 ^ auVar41) & auVar77) & ~auVar57;
          auVar20._0_4_ =
               -(uint)((float)((uint)fVar76 ^
                              ((uint)fVar76 ^ (uint)fVar26) & -(uint)(fVar76 <= fVar26)) <= fVar27);
          auVar20._4_4_ =
               -(uint)((float)((uint)fVar78 ^
                              ((uint)fVar78 ^ (uint)fVar26) & -(uint)(fVar78 <= fVar26)) <= fVar27);
          auVar20._8_4_ =
               -(uint)((float)((uint)fVar79 ^
                              ((uint)fVar79 ^ (uint)fVar26) & -(uint)(fVar79 <= fVar26)) <= fVar27);
          auVar20._12_4_ =
               -(uint)((float)((uint)fVar80 ^
                              ((uint)fVar80 ^ (uint)fVar26) & -(uint)(fVar80 <= fVar26)) <= fVar27);
          auVar50 = auVar50 ^ (auVar50 ^ auVar43) & auVar20;
          fVar18 = auVar50._0_4_;
          auVar29._0_4_ = -fVar18;
          fVar22 = auVar50._4_4_;
          fVar24 = auVar50._8_4_;
          auVar28._8_4_ = -fVar24;
          fVar26 = auVar50._12_4_;
          auVar51._4_4_ = fVar24;
          auVar51._0_4_ = fVar24;
          auVar51._8_4_ = fVar24;
          auVar51._12_4_ = fVar24;
          auVar41 = NEON_ext(auVar51,auVar50,0xc,1);
          auVar61._4_4_ = fVar22;
          auVar61._0_4_ = fVar22;
          auVar61._8_4_ = fVar22;
          auVar61._12_4_ = fVar22;
          fVar27 = (float)((ulong)_DAT_03cab640 >> 0x20);
          fVar37 = (float)((ulong)_UNK_03cab648 >> 0x20);
          auVar57 = NEON_ext(auVar61,auVar41,0xc,1);
          auVar69._0_4_ =
               (float)_DAT_03caae50 * fVar26 + fVar18 * (float)_DAT_03cab640 * 0.0 +
               (float)_DAT_03cab280 * auVar57._0_4_ * (float)_DAT_03cab640 +
               (float)_DAT_03caafc0 * auVar41._0_4_;
          auVar69._4_4_ =
               (float)((ulong)_DAT_03caae50 >> 0x20) * fVar26 + fVar22 * fVar27 * 0.0 +
               (float)((ulong)_DAT_03cab280 >> 0x20) * auVar57._4_4_ * fVar27 +
               (float)((ulong)_DAT_03caafc0 >> 0x20) * auVar41._4_4_;
          auVar69._8_4_ =
               (float)_UNK_03caae58 * fVar26 + fVar24 * (float)_UNK_03cab648 * 0.0 +
               (float)_UNK_03cab288 * auVar57._8_4_ * (float)_UNK_03cab648 +
               (float)_UNK_03caafc8 * auVar41._8_4_;
          auVar69._12_4_ =
               (float)((ulong)_UNK_03caae58 >> 0x20) * fVar26 + fVar18 * fVar37 * 0.0 +
               (float)((ulong)_UNK_03cab288 >> 0x20) * auVar57._12_4_ * fVar37 +
               (float)((ulong)_UNK_03caafc8 >> 0x20) * auVar41._12_4_;
          auVar28._4_4_ = auVar28._8_4_;
          auVar28._0_4_ = auVar28._8_4_;
          auVar28._12_4_ = auVar28._8_4_;
          auVar21._4_4_ = auVar69._8_4_;
          auVar21._0_4_ = auVar69._8_4_;
          auVar21._8_4_ = auVar69._8_4_;
          auVar21._12_4_ = auVar69._8_4_;
          auVar41 = NEON_ext(auVar21,auVar69,0xc,1);
          auVar52._4_4_ = auVar69._4_4_;
          auVar52._0_4_ = auVar69._4_4_;
          auVar52._8_4_ = auVar69._4_4_;
          auVar52._12_4_ = auVar69._4_4_;
          NEON_ext(auVar52,auVar41,0xc,1);
          auVar29._4_12_ = auVar28._4_12_;
          auVar31._0_8_ = auVar29._0_8_;
          auVar31._8_4_ = -fVar22;
          auVar31._12_4_ = auVar28._8_4_;
          auVar30._8_8_ = auVar31._8_8_;
          auVar30._4_4_ = auVar28._8_4_;
          auVar30._0_4_ = auVar29._0_4_;
          auVar32._0_12_ = auVar30._0_12_;
          auVar32._12_4_ = auVar28._8_4_;
          auVar41 = NEON_ext(auVar32,auVar32,8,1);
          auVar33._4_12_ = auVar32._4_12_;
          auVar33._0_4_ = auVar41._0_4_;
          auVar35._0_8_ = auVar33._0_8_;
          auVar35._8_4_ = auVar41._8_4_;
          auVar35._12_4_ = auVar28._8_4_;
          auVar34._8_8_ = auVar35._8_8_;
          auVar34._4_4_ = auVar29._0_4_;
          auVar34._0_4_ = auVar41._0_4_;
          auVar36._0_12_ = auVar34._0_12_;
          auVar36._12_4_ = -fVar22;
          auVar41 = NEON_ext(auVar36,auVar41,8,1);
          NEON_ext(auVar41,auVar41,0xc,1);
          fVar18 = (float)((ulong)_DAT_03caafd0 >> 0x20);
          auVar17._0_4_ = (float)_DAT_03caafd0 + fVar18;
          fVar22 = (float)((ulong)_UNK_03caafd8 >> 0x20);
          auVar17._4_4_ = (float)_UNK_03caafd8 + fVar22;
          auVar17._8_4_ = (float)_DAT_03caafd0 + fVar18;
          auVar17._12_4_ = (float)_UNK_03caafd8 + fVar22;
          NEON_ext(auVar17,auVar17,4,1);
          uVar8 = FUN_01dfd4f8(param_1,&local_40);
          bVar11 = (uVar8 & 1) != 0;
          if (bVar11) {
            *(ulong *)(param_1 + 0x728) = uStack_38;
            *(undefined8 *)(param_1 + 0x720) = local_40;
          }
          (**(code **)(*plVar6 + 0x60))(plVar6);
          break;
        }
        bVar11 = false;
        sVar10 = sVar2;
      } while (sVar2 != 0);
      goto LAB_01dfdde0;
    }
  }
LAB_01dfdddc:
  bVar11 = false;
LAB_01dfdde0:
  if (local_28 != (long *)0x0) {
    plVar6 = local_28 + 5;
    do {
      lVar9 = *plVar6;
      iVar40 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar40;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar40 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x60))();
  }
  return bVar11;
}


