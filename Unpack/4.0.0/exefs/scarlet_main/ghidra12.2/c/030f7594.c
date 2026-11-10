/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f7594; name: FUN_030f7594
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030f7594(long param_1,int *param_2,long param_3,long param_4,undefined8 *param_5,
                 int param_6)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined4 uVar21;
  long *plVar22;
  long *plVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  int *piVar32;
  long *plVar33;
  int *piVar34;
  long lVar35;
  float fVar36;
  int iVar37;
  float fVar40;
  float fVar41;
  int iVar42;
  float fVar43;
  int iVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar61;
  ulong uVar59;
  ulong uVar60;
  float fVar62;
  undefined1 auVar64 [12];
  undefined8 uVar63;
  undefined1 in_q6 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  int iVar75;
  int iVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 uVar82;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  int *local_278;
  undefined8 local_270;
  int local_268 [130];
  
  iVar24 = *(int *)(param_1 + 0xc0);
  if (iVar24 <= *param_2 + 1) {
    iVar24 = *param_2 + 1;
  }
  *(int *)(param_1 + 0xc0) = iVar24;
  iVar24 = *(int *)(param_1 + 0x98);
  lVar26 = (long)iVar24;
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar24) {
    FUN_030fdf08(param_1 + 0x90,lVar26 + 1);
    iVar24 = *(int *)(param_1 + 0x98);
  }
  lVar35 = *(long *)(param_1 + 0x90);
  *(int *)(param_1 + 0x98) = (int)(lVar26 + 1);
  uVar19 = _UNK_03cabe68;
  uVar18 = _DAT_03cabe60;
  uVar82 = DAT_03cab628;
  uVar63 = DAT_03cab620;
  piVar32 = (int *)(lVar35 + (long)iVar24 * 0xd0);
  plVar33 = (long *)(piVar32 + 2);
  *plVar33 = 0;
  *(undefined8 *)(piVar32 + 10) = uVar82;
  *(undefined8 *)(piVar32 + 8) = uVar63;
  *(undefined8 *)(piVar32 + 0xe) = uVar19;
  *(undefined8 *)(piVar32 + 0xc) = uVar18;
  uVar19 = _UNK_03cabe58;
  uVar18 = _DAT_03cabe50;
  uVar82 = _UNK_03caa5b8;
  uVar63 = _DAT_03caa5b0;
  piVar32[4] = 0;
  piVar32[5] = 0;
  piVar32[0x18] = 0;
  piVar32[0x19] = 0;
  piVar32[0x1a] = 0;
  piVar32[0x1b] = 0;
  piVar32[0x2a] = 0;
  piVar32[0x2b] = 0;
  piVar32[0x1c] = 0;
  piVar32[0x1d] = 0;
  piVar32[0x1e] = 0;
  piVar32[0x1f] = 0;
  *(undefined8 *)(piVar32 + 0x12) = uVar82;
  *(undefined8 *)(piVar32 + 0x10) = uVar63;
  *(undefined8 *)(piVar32 + 0x16) = uVar19;
  *(undefined8 *)(piVar32 + 0x14) = uVar18;
  piVar34 = piVar32 + 0x2c;
  piVar34[0] = 0;
  piVar34[1] = -0x80000000;
  *(undefined2 *)(piVar32 + 0x32) = 0;
  piVar32[0x2e] = 0;
  piVar32[0x2f] = 0;
  piVar32[0x30] = 0;
  piVar32[0x31] = -0x80000000;
  *(undefined1 *)((long)piVar32 + 0xca) = 0;
  *piVar32 = *param_2;
  if ((param_3 != 0) && (*(long *)(param_3 + 8) != 0)) {
    plVar22 = (long *)(param_3 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = *plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar22 = (long *)*plVar33;
  *plVar33 = param_3;
  if ((plVar22 != (long *)0x0) && (plVar22[1] != 0)) {
    plVar23 = plVar22 + 2;
    do {
      lVar26 = *plVar23;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *plVar23 = lVar26 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar26 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))();
    }
  }
  plVar22 = (long *)(lVar35 + (long)iVar24 * 0xd0 + 0x10);
  if ((param_4 != 0) && (*(long *)(param_4 + 8) != 0)) {
    plVar23 = (long *)(param_4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *plVar23 = *plVar23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar23 = (long *)*plVar22;
  *plVar22 = param_4;
  if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
    plVar22 = plVar23 + 2;
    do {
      lVar26 = *plVar22;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = lVar26 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar26 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))();
    }
  }
  uVar63 = *param_5;
  lVar35 = lVar35 + (long)iVar24 * 0xd0;
  *(undefined8 *)(lVar35 + 0x88) = param_5[1];
  *(undefined8 *)(lVar35 + 0x80) = uVar63;
  auVar38 = *(undefined1 (*) [16])(param_5 + 2);
  plVar22 = (long *)(lVar35 + 0xa8);
  *(long *)(lVar35 + 0x98) = auVar38._8_8_;
  *(undefined8 *)(lVar35 + 0x90) = auVar38._0_8_;
  *(int *)(lVar35 + 0xa0) = param_6;
  iVar24 = *(int *)(param_3 + 0x20);
  lVar26 = (long)iVar24;
  if ((int)(piVar32[0x2d] & 0x7fffffffU) < iVar24) {
    FUN_030fe388(plVar22,PTR_PTR_047d1a50,lVar26);
  }
  iVar25 = *piVar34;
  lVar27 = (long)iVar25;
  if (iVar25 < iVar24) {
    lVar29 = *plVar22;
    *piVar34 = iVar24;
    puVar31 = (undefined8 *)(lVar29 + lVar27 * 0x10);
    do {
      puVar28 = puVar31 + 2;
      *puVar31 = 0;
      puVar31[1] = 0x8000000000000000;
      puVar31 = puVar28;
    } while (puVar28 != (undefined8 *)(lVar29 + lVar26 * 0x10));
  }
  else if (iVar24 < iVar25) {
    lVar29 = *plVar22;
    *piVar34 = iVar24;
    puVar20 = PTR_PTR_047d1a50;
    lVar26 = lVar26 * 0x10 + lVar27 * -0x10;
    puVar30 = (undefined4 *)(lVar29 + lVar27 * 0x10 + -8);
    do {
      *puVar30 = 0;
      if ((-1 < (int)puVar30[1]) && (*(long *)(puVar30 + -2) != 0)) {
        (**(code **)(*(long *)puVar20 + 0x20))
                  (puVar20,*(long *)(puVar30 + -2),(ulong)(uint)puVar30[1] << 2);
      }
      *(undefined8 *)(puVar30 + -2) = 0;
      lVar26 = lVar26 + 0x10;
      puVar30[1] = 0x80000000;
      puVar30 = puVar30 + -4;
    } while (lVar26 != 0);
  }
  *(undefined1 *)((long)piVar32 + 0xca) = 1;
  auVar80 = *(undefined1 (*) [16])(*plVar33 + 0x90);
  auVar38 = *(undefined1 (*) [16])(*plVar33 + 0xa0);
  fVar53 = auVar38._0_4_;
  fVar79 = auVar80._0_4_;
  iVar24 = -(uint)(fVar53 < fVar79);
  fVar40 = auVar38._4_4_;
  fVar61 = auVar80._4_4_;
  iVar25 = -(uint)(fVar40 < fVar61);
  fVar57 = auVar38._8_4_;
  fVar62 = auVar80._8_4_;
  iVar75 = -(uint)(fVar57 < fVar62);
  if (CONCAT13((byte)((uint)iVar25 >> 0x18) | (byte)((uint)iVar24 >> 0x18) |
               (byte)((uint)iVar75 >> 0x18),
               CONCAT12((byte)((uint)iVar25 >> 0x10) | (byte)((uint)iVar24 >> 0x10) |
                        (byte)((uint)iVar75 >> 0x10),
                        CONCAT11((byte)((uint)iVar25 >> 8) | (byte)((uint)iVar24 >> 8) |
                                 (byte)((uint)iVar75 >> 8),
                                 (byte)iVar25 | (byte)iVar24 | (byte)iVar75))) == 0) {
    uVar63 = *(undefined8 *)(lVar35 + 0x80);
    fVar55 = (float)uVar63;
    fVar36 = (float)((ulong)uVar63 >> 0x20);
    fVar43 = fVar36 + fVar36;
    fVar54 = (float)*(undefined8 *)(lVar35 + 0x88);
    fVar50 = fVar54 + fVar54;
    fVar49 = (fVar55 + fVar55) * fVar55;
    fVar51 = fVar50 * fVar55;
    fVar41 = (float)((ulong)*(undefined8 *)(lVar35 + 0x88) >> 0x20);
    fVar58 = (fVar55 + fVar55) * fVar41;
    fVar56 = 1.0 - fVar54 * fVar50;
    fVar69 = fVar50 * fVar36 - fVar58;
    fVar74 = fVar56 - fVar43 * fVar36;
    fVar56 = fVar56 - fVar49;
    fVar77 = fVar43 * fVar55 + fVar50 * fVar41;
    fVar54 = fVar43 * fVar55 - fVar50 * fVar41;
    in_q6 = ZEXT416((uint)fVar51);
    fVar58 = fVar50 * fVar36 + fVar58;
    fVar78 = fVar51 - fVar43 * fVar41;
    fVar51 = fVar51 + fVar43 * fVar41;
    fVar55 = (1.0 - fVar49) - fVar43 * fVar36;
    fVar36 = ABS((fVar53 - fVar79) * 0.5);
    fVar41 = ABS((fVar40 - fVar61) * 0.5);
    fVar43 = ABS((fVar57 - fVar62) * 0.5);
    fVar53 = (fVar79 + fVar53) * 0.5;
    fVar79 = (fVar61 + fVar40) * 0.5;
    fVar61 = (fVar62 + fVar57) * 0.5;
    fVar50 = ABS(fVar51 * fVar43) + ABS(fVar54 * fVar41) + ABS(fVar74 * fVar36);
    fVar49 = ABS(fVar69 * fVar43) + ABS(fVar56 * fVar41) + ABS(fVar77 * fVar36);
    fVar52 = ABS(fVar55 * fVar43) + ABS(fVar58 * fVar41) + ABS(fVar78 * fVar36);
    fVar36 = ABS(fVar43 * 0.0) + ABS(fVar51 * fVar41) + ABS(fVar69 * fVar36);
    uVar63 = *(undefined8 *)(lVar35 + 0x90);
    fVar40 = (float)uVar63 + fVar51 * fVar61 + fVar54 * fVar79 + fVar74 * fVar53;
    fVar57 = (float)((ulong)uVar63 >> 0x20) + fVar69 * fVar61 + fVar56 * fVar79 + fVar77 * fVar53;
    fVar62 = (float)*(undefined8 *)(lVar35 + 0x98) +
             fVar55 * fVar61 + fVar58 * fVar79 + fVar78 * fVar53;
    fVar53 = (float)((ulong)*(undefined8 *)(lVar35 + 0x98) >> 0x20) +
             fVar61 * 0.0 + fVar51 * fVar79 + fVar69 * fVar53;
    auVar38._0_4_ = fVar40 + fVar50;
    auVar38._4_4_ = fVar57 + fVar49;
    auVar38._8_4_ = fVar62 + fVar52;
    auVar38._12_4_ = fVar53 + fVar36;
    auVar80._0_4_ = fVar40 - fVar50;
    auVar80._4_4_ = fVar57 - fVar49;
    auVar80._8_4_ = fVar62 - fVar52;
    auVar80._12_4_ = fVar53 - fVar36;
  }
  fVar53 = *(float *)(*plVar33 + 0xb0);
  fVar40 = *(float *)(param_1 + (long)*(int *)(lVar35 + 0xa0) * 4 + 200);
  if ((*(byte *)(*plVar33 + 0x80) & 1) == 0) {
    uVar63 = *(undefined8 *)(param_1 + 0x158);
    fVar36 = -(float)*(undefined8 *)(param_1 + 0x150);
    fVar54 = -(float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
    fVar41 = -(float)uVar63;
    fVar79 = (float)((ulong)uVar63 >> 0x20);
    fVar57 = fVar36 * fVar36;
    auVar68 = NEON_fmov(0x3f800000,4);
    auVar70[0xc] = (char)((ulong)uVar63 >> 0x20);
    auVar70._8_4_ = fVar41;
    auVar70[0xd] = (char)((ulong)uVar63 >> 0x28);
    auVar70[0xe] = (char)((ulong)uVar63 >> 0x30);
    auVar70[0xf] = (char)((ulong)uVar63 >> 0x38);
    auVar70[4] = SUB41(fVar54,0);
    auVar70._0_4_ = fVar36;
    auVar70[5] = (char)((uint)fVar54 >> 8);
    auVar70[6] = (char)((uint)fVar54 >> 0x10);
    auVar70[7] = (char)((uint)fVar54 >> 0x18);
    auVar73._8_8_ = _UNK_03caaa68;
    auVar73._0_8_ = _DAT_03caaa60;
    auVar14._4_8_ = in_q6._8_8_;
    auVar14._0_4_ = fVar57;
    auVar65._0_8_ = auVar14._0_8_ << 0x20;
    auVar65._8_4_ = fVar57;
    auVar65._12_4_ = fVar57;
    fVar61 = fVar54 * fVar54 + fVar57;
    fVar62 = fVar41 * fVar41 + fVar57;
    auVar15._4_8_ = auVar65._8_8_;
    auVar15._0_4_ = SQRT(fVar61);
    auVar66._0_8_ = auVar15._0_8_ << 0x20;
    auVar66._8_4_ = SQRT(fVar62);
    auVar66._12_4_ = SQRT(fVar79 * fVar79 + fVar57);
    fVar57 = auVar68._4_4_ / SQRT(fVar61);
    auVar16._4_8_ = auVar66._8_8_;
    auVar16._0_4_ = fVar57;
    auVar67._0_8_ = auVar16._0_8_ << 0x20;
    auVar67._8_4_ = auVar68._8_4_ / auVar66._8_4_;
    auVar67._12_4_ = auVar68._12_4_ / auVar66._12_4_;
    auVar71._0_12_ = auVar70._0_12_;
    auVar71._12_4_ = 0;
    auVar68 = a64_TBL(ZEXT816(0),auVar71,auVar73);
    auVar12[8] = (char)_UNK_03cabbb8;
    auVar12._0_8_ = _DAT_03cabbb0;
    auVar12[9] = (char)((ulong)_UNK_03cabbb8 >> 8);
    auVar12[10] = (char)((ulong)_UNK_03cabbb8 >> 0x10);
    auVar12[0xb] = (char)((ulong)_UNK_03cabbb8 >> 0x18);
    auVar12[0xc] = (char)((ulong)_UNK_03cabbb8 >> 0x20);
    auVar12[0xd] = (char)((ulong)_UNK_03cabbb8 >> 0x28);
    auVar12[0xe] = (char)((ulong)_UNK_03cabbb8 >> 0x30);
    auVar12[0xf] = (char)((ulong)_UNK_03cabbb8 >> 0x38);
    auVar72 = a64_TBL(ZEXT816(0),auVar71,auVar12);
    iVar24 = -(uint)(fVar61 <= 0.0);
    iVar25 = -(uint)(fVar62 <= 0.0);
    uVar59 = CONCAT44(-(uint)(fVar62 < fVar61),-(uint)(fVar62 < fVar61));
    uVar60 = uVar59 & 0x100000001;
    iVar75 = (int)uVar60;
    iVar76 = (int)(uVar60 >> 0x20);
    auVar17._1_11_ = auVar67._5_11_;
    auVar17[0] = SUB41(fVar57,0) & ~(byte)iVar24;
    auVar64._0_8_ =
         CONCAT17((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                  CONCAT16((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                           CONCAT15((byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                    auVar17._0_5_ << 0x20)));
    auVar64[8] = SUB41(auVar67._8_4_,0) & ~(byte)iVar25;
    auVar64[9] = (byte)((uint)auVar67._8_4_ >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar64[10] = (byte)((uint)auVar67._8_4_ >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar64[0xb] = (byte)((uint)auVar67._8_4_ >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    auVar13._4_4_ = (iVar76 << 0x1f) >> 0x1f;
    auVar13._0_4_ = (iVar75 << 0x1f) >> 0x1f;
    auVar13._8_4_ = (iVar75 << 0x1f) >> 0x1f;
    auVar13._12_4_ = (iVar76 << 0x1f) >> 0x1f;
    auVar72 = auVar72 ^ (auVar72 ^ auVar68) & auVar13;
    fVar50 = -auVar72._0_4_;
    fVar43 = auVar72._4_4_;
    uVar21 = (undefined4)((ulong)auVar64._0_8_ >> 0x20);
    uVar60 = CONCAT44(auVar64._8_4_,auVar64._8_4_);
    uVar60 = uVar60 ^ (uVar60 ^ CONCAT44(uVar21,uVar21)) & uVar59;
    auVar68 = NEON_ext(auVar72,auVar72,8,1);
    uVar63 = NEON_ext(CONCAT44(fVar43,fVar50),auVar68._0_8_,4,1);
    auVar8._4_4_ = fVar54;
    auVar8._0_4_ = fVar36;
    auVar8._8_4_ = fVar41;
    auVar8._12_4_ = -fVar79;
    auVar9._4_4_ = fVar54;
    auVar9._0_4_ = fVar36;
    auVar9._8_4_ = fVar41;
    auVar9._12_4_ = -fVar79;
    auVar68 = NEON_ext(auVar8,auVar9,4,1);
    fVar58 = (float)uVar60;
    fVar51 = (float)(uVar60 >> 0x20);
    fVar62 = auVar68._0_4_ * fVar50 - fVar36 * (float)uVar63;
    fVar57 = auVar68._4_4_ * fVar43 - fVar54 * (float)((ulong)uVar63 >> 0x20);
    fVar61 = fVar36 * auVar72._8_4_ - fVar41 * fVar50;
    fVar55 = fVar54 * auVar72._12_4_ - fVar79 * fVar43;
    auVar10._4_4_ = fVar57;
    auVar10._0_4_ = fVar62;
    auVar10._8_4_ = fVar61;
    auVar10._12_4_ = fVar55;
    auVar11._4_4_ = fVar57;
    auVar11._0_4_ = fVar62;
    auVar11._8_4_ = fVar61;
    auVar11._12_4_ = fVar55;
    auVar68 = NEON_ext(auVar10,auVar11,4,1);
    fVar57 = fVar53 * 1.45 * (ABS(fVar58 * fVar50) + ABS(fVar58 * auVar68._0_4_));
    fVar61 = fVar53 * 1.45 * (ABS(fVar51 * fVar43) + ABS(fVar51 * auVar68._4_4_));
    fVar62 = fVar53 * 1.45 * (ABS(fVar58 * auVar72._8_4_) + ABS(fVar58 * fVar62));
    fVar53 = fVar53 * 1.45 * (ABS(fVar51 * auVar72._12_4_) + ABS(fVar51 * 0.0));
    auVar81._0_4_ = auVar80._0_4_ - fVar57;
    auVar81._4_4_ = auVar80._4_4_ - fVar61;
    auVar81._8_4_ = auVar80._8_4_ - fVar62;
    auVar81._12_4_ = auVar80._12_4_ - fVar53;
    auVar39._0_4_ = auVar38._0_4_ + fVar57;
    auVar39._4_4_ = auVar38._4_4_ + fVar61;
    auVar39._8_4_ = auVar38._8_4_ + fVar62;
    auVar39._12_4_ = auVar38._12_4_ + fVar53;
    fVar53 = -fVar40;
    fVar40 = -fVar40;
    fVar79 = fVar79 * (float)CONCAT13((char)((uint)fVar40 >> 0x18),
                                      CONCAT12((char)((uint)fVar40 >> 0x10),
                                               (short)(CONCAT15((char)((uint)fVar40 >> 8),
                                                                CONCAT14(SUB41(fVar40,0),fVar53)) >>
                                                      0x20)));
    fVar61 = fVar54 * fVar40 + auVar39._4_4_;
    fVar62 = fVar41 * fVar53 + auVar39._8_4_;
    fVar55 = fVar79 + auVar39._12_4_;
    fVar40 = fVar54 * fVar40 + auVar81._4_4_;
    fVar57 = fVar41 * fVar53 + auVar81._8_4_;
    fVar79 = fVar79 + auVar81._12_4_;
    auVar7[4] = SUB41(fVar61,0);
    auVar7._0_4_ = fVar36 * fVar53 + auVar39._0_4_;
    auVar7[5] = (char)((uint)fVar61 >> 8);
    auVar7[6] = (char)((uint)fVar61 >> 0x10);
    auVar7[7] = (char)((uint)fVar61 >> 0x18);
    auVar7[8] = SUB41(fVar62,0);
    auVar7[9] = (char)((uint)fVar62 >> 8);
    auVar7[10] = (char)((uint)fVar62 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar62 >> 0x18);
    auVar7[0xc] = SUB41(fVar55,0);
    auVar7[0xd] = (char)((uint)fVar55 >> 8);
    auVar7[0xe] = (char)((uint)fVar55 >> 0x10);
    auVar7[0xf] = (char)((uint)fVar55 >> 0x18);
    auVar68 = NEON_fmax(auVar39,auVar7,4);
    auVar5[4] = SUB41(fVar40,0);
    auVar5._0_4_ = fVar36 * fVar53 + auVar81._0_4_;
    auVar5[5] = (char)((uint)fVar40 >> 8);
    auVar5[6] = (char)((uint)fVar40 >> 0x10);
    auVar5[7] = (char)((uint)fVar40 >> 0x18);
    auVar5[8] = SUB41(fVar57,0);
    auVar5[9] = (char)((uint)fVar57 >> 8);
    auVar5[10] = (char)((uint)fVar57 >> 0x10);
    auVar5[0xb] = (char)((uint)fVar57 >> 0x18);
    auVar5[0xc] = SUB41(fVar79,0);
    auVar5[0xd] = (char)((uint)fVar79 >> 8);
    auVar5[0xe] = (char)((uint)fVar79 >> 0x10);
    auVar5[0xf] = (char)((uint)fVar79 >> 0x18);
    auVar72 = NEON_fmin(auVar81,auVar5,4);
  }
  else {
    fVar57 = fVar53 * 1.45;
    uVar63 = NEON_fmax(CONCAT17((char)((uint)fVar57 >> 0x18),
                                CONCAT16((char)((uint)fVar57 >> 0x10),
                                         CONCAT15((char)((uint)fVar57 >> 8),
                                                  CONCAT14(SUB41(fVar57,0),fVar53 * 1.45)))),
                       CONCAT17((char)((uint)fVar40 >> 0x18),
                                CONCAT16((char)((uint)fVar40 >> 0x10),
                                         CONCAT15((char)((uint)fVar40 >> 8),
                                                  CONCAT14(SUB41(fVar40,0),fVar40)))),4);
    fVar53 = (float)uVar63;
    auVar68._0_4_ = auVar38._0_4_ + fVar53;
    fVar40 = (float)((ulong)uVar63 >> 0x20);
    auVar68._4_4_ = auVar38._4_4_ + fVar40;
    auVar68._8_4_ = auVar38._8_4_ + fVar53;
    auVar68._12_4_ = auVar38._12_4_ + fVar40;
    auVar72._0_4_ = auVar80._0_4_ - fVar53;
    auVar72._4_4_ = auVar80._4_4_ - fVar40;
    auVar72._8_4_ = auVar80._8_4_ - fVar53;
    auVar72._12_4_ = auVar80._12_4_ - fVar40;
  }
  uVar82 = auVar72._8_8_;
  uVar63 = auVar72._0_8_;
  uStack_288 = auVar68._8_8_;
  local_290 = auVar68._0_8_;
  iVar24 = *(int *)(param_1 + 0x38);
  local_2a0 = uVar63;
  uStack_298 = uVar82;
  iVar25 = iVar24;
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) <= iVar24) {
    FUN_030fe544(param_1 + 0x30,(long)iVar24 + 1);
    iVar25 = *(int *)(param_1 + 0x38);
  }
  puVar31 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar25 * 0x50);
  *(int *)(param_1 + 0x38) = (int)((long)iVar24 + 1);
  puVar31[1] = uVar82;
  *puVar31 = uVar63;
  *(undefined1 *)(puVar31 + 8) = 0;
  puVar31[3] = uStack_288;
  puVar31[2] = local_290;
  uVar21 = FUN_0086f578(param_1 + 0x60,&local_2a0,iVar24);
  *(undefined4 *)((long)puVar31 + 0x44) = uVar21;
  local_278 = local_268;
  local_270 = -0x7fffff8000000000;
  FUN_0087011c(param_1 + 0x40,&local_2a0,&local_278);
  if ((int)local_270 != 0) {
    lVar26 = (long)(int)local_270 << 2;
    piVar32 = local_278;
    do {
      iVar25 = *piVar32;
      puVar31 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar25 * 0x50);
      iVar37 = -(uint)((float)local_2a0 <= *(float *)(puVar31 + 2));
      iVar42 = -(uint)((float)((ulong)local_2a0 >> 0x20) <= *(float *)((long)puVar31 + 0x14));
      iVar44 = -(uint)((float)uStack_298 <= *(float *)(puVar31 + 3));
      iVar75 = -(uint)((float)*puVar31 <= (float)local_290);
      iVar76 = -(uint)((float)((ulong)*puVar31 >> 0x20) <= (float)((ulong)local_290 >> 0x20));
      iVar6 = -(uint)((float)puVar31[1] <= (float)uStack_288);
      if (CONCAT13((byte)((uint)iVar76 >> 0x18) & (byte)((uint)iVar42 >> 0x18) &
                   (byte)((uint)iVar75 >> 0x18) & (byte)((uint)iVar37 >> 0x18) &
                   (byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar44 >> 0x18),
                   CONCAT12((byte)((uint)iVar76 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                            (byte)((uint)iVar75 >> 0x10) & (byte)((uint)iVar37 >> 0x10) &
                            (byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar44 >> 0x10),
                            CONCAT11((byte)((uint)iVar76 >> 8) & (byte)((uint)iVar42 >> 8) &
                                     (byte)((uint)iVar75 >> 8) & (byte)((uint)iVar37 >> 8) &
                                     (byte)((uint)iVar6 >> 8) & (byte)((uint)iVar44 >> 8),
                                     (byte)iVar76 & (byte)iVar42 & (byte)iVar75 & (byte)iVar37 &
                                     (byte)iVar6 & (byte)iVar44))) != 0) {
        iVar75 = *(int *)(param_1 + 0x88);
        lVar35 = (long)iVar75;
        if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) <= iVar75) {
          FUN_030fe6ec(param_1 + 0x80,lVar35 + 1);
          iVar75 = *(int *)(param_1 + 0x88);
        }
        piVar34 = (int *)(*(long *)(param_1 + 0x80) + (long)iVar75 * 8);
        *(int *)(param_1 + 0x88) = (int)(lVar35 + 1);
        *piVar34 = iVar25;
        piVar34[1] = iVar24;
        FUN_030fcb70(param_1,iVar25,iVar24);
      }
      piVar32 = piVar32 + 1;
      lVar26 = lVar26 + -4;
    } while (lVar26 != 0);
  }
  lVar26 = local_270;
  uVar60 = (ulong)local_270._4_4_;
  local_270 = (ulong)local_270._4_4_ << 0x20;
  if ((-1 < lVar26) && (local_278 != (int *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_278,uVar60 << 2);
  }
  fVar53 = *(float *)(param_1 + 0x180);
  *(undefined1 *)(param_1 + 0xc4) = 1;
  iVar24 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (iVar24 == 0) {
    uVar45 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
  }
  else {
    uVar60 = (long)iVar24 * 0xd0 - 0xd0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar60;
    lVar26 = *(long *)(param_1 + 0x90);
    if ((SUB164(auVar4 * ZEXT816(0x4ec4ec4ec4ec4ec5),8) >> 6 & 1) == 0) {
      fVar40 = *(float *)(*(long *)(lVar26 + 8) + 0xb0);
      uVar45 = SUB41(fVar40,0);
      uVar46 = (undefined1)((uint)fVar40 >> 8);
      uVar47 = (undefined1)((uint)fVar40 >> 0x10);
      uVar48 = (undefined1)((uint)fVar40 >> 0x18);
      if (fVar40 <= 0.0) {
        uVar45 = 0;
        uVar46 = 0;
        uVar47 = 0;
        uVar48 = 0;
      }
      *(uint *)(param_1 + 0x180) = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
      lVar35 = lVar26 + 0xd0;
    }
    else {
      uVar45 = 0;
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
      lVar35 = lVar26;
    }
    if (0xcf < uVar60) {
      do {
        fVar40 = *(float *)(*(long *)(lVar35 + 8) + 0xb0);
        if ((float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) == fVar40 ||
            (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) < fVar40) {
          uVar45 = SUB41(fVar40,0);
          uVar46 = (undefined1)((uint)fVar40 >> 8);
          uVar47 = (undefined1)((uint)fVar40 >> 0x10);
          uVar48 = (char)((uint)fVar40 >> 0x18);
        }
        *(uint *)(param_1 + 0x180) = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
        plVar33 = (long *)(lVar35 + 0xd8);
        lVar35 = lVar35 + 0x1a0;
        fVar40 = *(float *)(*plVar33 + 0xb0);
        if ((float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) == fVar40 ||
            (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) < fVar40) {
          uVar45 = SUB41(fVar40,0);
          uVar46 = (undefined1)((uint)fVar40 >> 8);
          uVar47 = (undefined1)((uint)fVar40 >> 0x10);
          uVar48 = (char)((uint)fVar40 >> 0x18);
        }
        *(uint *)(param_1 + 0x180) = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
      } while (lVar26 + (long)iVar24 * 0xd0 != lVar35);
    }
  }
  if ((float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) != fVar53) {
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar27 = 0;
      lVar26 = 0;
      lVar35 = 0;
      do {
        lVar29 = *(long *)(param_1 + 0xa0) + lVar26;
        lVar26 = lVar26 + 0x60;
        fVar55 = *(float *)(lVar29 + 0x10);
        fVar36 = *(float *)(lVar29 + 0x14);
        fVar54 = *(float *)(lVar29 + 0x18);
        fVar41 = *(float *)(lVar29 + 0x1c);
        uVar82 = *(undefined8 *)(lVar29 + 0x28);
        uVar63 = *(undefined8 *)(lVar29 + 0x20);
        fVar57 = (float)*(undefined8 *)(lVar29 + 0x40);
        fVar79 = (float)((ulong)*(undefined8 *)(lVar29 + 0x40) >> 0x20);
        fVar53 = (float)((ulong)uVar63 >> 0x20) + fVar79;
        fVar61 = (float)*(undefined8 *)(lVar29 + 0x48);
        fVar62 = (float)((ulong)*(undefined8 *)(lVar29 + 0x48) >> 0x20);
        fVar40 = (float)((ulong)uVar82 >> 0x20) + fVar62;
        lVar1 = *(long *)(param_1 + 0x20) + lVar27;
        *(undefined1 *)(lVar1 + 0x40) = 1;
        lVar35 = lVar35 + 1;
        *(float *)(lVar1 + 0x28) = fVar54 + fVar61;
        *(float *)(lVar1 + 0x2c) = fVar41 + fVar62;
        *(float *)(lVar1 + 0x20) = fVar55 + fVar57;
        *(float *)(lVar1 + 0x24) = fVar36 + fVar79;
        *(ulong *)(lVar1 + 0x38) =
             CONCAT17((char)((uint)fVar40 >> 0x18),
                      CONCAT16((char)((uint)fVar40 >> 0x10),
                               CONCAT15((char)((uint)fVar40 >> 8),
                                        CONCAT14(SUB41(fVar40,0),(float)uVar82 + fVar61))));
        *(ulong *)(lVar1 + 0x30) =
             CONCAT17((char)((uint)fVar53 >> 0x18),
                      CONCAT16((char)((uint)fVar53 >> 0x10),
                               CONCAT15((char)((uint)fVar53 >> 8),
                                        CONCAT14(SUB41(fVar53,0),(float)uVar63 + fVar57))));
        *(undefined1 *)(lVar29 + 0x52) = 1;
        lVar27 = lVar27 + 0x50;
      } while (lVar35 < *(int *)(param_1 + 0xa8));
    }
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
}


