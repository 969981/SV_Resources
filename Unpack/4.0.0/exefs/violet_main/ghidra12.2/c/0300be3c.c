/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300be3c; name: FUN_0300be3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0300be3c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 (*pauVar3) [16];
  float *pfVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong uVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined *puVar25;
  int iVar26;
  uint uVar27;
  long *plVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long *plVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  undefined1 auVar45 [12];
  float fVar61;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  int iVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  float fVar75;
  undefined1 auVar64 [12];
  float fVar77;
  float fVar78;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar76;
  undefined1 auVar74 [16];
  undefined8 uVar79;
  undefined1 auVar81 [16];
  undefined8 uVar80;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar93;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar94;
  int iVar95;
  int iVar98;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar100;
  undefined1 auVar99 [16];
  undefined8 uVar101;
  undefined8 uVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  long *local_220;
  undefined4 local_218;
  uint local_214;
  int local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  float local_1f0;
  float fStack_1ec;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined2 uStack_1b4;
  undefined1 uStack_1b2;
  undefined *local_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [16];
  
  puVar31 = param_1 + 8;
  *puVar31 = 0;
  param_1[9] = 0x8000000000000000;
  puVar32 = param_1 + 10;
  *puVar32 = 0;
  param_1[0xb] = 0x8000000000000000;
  param_1[0x14] = 0;
  puVar25 = PTR_DAT_047d19f0;
  iVar26 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_2 + 3) * 0x200 + 0x78))
                     (param_2);
  if ((iVar26 == 0) && (2 < *(int *)((long)param_2 + 0x44))) {
    uStack_e4 = 0xc;
    uStack_1f8 = 0xbf8000003f800000;
    local_f0 = (undefined *)0x0;
    if ((int)param_2[8] != 0) {
      local_f0 = (undefined *)((long)param_2 + (long)(int)param_2[8] + 0x40);
    }
    local_1f0 = (float)CONCAT22(local_1f0._2_2_,0x101);
    local_1c0 = 0;
    uStack_1b2 = 0;
    local_200 = (undefined1 (*) [16])CONCAT35(local_200._5_3_,0x3c23d70a);
    uStack_1e8 = PTR_DAT_047ddc10 + 0x10;
    local_1e0 = 0xffffffff;
    uStack_1d8 = 1;
    local_1d0 = 0x3fc0000000000002;
    fStack_1c8 = -1000.0;
    uStack_1b8 = 0xfc;
    uStack_1b4 = 0x100;
    iStack_e8 = *(int *)((long)param_2 + 0x44);
    FUN_011711f0(&local_220,&local_f0,&local_200);
    plVar39 = local_220;
    if (param_2[1] != 0) goto LAB_0300bf98;
  }
  else {
    plVar39 = param_2;
    if (param_2[1] != 0) {
      plVar28 = param_2 + 2;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *plVar28 = *plVar28 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_0300bf98:
      plVar28 = param_2 + 2;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *plVar28 = *plVar28 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
  }
  plVar28 = (long *)param_1[0x14];
  param_1[0x14] = param_2;
  if ((plVar28 != (long *)0x0) && (plVar28[1] != 0)) {
    plVar2 = plVar28 + 2;
    do {
      lVar33 = *plVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = lVar33 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar33 + -1 == 0) {
      (**(code **)(*plVar28 + 0x18))();
    }
  }
  lVar33 = plVar39[6];
  plVar28 = (long *)0x0;
  if (lVar33 != 0) {
    plVar28 = (long *)(lVar33 + (long)(plVar39 + 6));
  }
  if ((int)plVar39[7] != 0) {
    lVar33 = (long)(int)plVar39[7] << 3;
    do {
      lVar29 = *plVar28 + (long)plVar28;
      if ((*plVar28 != 0 && lVar29 != 0) && (*(short *)(lVar29 + 0x18) == -0xf00)) {
        uVar79 = *(undefined8 *)(lVar29 + 0x30);
        auVar65._0_8_ =
             CONCAT17((char)((ulong)uVar79 >> 0x18),
                      CONCAT16((char)((ulong)uVar79 >> 0x10),
                               (uint6)(ushort)((ushort)uVar79 ^ 0x8000) << 0x10)) ^
             0x8000000000000000;
        auVar65._8_2_ = 0;
        auVar65[10] = (undefined1)((ulong)uVar79 >> 0x20);
        auVar65[0xb] = (byte)((ulong)uVar79 >> 0x28) ^ 0x80;
        auVar65._12_2_ = 0;
        auVar65[0xe] = (undefined1)((ulong)uVar79 >> 0x30);
        auVar65[0xf] = (byte)((ulong)uVar79 >> 0x38) ^ 0x80;
        auVar65 = NEON_scvtf(auVar65,4);
        fVar63 = auVar65._0_4_ * 5.086263e-10;
        fVar75 = auVar65._4_4_ * 5.086263e-10;
        fVar77 = auVar65._8_4_ * 5.086263e-10;
        fVar78 = auVar65._12_4_ * 5.086263e-10;
        auVar81._0_4_ = fVar63 * fVar63;
        auVar81._4_4_ = fVar75 * fVar75;
        auVar81._8_4_ = fVar77 * fVar77;
        auVar81._12_4_ = fVar78 * fVar78;
        auVar65 = NEON_ext(auVar81,auVar81,8,1);
        fVar94 = auVar65._0_4_ + auVar65._4_4_;
        fVar44 = auVar81._0_4_ + auVar81._4_4_ + fVar94;
        fVar109 = 0.0;
        fVar61 = 0.0;
        fStack_1c8 = 0.0;
        fStack_1c4 = 0.0;
        if (fVar44 != 0.0) {
          fVar44 = SQRT(fVar44);
          fStack_1c4 = SQRT(auVar81._0_4_ + auVar81._4_4_ + fVar94);
          fVar109 = fVar63 / fVar44;
          fVar61 = fVar75 / fStack_1c4;
          fStack_1c8 = fVar77 / fVar44;
          fStack_1c4 = fVar78 / fStack_1c4;
        }
        uVar79 = *(undefined8 *)(lVar29 + 0x28);
        auVar82._0_6_ = (uint6)(ushort)uVar79 << 0x10;
        auVar82._6_2_ = (short)((ulong)uVar79 >> 0x10);
        auVar82._8_2_ = 0;
        auVar82._10_2_ = (short)((ulong)uVar79 >> 0x20);
        auVar82._12_2_ = 0;
        auVar82._14_2_ = (short)((ulong)uVar79 >> 0x30);
        auVar65 = NEON_scvtf(auVar82,4);
        fVar44 = auVar82._12_4_;
        auVar64._0_8_ = CONCAT44(auVar65._4_4_ * fVar44,auVar65._0_4_ * fVar44);
        auVar64._8_4_ = auVar65._8_4_ * fVar44;
        auVar88._12_4_ = auVar65._12_4_ * fVar44;
        auVar88._0_12_ = auVar64;
        uStack_1d8 = auVar88._8_8_;
        uVar79 = *(undefined8 *)(lVar29 + 0x20);
        auVar116._0_6_ = (int6)CONCAT82(SUB128(ZEXT812(0),4),(short)uVar79) << 0x10;
        auVar116._6_2_ = (short)((ulong)uVar79 >> 0x10);
        auVar116._8_2_ = 0;
        auVar116._10_2_ = (short)((ulong)uVar79 >> 0x20);
        auVar116._12_2_ = 0;
        auVar116._14_2_ = (short)((ulong)uVar79 >> 0x30);
        auVar65 = NEON_scvtf(auVar116,4);
        fVar44 = auVar116._12_4_;
        local_1f0 = auVar65._0_4_ * fVar44;
        fStack_1ec = auVar65._4_4_ * fVar44;
        uStack_1e8 = (undefined *)CONCAT44(auVar65._12_4_ * fVar44,auVar65._8_4_ * fVar44);
        local_200._4_4_ = *(float *)(lVar29 + 0x38);
        local_1d0 = CONCAT44(fVar61,fVar109);
        local_1e0 = auVar64._0_8_;
        goto LAB_0300c0f0;
      }
      plVar28 = plVar28 + 1;
      lVar33 = lVar33 + -8;
    } while (lVar33 != 0);
  }
  iStack_e8 = -1;
  uStack_e4 = 0;
  uStack_e0 = 1;
  local_d8 = 2;
  local_d4 = 0x3fc00000;
  uStack_d0 = 0xc47a0000;
  local_f0 = PTR_DAT_047ddc10 + 0x10;
  (**(code **)(*(long *)puVar25 + (ulong)*(byte *)(plVar39 + 3) * 0x200 + 0x38))
            (plVar39,&local_f0,&local_200);
  auVar91._8_8_ = uStack_1d8;
  auVar91._0_8_ = local_1e0;
  auVar64 = auVar91._0_12_;
LAB_0300c0f0:
  uVar79 = NEON_fmaxp(auVar64._0_8_,auVar64._0_8_,4);
  uVar79 = NEON_fmax(CONCAT44(auVar64._8_4_,auVar64._8_4_),uVar79,4);
  iVar26 = -(uint)((float)uVar79 == 0.0);
  uVar40 = CONCAT13(~(byte)((uint)iVar26 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar26 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar26 >> 8),~(byte)iVar26)));
  param_1[0xc] = CONCAT44(local_200._4_4_ / (float)((ulong)uVar79 >> 0x20),
                          local_200._4_4_ / (float)uVar79) & CONCAT44(uVar40,uVar40);
  uStack_1f8 = 0;
  local_200 = (undefined1 (*) [16])0x0;
  (**(code **)(*(long *)puVar25 + (ulong)*(byte *)(plVar39 + 3) * 0x200 + 0x98))
            (plVar39,&local_200,param_1 + 1);
  fVar44 = *(float *)(plVar39 + 4);
  param_1[1] = CONCAT44((float)((ulong)param_1[1] >> 0x20) + fVar44,(float)param_1[1] + fVar44);
  uStack_1f8 = 0;
  local_200 = (undefined1 (*) [16])0x0;
  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(plVar39 + 3) * 0x200 + 0x28))
            (plVar39,&local_200,param_1 + 2);
  fVar44 = *(float *)(param_1 + 1);
  fVar63 = *(float *)((long)param_1 + 0xc);
  uVar79 = NEON_fmov(0x3f800000,4);
  fVar77 = (float)param_1[2];
  fVar94 = (float)uVar79;
  fVar75 = (float)((ulong)uVar79 >> 0x20);
  *(float *)(param_1 + 7) = fVar44;
  *(float *)((long)param_1 + 0x3c) = fVar77;
  *(float *)(param_1 + 6) = fVar44;
  *(float *)((long)param_1 + 0x34) = fVar63;
  fVar78 = (float)((ulong)param_1[2] >> 0x20);
  param_1[3] = CONCAT44(fVar75 / fVar63,fVar94 / fVar44);
  param_1[4] = CONCAT44(fVar63 / fVar78,fVar44 / fVar77);
  param_1[0x10] = CONCAT44(fVar63 * 0.5,fVar44 * 0.5);
  param_1[0x11] = CONCAT44(fVar63 * 0.01,fVar44 * 0.01);
  param_1[0x12] = 0x3b03126f3b03126f;
  *param_1 = CONCAT44(fVar63 * 0.5 + fVar78 * 0.5,fVar44 * 0.5 + fVar77 * 0.5);
  param_1[5] = CONCAT44(fVar78 - fVar63,fVar77 - fVar44);
  param_1[0x13] = CONCAT44(fVar63 * 0.002,fVar44 * 0.002);
  plVar28 = (long *)PTR_DAT_047d19f0;
  fVar44 = *(float *)(plVar39 + 4);
  auVar113._0_8_ = CONCAT44(fVar44,fVar44);
  auVar113._8_4_ = fVar44;
  auVar113._12_4_ = fVar44;
  param_1[0xf] = auVar113._8_8_;
  param_1[0xe] = auVar113._0_8_;
  iVar26 = (**(code **)(*plVar28 + (ulong)*(byte *)(plVar39 + 3) * 0x200 + 0x78))(plVar39);
  if (iVar26 == 0) {
    if ((char)plVar39[3] == '\x02') {
      pfVar4 = (float *)((long)(int)plVar39[8] + (long)(plVar39 + 8));
      fVar77 = *pfVar4;
      fVar78 = pfVar4[1];
      fVar63 = pfVar4[2];
      fVar44 = fVar77 * fVar77 + fVar78 * fVar78 + fVar63 * fVar63;
      if (fVar44 == 0.0) {
        fVar44 = 0.0;
        fVar109 = 0.0;
        auVar118 = ZEXT816(0);
      }
      else {
        fVar44 = SQRT(fVar44);
        fVar109 = SQRT(fVar77 * fVar77 + fVar78 * fVar78 + fVar63 * fVar63);
        auVar118._0_4_ = fVar77 / fVar44;
        auVar118._4_4_ = fVar78 / fVar109;
        auVar118._8_4_ = fVar63 / fVar44;
        auVar118._12_4_ = fVar63 / fVar109;
      }
      fVar93 = auVar118._0_4_;
      auVar56._0_4_ = fVar93 * fVar93;
      fVar100 = auVar118._4_4_;
      auVar56._4_4_ = fVar100 * fVar100;
      fVar103 = auVar118._8_4_;
      auVar56._8_4_ = fVar103 * fVar103;
      fVar104 = auVar118._12_4_;
      auVar56._12_4_ = fVar104 * fVar104;
      auVar92._8_8_ = _UNK_03cabbb8;
      auVar92._0_8_ = _DAT_03cabbb0;
      fVar61 = auVar56._4_4_ + auVar56._0_4_;
      auVar19._4_8_ = auVar56._8_8_;
      auVar19._0_4_ = fVar61;
      auVar57._0_8_ = auVar19._0_8_ << 0x20;
      auVar57._8_4_ = auVar56._8_4_ + auVar56._0_4_;
      auVar57._12_4_ = auVar56._12_4_ + auVar56._0_4_;
      auVar72._0_12_ = auVar118._0_12_;
      auVar72._12_4_ = 0;
      auVar84._8_8_ = _UNK_03caaa68;
      auVar84._0_8_ = _DAT_03caaa60;
      iVar26 = *(int *)(param_1 + 9);
      lVar33 = (long)iVar26;
      auVar81 = a64_TBL(ZEXT816(0),auVar72,auVar84);
      auVar65 = a64_TBL(ZEXT816(0),auVar72,auVar92);
      iVar62 = -(uint)(fVar61 <= 0.0);
      auVar20._4_8_ = auVar57._8_8_;
      auVar20._0_4_ = iVar62;
      auVar58._0_8_ = auVar20._0_8_ << 0x20;
      auVar58._8_4_ = -(uint)(auVar57._8_4_ <= 0.0);
      auVar58._12_4_ = -(uint)(auVar57._12_4_ <= 0.0);
      uVar38 = CONCAT44(-(uint)(auVar57._8_4_ < fVar61),-(uint)(auVar57._8_4_ < fVar61));
      uVar36 = uVar38 & 0x100000001;
      iVar95 = (int)uVar36;
      iVar98 = (int)(uVar36 >> 0x20);
      auVar96._0_4_ = (iVar95 << 0x1f) >> 0x1f;
      auVar96._4_4_ = (iVar98 << 0x1f) >> 0x1f;
      auVar96._8_4_ = (iVar95 << 0x1f) >> 0x1f;
      auVar96._12_4_ = (iVar98 << 0x1f) >> 0x1f;
      auVar65 = auVar65 ^ (auVar65 ^ auVar81) & auVar96;
      auVar81 = NEON_fmov(0x3f800000,4);
      fVar61 = auVar81._4_4_ / SQRT(fVar61);
      fVar105 = auVar81._8_4_ / SQRT(auVar57._8_4_);
      fVar86 = -auVar65._0_4_;
      auVar116 = NEON_ext(auVar65,auVar65,8,1);
      auVar21._1_11_ = auVar58._5_11_;
      auVar21[0] = SUB41(fVar61,0) & ~(byte)iVar62;
      auVar45._0_8_ =
           CONCAT17((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                    CONCAT16((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                             CONCAT15((byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar62 >> 8),
                                      auVar21._0_5_ << 0x20)));
      auVar45[8] = SUB41(fVar105,0) & ~(byte)auVar58._8_4_;
      auVar45[9] = (byte)((uint)fVar105 >> 8) & ~(byte)((uint)auVar58._8_4_ >> 8);
      auVar45[10] = (byte)((uint)fVar105 >> 0x10) & ~(byte)((uint)auVar58._8_4_ >> 0x10);
      auVar45[0xb] = (byte)((uint)fVar105 >> 0x18) & ~(byte)((uint)auVar58._8_4_ >> 0x18);
      auVar73._4_12_ = auVar65._4_12_;
      auVar73._0_4_ = fVar86;
      auVar81 = NEON_ext(auVar118,auVar118,4,1);
      uVar79 = NEON_ext(auVar73._0_8_,auVar116._0_8_,4,1);
      uVar40 = (undefined4)((ulong)auVar45._0_8_ >> 0x20);
      uVar36 = CONCAT44(auVar45._8_4_,auVar45._8_4_);
      uVar36 = uVar36 ^ (uVar36 ^ CONCAT44(uVar40,uVar40)) & uVar38;
      fVar76 = auVar65._4_4_;
      auVar89._0_4_ = fVar93 * (float)uVar79 - auVar81._0_4_ * fVar86;
      auVar89._4_4_ = fVar100 * (float)((ulong)uVar79 >> 0x20) - auVar81._4_4_ * fVar76;
      auVar89._8_4_ = fVar103 * fVar86 - fVar93 * auVar65._8_4_;
      auVar89._12_4_ = fVar104 * fVar76 - fVar100 * auVar65._12_4_;
      fVar61 = (float)uVar36;
      fVar105 = (float)(uVar36 >> 0x20);
      auVar97._0_8_ = CONCAT44(fVar105 * fVar76,fVar61 * fVar86);
      auVar97._8_4_ = fVar61 * auVar65._8_4_;
      auVar97._12_4_ = fVar105 * auVar65._12_4_;
      auVar65 = NEON_ext(auVar89,auVar89,4,1);
      auVar99._0_8_ = CONCAT44(fVar105 * auVar65._4_4_,fVar61 * auVar65._0_4_);
      auVar99._8_4_ = fVar61 * auVar89._0_4_;
      auVar99._12_4_ = fVar105 * 0.0;
      if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) <= iVar26) {
        FUN_0300cd3c(puVar31,lVar33 + 1);
        auVar99._8_8_ = auVar99._8_8_;
        auVar97._8_8_ = auVar97._8_8_;
        iVar26 = *(int *)(param_1 + 9);
      }
      auVar74._0_4_ = 0.0 - auVar97._0_4_;
      auVar74._4_4_ = 0.0 - auVar97._4_4_;
      auVar74._8_4_ = 0.0 - auVar97._8_4_;
      auVar74._12_4_ = 0.0 - auVar97._12_4_;
      auVar85._0_4_ = 0.0 - auVar99._0_4_;
      auVar85._4_4_ = 0.0 - auVar99._4_4_;
      auVar85._8_4_ = 0.0 - auVar99._8_4_;
      auVar85._12_4_ = 0.0 - auVar99._12_4_;
      auVar82 = NEON_ext(auVar97,auVar97,8,1);
      puVar31 = (undefined8 *)(param_1[8] + (long)iVar26 * 0x30);
      auVar88 = NEON_ext(auVar99,auVar99,8,1);
      auVar59._0_4_ = 0.0 - fVar77;
      auVar59._4_4_ = 0.0 - fVar78;
      auVar59._8_4_ = 0.0 - fVar63;
      auVar59._12_4_ = 0.0 - fVar63;
      *(int *)(param_1 + 9) = (int)(lVar33 + 1);
      uVar101 = CONCAT44(auVar85._4_4_,auVar74._4_4_);
      uVar80 = CONCAT44(auVar85._0_4_,auVar74._0_4_);
      auVar81 = NEON_ext(auVar74,auVar74,8,1);
      auVar116 = NEON_ext(auVar85,auVar85,8,1);
      uVar102 = CONCAT44(auVar59._4_4_,fVar78);
      uVar79 = CONCAT44(auVar59._0_4_,fVar77);
      auVar65 = NEON_ext(auVar59,auVar59,8,1);
      puVar31[1] = uVar80;
      *puVar31 = CONCAT44(auVar99._0_4_,auVar97._0_4_);
      puVar31[3] = uVar101;
      puVar31[2] = CONCAT44(auVar99._4_4_,auVar97._4_4_);
      uVar40 = auVar65._0_4_;
      uVar80 = CONCAT44(uVar40,fVar63);
      puVar31[5] = CONCAT44(auVar116._0_4_,auVar81._0_4_);
      puVar31[4] = CONCAT44(auVar88._0_4_,auVar82._0_4_);
      iVar26 = *(int *)(param_1 + 0xb);
      lVar33 = (long)iVar26;
      fVar94 = fVar94 / (fVar44 * fVar44 * (float)param_1[0xc] + fVar94);
      fVar75 = fVar75 / (fVar109 * fVar109 * (float)((ulong)param_1[0xc] >> 0x20) + fVar75);
      auVar60._0_8_ = CONCAT44(fVar75,fVar94);
      auVar60._8_8_ = auVar60._0_8_;
      if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x7fffffff) <= iVar26) {
        FUN_0300ce68(puVar32,lVar33 + 1);
        auVar60._4_4_ = fVar75;
        auVar60._0_4_ = fVar94;
        auVar60._8_4_ = fVar94;
        auVar60._12_4_ = fVar75;
        iVar26 = *(int *)(param_1 + 0xb);
      }
      puVar31 = (undefined8 *)(param_1[10] + (long)iVar26 * 0x50);
      *(int *)(param_1 + 0xb) = (int)(lVar33 + 1);
      *(float *)(puVar31 + 8) = fVar44;
      *(undefined4 *)((long)puVar31 + 0x44) = 0;
      puVar31[1] = uVar79;
      *puVar31 = uVar79;
      puVar31[3] = uVar102;
      puVar31[2] = uVar102;
      puVar31[5] = uVar80;
      puVar31[4] = CONCAT44(uVar40,fVar63);
      puVar31[7] = auVar60._8_8_;
      puVar31[6] = auVar60._0_8_;
      iVar26 = *(int *)(param_1 + 0xb);
      lVar33 = (long)iVar26;
      if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x7fffffff) <= iVar26) {
        FUN_0300ce68(puVar32,lVar33 + 1);
        auVar60._4_4_ = fVar75;
        auVar60._0_4_ = fVar94;
        auVar60._8_4_ = fVar94;
        auVar60._12_4_ = fVar75;
        iVar26 = *(int *)(param_1 + 0xb);
      }
      puVar31 = (undefined8 *)(param_1[10] + (long)iVar26 * 0x50);
      *(int *)(param_1 + 0xb) = (int)(lVar33 + 1);
      puVar31[1] = uVar79;
      *puVar31 = uVar79;
      puVar31[3] = uVar102;
      puVar31[2] = uVar102;
      *(float *)(puVar31 + 8) = fVar44;
      *(undefined4 *)((long)puVar31 + 0x44) = 0;
      puVar31[5] = uVar80;
      puVar31[4] = CONCAT44(uVar40,fVar63);
      puVar31[7] = auVar60._8_8_;
      puVar31[6] = auVar60._0_8_;
      iVar26 = *(int *)(param_1 + 0xb);
      lVar33 = (long)iVar26;
      if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x7fffffff) <= iVar26) {
        FUN_0300ce68(puVar32,lVar33 + 1);
        auVar60._4_4_ = fVar75;
        auVar60._0_4_ = fVar94;
        auVar60._8_4_ = fVar94;
        auVar60._12_4_ = fVar75;
        iVar26 = *(int *)(param_1 + 0xb);
      }
      puVar31 = (undefined8 *)(param_1[10] + (long)iVar26 * 0x50);
      *(int *)(param_1 + 0xb) = (int)(lVar33 + 1);
      puVar31[1] = uVar79;
      *puVar31 = uVar79;
      puVar31[3] = uVar102;
      puVar31[2] = uVar102;
      *(float *)(puVar31 + 8) = fVar44;
      *(undefined4 *)((long)puVar31 + 0x44) = 0;
      puVar31[5] = uVar80;
      puVar31[4] = CONCAT44(uVar40,fVar63);
      puVar31[7] = auVar60._8_8_;
      puVar31[6] = auVar60._0_8_;
      iVar26 = *(int *)(param_1 + 0xb);
      lVar33 = (long)iVar26;
      if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x7fffffff) <= iVar26) {
        FUN_0300ce68(puVar32,lVar33 + 1);
        auVar60._4_4_ = fVar75;
        auVar60._0_4_ = fVar94;
        auVar60._8_4_ = fVar94;
        auVar60._12_4_ = fVar75;
        iVar26 = *(int *)(param_1 + 0xb);
      }
      puVar32 = (undefined8 *)(param_1[10] + (long)iVar26 * 0x50);
      *(int *)(param_1 + 0xb) = (int)(lVar33 + 1);
      puVar32[1] = uVar79;
      *puVar32 = uVar79;
      puVar32[3] = uVar102;
      puVar32[2] = uVar102;
      *(float *)(puVar32 + 8) = fVar44;
      *(undefined4 *)((long)puVar32 + 0x44) = 0;
      puVar32[5] = uVar80;
      puVar32[4] = CONCAT44(uVar40,fVar63);
      puVar32[7] = auVar60._8_8_;
      puVar32[6] = auVar60._0_8_;
    }
    goto LAB_0300cccc;
  }
  iVar62 = *(int *)((long)plVar39 + 0x44);
  local_200 = (undefined1 (*) [16])&local_1f0;
  if (iVar62 < 5) {
    iVar62 = 4;
  }
  uStack_1f8 = -0x7ffffff000000000;
  if (iVar62 < 0x11) {
LAB_0300c284:
    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,iVar62);
  }
  else {
    FUN_0300cf94(&local_200,iVar62);
    if ((int)uStack_1f8 != iVar62) goto LAB_0300c284;
  }
  uVar5 = iVar26 + 3U & 0xfffffffc;
  if (0 < (int)uVar5) {
    uVar79 = 0;
    uVar102 = 0;
    uVar36 = 0;
    do {
      lVar33 = 0;
      do {
        iVar62 = (int)(lVar33 + uVar36);
        if ((long)(iVar26 + -1) <= (long)(lVar33 + uVar36)) {
          iVar62 = iVar26 + -1;
        }
        pauVar3 = (undefined1 (*) [16])(auStack_cc + lVar33 * 0x10 + -0x24);
        uVar27 = (**(code **)(*plVar28 + (ulong)*(byte *)(plVar39 + 3) * 0x200 + 0x88))
                           (plVar39,iVar62,pauVar3,local_200);
        if ((int)uVar27 < 5) {
          auVar52 = local_200[2];
          if (uVar27 == 3) {
            *(long *)(local_200[3] + 8) = auVar52._8_8_;
            *(long *)local_200[3] = auVar52._0_8_;
            auVar51 = auVar52;
          }
          else {
            auVar51 = local_200[3];
          }
        }
        else {
          uVar37 = (ulong)uVar27;
          uVar38 = 1;
          uVar35 = 0;
          fVar44 = -3.40282e+38;
          do {
            uVar1 = uVar35 + 1;
            local_210 = -1;
            local_20c = -1;
            if (uVar1 < uVar37) {
              pauVar11 = local_200 + uVar35;
              local_20c = -1;
              uVar34 = uVar38;
              iVar62 = -1;
              fVar94 = -3.40282e+38;
              do {
                pauVar12 = local_200 + uVar34;
                fVar63 = *(float *)*pauVar12 - *(float *)*pauVar11;
                fVar75 = *(float *)(*pauVar12 + 4) - *(float *)(*pauVar11 + 4);
                fVar77 = *(float *)(*pauVar12 + 8) - *(float *)(*pauVar11 + 8);
                fVar63 = fVar63 * fVar63 + fVar75 * fVar75 + fVar77 * fVar77;
                local_210 = (int)uVar35;
                iVar95 = (int)uVar34;
                if (fVar63 <= fVar94) {
                  local_210 = iVar62;
                  fVar63 = fVar94;
                  iVar95 = local_20c;
                }
                local_20c = iVar95;
                uVar34 = uVar34 + 1;
                iVar62 = local_210;
                fVar94 = fVar63;
              } while (uVar37 != uVar34);
            }
            pauVar11 = local_200 + local_20c;
            auVar90._8_8_ = uVar102;
            auVar90._0_8_ = 0x7f7fffee7f7fffee;
            pauVar12 = local_200 + local_210;
            uVar35 = 0;
            auVar46._0_4_ = *(float *)*pauVar11 - *(float *)*pauVar12;
            auVar46._4_4_ = *(float *)(*pauVar11 + 4) - *(float *)(*pauVar12 + 4);
            auVar46._8_4_ = *(float *)(*pauVar11 + 8) - *(float *)(*pauVar12 + 8);
            auVar46._12_4_ = *(float *)(*pauVar11 + 0xc) - *(float *)(*pauVar12 + 0xc);
            auVar65 = *pauVar3;
            auVar81 = NEON_ext(auVar65,auVar65,8,1);
            uVar80 = NEON_ext(auVar65._0_8_,auVar81._0_8_,4,1);
            auVar81 = NEON_ext(auVar46,auVar46,4,1);
            uVar40 = 0xffffffff;
            auVar87._8_8_ = uVar79;
            auVar87._0_8_ = 0xff7fffeeff7fffee;
            auVar47._0_4_ = auVar65._0_4_ * auVar81._0_4_ - auVar46._0_4_ * (float)uVar80;
            auVar47._4_4_ =
                 auVar65._4_4_ * auVar81._4_4_ - auVar46._4_4_ * (float)((ulong)uVar80 >> 0x20);
            auVar47._8_4_ = auVar65._8_4_ * auVar46._0_4_ - auVar46._8_4_ * auVar65._0_4_;
            auVar47._12_4_ = auVar65._12_4_ * auVar46._4_4_ - auVar46._12_4_ * auVar65._4_4_;
            auVar65 = NEON_ext(auVar47,auVar47,4,1);
            uVar41 = 0xffffffff;
            auVar66._8_8_ = uVar79;
            auVar66._0_8_ = 0xff7fffeeff7fffee;
            auVar48._8_8_ = uVar102;
            auVar48._0_8_ = 0x7f7fffee7f7fffee;
            local_208 = 0xffffffff;
            uVar42 = 0xffffffff;
            do {
              pauVar11 = local_200 + uVar35;
              fVar94 = (0.0 - auVar65._0_4_) * *(float *)*pauVar11;
              fVar75 = (0.0 - auVar65._4_4_) * *(float *)(*pauVar11 + 4);
              fVar77 = (0.0 - auVar47._0_4_) * *(float *)(*pauVar11 + 8);
              fVar63 = fVar94 + fVar75 + fVar77;
              uVar34 = CONCAT44(fVar94 + fVar75 + fVar77,fVar63);
              uVar43 = (undefined4)uVar35;
              if (fVar63 <= auVar66._0_4_) {
                bVar9 = auVar87._0_4_ < fVar63;
                iVar62 = -(uint)bVar9;
                auVar87._0_8_ = auVar87._0_8_ ^ (auVar87._0_8_ ^ uVar34) & CONCAT44(iVar62,iVar62);
                uVar6 = uVar43;
                if (!bVar9) {
                  uVar6 = uVar41;
                }
                auVar67 = auVar66;
                uVar41 = uVar6;
              }
              else {
                auVar67._8_8_ = 0;
                auVar67._0_8_ = uVar34;
                auVar87 = auVar66;
                uVar41 = local_208;
                local_208 = uVar43;
              }
              bVar9 = fVar63 < auVar48._0_4_;
              bVar10 = fVar63 < auVar90._0_4_;
              iVar62 = -(uint)bVar10;
              uVar6 = uVar43;
              if (!bVar10) {
                uVar6 = uVar40;
              }
              uVar18 = auVar90._0_8_ ^ (auVar90._0_8_ ^ uVar34) & CONCAT44(iVar62,iVar62);
              uStack_204 = uVar42;
              if (bVar9) {
                uVar18 = auVar48._0_8_;
                uStack_204 = uVar43;
              }
              uVar35 = uVar35 + 1;
              auVar90._8_8_ = 0;
              auVar90._0_8_ = uVar18;
              uVar18 = auVar48._0_8_;
              if (bVar9) {
                uVar18 = uVar34;
              }
              auVar48._8_8_ = 0;
              auVar48._0_8_ = uVar18;
              uVar40 = uVar6;
              if (bVar9) {
                uVar40 = uVar42;
              }
              auVar66 = auVar67;
              uVar42 = uStack_204;
            } while (uVar37 != uVar35);
            if (auVar67._0_4_ < 0.0) {
              local_208 = uVar40;
            }
            if (0.0 < (float)uVar18) {
              uStack_204 = uVar41;
            }
            local_218 = 4;
            local_214 = 0x80000004;
            local_220 = (long *)&local_210;
            FUN_02efaeb0(&local_210,0,3);
            auVar65 = local_200[*(int *)((long)local_220 + 4)];
            auVar81 = local_200[(int)*local_220];
            pauVar11 = local_200 + *(int *)((long)local_220 + 0xc);
            fVar78 = (float)((ulong)*(undefined8 *)(*pauVar11 + 8) >> 0x20);
            auVar64 = *(undefined1 (*) [12])*pauVar11;
            auVar116 = local_200[(int)local_220[1]];
            local_218 = 0;
            fVar94 = auVar81._0_4_;
            auVar49._0_4_ = auVar65._0_4_ - fVar94;
            fVar63 = auVar81._4_4_;
            auVar49._4_4_ = auVar65._4_4_ - fVar63;
            fVar75 = auVar81._8_4_;
            auVar49._8_4_ = auVar65._8_4_ - fVar75;
            fVar77 = auVar81._12_4_;
            auVar49._12_4_ = auVar65._12_4_ - fVar77;
            auVar82 = NEON_ext(auVar49,auVar49,4,1);
            auVar68._0_4_ = auVar116._0_4_ - fVar94;
            auVar68._4_4_ = auVar116._4_4_ - fVar63;
            auVar68._8_4_ = auVar116._8_4_ - fVar75;
            auVar68._12_4_ = auVar116._12_4_ - fVar77;
            auVar88 = NEON_ext(auVar68,auVar68,4,1);
            auVar50._0_4_ = auVar49._0_4_ * auVar88._0_4_ - auVar68._0_4_ * auVar82._0_4_;
            auVar50._4_4_ = auVar49._4_4_ * auVar88._4_4_ - auVar68._4_4_ * auVar82._4_4_;
            auVar50._8_4_ = auVar49._8_4_ * auVar68._0_4_ - auVar68._8_4_ * auVar49._0_4_;
            auVar50._12_4_ = auVar49._12_4_ * auVar68._4_4_ - auVar68._12_4_ * auVar49._4_4_;
            auVar83._0_4_ = (float)*(undefined8 *)*pauVar11 - fVar94;
            auVar83._4_4_ = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20) - fVar63;
            auVar83._8_4_ = (float)*(undefined8 *)(*pauVar11 + 8) - fVar75;
            auVar83._12_4_ = fVar78 - fVar77;
            auVar82 = NEON_ext(auVar83,auVar83,4,1);
            auVar91 = NEON_ext(auVar50,auVar50,4,1);
            auVar69._0_4_ = auVar68._0_4_ * auVar82._0_4_ - auVar88._0_4_ * auVar83._0_4_;
            auVar69._4_4_ = auVar68._4_4_ * auVar82._4_4_ - auVar88._4_4_ * auVar83._4_4_;
            auVar69._8_4_ = auVar68._8_4_ * auVar83._0_4_ - auVar68._0_4_ * auVar83._8_4_;
            auVar69._12_4_ = auVar68._12_4_ * auVar83._4_4_ - auVar68._4_4_ * auVar83._12_4_;
            auVar82 = NEON_ext(auVar69,auVar69,4,1);
            fVar94 = (SQRT(auVar91._0_4_ * auVar91._0_4_ + auVar91._4_4_ * auVar91._4_4_ +
                           auVar50._0_4_ * auVar50._0_4_) +
                     SQRT(auVar82._0_4_ * auVar82._0_4_ + auVar82._4_4_ * auVar82._4_4_ +
                          auVar69._0_4_ * auVar69._0_4_)) * 0.5;
            uVar7 = -(uint)(fVar44 < fVar94);
            auVar70._0_8_ = CONCAT44(uVar7,uVar7);
            auVar70._8_4_ = uVar7;
            auVar70._12_4_ = uVar7;
            if (-1 < (int)local_214) {
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                        (PTR_PTR_047d1a50,local_220,(ulong)local_214 << 2);
              auVar70._8_8_ = auVar70._8_8_;
            }
            auVar51._4_4_ = uStack_25c;
            auVar51._0_4_ = local_260;
            auVar51._8_4_ = uStack_258;
            auVar51._12_4_ = uStack_254;
            auVar13._12_4_ = fVar78;
            auVar13._0_12_ = auVar64;
            auVar51 = auVar51 ^ (auVar51 ^ auVar13) & auVar70;
            uStack_258 = auVar51._8_4_;
            uStack_254 = auVar51._12_4_;
            local_260 = auVar51._0_4_;
            uStack_25c = auVar51._4_4_;
            auVar52._4_4_ = uStack_24c;
            auVar52._0_4_ = local_250;
            auVar52._8_8_ = uStack_248;
            auVar52 = auVar52 ^ (auVar52 ^ auVar116) & auVar70;
            uStack_248 = auVar52._8_8_;
            local_250 = auVar52._0_4_;
            uStack_24c = auVar52._4_4_;
            auVar53._8_8_ = uStack_238;
            auVar53._0_8_ = local_240;
            auVar53 = auVar53 ^ (auVar53 ^ auVar65) & auVar70;
            uStack_238 = auVar53._8_8_;
            local_240 = auVar53._0_8_;
            auVar54._8_8_ = uStack_228;
            auVar54._0_8_ = local_230;
            fVar44 = (float)((uint)fVar44 ^ ((uint)fVar44 ^ (uint)fVar94) & uVar7);
            uVar38 = uVar38 + 1;
            auVar54 = auVar54 ^ (auVar54 ^ auVar81) & auVar70;
            uStack_228 = auVar54._8_8_;
            local_230 = auVar54._0_8_;
            uVar35 = uVar1;
          } while (uVar1 != uVar27 - 1);
          *(undefined8 *)(*local_200 + 8) = uStack_228;
          *(undefined8 *)*local_200 = local_230;
          *(undefined8 *)(local_200[1] + 8) = uStack_238;
          *(undefined8 *)local_200[1] = local_240;
          *(undefined8 *)(local_200[2] + 8) = uStack_248;
          *(long *)local_200[2] = auVar52._0_8_;
          *(long *)(local_200[3] + 8) = auVar51._8_8_;
          *(long *)local_200[3] = auVar51._0_8_;
          plVar28 = (long *)PTR_DAT_047d19f0;
        }
        auVar81 = *local_200;
        auVar65 = local_200[1];
        auVar82 = NEON_ext(auVar65,auVar65,8,1);
        iVar62 = *(int *)(param_1 + 0xb);
        lVar29 = (long)iVar62;
        fVar44 = auVar81._4_4_;
        fVar63 = auVar65._4_4_;
        fVar94 = auVar52._4_4_;
        fVar75 = auVar51._4_4_;
        auVar91 = NEON_ext(auVar52,auVar52,8,1);
        auVar116 = *pauVar3;
        auVar88 = NEON_ext(auVar116,auVar116,8,1);
        uVar80 = NEON_ext(auVar116._0_8_,auVar88._0_8_,4,1);
        fVar103 = (float)uVar80;
        fVar104 = (float)((ulong)uVar80 >> 0x20);
        auVar88 = NEON_ext(auVar81,auVar81,8,1);
        uVar80 = NEON_ext(auVar81._0_8_,auVar88._0_8_,4,1);
        auVar113 = NEON_ext(auVar51,auVar51,8,1);
        fVar106 = auVar116._0_4_;
        fVar115 = auVar116._4_4_;
        fVar110 = auVar81._0_4_;
        fVar100 = auVar81._8_4_;
        auVar118 = NEON_ext(auVar51,auVar51,4,1);
        fVar86 = auVar65._0_4_;
        fVar93 = auVar65._8_4_;
        fVar109 = auVar52._0_4_;
        fVar61 = auVar52._8_4_;
        fVar105 = auVar116._8_4_;
        fVar76 = auVar116._12_4_;
        fVar77 = auVar51._0_4_;
        fVar78 = auVar51._8_4_;
        fVar107 = fVar110 * fVar103 - fVar106 * (float)uVar80;
        fVar108 = fVar44 * fVar104 - fVar115 * (float)((ulong)uVar80 >> 0x20);
        fVar111 = fVar100 * fVar106 - fVar105 * fVar110;
        fVar112 = auVar81._12_4_ * fVar115 - fVar76 * fVar44;
        uVar80 = NEON_ext(auVar65._0_8_,auVar82._0_8_,4,1);
        auVar16._4_4_ = fVar108;
        auVar16._0_4_ = fVar107;
        auVar16._8_4_ = fVar111;
        auVar16._12_4_ = fVar112;
        auVar17._4_4_ = fVar108;
        auVar17._0_4_ = fVar107;
        auVar17._8_4_ = fVar111;
        auVar17._12_4_ = fVar112;
        auVar81 = NEON_ext(auVar16,auVar17,4,1);
        auVar114._0_4_ = fVar86 * fVar103 - fVar106 * (float)uVar80;
        auVar114._4_4_ = fVar63 * fVar104 - fVar115 * (float)((ulong)uVar80 >> 0x20);
        auVar114._8_4_ = fVar93 * fVar106 - fVar105 * fVar86;
        auVar114._12_4_ = auVar65._12_4_ * fVar115 - fVar76 * fVar63;
        auVar116 = NEON_ext(auVar52,auVar52,4,1);
        auVar65 = NEON_ext(auVar114,auVar114,4,1);
        auVar117._0_4_ = fVar109 * fVar103 - auVar116._0_4_ * fVar106;
        auVar117._4_4_ = fVar94 * fVar104 - auVar116._4_4_ * fVar115;
        auVar117._8_4_ = fVar61 * fVar106 - fVar109 * fVar105;
        auVar117._12_4_ = auVar52._12_4_ * fVar115 - fVar94 * fVar76;
        auVar116 = NEON_ext(auVar117,auVar117,4,1);
        fVar103 = fVar77 * fVar103 - auVar118._0_4_ * fVar106;
        fVar104 = fVar75 * fVar104 - auVar118._4_4_ * fVar115;
        fVar105 = fVar78 * fVar106 - fVar77 * fVar105;
        fVar106 = auVar51._12_4_ * fVar115 - fVar75 * fVar76;
        auVar118 = NEON_fmov(0x3e800000,4);
        fVar115 = (fVar77 + fVar109 + fVar110 + fVar86) * auVar118._0_4_;
        fVar108 = (fVar75 + fVar94 + fVar44 + fVar63) * auVar118._4_4_;
        fVar111 = (fVar78 + fVar61 + fVar100 + fVar93) * auVar118._8_4_;
        auVar14._4_4_ = fVar104;
        auVar14._0_4_ = fVar103;
        auVar14._8_4_ = fVar105;
        auVar14._12_4_ = fVar106;
        auVar15._4_4_ = fVar104;
        auVar15._0_4_ = fVar103;
        auVar15._8_4_ = fVar105;
        auVar15._12_4_ = fVar106;
        auVar118 = NEON_ext(auVar14,auVar15,4,1);
        fVar105 = (float)param_1[0xc];
        auVar71._0_4_ = *(undefined4 *)((long)param_1 + 0x74);
        auVar71._4_4_ = *(undefined4 *)((long)param_1 + 0x7c);
        auVar71._8_8_ = 0;
        auVar55._0_4_ = *(float *)(param_1 + 0xe) - fVar76;
        auVar55._4_4_ = *(float *)(param_1 + 0xf) - fVar76;
        auVar55._8_8_ = 0;
        if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x7fffffff) <= iVar62) {
          FUN_0300d0a8(auVar55,auVar71,puVar32,lVar29 + 1);
          iVar62 = *(int *)(param_1 + 0xb);
        }
        puVar30 = (undefined8 *)(param_1[10] + (long)iVar62 * 0x50);
        lVar33 = lVar33 + 1;
        *(float *)(puVar30 + 6) =
             1.0 / (fVar105 * (auVar81._0_4_ * auVar81._0_4_ + auVar81._4_4_ * auVar81._4_4_ +
                              fVar107 * fVar107) + 1.0);
        *(float *)((long)puVar30 + 0x34) =
             1.0 / (fVar105 * (auVar65._0_4_ * auVar65._0_4_ + auVar65._4_4_ * auVar65._4_4_ +
                              auVar114._0_4_ * auVar114._0_4_) + 1.0);
        puVar30[1] = CONCAT44(fVar77,fVar109);
        *puVar30 = CONCAT44(fVar86,fVar110);
        puVar30[3] = CONCAT44(fVar75,fVar94);
        puVar30[2] = CONCAT44(fVar63,fVar44);
        *(float *)(puVar30 + 7) =
             1.0 / (fVar105 * (auVar116._0_4_ * auVar116._0_4_ + auVar116._4_4_ * auVar116._4_4_ +
                              auVar117._0_4_ * auVar117._0_4_) + 1.0);
        *(float *)((long)puVar30 + 0x3c) =
             1.0 / (fVar105 * (auVar118._0_4_ * auVar118._0_4_ + auVar118._4_4_ * auVar118._4_4_ +
                              fVar103 * fVar103) + 1.0);
        puVar30[5] = CONCAT44(auVar113._0_4_,auVar91._0_4_);
        puVar30[4] = CONCAT44(auVar82._0_4_,auVar88._0_4_);
        *(float *)(puVar30 + 8) =
             (SQRT((fVar115 - fVar110) * (fVar115 - fVar110) +
                   (fVar108 - fVar44) * (fVar108 - fVar44) +
                   (fVar111 - fVar100) * (fVar111 - fVar100)) + 0.0 +
              SQRT((fVar111 - fVar93) * (fVar111 - fVar93) +
                   (fVar115 - fVar86) * (fVar115 - fVar86) + (fVar108 - fVar63) * (fVar108 - fVar63)
                  ) + SQRT((fVar111 - fVar61) * (fVar111 - fVar61) +
                           (fVar115 - fVar109) * (fVar115 - fVar109) +
                           (fVar108 - fVar94) * (fVar108 - fVar94)) +
             SQRT((fVar111 - fVar78) * (fVar111 - fVar78) +
                  (fVar115 - fVar77) * (fVar115 - fVar77) + (fVar108 - fVar75) * (fVar108 - fVar75))
             ) * 0.5;
        *(float *)((long)puVar30 + 0x44) = auVar55._0_4_;
        *(int *)(param_1 + 0xb) = (int)(lVar29 + 1);
      } while (lVar33 != 4);
      auVar22._8_4_ = iStack_e8;
      auVar22._0_8_ = local_f0;
      auVar22._12_4_ = uStack_e4;
      auVar23._8_4_ = local_d8;
      auVar23._0_8_ = uStack_e0;
      auVar23._12_4_ = local_d4;
      uVar40 = SUB84(local_f0,0);
      uVar42 = (undefined4)uStack_e0;
      uVar38 = (ulong)local_f0 >> 0x20;
      uVar35 = (ulong)uStack_e0 >> 0x20;
      auVar65 = NEON_ext(auVar22,auVar22,8,1);
      auVar24._4_12_ = auStack_cc;
      auVar24._0_4_ = uStack_d0;
      auVar116 = NEON_ext(auVar23,auVar23,8,1);
      uVar80 = CONCAT44(auStack_c0._0_4_,uStack_d0);
      uVar41 = auStack_cc._0_4_;
      uVar43 = auStack_c0._4_4_;
      auVar82 = NEON_ext(auVar24,auVar24,8,1);
      auVar81 = NEON_ext(auStack_c0,auStack_c0,8,1);
      iVar62 = *(int *)(param_1 + 9);
      lVar33 = (long)iVar62;
      if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) <= iVar62) {
        FUN_0300d1d4(puVar31,lVar33 + 1);
        iVar62 = *(int *)(param_1 + 9);
      }
      puVar30 = (undefined8 *)(param_1[8] + (long)iVar62 * 0x30);
      puVar30[1] = uVar80;
      *puVar30 = CONCAT44(uVar42,uVar40);
      puVar30[3] = CONCAT44(uVar43,uVar41);
      puVar30[2] = CONCAT44((int)uVar35,(int)uVar38);
      uVar36 = uVar36 + 4;
      puVar30[5] = CONCAT44(auVar81._0_4_,auVar82._0_4_);
      puVar30[4] = CONCAT44(auVar116._0_4_,auVar65._0_4_);
      *(int *)(param_1 + 9) = (int)(lVar33 + 1);
    } while (uVar36 < uVar5);
  }
  lVar33 = uStack_1f8;
  uVar36 = (ulong)uStack_1f8._4_4_;
  uStack_1f8 = (ulong)uStack_1f8._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_200 != (undefined1 (*) [16])0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_200,uVar36 << 4);
  }
  if (plVar39 == (long *)0x0) {
    return;
  }
LAB_0300cccc:
  if (plVar39[1] != 0) {
    plVar28 = plVar39 + 2;
    do {
      lVar33 = *plVar28;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar9) {
        *plVar28 = lVar33 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar33 + -1 == 0) {
      (**(code **)(*plVar39 + 0x18))(plVar39);
    }
  }
  return;
}


