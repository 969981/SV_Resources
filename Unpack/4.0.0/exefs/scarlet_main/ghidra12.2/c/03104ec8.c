/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03104ec8; name: FUN_03104ec8
 */


void FUN_03104ec8(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  ulong uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float *pfVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  char cVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  float fVar47;
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
  uint uVar66;
  undefined1 auVar67 [16];
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  auVar14 = *param_1;
  auVar32 = *param_2;
  bVar3 = param_2[1][8];
  uVar5 = (int)((uint)bVar3 << 0x18) >> 0x19;
  fVar73 = auVar14._12_4_ - auVar32._12_4_;
  if (uVar5 != 3) {
    fVar28 = auVar14._0_4_ - auVar32._0_4_;
    if (uVar5 == 1) {
      fVar28 = auVar14._4_4_ - auVar32._4_4_;
    }
    fVar73 = auVar14._8_4_ - auVar32._8_4_;
    if (uVar5 != 2) {
      fVar73 = fVar28;
    }
  }
  bVar4 = param_1[2][8];
  cVar30 = -((bVar3 & 1) == 0);
  fVar73 = (float)((uint)-fVar73 ^
                  ((uint)-fVar73 ^ (uint)fVar73) &
                  CONCAT13(cVar30,CONCAT12(cVar30,CONCAT11(cVar30,cVar30))));
  if (bVar4 == 0xfe) {
    *(long *)(param_1[1] + 8) = auVar32._8_8_;
    *(long *)param_1[1] = auVar32._0_8_;
    uVar20 = *(undefined8 *)param_2[1];
    param_1[2][8] = param_2[1][8];
    *(undefined8 *)param_1[2] = uVar20;
    if (fVar73 < 0.0) {
      *(undefined8 *)param_1[2] = 0xbf800000bf800000;
    }
    bVar19 = (param_2[1][8] & 1) != 0;
    iVar23 = 1;
    if (bVar19) {
      iVar23 = 2;
    }
    iVar24 = 1;
    if (!bVar19) {
      iVar24 = 2;
    }
    iVar1 = (int)(char)param_2[1][8] >> 1;
    iVar23 = (iVar23 + iVar1) % 3;
    iVar24 = (iVar24 + iVar1) % 3;
    if (iVar23 == 0) {
      pauVar22 = param_1;
    }
    else if (iVar23 == 1) {
      pauVar22 = (undefined1 (*) [16])(*param_1 + 4);
    }
    else if (iVar23 == 2) {
      pauVar22 = (undefined1 (*) [16])(*param_1 + 8);
    }
    else {
      pauVar22 = (undefined1 (*) [16])(*param_1 + 0xc);
    }
    if (iVar24 == 0) {
      pauVar21 = param_1;
    }
    else if (iVar24 == 1) {
      pauVar21 = (undefined1 (*) [16])(*param_1 + 4);
    }
    else if (iVar24 == 2) {
      pauVar21 = (undefined1 (*) [16])(*param_1 + 8);
    }
    else {
      pauVar21 = (undefined1 (*) [16])(*param_1 + 0xc);
    }
    uVar20 = CONCAT44(*(undefined4 *)*pauVar21,*(undefined4 *)*pauVar22);
    *(undefined8 *)param_1[3] = uVar20;
    *(undefined8 *)(param_1[3] + 8) = uVar20;
    return;
  }
  fVar28 = *(float *)param_1[2];
  if (fVar28 < 0.0) {
    return;
  }
  fVar29 = *(float *)(param_1[2] + 4);
  if (fVar29 < 0.0) {
    return;
  }
  if (fVar73 < 0.0) {
    *(undefined8 *)param_1[2] = 0xbf800000bf800000;
    return;
  }
  if (fVar73 == 0.0) {
    return;
  }
  bVar19 = (bVar3 & 1) != 0;
  iVar23 = 1;
  if (bVar19) {
    iVar23 = 2;
  }
  uStack_8 = auVar32._8_8_;
  local_10 = auVar32._0_8_;
  uVar25 = (int)(iVar23 + uVar5) % 3;
  iVar23 = 1;
  if (!bVar19) {
    iVar23 = 2;
  }
  if (2 < uVar25) {
    uVar25 = 3;
  }
  *(float *)((long)&local_10 + (ulong)uVar25 * 4) =
       *(float *)param_2[1] + *(float *)((long)&local_10 + (ulong)uVar25 * 4);
  pauVar22 = param_1 + 1;
  uVar25 = (int)(iVar23 + uVar5) % 3;
  if (2 < uVar25) {
    uVar25 = 3;
  }
  *(float *)((long)&local_10 + (ulong)uVar25 * 4) =
       *(float *)(param_2[1] + 4) + *(float *)((long)&local_10 + (ulong)uVar25 * 4);
  fVar64 = (float)*(undefined8 *)(param_1[1] + 8);
  fVar65 = (float)((ulong)*(undefined8 *)(param_1[1] + 8) >> 0x20);
  fVar62 = (float)*(undefined8 *)*pauVar22;
  fVar63 = (float)((ulong)*(undefined8 *)*pauVar22 >> 0x20);
  uVar25 = (int)((uint)bVar4 << 0x18) >> 0x19;
  uVar10 = *(undefined8 *)
            ((long)(PTR_DAT_047d19e0 + (ulong)(uint)(1 << (ulong)(uVar25 & 0x1f)) * 0x10) + 8);
  bVar55 = (byte)((ulong)uVar10 >> 8);
  bVar56 = (byte)((ulong)uVar10 >> 0x10);
  bVar57 = (byte)((ulong)uVar10 >> 0x18);
  bVar58 = (byte)((ulong)uVar10 >> 0x20);
  bVar59 = (byte)((ulong)uVar10 >> 0x28);
  bVar60 = (byte)((ulong)uVar10 >> 0x30);
  bVar61 = (byte)((ulong)uVar10 >> 0x38);
  uVar20 = *(undefined8 *)(PTR_DAT_047d19e0 + (ulong)(uint)(1 << (ulong)(uVar25 & 0x1f)) * 0x10);
  bVar48 = (byte)((ulong)uVar20 >> 8);
  bVar49 = (byte)((ulong)uVar20 >> 0x10);
  bVar50 = (byte)((ulong)uVar20 >> 0x18);
  bVar51 = (byte)((ulong)uVar20 >> 0x20);
  bVar52 = (byte)((ulong)uVar20 >> 0x28);
  bVar53 = (byte)((ulong)uVar20 >> 0x30);
  bVar54 = (byte)((ulong)uVar20 >> 0x38);
  fVar73 = auVar32._0_4_ - fVar62;
  fVar47 = auVar32._4_4_ - fVar63;
  fVar72 = auVar32._8_4_ - fVar64;
  fVar9 = auVar32._12_4_ - fVar65;
  uVar40 = SUB41(fVar9,0);
  uVar41 = (char)((uint)fVar9 >> 8);
  uVar43 = (char)((uint)fVar9 >> 0x10);
  uVar45 = (char)((uint)fVar9 >> 0x18);
  if (uVar25 != 3) {
    uVar40 = SUB41(fVar72,0);
    uVar41 = (char)((uint)fVar72 >> 8);
    uVar43 = (char)((uint)fVar72 >> 0x10);
    uVar45 = (char)((uint)fVar72 >> 0x18);
    if (uVar25 != 2) {
      uVar40 = SUB41(fVar73,0);
      uVar41 = (char)((uint)fVar73 >> 8);
      uVar43 = (char)((uint)fVar73 >> 0x10);
      uVar45 = (char)((uint)fVar73 >> 0x18);
      if (uVar25 == 1) {
        uVar40 = SUB41(fVar47,0);
        uVar41 = (char)((uint)fVar47 >> 8);
        uVar43 = (char)((uint)fVar47 >> 0x10);
        uVar45 = (char)((uint)fVar47 >> 0x18);
      }
    }
  }
  cVar30 = -((bVar4 & 1) == 0);
  fVar73 = -(float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar40)));
  uVar8 = CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar41,CONCAT14(uVar40,CONCAT13(uVar45,CONCAT12(
                                                  uVar43,CONCAT11(uVar41,uVar40))))))) ^
          (CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar41,CONCAT14(uVar40,CONCAT13(uVar45,CONCAT12(
                                                  uVar43,CONCAT11(uVar41,uVar40))))))) ^
          CONCAT17((char)((uint)fVar73 >> 0x18),
                   CONCAT16((char)((uint)fVar73 >> 0x10),
                            CONCAT15((char)((uint)fVar73 >> 8),
                                     CONCAT14(SUB41(fVar73,0),
                                              -(float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(
                                                  uVar41,uVar40)))))))) &
          ~CONCAT17(cVar30,CONCAT16(cVar30,CONCAT15(cVar30,CONCAT14(cVar30,CONCAT13(cVar30,CONCAT12(
                                                  cVar30,CONCAT11(cVar30,cVar30)))))));
  auVar67._8_8_ = uStack_8;
  auVar67._0_8_ = local_10;
  iVar23 = -(uint)(0.0 < (float)uVar8);
  bVar34 = (byte)((uint)iVar23 >> 8);
  bVar36 = (byte)((uint)iVar23 >> 0x10);
  bVar38 = (byte)((uint)iVar23 >> 0x18);
  iVar24 = -(uint)(0.0 < (float)(uVar8 >> 0x20));
  bVar42 = (byte)((uint)iVar24 >> 8);
  bVar44 = (byte)((uint)iVar24 >> 0x10);
  bVar46 = (byte)((uint)iVar24 >> 0x18);
  fVar73 = (float)local_10 - fVar62;
  fVar63 = (float)((ulong)local_10 >> 0x20) - fVar63;
  fVar64 = (float)uStack_8 - fVar64;
  fVar47 = (float)((ulong)uStack_8 >> 0x20) - fVar65;
  uVar40 = SUB41(fVar47,0);
  uVar41 = (char)((uint)fVar47 >> 8);
  uVar43 = (char)((uint)fVar47 >> 0x10);
  uVar45 = (char)((uint)fVar47 >> 0x18);
  if (uVar25 != 3) {
    uVar40 = SUB41(fVar64,0);
    uVar41 = (char)((uint)fVar64 >> 8);
    uVar43 = (char)((uint)fVar64 >> 0x10);
    uVar45 = (char)((uint)fVar64 >> 0x18);
    if (uVar25 != 2) {
      uVar40 = SUB41(fVar73,0);
      uVar41 = (char)((uint)fVar73 >> 8);
      uVar43 = (char)((uint)fVar73 >> 0x10);
      uVar45 = (char)((uint)fVar73 >> 0x18);
      if (uVar25 == 1) {
        uVar40 = SUB41(fVar63,0);
        uVar41 = (char)((uint)fVar63 >> 8);
        uVar43 = (char)((uint)fVar63 >> 0x10);
        uVar45 = (char)((uint)fVar63 >> 0x18);
      }
    }
  }
  cVar30 = -((bVar4 & 1) == 0);
  auVar11._12_4_ = fVar65;
  auVar11._0_12_ = *(undefined1 (*) [12])*pauVar22;
  auVar6[1] = bVar34 & bVar48;
  auVar6[0] = (byte)iVar23 & (byte)uVar20;
  auVar6[2] = bVar36 & bVar49;
  auVar6[3] = bVar38 & bVar50;
  auVar6[4] = (byte)iVar24 & bVar51;
  auVar6[5] = bVar42 & bVar52;
  auVar6[6] = bVar44 & bVar53;
  auVar6[7] = bVar46 & bVar54;
  auVar6[8] = (byte)iVar23 & (byte)uVar10;
  auVar6[9] = bVar34 & bVar55;
  auVar6[10] = bVar36 & bVar56;
  auVar6[0xb] = bVar38 & bVar57;
  auVar6[0xc] = (byte)iVar24 & bVar58;
  auVar6[0xd] = bVar42 & bVar59;
  auVar6[0xe] = bVar44 & bVar60;
  auVar6[0xf] = bVar46 & bVar61;
  auVar32 = auVar32 ^ (auVar32 ^ auVar11) & auVar6;
  uVar8 = CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar41,CONCAT14(uVar40,CONCAT13(uVar45,CONCAT12(
                                                  uVar43,CONCAT11(uVar41,uVar40))))))) ^
          (CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar41,CONCAT14(uVar40,CONCAT13(uVar45,CONCAT12(
                                                  uVar43,CONCAT11(uVar41,uVar40))))))) ^
          CONCAT44(-(float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar40))),
                   -(float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar40))))) &
          ~CONCAT17(cVar30,CONCAT16(cVar30,CONCAT15(cVar30,CONCAT14(cVar30,CONCAT13(cVar30,CONCAT12(
                                                  cVar30,CONCAT11(cVar30,cVar30)))))));
  iVar23 = -(uint)(0.0 < (float)uVar8);
  bVar34 = (byte)((uint)iVar23 >> 8);
  bVar36 = (byte)((uint)iVar23 >> 0x10);
  bVar38 = (byte)((uint)iVar23 >> 0x18);
  iVar24 = -(uint)(0.0 < (float)(uVar8 >> 0x20));
  bVar42 = (byte)((uint)iVar24 >> 8);
  bVar44 = (byte)((uint)iVar24 >> 0x10);
  bVar46 = (byte)((uint)iVar24 >> 0x18);
  auVar12._12_4_ = fVar65;
  auVar12._0_12_ = *(undefined1 (*) [12])*pauVar22;
  auVar13[1] = bVar34 & bVar48;
  auVar13[0] = (byte)iVar23 & (byte)uVar20;
  auVar13[2] = bVar36 & bVar49;
  auVar13[3] = bVar38 & bVar50;
  auVar13[4] = (byte)iVar24 & bVar51;
  auVar13[5] = bVar42 & bVar52;
  auVar13[6] = bVar44 & bVar53;
  auVar13[7] = bVar46 & bVar54;
  auVar13[8] = (byte)iVar23 & (byte)uVar10;
  auVar13[9] = bVar34 & bVar55;
  auVar13[10] = bVar36 & bVar56;
  auVar13[0xb] = bVar38 & bVar57;
  auVar13[0xc] = (byte)iVar24 & bVar58;
  auVar13[0xd] = bVar42 & bVar59;
  auVar13[0xe] = bVar44 & bVar60;
  auVar13[0xf] = bVar46 & bVar61;
  auVar67 = auVar67 ^ (auVar67 ^ auVar12) & auVar13;
  uStack_8 = auVar67._8_8_;
  local_10 = auVar67._0_8_;
  uVar40 = auVar14[0xc];
  uVar41 = auVar14[0xd];
  uVar43 = auVar14[0xe];
  uVar45 = auVar14[0xf];
  if (uVar25 == 3) {
    uVar68 = auVar32[0xc];
    uVar69 = auVar32[0xd];
    uVar70 = auVar32[0xe];
    uVar71 = auVar32[0xf];
    uVar33 = uVar40;
    uVar35 = uVar41;
    uVar37 = uVar43;
    uVar39 = uVar45;
  }
  else if (uVar25 == 2) {
    uVar68 = auVar32[8];
    uVar69 = auVar32[9];
    uVar70 = auVar32[10];
    uVar71 = auVar32[0xb];
    uVar33 = auVar14[8];
    uVar35 = auVar14[9];
    uVar37 = auVar14[10];
    uVar39 = auVar14[0xb];
  }
  else if (uVar25 == 1) {
    uVar68 = auVar32[4];
    uVar69 = auVar32[5];
    uVar70 = auVar32[6];
    uVar71 = auVar32[7];
    uVar33 = auVar14[4];
    uVar35 = auVar14[5];
    uVar37 = auVar14[6];
    uVar39 = auVar14[7];
  }
  else {
    uVar68 = auVar32[0];
    uVar69 = auVar32[1];
    uVar70 = auVar32[2];
    uVar71 = auVar32[3];
    uVar33 = auVar14[0];
    uVar35 = auVar14[1];
    uVar37 = auVar14[2];
    uVar39 = auVar14[3];
  }
  if ((float)CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68))) -
      (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33))) != 0.0) {
    bVar19 = (bVar4 & 1) != 0;
    iVar23 = 1;
    if (bVar19) {
      iVar23 = 2;
    }
    iVar24 = 1;
    if (!bVar19) {
      iVar24 = 2;
    }
    uVar31 = (int)(iVar23 + uVar25) % 3;
    uVar27 = (int)(iVar24 + uVar25) % 3;
    if (2 < uVar31) {
      uVar31 = 3;
    }
    if (2 < uVar27) {
      uVar27 = 3;
    }
    uVar31 = *(uint *)((ulong)local_30 | ((ulong)uVar31 & 3) << 2);
    auVar32 = ZEXT416(uVar31);
    uVar7 = *(undefined4 *)((ulong)local_30 | ((ulong)uVar27 & 3) << 2);
    uVar33 = (undefined1)uVar7;
    uVar35 = (undefined1)((uint)uVar7 >> 8);
    uVar37 = (undefined1)((uint)uVar7 >> 0x10);
    uVar39 = (undefined1)((uint)uVar7 >> 0x18);
    local_18 = CONCAT17(uVar39,CONCAT16(uVar37,CONCAT15(uVar35,CONCAT14(uVar33,uVar31))));
  }
  fVar73 = auVar67._12_4_;
  if (uVar25 != 3) {
    if (uVar25 == 2) {
      uVar40 = auVar14[8];
      uVar41 = auVar14[9];
      uVar43 = auVar14[10];
      uVar45 = auVar14[0xb];
      fVar73 = auVar67._8_4_;
    }
    else if (uVar25 == 1) {
      uVar40 = auVar14[4];
      uVar41 = auVar14[5];
      uVar43 = auVar14[6];
      uVar45 = auVar14[7];
      fVar73 = auVar67._4_4_;
    }
    else {
      uVar40 = auVar14[0];
      uVar41 = auVar14[1];
      uVar43 = auVar14[2];
      uVar45 = auVar14[3];
      fVar73 = auVar67._0_4_;
    }
  }
  if (fVar73 - (float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar40))) == 0.0) {
    bVar19 = (bVar4 & 1) == 0;
    iVar23 = 1;
    if (bVar19) {
      iVar23 = 2;
    }
    iVar24 = 1;
    if (!bVar19) {
      iVar24 = 2;
    }
    uVar31 = (int)(iVar24 + uVar25) % 3;
    uVar27 = (int)(iVar23 + uVar25) % 3;
    if (uVar31 == 0) goto LAB_03105398;
LAB_031055cc:
    fVar73 = auVar67._0_4_;
    if (uVar31 == 1) {
      pauVar21 = (undefined1 (*) [16])(param_1[1] + 4);
    }
    else if (uVar31 == 2) {
      pauVar21 = (undefined1 (*) [16])(param_1[1] + 8);
    }
    else {
      pauVar21 = (undefined1 (*) [16])(param_1[1] + 0xc);
    }
  }
  else {
    bVar19 = (bVar4 & 1) != 0;
    iVar23 = 1;
    if (bVar19) {
      iVar23 = 2;
    }
    iVar24 = 1;
    if (!bVar19) {
      iVar24 = 2;
    }
    uVar31 = (int)(iVar23 + uVar25) % 3;
    uVar27 = (int)(iVar24 + uVar25) % 3;
    uVar66 = uVar31;
    if (2 < uVar31) {
      uVar66 = 3;
    }
    uVar26 = uVar27;
    if (2 < uVar27) {
      uVar26 = 3;
    }
    fVar62 = *(float *)((ulong)local_40 | ((ulong)uVar66 & 3) << 2);
    uVar66 = *(uint *)((ulong)local_40 | ((ulong)uVar26 & 3) << 2);
    auVar67 = ZEXT416(uVar66);
    local_20 = CONCAT44(uVar66,fVar62);
    if (uVar31 != 0) goto LAB_031055cc;
LAB_03105398:
    fVar73 = auVar67._0_4_;
    pauVar21 = pauVar22;
  }
  fVar47 = *(float *)*pauVar21;
  if (uVar27 == 0) {
    pauVar21 = pauVar22;
  }
  else if (uVar27 == 1) {
    pauVar21 = (undefined1 (*) [16])(param_1[1] + 4);
  }
  else if (uVar27 == 2) {
    pauVar21 = (undefined1 (*) [16])(param_1[1] + 8);
  }
  else {
    pauVar21 = (undefined1 (*) [16])(param_1[1] + 0xc);
  }
  fVar72 = *(float *)*pauVar21;
  uVar40 = SUB41(fVar72,0);
  uVar41 = (undefined1)((uint)fVar72 >> 8);
  uVar43 = (undefined1)((uint)fVar72 >> 0x10);
  uVar45 = (undefined1)((uint)fVar72 >> 0x18);
  if (uVar31 == 0) {
    pauVar21 = param_1;
  }
  else if (uVar31 == 1) {
    pauVar21 = (undefined1 (*) [16])(*param_1 + 4);
  }
  else if (uVar31 == 2) {
    pauVar21 = (undefined1 (*) [16])(*param_1 + 8);
  }
  else {
    pauVar21 = (undefined1 (*) [16])(*param_1 + 0xc);
  }
  fVar9 = *(float *)*pauVar21;
  if (uVar27 == 0) {
    pauVar21 = param_1;
  }
  else if (uVar27 == 1) {
    pauVar21 = (undefined1 (*) [16])(*param_1 + 4);
  }
  else if (uVar27 == 2) {
    pauVar21 = (undefined1 (*) [16])(*param_1 + 8);
  }
  else {
    pauVar21 = (undefined1 (*) [16])(*param_1 + 0xc);
  }
  fVar28 = fVar28 + fVar47;
  uVar68 = SUB41(fVar28,0);
  uVar69 = (undefined1)((uint)fVar28 >> 8);
  uVar70 = (undefined1)((uint)fVar28 >> 0x10);
  uVar71 = (undefined1)((uint)fVar28 >> 0x18);
  fVar29 = fVar29 + fVar72;
  fVar63 = auVar32._0_4_;
  if (uVar5 == uVar25) {
    if (bVar4 != bVar3) {
LAB_03105564:
      *(undefined4 *)param_1[2] = 0xbf800000;
      fVar29 = -1.0;
      goto LAB_03105570;
    }
    if (fVar47 <= fVar63) {
      fVar47 = fVar63;
    }
    if (fVar72 == (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33))) ||
        fVar72 < (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33)))) {
      uVar40 = uVar33;
      uVar41 = uVar35;
      uVar43 = uVar37;
      uVar45 = uVar39;
    }
    if (fVar62 <= fVar28) {
      uVar68 = SUB41(fVar62,0);
      uVar69 = (undefined1)((uint)fVar62 >> 8);
      uVar70 = (undefined1)((uint)fVar62 >> 0x10);
      uVar71 = (undefined1)((uint)fVar62 >> 0x18);
    }
    if (fVar73 <= fVar29) {
      fVar29 = fVar73;
    }
  }
  else {
    fVar65 = *(float *)(param_1[3] + 8);
    fVar64 = *(float *)*pauVar21;
    if (fVar65 == fVar9) {
      bVar19 = *(float *)(param_1[3] + 0xc) != fVar64;
    }
    else {
      bVar19 = true;
    }
    if (uVar31 == uVar5) {
      fVar72 = fVar63;
      if (fVar62 <= fVar63) {
        fVar72 = fVar62;
      }
      fVar74 = fVar63;
      if (fVar63 <= fVar62) {
        fVar74 = fVar62;
      }
      if (fVar47 <= fVar72) {
        fVar47 = fVar72;
      }
      if (fVar74 <= fVar28) {
        uVar68 = SUB41(fVar74,0);
        uVar69 = (undefined1)((uint)fVar74 >> 8);
        uVar70 = (undefined1)((uint)fVar74 >> 0x10);
        uVar71 = (undefined1)((uint)fVar74 >> 0x18);
      }
      if (bVar19) {
        bVar19 = fVar65 <= fVar9;
        bVar18 = NAN(fVar63) || NAN(fVar9);
        bVar17 = fVar63 == fVar9;
        bVar16 = fVar63 < fVar9;
        goto LAB_03105490;
      }
    }
    else {
      bVar18 = fVar73 <= (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33)));
      fVar28 = (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33)));
      if (bVar18) {
        fVar28 = fVar73;
      }
      fVar74 = (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33)));
      if ((float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33))) == fVar73 || !bVar18) {
        fVar74 = fVar73;
      }
      if (fVar72 <= fVar28) {
        uVar40 = SUB41(fVar28,0);
        uVar41 = (undefined1)((uint)fVar28 >> 8);
        uVar43 = (undefined1)((uint)fVar28 >> 0x10);
        uVar45 = (undefined1)((uint)fVar28 >> 0x18);
      }
      if (fVar74 <= fVar29) {
        fVar29 = fVar74;
      }
      if (bVar19) {
        bVar19 = *(float *)(param_1[3] + 0xc) <= fVar64;
        bVar16 = false;
        bVar17 = false;
        bVar18 = true;
        if (!NAN((float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33)))) && !NAN(fVar64))
        {
          bVar16 = (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33))) < fVar64;
          bVar17 = (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33))) == fVar64;
          bVar18 = false;
        }
LAB_03105490:
        if (!(bool)((!bVar17 && bVar16 == bVar18) ^ bVar19)) goto LAB_03105564;
      }
    }
    pfVar2 = (float *)&local_18;
    pfVar15 = (float *)&local_20;
    if (0.0 < (fVar62 - fVar9) *
              ((float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33))) - fVar64) -
              (fVar63 - fVar9) * (fVar73 - fVar64)) {
      pfVar2 = (float *)&local_20;
      pfVar15 = (float *)&local_18;
    }
    fVar73 = *pfVar15;
    fVar28 = pfVar15[1];
    fVar72 = pfVar2[1];
    if ((fVar9 - *(float *)param_1[3]) * (fVar72 - *(float *)(param_1[3] + 4)) -
        (*pfVar2 - *(float *)param_1[3]) * (fVar64 - *(float *)(param_1[3] + 4)) <= 0.0) {
      *(float *)param_1[3] = *pfVar2;
      *(float *)(param_1[3] + 4) = fVar72;
    }
    if ((fVar65 - fVar9) * (fVar28 - fVar64) -
        (fVar73 - fVar9) * (*(float *)(param_1[3] + 0xc) - fVar64) <= 0.0) {
      *(float *)(param_1[3] + 8) = fVar73;
      *(float *)(param_1[3] + 0xc) = fVar28;
    }
  }
  if (uVar31 == 0) {
    pauVar21 = pauVar22;
  }
  else if (uVar31 == 1) {
    pauVar21 = (undefined1 (*) [16])(param_1[1] + 4);
  }
  else if (uVar31 == 2) {
    pauVar21 = (undefined1 (*) [16])(param_1[1] + 8);
  }
  else {
    pauVar21 = (undefined1 (*) [16])(param_1[1] + 0xc);
  }
  *(float *)*pauVar21 = fVar47;
  if (uVar27 != 0) {
    if (uVar27 == 1) {
      pauVar22 = (undefined1 (*) [16])(param_1[1] + 4);
    }
    else if (uVar27 == 2) {
      pauVar22 = (undefined1 (*) [16])(param_1[1] + 8);
    }
    else {
      pauVar22 = (undefined1 (*) [16])(param_1[1] + 0xc);
    }
  }
  fVar29 = fVar29 - (float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar40)));
  *(uint *)*pauVar22 = CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar40)));
  *(float *)param_1[2] = (float)CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68))) - fVar47;
LAB_03105570:
  *(float *)(param_1[2] + 4) = fVar29;
  return;
}


