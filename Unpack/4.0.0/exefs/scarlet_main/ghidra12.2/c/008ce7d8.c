/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ce7d8; name: FUN_008ce7d8
 */


bool FUN_008ce7d8(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 param_4,
                 ulong param_5,byte param_6,byte param_7)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  uint uVar3;
  undefined1 (*pauVar4) [12];
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
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  char *pcVar23;
  code *pcVar24;
  char *pcVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  byte bVar45;
  int iVar46;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar53;
  byte bVar54;
  undefined8 uVar47;
  int iVar52;
  byte bVar55;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  int iVar57;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  int iVar62;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  byte bVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  undefined1 uVar89;
  byte bVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined4 uVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  float fVar114;
  float fVar115;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar116;
  float fVar117;
  float fVar118;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  float fVar122;
  float fVar123;
  char *local_a0;
  byte local_98;
  
  lVar28 = *(long *)(param_3 + 0xa0);
  fVar99 = *(float *)(param_3 + 0x44);
  lVar29 = *(long *)(param_3 + 0x78);
  iVar46 = *(int *)(lVar28 + 0x7fc);
  uVar3 = *(uint *)(lVar28 + 0x7f4);
  uVar21 = FUN_008c9584(param_3,param_4);
  fVar34 = (float)param_1;
  if ((uVar21 & 1) == 0) {
    if (param_3[1] != '\0') {
      *(float *)(param_3 + 0x50) = *(float *)(param_3 + 0x50) + fVar34;
    }
  }
  else {
    *(float *)(param_3 + 0x50) = fVar34;
  }
  if (param_3[7] != '\0') {
    return false;
  }
  local_98 = (byte)uVar21 & 1;
  if ((0.0 < fVar99) && (*(char *)(*(long *)(*(long *)(param_3 + 0x78) + 0x20) + 0x1700) != '\0')) {
    *(float *)(param_3 + 0x48) = *(float *)(param_3 + 0x48) + fVar34;
  }
  lVar27 = *(long *)(param_3 + 0x3e0);
  lVar30 = *(long *)(param_3 + 1000);
  local_a0 = param_3;
  if ((*(long *)(param_3 + 0x3f0) != 0) &&
     (pcVar24 = *(code **)(*(long *)(param_3 + 0x3f0) + 0x10), pcVar24 != (code *)0x0)) {
    uVar21 = (*pcVar24)(&local_a0);
  }
  if ((lVar27 != 0) && (pcVar24 = *(code **)(lVar27 + 0x10), pcVar24 != (code *)0x0)) {
    uVar21 = (*pcVar24)(&local_a0);
  }
  if ((lVar30 != 0) && (pcVar24 = *(code **)(lVar30 + 0x10), pcVar24 != (code *)0x0)) {
    uVar21 = (*pcVar24)(&local_a0);
  }
  fVar100 = (float)uVar3;
  *(float *)(param_3 + 0x4c) = fVar34;
  fVar101 = (float)(iVar46 + uVar3);
  if ((*param_3 != '\0') && (*(char *)(*(long *)(param_3 + 0xa0) + 0x7e4) != '\0')) {
    fVar101 = *(float *)(param_3 + 0x55c);
    fVar100 = (float)NEON_ucvtf(*(undefined4 *)(lVar28 + 0x7f8));
    fVar100 = fVar101 * (fVar100 / 100.0);
    if (*(char *)(lVar28 + 0x7f0) != '\0') {
      fVar101 = (float)NEON_ucvtf(*(undefined4 *)(lVar28 + 0x7fc));
      fVar101 = fVar100 + fVar101;
    }
  }
  lVar27 = *(long *)(param_3 + 0x238);
  param_3[0xc] = '\0';
  param_3[0xd] = '\0';
  param_3[0xe] = '\0';
  param_3[0xf] = '\0';
  if ((*(char *)(lVar27 + 1) == '\0') ||
     ((*param_3 != '\0' && (*(char *)(*(long *)(param_3 + 0xa0) + 0x7e4) == '\0')))) {
    *(float *)(param_3 + 0x66c) =
         *(float *)(*(long *)(lVar27 + 0x10) + 0x964) * *(float *)(lVar29 + 0x1e8);
    lVar27 = *(long *)(lVar27 + 0x10);
    *(float *)(param_3 + 0x690) = *(float *)(lVar27 + 0x868) * *(float *)(lVar29 + 0xe0);
    *(float *)(param_3 + 0x694) = *(float *)(lVar27 + 0x86c) * *(float *)(lVar29 + 0xe4);
    *(float *)(param_3 + 0x698) = *(float *)(lVar27 + 0x870) * *(float *)(lVar29 + 0xe8);
  }
  else {
    iVar46 = 0;
    lVar30 = 0x44;
    if (*(char *)(*(long *)(*(long *)(param_3 + 0x78) + 0x20) + 0x1700) != '\0') {
      lVar30 = 0x48;
    }
    uVar98 = *(undefined4 *)(param_3 + lVar30);
    lVar30 = 0;
    pcVar25 = param_3 + 0x600;
    do {
      pcVar23 = *(char **)(lVar27 + lVar30 * 8 + 0x290);
      if (((pcVar23 != (char *)0x0) && (*pcVar23 != '\0')) &&
         ((param_3[lVar30 + 0x6a8] == '\0' || (pcVar23[1] != '\0')))) {
        uVar21 = FUN_008d4160(uVar98,pcVar25);
        iVar46 = *(int *)(param_3 + 0xc) + 1;
        lVar27 = *(long *)(param_3 + 0x238);
        *(int *)(param_3 + 0xc) = iVar46;
      }
      lVar30 = lVar30 + 1;
      pcVar25 = pcVar25 + 0xc;
    } while (lVar30 != 0xe);
    pcVar25 = *(char **)(lVar27 + 0x2d8);
    if (((pcVar25 != (char *)0x0) && (*pcVar25 != '\0')) &&
       ((param_3[0x6b1] == '\0' || (pcVar25[1] != '\0')))) {
      *(float *)(param_3 + 0x66c) = *(float *)(lVar29 + 0x1e8) * *(float *)(param_3 + 0x66c);
    }
    pcVar25 = *(char **)(lVar27 + 0x2f0);
    if (((pcVar25 != (char *)0x0) && (*pcVar25 != '\0')) &&
       ((param_3[0x6b4] == '\0' || (pcVar25[1] != '\0')))) {
      *(float *)(param_3 + 0x690) = *(float *)(param_3 + 0x690) * *(float *)(lVar29 + 0xe0);
      *(float *)(param_3 + 0x694) = *(float *)(param_3 + 0x694) * *(float *)(lVar29 + 0xe4);
      *(float *)(param_3 + 0x698) = *(float *)(param_3 + 0x698) * *(float *)(lVar29 + 0xe8);
    }
    if ((0 < iVar46) &&
       (fVar33 = (float)*(int *)(*(long *)(lVar27 + 0x10) + 0x8b8),
       fVar33 < *(float *)(param_3 + 0x648))) {
      *(float *)(param_3 + 0x648) = fVar33;
    }
  }
  uVar22 = FUN_008cdcac(uVar21,param_3);
  if (fVar99 == 0.0) {
    *(undefined8 *)(param_3 + 0x3c8) = *(undefined8 *)(param_3 + 0x378);
    *(undefined8 *)(param_3 + 0x3c0) = *(undefined8 *)(param_3 + 0x370);
  }
  if (*(float *)(param_3 + 0x44) != 0.0) {
    pauVar1 = (undefined1 (*) [12])(param_3 + 0x360);
    uVar31 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x368) >> 0x20);
    auVar16._12_4_ = uVar31;
    auVar16._0_12_ = *pauVar1;
    uVar20 = a64_TBL(ZEXT816(0),auVar16,DAT_03cb54d8);
    pauVar2 = (undefined1 (*) [12])(param_3 + 0x340);
    fVar35 = (float)*(undefined8 *)(param_3 + 0x348);
    fVar95 = (float)((ulong)*(undefined8 *)(param_3 + 0x348) >> 0x20);
    fVar33 = (float)*(undefined8 *)*pauVar2;
    fVar94 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    pauVar4 = (undefined1 (*) [12])(param_3 + 0x350);
    uVar98 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x358) >> 0x20);
    auVar8._12_4_ = uVar98;
    auVar8._0_12_ = *pauVar4;
    uVar44 = a64_TBL(ZEXT816(0),auVar8,DAT_03cb56c8);
    auVar9._12_4_ = uVar98;
    auVar9._0_12_ = *pauVar4;
    uVar47 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb54d8);
    auVar17._12_4_ = uVar31;
    auVar17._0_12_ = *pauVar1;
    uVar102 = a64_TBL(ZEXT816(0),auVar17,DAT_03cb5488);
    auVar18._12_4_ = uVar31;
    auVar18._0_12_ = *pauVar1;
    uVar108 = a64_TBL(ZEXT816(0),auVar18,DAT_03cb54c0);
    auVar10._12_4_ = uVar98;
    auVar10._0_12_ = *pauVar4;
    uVar109 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb54c0);
    auVar11._12_4_ = uVar98;
    auVar11._0_12_ = *pauVar4;
    uVar103 = a64_TBL(ZEXT816(0),auVar11,DAT_03cb5488);
    auVar19._12_4_ = uVar31;
    auVar19._0_12_ = *pauVar1;
    uVar110 = a64_TBL(ZEXT816(0),auVar19,DAT_03cb56c8);
    uVar98 = SUB124(*pauVar2,8);
    uVar32 = SUB124(*pauVar1,8);
    fVar33 = fVar33 * (float)uVar44 * (float)uVar102 - (float)uVar103 * fVar33 * (float)uVar110;
    fVar94 = fVar94 * (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar102 >> 0x20) -
             (float)((ulong)uVar103 >> 0x20) * fVar94 * (float)((ulong)uVar110 >> 0x20);
    uVar66 = (undefined1)((uint)fVar94 >> 8);
    uVar68 = (undefined1)((uint)fVar94 >> 0x10);
    uVar70 = (undefined1)((uint)fVar94 >> 0x18);
    fVar35 = fVar35 * (float)uVar47 * (float)uVar108 - (float)uVar109 * fVar35 * (float)uVar20;
    uVar72 = (undefined1)((uint)fVar35 >> 8);
    uVar80 = (undefined1)((uint)fVar35 >> 0x10);
    uVar82 = (undefined1)((uint)fVar35 >> 0x18);
    fVar95 = fVar95 * (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar108 >> 0x20) -
             (float)((ulong)uVar109 >> 0x20) * fVar95 * (float)((ulong)uVar20 >> 0x20);
    uVar85 = (undefined1)((uint)fVar95 >> 8);
    uVar87 = (undefined1)((uint)fVar95 >> 0x10);
    uVar89 = (undefined1)((uint)fVar95 >> 0x18);
    auVar104[4] = SUB41(fVar94,0);
    auVar104._0_4_ = fVar33;
    auVar104[5] = uVar66;
    auVar104[6] = uVar68;
    auVar104[7] = uVar70;
    auVar104[8] = SUB41(fVar35,0);
    auVar104[9] = uVar72;
    auVar104[10] = uVar80;
    auVar104[0xb] = uVar82;
    auVar104[0xc] = SUB41(fVar95,0);
    auVar104[0xd] = uVar85;
    auVar104[0xe] = uVar87;
    auVar104[0xf] = uVar89;
    auVar112[4] = SUB41(fVar94,0);
    auVar112._0_4_ = fVar33;
    auVar112[5] = uVar66;
    auVar112[6] = uVar68;
    auVar112[7] = uVar70;
    auVar112[8] = SUB41(fVar35,0);
    auVar112[9] = uVar72;
    auVar112[10] = uVar80;
    auVar112[0xb] = uVar82;
    auVar112[0xc] = SUB41(fVar95,0);
    auVar112[0xd] = uVar85;
    auVar112[0xe] = uVar87;
    auVar112[0xf] = uVar89;
    auVar104 = NEON_ext(auVar104,auVar112,8,1);
    fVar33 = fVar33 + fVar94 + auVar104._0_4_ + auVar104._4_4_;
    uVar66 = SUB41(fVar33,0);
    uVar68 = (undefined1)((uint)fVar33 >> 8);
    uVar70 = (undefined1)((uint)fVar33 >> 0x10);
    uVar72 = (undefined1)((uint)fVar33 >> 0x18);
    auVar5[4] = uVar66;
    auVar5._0_4_ = fVar33;
    auVar5[5] = uVar68;
    auVar5[6] = uVar70;
    auVar5[7] = uVar72;
    auVar5[8] = uVar66;
    auVar5[9] = uVar68;
    auVar5[10] = uVar70;
    auVar5[0xb] = uVar72;
    auVar5[0xc] = uVar66;
    auVar5[0xd] = uVar68;
    auVar5[0xe] = uVar70;
    auVar5[0xf] = uVar72;
    auVar104 = NEON_frecpe(auVar5,4);
    auVar6[4] = uVar66;
    auVar6._0_4_ = fVar33;
    auVar6[5] = uVar68;
    auVar6[6] = uVar70;
    auVar6[7] = uVar72;
    auVar6[8] = uVar66;
    auVar6[9] = uVar68;
    auVar6[10] = uVar70;
    auVar6[0xb] = uVar72;
    auVar6[0xc] = uVar66;
    auVar6[0xd] = uVar68;
    auVar6[0xe] = uVar70;
    auVar6[0xf] = uVar72;
    auVar112 = NEON_frecps(auVar104,auVar6,4);
    auVar105._0_4_ = auVar104._0_4_ * auVar112._0_4_;
    auVar105._4_4_ = auVar104._4_4_ * auVar112._4_4_;
    auVar105._8_4_ = auVar104._8_4_ * auVar112._8_4_;
    auVar105._12_4_ = auVar104._12_4_ * auVar112._12_4_;
    auVar7[4] = uVar66;
    auVar7._0_4_ = fVar33;
    auVar7[5] = uVar68;
    auVar7[6] = uVar70;
    auVar7[7] = uVar72;
    auVar7[8] = uVar66;
    auVar7[9] = uVar68;
    auVar7[10] = uVar70;
    auVar7[0xb] = uVar72;
    auVar7[0xc] = uVar66;
    auVar7[0xd] = uVar68;
    auVar7[0xe] = uVar70;
    auVar7[0xf] = uVar72;
    auVar104 = NEON_frecps(auVar105,auVar7,4);
    fVar94 = auVar105._0_4_ * auVar104._0_4_;
    fVar95 = auVar105._4_4_ * auVar104._4_4_;
    fVar96 = auVar105._8_4_ * auVar104._8_4_;
    fVar97 = auVar105._12_4_ * auVar104._12_4_;
    uVar31 = SUB124(*pauVar4,8);
    auVar106._4_4_ = SUB124(*pauVar4,0);
    auVar106._0_4_ = SUB124(*pauVar2,0);
    auVar106._8_4_ = SUB124(*pauVar1,0);
    auVar106._12_4_ = 0;
    auVar113._4_4_ = SUB124(*pauVar4,4);
    auVar113._0_4_ = SUB124(*pauVar2,4);
    auVar113._8_4_ = SUB124(*pauVar1,4);
    auVar113._12_4_ = 0;
    uVar44 = a64_TBL(ZEXT816(0),auVar113,DAT_03cb56c8);
    fVar43 = (float)((ulong)uVar44 >> 0x20);
    uVar47 = a64_TBL(ZEXT816(0),auVar113,DAT_03cb54d8);
    fVar117 = (float)((ulong)uVar47 >> 0x20);
    auVar12._4_4_ = uVar31;
    auVar12._0_4_ = uVar98;
    auVar12._8_4_ = uVar32;
    auVar12._12_4_ = 0;
    uVar119 = a64_TBL(ZEXT816(0),auVar12,DAT_03cb54c0);
    auVar13._4_4_ = uVar31;
    auVar13._0_4_ = uVar98;
    auVar13._8_4_ = uVar32;
    auVar13._12_4_ = 0;
    uVar102 = a64_TBL(ZEXT816(0),auVar13,DAT_03cb5488);
    fVar38 = (float)((ulong)uVar102 >> 0x20);
    auVar14._4_4_ = uVar31;
    auVar14._0_4_ = uVar98;
    auVar14._8_4_ = uVar32;
    auVar14._12_4_ = 0;
    uVar120 = a64_TBL(ZEXT816(0),auVar14,DAT_03cb56c8);
    auVar15._4_4_ = uVar31;
    auVar15._0_4_ = uVar98;
    auVar15._8_4_ = uVar32;
    auVar15._12_4_ = 0;
    uVar20 = a64_TBL(ZEXT816(0),auVar15,DAT_03cb54d8);
    fVar42 = (float)((ulong)uVar20 >> 0x20);
    uVar121 = a64_TBL(ZEXT816(0),auVar113,DAT_03cb5488);
    uVar111 = a64_TBL(ZEXT816(0),auVar113,DAT_03cb54c0);
    uVar109 = a64_TBL(ZEXT816(0),auVar106,DAT_03cb5488);
    uVar110 = a64_TBL(ZEXT816(0),auVar106,DAT_03cb54c0);
    uVar103 = a64_TBL(ZEXT816(0),auVar106,DAT_03cb56c8);
    fVar118 = (float)((ulong)uVar119 >> 0x20);
    uVar108 = a64_TBL(ZEXT816(0),auVar106,DAT_03cb54d8);
    fVar93 = (float)*(undefined8 *)(param_3 + 0x378);
    fVar91 = (float)*(undefined8 *)(param_3 + 0x370);
    fVar92 = (float)((ulong)*(undefined8 *)(param_3 + 0x370) >> 0x20);
    fVar40 = (float)((ulong)uVar120 >> 0x20);
    fVar122 = (float)((ulong)uVar121 >> 0x20);
    fVar123 = (float)((ulong)uVar111 >> 0x20);
    fVar39 = (float)((ulong)uVar109 >> 0x20);
    fVar41 = (float)((ulong)uVar110 >> 0x20);
    fVar35 = (float)((ulong)uVar103 >> 0x20);
    fVar36 = (float)((ulong)uVar108 >> 0x20);
    fVar107 = fVar94 * ((float)uVar44 * (float)uVar102 - (float)uVar120 * (float)uVar121);
    fVar114 = fVar95 * (fVar43 * fVar38 - fVar40 * fVar122);
    fVar115 = fVar96 * ((float)uVar47 * (float)uVar119 - (float)uVar20 * (float)uVar111);
    fVar116 = fVar97 * (fVar117 * fVar118 - fVar42 * fVar123);
    fVar37 = fVar94 * ((float)uVar120 * (float)uVar109 - (float)uVar103 * (float)uVar102);
    fVar38 = fVar95 * (fVar40 * fVar39 - fVar35 * fVar38);
    fVar40 = fVar96 * ((float)uVar20 * (float)uVar110 - (float)uVar108 * (float)uVar119);
    fVar42 = fVar97 * (fVar42 * fVar41 - fVar36 * fVar118);
    iVar46 = -(uint)(fVar33 == 0.0);
    iVar52 = -(uint)(fVar33 == 0.0);
    iVar57 = -(uint)(fVar33 == 0.0);
    iVar62 = -(uint)(fVar33 == 0.0);
    bVar45 = ~(byte)iVar46;
    bVar48 = ~(byte)((uint)iVar46 >> 8);
    bVar49 = ~(byte)((uint)iVar46 >> 0x10);
    bVar50 = ~(byte)((uint)iVar46 >> 0x18);
    bVar51 = ~(byte)iVar52;
    bVar53 = ~(byte)((uint)iVar52 >> 8);
    bVar54 = ~(byte)((uint)iVar52 >> 0x10);
    bVar55 = ~(byte)((uint)iVar52 >> 0x18);
    bVar56 = ~(byte)iVar57;
    bVar58 = ~(byte)((uint)iVar57 >> 8);
    bVar59 = ~(byte)((uint)iVar57 >> 0x10);
    bVar60 = ~(byte)((uint)iVar57 >> 0x18);
    bVar61 = ~(byte)iVar62;
    bVar63 = ~(byte)((uint)iVar62 >> 8);
    bVar64 = ~(byte)((uint)iVar62 >> 0x10);
    bVar65 = ~(byte)((uint)iVar62 >> 0x18);
    fVar94 = fVar94 * ((float)uVar121 * (float)uVar103 - (float)uVar44 * (float)uVar109);
    fVar95 = fVar95 * (fVar122 * fVar35 - fVar43 * fVar39);
    fVar96 = fVar96 * ((float)uVar111 * (float)uVar108 - (float)uVar47 * (float)uVar110);
    fVar97 = fVar97 * (fVar123 * fVar36 - fVar117 * fVar41);
    bVar67 = SUB41(fVar107,0) & bVar45;
    bVar69 = (byte)((uint)fVar107 >> 8) & bVar48;
    bVar71 = (byte)((uint)fVar107 >> 0x10) & bVar49;
    bVar73 = (byte)((uint)fVar107 >> 0x18) & bVar50;
    bVar74 = SUB41(fVar114,0) & bVar51;
    bVar75 = (byte)((uint)fVar114 >> 8) & bVar53;
    bVar76 = (byte)((uint)fVar114 >> 0x10) & bVar54;
    bVar77 = (byte)((uint)fVar114 >> 0x18) & bVar55;
    bVar78 = SUB41(fVar115,0) & bVar56;
    bVar79 = (byte)((uint)fVar115 >> 8) & bVar58;
    bVar81 = (byte)((uint)fVar115 >> 0x10) & bVar59;
    bVar83 = (byte)((uint)fVar115 >> 0x18) & bVar60;
    bVar84 = SUB41(fVar116,0) & bVar61;
    bVar86 = (byte)((uint)fVar116 >> 8) & bVar63;
    bVar88 = (byte)((uint)fVar116 >> 0x10) & bVar64;
    bVar90 = (byte)((uint)fVar116 >> 0x18) & bVar65;
    fVar36 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & bVar50,
                             CONCAT12((byte)((uint)fVar37 >> 0x10) & bVar49,
                                      CONCAT11((byte)((uint)fVar37 >> 8) & bVar48,
                                               SUB41(fVar37,0) & bVar45)));
    fVar41 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & bVar60,
                             CONCAT12((byte)((uint)fVar40 >> 0x10) & bVar59,
                                      CONCAT11((byte)((uint)fVar40 >> 8) & bVar58,
                                               SUB41(fVar40,0) & bVar56)));
    fVar39 = (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) & bVar55,
                              CONCAT16((byte)((uint)fVar38 >> 0x10) & bVar54,
                                       CONCAT15((byte)((uint)fVar38 >> 8) & bVar53,
                                                CONCAT14(SUB41(fVar38,0) & bVar51,fVar36)))) >> 0x20
                    );
    fVar43 = (float)(CONCAT17((byte)((uint)fVar42 >> 0x18) & bVar65,
                              CONCAT16((byte)((uint)fVar42 >> 0x10) & bVar64,
                                       CONCAT15((byte)((uint)fVar42 >> 8) & bVar63,
                                                CONCAT14(SUB41(fVar42,0) & bVar61,fVar41)))) >> 0x20
                    );
    fVar37 = (-fVar107 * fVar91 - fVar37 * fVar92) - fVar94 * fVar93;
    fVar38 = (-fVar114 * fVar91 - fVar38 * fVar92) - fVar95 * fVar93;
    fVar40 = (-fVar115 * fVar91 - fVar40 * fVar92) - fVar96 * fVar93;
    fVar42 = (-fVar116 * fVar91 - fVar42 * fVar92) - fVar97 * fVar93;
    fVar33 = (float)CONCAT13((byte)((uint)fVar94 >> 0x18) & bVar50,
                             CONCAT12((byte)((uint)fVar94 >> 0x10) & bVar49,
                                      CONCAT11((byte)((uint)fVar94 >> 8) & bVar48,
                                               SUB41(fVar94,0) & bVar45)));
    fVar35 = (float)CONCAT13((byte)((uint)fVar96 >> 0x18) & bVar60,
                             CONCAT12((byte)((uint)fVar96 >> 0x10) & bVar59,
                                      CONCAT11((byte)((uint)fVar96 >> 8) & bVar58,
                                               SUB41(fVar96,0) & bVar56)));
    fVar94 = (float)(CONCAT17((byte)((uint)fVar95 >> 0x18) & bVar55,
                              CONCAT16((byte)((uint)fVar95 >> 0x10) & bVar54,
                                       CONCAT15((byte)((uint)fVar95 >> 8) & bVar53,
                                                CONCAT14(SUB41(fVar95,0) & bVar51,fVar33)))) >> 0x20
                    );
    fVar95 = (float)(CONCAT17((byte)((uint)fVar97 >> 0x18) & bVar65,
                              CONCAT16((byte)((uint)fVar97 >> 0x10) & bVar64,
                                       CONCAT15((byte)((uint)fVar97 >> 8) & bVar63,
                                                CONCAT14(SUB41(fVar97,0) & bVar61,fVar35)))) >> 0x20
                    );
    fVar115 = (float)*(undefined8 *)(param_3 + 0x3c8);
    fVar107 = (float)*(undefined8 *)(param_3 + 0x3c0);
    fVar114 = (float)((ulong)*(undefined8 *)(param_3 + 0x3c0) >> 0x20);
    fVar96 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & bVar50,
                             CONCAT12((byte)((uint)fVar37 >> 0x10) & bVar49,
                                      CONCAT11((byte)((uint)fVar37 >> 8) & bVar48,
                                               SUB41(fVar37,0) & bVar45)));
    fVar37 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & bVar60,
                             CONCAT12((byte)((uint)fVar40 >> 0x10) & bVar59,
                                      CONCAT11((byte)((uint)fVar40 >> 8) & bVar58,
                                               SUB41(fVar40,0) & bVar56)));
    fVar97 = (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) & bVar55,
                              CONCAT16((byte)((uint)fVar38 >> 0x10) & bVar54,
                                       CONCAT15((byte)((uint)fVar38 >> 8) & bVar53,
                                                CONCAT14(SUB41(fVar38,0) & bVar51,fVar96)))) >> 0x20
                    );
    fVar38 = (float)(CONCAT17((byte)((uint)fVar42 >> 0x18) & bVar65,
                              CONCAT16((byte)((uint)fVar42 >> 0x10) & bVar64,
                                       CONCAT15((byte)((uint)fVar42 >> 8) & bVar63,
                                                CONCAT14(SUB41(fVar42,0) & bVar61,fVar37)))) >> 0x20
                    );
    *(ulong *)(param_3 + 0x3d8) =
         CONCAT44(((float)CONCAT13(bVar90,CONCAT12(bVar88,CONCAT11(bVar86,bVar84))) * fVar91 +
                   fVar43 * fVar92 + fVar95 * fVar93 + fVar38) -
                  ((float)CONCAT13(bVar90,CONCAT12(bVar88,CONCAT11(bVar86,bVar84))) * fVar107 +
                   fVar43 * fVar114 + fVar95 * fVar115 + fVar38),
                  ((float)CONCAT13(bVar83,CONCAT12(bVar81,CONCAT11(bVar79,bVar78))) * fVar91 +
                   fVar41 * fVar92 + fVar35 * fVar93 + fVar37) -
                  ((float)CONCAT13(bVar83,CONCAT12(bVar81,CONCAT11(bVar79,bVar78))) * fVar107 +
                   fVar41 * fVar114 + fVar35 * fVar115 + fVar37));
    *(ulong *)(param_3 + 0x3d0) =
         CONCAT44(((float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74))) * fVar91 +
                   fVar39 * fVar92 + fVar94 * fVar93 + fVar97) -
                  ((float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74))) * fVar107 +
                   fVar39 * fVar114 + fVar94 * fVar115 + fVar97),
                  ((float)CONCAT13(bVar73,CONCAT12(bVar71,CONCAT11(bVar69,bVar67))) * fVar91 +
                   fVar36 * fVar92 + fVar33 * fVar93 + fVar96) -
                  ((float)CONCAT13(bVar73,CONCAT12(bVar71,CONCAT11(bVar69,bVar67))) * fVar107 +
                   fVar36 * fVar114 + fVar33 * fVar115 + fVar96));
  }
  if ((((*(char *)(lVar28 + 0x75b) != '\0') || (*(char *)(lVar28 + 0x75c) != '\0')) &&
      (*(float *)(param_3 + 0x74) < 1.0)) &&
     ((*(int *)(lVar28 + 0x76c) < 1 ||
      (fVar33 = *(float *)(param_3 + 0x74) + fVar34 / (float)*(int *)(lVar28 + 0x76c),
      *(float *)(param_3 + 0x74) = fVar33, 1.0 < fVar33)))) {
    param_3[0x74] = '\0';
    param_3[0x75] = '\0';
    param_3[0x76] = -0x80;
    param_3[0x77] = '?';
  }
  if (((((param_5 & 1) != 0) || (param_3[0x5fc] != '\0')) &&
      ((param_6 = *(char *)(lVar28 + 0x754) == '\0' & param_6, *(char *)(lVar28 + 0x755) != '\0' ||
       (*(char *)(lVar28 + 0x756) != '\0')))) &&
     ((*(int *)(lVar28 + 0x768) < 1 ||
      (fVar33 = *(float *)(param_3 + 0x70) - fVar34 / (float)*(int *)(lVar28 + 0x768),
      *(float *)(param_3 + 0x70) = fVar33, fVar33 < 0.0)))) {
    param_3[0x70] = '\0';
    param_3[0x71] = '\0';
    param_3[0x72] = '\0';
    param_3[0x73] = '\0';
    return false;
  }
  param_3[0x6bc] = '\0';
  if (((*param_3 == '\0') && (*(char *)(lVar29 + 0xe) != '\0')) && (0 < *(int *)(lVar29 + 0x25c))) {
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_3 + 0x44);
    uVar3 = *(uint *)(param_3 + 0xac);
    lVar27 = *(long *)(param_3 + 0xa0);
    iVar46 = *(int *)(lVar27 + 0x804);
    fVar33 = *(float *)(lVar27 + 0x800);
    *(uint *)(param_3 + 0xac) = uVar3 * 0x41c64e6d + 0x3039;
    if (0 < *(int *)(lVar29 + 0x25c)) {
      lVar30 = 0;
      for (lVar26 = 1;
          uVar22 = FUN_008d1994(param_2,param_3 + 1,param_3,
                                (int)((*(float *)(lVar27 + 0x800) -
                                      fVar33 * ((float)iVar46 / 100.0) *
                                      (float)uVar3 * 2.3283064e-10) * *(float *)(param_3 + 0x60) *
                                     *(float *)(*(long *)(lVar29 + 0x250) + lVar30 + 0x58)),0),
          lVar26 < *(int *)(lVar29 + 0x25c); lVar26 = lVar26 + 1) {
        lVar27 = *(long *)(param_3 + 0xa0);
        lVar30 = lVar30 + 0x60;
      }
    }
  }
  if (((param_6 & 1) != 0) && (param_3[3] != '\0')) {
    if (*param_3 == '\0') {
      if (fVar100 <= fVar99) goto LAB_008cee40;
    }
    else if ((fVar100 <= fVar99) && (*(char *)(*(long *)(param_3 + 0xa0) + 0x7e4) != '\0')) {
LAB_008cee40:
      if (*(char *)(lVar28 + 0x7f0) == '\0') {
        if ((fVar101 <= fVar99) && (*param_3 != '\0')) goto LAB_008cee60;
      }
      else if (fVar101 <= fVar99) {
LAB_008cee60:
        if (param_3[1] != '\0') goto LAB_008cee8c;
      }
      uVar22 = FUN_008cd890(param_1,param_2,param_3 + 0x54,param_3 + 0x58,param_3 + 0x5c,param_3 + 1
                            ,param_3,0);
    }
  }
LAB_008cee8c:
  if ((0 < *(int *)(*(long *)(param_3 + 0x238) + 0x88)) &&
     (iVar46 = *(int *)(param_3 + 0x28), 0 < iVar46)) {
    lVar30 = 0;
    lVar27 = 0;
    lVar26 = 0x80;
    do {
      if (*(int *)(*(long *)(param_3 + 0xb0) + lVar30) != 0) {
        *(float *)(*(long *)(param_3 + 0xb8) + lVar26) =
             *(float *)(*(long *)(param_3 + 0xb8) + lVar26) + fVar34;
        iVar46 = *(int *)(param_3 + 0x28);
      }
      lVar27 = lVar27 + 1;
      lVar30 = lVar30 + 0x20;
      lVar26 = lVar26 + 0x158;
    } while (lVar27 < iVar46);
  }
  if ((*(char *)(lVar28 + 0x752) == '\0') || ((*(char *)(lVar28 + 0x752) == '\x02' & param_7) != 0))
  {
    uVar22 = FUN_008cf0e4(*(undefined8 *)(param_3 + 0x98),param_3);
  }
  else {
    *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_3 + 0x28);
  }
  lVar30 = *(long *)(param_3 + 0x3e0);
  lVar27 = *(long *)(param_3 + 1000);
  local_a0 = param_3;
  if ((*(long *)(param_3 + 0x3f0) != 0) &&
     (pcVar24 = *(code **)(*(long *)(param_3 + 0x3f0) + 0x20), pcVar24 != (code *)0x0)) {
    uVar22 = (*pcVar24)(&local_a0);
  }
  if ((lVar30 != 0) && (pcVar24 = *(code **)(lVar30 + 0x20), pcVar24 != (code *)0x0)) {
    uVar22 = (*pcVar24)(&local_a0);
  }
  if ((lVar27 != 0) && (pcVar24 = *(code **)(lVar27 + 0x20), pcVar24 != (code *)0x0)) {
    uVar22 = (*pcVar24)(&local_a0);
  }
  if ((0 < *(int *)(param_3 + 0x28)) || (*(long *)(*(long *)(param_3 + 0x238) + 0x338) != 0)) {
    FUN_008cfe4c(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),uVar22,param_3);
  }
  *(undefined8 *)(param_3 + 0x3c8) = *(undefined8 *)(param_3 + 0x378);
  *(undefined8 *)(param_3 + 0x3c0) = *(undefined8 *)(param_3 + 0x370);
  *(float *)(param_3 + 0x44) = *(float *)(param_3 + 0x44) + fVar34;
  if ((*param_3 == '\0') || (*(char *)(*(long *)(param_3 + 0xa0) + 0x7e4) != '\0')) {
    if ((*(char *)(lVar28 + 0x7f0) == '\0') || (*(char *)(lVar29 + 0xe) != '\0')) {
      if ((((param_5 & 1) != 0) || (param_3[0x5fc] != '\0' || *param_3 != '\0')) &&
         (fVar100 + *(float *)(param_3 + 0x68) + (float)*(int *)(lVar28 + 0x8b8) < fVar99)) {
        return false;
      }
      if ((*(char *)(lVar29 + 0xe) != '\0') && (uVar21 = FUN_008c96fc(param_3), (uVar21 & 1) != 0))
      {
        return false;
      }
    }
    else if (*(char *)(lVar28 + 0x8a8) != '\x01') {
      fVar101 = fVar101 + (float)*(int *)(lVar28 + 0x8b8);
      if ((*(char *)(lVar28 + 0x755) != '\0') || (*(char *)(lVar28 + 0x756) != '\0')) {
        fVar34 = (float)NEON_ucvtf(*(undefined4 *)(lVar28 + 0x768));
        fVar101 = fVar101 + fVar34;
      }
      iVar46 = *(int *)(*(long *)(param_3 + 0x238) + 0x330);
      if (0 < iVar46) {
        if (iVar46 == 3) {
          iVar46 = FUN_008e41ec(param_3);
        }
        else {
          if (iVar46 != 2) goto LAB_008cf0d8;
          iVar46 = FUN_008debf4(param_3);
        }
        fVar101 = fVar101 + (float)iVar46;
      }
LAB_008cf0d8:
      return fVar99 <= fVar101;
    }
  }
  else if ((param_3[5] == '\x01') &&
          (fVar100 + *(float *)(param_3 + 0x68) + (float)*(int *)(lVar28 + 0x8b8) < fVar99)) {
    return false;
  }
  return true;
}


