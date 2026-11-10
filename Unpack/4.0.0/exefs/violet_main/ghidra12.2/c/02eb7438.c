/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eb7438; name: FUN_02eb7438
 */


void FUN_02eb7438(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined8 *param_7,byte param_8,long param_9,undefined8 param_10)

{
  bool bVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [12];
  float fVar41;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar43;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar40 [16];
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar11 = PTR_DAT_047d19f0;
  fVar16 = (float)*(undefined8 *)(param_3 + 0x40);
  local_f0 = CONCAT44((float)((ulong)*param_7 >> 0x20) * fVar16,(float)*param_7 * fVar16);
  uStack_e8 = CONCAT44((float)((ulong)param_7[1] >> 0x20) * fVar16,(float)param_7[1] * fVar16);
  fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
  fVar43 = (float)((ulong)param_7[2] >> 0x20) * fVar16;
  fVar19 = (float)((ulong)param_7[3] >> 0x20) * fVar16;
  uStack_d8 = CONCAT17((char)((uint)fVar19 >> 0x18),
                       CONCAT16((char)((uint)fVar19 >> 0x10),
                                CONCAT15((char)((uint)fVar19 >> 8),
                                         CONCAT14(SUB41(fVar19,0),(float)param_7[3] * fVar16))));
  uStack_e0 = CONCAT17((char)((uint)fVar43 >> 0x18),
                       CONCAT16((char)((uint)fVar43 >> 0x10),
                                CONCAT15((char)((uint)fVar43 >> 8),
                                         CONCAT14(SUB41(fVar43,0),(float)param_7[2] * fVar16))));
  fVar16 = *(float *)(param_2 + 0xac) + *(float *)(param_2 + 0x74);
  if (fVar16 <= *(float *)(param_2 + 0x78)) {
    fVar16 = *(float *)(param_2 + 0x78);
  }
  fVar43 = (float)*(undefined8 *)(param_3 + 0x48);
  local_d0 = CONCAT44((float)((ulong)param_7[4] >> 0x20) * fVar43,(float)param_7[4] * fVar43);
  uStack_c8 = CONCAT44((float)((ulong)param_7[5] >> 0x20) * fVar43,(float)param_7[5] * fVar43);
  fVar43 = (float)((ulong)param_7[6] >> 0x20) +
           (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
  fVar19 = (float)((ulong)param_7[7] >> 0x20) +
           (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20);
  uStack_b8 = CONCAT17((char)((uint)fVar19 >> 0x18),
                       CONCAT16((char)((uint)fVar19 >> 0x10),
                                CONCAT15((char)((uint)fVar19 >> 8),
                                         CONCAT14(SUB41(fVar19,0),
                                                  (float)param_7[7] +
                                                  (float)*(undefined8 *)(param_3 + 0x58)))));
  uStack_c0 = CONCAT17((char)((uint)fVar43 >> 0x18),
                       CONCAT16((char)((uint)fVar43 >> 0x10),
                                CONCAT15((char)((uint)fVar43 >> 8),
                                         CONCAT14(SUB41(fVar43,0),
                                                  (float)param_7[6] +
                                                  (float)*(undefined8 *)(param_3 + 0x50)))));
  (**(code **)(*(long *)PTR_DAT_047d19f0 +
               (ulong)*(byte *)(*(long *)(param_2 + 0x38) + 0x18) * 0x200 + 0x18))
            (*(long *)(param_2 + 0x38),&local_f0,&local_130);
  auVar66 = NEON_fmov(0x3f800000,4);
  fVar17 = fVar16 + (float)local_120;
  fVar18 = fVar16 + (float)((ulong)local_120 >> 0x20);
  local_120 = CONCAT44(fVar18,fVar17);
  fVar20 = fVar16 + (float)uStack_118;
  fVar22 = fVar16 + (float)((ulong)uStack_118 >> 0x20);
  uStack_118 = CONCAT44(fVar22,fVar20);
  fVar24 = *(float *)(param_4 + 0x70);
  fVar26 = *(float *)(param_4 + 0x74);
  fVar28 = *(float *)(param_4 + 0x78);
  fVar43 = fVar24 * (float)*(undefined8 *)(param_2 + 0x50);
  fVar19 = fVar26 * (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
  fVar3 = fVar28 * (float)*(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_9 + 0x10);
  iVar5 = -(uint)(fVar43 == 0.0);
  iVar7 = -(uint)(fVar19 == 0.0);
  iVar8 = -(uint)(fVar3 == 0.0);
  iVar9 = -(uint)((float)uVar6 == 0.0);
  bVar46 = SUB41(fVar43,0) & ~(byte)iVar5;
  bVar47 = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar5 >> 8);
  bVar48 = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
  bVar49 = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
  bVar50 = SUB41(fVar19,0) & ~(byte)iVar7;
  bVar51 = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar7 >> 8);
  bVar52 = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
  bVar53 = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
  bVar54 = SUB41(fVar3,0) & ~(byte)iVar8;
  bVar55 = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar8 >> 8);
  bVar56 = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
  bVar57 = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
  bVar58 = (byte)uVar6 & ~(byte)iVar9;
  bVar59 = (byte)((ulong)uVar6 >> 8) & ~(byte)((uint)iVar9 >> 8);
  bVar60 = (byte)((ulong)uVar6 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
  bVar61 = (byte)((ulong)uVar6 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
  fVar17 = fVar17 * fVar24;
  fVar18 = fVar18 * fVar26;
  fVar20 = fVar20 * fVar28;
  fVar22 = fVar22 * *(float *)(param_4 + 0x7c);
  fVar24 = (local_130 - fVar16) * fVar24;
  fVar26 = (fStack_12c - fVar16) * fVar26;
  fVar28 = (fStack_128 - fVar16) * fVar28;
  fVar30 = (fStack_124 - fVar16) * *(float *)(param_4 + 0x7c);
  fVar32 = auVar66._0_4_;
  fVar42 = auVar66._4_4_;
  fVar43 = fVar42 / (float)CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50)));
  fVar44 = auVar66._8_4_;
  fVar19 = fVar44 / (float)CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
  fVar45 = auVar66._12_4_;
  fVar3 = fVar45 / (float)CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58)));
  iVar5 = -(uint)((float)CONCAT13(bVar49,CONCAT12(bVar48,CONCAT11(bVar47,bVar46))) == 0.0);
  iVar7 = -(uint)((float)CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50))) == 0.0);
  iVar8 = -(uint)((float)CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54))) == 0.0);
  iVar9 = -(uint)((float)CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58))) == 0.0);
  fVar62 = (fVar24 + fVar17) * 0.5;
  fVar63 = (fVar26 + fVar18) * 0.5;
  local_a0 = CONCAT44(fVar63,fVar62);
  fVar64 = (fVar28 + fVar20) * 0.5;
  fVar65 = (fVar30 + fVar22) * 0.5;
  uStack_98 = CONCAT44(fVar65,fVar64);
  auVar34[0] = ~(byte)iVar5;
  auVar34[1] = ~(byte)((uint)iVar5 >> 8);
  auVar34[2] = ~(byte)((uint)iVar5 >> 0x10);
  auVar34[3] = ~(byte)((uint)iVar5 >> 0x18);
  auVar34[4] = ~(byte)iVar7;
  auVar34[5] = ~(byte)((uint)iVar7 >> 8);
  auVar34[6] = ~(byte)((uint)iVar7 >> 0x10);
  auVar34[7] = ~(byte)((uint)iVar7 >> 0x18);
  auVar34[8] = ~(byte)iVar8;
  auVar34[9] = ~(byte)((uint)iVar8 >> 8);
  auVar34[10] = ~(byte)((uint)iVar8 >> 0x10);
  auVar34[0xb] = ~(byte)((uint)iVar8 >> 0x18);
  auVar34[0xc] = ~(byte)iVar9;
  auVar34[0xd] = ~(byte)((uint)iVar9 >> 8);
  auVar34[0xe] = ~(byte)((uint)iVar9 >> 0x10);
  auVar34[0xf] = ~(byte)((uint)iVar9 >> 0x18);
  fVar24 = (fVar17 - fVar24) * 0.5;
  fVar26 = (fVar18 - fVar26) * 0.5;
  local_b0 = CONCAT44(fVar26,fVar24);
  fVar28 = (fVar20 - fVar28) * 0.5;
  fVar17 = (fVar22 - fVar30) * 0.5;
  uStack_a8 = CONCAT44(fVar17,fVar28);
  auVar66[4] = SUB41(fVar43,0);
  auVar66._0_4_ = fVar32 / (float)CONCAT13(bVar49,CONCAT12(bVar48,CONCAT11(bVar47,bVar46)));
  auVar66[5] = (char)((uint)fVar43 >> 8);
  auVar66[6] = (char)((uint)fVar43 >> 0x10);
  auVar66[7] = (char)((uint)fVar43 >> 0x18);
  auVar66[8] = SUB41(fVar19,0);
  auVar66[9] = (char)((uint)fVar19 >> 8);
  auVar66[10] = (char)((uint)fVar19 >> 0x10);
  auVar66[0xb] = (char)((uint)fVar19 >> 0x18);
  auVar66[0xc] = SUB41(fVar3,0);
  auVar66[0xd] = (char)((uint)fVar3 >> 8);
  auVar66[0xe] = (char)((uint)fVar3 >> 0x10);
  auVar66[0xf] = (char)((uint)fVar3 >> 0x18);
  auVar10._8_4_ = 0x7f7fffee;
  auVar10._0_8_ = 0x7f7fffee7f7fffee;
  auVar10._12_4_ = 0x7f7fffee;
  auVar35._8_4_ = 0x7f7fffee;
  auVar35._0_8_ = 0x7f7fffee7f7fffee;
  auVar35._12_4_ = 0x7f7fffee;
  auVar35 = auVar35 ^ (auVar10 ^ auVar66) & auVar34;
  uStack_88 = CONCAT17(bVar61,CONCAT16(bVar60,CONCAT15(bVar59,CONCAT14(bVar58,CONCAT13(bVar57,
                                                  CONCAT12(bVar56,CONCAT11(bVar55,bVar54)))))));
  local_90 = CONCAT17(bVar53,CONCAT16(bVar52,CONCAT15(bVar51,CONCAT14(bVar50,CONCAT13(bVar49,
                                                  CONCAT12(bVar48,CONCAT11(bVar47,bVar46)))))));
  uStack_78 = auVar35._8_8_;
  uStack_80 = auVar35._0_8_;
  bVar1 = *(char *)(param_6 + 0x30) == '\0';
  if (bVar1) {
    pfVar15 = *(float **)(param_6 + 0x20);
    puVar13 = &local_a0;
    puVar12 = &local_b0;
  }
  else {
    puVar13 = *(undefined8 **)(param_3 + 0x20);
    fVar43 = (float)*(undefined8 *)(param_3 + 0x40);
    fVar19 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
    uStack_e0 = CONCAT44((float)((ulong)puVar13[2] >> 0x20) * fVar19,(float)puVar13[2] * fVar19);
    uStack_d8 = CONCAT44((float)((ulong)puVar13[3] >> 0x20) * fVar19,(float)puVar13[3] * fVar19);
    uStack_e8 = CONCAT44((float)((ulong)puVar13[1] >> 0x20) * fVar43,(float)puVar13[1] * fVar43);
    local_f0 = CONCAT44((float)((ulong)*puVar13 >> 0x20) * fVar43,(float)*puVar13 * fVar43);
    fVar43 = (float)*(undefined8 *)(param_3 + 0x48);
    uStack_c0 = CONCAT44((float)((ulong)puVar13[6] >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20),
                         (float)puVar13[6] + (float)*(undefined8 *)(param_3 + 0x50));
    uStack_b8 = CONCAT44((float)((ulong)puVar13[7] >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20),
                         (float)puVar13[7] + (float)*(undefined8 *)(param_3 + 0x58));
    uStack_c8 = CONCAT44((float)((ulong)puVar13[5] >> 0x20) * fVar43,(float)puVar13[5] * fVar43);
    local_d0 = CONCAT44((float)((ulong)puVar13[4] >> 0x20) * fVar43,(float)puVar13[4] * fVar43);
    puVar13 = *(undefined8 **)(param_6 + 0x20);
    fStack_124 = (float)*(undefined8 *)(param_6 + 0x40);
    local_130 = (float)*puVar13 * fStack_124;
    fStack_12c = (float)((ulong)*puVar13 >> 0x20) * fStack_124;
    fStack_128 = (float)puVar13[1] * fStack_124;
    fStack_124 = (float)((ulong)puVar13[1] >> 0x20) * fStack_124;
    fVar43 = (float)((ulong)*(undefined8 *)(param_6 + 0x40) >> 0x20);
    local_120 = CONCAT44((float)((ulong)puVar13[2] >> 0x20) * fVar43,(float)puVar13[2] * fVar43);
    uStack_118 = CONCAT44((float)((ulong)puVar13[3] >> 0x20) * fVar43,(float)puVar13[3] * fVar43);
    fVar43 = (float)*(undefined8 *)(param_6 + 0x48);
    auVar36._0_8_ = CONCAT44((float)((ulong)puVar13[4] >> 0x20) * fVar43,(float)puVar13[4] * fVar43)
    ;
    auVar36._8_4_ = (float)puVar13[5] * fVar43;
    auVar36._12_4_ = (float)((ulong)puVar13[5] >> 0x20) * fVar43;
    uStack_100 = CONCAT44((float)((ulong)puVar13[6] >> 0x20) +
                          (float)((ulong)*(undefined8 *)(param_6 + 0x50) >> 0x20),
                          (float)puVar13[6] + (float)*(undefined8 *)(param_6 + 0x50));
    uStack_f8 = CONCAT44((float)((ulong)puVar13[7] >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_6 + 0x58) >> 0x20),
                         (float)puVar13[7] + (float)*(undefined8 *)(param_6 + 0x58));
    uStack_108 = auVar36._8_8_;
    fVar18 = (float)CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
    fVar3 = (float)CONCAT13(bVar49,CONCAT12(bVar48,CONCAT11(bVar47,bVar46)));
    local_110 = auVar36._0_8_;
    (**(code **)(*(long *)puVar11 + (ulong)*(byte *)(*(long *)(param_2 + 0x38) + 0x18) * 0x200 +
                0x18))(*(long *)(param_2 + 0x38),&local_f0,&local_150);
    fVar22 = fVar16 + (float)uStack_140;
    fVar30 = fVar16 + (float)((ulong)uStack_140 >> 0x20);
    uStack_140 = CONCAT44(fVar30,fVar22);
    fVar21 = fVar16 + (float)uStack_138;
    fVar23 = fVar16 + (float)((ulong)uStack_138 >> 0x20);
    uStack_138 = CONCAT44(fVar23,fVar21);
    puVar13 = &local_180;
    fVar25 = (float)local_150 - fVar16;
    fVar27 = (float)((ulong)local_150 >> 0x20) - fVar16;
    local_150 = CONCAT44(fVar27,fVar25);
    fVar29 = (float)uStack_148 - fVar16;
    fVar16 = (float)((ulong)uStack_148 >> 0x20) - fVar16;
    uStack_148 = CONCAT44(fVar16,fVar29);
    puVar12 = &local_190;
    puVar14 = *(undefined8 **)(param_6 + 0x20);
    fVar43 = *(float *)(param_2 + 0x50);
    fVar19 = *(float *)(param_2 + 0x54);
    fVar20 = *(float *)(param_2 + 0x58);
    local_180 = CONCAT44((fVar30 + fVar27) * 0.5,(fVar22 + fVar25) * 0.5);
    uStack_178 = CONCAT44((fVar23 + fVar16) * 0.5,(fVar21 + fVar29) * 0.5);
    fVar31 = (float)puVar14[4] * fVar20 + (float)*puVar14 * fVar43 + (float)puVar14[2] * fVar19;
    fVar41 = (float)((ulong)puVar14[4] >> 0x20) * fVar20 +
             (float)((ulong)*puVar14 >> 0x20) * fVar43 + (float)((ulong)puVar14[2] >> 0x20) * fVar19
    ;
    fVar43 = (float)puVar14[5] * fVar20 + (float)puVar14[1] * fVar43 + (float)puVar14[3] * fVar19;
    uVar6 = *(undefined8 *)(param_9 + 0x10);
    local_190 = CONCAT44((fVar30 - fVar27) * 0.5,(fVar22 - fVar25) * 0.5);
    uStack_188 = CONCAT44((fVar23 - fVar16) * 0.5,(fVar21 - fVar29) * 0.5);
    iVar5 = -(uint)(fVar31 == 0.0);
    iVar7 = -(uint)(fVar41 == 0.0);
    iVar8 = -(uint)(fVar43 == 0.0);
    iVar9 = -(uint)((float)uVar6 == 0.0);
    fVar20 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                             CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                      CONCAT11((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar5 >> 8)
                                               ,SUB41(fVar31,0) & ~(byte)iVar5)));
    auVar33._0_8_ =
         CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                  CONCAT16((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                           CONCAT15((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                    CONCAT14(SUB41(fVar41,0) & ~(byte)iVar7,fVar20))));
    auVar33[8] = SUB41(fVar43,0) & ~(byte)iVar8;
    auVar33[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar8 >> 8);
    auVar33[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
    auVar33[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
    auVar37[0xc] = (byte)uVar6 & ~(byte)iVar9;
    auVar37._0_12_ = auVar33;
    auVar37[0xd] = (byte)((ulong)uVar6 >> 8) & ~(byte)((uint)iVar9 >> 8);
    auVar37[0xe] = (byte)((ulong)uVar6 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
    auVar37[0xf] = (byte)((ulong)uVar6 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
    fVar22 = (float)((ulong)auVar33._0_8_ >> 0x20);
    fVar16 = fVar42 / fVar22;
    fVar43 = fVar44 / auVar33._8_4_;
    fVar19 = fVar45 / auVar37._12_4_;
    iVar5 = -(uint)(fVar20 == 0.0);
    iVar7 = -(uint)(fVar22 == 0.0);
    iVar8 = -(uint)(auVar33._8_4_ == 0.0);
    iVar9 = -(uint)(auVar37._12_4_ == 0.0);
    uStack_168 = auVar37._8_8_;
    auVar38[0] = ~(byte)iVar5;
    auVar38[1] = ~(byte)((uint)iVar5 >> 8);
    auVar38[2] = ~(byte)((uint)iVar5 >> 0x10);
    auVar38[3] = ~(byte)((uint)iVar5 >> 0x18);
    auVar38[4] = ~(byte)iVar7;
    auVar38[5] = ~(byte)((uint)iVar7 >> 8);
    auVar38[6] = ~(byte)((uint)iVar7 >> 0x10);
    auVar38[7] = ~(byte)((uint)iVar7 >> 0x18);
    auVar38[8] = ~(byte)iVar8;
    auVar38[9] = ~(byte)((uint)iVar8 >> 8);
    auVar38[10] = ~(byte)((uint)iVar8 >> 0x10);
    auVar38[0xb] = ~(byte)((uint)iVar8 >> 0x18);
    auVar38[0xc] = ~(byte)iVar9;
    auVar38[0xd] = ~(byte)((uint)iVar9 >> 8);
    auVar38[0xe] = ~(byte)((uint)iVar9 >> 0x10);
    auVar38[0xf] = ~(byte)((uint)iVar9 >> 0x18);
    auVar39[8] = 0xee;
    auVar39._0_8_ = 0x7f7fffee7f7fffee;
    auVar4[8] = 0xee;
    auVar4._0_8_ = 0x7f7fffee7f7fffee;
    auVar2[4] = SUB41(fVar16,0);
    auVar2._0_4_ = fVar32 / fVar20;
    auVar2[5] = (char)((uint)fVar16 >> 8);
    auVar2[6] = (char)((uint)fVar16 >> 0x10);
    auVar2[7] = (char)((uint)fVar16 >> 0x18);
    auVar2[8] = SUB41(fVar43,0);
    auVar2[9] = (char)((uint)fVar43 >> 8);
    auVar2[10] = (char)((uint)fVar43 >> 0x10);
    auVar2[0xb] = (char)((uint)fVar43 >> 0x18);
    auVar2[0xc] = SUB41(fVar19,0);
    auVar2[0xd] = (char)((uint)fVar19 >> 8);
    auVar2[0xe] = (char)((uint)fVar19 >> 0x10);
    auVar2[0xf] = (char)((uint)fVar19 >> 0x18);
    auVar4[9] = 0xff;
    auVar4[10] = 0x7f;
    auVar4[0xb] = 0x7f;
    auVar4[0xc] = 0xee;
    auVar4[0xd] = 0xff;
    auVar4[0xe] = 0x7f;
    auVar4[0xf] = 0x7f;
    auVar39[9] = 0xff;
    auVar39[10] = 0x7f;
    auVar39[0xb] = 0x7f;
    auVar39[0xc] = 0xee;
    auVar39[0xd] = 0xff;
    auVar39[0xe] = 0x7f;
    auVar39[0xf] = 0x7f;
    auVar39 = auVar39 ^ (auVar4 ^ auVar2) & auVar38;
    uStack_158 = auVar39._8_8_;
    local_160 = auVar39._0_8_;
    pfVar15 = &local_130;
    fVar32 = fVar32 / *(float *)(param_6 + 0x40);
    fVar42 = fVar42 / *(float *)(param_6 + 0x44);
    fVar44 = fVar44 / *(float *)(param_6 + 0x48);
    fVar45 = fVar45 / *(float *)(param_6 + 0x4c);
    fVar16 = (float)(CONCAT17(bVar53,CONCAT16(bVar52,CONCAT15(bVar51,CONCAT14(bVar50,fVar3)))) >>
                    0x20) * fVar42;
    fVar43 = (float)(CONCAT17(bVar61,CONCAT16(bVar60,CONCAT15(bVar59,CONCAT14(bVar58,fVar18)))) >>
                    0x20) * fVar45;
    local_a0 = CONCAT44(fVar42 * (fVar63 - (float)((ulong)*(undefined8 *)(param_6 + 0x50) >> 0x20)),
                        fVar32 * (fVar62 - (float)*(undefined8 *)(param_6 + 0x50)));
    uStack_98 = CONCAT44(fVar45 * (fVar65 - (float)((ulong)*(undefined8 *)(param_6 + 0x58) >> 0x20))
                         ,fVar44 * (fVar64 - (float)*(undefined8 *)(param_6 + 0x58)));
    auVar40._0_8_ = CONCAT44(fVar26 * fVar42,fVar24 * fVar32);
    auVar40._8_4_ = fVar28 * fVar44;
    auVar40._12_4_ = fVar17 * fVar45;
    uStack_88 = CONCAT17((char)((uint)fVar43 >> 0x18),
                         CONCAT16((char)((uint)fVar43 >> 0x10),
                                  CONCAT15((char)((uint)fVar43 >> 8),
                                           CONCAT14(SUB41(fVar43,0),fVar18 * fVar44))));
    local_90 = CONCAT17((char)((uint)fVar16 >> 0x18),
                        CONCAT16((char)((uint)fVar16 >> 0x10),
                                 CONCAT15((char)((uint)fVar16 >> 8),
                                          CONCAT14(SUB41(fVar16,0),fVar3 * fVar32))));
    uStack_a8 = auVar40._8_8_;
    uStack_170 = auVar33._0_8_;
    local_b0 = auVar40._0_8_;
  }
  FUN_02eb6830(!bVar1,param_1,param_2,param_3,&local_a0,&local_b0,puVar13,puVar12,param_4,param_5,
               param_6,param_7,pfVar15,param_8 & 1,param_9,param_10);
  return;
}


