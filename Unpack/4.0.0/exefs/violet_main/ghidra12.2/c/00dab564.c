/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dab564; name: FUN_00dab564
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dab564(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  int *piVar7;
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
  undefined1 *puVar20;
  char *pcVar21;
  float *pfVar22;
  char *pcVar23;
  undefined1 auVar24 [12];
  bool bVar25;
  char cVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  uint uVar44;
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  int iVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar57;
  int iVar59;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar60;
  undefined1 auVar52 [16];
  uint uVar56;
  uint uVar58;
  uint uVar61;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar62;
  float fVar63;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar70;
  undefined1 auVar66 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar81;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined8 uVar82;
  undefined1 auVar83 [16];
  float fVar85;
  undefined1 auVar84 [16];
  undefined8 uVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined8 uVar90;
  float fVar93;
  undefined1 auVar91 [16];
  float fVar94;
  undefined1 auVar92 [16];
  float fVar95;
  undefined8 uVar96;
  float fVar99;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  float fVar116;
  undefined8 uVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined8 uVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  float fVar127;
  float fVar128;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined8 uVar129;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  
  if ((param_3 & 1) == 0) {
    lVar27 = FUN_00da75d8();
  }
  else {
    lVar27 = FUN_00d3ccd4();
  }
  lVar28 = FUN_00e06b88(param_1);
  if (lVar27 == 0) {
    return;
  }
  if (lVar28 == 0) {
    return;
  }
  bVar25 = (param_3 & 1) == 0;
  lVar2 = 0x224;
  if (bVar25) {
    lVar2 = 0x1e8;
  }
  lVar3 = 0x225;
  if (bVar25) {
    lVar3 = 0x1e9;
  }
  lVar4 = 0x226;
  if (bVar25) {
    lVar4 = 0x1ea;
  }
  lVar5 = 0x227;
  pfVar6 = (float *)(param_1 + 0x230);
  puVar20 = (undefined1 *)(param_1 + 0x228);
  pcVar21 = (char *)(param_1 + 0x227);
  if (bVar25) {
    lVar5 = 0x1eb;
    pfVar6 = (float *)(param_1 + 0x200);
    puVar20 = (undefined1 *)(param_1 + 0x1ec);
    pcVar21 = (char *)(param_1 + 0x1eb);
  }
  *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(param_1 + lVar3);
  *(undefined1 *)(param_1 + lVar4) = *(undefined1 *)(param_1 + lVar5);
  *(undefined1 *)(param_1 + lVar3) = 0;
  *(undefined1 *)(param_1 + lVar5) = 0;
  *(undefined8 *)(lVar27 + 0x500) = *(undefined8 *)(lVar27 + 0xf0);
  *(undefined8 *)(lVar27 + 0x4c0) = *(undefined8 *)(lVar27 + 0xe0);
  *(undefined8 *)(lVar27 + 0x4c8) = *(undefined8 *)(lVar27 + 0xe8);
  *(undefined8 *)(lVar27 + 0x508) = *(undefined8 *)(lVar27 + 0xf8);
  *(undefined8 *)(lVar27 + 0x4e0) = *(undefined8 *)(lVar27 + 0x120);
  *(undefined8 *)(lVar27 + 0x4e8) = *(undefined8 *)(lVar27 + 0x128);
  piVar7 = (int *)(param_1 + 0x250);
  pfVar22 = (float *)(param_1 + 0x240);
  pcVar23 = (char *)(param_1 + 0x225);
  if (bVar25) {
    piVar7 = (int *)(param_1 + 0x220);
    pfVar22 = (float *)(param_1 + 0x210);
    pcVar23 = (char *)(param_1 + 0x1e9);
  }
  if (*(char *)(lVar27 + 0x140) == '\0') {
    *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(lVar27 + 0x4c8);
    *(undefined8 *)pfVar6 = *(undefined8 *)(lVar27 + 0x4c0);
    uVar117 = *(undefined8 *)(lVar27 + 0x4c8);
    *(undefined8 *)(pfVar22 + 2) = uVar117;
    uVar30 = *(undefined8 *)(lVar27 + 0x4c0);
    *(undefined8 *)pfVar22 = uVar30;
    *(undefined8 *)(lVar27 + 0x4d8) = uVar117;
    *(undefined8 *)(lVar27 + 0x4d0) = uVar30;
    *(undefined8 *)(lVar27 + 0x518) = *(undefined8 *)(lVar27 + 0x508);
    *(undefined8 *)(lVar27 + 0x510) = *(undefined8 *)(lVar27 + 0x500);
    *(undefined8 *)(lVar27 + 0x4f8) = *(undefined8 *)(lVar27 + 0x4e8);
    *(undefined8 *)(lVar27 + 0x4f0) = *(undefined8 *)(lVar27 + 0x4e0);
    return;
  }
  auVar48 = FUN_01f8c150(lVar27 + 0x150);
  auVar49 = FUN_01f8c150(lVar27 + 0x1e0);
  iVar62 = -(uint)(*(int *)(lVar27 + 0x470) == 2);
  auVar64._0_8_ = CONCAT44(iVar62,iVar62);
  auVar64._8_4_ = iVar62;
  auVar64._12_4_ = iVar62;
  auVar83._8_8_ = auVar64._8_8_;
  auVar83._0_8_ = auVar64._0_8_;
  auVar49 = auVar49 ^ (auVar49 ^ auVar48) & auVar83;
  pauVar1 = (undefined1 (*) [16])(lVar27 + 0x4c0);
  auVar36 = *pauVar1;
  auVar74 = *pauVar1;
  auVar83 = *pauVar1;
  auVar64 = *pauVar1;
  fVar76 = *(float *)*pauVar1 - auVar49._0_4_;
  fVar43 = auVar49._4_4_;
  fVar81 = *(float *)(lVar27 + 0x4c4) - fVar43;
  auVar88._0_8_ = CONCAT44(fVar81,fVar76);
  fVar60 = auVar49._8_4_;
  auVar88._8_4_ = *(float *)(lVar27 + 0x4c8) - fVar60;
  fVar85 = auVar49._12_4_;
  auVar88._12_4_ = *(float *)(lVar27 + 0x4cc) - fVar85;
  auVar48._0_8_ = CONCAT44(fVar81 * fVar81,fVar76 * fVar76);
  auVar48._8_4_ = auVar88._8_4_ * auVar88._8_4_;
  auVar48._12_4_ = auVar88._12_4_ * auVar88._12_4_;
  fVar76 = auVar48._8_4_ + fVar76 * fVar76 + fVar81 * fVar81;
  fVar81 = SQRT(fVar76);
  if (NAN(fVar81)) {
    fVar81 = sqrtf(fVar76);
    auVar48._8_8_ = auVar48._8_8_;
    auVar88._8_8_ = auVar88._8_8_;
  }
  fVar76 = fVar81;
  if (fVar81 <= 1.1920929e-07) {
    fVar43 = 1.0;
    auVar74 = ZEXT816(0);
  }
  else {
    auVar72._0_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar72._4_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar72._8_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar72._12_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar48 = NEON_ext(auVar72,auVar72,4,1);
    auVar31._0_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar31._4_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar31._8_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar31._12_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar48 = NEON_frsqrte(auVar31,4);
    local_88 = 0x9b4f449bbb69c14f;
    pcStack_80 = "collision";
    auVar71._0_4_ = auVar31._0_4_ * auVar48._0_4_;
    auVar71._4_4_ = auVar31._4_4_ * auVar48._4_4_;
    auVar71._8_4_ = auVar31._8_4_ * auVar48._8_4_;
    auVar71._12_4_ = auVar31._12_4_ * auVar48._12_4_;
    auVar72 = NEON_frsqrts(auVar48,auVar71,4);
    auVar65._0_4_ = auVar48._0_4_ * auVar72._0_4_;
    auVar65._4_4_ = auVar48._4_4_ * auVar72._4_4_;
    auVar65._8_4_ = auVar48._8_4_ * auVar72._8_4_;
    auVar65._12_4_ = auVar48._12_4_ * auVar72._12_4_;
    local_78 = 9;
    local_70 = (long *)0x0;
    auVar73._0_4_ = auVar31._0_4_ * auVar65._0_4_;
    auVar73._4_4_ = auVar31._4_4_ * auVar65._4_4_;
    auVar73._8_4_ = auVar31._8_4_ * auVar65._8_4_;
    auVar73._12_4_ = auVar31._12_4_ * auVar65._12_4_;
    iVar62 = -(uint)(auVar31._0_4_ == 0.0);
    iVar55 = -(uint)(auVar31._4_4_ == 0.0);
    iVar57 = -(uint)(auVar31._8_4_ == 0.0);
    iVar59 = -(uint)(auVar31._12_4_ == 0.0);
    auVar48 = NEON_frsqrts(auVar65,auVar73,4);
    local_a8 = 0xe86a3897de1e64db;
    pcStack_a0 = "distanceLimitMin";
    local_98 = 0x10;
    local_90 = (long *)0x0;
    fVar63 = auVar88._0_4_ * auVar65._0_4_ * auVar48._0_4_;
    fVar67 = auVar88._4_4_ * auVar65._4_4_ * auVar48._4_4_;
    fVar68 = auVar88._8_4_ * auVar65._8_4_ * auVar48._8_4_;
    fVar70 = auVar88._12_4_ * auVar65._12_4_ * auVar48._12_4_;
    fVar63 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                             CONCAT12((byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                      CONCAT11((byte)((uint)fVar63 >> 8) &
                                               ~(byte)((uint)iVar62 >> 8),
                                               SUB41(fVar63,0) & ~(byte)iVar62)));
    auVar45._0_8_ =
         CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                  CONCAT16((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                           CONCAT15((byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                    CONCAT14(SUB41(fVar67,0) & ~(byte)iVar55,fVar63))));
    auVar45[8] = SUB41(fVar68,0) & ~(byte)iVar57;
    auVar45[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar57 >> 8);
    auVar45[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    auVar45[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    auVar50[0xc] = SUB41(fVar70,0) & ~(byte)iVar59;
    auVar50._0_12_ = auVar45;
    auVar50[0xd] = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar59 >> 8);
    auVar50[0xe] = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    auVar50[0xf] = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    fVar67 = (float)FUN_00e06d80(lVar28,&local_88,&local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    auVar51._0_8_ = CONCAT44((float)((ulong)auVar45._0_8_ >> 0x20) * fVar67,fVar63 * fVar67);
    auVar51._8_4_ = auVar45._8_4_ * fVar67;
    auVar51._12_4_ = auVar50._12_4_ * fVar67;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
      auVar51._8_8_ = auVar51._8_8_;
    }
    auVar49._0_4_ = auVar49._0_4_ + auVar51._0_4_;
    auVar49._4_4_ = fVar43 + auVar51._4_4_;
    auVar49._8_4_ = fVar60 + auVar51._8_4_;
    auVar49._12_4_ = fVar85 + auVar51._12_4_;
    iVar62 = *(int *)(param_1 + 0x168);
    lVar2 = param_1 + 0x150;
    if (iVar62 == 2) {
      uVar29 = FUN_00da94c4(auVar49,auVar83,lVar2,0x60042);
      if ((uVar29 & 0xff) != 0) {
        *pcVar23 = '\x01';
        fVar76 = (float)(uVar29 >> 0x20);
        *pcVar21 = '\x01';
        cVar26 = FUN_00dab408(auVar49,auVar74,lVar2,0x60042);
        if (cVar26 != '\0') {
          *pcVar21 = '\0';
        }
      }
    }
    else {
      if (iVar62 == 1) {
        uVar29 = FUN_00dab408(auVar49,auVar36,lVar2,0x60042);
      }
      else {
        if (iVar62 != 0) goto LAB_00dab940;
        uVar29 = FUN_00dab388(auVar49,auVar64,lVar2,0x60042);
      }
      if ((uVar29 & 0xff) != 0) {
        *pcVar23 = '\x01';
        fVar76 = (float)(uVar29 >> 0x20);
      }
    }
LAB_00dab940:
    auVar74._8_8_ = auVar50._8_8_;
    auVar74._0_8_ = auVar45._0_8_;
    fVar43 = fVar76 / fVar81;
  }
  if ((param_3 & 1) == 0) {
    if (*(char *)(param_1 + 0x1e9) == '\0') {
      if (*(char *)(param_1 + 0x1e8) == '\0') {
        iVar62 = *(int *)(param_1 + 0x220);
        goto LAB_00dab994;
      }
    }
    else if (*(char *)(param_1 + 0x1eb) == '\0') {
      cVar26 = *(char *)(param_1 + 0x1ea);
      goto LAB_00dac16c;
    }
LAB_00dac120:
    iVar62 = 2;
  }
  else if (*(char *)(param_1 + 0x225) == '\0') {
    if (*(char *)(param_1 + 0x224) != '\0') goto LAB_00dac120;
    iVar62 = *(int *)(param_1 + 0x250);
  }
  else {
    if (*(char *)(param_1 + 0x227) != '\0') goto LAB_00dac120;
    cVar26 = *(char *)(param_1 + 0x226);
LAB_00dac16c:
    iVar62 = 1;
    if (cVar26 != '\0') {
      iVar62 = 2;
    }
  }
LAB_00dab994:
  *piVar7 = iVar62;
  fVar60 = auVar49._0_4_;
  fVar85 = auVar49._4_4_;
  fVar63 = auVar49._8_4_;
  fVar67 = auVar49._12_4_;
  pfVar6[2] = fVar63 + auVar74._8_4_ * fVar76;
  pfVar6[3] = fVar67 + auVar74._12_4_ * fVar76;
  *pfVar6 = fVar60 + auVar74._0_4_ * fVar76;
  pfVar6[1] = fVar85 + auVar74._4_4_ * fVar76;
  *(float *)(puVar20 + 4) = fVar76;
  *puVar20 = 1;
  if (*piVar7 == 2) {
    fVar76 = *pfVar6 - *pfVar22;
    fVar43 = pfVar6[1] - pfVar22[1];
    fVar68 = pfVar6[2] - pfVar22[2];
    fVar70 = pfVar6[3] - pfVar22[3];
    fVar121 = fVar76 * fVar76;
    fVar77 = fVar43 * fVar43;
    fVar69 = fVar68 * fVar68;
    fVar78 = fVar69 + fVar121 + fVar77;
    if (fVar78 <= 1.1920929e-07) {
      uVar30 = *(undefined8 *)(pfVar6 + 2);
      *(undefined8 *)pfVar22 = *(undefined8 *)pfVar6;
      *(undefined8 *)(pfVar22 + 2) = uVar30;
      *(undefined8 *)(lVar27 + 0x4d8) = *(undefined8 *)(pfVar6 + 2);
      *(undefined8 *)(lVar27 + 0x4d0) = *(undefined8 *)pfVar6;
      *piVar7 = 0;
    }
    else {
      auVar36._0_4_ = fVar121 + fVar77;
      auVar36._4_4_ = fVar69 + fVar70 * fVar70;
      auVar36._8_4_ = fVar121 + fVar77;
      auVar36._12_4_ = fVar69 + fVar70 * fVar70;
      auVar48 = NEON_ext(auVar36,auVar36,4,1);
      auVar37._0_4_ = auVar48._0_4_ + auVar48._4_4_;
      auVar37._4_4_ = auVar48._8_4_ + auVar48._12_4_;
      auVar37._8_4_ = auVar48._0_4_ + auVar48._4_4_;
      auVar37._12_4_ = auVar48._8_4_ + auVar48._12_4_;
      auVar48 = NEON_frsqrte(auVar37,4);
      auVar79._0_4_ = auVar37._0_4_ * auVar48._0_4_;
      auVar79._4_4_ = auVar37._4_4_ * auVar48._4_4_;
      auVar79._8_4_ = auVar37._8_4_ * auVar48._8_4_;
      auVar79._12_4_ = auVar37._12_4_ * auVar48._12_4_;
      local_88 = 0x9b4f449bbb69c14f;
      pcStack_80 = "collision";
      local_78 = 9;
      local_70 = (long *)0x0;
      auVar88 = NEON_frsqrts(auVar48,auVar79,4);
      local_a8 = 0x55b0f929c298199e;
      pcStack_a0 = "resolveSpeed";
      local_98 = 0xc;
      local_90 = (long *)0x0;
      auVar75._0_4_ = auVar48._0_4_ * auVar88._0_4_;
      auVar75._4_4_ = auVar48._4_4_ * auVar88._4_4_;
      auVar75._8_4_ = auVar48._8_4_ * auVar88._8_4_;
      auVar75._12_4_ = auVar48._12_4_ * auVar88._12_4_;
      auVar80._0_4_ = auVar37._0_4_ * auVar75._0_4_;
      auVar80._4_4_ = auVar37._4_4_ * auVar75._4_4_;
      auVar80._8_4_ = auVar37._8_4_ * auVar75._8_4_;
      auVar80._12_4_ = auVar37._12_4_ * auVar75._12_4_;
      iVar62 = -(uint)(auVar37._0_4_ == 0.0);
      iVar55 = -(uint)(auVar37._4_4_ == 0.0);
      iVar57 = -(uint)(auVar37._8_4_ == 0.0);
      iVar59 = -(uint)(auVar37._12_4_ == 0.0);
      auVar48 = NEON_frsqrts(auVar75,auVar80,4);
      fVar76 = fVar76 * auVar75._0_4_ * auVar48._0_4_;
      fVar43 = fVar43 * auVar75._4_4_ * auVar48._4_4_;
      fVar68 = fVar68 * auVar75._8_4_ * auVar48._8_4_;
      fVar70 = fVar70 * auVar75._12_4_ * auVar48._12_4_;
      fVar121 = (float)FUN_00e06d80(lVar28,&local_88,&local_a8);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      auVar53[0xc] = SUB41(fVar70,0) & ~(byte)iVar59;
      auVar53[0xd] = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar59 >> 8);
      auVar53[0xe] = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
      auVar53[0xf] = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      fVar76 = (float)CONCAT13((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                               CONCAT12((byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar76 >> 8) &
                                                  ~(byte)((uint)iVar62 >> 8),
                                                  SUB41(fVar76,0) & ~(byte)iVar62)));
      uVar30 = CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                        CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                                 CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                          CONCAT14(SUB41(fVar43,0) & ~(byte)iVar55,fVar76))));
      auVar24[8] = SUB41(fVar68,0) & ~(byte)iVar57;
      auVar24._0_8_ = uVar30;
      auVar24[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar57 >> 8);
      auVar24[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
      auVar24[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
      auVar53._0_12_ = auVar24;
      lVar28 = (*(code *)**(undefined8 **)*param_2)
                         ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x114));
      fVar43 = (float)((double)*(long *)(lVar28 + 8) / 1000000000.0);
      fVar76 = fVar76 * fVar121 * fVar43;
      fVar68 = (float)((ulong)uVar30 >> 0x20) * fVar121 * fVar43;
      fVar70 = auVar24._8_4_ * fVar121 * fVar43;
      if (fVar70 * fVar70 + fVar76 * fVar76 + fVar68 * fVar68 <= fVar78) {
        pfVar22[2] = fVar70 + pfVar22[2];
        pfVar22[3] = auVar53._12_4_ * fVar121 * fVar43 + pfVar22[3];
        *pfVar22 = fVar76 + *pfVar22;
        pfVar22[1] = fVar68 + pfVar22[1];
        *(undefined8 *)(lVar27 + 0x4d8) = *(undefined8 *)(pfVar22 + 2);
        *(undefined8 *)(lVar27 + 0x4d0) = *(undefined8 *)pfVar22;
      }
      else {
        uVar30 = *(undefined8 *)(pfVar6 + 2);
        *(undefined8 *)pfVar22 = *(undefined8 *)pfVar6;
        *(undefined8 *)(pfVar22 + 2) = uVar30;
        *(undefined8 *)(lVar27 + 0x4d8) = *(undefined8 *)(pfVar6 + 2);
        *(undefined8 *)(lVar27 + 0x4d0) = *(undefined8 *)pfVar6;
        *piVar7 = 0;
      }
    }
    if (fVar81 <= 1.1920929e-07) {
      *(undefined8 *)(lVar27 + 0x4f8) = *(undefined8 *)(lVar27 + 0x4e8);
      *(undefined8 *)(lVar27 + 0x4f0) = *(undefined8 *)(lVar27 + 0x4e0);
      fVar76 = *(float *)(lVar27 + 0x4d0);
      fVar43 = *(float *)(lVar27 + 0x4d4);
      fVar68 = *(float *)(lVar27 + 0x4d8);
      fVar70 = *(float *)(lVar27 + 0x4dc);
      fVar60 = *(float *)(lVar27 + 0x4f0);
      fVar85 = *(float *)(lVar27 + 0x4f4);
      fVar63 = *(float *)(lVar27 + 0x4f8);
      fVar67 = *(float *)(lVar27 + 0x4fc);
    }
    else {
      fVar76 = *(float *)(lVar27 + 0x4d0);
      fVar43 = *(float *)(lVar27 + 0x4d4);
      fVar68 = *(float *)(lVar27 + 0x4d8);
      fVar70 = *(float *)(lVar27 + 0x4dc);
      fVar121 = (fVar60 - fVar76) * (fVar60 - fVar76);
      fVar77 = (fVar85 - fVar43) * (fVar85 - fVar43);
      fVar69 = (fVar63 - fVar68) * (fVar63 - fVar68);
      auVar38._0_4_ = fVar121 + fVar77;
      auVar38._4_4_ = fVar69 + 0.0;
      auVar38._8_4_ = fVar121 + fVar77;
      auVar38._12_4_ = fVar69 + 0.0;
      auVar48 = NEON_ext(auVar38,auVar38,4,1);
      fVar60 = fVar60 + (SQRT(auVar48._0_4_ + auVar48._4_4_) / fVar81) *
                        (*(float *)(lVar27 + 0x4e0) - fVar60);
      fVar85 = fVar85 + (SQRT(auVar48._8_4_ + auVar48._12_4_) / fVar81) *
                        (*(float *)(lVar27 + 0x4e4) - fVar85);
      fVar63 = fVar63 + (SQRT(auVar48._0_4_ + auVar48._4_4_) / fVar81) *
                        (*(float *)(lVar27 + 0x4e8) - fVar63);
      fVar67 = fVar67 + (SQRT(auVar48._8_4_ + auVar48._12_4_) / fVar81) *
                        (*(float *)(lVar27 + 0x4ec) - fVar67);
      *(float *)(lVar27 + 0x4f8) = fVar63;
      *(float *)(lVar27 + 0x4fc) = fVar67;
      *(float *)(lVar27 + 0x4f0) = fVar60;
      *(float *)(lVar27 + 0x4f4) = fVar85;
    }
    fVar76 = fVar76 - fVar60;
    fVar43 = fVar43 - fVar85;
    fVar68 = fVar68 - fVar63;
    fVar70 = fVar70 - fVar67;
    auVar39._0_4_ = fVar76 * fVar76 + fVar43 * fVar43;
    auVar39._4_4_ = fVar68 * fVar68 + fVar70 * fVar70;
    auVar39._8_4_ = fVar76 * fVar76 + fVar43 * fVar43;
    auVar39._12_4_ = fVar68 * fVar68 + fVar70 * fVar70;
    auVar48 = NEON_ext(auVar39,auVar39,4,1);
    auVar84._8_8_ = _UNK_03cabe68;
    auVar84._0_8_ = _DAT_03cabe60;
    auVar40._0_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar40._4_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar40._8_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar40._12_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar48 = NEON_frsqrte(auVar40,4);
    auVar89._0_4_ = auVar40._0_4_ * auVar48._0_4_;
    auVar89._4_4_ = auVar40._4_4_ * auVar48._4_4_;
    auVar89._8_4_ = auVar40._8_4_ * auVar48._8_4_;
    auVar89._12_4_ = auVar40._12_4_ * auVar48._12_4_;
    auVar88 = NEON_frsqrts(auVar48,auVar89,4);
    auVar92._0_4_ = auVar48._0_4_ * auVar88._0_4_;
    auVar92._4_4_ = auVar48._4_4_ * auVar88._4_4_;
    auVar92._8_4_ = auVar48._8_4_ * auVar88._8_4_;
    auVar92._12_4_ = auVar48._12_4_ * auVar88._12_4_;
    auVar98._0_4_ = auVar40._0_4_ * auVar92._0_4_;
    auVar98._4_4_ = auVar40._4_4_ * auVar92._4_4_;
    auVar98._8_4_ = auVar40._8_4_ * auVar92._8_4_;
    auVar98._12_4_ = auVar40._12_4_ * auVar92._12_4_;
    iVar62 = -(uint)(auVar40._0_4_ == 0.0);
    iVar55 = -(uint)(auVar40._4_4_ == 0.0);
    iVar57 = -(uint)(auVar40._8_4_ == 0.0);
    iVar59 = -(uint)(auVar40._12_4_ == 0.0);
    auVar48 = NEON_frsqrts(auVar92,auVar98,4);
    uVar30 = a64_TBL(ZEXT816(0),auVar84,DAT_03cb56c8);
    uVar117 = a64_TBL(ZEXT816(0),auVar84,DAT_03cb54d8);
    fVar76 = fVar76 * auVar92._0_4_ * auVar48._0_4_;
    fVar43 = fVar43 * auVar92._4_4_ * auVar48._4_4_;
    fVar68 = fVar68 * auVar92._8_4_ * auVar48._8_4_;
    fVar70 = fVar70 * auVar92._12_4_ * auVar48._12_4_;
    uVar122 = a64_TBL(ZEXT816(0),auVar84,DAT_03cb5488);
    uVar129 = a64_TBL(ZEXT816(0),auVar84,DAT_03cb54c0);
    fVar85 = (float)CONCAT13((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                             CONCAT12((byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                      CONCAT11((byte)((uint)fVar76 >> 8) &
                                               ~(byte)((uint)iVar62 >> 8),
                                               SUB41(fVar76,0) & ~(byte)iVar62)));
    auVar47._0_8_ =
         CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                  CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                           CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                    CONCAT14(SUB41(fVar43,0) & ~(byte)iVar55,fVar85))));
    auVar47[8] = SUB41(fVar68,0) & ~(byte)iVar57;
    auVar47[9] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar57 >> 8);
    auVar47[10] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    auVar47[0xb] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    auVar54[0xc] = SUB41(fVar70,0) & ~(byte)iVar59;
    auVar54._0_12_ = auVar47;
    auVar54[0xd] = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar59 >> 8);
    auVar54[0xe] = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    auVar54[0xf] = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    uVar90 = a64_TBL(ZEXT816(0),auVar54,DAT_03cb5488);
    uVar82 = a64_TBL(ZEXT816(0),auVar54,DAT_03cb54c0);
    uVar96 = a64_TBL(ZEXT816(0),auVar54,DAT_03cb56c8);
    uVar86 = a64_TBL(ZEXT816(0),auVar54,DAT_03cb54d8);
    fVar67 = (float)((ulong)uVar90 >> 0x20);
    fVar70 = (float)((ulong)uVar96 >> 0x20);
    fVar76 = (float)uVar30 * (float)uVar90 - (float)uVar122 * (float)uVar96;
    fVar81 = (float)((ulong)uVar30 >> 0x20) * fVar67 - (float)((ulong)uVar122 >> 0x20) * fVar70;
    fVar43 = (float)uVar117 * (float)uVar82 - (float)uVar129 * (float)uVar86;
    fVar60 = (float)((ulong)uVar117 >> 0x20) * (float)((ulong)uVar82 >> 0x20) -
             (float)((ulong)uVar129 >> 0x20) * (float)((ulong)uVar86 >> 0x20);
    fVar63 = (float)((ulong)auVar47._0_8_ >> 0x20);
    auVar41._0_4_ = fVar76 * fVar76 + fVar81 * fVar81;
    auVar41._4_4_ = fVar43 * fVar43 + fVar60 * fVar60;
    auVar41._8_4_ = fVar76 * fVar76 + fVar81 * fVar81;
    auVar41._12_4_ = fVar43 * fVar43 + fVar60 * fVar60;
    auVar48 = NEON_ext(auVar41,auVar41,4,1);
    auVar42._0_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar42._4_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar42._8_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar42._12_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar48 = NEON_frsqrte(auVar42,4);
    auVar133._0_4_ = auVar42._0_4_ * auVar48._0_4_;
    auVar133._4_4_ = auVar42._4_4_ * auVar48._4_4_;
    auVar133._8_4_ = auVar42._8_4_ * auVar48._8_4_;
    auVar133._12_4_ = auVar42._12_4_ * auVar48._12_4_;
    auVar88 = NEON_frsqrts(auVar48,auVar133,4);
    auVar125._0_4_ = auVar48._0_4_ * auVar88._0_4_;
    auVar125._4_4_ = auVar48._4_4_ * auVar88._4_4_;
    auVar125._8_4_ = auVar48._8_4_ * auVar88._8_4_;
    auVar125._12_4_ = auVar48._12_4_ * auVar88._12_4_;
    auVar134._0_4_ = auVar42._0_4_ * auVar125._0_4_;
    auVar134._4_4_ = auVar42._4_4_ * auVar125._4_4_;
    auVar134._8_4_ = auVar42._8_4_ * auVar125._8_4_;
    auVar134._12_4_ = auVar42._12_4_ * auVar125._12_4_;
    iVar62 = -(uint)(auVar42._0_4_ == 0.0);
    iVar55 = -(uint)(auVar42._4_4_ == 0.0);
    iVar57 = -(uint)(auVar42._8_4_ == 0.0);
    iVar59 = -(uint)(auVar42._12_4_ == 0.0);
    auVar48 = NEON_frsqrts(auVar125,auVar134,4);
    fVar76 = fVar76 * auVar125._0_4_ * auVar48._0_4_;
    fVar81 = fVar81 * auVar125._4_4_ * auVar48._4_4_;
    fVar43 = fVar43 * auVar125._8_4_ * auVar48._8_4_;
    fVar60 = fVar60 * auVar125._12_4_ * auVar48._12_4_;
    bVar100 = SUB41(fVar76,0) & ~(byte)iVar62;
    bVar101 = (byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar62 >> 8);
    bVar102 = (byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
    bVar103 = (byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
    bVar104 = SUB41(fVar81,0) & ~(byte)iVar55;
    bVar105 = (byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar55 >> 8);
    bVar106 = (byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
    bVar107 = (byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
    bVar108 = SUB41(fVar43,0) & ~(byte)iVar57;
    bVar109 = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar57 >> 8);
    bVar110 = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    bVar111 = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    bVar112 = SUB41(fVar60,0) & ~(byte)iVar59;
    bVar113 = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar59 >> 8);
    bVar114 = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    bVar115 = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    auVar48 = NEON_fmov(0x3f800000,4);
    auVar14[1] = bVar101;
    auVar14[0] = bVar100;
    auVar14[2] = bVar102;
    auVar14[3] = bVar103;
    auVar14[4] = bVar104;
    auVar14[5] = bVar105;
    auVar14[6] = bVar106;
    auVar14[7] = bVar107;
    auVar14[8] = bVar108;
    auVar14[9] = bVar109;
    auVar14[10] = bVar110;
    auVar14[0xb] = bVar111;
    auVar14[0xc] = bVar112;
    auVar14[0xd] = bVar113;
    auVar14[0xe] = bVar114;
    auVar14[0xf] = bVar115;
    uVar117 = a64_TBL(ZEXT816(0),auVar14,DAT_03cb5488);
    auVar15[1] = bVar101;
    auVar15[0] = bVar100;
    auVar15[2] = bVar102;
    auVar15[3] = bVar103;
    auVar15[4] = bVar104;
    auVar15[5] = bVar105;
    auVar15[6] = bVar106;
    auVar15[7] = bVar107;
    auVar15[8] = bVar108;
    auVar15[9] = bVar109;
    auVar15[10] = bVar110;
    auVar15[0xb] = bVar111;
    auVar15[0xc] = bVar112;
    auVar15[0xd] = bVar113;
    auVar15[0xe] = bVar114;
    auVar15[0xf] = bVar115;
    uVar30 = a64_TBL(ZEXT816(0),auVar15,DAT_03cb56c8);
    fVar76 = (float)CONCAT13(bVar103,CONCAT12(bVar102,CONCAT11(bVar101,bVar100)));
    fVar81 = (float)CONCAT13(bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar104)));
    fVar68 = (float)uVar96 * (float)uVar117 - (float)uVar90 * (float)uVar30;
    fVar60 = fVar70 * (float)((ulong)uVar117 >> 0x20) - fVar67 * (float)((ulong)uVar30 >> 0x20);
    auVar16[1] = bVar101;
    auVar16[0] = bVar100;
    auVar16[2] = bVar102;
    auVar16[3] = bVar103;
    auVar16[4] = bVar104;
    auVar16[5] = bVar105;
    auVar16[6] = bVar106;
    auVar16[7] = bVar107;
    auVar16[8] = bVar108;
    auVar16[9] = bVar109;
    auVar16[10] = bVar110;
    auVar16[0xb] = bVar111;
    auVar16[0xc] = bVar112;
    auVar16[0xd] = bVar113;
    auVar16[0xe] = bVar114;
    auVar16[0xf] = bVar115;
    uVar117 = a64_TBL(ZEXT816(0),auVar16,DAT_03cb54c0);
    auVar17[1] = bVar101;
    auVar17[0] = bVar100;
    auVar17[2] = bVar102;
    auVar17[3] = bVar103;
    auVar17[4] = bVar104;
    auVar17[5] = bVar105;
    auVar17[6] = bVar106;
    auVar17[7] = bVar107;
    auVar17[8] = bVar108;
    auVar17[9] = bVar109;
    auVar17[10] = bVar110;
    auVar17[0xb] = bVar111;
    auVar17[0xc] = bVar112;
    auVar17[0xd] = bVar113;
    auVar17[0xe] = bVar114;
    auVar17[0xf] = bVar115;
    uVar30 = a64_TBL(ZEXT816(0),auVar17,DAT_03cb54d8);
    fVar67 = (float)uVar86 * (float)uVar117 - (float)uVar82 * (float)uVar30;
    fVar43 = auVar47._8_4_;
    fVar116 = auVar48._0_4_ + (float)_DAT_03cab3a0 * fVar76 + (float)_DAT_03cac210 * fVar60 +
              (float)_DAT_03cabb00 * fVar43;
    fVar118 = auVar48._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar76 +
              (float)((ulong)_DAT_03cac210 >> 0x20) * fVar60 +
              (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar43;
    fVar119 = auVar48._8_4_ + (float)_UNK_03cab3a8 * fVar76 + (float)_UNK_03cac218 * fVar60 +
              (float)_UNK_03cabb08 * fVar43;
    fVar120 = auVar48._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar76 +
              (float)((ulong)_UNK_03cac218 >> 0x20) * fVar60 +
              (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar43;
    auVar18[1] = bVar101;
    auVar18[0] = bVar100;
    auVar18[2] = bVar102;
    auVar18[3] = bVar103;
    auVar18[4] = bVar104;
    auVar18[5] = bVar105;
    auVar18[6] = bVar106;
    auVar18[7] = bVar107;
    auVar18[8] = bVar108;
    auVar18[9] = bVar109;
    auVar18[10] = bVar110;
    auVar18[0xb] = bVar111;
    auVar18[0xc] = bVar112;
    auVar18[0xd] = bVar113;
    auVar18[0xe] = bVar114;
    auVar18[0xf] = bVar115;
    auVar19[1] = bVar101;
    auVar19[0] = bVar100;
    auVar19[2] = bVar102;
    auVar19[3] = bVar103;
    auVar19[4] = bVar104;
    auVar19[5] = bVar105;
    auVar19[6] = bVar106;
    auVar19[7] = bVar107;
    auVar19[8] = bVar108;
    auVar19[9] = bVar109;
    auVar19[10] = bVar110;
    auVar19[0xb] = bVar111;
    auVar19[0xc] = bVar112;
    auVar19[0xd] = bVar113;
    auVar19[0xe] = bVar114;
    auVar19[0xf] = bVar115;
    auVar48 = NEON_ext(auVar18,auVar19,8,1);
    fVar69 = (float)((uint)fVar116 ^ ((uint)fVar116 ^ (uint)fVar118) & -(uint)(fVar116 <= fVar118));
    fVar78 = (float)((uint)fVar116 ^ ((uint)fVar116 ^ (uint)fVar118) & -(uint)(fVar116 <= fVar118));
    fVar93 = (float)((uint)fVar116 ^ ((uint)fVar116 ^ (uint)fVar118) & -(uint)(fVar116 <= fVar118));
    fVar94 = (float)((uint)fVar116 ^ ((uint)fVar116 ^ (uint)fVar118) & -(uint)(fVar116 <= fVar118));
    auVar88 = NEON_fmov(0x40800000,4);
    fVar95 = SQRT(fVar116) * 0.5;
    fVar99 = SQRT(fVar119) * 0.5;
    auVar126._0_4_ = fVar95 * auVar88._0_4_;
    auVar126._4_4_ = SQRT(fVar118) * 0.5 * auVar88._4_4_;
    auVar126._8_4_ = fVar99 * auVar88._8_4_;
    auVar126._12_4_ = SQRT(fVar120) * 0.5 * auVar88._12_4_;
    auVar49 = NEON_frecpe(auVar126,4);
    auVar88 = NEON_frecps(auVar49,auVar126,4);
    auVar135._0_4_ = auVar49._0_4_ * auVar88._0_4_;
    auVar135._4_4_ = auVar49._4_4_ * auVar88._4_4_;
    auVar135._8_4_ = auVar49._8_4_ * auVar88._8_4_;
    auVar135._12_4_ = auVar49._12_4_ * auVar88._12_4_;
    auVar88 = NEON_frecps(auVar135,auVar126,4);
    fVar77 = auVar135._0_4_ * auVar88._0_4_;
    fVar127 = auVar135._4_4_ * auVar88._4_4_;
    fVar60 = auVar135._8_4_ * auVar88._8_4_;
    fVar128 = auVar135._12_4_ * auVar88._12_4_;
    fVar70 = ((float)CONCAT13(bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar104))) + fVar68) *
             fVar77;
    fVar121 = (fVar85 + auVar48._0_4_) * fVar77;
    fVar77 = (-fVar63 + fVar67) * fVar77;
    fVar76 = (fVar85 + auVar48._0_4_) * fVar60;
    fVar43 = (fVar63 + fVar67) * fVar60;
    fVar60 = ((float)CONCAT13(bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar104))) - fVar68) *
             fVar60;
    uVar44 = (uint)fVar76 ^
             ((uint)fVar76 ^
             (uint)fVar95 ^
             ((uint)fVar95 ^ (uint)((fVar81 + fVar68) * fVar127)) & -(uint)(fVar116 <= fVar118)) &
             ~-(uint)(fVar69 <= fVar119);
    uVar56 = (uint)fVar43 ^
             ((uint)fVar43 ^
             (uint)fVar70 ^
             ((uint)fVar70 ^ (uint)(SQRT(fVar118) * 0.5)) & -(uint)(fVar116 <= fVar118)) &
             ~-(uint)(fVar78 <= fVar119);
    uVar58 = (uint)fVar99 ^
             ((uint)fVar99 ^
             (uint)fVar121 ^
             ((uint)fVar121 ^ (uint)((fVar63 + fVar67) * fVar127)) & -(uint)(fVar116 <= fVar118)) &
             ~-(uint)(fVar93 <= fVar119);
    uVar61 = (uint)fVar60 ^
             ((uint)fVar60 ^
             (uint)fVar77 ^
             ((uint)fVar77 ^
             (uint)((-(float)CONCAT13(bVar111,CONCAT12(bVar110,CONCAT11(bVar109,bVar108))) + fVar85)
                   * fVar127)) & -(uint)(fVar116 <= fVar118)) & ~-(uint)(fVar94 <= fVar119);
    uVar44 = uVar44 ^ (uVar44 ^ (uint)((fVar67 - fVar63) * fVar128)) &
                      -(uint)((float)((uint)fVar69 ^
                                     ((uint)fVar69 ^ (uint)fVar119) & -(uint)(fVar69 <= fVar119)) <=
                             fVar120);
    uVar56 = uVar56 ^ (uVar56 ^ (uint)((fVar85 - (float)CONCAT13(bVar111,CONCAT12(bVar110,CONCAT11(
                                                  bVar109,bVar108)))) * fVar128)) &
                      -(uint)((float)((uint)fVar78 ^
                                     ((uint)fVar78 ^ (uint)fVar119) & -(uint)(fVar78 <= fVar119)) <=
                             fVar120);
    uVar58 = uVar58 ^ (uVar58 ^ (uint)((fVar81 - fVar68) * fVar128)) &
                      -(uint)((float)((uint)fVar93 ^
                                     ((uint)fVar93 ^ (uint)fVar119) & -(uint)(fVar93 <= fVar119)) <=
                             fVar120);
    uVar61 = uVar61 ^ (uVar61 ^ (uint)(SQRT(fVar120) * 0.5)) &
                      -(uint)((float)((uint)fVar94 ^
                                     ((uint)fVar94 ^ (uint)fVar119) & -(uint)(fVar94 <= fVar119)) <=
                             fVar120);
  }
  else {
    if (*piVar7 != 1) {
      uVar30 = *(undefined8 *)(pfVar6 + 2);
      *(undefined8 *)pfVar22 = *(undefined8 *)pfVar6;
      *(undefined8 *)(pfVar22 + 2) = uVar30;
      *(undefined8 *)(lVar27 + 0x4d8) = *(undefined8 *)(pfVar6 + 2);
      *(undefined8 *)(lVar27 + 0x4d0) = *(undefined8 *)pfVar6;
      *(undefined8 *)(lVar27 + 0x518) = *(undefined8 *)(lVar27 + 0xf8);
      *(undefined8 *)(lVar27 + 0x510) = *(undefined8 *)(lVar27 + 0xf0);
      *(undefined8 *)(lVar27 + 0x4f8) = *(undefined8 *)(lVar27 + 0x128);
      *(undefined8 *)(lVar27 + 0x4f0) = *(undefined8 *)(lVar27 + 0x120);
      goto LAB_00dac0bc;
    }
    *(float *)(lVar27 + 0x4f8) = fVar63 + (*(float *)(lVar27 + 0x4e8) - fVar63) * fVar43;
    *(float *)(lVar27 + 0x4fc) = fVar67 + (*(float *)(lVar27 + 0x4ec) - fVar67) * fVar43;
    *(float *)(lVar27 + 0x4f0) = fVar60 + (*(float *)(lVar27 + 0x4e0) - fVar60) * fVar43;
    *(float *)(lVar27 + 0x4f4) = fVar85 + (*(float *)(lVar27 + 0x4e4) - fVar85) * fVar43;
    uVar30 = *(undefined8 *)(pfVar6 + 2);
    *(undefined8 *)pfVar22 = *(undefined8 *)pfVar6;
    *(undefined8 *)(pfVar22 + 2) = uVar30;
    *(undefined8 *)(lVar27 + 0x4d8) = *(undefined8 *)(pfVar6 + 2);
    *(undefined8 *)(lVar27 + 0x4d0) = *(undefined8 *)pfVar6;
    fVar76 = *(float *)(lVar27 + 0x4d0) - *(float *)(lVar27 + 0x4f0);
    fVar81 = *(float *)(lVar27 + 0x4d4) - *(float *)(lVar27 + 0x4f4);
    fVar43 = *(float *)(lVar27 + 0x4d8) - *(float *)(lVar27 + 0x4f8);
    fVar60 = *(float *)(lVar27 + 0x4dc) - *(float *)(lVar27 + 0x4fc);
    auVar32._0_4_ = fVar76 * fVar76 + fVar81 * fVar81;
    auVar32._4_4_ = fVar43 * fVar43 + fVar60 * fVar60;
    auVar32._8_4_ = fVar76 * fVar76 + fVar81 * fVar81;
    auVar32._12_4_ = fVar43 * fVar43 + fVar60 * fVar60;
    auVar48 = NEON_ext(auVar32,auVar32,4,1);
    auVar33._0_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar33._4_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar33._8_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar33._12_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar48 = NEON_frsqrte(auVar33,4);
    auVar87._8_8_ = _UNK_03cabe68;
    auVar87._0_8_ = _DAT_03cabe60;
    auVar66._0_4_ = auVar33._0_4_ * auVar48._0_4_;
    auVar66._4_4_ = auVar33._4_4_ * auVar48._4_4_;
    auVar66._8_4_ = auVar33._8_4_ * auVar48._8_4_;
    auVar66._12_4_ = auVar33._12_4_ * auVar48._12_4_;
    auVar88 = NEON_frsqrts(auVar48,auVar66,4);
    auVar91._0_4_ = auVar48._0_4_ * auVar88._0_4_;
    auVar91._4_4_ = auVar48._4_4_ * auVar88._4_4_;
    auVar91._8_4_ = auVar48._8_4_ * auVar88._8_4_;
    auVar91._12_4_ = auVar48._12_4_ * auVar88._12_4_;
    auVar97._0_4_ = auVar33._0_4_ * auVar91._0_4_;
    auVar97._4_4_ = auVar33._4_4_ * auVar91._4_4_;
    auVar97._8_4_ = auVar33._8_4_ * auVar91._8_4_;
    auVar97._12_4_ = auVar33._12_4_ * auVar91._12_4_;
    iVar62 = -(uint)(auVar33._0_4_ == 0.0);
    iVar55 = -(uint)(auVar33._4_4_ == 0.0);
    iVar57 = -(uint)(auVar33._8_4_ == 0.0);
    iVar59 = -(uint)(auVar33._12_4_ == 0.0);
    auVar48 = NEON_frsqrts(auVar91,auVar97,4);
    uVar30 = a64_TBL(ZEXT816(0),auVar87,DAT_03cb56c8);
    uVar117 = a64_TBL(ZEXT816(0),auVar87,DAT_03cb54d8);
    fVar76 = fVar76 * auVar91._0_4_ * auVar48._0_4_;
    fVar81 = fVar81 * auVar91._4_4_ * auVar48._4_4_;
    fVar43 = fVar43 * auVar91._8_4_ * auVar48._8_4_;
    fVar60 = fVar60 * auVar91._12_4_ * auVar48._12_4_;
    fVar85 = (float)CONCAT13((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                             CONCAT12((byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                      CONCAT11((byte)((uint)fVar76 >> 8) &
                                               ~(byte)((uint)iVar62 >> 8),
                                               SUB41(fVar76,0) & ~(byte)iVar62)));
    auVar46._0_8_ =
         CONCAT17((byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                  CONCAT16((byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                           CONCAT15((byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                    CONCAT14(SUB41(fVar81,0) & ~(byte)iVar55,fVar85))));
    auVar46[8] = SUB41(fVar43,0) & ~(byte)iVar57;
    auVar46[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar57 >> 8);
    auVar46[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    auVar46[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    auVar52[0xc] = SUB41(fVar60,0) & ~(byte)iVar59;
    auVar52._0_12_ = auVar46;
    auVar52[0xd] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar59 >> 8);
    auVar52[0xe] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    auVar52[0xf] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    uVar122 = a64_TBL(ZEXT816(0),auVar87,DAT_03cb5488);
    uVar129 = a64_TBL(ZEXT816(0),auVar87,DAT_03cb54c0);
    uVar82 = a64_TBL(ZEXT816(0),auVar52,DAT_03cb54c0);
    uVar90 = a64_TBL(ZEXT816(0),auVar52,DAT_03cb5488);
    uVar96 = a64_TBL(ZEXT816(0),auVar52,DAT_03cb56c8);
    uVar86 = a64_TBL(ZEXT816(0),auVar52,DAT_03cb54d8);
    fVar63 = (float)((ulong)auVar46._0_8_ >> 0x20);
    fVar67 = (float)((ulong)uVar90 >> 0x20);
    fVar68 = (float)((ulong)uVar96 >> 0x20);
    fVar43 = (float)uVar117 * (float)uVar82 - (float)uVar129 * (float)uVar86;
    fVar60 = (float)((ulong)uVar117 >> 0x20) * (float)((ulong)uVar82 >> 0x20) -
             (float)((ulong)uVar129 >> 0x20) * (float)((ulong)uVar86 >> 0x20);
    fVar76 = (float)uVar30 * (float)uVar90 - (float)uVar122 * (float)uVar96;
    fVar81 = (float)((ulong)uVar30 >> 0x20) * fVar67 - (float)((ulong)uVar122 >> 0x20) * fVar68;
    auVar34._0_4_ = fVar76 * fVar76 + fVar81 * fVar81;
    auVar34._4_4_ = fVar43 * fVar43 + fVar60 * fVar60;
    auVar34._8_4_ = fVar76 * fVar76 + fVar81 * fVar81;
    auVar34._12_4_ = fVar43 * fVar43 + fVar60 * fVar60;
    auVar48 = NEON_ext(auVar34,auVar34,4,1);
    auVar35._0_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar35._4_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar35._8_4_ = auVar48._0_4_ + auVar48._4_4_;
    auVar35._12_4_ = auVar48._8_4_ + auVar48._12_4_;
    auVar48 = NEON_frsqrte(auVar35,4);
    auVar130._0_4_ = auVar35._0_4_ * auVar48._0_4_;
    auVar130._4_4_ = auVar35._4_4_ * auVar48._4_4_;
    auVar130._8_4_ = auVar35._8_4_ * auVar48._8_4_;
    auVar130._12_4_ = auVar35._12_4_ * auVar48._12_4_;
    auVar88 = NEON_frsqrts(auVar48,auVar130,4);
    auVar123._0_4_ = auVar48._0_4_ * auVar88._0_4_;
    auVar123._4_4_ = auVar48._4_4_ * auVar88._4_4_;
    auVar123._8_4_ = auVar48._8_4_ * auVar88._8_4_;
    auVar123._12_4_ = auVar48._12_4_ * auVar88._12_4_;
    auVar131._0_4_ = auVar35._0_4_ * auVar123._0_4_;
    auVar131._4_4_ = auVar35._4_4_ * auVar123._4_4_;
    auVar131._8_4_ = auVar35._8_4_ * auVar123._8_4_;
    auVar131._12_4_ = auVar35._12_4_ * auVar123._12_4_;
    iVar62 = -(uint)(auVar35._0_4_ == 0.0);
    iVar55 = -(uint)(auVar35._4_4_ == 0.0);
    iVar57 = -(uint)(auVar35._8_4_ == 0.0);
    iVar59 = -(uint)(auVar35._12_4_ == 0.0);
    auVar48 = NEON_frsqrts(auVar123,auVar131,4);
    fVar76 = fVar76 * auVar123._0_4_ * auVar48._0_4_;
    fVar81 = fVar81 * auVar123._4_4_ * auVar48._4_4_;
    fVar43 = fVar43 * auVar123._8_4_ * auVar48._8_4_;
    fVar60 = fVar60 * auVar123._12_4_ * auVar48._12_4_;
    bVar100 = SUB41(fVar76,0) & ~(byte)iVar62;
    bVar101 = (byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar62 >> 8);
    bVar102 = (byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
    bVar103 = (byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
    bVar104 = SUB41(fVar81,0) & ~(byte)iVar55;
    bVar105 = (byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar55 >> 8);
    bVar106 = (byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
    bVar107 = (byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
    bVar108 = SUB41(fVar43,0) & ~(byte)iVar57;
    bVar109 = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar57 >> 8);
    bVar110 = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    bVar111 = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    bVar112 = SUB41(fVar60,0) & ~(byte)iVar59;
    bVar113 = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar59 >> 8);
    bVar114 = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    bVar115 = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    auVar48 = NEON_fmov(0x3f800000,4);
    auVar8[1] = bVar101;
    auVar8[0] = bVar100;
    auVar8[2] = bVar102;
    auVar8[3] = bVar103;
    auVar8[4] = bVar104;
    auVar8[5] = bVar105;
    auVar8[6] = bVar106;
    auVar8[7] = bVar107;
    auVar8[8] = bVar108;
    auVar8[9] = bVar109;
    auVar8[10] = bVar110;
    auVar8[0xb] = bVar111;
    auVar8[0xc] = bVar112;
    auVar8[0xd] = bVar113;
    auVar8[0xe] = bVar114;
    auVar8[0xf] = bVar115;
    uVar117 = a64_TBL(ZEXT816(0),auVar8,DAT_03cb5488);
    auVar9[1] = bVar101;
    auVar9[0] = bVar100;
    auVar9[2] = bVar102;
    auVar9[3] = bVar103;
    auVar9[4] = bVar104;
    auVar9[5] = bVar105;
    auVar9[6] = bVar106;
    auVar9[7] = bVar107;
    auVar9[8] = bVar108;
    auVar9[9] = bVar109;
    auVar9[10] = bVar110;
    auVar9[0xb] = bVar111;
    auVar9[0xc] = bVar112;
    auVar9[0xd] = bVar113;
    auVar9[0xe] = bVar114;
    auVar9[0xf] = bVar115;
    uVar30 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb56c8);
    fVar76 = (float)CONCAT13(bVar103,CONCAT12(bVar102,CONCAT11(bVar101,bVar100)));
    fVar81 = (float)CONCAT13(bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar104)));
    fVar77 = (float)uVar96 * (float)uVar117 - (float)uVar90 * (float)uVar30;
    fVar60 = fVar68 * (float)((ulong)uVar117 >> 0x20) - fVar67 * (float)((ulong)uVar30 >> 0x20);
    auVar10[1] = bVar101;
    auVar10[0] = bVar100;
    auVar10[2] = bVar102;
    auVar10[3] = bVar103;
    auVar10[4] = bVar104;
    auVar10[5] = bVar105;
    auVar10[6] = bVar106;
    auVar10[7] = bVar107;
    auVar10[8] = bVar108;
    auVar10[9] = bVar109;
    auVar10[10] = bVar110;
    auVar10[0xb] = bVar111;
    auVar10[0xc] = bVar112;
    auVar10[0xd] = bVar113;
    auVar10[0xe] = bVar114;
    auVar10[0xf] = bVar115;
    uVar117 = a64_TBL(ZEXT816(0),auVar10,DAT_03cb54c0);
    auVar11[1] = bVar101;
    auVar11[0] = bVar100;
    auVar11[2] = bVar102;
    auVar11[3] = bVar103;
    auVar11[4] = bVar104;
    auVar11[5] = bVar105;
    auVar11[6] = bVar106;
    auVar11[7] = bVar107;
    auVar11[8] = bVar108;
    auVar11[9] = bVar109;
    auVar11[10] = bVar110;
    auVar11[0xb] = bVar111;
    auVar11[0xc] = bVar112;
    auVar11[0xd] = bVar113;
    auVar11[0xe] = bVar114;
    auVar11[0xf] = bVar115;
    uVar30 = a64_TBL(ZEXT816(0),auVar11,DAT_03cb54d8);
    fVar67 = (float)uVar86 * (float)uVar117 - (float)uVar82 * (float)uVar30;
    fVar43 = auVar46._8_4_;
    fVar116 = auVar48._0_4_ + (float)_DAT_03cab3a0 * fVar76 + (float)_DAT_03cac210 * fVar60 +
              (float)_DAT_03cabb00 * fVar43;
    fVar118 = auVar48._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar76 +
              (float)((ulong)_DAT_03cac210 >> 0x20) * fVar60 +
              (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar43;
    fVar119 = auVar48._8_4_ + (float)_UNK_03cab3a8 * fVar76 + (float)_UNK_03cac218 * fVar60 +
              (float)_UNK_03cabb08 * fVar43;
    fVar120 = auVar48._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar76 +
              (float)((ulong)_UNK_03cac218 >> 0x20) * fVar60 +
              (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar43;
    auVar12[1] = bVar101;
    auVar12[0] = bVar100;
    auVar12[2] = bVar102;
    auVar12[3] = bVar103;
    auVar12[4] = bVar104;
    auVar12[5] = bVar105;
    auVar12[6] = bVar106;
    auVar12[7] = bVar107;
    auVar12[8] = bVar108;
    auVar12[9] = bVar109;
    auVar12[10] = bVar110;
    auVar12[0xb] = bVar111;
    auVar12[0xc] = bVar112;
    auVar12[0xd] = bVar113;
    auVar12[0xe] = bVar114;
    auVar12[0xf] = bVar115;
    auVar13[1] = bVar101;
    auVar13[0] = bVar100;
    auVar13[2] = bVar102;
    auVar13[3] = bVar103;
    auVar13[4] = bVar104;
    auVar13[5] = bVar105;
    auVar13[6] = bVar106;
    auVar13[7] = bVar107;
    auVar13[8] = bVar108;
    auVar13[9] = bVar109;
    auVar13[10] = bVar110;
    auVar13[0xb] = bVar111;
    auVar13[0xc] = bVar112;
    auVar13[0xd] = bVar113;
    auVar13[0xe] = bVar114;
    auVar13[0xf] = bVar115;
    auVar48 = NEON_ext(auVar12,auVar13,8,1);
    fVar69 = (float)((uint)fVar116 ^ ((uint)fVar116 ^ (uint)fVar118) & -(uint)(fVar116 <= fVar118));
    fVar78 = (float)((uint)fVar116 ^ ((uint)fVar116 ^ (uint)fVar118) & -(uint)(fVar116 <= fVar118));
    fVar93 = (float)((uint)fVar116 ^ ((uint)fVar116 ^ (uint)fVar118) & -(uint)(fVar116 <= fVar118));
    fVar94 = (float)((uint)fVar116 ^ ((uint)fVar116 ^ (uint)fVar118) & -(uint)(fVar116 <= fVar118));
    auVar88 = NEON_fmov(0x40800000,4);
    fVar95 = SQRT(fVar116) * 0.5;
    fVar99 = SQRT(fVar119) * 0.5;
    auVar124._0_4_ = fVar95 * auVar88._0_4_;
    auVar124._4_4_ = SQRT(fVar118) * 0.5 * auVar88._4_4_;
    auVar124._8_4_ = fVar99 * auVar88._8_4_;
    auVar124._12_4_ = SQRT(fVar120) * 0.5 * auVar88._12_4_;
    auVar49 = NEON_frecpe(auVar124,4);
    auVar88 = NEON_frecps(auVar49,auVar124,4);
    auVar132._0_4_ = auVar49._0_4_ * auVar88._0_4_;
    auVar132._4_4_ = auVar49._4_4_ * auVar88._4_4_;
    auVar132._8_4_ = auVar49._8_4_ * auVar88._8_4_;
    auVar132._12_4_ = auVar49._12_4_ * auVar88._12_4_;
    auVar88 = NEON_frecps(auVar132,auVar124,4);
    fVar121 = auVar132._0_4_ * auVar88._0_4_;
    fVar127 = auVar132._4_4_ * auVar88._4_4_;
    fVar60 = auVar132._8_4_ * auVar88._8_4_;
    fVar128 = auVar132._12_4_ * auVar88._12_4_;
    fVar68 = ((float)CONCAT13(bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar104))) + fVar77) *
             fVar121;
    fVar70 = (fVar85 + auVar48._0_4_) * fVar121;
    fVar121 = (-fVar63 + fVar67) * fVar121;
    fVar76 = (fVar85 + auVar48._0_4_) * fVar60;
    fVar43 = (fVar63 + fVar67) * fVar60;
    fVar60 = ((float)CONCAT13(bVar107,CONCAT12(bVar106,CONCAT11(bVar105,bVar104))) - fVar77) *
             fVar60;
    uVar44 = (uint)fVar76 ^
             ((uint)fVar76 ^
             (uint)fVar95 ^
             ((uint)fVar95 ^ (uint)((fVar81 + fVar77) * fVar127)) & -(uint)(fVar116 <= fVar118)) &
             ~-(uint)(fVar69 <= fVar119);
    uVar56 = (uint)fVar43 ^
             ((uint)fVar43 ^
             (uint)fVar68 ^
             ((uint)fVar68 ^ (uint)(SQRT(fVar118) * 0.5)) & -(uint)(fVar116 <= fVar118)) &
             ~-(uint)(fVar78 <= fVar119);
    uVar58 = (uint)fVar99 ^
             ((uint)fVar99 ^
             (uint)fVar70 ^
             ((uint)fVar70 ^ (uint)((fVar63 + fVar67) * fVar127)) & -(uint)(fVar116 <= fVar118)) &
             ~-(uint)(fVar93 <= fVar119);
    uVar61 = (uint)fVar60 ^
             ((uint)fVar60 ^
             (uint)fVar121 ^
             ((uint)fVar121 ^
             (uint)((-(float)CONCAT13(bVar111,CONCAT12(bVar110,CONCAT11(bVar109,bVar108))) + fVar85)
                   * fVar127)) & -(uint)(fVar116 <= fVar118)) & ~-(uint)(fVar94 <= fVar119);
    uVar44 = uVar44 ^ (uVar44 ^ (uint)((fVar67 - fVar63) * fVar128)) &
                      -(uint)((float)((uint)fVar69 ^
                                     ((uint)fVar69 ^ (uint)fVar119) & -(uint)(fVar69 <= fVar119)) <=
                             fVar120);
    uVar56 = uVar56 ^ (uVar56 ^ (uint)((fVar85 - (float)CONCAT13(bVar111,CONCAT12(bVar110,CONCAT11(
                                                  bVar109,bVar108)))) * fVar128)) &
                      -(uint)((float)((uint)fVar78 ^
                                     ((uint)fVar78 ^ (uint)fVar119) & -(uint)(fVar78 <= fVar119)) <=
                             fVar120);
    uVar58 = uVar58 ^ (uVar58 ^ (uint)((fVar81 - fVar77) * fVar128)) &
                      -(uint)((float)((uint)fVar93 ^
                                     ((uint)fVar93 ^ (uint)fVar119) & -(uint)(fVar93 <= fVar119)) <=
                             fVar120);
    uVar61 = uVar61 ^ (uVar61 ^ (uint)(SQRT(fVar120) * 0.5)) &
                      -(uint)((float)((uint)fVar94 ^
                                     ((uint)fVar94 ^ (uint)fVar119) & -(uint)(fVar94 <= fVar119)) <=
                             fVar120);
  }
  *(uint *)(lVar27 + 0x518) = uVar58;
  *(uint *)(lVar27 + 0x51c) = uVar61;
  *(uint *)(lVar27 + 0x510) = uVar44;
  *(uint *)(lVar27 + 0x514) = uVar56;
LAB_00dac0bc:
  *(char *)(lVar27 + 0x4b0) = *pcVar23;
  *(undefined8 *)(lVar27 + 0x530) = *(undefined8 *)(lVar27 + 0x4d0);
  *(undefined8 *)(lVar27 + 0x538) = *(undefined8 *)(lVar27 + 0x4d8);
  *(undefined8 *)(lVar27 + 0x548) = *(undefined8 *)(lVar27 + 0x518);
  *(undefined8 *)(lVar27 + 0x550) = *(undefined8 *)(lVar27 + 0x4f0);
  *(undefined8 *)(lVar27 + 0x540) = *(undefined8 *)(lVar27 + 0x510);
  *(undefined8 *)(lVar27 + 0x558) = *(undefined8 *)(lVar27 + 0x4f8);
  return;
}


