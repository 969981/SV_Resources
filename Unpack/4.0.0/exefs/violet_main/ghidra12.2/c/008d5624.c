/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d5624; name: FUN_008d5624
 */


void FUN_008d5624(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5,long param_6,long param_7,ulong param_8,long param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  undefined1 auVar22 [16];
  char *pcVar23;
  ulong uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  int iVar57;
  byte bVar60;
  byte bVar61;
  byte bVar64;
  byte bVar65;
  float fVar62;
  int iVar63;
  byte bVar66;
  byte bVar67;
  byte bVar69;
  byte bVar70;
  int iVar68;
  byte bVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  float fVar81;
  float fVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  float fVar93;
  float fVar94;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  undefined8 uVar96;
  
  pcVar23 = *(char **)(*(long *)(param_6 + 0x238) + 0x268);
  if ((*(int *)(pcVar23 + 0xc) != -1) && (*(int *)(pcVar23 + 0xc) <= *(int *)(param_9 + 4))) {
    return;
  }
  fVar53 = *(float *)(pcVar23 + 4);
  if (pcVar23[1] == '\0') {
    if (*pcVar23 != '\0') {
      if (*pcVar23 != '\x01') {
        return;
      }
      if (fVar53 <= (float)((ulong)*param_3 >> 0x20)) {
        return;
      }
      param_3[1] = param_3[1];
      *param_3 = CONCAT17((char)((uint)fVar53 >> 0x18),
                          CONCAT16((char)((uint)fVar53 >> 0x10),
                                   CONCAT15((char)((uint)fVar53 >> 8),
                                            CONCAT14(SUB41(fVar53,0),(int)*param_3))));
      *param_5 = param_1;
      return;
    }
    if (fVar53 <= (float)((ulong)*param_3 >> 0x20)) {
      return;
    }
    param_3[1] = param_3[1];
    *param_3 = CONCAT44(fVar53,(int)*param_3);
    uVar30 = param_4[1];
    fVar53 = -*(float *)(pcVar23 + 8) * (float)((ulong)*param_4 >> 0x20);
    fVar47 = (float)*param_4;
    param_4[1] = uVar30;
    *param_4 = CONCAT44(fVar53,fVar47);
    fVar47 = *(float *)(pcVar23 + 0x10) * fVar47;
    param_4[1] = uVar30;
    *param_4 = CONCAT44(fVar53,fVar47);
    fVar48 = *(float *)(pcVar23 + 0x10);
    param_4[1] = uVar30;
    *param_4 = CONCAT44(fVar53 * fVar48,fVar47);
    param_4[1] = (ulong)(uint)(*(float *)(pcVar23 + 0x10) * (float)uVar30);
    *param_4 = CONCAT44(fVar53 * fVar48,fVar47);
  }
  else {
    if (*(char *)(*(long *)(param_6 + 0xa0) + 0x753) == '\0') {
      fVar72 = (float)*(undefined8 *)(param_6 + 0x348);
      fVar82 = (float)((ulong)*(undefined8 *)(param_6 + 0x348) >> 0x20);
      fVar51 = (float)*(undefined8 *)(param_6 + 0x340);
      fVar52 = (float)((ulong)*(undefined8 *)(param_6 + 0x340) >> 0x20);
      fVar73 = (float)*(undefined8 *)(param_6 + 0x358);
      uVar50 = (undefined4)((ulong)*(undefined8 *)(param_6 + 0x358) >> 0x20);
      fVar47 = (float)*(undefined8 *)(param_6 + 0x350);
      fVar48 = (float)((ulong)*(undefined8 *)(param_6 + 0x350) >> 0x20);
      uVar30 = *(undefined8 *)(param_6 + 0x368);
      uVar39 = (undefined1)uVar30;
      uVar40 = (undefined1)((ulong)uVar30 >> 8);
      uVar41 = (undefined1)((ulong)uVar30 >> 0x10);
      uVar42 = (undefined1)((ulong)uVar30 >> 0x18);
      uVar43 = (undefined1)((ulong)uVar30 >> 0x20);
      uVar44 = (undefined1)((ulong)uVar30 >> 0x28);
      uVar45 = (undefined1)((ulong)uVar30 >> 0x30);
      uVar46 = (undefined1)((ulong)uVar30 >> 0x38);
      uVar30 = *(undefined8 *)(param_6 + 0x360);
      uVar31 = (undefined1)uVar30;
      uVar32 = (undefined1)((ulong)uVar30 >> 8);
      uVar33 = (undefined1)((ulong)uVar30 >> 0x10);
      uVar34 = (undefined1)((ulong)uVar30 >> 0x18);
      uVar35 = (undefined1)((ulong)uVar30 >> 0x20);
      uVar36 = (undefined1)((ulong)uVar30 >> 0x28);
      uVar37 = (undefined1)((ulong)uVar30 >> 0x30);
      uVar38 = (undefined1)((ulong)uVar30 >> 0x38);
      fVar62 = (float)((ulong)*(undefined8 *)(param_6 + 0x370) >> 0x20);
    }
    else {
      uVar24 = -(param_8 >> 0x1f & 1) & 0xfffffff000000000 | (param_8 & 0xffffffff) << 4;
      pfVar1 = (float *)(*(long *)(param_7 + 0x40) + uVar24);
      fVar51 = *pfVar1;
      fVar47 = pfVar1[1];
      pfVar2 = (float *)(*(long *)(param_7 + 0x48) + uVar24);
      pfVar3 = (float *)(*(long *)(param_7 + 0x50) + uVar24);
      fVar48 = pfVar1[2];
      uVar31 = SUB41(fVar48,0);
      uVar32 = (undefined1)((uint)fVar48 >> 8);
      uVar33 = (undefined1)((uint)fVar48 >> 0x10);
      uVar34 = (undefined1)((uint)fVar48 >> 0x18);
      fVar52 = *pfVar2;
      fVar72 = *pfVar3;
      fVar48 = pfVar2[1];
      fVar82 = 0.0;
      fVar73 = pfVar3[1];
      fVar62 = pfVar2[2];
      uVar35 = SUB41(fVar62,0);
      uVar36 = (undefined1)((uint)fVar62 >> 8);
      uVar37 = (undefined1)((uint)fVar62 >> 0x10);
      uVar38 = (undefined1)((uint)fVar62 >> 0x18);
      fVar62 = pfVar2[3];
      uVar50 = 0;
      fVar74 = pfVar3[2];
      uVar39 = SUB41(fVar74,0);
      uVar40 = (undefined1)((uint)fVar74 >> 8);
      uVar41 = (undefined1)((uint)fVar74 >> 0x10);
      uVar42 = (undefined1)((uint)fVar74 >> 0x18);
      uVar43 = 0;
      uVar44 = 0;
      uVar45 = 0;
      uVar46 = 0;
    }
    fVar62 = fVar62 + fVar52 * (float)*param_3 + fVar48 * (float)((ulong)*param_3 >> 0x20) +
                      (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) *
                      (float)param_3[1];
    if (*pcVar23 != '\0') {
      if (*pcVar23 != '\x01') {
        return;
      }
      if (fVar53 <= fVar62) {
        return;
      }
      *param_5 = param_1;
      return;
    }
    if (fVar53 <= fVar62) {
      return;
    }
    uVar25 = (undefined4)
             (CONCAT14(uVar42,CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38)))) >> 8);
    auVar6._4_4_ = fVar48;
    auVar6._0_4_ = fVar47;
    auVar6._8_4_ = fVar73;
    auVar6._12_4_ = uVar50;
    uVar76 = a64_TBL(ZEXT816(0),auVar6,DAT_03cb56c8);
    auVar7._4_4_ = fVar48;
    auVar7._0_4_ = fVar47;
    auVar7._8_4_ = fVar73;
    auVar7._12_4_ = uVar50;
    uVar79 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb54d8);
    auVar85[1] = uVar32;
    auVar85[0] = uVar31;
    auVar85[2] = uVar33;
    auVar85[3] = uVar34;
    auVar85[4] = uVar35;
    auVar85[5] = uVar36;
    auVar85[6] = uVar37;
    auVar85[7] = uVar38;
    auVar85[8] = uVar39;
    auVar85[9] = uVar40;
    auVar85[10] = uVar41;
    auVar85[0xb] = uVar42;
    auVar85[0xc] = uVar43;
    auVar85[0xd] = uVar44;
    auVar85[0xe] = uVar45;
    auVar85[0xf] = uVar46;
    uVar83 = a64_TBL(ZEXT816(0),auVar85,DAT_03cb5488);
    auVar91[1] = uVar32;
    auVar91[0] = uVar31;
    auVar91[2] = uVar33;
    auVar91[3] = uVar34;
    auVar91[4] = uVar35;
    auVar91[5] = uVar36;
    auVar91[6] = uVar37;
    auVar91[7] = uVar38;
    auVar91[8] = uVar39;
    auVar91[9] = uVar40;
    auVar91[10] = uVar41;
    auVar91[0xb] = uVar42;
    auVar91[0xc] = uVar43;
    auVar91[0xd] = uVar44;
    auVar91[0xe] = uVar45;
    auVar91[0xf] = uVar46;
    uVar87 = a64_TBL(ZEXT816(0),auVar91,DAT_03cb54c0);
    auVar8._4_4_ = fVar48;
    auVar8._0_4_ = fVar47;
    auVar8._8_4_ = fVar73;
    auVar8._12_4_ = uVar50;
    uVar88 = a64_TBL(ZEXT816(0),auVar8,DAT_03cb54c0);
    auVar9._4_4_ = fVar48;
    auVar9._0_4_ = fVar47;
    auVar9._8_4_ = fVar73;
    auVar9._12_4_ = uVar50;
    uVar84 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb5488);
    auVar4[1] = uVar32;
    auVar4[0] = uVar31;
    auVar4[2] = uVar33;
    auVar4[3] = uVar34;
    auVar4[4] = uVar35;
    auVar4[5] = uVar36;
    auVar4[6] = uVar37;
    auVar4[7] = uVar38;
    auVar4[8] = uVar39;
    auVar4[9] = uVar40;
    auVar4[10] = uVar41;
    auVar4[0xb] = uVar42;
    auVar4[0xc] = uVar43;
    auVar4[0xd] = uVar44;
    auVar4[0xe] = uVar45;
    auVar4[0xf] = uVar46;
    uVar89 = a64_TBL(ZEXT816(0),auVar4,DAT_03cb56c8);
    auVar5[1] = uVar32;
    auVar5[0] = uVar31;
    auVar5[2] = uVar33;
    auVar5[3] = uVar34;
    auVar5[4] = uVar35;
    auVar5[5] = uVar36;
    auVar5[6] = uVar37;
    auVar5[7] = uVar38;
    auVar5[8] = uVar39;
    auVar5[9] = uVar40;
    auVar5[10] = uVar41;
    auVar5[0xb] = uVar42;
    auVar5[0xc] = uVar43;
    auVar5[0xd] = uVar44;
    auVar5[0xe] = uVar45;
    auVar5[0xf] = uVar46;
    uVar30 = a64_TBL(ZEXT816(0),auVar5,DAT_03cb54d8);
    uVar29 = param_4[1];
    fVar26 = (float)*param_4;
    fVar27 = (float)((ulong)*param_4 >> 0x20);
    fVar28 = (float)uVar29;
    fVar54 = fVar51 * fVar26 + fVar47 * fVar27 +
             (float)CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31))) * fVar28;
    fVar55 = fVar72 * fVar26 + fVar73 * fVar27 +
             (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) * fVar28;
    uVar50 = CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31)));
    fVar53 = fVar51 * (float)uVar76 * (float)uVar83 - (float)uVar84 * fVar51 * (float)uVar89;
    fVar62 = fVar52 * (float)((ulong)uVar76 >> 0x20) * (float)((ulong)uVar83 >> 0x20) -
             (float)((ulong)uVar84 >> 0x20) * fVar52 * (float)((ulong)uVar89 >> 0x20);
    fVar74 = fVar72 * (float)uVar79 * (float)uVar87 - (float)uVar88 * fVar72 * (float)uVar30;
    fVar82 = fVar82 * (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar87 >> 0x20) -
             (float)((ulong)uVar88 >> 0x20) * fVar82 * (float)((ulong)uVar30 >> 0x20);
    auVar10._4_4_ = fVar62;
    auVar10._0_4_ = fVar53;
    auVar10._8_4_ = fVar74;
    auVar10._12_4_ = fVar82;
    auVar11._4_4_ = fVar62;
    auVar11._0_4_ = fVar53;
    auVar11._8_4_ = fVar74;
    auVar11._12_4_ = fVar82;
    auVar85 = NEON_ext(auVar10,auVar11,8,1);
    fVar81 = fVar53 + fVar62 + auVar85._0_4_ + auVar85._4_4_;
    auVar12._4_4_ = fVar81;
    auVar12._0_4_ = fVar81;
    auVar12._8_4_ = fVar81;
    auVar12._12_4_ = fVar81;
    auVar85 = NEON_frecpe(auVar12,4);
    auVar13._4_4_ = fVar81;
    auVar13._0_4_ = fVar81;
    auVar13._8_4_ = fVar81;
    auVar13._12_4_ = fVar81;
    auVar91 = NEON_frecps(auVar85,auVar13,4);
    auVar86._0_4_ = auVar85._0_4_ * auVar91._0_4_;
    auVar86._4_4_ = auVar85._4_4_ * auVar91._4_4_;
    auVar86._8_4_ = auVar85._8_4_ * auVar91._8_4_;
    auVar86._12_4_ = auVar85._12_4_ * auVar91._12_4_;
    auVar14._4_4_ = fVar81;
    auVar14._0_4_ = fVar81;
    auVar14._8_4_ = fVar81;
    auVar14._12_4_ = fVar81;
    auVar85 = NEON_frecps(auVar86,auVar14,4);
    fVar82 = auVar86._0_4_ * auVar85._0_4_;
    fVar62 = auVar86._4_4_ * auVar85._4_4_;
    fVar74 = auVar86._8_4_ * auVar85._8_4_;
    auVar92._4_4_ = fVar48;
    auVar92._0_4_ = fVar52;
    auVar92._8_4_ =
         (int)(CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,uVar50)))) >> 0x20);
    auVar92._12_4_ = 0;
    uVar76 = a64_TBL(ZEXT816(0),auVar92,DAT_03cb56c8);
    fVar49 = (float)((ulong)uVar76 >> 0x20);
    uVar83 = a64_TBL(ZEXT816(0),auVar92,DAT_03cb54d8);
    auVar15._4_4_ = fVar73;
    auVar15._0_4_ = fVar72;
    auVar15._8_4_ = uVar25;
    auVar15._12_4_ = 0;
    uVar87 = a64_TBL(ZEXT816(0),auVar15,DAT_03cb54c0);
    auVar16._4_4_ = fVar73;
    auVar16._0_4_ = fVar72;
    auVar16._8_4_ = uVar25;
    auVar16._12_4_ = 0;
    uVar84 = a64_TBL(ZEXT816(0),auVar16,DAT_03cb5488);
    fVar95 = (float)((ulong)uVar84 >> 0x20);
    auVar17._4_4_ = fVar73;
    auVar17._0_4_ = fVar72;
    auVar17._8_4_ = uVar25;
    auVar17._12_4_ = 0;
    uVar96 = a64_TBL(ZEXT816(0),auVar17,DAT_03cb56c8);
    auVar18._4_4_ = fVar73;
    auVar18._0_4_ = fVar72;
    auVar18._8_4_ = uVar25;
    auVar18._12_4_ = 0;
    uVar79 = a64_TBL(ZEXT816(0),auVar18,DAT_03cb54d8);
    uVar30 = a64_TBL(ZEXT816(0),auVar92,DAT_03cb5488);
    uVar90 = a64_TBL(ZEXT816(0),auVar92,DAT_03cb54c0);
    auVar19._4_4_ = fVar47;
    auVar19._0_4_ = fVar51;
    auVar19._8_4_ = uVar50;
    auVar19._12_4_ = 0;
    uVar77 = a64_TBL(ZEXT816(0),auVar19,DAT_03cb5488);
    auVar20._4_4_ = fVar47;
    auVar20._0_4_ = fVar51;
    auVar20._8_4_ = uVar50;
    auVar20._12_4_ = 0;
    uVar80 = a64_TBL(ZEXT816(0),auVar20,DAT_03cb54c0);
    auVar21._4_4_ = fVar47;
    auVar21._0_4_ = fVar51;
    auVar21._8_4_ = uVar50;
    auVar21._12_4_ = 0;
    uVar88 = a64_TBL(ZEXT816(0),auVar21,DAT_03cb56c8);
    auVar22._4_4_ = fVar47;
    auVar22._0_4_ = fVar51;
    auVar22._8_4_ = uVar50;
    auVar22._12_4_ = 0;
    uVar89 = a64_TBL(ZEXT816(0),auVar22,DAT_03cb54d8);
    fVar53 = (float)((ulong)uVar30 >> 0x20);
    fVar72 = (float)((ulong)uVar96 >> 0x20);
    fVar78 = (float)((ulong)uVar77 >> 0x20);
    fVar73 = (float)((ulong)uVar88 >> 0x20);
    iVar57 = -(uint)(fVar81 == 0.0);
    iVar63 = -(uint)(fVar81 == 0.0);
    iVar68 = -(uint)(fVar81 == 0.0);
    bVar56 = ~(byte)iVar57;
    bVar58 = ~(byte)((uint)iVar57 >> 8);
    bVar59 = ~(byte)((uint)iVar57 >> 0x10);
    bVar60 = ~(byte)((uint)iVar57 >> 0x18);
    bVar61 = ~(byte)iVar63;
    bVar64 = ~(byte)((uint)iVar63 >> 8);
    bVar65 = ~(byte)((uint)iVar63 >> 0x10);
    bVar66 = ~(byte)((uint)iVar63 >> 0x18);
    bVar67 = ~(byte)iVar68;
    bVar69 = ~(byte)((uint)iVar68 >> 8);
    bVar70 = ~(byte)((uint)iVar68 >> 0x10);
    bVar71 = ~(byte)((uint)iVar68 >> 0x18);
    fVar47 = fVar82 * ((float)uVar76 * (float)uVar84 - (float)uVar96 * (float)uVar30);
    fVar93 = fVar62 * (fVar49 * fVar95 - fVar72 * fVar53);
    fVar94 = fVar74 * ((float)uVar83 * (float)uVar87 - (float)uVar79 * (float)uVar90);
    fVar75 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & bVar60,
                             CONCAT12((byte)((uint)fVar47 >> 0x10) & bVar59,
                                      CONCAT11((byte)((uint)fVar47 >> 8) & bVar58,
                                               SUB41(fVar47,0) & bVar56)));
    fVar51 = fVar82 * ((float)uVar96 * (float)uVar77 - (float)uVar88 * (float)uVar84);
    fVar72 = fVar62 * (fVar72 * fVar78 - fVar73 * fVar95);
    fVar81 = fVar74 * ((float)uVar79 * (float)uVar80 - (float)uVar89 * (float)uVar87);
    fVar47 = -*(float *)(pcVar23 + 8) *
             (fVar52 * fVar26 + fVar48 * fVar27 +
             (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) * fVar28);
    fVar48 = (float)CONCAT13((byte)((uint)fVar51 >> 0x18) & bVar60,
                             CONCAT12((byte)((uint)fVar51 >> 0x10) & bVar59,
                                      CONCAT11((byte)((uint)fVar51 >> 8) & bVar58,
                                               SUB41(fVar51,0) & bVar56)));
    fVar82 = fVar82 * ((float)uVar30 * (float)uVar88 - (float)uVar76 * (float)uVar77);
    fVar62 = fVar62 * (fVar53 * fVar73 - fVar49 * fVar78);
    fVar74 = fVar74 * ((float)uVar90 * (float)uVar89 - (float)uVar83 * (float)uVar80);
    fVar53 = *(float *)(pcVar23 + 0x10) *
             (fVar75 * fVar54 + fVar48 * fVar47 +
              (float)CONCAT13((byte)((uint)fVar82 >> 0x18) & bVar60,
                              CONCAT12((byte)((uint)fVar82 >> 0x10) & bVar59,
                                       CONCAT11((byte)((uint)fVar82 >> 8) & bVar58,
                                                SUB41(fVar82,0) & bVar56))) * fVar55 + 0.0);
    param_4[1] = uVar29;
    *param_4 = CONCAT44(fVar27,fVar53);
    uVar30 = CONCAT44(*(float *)(pcVar23 + 0x10) *
                      ((float)(CONCAT17((byte)((uint)fVar93 >> 0x18) & bVar66,
                                        CONCAT16((byte)((uint)fVar93 >> 0x10) & bVar65,
                                                 CONCAT15((byte)((uint)fVar93 >> 8) & bVar64,
                                                          CONCAT14(SUB41(fVar93,0) & bVar61,fVar75))
                                                )) >> 0x20) * fVar54 +
                       (float)(CONCAT17((byte)((uint)fVar72 >> 0x18) & bVar66,
                                        CONCAT16((byte)((uint)fVar72 >> 0x10) & bVar65,
                                                 CONCAT15((byte)((uint)fVar72 >> 8) & bVar64,
                                                          CONCAT14(SUB41(fVar72,0) & bVar61,fVar48))
                                                )) >> 0x20) * fVar47 +
                       (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & bVar66,
                                       CONCAT12((byte)((uint)fVar62 >> 0x10) & bVar65,
                                                CONCAT11((byte)((uint)fVar62 >> 8) & bVar64,
                                                         SUB41(fVar62,0) & bVar61))) * fVar55 + 0.0)
                      ,fVar53);
    param_4[1] = uVar29;
    *param_4 = uVar30;
    param_4[1] = (ulong)(uint)(*(float *)(pcVar23 + 0x10) *
                              ((float)CONCAT13((byte)((uint)fVar94 >> 0x18) & bVar71,
                                               CONCAT12((byte)((uint)fVar94 >> 0x10) & bVar70,
                                                        CONCAT11((byte)((uint)fVar94 >> 8) & bVar69,
                                                                 SUB41(fVar94,0) & bVar67))) *
                               fVar54 + (float)CONCAT13((byte)((uint)fVar81 >> 0x18) & bVar71,
                                                        CONCAT12((byte)((uint)fVar81 >> 0x10) &
                                                                 bVar70,CONCAT11((byte)((uint)fVar81
                                                                                       >> 8) &
                                                                                 bVar69,SUB41(fVar81
                                                  ,0) & bVar67))) * fVar47 +
                               (float)CONCAT13((byte)((uint)fVar74 >> 0x18) & bVar71,
                                               CONCAT12((byte)((uint)fVar74 >> 0x10) & bVar70,
                                                        CONCAT11((byte)((uint)fVar74 >> 8) & bVar69,
                                                                 SUB41(fVar74,0) & bVar67))) *
                               fVar55 + 0.0));
    *param_4 = uVar30;
  }
  *(int *)(param_9 + 4) = *(int *)(param_9 + 4) + 1;
  return;
}


