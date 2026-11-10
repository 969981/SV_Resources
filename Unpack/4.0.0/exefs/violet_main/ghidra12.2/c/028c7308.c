/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028c7308; name: FUN_028c7308
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028c7308(long param_1,long param_2,long param_3)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  char cVar18;
  short sVar19;
  long lVar20;
  char cVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float extraout_s0;
  float fVar32;
  float extraout_var;
  float fVar34;
  float fVar35;
  float extraout_var_00;
  float fVar36;
  float fVar37;
  float extraout_var_01;
  float fVar38;
  float fVar39;
  undefined1 auVar33 [16];
  float fVar40;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar47;
  undefined1 auVar43 [16];
  float fVar48;
  undefined1 auVar49 [12];
  float fVar53;
  undefined1 auVar50 [16];
  float fVar54;
  float fVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar60;
  int iVar61;
  undefined1 auVar59 [16];
  int iVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar73 [12];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  float fVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar93;
  float fVar94;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar104 [16];
  undefined1 auVar103 [16];
  undefined1 auVar102 [16];
  undefined1 auVar101 [16];
  undefined1 auVar108 [16];
  undefined1 auVar107 [16];
  undefined1 auVar106 [16];
  undefined1 auVar105 [16];
  undefined1 auVar109 [16];
  undefined1 in_q29 [16];
  undefined1 auVar113 [16];
  undefined1 auVar112 [16];
  undefined1 auVar111 [16];
  undefined1 auVar110 [16];
  undefined1 auVar114 [16];
  float local_140;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  char local_118 [4];
  char local_114 [4];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  cVar21 = *(char *)(param_1 + 0x23b);
  if (cVar21 == '\0' && *(char *)(param_1 + 0x239) != '\0') {
    cVar18 = *(char *)(param_3 + 0x101);
    *(undefined1 *)(param_3 + 0x101) = 0;
    if (cVar18 == '\0') {
      bVar12 = *(char *)(param_1 + 0x4b0) != '\0';
      cVar18 = '\0';
    }
    else {
      cVar18 = '\x01';
      bVar12 = true;
    }
  }
  else {
    cVar18 = '\0';
    bVar12 = false;
  }
  if (*(char *)(param_1 + 0x23a) == '\0') {
    bVar13 = false;
  }
  else {
    bVar13 = *(char *)(param_3 + 0x19) != '\0';
  }
  bVar14 = cVar21 != '\0';
  cVar21 = cVar18;
  if (!bVar12) {
    cVar21 = '\x01';
  }
  if (cVar18 == '\0' && !bVar12) {
    cVar21 = *(char *)(param_3 + 0x101);
    *(undefined1 *)(param_3 + 0x101) = 0;
    if (cVar21 == '\0') {
      if (*(char *)(param_1 + 0x4b0) == '\0') {
        if ((*(char *)(param_1 + 0x239) == '\0') || (*(char *)(param_3 + 0x128) == '\0')) {
          bVar14 = *(char *)(param_1 + 0x23b) != '\0';
          cVar21 = '\0';
        }
        else {
          cVar21 = '\0';
          bVar14 = true;
        }
      }
      else {
        cVar21 = '\0';
      }
    }
    else {
      cVar21 = '\x01';
    }
  }
  memcpy(&local_b0,(void *)(param_3 + 0xc0),0x30);
  if (*(char *)(param_3 + 0xf0) != '\0') {
    fVar84 = *(float *)(param_3 + 0xc0) * *(float *)(param_3 + 0xc0);
    fVar35 = *(float *)(param_3 + 0xc4) * *(float *)(param_3 + 0xc4);
    fVar37 = *(float *)(param_3 + 200) * *(float *)(param_3 + 200);
    fVar39 = *(float *)(param_3 + 0xcc) * *(float *)(param_3 + 0xcc);
    auVar41._0_4_ = fVar84 + fVar35;
    auVar41._4_4_ = fVar37 + fVar39;
    auVar41._8_4_ = fVar84 + fVar35;
    auVar41._12_4_ = fVar37 + fVar39;
    auVar41 = NEON_ext(auVar41,auVar41,4,1);
    fVar84 = SQRT(auVar41._0_4_ + auVar41._4_4_) * 0.5;
    fVar35 = 1.0;
    if (fVar84 < 0.0) {
      fVar35 = 0.0;
    }
    *(undefined1 *)(param_3 + 0xf0) = 0;
    *(float *)(param_3 + 0xb0) = fVar84 * fVar35 - fVar84 * 0.0;
    *(undefined8 *)(param_3 + 0xa8) = *(undefined8 *)(param_3 + 0xe8);
    *(undefined8 *)(param_3 + 0xa0) = *(undefined8 *)(param_3 + 0xe0);
  }
  puVar11 = PTR_DAT_047d41c0;
  puVar10 = PTR_DAT_047d41b0;
  puVar9 = PTR_DAT_047d4190;
  local_c0 = *(float *)(param_3 + 0xb0);
  local_d0 = *(undefined8 *)(param_3 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_3 + 0xa8);
  fVar84 = local_c0 * local_c0;
  fStack_128 = (float)uStack_c8;
  fStack_124 = (float)((ulong)uStack_c8 >> 0x20);
  local_130 = (float)local_d0;
  fStack_12c = (float)((ulong)local_d0 >> 0x20);
  fVar35 = (float)_DAT_03cab640;
  fVar37 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar39 = (float)_UNK_03cab648;
  fVar47 = (float)((ulong)_UNK_03cab648 >> 0x20);
  local_114[0] = bVar14;
  if (bVar12) {
    lVar20 = *(long *)(param_1 + 0x200);
    lVar22 = *(long *)(param_1 + 0x208);
    if (lVar20 == lVar22) goto LAB_028c7808;
    do {
      auVar41 = *(undefined1 (*) [16])(lVar20 + 400);
      fVar32 = auVar41._0_4_;
      fVar34 = auVar41._4_4_;
      fVar36 = auVar41._8_4_;
      fVar38 = auVar41._12_4_;
      fVar40 = (local_130 - fVar32) * (local_130 - fVar32);
      fVar44 = (fStack_12c - fVar34) * (fStack_12c - fVar34);
      fVar45 = (fStack_128 - fVar36) * (fStack_128 - fVar36);
      fVar46 = (fStack_124 - fVar38) * (fStack_124 - fVar38);
      auVar23._0_4_ = fVar40 + fVar44;
      auVar23._4_4_ = fVar45 + fVar46;
      auVar23._8_4_ = fVar40 + fVar44;
      auVar23._12_4_ = fVar45 + fVar46;
      auVar41 = NEON_ext(auVar23,auVar23,4,1);
      fVar40 = auVar41._0_4_ + auVar41._4_4_;
      if (fVar40 <= fVar84) {
        auVar25._0_4_ =
             local_a0 * *(float *)PTR_DAT_047d41d0 + fStack_9c * *(float *)(PTR_DAT_047d41d0 + 4);
        auVar25._4_4_ =
             fStack_98 * *(float *)(PTR_DAT_047d41d0 + 8) +
             fStack_94 * *(float *)(PTR_DAT_047d41d0 + 0xc);
        auVar25._8_4_ =
             local_a0 * *(float *)PTR_DAT_047d41d0 + fStack_9c * *(float *)(PTR_DAT_047d41d0 + 4);
        auVar25._12_4_ =
             fStack_98 * *(float *)(PTR_DAT_047d41d0 + 8) +
             fStack_94 * *(float *)(PTR_DAT_047d41d0 + 0xc);
        auVar41 = NEON_ext(auVar25,auVar25,4,1);
        fVar44 = auVar41._0_4_ + auVar41._4_4_;
        fVar44 = ((float)(*(float *)PTR_DAT_047d4180 <= fVar44) * fVar44 +
                 *(float *)PTR_DAT_047d41a0 * (float)(fVar44 < *(float *)PTR_DAT_047d4180) * fVar44)
                 - *(float *)puVar9;
        if ((fVar44 < *(float *)puVar11) || (*(float *)puVar10 < fVar44)) {
          auVar31._0_4_ = local_a0 * local_a0 + fStack_9c * fStack_9c;
          auVar31._4_4_ = fStack_98 * fStack_98 + fStack_94 * fStack_94;
          auVar31._8_4_ = local_a0 * local_a0 + fStack_9c * fStack_9c;
          auVar31._12_4_ = fStack_98 * fStack_98 + fStack_94 * fStack_94;
          auVar41 = NEON_ext(auVar31,auVar31,4,1);
          fVar38 = auVar41._0_4_ + auVar41._4_4_;
          fVar44 = auVar41._8_4_ + auVar41._12_4_;
          fVar45 = auVar41._0_4_ + auVar41._4_4_;
          fVar46 = auVar41._8_4_ + auVar41._12_4_;
          fVar48 = -local_a0 / fVar38;
          fVar53 = -fStack_9c / fVar44;
          fVar54 = -fStack_98 / fVar45;
          fVar55 = fStack_94 / fVar46;
          iVar15 = -(uint)(fVar38 == 0.0);
          iVar60 = -(uint)(fVar44 == 0.0);
          iVar61 = -(uint)(fVar45 == 0.0);
          iVar62 = -(uint)(fVar46 == 0.0);
          fVar32 = fVar32 - local_90;
          fVar34 = fVar34 - fStack_8c;
          fVar36 = fVar36 - fStack_88;
          auVar75._4_4_ = fVar36;
          auVar75._0_4_ = fVar36;
          auVar75._8_4_ = fVar36;
          auVar75._12_4_ = fVar36;
          fVar44 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                                   CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                            ~(byte)((uint)iVar15 >> 0x10),
                                            CONCAT11((byte)((uint)fVar48 >> 8) &
                                                     ~(byte)((uint)iVar15 >> 8),
                                                     SUB41(fVar48,0) & ~(byte)iVar15)));
          auVar49._0_8_ =
               CONCAT17((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18),
                        CONCAT16((byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar60 >> 0x10),
                                 CONCAT15((byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar60 >> 8),
                                          CONCAT14(SUB41(fVar53,0) & ~(byte)iVar60,fVar44))));
          auVar49[8] = SUB41(fVar54,0) & ~(byte)iVar61;
          auVar49[9] = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar61 >> 8);
          auVar49[10] = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
          auVar49[0xb] = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
          auVar51[0xc] = SUB41(fVar55,0) & ~(byte)iVar62;
          auVar51._0_12_ = auVar49;
          auVar51[0xd] = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar62 >> 8);
          auVar51[0xe] = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
          auVar51[0xf] = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
          auVar76._4_12_ = auVar75._4_12_;
          auVar76._0_4_ = fVar32;
          auVar78._0_8_ = auVar76._0_8_;
          auVar78._8_4_ = fVar34;
          auVar78._12_4_ = fVar36;
          auVar77._8_8_ = auVar78._8_8_;
          auVar77._4_4_ = fVar36;
          auVar77._0_4_ = fVar32;
          auVar79._0_12_ = auVar77._0_12_;
          auVar79._12_4_ = fVar36;
          auVar89 = NEON_ext(auVar79,auVar79,8,1);
          fVar48 = auVar51._12_4_;
          fVar53 = -fVar44;
          fVar45 = (float)((ulong)auVar49._0_8_ >> 0x20);
          fVar54 = -fVar45;
          fVar46 = auVar49._8_4_;
          fVar55 = -fVar46;
          auVar85._4_4_ = fVar46;
          auVar85._0_4_ = fVar46;
          auVar85._8_4_ = fVar46;
          auVar85._12_4_ = fVar46;
          auVar86 = NEON_ext(auVar85,auVar51,0xc,1);
          auVar64._4_4_ = fVar55;
          auVar64._0_4_ = fVar55;
          auVar64._8_4_ = fVar55;
          auVar64._12_4_ = fVar55;
          auVar87._4_4_ = fVar45;
          auVar87._0_4_ = fVar45;
          auVar87._8_4_ = fVar45;
          auVar87._12_4_ = fVar45;
          fVar38 = auVar89._0_4_;
          auVar80._4_12_ = auVar79._4_12_;
          auVar80._0_4_ = fVar38;
          auVar82._0_8_ = auVar80._0_8_;
          auVar82._8_4_ = auVar89._8_4_;
          auVar82._12_4_ = fVar36;
          auVar81._8_8_ = auVar82._8_8_;
          auVar81._4_4_ = fVar32;
          auVar81._0_4_ = fVar38;
          auVar83._0_12_ = auVar81._0_12_;
          auVar83._12_4_ = fVar34;
          auVar88 = NEON_ext(auVar87,auVar86,0xc,1);
          auVar41 = NEON_ext(auVar83,auVar89,8,1);
          auVar41 = NEON_ext(auVar41,auVar41,0xc,1);
          auVar65._4_12_ = auVar64._4_12_;
          auVar65._0_4_ = fVar53;
          auVar67._0_8_ = auVar65._0_8_;
          auVar67._8_4_ = fVar54;
          auVar67._12_4_ = fVar55;
          auVar66._8_8_ = auVar67._8_8_;
          auVar66._4_4_ = fVar55;
          auVar66._0_4_ = fVar53;
          auVar68._0_12_ = auVar66._0_12_;
          auVar68._12_4_ = fVar55;
          auVar57._0_4_ =
               (fVar32 * fVar48 + fVar44 * fVar35 * 0.0 + auVar41._0_4_ * auVar88._0_4_ * fVar35) -
               auVar86._0_4_ * fVar38;
          auVar57._4_4_ =
               (fVar34 * fVar48 + fVar45 * fVar37 * 0.0 + auVar41._4_4_ * auVar88._4_4_ * fVar37) -
               auVar86._4_4_ * auVar89._4_4_;
          auVar57._8_4_ =
               (fVar36 * fVar48 + fVar46 * fVar39 * 0.0 + auVar41._8_4_ * auVar88._8_4_ * fVar39) -
               auVar86._8_4_ * auVar89._8_4_;
          auVar57._12_4_ =
               (fVar48 * 0.0 + fVar32 * fVar44 * fVar47 + auVar41._12_4_ * auVar88._12_4_ * fVar47)
               - auVar86._12_4_ * auVar89._12_4_;
          auVar52._4_4_ = auVar57._8_4_;
          auVar52._0_4_ = auVar57._8_4_;
          auVar52._8_4_ = auVar57._8_4_;
          auVar52._12_4_ = auVar57._8_4_;
          auVar41 = NEON_ext(auVar52,auVar57,0xc,1);
          auVar74._4_4_ = auVar57._4_4_;
          auVar74._0_4_ = auVar57._4_4_;
          auVar74._8_4_ = auVar57._4_4_;
          auVar74._12_4_ = auVar57._4_4_;
          auVar86 = NEON_ext(auVar68,auVar68,8,1);
          fVar32 = auVar86._0_4_;
          auVar69._4_12_ = auVar68._4_12_;
          auVar69._0_4_ = fVar32;
          auVar71._0_8_ = auVar69._0_8_;
          auVar71._8_4_ = auVar86._8_4_;
          auVar71._12_4_ = fVar55;
          auVar70._8_8_ = auVar71._8_8_;
          auVar70._4_4_ = fVar53;
          auVar70._0_4_ = fVar32;
          auVar72._0_12_ = auVar70._0_12_;
          auVar72._12_4_ = fVar54;
          auVar89 = NEON_ext(auVar74,auVar41,0xc,1);
          auVar88 = NEON_ext(auVar72,auVar86,8,1);
          auVar88 = NEON_ext(auVar88,auVar88,0xc,1);
          fVar32 = local_90 +
                   ((fVar53 * auVar57._12_4_ + fVar48 * auVar57._0_4_ * fVar35 +
                    auVar88._0_4_ * auVar89._0_4_ * fVar35) - auVar41._0_4_ * fVar32);
          fVar34 = fStack_8c +
                   ((fVar54 * auVar57._12_4_ + fVar48 * auVar57._4_4_ * fVar37 +
                    auVar88._4_4_ * auVar89._4_4_ * fVar37) - auVar41._4_4_ * auVar86._4_4_);
          fVar36 = fStack_88 +
                   ((fVar55 * auVar57._12_4_ + fVar48 * auVar57._8_4_ * fVar39 +
                    auVar88._8_4_ * auVar89._8_4_ * fVar39) - auVar41._8_4_ * auVar86._8_4_);
          auVar58._0_4_ = fVar32 - (local_90 - ABS(local_b0 * 0.5));
          auVar58._4_4_ = fVar34 - (fStack_8c - ABS(fStack_ac * 0.5));
          auVar58._8_4_ = fVar36 - (fStack_88 - ABS(fStack_a8 * 0.5));
          auVar58._12_4_ = (fStack_84 + 0.0) - 0.0;
          auVar43._0_4_ = (local_90 + ABS(local_b0 * 0.5)) - fVar32;
          auVar43._4_4_ = (fStack_8c + ABS(fStack_ac * 0.5)) - fVar34;
          auVar43._8_4_ = (fStack_88 + ABS(fStack_a8 * 0.5)) - fVar36;
          auVar43._12_4_ = 0.0 - (fStack_84 + 0.0);
          auVar41 = NEON_fmin(auVar58,auVar43,4);
          auVar73 = auVar41._0_12_;
        }
        else {
          auVar50._0_4_ = fVar32 - (local_90 - ABS(local_b0 * 0.5));
          auVar50._4_4_ = fVar34 - (fStack_8c - ABS(fStack_ac * 0.5));
          auVar50._8_4_ = fVar36 - (fStack_88 - ABS(fStack_a8 * 0.5));
          auVar50._12_4_ = fVar38 - 0.0;
          auVar42._0_4_ = (local_90 + ABS(local_b0 * 0.5)) - fVar32;
          auVar42._4_4_ = (fStack_8c + ABS(fStack_ac * 0.5)) - fVar34;
          auVar42._8_4_ = (fStack_88 + ABS(fStack_a8 * 0.5)) - fVar36;
          auVar42._12_4_ = 0.0 - fVar38;
          auVar41 = NEON_fmin(auVar50,auVar42,4);
          auVar73 = auVar41._0_12_;
        }
        if (((auVar73._8_4_ < 0.0) || (auVar73._0_4_ < 0.0)) || (auVar73._4_4_ < 0.0))
        goto LAB_028c741c;
        bVar12 = true;
LAB_028c794c:
        local_114[0] = false;
        goto LAB_028c780c;
      }
LAB_028c741c:
      local_140 = SUB164(*(undefined1 (*) [16])(lVar20 + 0x160),0);
      thunk_FUN_026fd880(&local_d0);
      fVar32 = (local_130 - extraout_s0) * (local_130 - extraout_s0);
      fVar34 = (fStack_12c - extraout_var) * (fStack_12c - extraout_var);
      fVar36 = (fStack_128 - extraout_var_00) * (fStack_128 - extraout_var_00);
      fVar38 = (fStack_124 - extraout_var_01) * (fStack_124 - extraout_var_01);
      auVar24._0_4_ = fVar32 + fVar34;
      auVar24._4_4_ = fVar36 + fVar38;
      auVar24._8_4_ = fVar32 + fVar34;
      auVar24._12_4_ = fVar36 + fVar38;
      auVar41 = NEON_ext(auVar24,auVar24,4,1);
      fVar40 = fVar40 + auVar41._0_4_ + auVar41._4_4_;
      if ((fVar40 <= local_140 * local_140) ||
         (*(double *)(param_1 + 0x270) <= (double)(fVar84 / fVar40))) {
        if (*(char *)(param_3 + 0x18) == '\0') {
          local_110 = local_d0;
          uStack_108 = uStack_c8;
          local_100 = CONCAT44(uStack_bc,local_c0);
          uStack_f8 = uStack_b8;
          cVar18 = *(char *)(param_1 + 0x8e8);
          uVar17 = FUN_00c74600(lVar20,&local_110,cVar18);
          if (((uVar17 & 1) != 0) &&
             (uVar17 = FUN_00ca3e00(lVar20,&local_b0,cVar18 != '\0'), (uVar17 & 1) != 0)) {
LAB_028c761c:
            bVar12 = false;
            goto LAB_028c794c;
          }
        }
        else {
          local_f0 = local_d0;
          uStack_e8 = uStack_c8;
          local_e0 = CONCAT44(uStack_bc,local_c0);
          uStack_d8 = uStack_b8;
          cVar18 = *(char *)(param_1 + 0x8e8);
          uVar17 = FUN_00c74600(lVar20,&local_f0,cVar18);
          if ((uVar17 & 1) != 0) {
            uVar17 = FUN_00ca3e00(lVar20,&local_b0,cVar18 != '\0');
            if ((uVar17 & 1) != 0) goto LAB_028c761c;
            uVar17 = FUN_026f877c(*(undefined1 (*) [16])(param_1 + 0x280),lVar20,&local_b0,
                                  *(undefined1 *)(param_1 + 0x8e8));
            if ((uVar17 & 1) != 0) {
              bVar12 = false;
              bVar14 = false;
              local_114[0] = false;
              goto LAB_028c7810;
            }
          }
        }
      }
      lVar20 = lVar20 + 0x230;
    } while (lVar22 != lVar20);
    bVar12 = false;
    bVar14 = true;
    local_114[0] = true;
  }
  else {
    if (bVar13 != false) {
      lVar20 = *(long *)(param_1 + 0x200);
      if (lVar20 != *(long *)(param_1 + 0x208)) {
        auVar88._0_4_ =
             local_a0 * *(float *)PTR_DAT_047d41d0 + fStack_9c * *(float *)(PTR_DAT_047d41d0 + 4);
        auVar88._4_4_ =
             fStack_98 * *(float *)(PTR_DAT_047d41d0 + 8) +
             fStack_94 * *(float *)(PTR_DAT_047d41d0 + 0xc);
        auVar88._8_4_ =
             local_a0 * *(float *)PTR_DAT_047d41d0 + fStack_9c * *(float *)(PTR_DAT_047d41d0 + 4);
        auVar88._12_4_ =
             fStack_98 * *(float *)(PTR_DAT_047d41d0 + 8) +
             fStack_94 * *(float *)(PTR_DAT_047d41d0 + 0xc);
        auVar41 = NEON_ext(auVar88,auVar88,4,1);
        fVar40 = auVar41._0_4_ + auVar41._4_4_;
        fVar44 = *(float *)PTR_DAT_047d41b0;
        auVar89._0_4_ = local_a0 * local_a0 + fStack_9c * fStack_9c;
        auVar89._4_4_ = fStack_98 * fStack_98 + fStack_94 * fStack_94;
        auVar89._8_4_ = local_a0 * local_a0 + fStack_9c * fStack_9c;
        auVar89._12_4_ = fStack_98 * fStack_98 + fStack_94 * fStack_94;
        auVar41 = NEON_ext(auVar89,auVar89,4,1);
        fVar32 = auVar41._0_4_ + auVar41._4_4_;
        fVar34 = auVar41._8_4_ + auVar41._12_4_;
        fVar36 = auVar41._0_4_ + auVar41._4_4_;
        fVar38 = auVar41._8_4_ + auVar41._12_4_;
        iVar15 = -(uint)(fVar32 == 0.0);
        iVar60 = -(uint)(fVar34 == 0.0);
        iVar61 = -(uint)(fVar36 == 0.0);
        iVar62 = -(uint)(fVar38 == 0.0);
        fVar32 = -local_a0 / fVar32;
        fVar34 = -fStack_9c / fVar34;
        fVar36 = -fStack_98 / fVar36;
        fVar38 = fStack_94 / fVar38;
        fVar32 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                                 CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                          ~(byte)((uint)iVar15 >> 0x10),
                                          CONCAT11((byte)((uint)fVar32 >> 8) &
                                                   ~(byte)((uint)iVar15 >> 8),
                                                   SUB41(fVar32,0) & ~(byte)iVar15)));
        auVar73._0_8_ =
             CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18),
                      CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar60 >> 0x10),
                               CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar60 >> 8),
                                        CONCAT14(SUB41(fVar34,0) & ~(byte)iVar60,fVar32))));
        auVar73[8] = SUB41(fVar36,0) & ~(byte)iVar61;
        auVar73[9] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar61 >> 8);
        auVar73[10] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
        auVar73[0xb] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
        auVar109[0xc] = SUB41(fVar38,0) & ~(byte)iVar62;
        auVar109._0_12_ = auVar73;
        auVar109[0xd] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar62 >> 8);
        auVar109[0xe] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
        auVar109[0xf] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
        fVar45 = -fVar32;
        fVar34 = (float)((ulong)auVar73._0_8_ >> 0x20);
        fVar46 = -fVar34;
        fVar36 = auVar73._8_4_;
        fVar48 = -fVar36;
        fVar38 = auVar109._12_4_;
        auVar114._4_4_ = fVar36;
        auVar114._0_4_ = fVar36;
        auVar114._8_4_ = fVar36;
        auVar114._12_4_ = fVar36;
        fVar40 = ((float)(*(float *)PTR_DAT_047d4180 <= fVar40) * fVar40 +
                 *(float *)PTR_DAT_047d41a0 * (float)(fVar40 < *(float *)PTR_DAT_047d4180) * fVar40)
                 - *(float *)PTR_DAT_047d4190;
        auVar41 = NEON_ext(auVar114,auVar109,0xc,1);
        auVar86._4_4_ = fVar34;
        auVar86._0_4_ = fVar34;
        auVar86._8_4_ = fVar34;
        auVar86._12_4_ = fVar34;
        auVar86 = NEON_ext(auVar86,auVar41,0xc,1);
        do {
          fVar53 = *(float *)(lVar20 + 400);
          fVar54 = *(float *)(lVar20 + 0x194);
          fVar55 = *(float *)(lVar20 + 0x198);
          fVar93 = *(float *)(lVar20 + 0x19c);
          fVar94 = (fVar53 - local_130) * (fVar53 - local_130);
          fVar97 = (fVar54 - fStack_12c) * (fVar54 - fStack_12c);
          fVar98 = (fVar55 - fStack_128) * (fVar55 - fStack_128);
          fVar99 = (fVar93 - fStack_124) * (fVar93 - fStack_124);
          auVar26._0_4_ = fVar94 + fVar97;
          auVar26._4_4_ = fVar98 + fVar99;
          auVar26._8_4_ = fVar94 + fVar97;
          auVar26._12_4_ = fVar98 + fVar99;
          auVar88 = NEON_ext(auVar26,auVar26,4,1);
          if (auVar88._0_4_ + auVar88._4_4_ <= fVar84) {
            bVar12 = false;
            bVar14 = true;
            if (*(float *)PTR_DAT_047d41c0 <= fVar40) {
              bVar12 = false;
              bVar14 = true;
              if (!NAN(fVar40) && !NAN(fVar44)) {
                bVar12 = fVar40 == fVar44;
                bVar14 = fVar44 <= fVar40;
              }
            }
            if (bVar14 && !bVar12) {
              fVar53 = fVar53 - local_90;
              fVar54 = fVar54 - fStack_8c;
              fVar55 = fVar55 - fStack_88;
              auVar100._4_4_ = fVar55;
              auVar100._0_4_ = fVar55;
              auVar100._8_4_ = fVar55;
              auVar100._12_4_ = fVar55;
              auVar101._4_12_ = auVar100._4_12_;
              auVar101._0_4_ = fVar53;
              auVar103._0_8_ = auVar101._0_8_;
              auVar103._8_4_ = fVar54;
              auVar103._12_4_ = fVar55;
              auVar102._8_8_ = auVar103._8_8_;
              auVar102._4_4_ = fVar55;
              auVar102._0_4_ = fVar53;
              auVar104._0_12_ = auVar102._0_12_;
              auVar104._12_4_ = fVar55;
              auVar89 = NEON_ext(auVar104,auVar104,8,1);
              fVar93 = auVar89._0_4_;
              auVar105._4_12_ = auVar104._4_12_;
              auVar105._0_4_ = fVar93;
              auVar107._0_8_ = auVar105._0_8_;
              auVar107._8_4_ = auVar89._8_4_;
              auVar107._12_4_ = fVar55;
              auVar106._8_8_ = auVar107._8_8_;
              auVar106._4_4_ = fVar53;
              auVar106._0_4_ = fVar93;
              auVar108._0_12_ = auVar106._0_12_;
              auVar108._12_4_ = fVar54;
              auVar88 = NEON_ext(auVar108,auVar89,8,1);
              auVar88 = NEON_ext(auVar88,auVar88,0xc,1);
              auVar91._0_4_ =
                   (fVar53 * fVar38 + fVar32 * fVar35 * 0.0 + auVar88._0_4_ * auVar86._0_4_ * fVar35
                   ) - auVar41._0_4_ * fVar93;
              auVar91._4_4_ =
                   (fVar54 * fVar38 + fVar34 * fVar37 * 0.0 + auVar88._4_4_ * auVar86._4_4_ * fVar37
                   ) - auVar41._4_4_ * auVar89._4_4_;
              auVar91._8_4_ =
                   (fVar55 * fVar38 + fVar36 * fVar39 * 0.0 + auVar88._8_4_ * auVar86._8_4_ * fVar39
                   ) - auVar41._8_4_ * auVar89._8_4_;
              auVar91._12_4_ =
                   (fVar38 * 0.0 + fVar53 * fVar32 * fVar47 +
                   auVar88._12_4_ * auVar86._12_4_ * fVar47) - auVar41._12_4_ * auVar89._12_4_;
              auVar96._4_4_ = auVar91._8_4_;
              auVar96._0_4_ = auVar91._8_4_;
              auVar96._8_4_ = auVar91._8_4_;
              auVar96._12_4_ = auVar91._8_4_;
              auVar4._4_4_ = fVar48;
              auVar4._0_4_ = fVar45;
              auVar4._8_4_ = fVar46;
              auVar4._12_4_ = fVar48;
              auVar5._4_4_ = fVar48;
              auVar5._0_4_ = fVar45;
              auVar5._8_4_ = fVar46;
              auVar5._12_4_ = fVar48;
              auVar109 = NEON_ext(auVar4,auVar5,8,1);
              auVar89 = NEON_ext(auVar96,auVar91,0xc,1);
              auVar92._4_4_ = auVar91._4_4_;
              auVar92._0_4_ = auVar91._4_4_;
              auVar92._8_4_ = auVar91._4_4_;
              auVar92._12_4_ = auVar91._4_4_;
              fVar53 = auVar109._0_4_;
              auVar110._4_12_ = in_q29._4_12_;
              auVar110._0_4_ = fVar53;
              auVar112._12_4_ = in_q29._12_4_;
              auVar112._0_8_ = auVar110._0_8_;
              auVar112._8_4_ = auVar109._8_4_;
              auVar111._8_8_ = auVar112._8_8_;
              auVar111._4_4_ = fVar45;
              auVar111._0_4_ = fVar53;
              auVar113._0_12_ = auVar111._0_12_;
              auVar113._12_4_ = fVar46;
              auVar88 = NEON_ext(auVar92,auVar89,0xc,1);
              auVar114 = NEON_ext(auVar113,auVar109,8,1);
              in_q29 = NEON_ext(auVar114,auVar114,0xc,1);
              fVar53 = local_90 +
                       ((fVar45 * auVar91._12_4_ + fVar38 * auVar91._0_4_ * fVar35 +
                        in_q29._0_4_ * auVar88._0_4_ * fVar35) - auVar89._0_4_ * fVar53);
              fVar54 = fStack_8c +
                       ((fVar46 * auVar91._12_4_ + fVar38 * auVar91._4_4_ * fVar37 +
                        in_q29._4_4_ * auVar88._4_4_ * fVar37) - auVar89._4_4_ * auVar109._4_4_);
              fVar55 = fStack_88 +
                       ((fVar48 * auVar91._12_4_ + fVar38 * auVar91._8_4_ * fVar39 +
                        in_q29._8_4_ * auVar88._8_4_ * fVar39) - auVar89._8_4_ * auVar109._8_4_);
              fVar93 = fStack_84 + 0.0;
            }
            auVar95._0_4_ = fVar53 - (local_90 - ABS(local_b0 * 0.5));
            auVar95._4_4_ = fVar54 - (fStack_8c - ABS(fStack_ac * 0.5));
            auVar95._8_4_ = fVar55 - (fStack_88 - ABS(fStack_a8 * 0.5));
            auVar95._12_4_ = fVar93 - 0.0;
            auVar90._0_4_ = (local_90 + ABS(local_b0 * 0.5)) - fVar53;
            auVar90._4_4_ = (fStack_8c + ABS(fStack_ac * 0.5)) - fVar54;
            auVar90._8_4_ = (fStack_88 + ABS(fStack_a8 * 0.5)) - fVar55;
            auVar90._12_4_ = 0.0 - fVar93;
            auVar88 = NEON_fmin(auVar95,auVar90,4);
            if (((0.0 <= auVar88._8_4_) && (0.0 <= auVar88._0_4_)) && (0.0 <= auVar88._4_4_)) {
              bVar12 = true;
              goto LAB_028c780c;
            }
          }
          lVar20 = lVar20 + 0x230;
        } while (*(long *)(param_1 + 0x208) != lVar20);
      }
    }
LAB_028c7808:
    bVar12 = false;
LAB_028c780c:
    bVar14 = true;
  }
LAB_028c7810:
  local_118[0] = '\0';
  if ((!bVar14) || ((bVar13 & (local_114[0] ^ 1U)) == 0)) {
    *(undefined8 *)(param_3 + 0x40) = 0;
    *(undefined2 *)(param_3 + 0x12a) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    local_118[0] = '\0';
    cVar18 = local_118[0];
    goto LAB_028c7870;
  }
  if ((*(char *)(param_3 + 0x129) != '\0') && (*(ulong *)(param_3 + 0x40) < 0xff)) {
    *(ulong *)(param_3 + 0x40) = *(ulong *)(param_3 + 0x40) + 1;
  }
  if (*(char *)(param_1 + 0x23c) != '\0') {
    local_118[0] = '\x01';
    *(undefined1 *)(param_3 + 0x12a) = 1;
    *(undefined8 *)(param_3 + 0x30) = 0;
    cVar18 = local_118[0];
    goto LAB_028c7870;
  }
  cVar2 = *(char *)(*(long *)(*(long *)(param_1 + 0x3f8) + *(long *)(param_3 + 0x20) * 8) + 0x2c);
  if (*(char *)(param_1 + 0x4b0) == '\0' && cVar21 == '\0') {
    cVar21 = *(char *)(param_3 + 0x101);
    *(undefined1 *)(param_3 + 0x101) = 0;
    bVar13 = cVar21 != '\0';
  }
  else {
    bVar13 = true;
  }
  cVar18 = local_118[0];
  if ((cVar2 == '\0') || (cVar21 != '\0')) {
    if (bVar12) goto LAB_028c7870;
    auVar63._4_4_ = fStack_ac;
    auVar63._0_4_ = local_b0;
    auVar63._8_4_ = fStack_a8;
    auVar63._12_4_ = uStack_a4;
    auVar59._4_4_ = fStack_9c;
    auVar59._0_4_ = local_a0;
    auVar59._8_4_ = fStack_98;
    auVar59._12_4_ = fStack_94;
    auVar56._4_4_ = fStack_8c;
    auVar56._0_4_ = local_90;
    auVar56._8_4_ = fStack_88;
    auVar56._12_4_ = fStack_84;
LAB_028c7ab4:
    *(long *)(param_2 + 0x28) = auVar63._8_8_;
    *(long *)(param_2 + 0x20) = auVar63._0_8_;
    *(long *)(param_2 + 0x38) = auVar59._8_8_;
    *(long *)(param_2 + 0x30) = auVar59._0_8_;
    *(long *)(param_2 + 0x48) = auVar56._8_8_;
    *(long *)(param_2 + 0x40) = auVar56._0_8_;
    if (*(char *)(param_2 + 0x50) == '\0') {
      *(undefined1 *)(param_2 + 0x50) = 1;
    }
LAB_028c7acc:
    if ((bVar13) || (*(long *)(param_3 + 0x30) == 0)) goto LAB_028c7ad0;
    lVar20 = *(long *)(param_3 + 0x30) + -1;
  }
  else {
    cVar21 = *(char *)(param_3 + 0x101);
    *(undefined1 *)(param_3 + 0x101) = 0;
    if (bVar12) goto LAB_028c7870;
    uVar6 = CONCAT44(fStack_ac,local_b0);
    auVar63._8_4_ = fStack_a8;
    auVar63._0_8_ = uVar6;
    auVar63._12_4_ = uStack_a4;
    uVar7 = CONCAT44(fStack_9c,local_a0);
    auVar59._8_4_ = fStack_98;
    auVar59._0_8_ = uVar7;
    auVar59._12_4_ = fStack_94;
    uVar8 = CONCAT44(fStack_8c,local_90);
    auVar56._8_4_ = fStack_88;
    auVar56._0_8_ = uVar8;
    auVar56._12_4_ = fStack_84;
    if (cVar21 != '\0') goto LAB_028c7ab4;
    if ((DAT_04865e70 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_04865e70);
      if (iVar15 != 0) {
        auVar33._8_4_ = 0x34000000;
        auVar33._0_8_ = 0x3400000034000000;
        auVar33._12_4_ = 0x34000000;
        uRam0000000004865e68 = auVar33._8_8_;
        _DAT_04865e60 = 0x3400000034000000;
        __cxa_guard_release(&DAT_04865e70);
      }
    }
    lVar20 = *(long *)(*(long *)(param_1 + 0x3f8) + *(long *)(param_3 + 0x20) * 8);
    fVar84 = *(float *)(lVar20 + 0x50) - auVar56._0_4_;
    fVar35 = *(float *)(lVar20 + 0x54) - auVar56._4_4_;
    fVar37 = *(float *)(lVar20 + 0x58) - auVar56._8_4_;
    fVar39 = *(float *)(lVar20 + 0x5c) - auVar56._12_4_;
    fVar84 = fVar84 * fVar84;
    fVar35 = fVar35 * fVar35;
    fVar37 = fVar37 * fVar37;
    fVar39 = fVar39 * fVar39;
    auVar27._0_4_ = fVar84 + fVar35;
    auVar27._4_4_ = fVar37 + fVar39;
    auVar27._8_4_ = fVar84 + fVar35;
    auVar27._12_4_ = fVar37 + fVar39;
    auVar41 = NEON_ext(auVar27,auVar27,4,1);
    fVar84 = (float)_DAT_04865e60;
    if ((auVar41._0_4_ + auVar41._4_4_ <= fVar84) &&
       (fVar35 = *(float *)(lVar20 + 0x30) - auVar63._0_4_,
       fVar37 = *(float *)(lVar20 + 0x34) - auVar63._4_4_,
       fVar39 = *(float *)(lVar20 + 0x38) - auVar63._8_4_,
       fVar47 = *(float *)(lVar20 + 0x3c) - auVar63._12_4_, fVar35 = fVar35 * fVar35,
       fVar37 = fVar37 * fVar37, fVar39 = fVar39 * fVar39, fVar47 = fVar47 * fVar47,
       auVar28._0_4_ = fVar35 + fVar37, auVar28._4_4_ = fVar39 + fVar47,
       auVar28._8_4_ = fVar35 + fVar37, auVar28._12_4_ = fVar39 + fVar47,
       auVar41 = NEON_ext(auVar28,auVar28,4,1), auVar41._0_4_ + auVar41._4_4_ <= fVar84)) {
      fVar35 = *(float *)(lVar20 + 0x40) - auVar59._0_4_;
      fVar37 = *(float *)(lVar20 + 0x44) - auVar59._4_4_;
      fVar39 = *(float *)(lVar20 + 0x48) - auVar59._8_4_;
      fVar47 = *(float *)(lVar20 + 0x4c) - auVar59._12_4_;
      fVar35 = fVar35 * fVar35;
      fVar37 = fVar37 * fVar37;
      fVar39 = fVar39 * fVar39;
      fVar47 = fVar47 * fVar47;
      auVar29._0_4_ = fVar35 + fVar37;
      auVar29._4_4_ = fVar39 + fVar47;
      auVar29._8_4_ = fVar35 + fVar37;
      auVar29._12_4_ = fVar39 + fVar47;
      auVar41 = NEON_ext(auVar29,auVar29,4,1);
      if ((auVar41._0_4_ + auVar41._4_4_ <= fVar84) &&
         (fVar35 = auVar59._0_4_ + *(float *)(lVar20 + 0x40),
         fVar37 = auVar59._4_4_ + *(float *)(lVar20 + 0x44),
         fVar39 = auVar59._8_4_ + *(float *)(lVar20 + 0x48),
         fVar47 = auVar59._12_4_ + *(float *)(lVar20 + 0x4c), fVar35 = fVar35 * fVar35,
         fVar37 = fVar37 * fVar37, fVar39 = fVar39 * fVar39, fVar47 = fVar47 * fVar47,
         auVar30._0_4_ = fVar35 + fVar37, auVar30._4_4_ = fVar39 + fVar47,
         auVar30._8_4_ = fVar35 + fVar37, auVar30._12_4_ = fVar39 + fVar47,
         auVar41 = NEON_ext(auVar30,auVar30,4,1), auVar41._0_4_ + auVar41._4_4_ <= fVar84))
      goto LAB_028c7acc;
    }
    *(long *)(param_2 + 0x28) = auVar63._8_8_;
    *(long *)(param_2 + 0x20) = auVar63._0_8_;
    *(long *)(param_2 + 0x38) = auVar59._8_8_;
    *(long *)(param_2 + 0x30) = auVar59._0_8_;
    *(long *)(param_2 + 0x48) = auVar56._8_8_;
    *(long *)(param_2 + 0x40) = auVar56._0_8_;
    if (*(char *)(param_2 + 0x50) == '\0') {
      *(undefined1 *)(param_2 + 0x50) = 1;
    }
LAB_028c7ad0:
    if (*(long *)(param_3 + 0x38) != 3) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x20);
    }
    if (*(char *)(param_3 + 0x12a) == '\0') {
      lVar20 = *(long *)(param_1 + 0x248);
    }
    else {
      lVar20 = *(long *)(param_1 + 0x240);
    }
  }
  *(long *)(param_3 + 0x30) = lVar20;
  uVar17 = *(ulong *)(param_3 + 0x28);
  if (uVar17 < 3) {
    if (uVar17 == 2) {
      *(undefined1 *)(param_3 + 299) = 1;
      *(undefined8 *)(param_3 + 0x40) = 5;
    }
    *(ulong *)(param_3 + 0x28) = uVar17 + 1;
    cVar18 = local_118[0];
  }
  else {
    *(undefined1 *)(param_3 + 299) = 1;
    cVar18 = *(char *)(param_3 + 0x12a);
    if (*(char *)(param_3 + 0x129) == '\0') {
      if (*(char *)(param_3 + 0x12a) == '\0') {
        local_118[0] = '\0';
        cVar18 = local_118[0];
      }
      else {
        cVar18 = local_118[0];
        if (4 < *(ulong *)(param_3 + 0x40)) {
          local_118[0] = '\x01';
          *(undefined8 *)(param_3 + 0x40) = 0;
          cVar18 = local_118[0];
        }
      }
    }
  }
LAB_028c7870:
  local_118[0] = cVar18;
  cVar21 = local_114[0];
  if (local_114[0] != *(char *)(param_3 + 0x128)) {
    lVar20 = *(long *)(param_3 + 0x48);
    if ((lVar20 == 0) || (*(short *)(lVar20 + 0x1a) == 0)) {
      lVar22 = 0;
    }
    else {
      psVar1 = (short *)(lVar20 + 0x1a);
      sVar19 = *(short *)(lVar20 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar19) {
          cVar18 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar19 + 1;
            cVar18 = ExclusiveMonitorsStatus();
          }
          if (cVar18 != '\0') goto LAB_028c7e88;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_028c7e88:
          bVar12 = false;
        }
        if (bVar12) {
          lVar22 = 0;
          if (*(long *)(lVar20 + 0x10) != 0) {
            lVar22 = *(long *)(lVar20 + 0x10) + -8;
          }
          break;
        }
        lVar22 = 0;
        sVar19 = sVar3;
      } while (sVar3 != 0);
    }
    plVar16 = *(long **)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x18))();
    }
    *(long *)(param_2 + 8) = lVar22;
    if (lVar22 != 0) {
      FUN_01ac1e54(*(undefined8 *)(param_3 + 0x110),local_114);
      *(char *)(param_3 + 0x128) = cVar21;
      if (cVar21 == '\0') {
        *(undefined8 *)(param_3 + 0x38) = 5;
      }
    }
  }
  uVar17 = *(ulong *)(param_3 + 0x38);
  if (uVar17 < 2) {
    if (uVar17 == 1) {
      *(undefined8 *)(param_3 + 0x38) = 0;
    }
  }
  else {
    *(ulong *)(param_3 + 0x38) = uVar17 - 1;
    local_118[0] = '\0';
  }
  cVar21 = local_118[0];
  if ((*(char *)(param_1 + 0x23d) == '\0') && (local_118[0] != *(char *)(param_3 + 0x129))) {
    if (*(long *)(param_2 + 8) == 0) {
      lVar20 = *(long *)(param_3 + 0x48);
      if ((lVar20 == 0) || (*(short *)(lVar20 + 0x1a) == 0)) {
        lVar22 = 0;
      }
      else {
        psVar1 = (short *)(lVar20 + 0x1a);
        sVar19 = *(short *)(lVar20 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar19) {
            cVar18 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar12) {
              *psVar1 = sVar19 + 1;
              cVar18 = ExclusiveMonitorsStatus();
            }
            if (cVar18 != '\0') goto LAB_028c7ee8;
            bVar12 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_028c7ee8:
            bVar12 = false;
          }
          if (bVar12) {
            lVar22 = 0;
            if (*(long *)(lVar20 + 0x10) != 0) {
              lVar22 = *(long *)(lVar20 + 0x10) + -8;
            }
            break;
          }
          lVar22 = 0;
          sVar19 = sVar3;
        } while (sVar3 != 0);
      }
      plVar16 = *(long **)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = 0;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x18))();
      }
      *(long *)(param_2 + 8) = lVar22;
      if (lVar22 == 0) {
        return;
      }
    }
    FUN_01ac1e54(*(undefined8 *)(param_3 + 0x118),local_118);
    *(char *)(param_3 + 0x129) = cVar21;
  }
  return;
}


