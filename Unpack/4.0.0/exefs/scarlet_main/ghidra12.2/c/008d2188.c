/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d2188; name: FUN_008d2188
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_008d2188(float param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined8 param_5,
            undefined8 param_6,long param_7)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
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
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
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
  float fVar67;
  float fVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  float local_78;
  float fStack_74;
  
  lVar32 = *(long *)(param_4 + 0xa0);
  fVar78 = *(float *)(param_7 + 0x90);
  fVar75 = *(float *)(param_7 + 0x94);
  fVar77 = *(float *)(lVar32 + 0x85c);
  fVar73 = *(float *)(lVar32 + 0x860);
  fVar74 = *(float *)(lVar32 + 0x864);
  fVar76 = *(float *)(param_7 + 0x98);
  lVar1 = 0x844;
  if (*(char *)(lVar32 + 0x83a) != '\x01') {
    lVar1 = 0x840;
  }
  fVar33 = *(float *)(lVar32 + 0x848);
  if (*(char *)(lVar32 + 0x839) != '\0') {
    fVar33 = *(float *)PTR_FloatPi_047d2460 * param_1 + *(float *)PTR_FloatPi_047d2460 * param_1;
  }
  FUN_008d3fb0(*(undefined4 *)(lVar32 + lVar1),fVar33,lVar32 + 0x838,param_4 + 0xa8,&fStack_74,
               &local_78);
  if (*(char *)(lVar32 + 0x83a) != '\x01') {
    uVar2 = *(uint *)(param_4 + 0xac);
    *(uint *)(param_4 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
    fVar33 = (float)uVar2 * 2.3283064e-10;
    fVar33 = fVar33 + fVar33 + -1.0;
    uVar51 = SUB41(fVar33,0);
    uVar52 = (undefined1)((uint)fVar33 >> 8);
    uVar53 = (undefined1)((uint)fVar33 >> 0x10);
    uVar54 = (undefined1)((uint)fVar33 >> 0x18);
    fVar33 = fVar33 * fVar33;
    goto joined_r0x008d22dc;
  }
  fVar33 = *(float *)(lVar32 + 0x844);
  fVar34 = 0.5;
  if (fVar33 < 0.0) {
    fVar34 = -0.5;
  }
  fVar33 = fVar33 - *(float *)PTR_Float2Pi_047d23e8 *
                    (float)(int)(fVar34 + fVar33 * *(float *)PTR_Float1Divided2Pi_047d23d0);
  if (fVar33 <= *(float *)PTR_FloatPiDivided2_047d23f0) {
    if (fVar33 < -*(float *)PTR_FloatPiDivided2_047d23f0) {
      fVar34 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d2304;
    }
    fVar34 = 1.0;
  }
  else {
    fVar34 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d2304:
    fVar33 = fVar34 - fVar33;
    fVar34 = -1.0;
  }
  fVar33 = fVar33 * fVar33;
  fVar35 = *(float *)PTR_CosCoefficients_047d23e0;
  fVar36 = *(float *)(PTR_CosCoefficients_047d23e0 + 4);
  fVar37 = *(float *)(PTR_CosCoefficients_047d23e0 + 8);
  fVar43 = *(float *)(PTR_CosCoefficients_047d23e0 + 0xc);
  fVar38 = *(float *)(PTR_CosCoefficients_047d23e0 + 0x10);
  uVar2 = *(uint *)(param_4 + 0xac);
  *(uint *)(param_4 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
  fVar33 = (float)uVar2 * -2.3283064e-10 *
           (1.0 - fVar34 * (fVar33 * (fVar33 * (fVar43 + fVar33 * (fVar33 * (fVar36 - fVar35 * 
                                                  fVar33) - fVar37)) - fVar38) + 1.0)) + 1.0;
  uVar51 = SUB41(fVar33,0);
  uVar52 = (undefined1)((uint)fVar33 >> 8);
  uVar53 = (undefined1)((uint)fVar33 >> 0x10);
  uVar54 = (undefined1)((uint)fVar33 >> 0x18);
  fVar33 = fVar33 * fVar33;
joined_r0x008d22dc:
  fVar33 = 1.0 - fVar33;
  if (0.0 < fVar33) {
    fVar34 = SQRT(fVar33);
    if (NAN(fVar34)) {
      fVar34 = sqrtf(fVar33);
    }
  }
  else {
    fVar34 = 0.0;
  }
  fStack_74 = fVar34 * fStack_74;
  fVar34 = fVar34 * local_78;
  fVar33 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
  fVar35 = 0.0;
  if (*(char *)(lVar32 + 0x83a) == '\x01') {
    uVar59 = 0;
    uVar60 = 0;
    uVar61 = 0;
    uVar62 = 0;
    uVar63 = 0;
    uVar64 = 0;
    uVar65 = 0;
    uVar66 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = 0;
    uVar58 = 0;
    switch(*(undefined1 *)(lVar32 + 0x83e)) {
    case 0:
      uVar59 = (undefined1)DAT_03cab628;
      uVar60 = (undefined1)((ulong)DAT_03cab628 >> 8);
      uVar61 = (undefined1)((ulong)DAT_03cab628 >> 0x10);
      uVar62 = (undefined1)((ulong)DAT_03cab628 >> 0x18);
      uVar63 = (undefined1)((ulong)DAT_03cab628 >> 0x20);
      uVar64 = (undefined1)((ulong)DAT_03cab628 >> 0x28);
      uVar65 = (undefined1)((ulong)DAT_03cab628 >> 0x30);
      uVar66 = (undefined1)((ulong)DAT_03cab628 >> 0x38);
      uVar51 = (undefined1)DAT_03cab620;
      uVar52 = (undefined1)((ulong)DAT_03cab620 >> 8);
      uVar53 = (undefined1)((ulong)DAT_03cab620 >> 0x10);
      uVar54 = (undefined1)((ulong)DAT_03cab620 >> 0x18);
      uVar55 = (undefined1)((ulong)DAT_03cab620 >> 0x20);
      uVar56 = (undefined1)((ulong)DAT_03cab620 >> 0x28);
      uVar57 = (undefined1)((ulong)DAT_03cab620 >> 0x30);
      uVar58 = (undefined1)((ulong)DAT_03cab620 >> 0x38);
      fVar36 = (float)DAT_03cab628;
      break;
    case 1:
      uVar59 = (undefined1)_UNK_03caa708;
      uVar60 = (undefined1)((ulong)_UNK_03caa708 >> 8);
      uVar61 = (undefined1)((ulong)_UNK_03caa708 >> 0x10);
      uVar62 = (undefined1)((ulong)_UNK_03caa708 >> 0x18);
      uVar63 = (undefined1)((ulong)_UNK_03caa708 >> 0x20);
      uVar64 = (undefined1)((ulong)_UNK_03caa708 >> 0x28);
      uVar65 = (undefined1)((ulong)_UNK_03caa708 >> 0x30);
      uVar66 = (undefined1)((ulong)_UNK_03caa708 >> 0x38);
      uVar51 = (undefined1)_DAT_03caa700;
      uVar52 = (undefined1)((ulong)_DAT_03caa700 >> 8);
      uVar53 = (undefined1)((ulong)_DAT_03caa700 >> 0x10);
      uVar54 = (undefined1)((ulong)_DAT_03caa700 >> 0x18);
      uVar55 = (undefined1)((ulong)_DAT_03caa700 >> 0x20);
      uVar56 = (undefined1)((ulong)_DAT_03caa700 >> 0x28);
      uVar57 = (undefined1)((ulong)_DAT_03caa700 >> 0x30);
      uVar58 = (undefined1)((ulong)_DAT_03caa700 >> 0x38);
      fVar36 = (float)_UNK_03caa708;
      break;
    case 2:
      uVar59 = (undefined1)_UNK_03cabe68;
      uVar60 = (undefined1)((ulong)_UNK_03cabe68 >> 8);
      uVar61 = (undefined1)((ulong)_UNK_03cabe68 >> 0x10);
      uVar62 = (undefined1)((ulong)_UNK_03cabe68 >> 0x18);
      uVar63 = (undefined1)((ulong)_UNK_03cabe68 >> 0x20);
      uVar64 = (undefined1)((ulong)_UNK_03cabe68 >> 0x28);
      uVar65 = (undefined1)((ulong)_UNK_03cabe68 >> 0x30);
      uVar66 = (undefined1)((ulong)_UNK_03cabe68 >> 0x38);
      uVar51 = (undefined1)_DAT_03cabe60;
      uVar52 = (undefined1)((ulong)_DAT_03cabe60 >> 8);
      uVar53 = (undefined1)((ulong)_DAT_03cabe60 >> 0x10);
      uVar54 = (undefined1)((ulong)_DAT_03cabe60 >> 0x18);
      uVar55 = (undefined1)((ulong)_DAT_03cabe60 >> 0x20);
      uVar56 = (undefined1)((ulong)_DAT_03cabe60 >> 0x28);
      uVar57 = (undefined1)((ulong)_DAT_03cabe60 >> 0x30);
      uVar58 = (undefined1)((ulong)_DAT_03cabe60 >> 0x38);
      fVar36 = (float)_UNK_03cabe68;
      break;
    case 3:
      uVar59 = (undefined1)_UNK_03cabd18;
      uVar60 = (undefined1)((ulong)_UNK_03cabd18 >> 8);
      uVar61 = (undefined1)((ulong)_UNK_03cabd18 >> 0x10);
      uVar62 = (undefined1)((ulong)_UNK_03cabd18 >> 0x18);
      uVar63 = (undefined1)((ulong)_UNK_03cabd18 >> 0x20);
      uVar64 = (undefined1)((ulong)_UNK_03cabd18 >> 0x28);
      uVar65 = (undefined1)((ulong)_UNK_03cabd18 >> 0x30);
      uVar66 = (undefined1)((ulong)_UNK_03cabd18 >> 0x38);
      uVar51 = (undefined1)_DAT_03cabd10;
      uVar52 = (undefined1)((ulong)_DAT_03cabd10 >> 8);
      uVar53 = (undefined1)((ulong)_DAT_03cabd10 >> 0x10);
      uVar54 = (undefined1)((ulong)_DAT_03cabd10 >> 0x18);
      uVar55 = (undefined1)((ulong)_DAT_03cabd10 >> 0x20);
      uVar56 = (undefined1)((ulong)_DAT_03cabd10 >> 0x28);
      uVar57 = (undefined1)((ulong)_DAT_03cabd10 >> 0x30);
      uVar58 = (undefined1)((ulong)_DAT_03cabd10 >> 0x38);
      fVar36 = (float)_UNK_03cabd18;
      break;
    case 4:
      uVar59 = (undefined1)_UNK_03caa5b8;
      uVar60 = (undefined1)((ulong)_UNK_03caa5b8 >> 8);
      uVar61 = (undefined1)((ulong)_UNK_03caa5b8 >> 0x10);
      uVar62 = (undefined1)((ulong)_UNK_03caa5b8 >> 0x18);
      uVar63 = (undefined1)((ulong)_UNK_03caa5b8 >> 0x20);
      uVar64 = (undefined1)((ulong)_UNK_03caa5b8 >> 0x28);
      uVar65 = (undefined1)((ulong)_UNK_03caa5b8 >> 0x30);
      uVar66 = (undefined1)((ulong)_UNK_03caa5b8 >> 0x38);
      uVar51 = (undefined1)_DAT_03caa5b0;
      uVar52 = (undefined1)((ulong)_DAT_03caa5b0 >> 8);
      uVar53 = (undefined1)((ulong)_DAT_03caa5b0 >> 0x10);
      uVar54 = (undefined1)((ulong)_DAT_03caa5b0 >> 0x18);
      uVar55 = (undefined1)((ulong)_DAT_03caa5b0 >> 0x20);
      uVar56 = (undefined1)((ulong)_DAT_03caa5b0 >> 0x28);
      uVar57 = (undefined1)((ulong)_DAT_03caa5b0 >> 0x30);
      uVar58 = (undefined1)((ulong)_DAT_03caa5b0 >> 0x38);
    default:
      fVar36 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)));
      break;
    case 5:
      uVar59 = (undefined1)_UNK_03caa5c8;
      uVar60 = (undefined1)((ulong)_UNK_03caa5c8 >> 8);
      uVar61 = (undefined1)((ulong)_UNK_03caa5c8 >> 0x10);
      uVar62 = (undefined1)((ulong)_UNK_03caa5c8 >> 0x18);
      uVar63 = (undefined1)((ulong)_UNK_03caa5c8 >> 0x20);
      uVar64 = (undefined1)((ulong)_UNK_03caa5c8 >> 0x28);
      uVar65 = (undefined1)((ulong)_UNK_03caa5c8 >> 0x30);
      uVar66 = (undefined1)((ulong)_UNK_03caa5c8 >> 0x38);
      uVar51 = (undefined1)_DAT_03caa5c0;
      uVar52 = (undefined1)((ulong)_DAT_03caa5c0 >> 8);
      uVar53 = (undefined1)((ulong)_DAT_03caa5c0 >> 0x10);
      uVar54 = (undefined1)((ulong)_DAT_03caa5c0 >> 0x18);
      uVar55 = (undefined1)((ulong)_DAT_03caa5c0 >> 0x20);
      uVar56 = (undefined1)((ulong)_DAT_03caa5c0 >> 0x28);
      uVar57 = (undefined1)((ulong)_DAT_03caa5c0 >> 0x30);
      uVar58 = (undefined1)((ulong)_DAT_03caa5c0 >> 0x38);
      fVar36 = (float)_UNK_03caa5c8;
    }
    if (((fVar36 != 0.0) ||
        (NAN((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))) ||
         (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) != 0.0)) ||
       ((float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) != 1.0)) {
      auVar68._8_8_ = _UNK_03cabe68;
      auVar68._0_8_ = _DAT_03cabe60;
      uVar79 = a64_TBL(ZEXT816(0),auVar68,DAT_03cb56c8);
      uVar31 = a64_TBL(ZEXT816(0),auVar68,DAT_03cb54d8);
      auVar10[1] = uVar52;
      auVar10[0] = uVar51;
      auVar10[2] = uVar53;
      auVar10[3] = uVar54;
      auVar10[4] = uVar55;
      auVar10[5] = uVar56;
      auVar10[6] = uVar57;
      auVar10[7] = uVar58;
      auVar10[8] = uVar59;
      auVar10[9] = uVar60;
      auVar10[10] = uVar61;
      auVar10[0xb] = uVar62;
      auVar10[0xc] = uVar63;
      auVar10[0xd] = uVar64;
      auVar10[0xe] = uVar65;
      auVar10[0xf] = uVar66;
      uVar101 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb5488);
      auVar11[1] = uVar52;
      auVar11[0] = uVar51;
      auVar11[2] = uVar53;
      auVar11[3] = uVar54;
      auVar11[4] = uVar55;
      auVar11[5] = uVar56;
      auVar11[6] = uVar57;
      auVar11[7] = uVar58;
      auVar11[8] = uVar59;
      auVar11[9] = uVar60;
      auVar11[10] = uVar61;
      auVar11[0xb] = uVar62;
      auVar11[0xc] = uVar63;
      auVar11[0xd] = uVar64;
      auVar11[0xe] = uVar65;
      auVar11[0xf] = uVar66;
      uVar104 = a64_TBL(ZEXT816(0),auVar11,DAT_03cb54c0);
      uVar102 = a64_TBL(ZEXT816(0),auVar68,DAT_03cb54c0);
      auVar12[1] = uVar52;
      auVar12[0] = uVar51;
      auVar12[2] = uVar53;
      auVar12[3] = uVar54;
      auVar12[4] = uVar55;
      auVar12[5] = uVar56;
      auVar12[6] = uVar57;
      auVar12[7] = uVar58;
      auVar12[8] = uVar59;
      auVar12[9] = uVar60;
      auVar12[10] = uVar61;
      auVar12[0xb] = uVar62;
      auVar12[0xc] = uVar63;
      auVar12[0xd] = uVar64;
      auVar12[0xe] = uVar65;
      auVar12[0xf] = uVar66;
      uVar105 = a64_TBL(ZEXT816(0),auVar12,DAT_03cb54d8);
      uVar80 = a64_TBL(ZEXT816(0),auVar68,DAT_03cb5488);
      auVar13[1] = uVar52;
      auVar13[0] = uVar51;
      auVar13[2] = uVar53;
      auVar13[3] = uVar54;
      auVar13[4] = uVar55;
      auVar13[5] = uVar56;
      auVar13[6] = uVar57;
      auVar13[7] = uVar58;
      auVar13[8] = uVar59;
      auVar13[9] = uVar60;
      auVar13[10] = uVar61;
      auVar13[0xb] = uVar62;
      auVar13[0xc] = uVar63;
      auVar13[0xd] = uVar64;
      auVar13[0xe] = uVar65;
      auVar13[0xf] = uVar66;
      uVar103 = a64_TBL(ZEXT816(0),auVar13,DAT_03cb56c8);
      fVar35 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) *
               (float)_DAT_03cabe60;
      fVar36 = (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) *
               (float)((ulong)_DAT_03cabe60 >> 0x20);
      uVar51 = (undefined1)((uint)fVar36 >> 8);
      uVar52 = (undefined1)((uint)fVar36 >> 0x10);
      uVar53 = (undefined1)((uint)fVar36 >> 0x18);
      fVar37 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))) *
               (float)_UNK_03cabe68;
      uVar54 = (undefined1)((uint)fVar37 >> 8);
      uVar55 = (undefined1)((uint)fVar37 >> 0x10);
      uVar56 = (undefined1)((uint)fVar37 >> 0x18);
      fVar38 = (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63))) *
               (float)((ulong)_UNK_03cabe68 >> 0x20);
      uVar57 = (undefined1)((uint)fVar38 >> 8);
      uVar58 = (undefined1)((uint)fVar38 >> 0x10);
      uVar59 = (undefined1)((uint)fVar38 >> 0x18);
      auVar14[4] = SUB41(fVar36,0);
      auVar14._0_4_ = fVar35;
      auVar14[5] = uVar51;
      auVar14[6] = uVar52;
      auVar14[7] = uVar53;
      auVar14[8] = SUB41(fVar37,0);
      auVar14[9] = uVar54;
      auVar14[10] = uVar55;
      auVar14[0xb] = uVar56;
      auVar14[0xc] = SUB41(fVar38,0);
      auVar14[0xd] = uVar57;
      auVar14[0xe] = uVar58;
      auVar14[0xf] = uVar59;
      auVar15[4] = SUB41(fVar36,0);
      auVar15._0_4_ = fVar35;
      auVar15[5] = uVar51;
      auVar15[6] = uVar52;
      auVar15[7] = uVar53;
      auVar15[8] = SUB41(fVar37,0);
      auVar15[9] = uVar54;
      auVar15[10] = uVar55;
      auVar15[0xb] = uVar56;
      auVar15[0xc] = SUB41(fVar38,0);
      auVar15[0xd] = uVar57;
      auVar15[0xe] = uVar58;
      auVar15[0xf] = uVar59;
      auVar69 = NEON_ext(auVar14,auVar15,8,1);
      fVar35 = auVar69._0_4_ + fVar35;
      fVar36 = auVar69._4_4_ + fVar36;
      fVar43 = fVar35 + fVar36;
      fVar35 = fVar35 + fVar36;
      auVar69 = NEON_fmov(0x3f800000,4);
      fVar36 = fVar43 + auVar69._0_4_;
      fVar37 = fVar35 + auVar69._4_4_;
      fVar38 = fVar43 + auVar69._8_4_;
      fVar43 = (float)CONCAT13((char)((uint)fVar35 >> 0x18),
                               CONCAT12((char)((uint)fVar35 >> 0x10),
                                        (short)(CONCAT15((char)((uint)fVar35 >> 8),
                                                         CONCAT14(SUB41(fVar35,0),fVar43)) >> 0x20))
                              ) + auVar69._12_4_;
      auVar81._0_4_ =
           ((float)uVar79 * (float)uVar101 - (float)uVar80 * (float)uVar103) / SQRT(fVar36 + fVar36)
      ;
      auVar81._4_4_ =
           ((float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar101 >> 0x20) -
           (float)((ulong)uVar80 >> 0x20) * (float)((ulong)uVar103 >> 0x20)) / SQRT(fVar37 + fVar37)
      ;
      auVar81._8_4_ =
           ((float)uVar31 * (float)uVar104 - (float)uVar102 * (float)uVar105) /
           SQRT(fVar38 + fVar38);
      fVar35 = *(float *)PTR_FloatUlp_047d2510;
      iVar19 = -(uint)(fVar37 <= fVar35);
      iVar20 = -(uint)(fVar38 <= fVar35);
      iVar21 = -(uint)(fVar43 <= fVar35);
      auVar81._12_4_ = SQRT(fVar43 + fVar43) * 0.5;
      auVar70._8_8_ = DAT_03cab628;
      auVar70._0_8_ = DAT_03cab620;
      auVar16[4] = (char)iVar19;
      auVar16._0_4_ = -(uint)(fVar36 <= fVar35);
      auVar16[5] = (char)((uint)iVar19 >> 8);
      auVar16[6] = (char)((uint)iVar19 >> 0x10);
      auVar16[7] = (char)((uint)iVar19 >> 0x18);
      auVar16[8] = (char)iVar20;
      auVar16[9] = (char)((uint)iVar20 >> 8);
      auVar16[10] = (char)((uint)iVar20 >> 0x10);
      auVar16[0xb] = (char)((uint)iVar20 >> 0x18);
      auVar16[0xc] = (char)iVar21;
      auVar16[0xd] = (char)((uint)iVar21 >> 8);
      auVar16[0xe] = (char)((uint)iVar21 >> 0x10);
      auVar16[0xf] = (char)((uint)iVar21 >> 0x18);
      auVar81 = auVar81 ^ (auVar81 ^ auVar70) & auVar16;
      bVar85 = auVar81[0] & (byte)_DAT_03cab390;
      bVar86 = auVar81[1] & (byte)((ulong)_DAT_03cab390 >> 8);
      bVar87 = auVar81[2] & (byte)((ulong)_DAT_03cab390 >> 0x10);
      bVar88 = auVar81[3] & (byte)((ulong)_DAT_03cab390 >> 0x18);
      bVar89 = auVar81[4] & (byte)((ulong)_DAT_03cab390 >> 0x20);
      bVar90 = auVar81[5] & (byte)((ulong)_DAT_03cab390 >> 0x28);
      bVar91 = auVar81[6] & (byte)((ulong)_DAT_03cab390 >> 0x30);
      bVar92 = auVar81[7] & (byte)((ulong)_DAT_03cab390 >> 0x38);
      bVar93 = auVar81[8] & (byte)_UNK_03cab398;
      bVar94 = auVar81[9] & (byte)((ulong)_UNK_03cab398 >> 8);
      bVar95 = auVar81[10] & (byte)((ulong)_UNK_03cab398 >> 0x10);
      bVar96 = auVar81[0xb] & (byte)((ulong)_UNK_03cab398 >> 0x18);
      bVar97 = auVar81[0xc] & (byte)((ulong)_UNK_03cab398 >> 0x20);
      bVar98 = auVar81[0xd] & (byte)((ulong)_UNK_03cab398 >> 0x28);
      bVar99 = auVar81[0xe] & (byte)((ulong)_UNK_03cab398 >> 0x30);
      bVar100 = auVar81[0xf] & (byte)((ulong)_UNK_03cab398 >> 0x38);
      auVar26[1] = bVar86;
      auVar26[0] = bVar85;
      auVar26[2] = bVar87;
      auVar26[3] = bVar88;
      auVar26[4] = bVar89;
      auVar26[5] = bVar90;
      auVar26[6] = bVar91;
      auVar26[7] = bVar92;
      auVar26[8] = bVar93;
      auVar26[9] = bVar94;
      auVar26[10] = bVar95;
      auVar26[0xb] = bVar96;
      auVar26[0xc] = bVar97;
      auVar26[0xd] = bVar98;
      auVar26[0xe] = bVar99;
      auVar26[0xf] = bVar100;
      uVar31 = a64_TBL(ZEXT816(0),auVar26,DAT_03cb54d8);
      fVar83 = (float)uVar31;
      fVar84 = (float)((ulong)uVar31 >> 0x20);
      uVar79 = NEON_rev64(CONCAT17(bVar92,CONCAT16(bVar91,CONCAT15(bVar90,CONCAT14(bVar89,CONCAT13(
                                                  bVar88,CONCAT12(bVar87,CONCAT11(bVar86,bVar85)))))
                                                  )),4);
      auVar27[1] = bVar86;
      auVar27[0] = bVar85;
      auVar27[2] = bVar87;
      auVar27[3] = bVar88;
      auVar27[4] = bVar89;
      auVar27[5] = bVar90;
      auVar27[6] = bVar91;
      auVar27[7] = bVar92;
      auVar27[8] = bVar93;
      auVar27[9] = bVar94;
      auVar27[10] = bVar95;
      auVar27[0xb] = bVar96;
      auVar27[0xc] = bVar97;
      auVar27[0xd] = bVar98;
      auVar27[0xe] = bVar99;
      auVar27[0xf] = bVar100;
      uVar101 = a64_TBL(ZEXT816(0),auVar27,DAT_03cb53e8);
      auVar28[1] = bVar86;
      auVar28[0] = bVar85;
      auVar28[2] = bVar87;
      auVar28[3] = bVar88;
      auVar28[4] = bVar89;
      auVar28[5] = bVar90;
      auVar28[6] = bVar91;
      auVar28[7] = bVar92;
      auVar28[8] = bVar93;
      auVar28[9] = bVar94;
      auVar28[10] = bVar95;
      auVar28[0xb] = bVar96;
      auVar28[0xc] = bVar97;
      auVar28[0xd] = bVar98;
      auVar28[0xe] = bVar99;
      auVar28[0xf] = bVar100;
      uVar102 = a64_TBL(ZEXT816(0),auVar28,DAT_03cb54c0);
      auVar29[1] = bVar86;
      auVar29[0] = bVar85;
      auVar29[2] = bVar87;
      auVar29[3] = bVar88;
      auVar29[4] = bVar89;
      auVar29[5] = bVar90;
      auVar29[6] = bVar91;
      auVar29[7] = bVar92;
      auVar29[8] = bVar93;
      auVar29[9] = bVar94;
      auVar29[10] = bVar95;
      auVar29[0xb] = bVar96;
      auVar29[0xc] = bVar97;
      auVar29[0xd] = bVar98;
      auVar29[0xe] = bVar99;
      auVar29[0xf] = bVar100;
      uVar31 = a64_TBL(ZEXT816(0),auVar29,DAT_03cb56c8);
      auVar30[1] = bVar86;
      auVar30[0] = bVar85;
      auVar30[2] = bVar87;
      auVar30[3] = bVar88;
      auVar30[4] = bVar89;
      auVar30[5] = bVar90;
      auVar30[6] = bVar91;
      auVar30[7] = bVar92;
      auVar30[8] = bVar93;
      auVar30[9] = bVar94;
      auVar30[10] = bVar95;
      auVar30[0xb] = bVar96;
      auVar30[0xc] = bVar97;
      auVar30[0xd] = bVar98;
      auVar30[0xe] = bVar99;
      auVar30[0xf] = bVar100;
      uVar80 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb5488);
      fVar45 = (float)uVar102;
      fVar48 = (float)((ulong)uVar102 >> 0x20);
      fVar36 = (float)uVar79 * (float)uVar79;
      fVar35 = (float)((ulong)uVar79 >> 0x20);
      fVar35 = fVar35 * fVar35;
      fVar67 = (float)uVar101 * (float)uVar101;
      fVar72 = (float)((ulong)uVar101 >> 0x20);
      fVar72 = fVar72 * fVar72;
      fVar38 = (float)uVar31 * (float)CONCAT13(bVar88,CONCAT12(bVar87,CONCAT11(bVar86,bVar85)));
      fVar43 = (float)((ulong)uVar31 >> 0x20) *
               (float)CONCAT13(bVar92,CONCAT12(bVar91,CONCAT11(bVar90,bVar89)));
      fVar40 = fVar83 * (float)CONCAT13(bVar96,CONCAT12(bVar95,CONCAT11(bVar94,bVar93)));
      fVar41 = fVar84 * (float)CONCAT13(bVar100,CONCAT12(bVar99,CONCAT11(bVar98,bVar97)));
      fVar49 = auVar81._12_4_;
      fVar37 = (float)uVar80 * fVar49;
      fVar44 = (float)((ulong)uVar80 >> 0x20) * fVar49;
      fVar38 = fVar38 + fVar38;
      fVar43 = fVar43 + fVar43;
      fVar40 = fVar40 + fVar40;
      fVar41 = fVar41 + fVar41;
      fVar37 = fVar37 + fVar37;
      fVar44 = fVar44 + fVar44;
      fVar46 = fVar45 * fVar49 + fVar45 * fVar49;
      fVar49 = fVar48 * fVar49 + fVar48 * fVar49;
      auVar82._0_4_ = fVar37 + fVar38;
      auVar82._4_4_ = fVar44 + fVar43;
      auVar82._8_4_ = fVar46 + fVar40;
      auVar82._12_4_ = fVar49 + fVar41;
      fVar38 = fVar38 - fVar37;
      fVar43 = fVar43 - fVar44;
      fVar40 = fVar40 - fVar46;
      fVar41 = fVar41 - fVar49;
      fVar36 = (float)_DAT_03caa980 - (fVar67 + fVar67 + fVar36 + fVar36);
      fVar35 = (float)((ulong)_DAT_03caa980 >> 0x20) - (fVar72 + fVar72 + fVar35 + fVar35);
      uVar51 = SUB41(fVar35,0);
      uVar52 = (undefined1)((uint)fVar35 >> 8);
      uVar53 = (undefined1)((uint)fVar35 >> 0x10);
      uVar54 = (undefined1)((uint)fVar35 >> 0x18);
      fVar35 = (float)_UNK_03caa988 -
               (fVar45 * fVar45 + fVar45 * fVar45 + fVar83 * fVar83 + fVar83 * fVar83);
      uVar55 = (undefined1)((uint)fVar35 >> 8);
      uVar56 = (undefined1)((uint)fVar35 >> 0x10);
      uVar57 = (undefined1)((uint)fVar35 >> 0x18);
      fVar37 = (float)((ulong)_UNK_03caa988 >> 0x20) -
               (fVar48 * fVar48 + fVar48 * fVar48 + fVar84 * fVar84 + fVar84 * fVar84);
      uVar58 = SUB41(fVar37,0);
      uVar59 = (undefined1)((uint)fVar37 >> 8);
      uVar60 = (undefined1)((uint)fVar37 >> 0x10);
      uVar61 = (undefined1)((uint)fVar37 >> 0x18);
      auVar22._4_4_ = fVar43;
      auVar22._0_4_ = fVar38;
      auVar22._8_4_ = fVar40;
      auVar22._12_4_ = fVar41;
      auVar71._0_8_ = a64_TBL(ZEXT816(0),auVar82,auVar22,DAT_03cb5588);
      auVar23._4_4_ = fVar43;
      auVar23._0_4_ = fVar38;
      auVar23._8_4_ = fVar40;
      auVar23._12_4_ = fVar41;
      uVar31 = a64_TBL(ZEXT816(0),auVar82,auVar23,DAT_03cb5518);
      auVar71._8_8_ = uVar31;
      auVar24._4_4_ = fVar43;
      auVar24._0_4_ = fVar38;
      auVar24._8_4_ = fVar40;
      auVar24._12_4_ = fVar41;
      uVar31 = a64_TBL(ZEXT816(0),auVar82,auVar24,DAT_03cb56f0);
      auVar25._4_4_ = fVar43;
      auVar25._0_4_ = fVar38;
      auVar25._8_4_ = fVar40;
      auVar25._12_4_ = fVar41;
      uVar80 = a64_TBL(ZEXT816(0),auVar82,auVar25,DAT_03cb53f0);
      uVar47 = (undefined4)uVar80;
      uVar50 = (undefined4)((ulong)uVar80 >> 0x20);
      uVar42 = (undefined4)
               (CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar59,CONCAT14(uVar58,fVar35)))) >> 0x20);
      uVar39 = (undefined4)
               (CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar51,fVar36)))) >> 0x20);
      auVar69._4_4_ = uVar39;
      auVar69._0_4_ = fVar36;
      auVar69._8_4_ = fVar35;
      auVar69._12_4_ = uVar42;
      auVar6._8_4_ = uVar47;
      auVar6._0_8_ = uVar31;
      auVar6._12_4_ = uVar50;
      uVar101 = a64_TBL(ZEXT816(0),auVar69,auVar6,DAT_03cb5438);
      auVar3._4_4_ = uVar39;
      auVar3._0_4_ = fVar36;
      auVar3._8_4_ = fVar35;
      auVar3._12_4_ = uVar42;
      auVar7._8_4_ = uVar47;
      auVar7._0_8_ = uVar31;
      auVar7._12_4_ = uVar50;
      uVar80 = a64_TBL(ZEXT816(0),auVar3,auVar7,DAT_03cb5608);
      auVar4._4_4_ = uVar39;
      auVar4._0_4_ = fVar36;
      auVar4._8_4_ = fVar35;
      auVar4._12_4_ = uVar42;
      auVar8._8_4_ = uVar47;
      auVar8._0_8_ = uVar31;
      auVar8._12_4_ = uVar50;
      uVar79 = a64_TBL(ZEXT816(0),auVar4,auVar8,DAT_03cb53c8);
      auVar5._4_4_ = uVar39;
      auVar5._0_4_ = fVar36;
      auVar5._8_4_ = fVar35;
      auVar5._12_4_ = uVar42;
      auVar9._8_4_ = uVar47;
      auVar9._0_8_ = uVar31;
      auVar9._12_4_ = uVar50;
      uVar31 = a64_TBL(ZEXT816(0),auVar5,auVar9,DAT_03cb53a8);
      fVar43 = (float)((ulong)uVar101 >> 0x20) * fStack_74;
      fVar40 = (float)uVar80 * fStack_74;
      fVar41 = (float)((ulong)uVar80 >> 0x20) * fStack_74;
      fVar37 = (float)uVar31 * fVar33;
      fVar38 = (float)((ulong)uVar31 >> 0x20) * fVar33;
      auVar17[4] = uVar51;
      auVar17._0_4_ = fVar36;
      auVar17[5] = uVar52;
      auVar17[6] = uVar53;
      auVar17[7] = uVar54;
      auVar17[8] = SUB41(fVar35,0);
      auVar17[9] = uVar55;
      auVar17[10] = uVar56;
      auVar17[0xb] = uVar57;
      auVar17[0xc] = uVar58;
      auVar17[0xd] = uVar59;
      auVar17[0xe] = uVar60;
      auVar17[0xf] = uVar61;
      uVar31 = a64_TBL(ZEXT816(0),auVar17,auVar71,DAT_03cb5458);
      auVar18[4] = uVar51;
      auVar18._0_4_ = fVar36;
      auVar18[5] = uVar52;
      auVar18[6] = uVar53;
      auVar18[7] = uVar54;
      auVar18[8] = SUB41(fVar35,0);
      auVar18[9] = uVar55;
      auVar18[10] = uVar56;
      auVar18[0xb] = uVar57;
      auVar18[0xc] = uVar58;
      auVar18[0xd] = uVar59;
      auVar18[0xe] = uVar60;
      auVar18[0xf] = uVar61;
      uVar80 = a64_TBL(ZEXT816(0),auVar18,auVar71,DAT_03cb53b0);
      fVar35 = (float)((ulong)uVar80 >> 0x20) * fVar34;
      fStack_74 = (float)uVar101 * fStack_74 + (float)uVar79 * fVar33 + (float)uVar31 * fVar34 + 0.0
      ;
      fVar33 = fVar43 + (float)((ulong)uVar79 >> 0x20) * fVar33 +
               (float)((ulong)uVar31 >> 0x20) * fVar34 + 0.0;
      fVar34 = fVar40 + fVar37 + (float)uVar80 * fVar34 + 0.0;
      fVar35 = fVar41 + fVar38 + fVar35 + 0.0;
    }
  }
  param_2[1] = CONCAT44(fVar35 * 0.0,fVar74 * fVar76 * fVar34);
  *param_2 = CONCAT44(fVar73 * fVar75 * fVar33,fVar77 * fVar78 * fStack_74);
  fVar73 = *(float *)(param_7 + 0x6c);
  param_3[1] = CONCAT44(fVar35 * fVar73,fVar34 * fVar73);
  *param_3 = CONCAT44(fVar33 * fVar73,fStack_74 * fVar73);
  return 1;
}


