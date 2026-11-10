/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d90e0; name: FUN_008d90e0
 */


void FUN_008d90e0(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,uint param_5)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
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
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar29;
  ulong uVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  byte *pbVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  byte bVar72;
  undefined1 uVar73;
  byte bVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  byte bVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  undefined1 uVar89;
  byte bVar90;
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  byte bVar94;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 uVar101;
  byte bVar102;
  undefined4 uVar103;
  float fVar104;
  float fVar105;
  undefined4 uVar106;
  float fVar107;
  undefined8 uVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined8 uVar113;
  float fVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar127;
  undefined8 uVar123;
  undefined8 uVar124;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar128;
  float fVar129;
  undefined8 uVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  undefined8 uVar133;
  float fVar136;
  float fVar137;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar138;
  float fVar139;
  undefined8 uVar140;
  undefined8 uVar141;
  float fVar142;
  float fVar143;
  undefined8 uVar144;
  undefined8 local_50;
  ulong uStack_48;
  
  uVar37 = (ulong)param_5;
  fVar143 = *(float *)(param_3 + 0x4c);
  fVar118 = *(float *)(param_3 + 0x44);
  pbVar38 = *(byte **)(*(long *)(param_3 + 0x238) + 0x280);
  uVar144 = *(undefined8 *)(pbVar38 + 0x10);
  fVar120 = *(float *)(pbVar38 + 0x1c);
  fVar105 = *(float *)(pbVar38 + 0x20);
  fVar3 = *(float *)(pbVar38 + 0x18);
  if ((pbVar38[1] & 1) != 0) {
    fVar105 = fVar105 * *(float *)(*(long *)(param_4 + 0x20) +
                                  (-(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | uVar37 << 4));
  }
  fVar110 = (float)param_1[1];
  uVar108 = *param_1;
  if (pbVar38[2] != 0) {
    uVar30 = -(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | uVar37 << 4;
    lVar33 = *(long *)(param_3 + 0x210);
    lVar35 = *(long *)(param_3 + 0x218);
    lVar34 = *(long *)(param_3 + 0x220);
    cVar5 = *(char *)(*(long *)(param_3 + 0xa0) + 0x753);
    if (cVar5 == '\x02') {
      lVar36 = (long)(int)param_5 * 0x10;
      uVar113 = CONCAT44(*(undefined4 *)(lVar35 + uVar30),*(undefined4 *)(lVar33 + uVar30));
      fVar114 = *(float *)(lVar34 + uVar30);
      fVar117 = *(float *)(lVar33 + lVar36 + 4);
      fVar107 = *(float *)(lVar35 + lVar36 + 4);
      fVar121 = *(float *)(lVar34 + lVar36 + 4);
      uVar115 = CONCAT44(*(undefined4 *)(lVar35 + lVar36 + 8),*(undefined4 *)(lVar33 + lVar36 + 8));
      fVar139 = *(float *)(lVar34 + lVar36 + 8);
      fVar122 = *(float *)(param_3 + 0x370);
      fVar127 = *(float *)(param_3 + 0x374);
      fVar128 = *(float *)(param_3 + 0x378);
    }
    else if (cVar5 == '\0') {
      fVar114 = (float)*(undefined8 *)(param_3 + 0x348);
      uVar113 = *(undefined8 *)(param_3 + 0x340);
      fVar121 = (float)*(undefined8 *)(param_3 + 0x358);
      fVar117 = (float)*(undefined8 *)(param_3 + 0x350);
      fVar107 = (float)((ulong)*(undefined8 *)(param_3 + 0x350) >> 0x20);
      fVar139 = (float)*(undefined8 *)(param_3 + 0x368);
      uVar115 = *(undefined8 *)(param_3 + 0x360);
      fVar122 = *(float *)(param_3 + 0x370);
      fVar127 = *(float *)(param_3 + 0x374);
      fVar128 = *(float *)(param_3 + 0x378);
    }
    else {
      lVar36 = (long)(int)param_5 * 0x10;
      uVar113 = CONCAT44(*(undefined4 *)(lVar35 + uVar30),*(undefined4 *)(lVar33 + uVar30));
      fVar114 = *(float *)(lVar34 + uVar30);
      lVar33 = lVar33 + lVar36;
      fVar117 = *(float *)(lVar33 + 4);
      lVar35 = lVar35 + lVar36;
      lVar34 = lVar34 + lVar36;
      fVar107 = *(float *)(lVar35 + 4);
      fVar121 = *(float *)(lVar34 + 4);
      uVar115 = CONCAT44(*(undefined4 *)(lVar35 + 8),*(undefined4 *)(lVar33 + 8));
      fVar139 = *(float *)(lVar34 + 8);
      fVar122 = *(float *)(lVar33 + 0xc);
      fVar127 = *(float *)(lVar35 + 0xc);
      fVar128 = *(float *)(lVar34 + 0xc);
    }
    fVar104 = (float)uVar108;
    fVar119 = (float)((ulong)uVar108 >> 0x20);
    uVar108 = CONCAT44(fVar127 + (float)((ulong)uVar113 >> 0x20) * fVar104 + fVar107 * fVar119 +
                                 (float)((ulong)uVar115 >> 0x20) * fVar110,
                       fVar122 + (float)uVar113 * fVar104 + fVar117 * fVar119 +
                                 (float)uVar115 * fVar110);
    fVar110 = fVar128 + fVar114 * fVar104 + fVar121 * fVar119 + fVar139 * fVar110;
  }
  fVar139 = fVar105 + (float)*(undefined8 *)(pbVar38 + 4) * fVar118 + (float)uVar108 * fVar120;
  fVar128 = fVar105 + (float)((ulong)*(undefined8 *)(pbVar38 + 4) >> 0x20) * fVar118 +
                      (float)((ulong)uVar108 >> 0x20) * fVar120;
  fVar105 = fVar105 + *(float *)(pbVar38 + 0xc) * fVar118 + fVar110 * fVar120;
  if ((*pbVar38 & 1) == 0) {
    iVar29 = (int)fVar139;
    iVar4 = *(int *)PTR_DAT_047d2578;
    iVar6 = -iVar29;
    if (-1 < iVar29) {
      iVar6 = iVar29;
    }
    iVar31 = (int)fVar128;
    iVar29 = 0;
    if (iVar4 != 0) {
      iVar29 = iVar6 / iVar4;
    }
    iVar32 = (int)fVar105;
    iVar2 = -iVar31;
    if (-1 < iVar31) {
      iVar2 = iVar31;
    }
    iVar31 = -iVar32;
    if (-1 < iVar32) {
      iVar31 = iVar32;
    }
    iVar32 = 0;
    if (iVar4 != 0) {
      iVar32 = iVar2 / iVar4;
    }
    iVar7 = 0;
    if (iVar4 != 0) {
      iVar7 = iVar31 / iVar4;
    }
    iVar6 = (iVar31 - iVar7 * iVar4) +
            ((iVar2 - iVar32 * iVar4) + (iVar6 - iVar29 * iVar4) * iVar4) * iVar4;
    pcVar1 = (char *)(*(long *)(PTR_DAT_047d2578 + 8) + (long)iVar6 + (long)iVar6 * 2);
    fVar118 = (float)(int)pcVar1[1] / 127.0;
    uStack_48 = (ulong)(uint)((float)(int)pcVar1[2] / 127.0);
    local_50 = CONCAT17((char)((uint)fVar118 >> 0x18),
                        CONCAT16((char)((uint)fVar118 >> 0x10),
                                 CONCAT15((char)((uint)fVar118 >> 8),
                                          CONCAT14(SUB41(fVar118,0),(float)(int)*pcVar1 / 127.0))));
    bVar72 = pbVar38[2];
  }
  else {
    FUN_008d95a8(SUB41(fVar139,0),SUB41(fVar128,0),SUB41(fVar105,0),PTR_DAT_047d2578,&local_50);
    bVar72 = pbVar38[2];
  }
  if (bVar72 == 0) {
    uVar47 = (undefined1)uStack_48;
    uVar48 = (undefined1)(uStack_48 >> 8);
    uVar49 = (undefined1)(uStack_48 >> 0x10);
    uVar50 = (undefined1)(uStack_48 >> 0x18);
    uVar51 = (undefined1)(uStack_48 >> 0x20);
    uVar52 = (undefined1)(uStack_48 >> 0x28);
    uVar53 = (undefined1)(uStack_48 >> 0x30);
    uVar54 = (undefined1)(uStack_48 >> 0x38);
    uVar39 = (undefined1)local_50;
    uVar40 = (undefined1)((ulong)local_50 >> 8);
    uVar41 = (undefined1)((ulong)local_50 >> 0x10);
    uVar42 = (undefined1)((ulong)local_50 >> 0x18);
    uVar43 = (undefined1)((ulong)local_50 >> 0x20);
    uVar44 = (undefined1)((ulong)local_50 >> 0x28);
    uVar45 = (undefined1)((ulong)local_50 >> 0x30);
    uVar46 = (undefined1)((ulong)local_50 >> 0x38);
  }
  else {
    uVar37 = -(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | uVar37 << 4;
    cVar5 = *(char *)(*(long *)(param_3 + 0xa0) + 0x753);
    if ((cVar5 == '\x02') || (cVar5 != '\0')) {
      uVar103 = *(undefined4 *)(*(long *)(param_3 + 0x210) + uVar37);
      uVar39 = (undefined1)uVar103;
      uVar40 = (undefined1)((uint)uVar103 >> 8);
      uVar41 = (undefined1)((uint)uVar103 >> 0x10);
      uVar42 = (undefined1)((uint)uVar103 >> 0x18);
      lVar34 = (long)(int)param_5 * 0x10;
      uVar103 = *(undefined4 *)(*(long *)(param_3 + 0x218) + uVar37);
      uVar43 = (undefined1)uVar103;
      uVar44 = (undefined1)((uint)uVar103 >> 8);
      uVar45 = (undefined1)((uint)uVar103 >> 0x10);
      uVar46 = (undefined1)((uint)uVar103 >> 0x18);
      uVar103 = *(undefined4 *)(*(long *)(param_3 + 0x220) + uVar37);
      lVar33 = *(long *)(param_3 + 0x210) + lVar34;
      uVar47 = (undefined1)uVar103;
      uVar48 = (undefined1)((uint)uVar103 >> 8);
      uVar49 = (undefined1)((uint)uVar103 >> 0x10);
      uVar50 = (undefined1)((uint)uVar103 >> 0x18);
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      lVar35 = *(long *)(param_3 + 0x218) + lVar34;
      uVar103 = *(undefined4 *)(lVar33 + 4);
      uVar55 = (undefined1)uVar103;
      uVar56 = (undefined1)((uint)uVar103 >> 8);
      uVar57 = (undefined1)((uint)uVar103 >> 0x10);
      uVar58 = (undefined1)((uint)uVar103 >> 0x18);
      uVar103 = *(undefined4 *)(lVar33 + 8);
      uVar71 = (undefined1)uVar103;
      uVar73 = (undefined1)((uint)uVar103 >> 8);
      uVar75 = (undefined1)((uint)uVar103 >> 0x10);
      uVar77 = (undefined1)((uint)uVar103 >> 0x18);
      lVar34 = *(long *)(param_3 + 0x220) + lVar34;
      uVar106 = *(undefined4 *)(lVar34 + 4);
      uVar103 = *(undefined4 *)(lVar35 + 8);
      uVar79 = (undefined1)uVar103;
      uVar81 = (undefined1)((uint)uVar103 >> 8);
      uVar83 = (undefined1)((uint)uVar103 >> 0x10);
      uVar85 = (undefined1)((uint)uVar103 >> 0x18);
      uVar103 = *(undefined4 *)(lVar35 + 4);
      uVar59 = (undefined1)uVar103;
      uVar60 = (undefined1)((uint)uVar103 >> 8);
      uVar61 = (undefined1)((uint)uVar103 >> 0x10);
      uVar62 = (undefined1)((uint)uVar103 >> 0x18);
      uVar103 = *(undefined4 *)(lVar34 + 8);
      uVar63 = (undefined1)uVar106;
      uVar64 = (undefined1)((uint)uVar106 >> 8);
      uVar65 = (undefined1)((uint)uVar106 >> 0x10);
      uVar66 = (undefined1)((uint)uVar106 >> 0x18);
      uVar67 = 0;
      uVar68 = 0;
      uVar69 = 0;
      uVar70 = 0;
      uVar87 = (undefined1)uVar103;
      uVar89 = (undefined1)((uint)uVar103 >> 8);
      uVar91 = (undefined1)((uint)uVar103 >> 0x10);
      uVar93 = (undefined1)((uint)uVar103 >> 0x18);
      uVar95 = 0;
      uVar97 = 0;
      uVar99 = 0;
      uVar101 = 0;
    }
    else {
      uVar108 = *(undefined8 *)(param_3 + 0x348);
      uVar47 = (undefined1)uVar108;
      uVar48 = (undefined1)((ulong)uVar108 >> 8);
      uVar49 = (undefined1)((ulong)uVar108 >> 0x10);
      uVar50 = (undefined1)((ulong)uVar108 >> 0x18);
      uVar51 = (undefined1)((ulong)uVar108 >> 0x20);
      uVar52 = (undefined1)((ulong)uVar108 >> 0x28);
      uVar53 = (undefined1)((ulong)uVar108 >> 0x30);
      uVar54 = (undefined1)((ulong)uVar108 >> 0x38);
      uVar108 = *(undefined8 *)(param_3 + 0x340);
      uVar39 = (undefined1)uVar108;
      uVar40 = (undefined1)((ulong)uVar108 >> 8);
      uVar41 = (undefined1)((ulong)uVar108 >> 0x10);
      uVar42 = (undefined1)((ulong)uVar108 >> 0x18);
      uVar43 = (undefined1)((ulong)uVar108 >> 0x20);
      uVar44 = (undefined1)((ulong)uVar108 >> 0x28);
      uVar45 = (undefined1)((ulong)uVar108 >> 0x30);
      uVar46 = (undefined1)((ulong)uVar108 >> 0x38);
      uVar108 = *(undefined8 *)(param_3 + 0x358);
      uVar63 = (undefined1)uVar108;
      uVar64 = (undefined1)((ulong)uVar108 >> 8);
      uVar65 = (undefined1)((ulong)uVar108 >> 0x10);
      uVar66 = (undefined1)((ulong)uVar108 >> 0x18);
      uVar67 = (undefined1)((ulong)uVar108 >> 0x20);
      uVar68 = (undefined1)((ulong)uVar108 >> 0x28);
      uVar69 = (undefined1)((ulong)uVar108 >> 0x30);
      uVar70 = (undefined1)((ulong)uVar108 >> 0x38);
      uVar108 = *(undefined8 *)(param_3 + 0x350);
      uVar55 = (undefined1)uVar108;
      uVar56 = (undefined1)((ulong)uVar108 >> 8);
      uVar57 = (undefined1)((ulong)uVar108 >> 0x10);
      uVar58 = (undefined1)((ulong)uVar108 >> 0x18);
      uVar59 = (undefined1)((ulong)uVar108 >> 0x20);
      uVar60 = (undefined1)((ulong)uVar108 >> 0x28);
      uVar61 = (undefined1)((ulong)uVar108 >> 0x30);
      uVar62 = (undefined1)((ulong)uVar108 >> 0x38);
      uVar108 = *(undefined8 *)(param_3 + 0x368);
      uVar87 = (undefined1)uVar108;
      uVar89 = (undefined1)((ulong)uVar108 >> 8);
      uVar91 = (undefined1)((ulong)uVar108 >> 0x10);
      uVar93 = (undefined1)((ulong)uVar108 >> 0x18);
      uVar95 = (undefined1)((ulong)uVar108 >> 0x20);
      uVar97 = (undefined1)((ulong)uVar108 >> 0x28);
      uVar99 = (undefined1)((ulong)uVar108 >> 0x30);
      uVar101 = (undefined1)((ulong)uVar108 >> 0x38);
      uVar108 = *(undefined8 *)(param_3 + 0x360);
      uVar71 = (undefined1)uVar108;
      uVar73 = (undefined1)((ulong)uVar108 >> 8);
      uVar75 = (undefined1)((ulong)uVar108 >> 0x10);
      uVar77 = (undefined1)((ulong)uVar108 >> 0x18);
      uVar79 = (undefined1)((ulong)uVar108 >> 0x20);
      uVar81 = (undefined1)((ulong)uVar108 >> 0x28);
      uVar83 = (undefined1)((ulong)uVar108 >> 0x30);
      uVar85 = (undefined1)((ulong)uVar108 >> 0x38);
    }
    auVar11[1] = uVar56;
    auVar11[0] = uVar55;
    auVar11[2] = uVar57;
    auVar11[3] = uVar58;
    auVar11[4] = uVar59;
    auVar11[5] = uVar60;
    auVar11[6] = uVar61;
    auVar11[7] = uVar62;
    auVar11[8] = uVar63;
    auVar11[9] = uVar64;
    auVar11[10] = uVar65;
    auVar11[0xb] = uVar66;
    auVar11[0xc] = uVar67;
    auVar11[0xd] = uVar68;
    auVar11[0xe] = uVar69;
    auVar11[0xf] = uVar70;
    uVar113 = a64_TBL(ZEXT816(0),auVar11,DAT_03cb56c8);
    auVar12[1] = uVar56;
    auVar12[0] = uVar55;
    auVar12[2] = uVar57;
    auVar12[3] = uVar58;
    auVar12[4] = uVar59;
    auVar12[5] = uVar60;
    auVar12[6] = uVar61;
    auVar12[7] = uVar62;
    auVar12[8] = uVar63;
    auVar12[9] = uVar64;
    auVar12[10] = uVar65;
    auVar12[0xb] = uVar66;
    auVar12[0xc] = uVar67;
    auVar12[0xd] = uVar68;
    auVar12[0xe] = uVar69;
    auVar12[0xf] = uVar70;
    uVar115 = a64_TBL(ZEXT816(0),auVar12,DAT_03cb54d8);
    auVar15[1] = uVar73;
    auVar15[0] = uVar71;
    auVar15[2] = uVar75;
    auVar15[3] = uVar77;
    auVar15[4] = uVar79;
    auVar15[5] = uVar81;
    auVar15[6] = uVar83;
    auVar15[7] = uVar85;
    auVar15[8] = uVar87;
    auVar15[9] = uVar89;
    auVar15[10] = uVar91;
    auVar15[0xb] = uVar93;
    auVar15[0xc] = uVar95;
    auVar15[0xd] = uVar97;
    auVar15[0xe] = uVar99;
    auVar15[0xf] = uVar101;
    uVar123 = a64_TBL(ZEXT816(0),auVar15,DAT_03cb5488);
    auVar16[1] = uVar73;
    auVar16[0] = uVar71;
    auVar16[2] = uVar75;
    auVar16[3] = uVar77;
    auVar16[4] = uVar79;
    auVar16[5] = uVar81;
    auVar16[6] = uVar83;
    auVar16[7] = uVar85;
    auVar16[8] = uVar87;
    auVar16[9] = uVar89;
    auVar16[10] = uVar91;
    auVar16[0xb] = uVar93;
    auVar16[0xc] = uVar95;
    auVar16[0xd] = uVar97;
    auVar16[0xe] = uVar99;
    auVar16[0xf] = uVar101;
    uVar130 = a64_TBL(ZEXT816(0),auVar16,DAT_03cb54c0);
    auVar13[1] = uVar56;
    auVar13[0] = uVar55;
    auVar13[2] = uVar57;
    auVar13[3] = uVar58;
    auVar13[4] = uVar59;
    auVar13[5] = uVar60;
    auVar13[6] = uVar61;
    auVar13[7] = uVar62;
    auVar13[8] = uVar63;
    auVar13[9] = uVar64;
    auVar13[10] = uVar65;
    auVar13[0xb] = uVar66;
    auVar13[0xc] = uVar67;
    auVar13[0xd] = uVar68;
    auVar13[0xe] = uVar69;
    auVar13[0xf] = uVar70;
    uVar131 = a64_TBL(ZEXT816(0),auVar13,DAT_03cb54c0);
    auVar14[1] = uVar56;
    auVar14[0] = uVar55;
    auVar14[2] = uVar57;
    auVar14[3] = uVar58;
    auVar14[4] = uVar59;
    auVar14[5] = uVar60;
    auVar14[6] = uVar61;
    auVar14[7] = uVar62;
    auVar14[8] = uVar63;
    auVar14[9] = uVar64;
    auVar14[10] = uVar65;
    auVar14[0xb] = uVar66;
    auVar14[0xc] = uVar67;
    auVar14[0xd] = uVar68;
    auVar14[0xe] = uVar69;
    auVar14[0xf] = uVar70;
    uVar124 = a64_TBL(ZEXT816(0),auVar14,DAT_03cb5488);
    auVar17[1] = uVar73;
    auVar17[0] = uVar71;
    auVar17[2] = uVar75;
    auVar17[3] = uVar77;
    auVar17[4] = uVar79;
    auVar17[5] = uVar81;
    auVar17[6] = uVar83;
    auVar17[7] = uVar85;
    auVar17[8] = uVar87;
    auVar17[9] = uVar89;
    auVar17[10] = uVar91;
    auVar17[0xb] = uVar93;
    auVar17[0xc] = uVar95;
    auVar17[0xd] = uVar97;
    auVar17[0xe] = uVar99;
    auVar17[0xf] = uVar101;
    uVar132 = a64_TBL(ZEXT816(0),auVar17,DAT_03cb56c8);
    auVar18[1] = uVar73;
    auVar18[0] = uVar71;
    auVar18[2] = uVar75;
    auVar18[3] = uVar77;
    auVar18[4] = uVar79;
    auVar18[5] = uVar81;
    auVar18[6] = uVar83;
    auVar18[7] = uVar85;
    auVar18[8] = uVar87;
    auVar18[9] = uVar89;
    auVar18[10] = uVar91;
    auVar18[0xb] = uVar93;
    auVar18[0xc] = uVar95;
    auVar18[0xd] = uVar97;
    auVar18[0xe] = uVar99;
    auVar18[0xf] = uVar101;
    uVar108 = a64_TBL(ZEXT816(0),auVar18,DAT_03cb54d8);
    uVar19 = CONCAT13(uVar77,CONCAT12(uVar75,CONCAT11(uVar73,uVar71)));
    uVar103 = CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
    fVar118 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) * (float)uVar113 *
              (float)uVar123 -
              (float)uVar124 * (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) *
              (float)uVar132;
    fVar105 = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) *
              (float)((ulong)uVar113 >> 0x20) * (float)((ulong)uVar123 >> 0x20) -
              (float)((ulong)uVar124 >> 0x20) *
              (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) *
              (float)((ulong)uVar132 >> 0x20);
    fVar120 = (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) * (float)uVar115 *
              (float)uVar130 -
              (float)uVar131 * (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) *
              (float)uVar108;
    fVar110 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) *
              (float)((ulong)uVar115 >> 0x20) * (float)((ulong)uVar130 >> 0x20) -
              (float)((ulong)uVar131 >> 0x20) *
              (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) *
              (float)((ulong)uVar108 >> 0x20);
    auVar20._4_4_ = fVar105;
    auVar20._0_4_ = fVar118;
    auVar20._8_4_ = fVar120;
    auVar20._12_4_ = fVar110;
    auVar21._4_4_ = fVar105;
    auVar21._0_4_ = fVar118;
    auVar21._8_4_ = fVar120;
    auVar21._12_4_ = fVar110;
    auVar125 = NEON_ext(auVar20,auVar21,8,1);
    fVar119 = fVar118 + fVar105 + auVar125._0_4_ + auVar125._4_4_;
    auVar22._4_4_ = fVar119;
    auVar22._0_4_ = fVar119;
    auVar22._8_4_ = fVar119;
    auVar22._12_4_ = fVar119;
    auVar125 = NEON_frecpe(auVar22,4);
    auVar23._4_4_ = fVar119;
    auVar23._0_4_ = fVar119;
    auVar23._8_4_ = fVar119;
    auVar23._12_4_ = fVar119;
    auVar134 = NEON_frecps(auVar125,auVar23,4);
    auVar126._0_4_ = auVar125._0_4_ * auVar134._0_4_;
    auVar126._4_4_ = auVar125._4_4_ * auVar134._4_4_;
    auVar126._8_4_ = auVar125._8_4_ * auVar134._8_4_;
    auVar126._12_4_ = auVar125._12_4_ * auVar134._12_4_;
    auVar24._4_4_ = fVar119;
    auVar24._0_4_ = fVar119;
    auVar24._8_4_ = fVar119;
    auVar24._12_4_ = fVar119;
    auVar125 = NEON_frecps(auVar126,auVar24,4);
    fVar120 = auVar126._0_4_ * auVar125._0_4_;
    fVar110 = auVar126._4_4_ * auVar125._4_4_;
    fVar139 = auVar126._8_4_ * auVar125._8_4_;
    fVar128 = auVar126._12_4_ * auVar125._12_4_;
    uVar106 = CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)));
    auVar135._4_4_ =
         (int)(CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar60,CONCAT14(uVar59,uVar106)))) >> 0x20);
    auVar135._0_4_ =
         (int)(CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,uVar103)))) >> 0x20);
    auVar135._8_4_ =
         (int)(CONCAT17(uVar85,CONCAT16(uVar83,CONCAT15(uVar81,CONCAT14(uVar79,uVar19)))) >> 0x20);
    auVar135._12_4_ = 0;
    uVar8 = (undefined2)(CONCAT12(uVar48,CONCAT11(uVar47,uVar46)) >> 8);
    uVar115 = a64_TBL(ZEXT816(0),auVar135,DAT_03cb56c8);
    uVar123 = a64_TBL(ZEXT816(0),auVar135,DAT_03cb54d8);
    auVar125[2] = uVar49;
    auVar125._0_2_ = uVar8;
    auVar125[3] = uVar50;
    auVar125[4] = uVar63;
    auVar125[5] = uVar64;
    auVar125[6] = uVar65;
    auVar125[7] = uVar66;
    auVar125[8] = uVar87;
    auVar125[9] = uVar89;
    auVar125[10] = uVar91;
    auVar125[0xb] = uVar93;
    auVar125._12_4_ = 0;
    uVar140 = a64_TBL(ZEXT816(0),auVar125,DAT_03cb54c0);
    auVar134[2] = uVar49;
    auVar134._0_2_ = uVar8;
    auVar134[3] = uVar50;
    auVar134[4] = uVar63;
    auVar134[5] = uVar64;
    auVar134[6] = uVar65;
    auVar134[7] = uVar66;
    auVar134[8] = uVar87;
    auVar134[9] = uVar89;
    auVar134[10] = uVar91;
    auVar134[0xb] = uVar93;
    auVar134._12_4_ = 0;
    uVar124 = a64_TBL(ZEXT816(0),auVar134,DAT_03cb5488);
    fVar109 = (float)((ulong)uVar124 >> 0x20);
    auVar9[2] = uVar49;
    auVar9._0_2_ = uVar8;
    auVar9[3] = uVar50;
    auVar9[4] = uVar63;
    auVar9[5] = uVar64;
    auVar9[6] = uVar65;
    auVar9[7] = uVar66;
    auVar9[8] = uVar87;
    auVar9[9] = uVar89;
    auVar9[10] = uVar91;
    auVar9[0xb] = uVar93;
    auVar9._12_4_ = 0;
    uVar141 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb56c8);
    auVar10[2] = uVar49;
    auVar10._0_2_ = uVar8;
    auVar10[3] = uVar50;
    auVar10[4] = uVar63;
    auVar10[5] = uVar64;
    auVar10[6] = uVar65;
    auVar10[7] = uVar66;
    auVar10[8] = uVar87;
    auVar10[9] = uVar89;
    auVar10[10] = uVar91;
    auVar10[0xb] = uVar93;
    auVar10._12_4_ = 0;
    uVar108 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb54d8);
    auVar25._4_4_ = uVar106;
    auVar25._0_4_ = uVar103;
    auVar25._8_4_ = uVar19;
    auVar25._12_4_ = 0;
    uVar130 = a64_TBL(ZEXT816(0),auVar25,DAT_03cb56c8);
    fVar112 = (float)((ulong)uVar140 >> 0x20);
    auVar26._4_4_ = uVar106;
    auVar26._0_4_ = uVar103;
    auVar26._8_4_ = uVar19;
    auVar26._12_4_ = 0;
    uVar131 = a64_TBL(ZEXT816(0),auVar26,DAT_03cb54d8);
    uVar113 = a64_TBL(ZEXT816(0),auVar135,DAT_03cb5488);
    uVar133 = a64_TBL(ZEXT816(0),auVar135,DAT_03cb54c0);
    auVar27._4_4_ = uVar106;
    auVar27._0_4_ = uVar103;
    auVar27._8_4_ = uVar19;
    auVar27._12_4_ = 0;
    uVar132 = a64_TBL(ZEXT816(0),auVar27,DAT_03cb5488);
    auVar28._4_4_ = uVar106;
    auVar28._0_4_ = uVar103;
    auVar28._8_4_ = uVar19;
    auVar28._12_4_ = 0;
    uVar116 = a64_TBL(ZEXT816(0),auVar28,DAT_03cb54c0);
    fVar122 = (float)((ulong)uVar115 >> 0x20);
    fVar127 = (float)((ulong)uVar123 >> 0x20);
    fVar118 = (float)((ulong)uVar113 >> 0x20);
    fVar111 = (float)((ulong)uVar141 >> 0x20);
    fVar105 = (float)((ulong)uVar133 >> 0x20);
    fVar142 = (float)((ulong)uVar108 >> 0x20);
    fVar121 = (float)((ulong)uVar132 >> 0x20);
    fVar104 = (float)((ulong)uVar116 >> 0x20);
    fVar114 = (float)((ulong)uVar130 >> 0x20);
    fVar117 = (float)((ulong)uVar131 >> 0x20);
    fVar129 = fVar120 * ((float)uVar115 * (float)uVar124 - (float)uVar141 * (float)uVar113);
    fVar136 = fVar110 * (fVar122 * fVar109 - fVar111 * fVar118);
    fVar137 = fVar139 * ((float)uVar123 * (float)uVar140 - (float)uVar108 * (float)uVar133);
    fVar138 = fVar128 * (fVar127 * fVar112 - fVar142 * fVar105);
    fVar107 = fVar120 * ((float)uVar141 * (float)uVar132 - (float)uVar130 * (float)uVar124);
    fVar109 = fVar110 * (fVar111 * fVar121 - fVar114 * fVar109);
    fVar111 = fVar139 * ((float)uVar108 * (float)uVar116 - (float)uVar131 * (float)uVar140);
    fVar112 = fVar128 * (fVar142 * fVar104 - fVar117 * fVar112);
    fVar120 = fVar120 * ((float)uVar113 * (float)uVar130 - (float)uVar115 * (float)uVar132);
    fVar110 = fVar110 * (fVar118 * fVar114 - fVar122 * fVar121);
    fVar139 = fVar139 * ((float)uVar133 * (float)uVar131 - (float)uVar123 * (float)uVar116);
    fVar128 = fVar128 * (fVar105 * fVar117 - fVar127 * fVar104);
    fVar118 = (fVar129 * -0.0 - fVar107 * 0.0) - fVar120 * 0.0;
    fVar105 = (fVar136 * -0.0 - fVar109 * 0.0) - fVar110 * 0.0;
    fVar122 = (fVar137 * -0.0 - fVar111 * 0.0) - fVar139 * 0.0;
    fVar127 = (fVar138 * -0.0 - fVar112 * 0.0) - fVar128 * 0.0;
    iVar6 = -(uint)(fVar119 == 0.0);
    iVar4 = -(uint)(fVar119 == 0.0);
    iVar29 = -(uint)(fVar119 == 0.0);
    iVar31 = -(uint)(fVar119 == 0.0);
    bVar72 = ~(byte)iVar6;
    bVar74 = ~(byte)((uint)iVar6 >> 8);
    bVar76 = ~(byte)((uint)iVar6 >> 0x10);
    bVar78 = ~(byte)((uint)iVar6 >> 0x18);
    bVar80 = ~(byte)iVar4;
    bVar82 = ~(byte)((uint)iVar4 >> 8);
    bVar84 = ~(byte)((uint)iVar4 >> 0x10);
    bVar86 = ~(byte)((uint)iVar4 >> 0x18);
    bVar88 = ~(byte)iVar29;
    bVar90 = ~(byte)((uint)iVar29 >> 8);
    bVar92 = ~(byte)((uint)iVar29 >> 0x10);
    bVar94 = ~(byte)((uint)iVar29 >> 0x18);
    bVar96 = ~(byte)iVar31;
    bVar98 = ~(byte)((uint)iVar31 >> 8);
    bVar100 = ~(byte)((uint)iVar31 >> 0x10);
    bVar102 = ~(byte)((uint)iVar31 >> 0x18);
    fVar121 = (float)CONCAT13((byte)((uint)fVar129 >> 0x18) & bVar78,
                              CONCAT12((byte)((uint)fVar129 >> 0x10) & bVar76,
                                       CONCAT11((byte)((uint)fVar129 >> 8) & bVar74,
                                                SUB41(fVar129,0) & bVar72)));
    fVar104 = (float)CONCAT13((byte)((uint)fVar137 >> 0x18) & bVar94,
                              CONCAT12((byte)((uint)fVar137 >> 0x10) & bVar92,
                                       CONCAT11((byte)((uint)fVar137 >> 8) & bVar90,
                                                SUB41(fVar137,0) & bVar88)));
    fVar119 = (float)CONCAT13((byte)((uint)fVar107 >> 0x18) & bVar78,
                              CONCAT12((byte)((uint)fVar107 >> 0x10) & bVar76,
                                       CONCAT11((byte)((uint)fVar107 >> 8) & bVar74,
                                                SUB41(fVar107,0) & bVar72)));
    fVar111 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & bVar94,
                              CONCAT12((byte)((uint)fVar111 >> 0x10) & bVar92,
                                       CONCAT11((byte)((uint)fVar111 >> 8) & bVar90,
                                                SUB41(fVar111,0) & bVar88)));
    fVar114 = (float)local_50;
    fVar117 = (float)((ulong)local_50 >> 0x20);
    fVar107 = (float)uStack_48;
    fVar118 = fVar121 * fVar114 + fVar119 * fVar117 +
              (float)CONCAT13((byte)((uint)fVar120 >> 0x18) & bVar78,
                              CONCAT12((byte)((uint)fVar120 >> 0x10) & bVar76,
                                       CONCAT11((byte)((uint)fVar120 >> 8) & bVar74,
                                                SUB41(fVar120,0) & bVar72))) * fVar107 +
              (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & bVar78,
                              CONCAT12((byte)((uint)fVar118 >> 0x10) & bVar76,
                                       CONCAT11((byte)((uint)fVar118 >> 8) & bVar74,
                                                SUB41(fVar118,0) & bVar72)));
    uVar39 = SUB41(fVar118,0);
    uVar40 = (undefined1)((uint)fVar118 >> 8);
    uVar41 = (undefined1)((uint)fVar118 >> 0x10);
    uVar42 = (undefined1)((uint)fVar118 >> 0x18);
    fVar118 = (float)(CONCAT17((byte)((uint)fVar136 >> 0x18) & bVar86,
                               CONCAT16((byte)((uint)fVar136 >> 0x10) & bVar84,
                                        CONCAT15((byte)((uint)fVar136 >> 8) & bVar82,
                                                 CONCAT14(SUB41(fVar136,0) & bVar80,fVar121)))) >>
                     0x20) * fVar114 +
              (float)(CONCAT17((byte)((uint)fVar109 >> 0x18) & bVar86,
                               CONCAT16((byte)((uint)fVar109 >> 0x10) & bVar84,
                                        CONCAT15((byte)((uint)fVar109 >> 8) & bVar82,
                                                 CONCAT14(SUB41(fVar109,0) & bVar80,fVar119)))) >>
                     0x20) * fVar117 +
              (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & bVar86,
                              CONCAT12((byte)((uint)fVar110 >> 0x10) & bVar84,
                                       CONCAT11((byte)((uint)fVar110 >> 8) & bVar82,
                                                SUB41(fVar110,0) & bVar80))) * fVar107 +
              (float)CONCAT13((byte)((uint)fVar105 >> 0x18) & bVar86,
                              CONCAT12((byte)((uint)fVar105 >> 0x10) & bVar84,
                                       CONCAT11((byte)((uint)fVar105 >> 8) & bVar82,
                                                SUB41(fVar105,0) & bVar80)));
    uVar43 = SUB41(fVar118,0);
    uVar44 = (undefined1)((uint)fVar118 >> 8);
    uVar45 = (undefined1)((uint)fVar118 >> 0x10);
    uVar46 = (undefined1)((uint)fVar118 >> 0x18);
    fVar118 = fVar104 * fVar114 + fVar111 * fVar117 +
              (float)CONCAT13((byte)((uint)fVar139 >> 0x18) & bVar94,
                              CONCAT12((byte)((uint)fVar139 >> 0x10) & bVar92,
                                       CONCAT11((byte)((uint)fVar139 >> 8) & bVar90,
                                                SUB41(fVar139,0) & bVar88))) * fVar107 +
              (float)CONCAT13((byte)((uint)fVar122 >> 0x18) & bVar94,
                              CONCAT12((byte)((uint)fVar122 >> 0x10) & bVar92,
                                       CONCAT11((byte)((uint)fVar122 >> 8) & bVar90,
                                                SUB41(fVar122,0) & bVar88)));
    uVar47 = SUB41(fVar118,0);
    uVar48 = (undefined1)((uint)fVar118 >> 8);
    uVar49 = (undefined1)((uint)fVar118 >> 0x10);
    uVar50 = (undefined1)((uint)fVar118 >> 0x18);
    fVar118 = (float)(CONCAT17((byte)((uint)fVar138 >> 0x18) & bVar102,
                               CONCAT16((byte)((uint)fVar138 >> 0x10) & bVar100,
                                        CONCAT15((byte)((uint)fVar138 >> 8) & bVar98,
                                                 CONCAT14(SUB41(fVar138,0) & bVar96,fVar104)))) >>
                     0x20) * fVar114 +
              (float)(CONCAT17((byte)((uint)fVar112 >> 0x18) & bVar102,
                               CONCAT16((byte)((uint)fVar112 >> 0x10) & bVar100,
                                        CONCAT15((byte)((uint)fVar112 >> 8) & bVar98,
                                                 CONCAT14(SUB41(fVar112,0) & bVar96,fVar111)))) >>
                     0x20) * fVar117 +
              (float)CONCAT13((byte)((uint)fVar128 >> 0x18) & bVar102,
                              CONCAT12((byte)((uint)fVar128 >> 0x10) & bVar100,
                                       CONCAT11((byte)((uint)fVar128 >> 8) & bVar98,
                                                SUB41(fVar128,0) & bVar96))) * fVar107 +
              (float)CONCAT13((byte)((uint)fVar127 >> 0x18) & bVar102,
                              CONCAT12((byte)((uint)fVar127 >> 0x10) & bVar100,
                                       CONCAT11((byte)((uint)fVar127 >> 8) & bVar98,
                                                SUB41(fVar127,0) & bVar96)));
    uVar51 = SUB41(fVar118,0);
    uVar52 = (undefined1)((uint)fVar118 >> 8);
    uVar53 = (undefined1)((uint)fVar118 >> 0x10);
    uVar54 = (undefined1)((uint)fVar118 >> 0x18);
  }
  fVar118 = (float)((ulong)*param_2 >> 0x20) +
            (float)((ulong)uVar144 >> 0x20) *
            (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) * fVar143;
  fVar105 = (float)((ulong)param_2[1] >> 0x20) +
            (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * 0.0 * fVar143;
  param_2[1] = CONCAT17((char)((uint)fVar105 >> 0x18),
                        CONCAT16((char)((uint)fVar105 >> 0x10),
                                 CONCAT15((char)((uint)fVar105 >> 8),
                                          CONCAT14(SUB41(fVar105,0),
                                                   (float)param_2[1] +
                                                   fVar3 * (float)CONCAT13(uVar50,CONCAT12(uVar49,
                                                  CONCAT11(uVar48,uVar47))) * fVar143))));
  *param_2 = CONCAT17((char)((uint)fVar118 >> 0x18),
                      CONCAT16((char)((uint)fVar118 >> 0x10),
                               CONCAT15((char)((uint)fVar118 >> 8),
                                        CONCAT14(SUB41(fVar118,0),
                                                 (float)*param_2 +
                                                 (float)uVar144 *
                                                 (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(
                                                  uVar40,uVar39))) * fVar143))));
  return;
}


