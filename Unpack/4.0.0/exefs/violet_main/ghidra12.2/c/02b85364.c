/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b85364; name: FUN_02b85364
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02b85364(long *param_1)

{
  float fVar1;
  undefined1 auVar2 [12];
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 auVar13 [12];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  float fVar36;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [12];
  undefined1 auVar38 [16];
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  float fVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar48;
  int iVar51;
  int iVar52;
  int iVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar54;
  int iVar56;
  int iVar57;
  undefined1 auVar55 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
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
  
  pfVar3 = (float *)(**(code **)(*param_1 + 0x68))();
  fVar12 = *pfVar3;
  fVar17 = pfVar3[1];
  fVar18 = pfVar3[2];
  fVar19 = pfVar3[3];
  fVar1 = (float)*(undefined8 *)(pfVar3 + 4);
  fVar7 = (float)((ulong)*(undefined8 *)(pfVar3 + 4) >> 0x20);
  fVar8 = (float)*(undefined8 *)(pfVar3 + 6);
  fVar11 = (float)((ulong)*(undefined8 *)(pfVar3 + 6) >> 0x20);
  fVar36 = pfVar3[8];
  fVar39 = pfVar3[9];
  fVar40 = pfVar3[10];
  fVar47 = pfVar3[0xb] * pfVar3[0xb];
  auVar60._0_4_ = fVar1 * fVar1 + fVar7 * fVar7;
  auVar60._4_4_ = fVar8 * fVar8 + fVar11 * fVar11;
  auVar60._8_4_ = fVar1 * fVar1 + fVar7 * fVar7;
  auVar60._12_4_ = fVar8 * fVar8 + fVar11 * fVar11;
  auVar62._0_4_ = fVar36 * fVar36 + fVar39 * fVar39;
  auVar62._4_4_ = fVar40 * fVar40 + fVar47;
  auVar62._8_4_ = fVar36 * fVar36 + fVar39 * fVar39;
  auVar62._12_4_ = fVar40 * fVar40 + fVar47;
  auVar66._0_4_ = fVar12 * fVar12 + fVar17 * fVar17;
  auVar66._4_4_ = fVar18 * fVar18 + fVar19 * fVar19;
  auVar66._8_4_ = fVar12 * fVar12 + fVar17 * fVar17;
  auVar66._12_4_ = fVar18 * fVar18 + fVar19 * fVar19;
  auVar9 = NEON_ext(auVar66,auVar66,4,1);
  auVar4._0_4_ = auVar9._0_4_ + auVar9._4_4_;
  auVar4._4_4_ = auVar9._8_4_ + auVar9._12_4_;
  auVar4._8_4_ = auVar9._0_4_ + auVar9._4_4_;
  auVar4._12_4_ = auVar9._8_4_ + auVar9._12_4_;
  auVar9 = NEON_ext(auVar60,auVar60,4,1);
  auVar75 = NEON_fmov(0x40800000,4);
  auVar5._0_4_ = auVar9._0_4_ + auVar9._4_4_;
  auVar5._4_4_ = auVar9._8_4_ + auVar9._12_4_;
  auVar5._8_4_ = auVar9._0_4_ + auVar9._4_4_;
  auVar5._12_4_ = auVar9._8_4_ + auVar9._12_4_;
  auVar9 = NEON_ext(auVar62,auVar62,4,1);
  auVar45 = NEON_frsqrte(auVar4,4);
  auVar6._0_4_ = auVar9._0_4_ + auVar9._4_4_;
  auVar6._4_4_ = auVar9._8_4_ + auVar9._12_4_;
  auVar6._8_4_ = auVar9._0_4_ + auVar9._4_4_;
  auVar6._12_4_ = auVar9._8_4_ + auVar9._12_4_;
  auVar9 = NEON_frsqrte(auVar5,4);
  auVar59._0_4_ = auVar4._0_4_ * auVar45._0_4_;
  auVar59._4_4_ = auVar4._4_4_ * auVar45._4_4_;
  auVar59._8_4_ = auVar4._8_4_ * auVar45._8_4_;
  auVar59._12_4_ = auVar4._12_4_ * auVar45._12_4_;
  auVar62 = NEON_frsqrte(auVar6,4);
  auVar65._0_4_ = auVar5._0_4_ * auVar9._0_4_;
  auVar65._4_4_ = auVar5._4_4_ * auVar9._4_4_;
  auVar65._8_4_ = auVar5._8_4_ * auVar9._8_4_;
  auVar65._12_4_ = auVar5._12_4_ * auVar9._12_4_;
  auVar60 = NEON_frsqrts(auVar45,auVar59,4);
  auVar73._0_4_ = auVar6._0_4_ * auVar62._0_4_;
  auVar73._4_4_ = auVar6._4_4_ * auVar62._4_4_;
  auVar73._8_4_ = auVar6._8_4_ * auVar62._8_4_;
  auVar73._12_4_ = auVar6._12_4_ * auVar62._12_4_;
  auVar66 = NEON_frsqrts(auVar9,auVar65,4);
  auVar46._0_4_ = auVar45._0_4_ * auVar60._0_4_;
  auVar46._4_4_ = auVar45._4_4_ * auVar60._4_4_;
  auVar46._8_4_ = auVar45._8_4_ * auVar60._8_4_;
  auVar46._12_4_ = auVar45._12_4_ * auVar60._12_4_;
  auVar45 = NEON_frsqrts(auVar62,auVar73,4);
  auVar67._0_4_ = auVar9._0_4_ * auVar66._0_4_;
  auVar67._4_4_ = auVar9._4_4_ * auVar66._4_4_;
  auVar67._8_4_ = auVar9._8_4_ * auVar66._8_4_;
  auVar67._12_4_ = auVar9._12_4_ * auVar66._12_4_;
  auVar10._0_4_ = auVar4._0_4_ * auVar46._0_4_;
  auVar10._4_4_ = auVar4._4_4_ * auVar46._4_4_;
  auVar10._8_4_ = auVar4._8_4_ * auVar46._8_4_;
  auVar10._12_4_ = auVar4._12_4_ * auVar46._12_4_;
  iVar48 = -(uint)(auVar4._0_4_ == 0.0);
  iVar51 = -(uint)(auVar4._4_4_ == 0.0);
  iVar52 = -(uint)(auVar4._8_4_ == 0.0);
  iVar53 = -(uint)(auVar4._12_4_ == 0.0);
  auVar61._0_4_ = auVar62._0_4_ * auVar45._0_4_;
  auVar61._4_4_ = auVar62._4_4_ * auVar45._4_4_;
  auVar61._8_4_ = auVar62._8_4_ * auVar45._8_4_;
  auVar61._12_4_ = auVar62._12_4_ * auVar45._12_4_;
  auVar63._0_4_ = auVar5._0_4_ * auVar67._0_4_;
  auVar63._4_4_ = auVar5._4_4_ * auVar67._4_4_;
  auVar63._8_4_ = auVar5._8_4_ * auVar67._8_4_;
  auVar63._12_4_ = auVar5._12_4_ * auVar67._12_4_;
  auVar9 = NEON_frsqrts(auVar46,auVar10,4);
  auVar74._0_4_ = auVar6._0_4_ * auVar61._0_4_;
  auVar74._4_4_ = auVar6._4_4_ * auVar61._4_4_;
  auVar74._8_4_ = auVar6._8_4_ * auVar61._8_4_;
  auVar74._12_4_ = auVar6._12_4_ * auVar61._12_4_;
  auVar60 = NEON_frsqrts(auVar67,auVar63,4);
  auVar62 = NEON_frsqrts(auVar61,auVar74,4);
  auVar45 = NEON_fmov(0x3f800000,4);
  iVar41 = -(uint)(auVar5._0_4_ == 0.0);
  iVar42 = -(uint)(auVar5._4_4_ == 0.0);
  iVar43 = -(uint)(auVar5._8_4_ == 0.0);
  iVar44 = -(uint)(auVar5._12_4_ == 0.0);
  iVar54 = -(uint)(auVar6._0_4_ == 0.0);
  iVar56 = -(uint)(auVar6._4_4_ == 0.0);
  iVar57 = -(uint)(auVar6._8_4_ == 0.0);
  fVar12 = fVar12 * auVar46._0_4_ * auVar9._0_4_;
  fVar17 = fVar17 * auVar46._4_4_ * auVar9._4_4_;
  fVar18 = fVar18 * auVar46._8_4_ * auVar9._8_4_;
  fVar19 = fVar19 * auVar46._12_4_ * auVar9._12_4_;
  fVar47 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                           CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                    CONCAT11((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar48 >> 8),
                                             SUB41(fVar12,0) & ~(byte)iVar48)));
  auVar13._0_8_ =
       CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                         CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                  CONCAT14(SUB41(fVar17,0) & ~(byte)iVar51,fVar47))));
  auVar13[8] = SUB41(fVar18,0) & ~(byte)iVar52;
  auVar13[9] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar52 >> 8);
  auVar13[10] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
  auVar13[0xb] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
  auVar14[0xc] = SUB41(fVar19,0) & ~(byte)iVar53;
  auVar14._0_12_ = auVar13;
  auVar14[0xd] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar53 >> 8);
  auVar14[0xe] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
  auVar14[0xf] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
  fVar1 = fVar1 * auVar67._0_4_ * auVar60._0_4_;
  fVar7 = fVar7 * auVar67._4_4_ * auVar60._4_4_;
  fVar8 = fVar8 * auVar67._8_4_ * auVar60._8_4_;
  fVar11 = fVar11 * auVar67._12_4_ * auVar60._12_4_;
  bVar20 = SUB41(fVar1,0) & ~(byte)iVar41;
  bVar21 = (byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar41 >> 8);
  bVar22 = (byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
  bVar23 = (byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
  bVar24 = SUB41(fVar7,0) & ~(byte)iVar42;
  bVar25 = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar42 >> 8);
  bVar26 = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
  bVar27 = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
  bVar28 = SUB41(fVar8,0) & ~(byte)iVar43;
  bVar29 = (byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar43 >> 8);
  bVar30 = (byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
  bVar31 = (byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
  bVar32 = SUB41(fVar11,0) & ~(byte)iVar44;
  bVar33 = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar44 >> 8);
  bVar34 = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
  bVar35 = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
  fVar36 = fVar36 * auVar61._0_4_ * auVar62._0_4_;
  fVar39 = fVar39 * auVar61._4_4_ * auVar62._4_4_;
  fVar40 = fVar40 * auVar61._8_4_ * auVar62._8_4_;
  fVar18 = (float)((ulong)auVar13._0_8_ >> 0x20);
  fVar19 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                           CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                                    CONCAT11((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar54 >> 8),
                                             SUB41(fVar36,0) & ~(byte)iVar54)));
  auVar37._0_8_ =
       CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10),
                         CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar56 >> 8),
                                  CONCAT14(SUB41(fVar39,0) & ~(byte)iVar56,fVar19))));
  auVar37[8] = SUB41(fVar40,0) & ~(byte)iVar57;
  auVar37[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar57 >> 8);
  auVar37[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
  auVar37[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
  fVar1 = (float)CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
  fVar36 = (float)((ulong)auVar37._0_8_ >> 0x20);
  fVar7 = auVar37._8_4_;
  fVar8 = auVar45._0_4_ + (float)_DAT_03cab3a0 * fVar47 + (float)_DAT_03cac210 * fVar1 +
          (float)_DAT_03cabb00 * fVar7;
  fVar11 = auVar45._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar47 +
           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar1 +
           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar7;
  fVar12 = auVar45._8_4_ + (float)_UNK_03cab3a8 * fVar47 + (float)_UNK_03cac218 * fVar1 +
           (float)_UNK_03cabb08 * fVar7;
  fVar17 = auVar45._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar47 +
           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar1 +
           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar7;
  auVar60 = NEON_ext(auVar14,auVar14,8,1);
  auVar9[1] = bVar21;
  auVar9[0] = bVar20;
  auVar9[2] = bVar22;
  auVar9[3] = bVar23;
  auVar9[4] = bVar24;
  auVar9[5] = bVar25;
  auVar9[6] = bVar26;
  auVar9[7] = bVar27;
  auVar9[8] = bVar28;
  auVar9[9] = bVar29;
  auVar9[10] = bVar30;
  auVar9[0xb] = bVar31;
  auVar9[0xc] = bVar32;
  auVar9[0xd] = bVar33;
  auVar9[0xe] = bVar34;
  auVar9[0xf] = bVar35;
  auVar45[1] = bVar21;
  auVar45[0] = bVar20;
  auVar45[2] = bVar22;
  auVar45[3] = bVar23;
  auVar45[4] = bVar24;
  auVar45[5] = bVar25;
  auVar45[6] = bVar26;
  auVar45[7] = bVar27;
  auVar45[8] = bVar28;
  auVar45[9] = bVar29;
  auVar45[10] = bVar30;
  auVar45[0xb] = bVar31;
  auVar45[0xc] = bVar32;
  auVar45[0xd] = bVar33;
  auVar45[0xe] = bVar34;
  auVar45[0xf] = bVar35;
  auVar9 = NEON_ext(auVar9,auVar45,8,1);
  fVar7 = auVar9._0_4_;
  auVar55._0_4_ = SQRT(fVar8) * 0.5 * auVar75._0_4_;
  auVar55._4_4_ = SQRT(fVar11) * 0.5 * auVar75._4_4_;
  auVar55._8_4_ = SQRT(fVar12) * 0.5 * auVar75._8_4_;
  auVar55._12_4_ = SQRT(fVar17) * 0.5 * auVar75._12_4_;
  auVar15._4_4_ = fVar8;
  auVar15._0_4_ = fVar8;
  auVar15._8_4_ = fVar8;
  auVar15._12_4_ = fVar8;
  auVar68._4_4_ = fVar11;
  auVar68._0_4_ = fVar11;
  auVar68._8_4_ = fVar11;
  auVar68._12_4_ = fVar11;
  auVar76._0_4_ = -(uint)(fVar8 <= fVar11);
  auVar76._4_4_ = -(uint)(fVar8 <= fVar11);
  auVar76._8_4_ = -(uint)(fVar8 <= fVar11);
  auVar76._12_4_ = -(uint)(fVar8 <= fVar11);
  auVar45 = NEON_frecpe(auVar55,4);
  auVar64._4_4_ = fVar12;
  auVar64._0_4_ = fVar12;
  auVar64._8_4_ = fVar12;
  auVar64._12_4_ = fVar12;
  auVar15 = auVar15 ^ (auVar15 ^ auVar68) & auVar76;
  fVar1 = fVar18 - (float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20)));
  auVar9 = NEON_frecps(auVar45,auVar55,4);
  auVar69._0_4_ = auVar45._0_4_ * auVar9._0_4_;
  auVar69._4_4_ = auVar45._4_4_ * auVar9._4_4_;
  auVar69._8_4_ = auVar45._8_4_ * auVar9._8_4_;
  auVar69._12_4_ = auVar45._12_4_ * auVar9._12_4_;
  auVar9 = NEON_frecps(auVar69,auVar55,4);
  fVar39 = auVar69._0_4_ * auVar9._0_4_;
  fVar40 = auVar69._4_4_ * auVar9._4_4_;
  fVar47 = auVar69._8_4_ * auVar9._8_4_;
  fVar58 = auVar69._12_4_ * auVar9._12_4_;
  auVar2._4_8_ = auVar69._8_8_;
  auVar2._0_4_ = (fVar18 + (float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20)))) *
                 fVar39;
  auVar70._0_8_ = auVar2._0_8_ << 0x20;
  auVar70._8_4_ = (auVar60._0_4_ + fVar19) * fVar39;
  auVar70._12_4_ = (fVar7 + -fVar36) * fVar39;
  auVar49._0_4_ =
       (fVar18 + (float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20)))) * fVar40;
  auVar49._4_4_ = fVar40 * 0.0;
  auVar49._8_4_ = (fVar7 + fVar36) * fVar40;
  auVar49._12_4_ = (fVar19 + -auVar13._8_4_) * fVar40;
  auVar71._4_12_ = auVar70._4_12_;
  auVar71._0_4_ = SQRT(fVar8) * 0.5;
  auVar50._8_8_ = auVar49._8_8_;
  auVar50._4_4_ = SQRT(fVar11) * 0.5;
  auVar50._0_4_ = auVar49._0_4_;
  auVar38._0_4_ = (auVar60._0_4_ + fVar19) * fVar47;
  auVar38._4_4_ = (fVar7 + fVar36) * fVar47;
  auVar38._12_4_ = fVar1 * fVar47;
  auVar72._0_4_ = -(uint)(auVar15._0_4_ <= fVar12);
  auVar72._4_4_ = -(uint)(auVar15._4_4_ <= fVar12);
  auVar72._8_4_ = -(uint)(auVar15._8_4_ <= fVar12);
  auVar72._12_4_ = -(uint)(auVar15._12_4_ <= fVar12);
  auVar38._8_4_ = SQRT(fVar12) * 0.5;
  auVar15 = auVar15 ^ (auVar15 ^ auVar64) & auVar72;
  auVar38 = auVar38 ^ (auVar38 ^ auVar50 ^ (auVar50 ^ auVar71) & ~auVar76) & ~auVar72;
  auVar75._0_4_ = -(uint)(auVar15._0_4_ <= fVar17);
  auVar75._4_4_ = -(uint)(auVar15._4_4_ <= fVar17);
  auVar75._8_4_ = -(uint)(auVar15._8_4_ <= fVar17);
  auVar75._12_4_ = -(uint)(auVar15._12_4_ <= fVar17);
  auVar16._0_4_ = (fVar7 - fVar36) * fVar58;
  auVar16._4_4_ = (fVar19 - auVar13._8_4_) * fVar58;
  auVar16._8_4_ = fVar1 * fVar58;
  auVar16._12_4_ = SQRT(fVar17) * 0.5;
  return auVar38 ^ (auVar38 ^ auVar16) & auVar75;
}


