/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028c7f14; name: FUN_028c7f14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028c7f14(long param_1,long param_2,long param_3)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  byte bVar16;
  short sVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  char cVar21;
  char cVar22;
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar40 [12];
  float fVar39;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar43 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar54;
  undefined1 auVar55 [12];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar71;
  undefined1 auVar60 [12];
  float fVar73;
  undefined1 auVar61 [16];
  float fVar72;
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  int iVar76;
  int iVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  int iVar79;
  undefined8 uVar78;
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 uVar84;
  float fVar85;
  float fVar96;
  float fVar97;
  undefined1 auVar86 [12];
  float fVar98;
  undefined1 auVar87 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  float fVar99;
  float fVar100;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar109;
  float fVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar123 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  undefined1 auVar120 [16];
  undefined1 auVar127 [16];
  undefined1 auVar126 [16];
  undefined1 auVar125 [16];
  undefined1 auVar124 [16];
  undefined1 auVar128 [16];
  undefined1 auVar132 [16];
  undefined1 auVar131 [16];
  undefined1 auVar130 [16];
  undefined1 auVar129 [16];
  undefined1 auVar136 [16];
  undefined1 auVar135 [16];
  undefined1 auVar134 [16];
  undefined1 auVar133 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined8 uVar139;
  undefined8 uVar140;
  float fVar141;
  char local_144 [4];
  undefined8 local_140;
  undefined8 uStack_138;
  float local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  
  cVar22 = *(char *)(param_1 + 0x23b);
  if (cVar22 == '\0' && *(char *)(param_1 + 0x239) != '\0') {
    cVar21 = *(char *)(param_3 + 0x100);
    *(undefined1 *)(param_3 + 0x100) = 0;
    if (cVar21 == '\0') {
      cVar21 = *(char *)(param_3 + 0x101);
      *(undefined1 *)(param_3 + 0x101) = 0;
      if (cVar21 == '\0') {
        bVar6 = *(char *)(param_1 + 0x4b0) != '\0';
        goto LAB_028c7f64;
      }
      cVar21 = '\x01';
      bVar16 = 1;
    }
    else {
      cVar21 = '\0';
      bVar16 = 0;
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
LAB_028c7f64:
    cVar21 = '\0';
    bVar16 = 1;
  }
  if (*(char *)(param_1 + 0x23a) == '\0') {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint)(*(char *)(param_3 + 0x19) != '\0');
  }
  uVar20 = (uint)(cVar22 != '\0');
  cVar22 = cVar21;
  if ((bool)(bVar16 & (bVar6 ^ 1U))) {
    cVar2 = *(char *)(param_3 + 0x100);
    *(undefined1 *)(param_3 + 0x100) = 0;
    bVar10 = cVar2 == '\0';
    if (bVar10) {
      cVar22 = '\x01';
    }
    if (cVar21 == '\0' && bVar10) {
      cVar22 = *(char *)(param_3 + 0x101);
      *(undefined1 *)(param_3 + 0x101) = 0;
      if (cVar22 == '\0') {
        if (*(char *)(param_1 + 0x4b0) == '\0') {
          if ((*(char *)(param_1 + 0x239) == '\0') || (*(char *)(param_3 + 0x128) == '\0')) {
            cVar22 = '\0';
            uVar20 = (uint)(*(char *)(param_1 + 0x23b) != '\0');
          }
          else {
            cVar22 = '\0';
            uVar20 = 1;
          }
        }
        else {
          cVar22 = '\0';
        }
      }
      else {
        cVar22 = '\x01';
      }
    }
  }
  memcpy(&local_e0,(void *)(param_3 + 0xc0),0x30);
  fVar110 = *(float *)(param_3 + 0xb0);
  fVar54 = fVar110 + fVar110;
  fVar109 = fVar110 * fVar110;
  bVar10 = fVar54 <= fStack_dc;
  uVar140 = *(undefined8 *)(param_3 + 0xa8);
  uVar139 = *(undefined8 *)(param_3 + 0xa0);
  bVar5 = true;
  if ((fVar54 <= local_e0) && (bVar5 = false, !NAN(fStack_d8) && !NAN(fVar54))) {
    bVar5 = fStack_d8 < fVar54;
  }
  fVar54 = (float)uVar139;
  fVar48 = (float)((ulong)uVar139 >> 0x20);
  fVar53 = (float)uVar140;
  fVar141 = (float)((ulong)uVar140 >> 0x20);
  if (bVar6) {
    lVar19 = *(long *)(param_1 + 0x200);
    lVar23 = *(long *)(param_1 + 0x208);
    if (lVar19 == lVar23) {
      bVar6 = false;
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        auVar50 = *(undefined1 (*) [16])(lVar19 + 400);
        fVar38 = fVar54 - auVar50._0_4_;
        fVar44 = fVar48 - auVar50._4_4_;
        fVar45 = fVar53 - auVar50._8_4_;
        fVar46 = fVar141 - auVar50._12_4_;
        fVar38 = fVar38 * fVar38;
        fVar44 = fVar44 * fVar44;
        fVar45 = fVar45 * fVar45;
        fVar46 = fVar46 * fVar46;
        auVar24._0_4_ = fVar38 + fVar44;
        auVar24._4_4_ = fVar45 + fVar46;
        auVar24._8_4_ = fVar38 + fVar44;
        auVar24._12_4_ = fVar45 + fVar46;
        auVar41 = NEON_ext(auVar24,auVar24,4,1);
        if (auVar41._0_4_ + auVar41._4_4_ <= fVar109) {
          if (bVar5 || !bVar10) {
            auVar25._0_4_ =
                 local_d0 * *(float *)PTR_DAT_047d41d0 +
                 fStack_cc * *(float *)(PTR_DAT_047d41d0 + 4);
            auVar25._4_4_ =
                 fStack_c8 * *(float *)(PTR_DAT_047d41d0 + 8) +
                 fStack_c4 * *(float *)(PTR_DAT_047d41d0 + 0xc);
            auVar25._8_4_ =
                 local_d0 * *(float *)PTR_DAT_047d41d0 +
                 fStack_cc * *(float *)(PTR_DAT_047d41d0 + 4);
            auVar25._12_4_ =
                 fStack_c8 * *(float *)(PTR_DAT_047d41d0 + 8) +
                 fStack_c4 * *(float *)(PTR_DAT_047d41d0 + 0xc);
            auVar41 = NEON_ext(auVar25,auVar25,4,1);
            fVar38 = auVar41._0_4_ + auVar41._4_4_;
            fVar38 = ((float)(*(float *)PTR_DAT_047d4180 <= fVar38) * fVar38 +
                     *(float *)PTR_DAT_047d41a0 * (float)(fVar38 < *(float *)PTR_DAT_047d4180) *
                     fVar38) - *(float *)PTR_DAT_047d4190;
            if ((fVar38 < *(float *)PTR_DAT_047d41c0) || (*(float *)PTR_DAT_047d41b0 < fVar38)) {
              auVar36._0_4_ = local_d0 * local_d0 + fStack_cc * fStack_cc;
              auVar36._4_4_ = fStack_c8 * fStack_c8 + fStack_c4 * fStack_c4;
              auVar36._8_4_ = local_d0 * local_d0 + fStack_cc * fStack_cc;
              auVar36._12_4_ = fStack_c8 * fStack_c8 + fStack_c4 * fStack_c4;
              auVar41 = NEON_ext(auVar36,auVar36,4,1);
              fVar39 = auVar50._0_4_ - local_c0;
              fVar51 = auVar50._4_4_ - fStack_bc;
              fVar52 = auVar50._8_4_ - fStack_b8;
              auVar87._4_4_ = fVar52;
              auVar87._0_4_ = fVar52;
              auVar87._8_4_ = fVar52;
              auVar87._12_4_ = fVar52;
              fVar38 = auVar41._0_4_ + auVar41._4_4_;
              fVar45 = auVar41._8_4_ + auVar41._12_4_;
              fVar46 = auVar41._0_4_ + auVar41._4_4_;
              fVar37 = auVar41._8_4_ + auVar41._12_4_;
              iVar12 = -(uint)(fVar38 == 0.0);
              iVar76 = -(uint)(fVar45 == 0.0);
              iVar77 = -(uint)(fVar46 == 0.0);
              iVar79 = -(uint)(fVar37 == 0.0);
              fVar38 = -local_d0 / fVar38;
              fVar45 = -fStack_cc / fVar45;
              fVar46 = -fStack_c8 / fVar46;
              fVar37 = fStack_c4 / fVar37;
              auVar88._4_12_ = auVar87._4_12_;
              auVar88._0_4_ = fVar39;
              auVar90._0_8_ = auVar88._0_8_;
              auVar90._8_4_ = fVar51;
              auVar90._12_4_ = fVar52;
              auVar89._8_8_ = auVar90._8_8_;
              auVar89._4_4_ = fVar52;
              auVar89._0_4_ = fVar39;
              auVar91._0_12_ = auVar89._0_12_;
              auVar91._12_4_ = fVar52;
              auVar113 = NEON_ext(auVar91,auVar91,8,1);
              fVar44 = auVar113._0_4_;
              auVar92._4_12_ = auVar91._4_12_;
              auVar92._0_4_ = fVar44;
              auVar94._0_8_ = auVar92._0_8_;
              auVar94._8_4_ = auVar113._8_4_;
              auVar94._12_4_ = fVar52;
              auVar93._8_8_ = auVar94._8_8_;
              auVar93._4_4_ = fVar39;
              auVar93._0_4_ = fVar44;
              auVar95._0_12_ = auVar93._0_12_;
              auVar95._12_4_ = fVar51;
              auVar41 = NEON_ext(auVar95,auVar113,8,1);
              auVar41 = NEON_ext(auVar41,auVar41,0xc,1);
              fVar38 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                                       CONCAT12((byte)((uint)fVar38 >> 0x10) &
                                                ~(byte)((uint)iVar12 >> 0x10),
                                                CONCAT11((byte)((uint)fVar38 >> 8) &
                                                         ~(byte)((uint)iVar12 >> 8),
                                                         SUB41(fVar38,0) & ~(byte)iVar12)));
              auVar55._0_8_ =
                   CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                            CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10),
                                     CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar76 >> 8)
                                              ,CONCAT14(SUB41(fVar45,0) & ~(byte)iVar76,fVar38))));
              auVar55[8] = SUB41(fVar46,0) & ~(byte)iVar77;
              auVar55[9] = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar77 >> 8);
              auVar55[10] = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
              auVar55[0xb] = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
              auVar57[0xc] = SUB41(fVar37,0) & ~(byte)iVar79;
              auVar57._0_12_ = auVar55;
              auVar57[0xd] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar79 >> 8);
              auVar57[0xe] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
              auVar57[0xf] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
              auVar63._0_4_ = -fVar38;
              fVar45 = (float)((ulong)auVar55._0_8_ >> 0x20);
              fVar72 = -fVar45;
              fVar46 = auVar55._8_4_;
              auVar62._8_4_ = -fVar46;
              fVar37 = auVar57._12_4_;
              auVar102._4_4_ = fVar46;
              auVar102._0_4_ = fVar46;
              auVar102._8_4_ = fVar46;
              auVar102._12_4_ = fVar46;
              auVar101 = NEON_ext(auVar102,auVar57,0xc,1);
              auVar62._4_4_ = auVar62._8_4_;
              auVar62._0_4_ = auVar62._8_4_;
              auVar62._12_4_ = auVar62._8_4_;
              auVar111._4_4_ = fVar45;
              auVar111._0_4_ = fVar45;
              auVar111._8_4_ = fVar45;
              auVar111._12_4_ = fVar45;
              fVar71 = (float)_UNK_03cab648;
              fVar73 = (float)((ulong)_UNK_03cab648 >> 0x20);
              fVar47 = (float)_DAT_03cab640;
              fVar59 = (float)((ulong)_DAT_03cab640 >> 0x20);
              auVar112 = NEON_ext(auVar111,auVar101,0xc,1);
              auVar63._4_12_ = auVar62._4_12_;
              auVar65._0_8_ = auVar63._0_8_;
              auVar65._8_4_ = fVar72;
              auVar65._12_4_ = auVar62._8_4_;
              auVar64._8_8_ = auVar65._8_8_;
              auVar64._4_4_ = auVar62._8_4_;
              auVar64._0_4_ = auVar63._0_4_;
              auVar66._0_12_ = auVar64._0_12_;
              auVar66._12_4_ = auVar62._8_4_;
              auVar49._0_4_ =
                   (fVar39 * fVar37 + fVar38 * fVar47 * 0.0 +
                   auVar41._0_4_ * auVar112._0_4_ * fVar47) - auVar101._0_4_ * fVar44;
              auVar49._4_4_ =
                   (fVar51 * fVar37 + fVar45 * fVar59 * 0.0 +
                   auVar41._4_4_ * auVar112._4_4_ * fVar59) - auVar101._4_4_ * auVar113._4_4_;
              auVar49._8_4_ =
                   (fVar52 * fVar37 + fVar46 * fVar71 * 0.0 +
                   auVar41._8_4_ * auVar112._8_4_ * fVar71) - auVar101._8_4_ * auVar113._8_4_;
              auVar49._12_4_ =
                   (fVar37 * 0.0 + fVar39 * fVar38 * fVar73 +
                   auVar41._12_4_ * auVar112._12_4_ * fVar73) - auVar101._12_4_ * auVar113._12_4_;
              auVar58._4_4_ = auVar49._8_4_;
              auVar58._0_4_ = auVar49._8_4_;
              auVar58._8_4_ = auVar49._8_4_;
              auVar58._12_4_ = auVar49._8_4_;
              auVar112 = NEON_ext(auVar66,auVar66,8,1);
              auVar41 = NEON_ext(auVar58,auVar49,0xc,1);
              auVar83._4_4_ = auVar49._4_4_;
              auVar83._0_4_ = auVar49._4_4_;
              auVar83._8_4_ = auVar49._4_4_;
              auVar83._12_4_ = auVar49._4_4_;
              fVar38 = auVar112._0_4_;
              auVar67._4_12_ = auVar66._4_12_;
              auVar67._0_4_ = fVar38;
              auVar69._0_8_ = auVar67._0_8_;
              auVar69._8_4_ = auVar112._8_4_;
              auVar69._12_4_ = auVar62._8_4_;
              auVar68._8_8_ = auVar69._8_8_;
              auVar68._4_4_ = auVar63._0_4_;
              auVar68._0_4_ = fVar38;
              auVar70._0_12_ = auVar68._0_12_;
              auVar70._12_4_ = fVar72;
              auVar113 = NEON_ext(auVar83,auVar41,0xc,1);
              auVar101 = NEON_ext(auVar70,auVar112,8,1);
              auVar101 = NEON_ext(auVar101,auVar101,0xc,1);
              auVar60._0_4_ = local_c0 - ABS(local_e0 * 0.5);
              auVar60._4_4_ = fStack_bc - ABS(fStack_dc * 0.5);
              auVar60._8_4_ = fStack_b8 - ABS(fStack_d8 * 0.5);
              auVar50._0_4_ =
                   local_c0 +
                   ((auVar63._0_4_ * auVar49._12_4_ + fVar37 * auVar49._0_4_ * fVar47 +
                    auVar101._0_4_ * auVar113._0_4_ * fVar47) - auVar41._0_4_ * fVar38);
              auVar50._4_4_ =
                   fStack_bc +
                   ((fVar72 * auVar49._12_4_ + fVar37 * auVar49._4_4_ * fVar59 +
                    auVar101._4_4_ * auVar113._4_4_ * fVar59) - auVar41._4_4_ * auVar112._4_4_);
              auVar50._8_4_ =
                   fStack_b8 +
                   ((auVar62._8_4_ * auVar49._12_4_ + fVar37 * auVar49._8_4_ * fVar71 +
                    auVar101._8_4_ * auVar113._8_4_ * fVar71) - auVar41._8_4_ * auVar112._8_4_);
              auVar50._12_4_ = fStack_b4 + 0.0;
              auVar40._0_4_ = local_c0 + ABS(local_e0 * 0.5);
              auVar40._4_4_ = fStack_bc + ABS(fStack_dc * 0.5);
              auVar40._8_4_ = fStack_b8 + ABS(fStack_d8 * 0.5);
            }
            else {
              auVar60._0_4_ = local_c0 - ABS(local_e0 * 0.5);
              auVar60._4_4_ = fStack_bc - ABS(fStack_dc * 0.5);
              auVar60._8_4_ = fStack_b8 - ABS(fStack_d8 * 0.5);
              auVar40._0_4_ = local_c0 + ABS(local_e0 * 0.5);
              auVar40._4_4_ = fStack_bc + ABS(fStack_dc * 0.5);
              auVar40._8_4_ = fStack_b8 + ABS(fStack_d8 * 0.5);
            }
            auVar56._0_4_ = auVar50._0_4_ - auVar60._0_4_;
            auVar56._4_4_ = auVar50._4_4_ - auVar60._4_4_;
            auVar56._8_4_ = auVar50._8_4_ - auVar60._8_4_;
            auVar56._12_4_ = auVar50._12_4_ - 0.0;
            auVar42._0_4_ = auVar40._0_4_ - auVar50._0_4_;
            auVar42._4_4_ = auVar40._4_4_ - auVar50._4_4_;
            auVar42._8_4_ = auVar40._8_4_ - auVar50._8_4_;
            auVar42._12_4_ = 0.0 - auVar50._12_4_;
            auVar41 = NEON_fmin(auVar56,auVar42,4);
            if (((auVar41._8_4_ < 0.0) || (auVar41._0_4_ < 0.0)) || (auVar41._4_4_ < 0.0))
            goto LAB_028c8058;
          }
          uVar20 = 0;
          bVar6 = true;
          goto LAB_028c8614;
        }
LAB_028c8058:
        if (*(char *)(param_3 + 0x18) == '\0') {
          local_124 = local_e4;
          local_12c = local_ec;
          cVar21 = *(char *)(param_1 + 0x8e8);
          local_140 = uVar139;
          uStack_138 = uVar140;
          local_130 = fVar110;
          uVar20 = FUN_00c74600(lVar19,&local_140,cVar21);
          uVar15 = ~uVar20 & 1;
          if ((~uVar20 & 1) != 0) goto LAB_028c8230;
          if (bVar5 || !bVar10) {
            uVar20 = FUN_00ca3e00(lVar19,&local_e0,cVar21 != '\0');
LAB_028c8220:
            uVar15 = ~uVar20 & 1;
          }
LAB_028c83b8:
          uVar20 = (uint)(uVar15 != 0);
          bVar6 = false;
          if (uVar15 == 0) goto LAB_028c8614;
        }
        else {
          local_f4 = local_e4;
          local_fc = local_ec;
          cVar21 = *(char *)(param_1 + 0x8e8);
          local_110 = uVar139;
          uStack_108 = uVar140;
          local_100 = fVar110;
          uVar13 = FUN_00c74600(lVar19,&local_110,cVar21);
          if ((uVar13 & 1) != 0) {
            if (!bVar5 && bVar10) {
              local_120 = local_ec;
              local_118 = local_e4;
              fVar39 = *(float *)(lVar19 + 0x1d0);
              fVar38 = *(float *)(lVar19 + 0x1b0);
              fVar44 = *(float *)(lVar19 + 0x1b4);
              fVar45 = *(float *)(lVar19 + 0x1b8);
              fVar46 = *(float *)(lVar19 + 0x1bc);
              fVar59 = *(float *)(lVar19 + 0x1c0) * fVar39;
              fVar71 = *(float *)(lVar19 + 0x1c4) * fVar39;
              fVar73 = *(float *)(lVar19 + 0x1c8) * fVar39;
              fVar39 = *(float *)(lVar19 + 0x1cc) * fVar39;
              fVar37 = *(float *)(lVar19 + 0x170);
              auVar41 = *(undefined1 (*) [16])(param_1 + 0x280);
              auVar74._0_4_ = fVar38 - fVar54;
              auVar74._4_4_ = fVar44 - fVar48;
              auVar74._8_4_ = fVar45 - fVar53;
              auVar74._12_4_ = fVar46 - fVar141;
              fVar80 = fVar37 * fVar37;
              fVar51 = auVar41._0_4_;
              fVar99 = fVar51 * fVar37;
              fVar52 = auVar41._4_4_;
              fVar103 = fVar52 * fVar37;
              fVar72 = auVar41._8_4_;
              fVar105 = fVar72 * fVar37;
              fVar47 = auVar41._12_4_;
              fVar107 = fVar47 * fVar37;
              fVar85 = fVar38 + fVar59;
              fVar96 = fVar44 + fVar71;
              fVar97 = fVar45 + fVar73;
              fVar98 = fVar46 + fVar39;
              auVar26._0_4_ = auVar74._0_4_ * fVar99 + auVar74._4_4_ * fVar103;
              auVar26._4_4_ = auVar74._8_4_ * fVar105 + auVar74._12_4_ * fVar107;
              auVar26._8_4_ = auVar74._0_4_ * fVar99 + auVar74._4_4_ * fVar103;
              auVar26._12_4_ = auVar74._8_4_ * fVar105 + auVar74._12_4_ * fVar107;
              auVar41 = NEON_ext(auVar26,auVar26,4,1);
              auVar81._0_4_ = fVar85 - fVar54;
              auVar81._4_4_ = fVar96 - fVar48;
              auVar81._8_4_ = fVar97 - fVar53;
              auVar81._12_4_ = fVar98 - fVar141;
              auVar27._0_4_ = fVar99 * auVar81._0_4_ + fVar103 * auVar81._4_4_;
              auVar27._4_4_ = fVar105 * auVar81._8_4_ + fVar107 * auVar81._12_4_;
              auVar27._8_4_ = fVar99 * auVar81._0_4_ + fVar103 * auVar81._4_4_;
              auVar27._12_4_ = fVar105 * auVar81._8_4_ + fVar107 * auVar81._12_4_;
              fVar100 = fVar38 - (auVar41._0_4_ + auVar41._4_4_) * (fVar99 / fVar80);
              fVar104 = fVar44 - (auVar41._8_4_ + auVar41._12_4_) * (fVar103 / fVar80);
              fVar106 = fVar45 - (auVar41._0_4_ + auVar41._4_4_) * (fVar105 / fVar80);
              fVar108 = fVar46 - (auVar41._8_4_ + auVar41._12_4_) * (fVar107 / fVar80);
              auVar41 = NEON_ext(auVar27,auVar27,4,1);
              fVar85 = (fVar85 - (fVar99 / fVar80) * (auVar41._0_4_ + auVar41._4_4_)) - fVar100;
              fVar96 = (fVar96 - (fVar103 / fVar80) * (auVar41._8_4_ + auVar41._12_4_)) - fVar104;
              fVar97 = (fVar97 - (fVar105 / fVar80) * (auVar41._0_4_ + auVar41._4_4_)) - fVar106;
              fVar80 = (fVar98 - (fVar107 / fVar80) * (auVar41._8_4_ + auVar41._12_4_)) - fVar108;
              bVar6 = false;
              bVar8 = true;
              bVar9 = false;
              if (fVar85 < 1.1920929e-07) {
                bVar6 = false;
                bVar8 = false;
                bVar9 = true;
                if (!NAN(fVar85)) {
                  bVar6 = fVar85 < -1.1920929e-07;
                  bVar8 = fVar85 == -1.1920929e-07;
                  bVar9 = false;
                }
              }
              bVar7 = false;
              if ((!bVar8 && bVar6 == bVar9) && (bVar7 = false, !NAN(fVar96))) {
                bVar7 = fVar96 < 1.1920929e-07;
              }
              bVar6 = false;
              bVar8 = true;
              bVar9 = false;
              if (bVar7) {
                bVar6 = false;
                bVar8 = false;
                bVar9 = true;
                if (!NAN(fVar96)) {
                  bVar6 = fVar96 < -1.1920929e-07;
                  bVar8 = fVar96 == -1.1920929e-07;
                  bVar9 = false;
                }
              }
              bVar7 = false;
              if ((!bVar8 && bVar6 == bVar9) && (bVar7 = false, !NAN(fVar97))) {
                bVar7 = fVar97 < 1.1920929e-07;
              }
              bVar6 = false;
              bVar8 = true;
              bVar9 = false;
              if (bVar7) {
                bVar6 = false;
                bVar8 = false;
                bVar9 = true;
                if (!NAN(fVar97)) {
                  bVar6 = fVar97 < -1.1920929e-07;
                  bVar8 = fVar97 == -1.1920929e-07;
                  bVar9 = false;
                }
              }
              if (bVar8 || bVar6 != bVar9) {
                fVar98 = (fVar54 - fVar100) * fVar85;
                fVar99 = (fVar48 - fVar104) * fVar96;
                fVar100 = (fVar53 - fVar106) * fVar97;
                fVar103 = (fVar141 - fVar108) * fVar80;
                auVar28._0_4_ = fVar98 + fVar99;
                auVar28._4_4_ = fVar100 + fVar103;
                auVar28._8_4_ = fVar98 + fVar99;
                auVar28._12_4_ = fVar100 + fVar103;
                auVar29._0_4_ = fVar85 * fVar85 + fVar96 * fVar96;
                auVar29._4_4_ = fVar97 * fVar97 + fVar80 * fVar80;
                auVar29._8_4_ = fVar85 * fVar85 + fVar96 * fVar96;
                auVar29._12_4_ = fVar97 * fVar97 + fVar80 * fVar80;
                auVar101 = NEON_ext(auVar28,auVar28,4,1);
                auVar41 = NEON_ext(auVar29,auVar29,4,1);
                fVar80 = (auVar101._0_4_ + auVar101._4_4_) / (auVar41._0_4_ + auVar41._4_4_);
                if ((0.0 < fVar80) && (auVar74 = auVar81, fVar80 < 1.0)) {
                  auVar74._0_4_ = (fVar38 + fVar59 * fVar80) - fVar54;
                  auVar74._4_4_ = (fVar44 + fVar71 * fVar80) - fVar48;
                  auVar74._8_4_ = (fVar45 + fVar73 * fVar80) - fVar53;
                  auVar74._12_4_ = (fVar46 + fVar39 * fVar80) - fVar141;
                }
              }
              fVar38 = fVar51 * auVar74._0_4_;
              fVar44 = fVar52 * auVar74._4_4_;
              fVar45 = fVar72 * auVar74._8_4_;
              fVar46 = fVar47 * auVar74._12_4_;
              auVar30._0_4_ = fVar38 + fVar44;
              auVar30._4_4_ = fVar45 + fVar46;
              auVar30._8_4_ = fVar38 + fVar44;
              auVar30._12_4_ = fVar45 + fVar46;
              auVar41 = NEON_ext(auVar30,auVar30,4,1);
              fVar38 = auVar41._0_4_ + auVar41._4_4_;
              fVar44 = 1.0;
              if (fVar38 < 0.0) {
                fVar44 = 0.0;
              }
              fVar44 = fVar44 * fVar38;
              fVar38 = 1.0;
              if (fVar37 <= fVar44) {
                fVar38 = 0.0;
              }
              fVar45 = 1.0;
              if (fVar37 > fVar44) {
                fVar45 = 0.0;
              }
              fVar38 = fVar44 * fVar38 + fVar37 * fVar45;
              if (0.0 < fVar38 / fVar37) {
                local_b0 = fVar54 + fVar51 * fVar38;
                fStack_ac = fVar48 + fVar52 * fVar38;
                fStack_a8 = fVar53 + fVar72 * fVar38;
                fStack_a4 = fVar141 + fVar47 * fVar38;
                fVar38 = 1.0;
                if (0.0 <= fVar110) {
                  fVar38 = 0.0;
                }
                fVar44 = 1.0;
                if (0.0 > fVar110) {
                  fVar44 = 0.0;
                }
                local_a0 = fVar110 * fVar44 - fVar110 * fVar38;
              }
              else {
                local_94 = local_e4;
                local_9c = local_ec;
                local_b0 = fVar54;
                fStack_ac = fVar48;
                fStack_a8 = fVar53;
                fStack_a4 = fVar141;
                local_a0 = fVar110;
              }
              uVar11 = FUN_00c74600(lVar19,&local_b0,cVar21 != '\0');
            }
            else {
              uVar20 = FUN_00ca3e00(lVar19,&local_e0,cVar21 != '\0');
              if ((uVar20 & 1) != 0) goto LAB_028c8220;
              uVar11 = FUN_026f877c(*(undefined1 (*) [16])(param_1 + 0x280),lVar19,&local_e0,
                                    *(undefined1 *)(param_1 + 0x8e8));
            }
            uVar15 = ~uVar11 & 1;
            uVar11 = uVar11 & 1;
            goto LAB_028c83b8;
          }
          uVar15 = 1;
LAB_028c8230:
          uVar20 = (uint)(uVar15 != 0);
        }
        lVar19 = lVar19 + 0x230;
      } while (lVar23 != lVar19);
      bVar6 = false;
    }
  }
  else {
    if (uVar18 != 0) {
      lVar19 = *(long *)(param_1 + 0x200);
      lVar23 = *(long *)(param_1 + 0x208);
      if (lVar19 != lVar23) {
        if (!bVar5 && bVar10) {
          do {
            fVar110 = *(float *)(lVar19 + 400) - fVar54;
            fVar38 = *(float *)(lVar19 + 0x194) - fVar48;
            fVar44 = *(float *)(lVar19 + 0x198) - fVar53;
            fVar45 = *(float *)(lVar19 + 0x19c) - fVar141;
            fVar110 = fVar110 * fVar110;
            fVar38 = fVar38 * fVar38;
            fVar44 = fVar44 * fVar44;
            fVar45 = fVar45 * fVar45;
            auVar41._0_4_ = fVar110 + fVar38;
            auVar41._4_4_ = fVar44 + fVar45;
            auVar41._8_4_ = fVar110 + fVar38;
            auVar41._12_4_ = fVar44 + fVar45;
            auVar41 = NEON_ext(auVar41,auVar41,4,1);
            if (auVar41._0_4_ + auVar41._4_4_ <= fVar109) goto LAB_028c85a0;
            lVar19 = lVar19 + 0x230;
          } while (lVar23 != lVar19);
        }
        else {
          auVar112._0_4_ =
               local_d0 * *(float *)PTR_DAT_047d41d0 + fStack_cc * *(float *)(PTR_DAT_047d41d0 + 4);
          auVar112._4_4_ =
               fStack_c8 * *(float *)(PTR_DAT_047d41d0 + 8) +
               fStack_c4 * *(float *)(PTR_DAT_047d41d0 + 0xc);
          auVar112._8_4_ =
               local_d0 * *(float *)PTR_DAT_047d41d0 + fStack_cc * *(float *)(PTR_DAT_047d41d0 + 4);
          auVar112._12_4_ =
               fStack_c8 * *(float *)(PTR_DAT_047d41d0 + 8) +
               fStack_c4 * *(float *)(PTR_DAT_047d41d0 + 0xc);
          auVar41 = NEON_ext(auVar112,auVar112,4,1);
          auVar113._0_4_ = local_d0 * local_d0 + fStack_cc * fStack_cc;
          auVar113._4_4_ = fStack_c8 * fStack_c8 + fStack_c4 * fStack_c4;
          auVar113._8_4_ = local_d0 * local_d0 + fStack_cc * fStack_cc;
          auVar113._12_4_ = fStack_c8 * fStack_c8 + fStack_c4 * fStack_c4;
          fVar110 = auVar41._0_4_ + auVar41._4_4_;
          auVar41 = NEON_ext(auVar113,auVar113,4,1);
          fVar38 = auVar41._0_4_ + auVar41._4_4_;
          fVar44 = auVar41._8_4_ + auVar41._12_4_;
          fVar45 = auVar41._0_4_ + auVar41._4_4_;
          fVar46 = auVar41._8_4_ + auVar41._12_4_;
          iVar12 = -(uint)(fVar38 == 0.0);
          iVar76 = -(uint)(fVar44 == 0.0);
          iVar77 = -(uint)(fVar45 == 0.0);
          iVar79 = -(uint)(fVar46 == 0.0);
          fVar38 = -local_d0 / fVar38;
          fVar44 = -fStack_cc / fVar44;
          fVar45 = -fStack_c8 / fVar45;
          fVar46 = fStack_c4 / fVar46;
          fVar52 = ((float)(*(float *)PTR_DAT_047d4180 <= fVar110) * fVar110 +
                   *(float *)PTR_DAT_047d41a0 * (float)(fVar110 < *(float *)PTR_DAT_047d4180) *
                   fVar110) - *(float *)PTR_DAT_047d4190;
          fVar38 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                                   CONCAT12((byte)((uint)fVar38 >> 0x10) &
                                            ~(byte)((uint)iVar12 >> 0x10),
                                            CONCAT11((byte)((uint)fVar38 >> 8) &
                                                     ~(byte)((uint)iVar12 >> 8),
                                                     SUB41(fVar38,0) & ~(byte)iVar12)));
          auVar86._0_8_ =
               CONCAT17((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                        CONCAT16((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10),
                                 CONCAT15((byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar76 >> 8),
                                          CONCAT14(SUB41(fVar44,0) & ~(byte)iVar76,fVar38))));
          auVar86[8] = SUB41(fVar45,0) & ~(byte)iVar77;
          auVar86[9] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar77 >> 8);
          auVar86[10] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
          auVar86[0xb] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
          auVar137[0xc] = SUB41(fVar46,0) & ~(byte)iVar79;
          auVar137._0_12_ = auVar86;
          auVar137[0xd] = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar79 >> 8);
          auVar137[0xe] = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
          auVar137[0xf] = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
          fVar37 = -fVar38;
          fVar44 = (float)((ulong)auVar86._0_8_ >> 0x20);
          fVar39 = -fVar44;
          fVar45 = auVar86._8_4_;
          fVar51 = -fVar45;
          fVar46 = auVar137._12_4_;
          auVar138._4_4_ = fVar45;
          auVar138._0_4_ = fVar45;
          auVar138._8_4_ = fVar45;
          auVar138._12_4_ = fVar45;
          auVar41 = NEON_ext(auVar138,auVar137,0xc,1);
          auVar101._4_4_ = fVar44;
          auVar101._0_4_ = fVar44;
          auVar101._8_4_ = fVar44;
          auVar101._12_4_ = fVar44;
          auVar101 = NEON_ext(auVar101,auVar41,0xc,1);
          fVar59 = (float)_UNK_03cab648;
          fVar71 = (float)((ulong)_UNK_03cab648 >> 0x20);
          fVar72 = (float)_DAT_03cab640;
          fVar47 = (float)((ulong)_DAT_03cab640 >> 0x20);
          fVar110 = *(float *)PTR_DAT_047d41b0;
          do {
            fVar73 = *(float *)(lVar19 + 400);
            fVar80 = *(float *)(lVar19 + 0x194);
            fVar85 = *(float *)(lVar19 + 0x198);
            fVar96 = *(float *)(lVar19 + 0x19c);
            fVar97 = (fVar73 - fVar54) * (fVar73 - fVar54);
            fVar98 = (fVar80 - fVar48) * (fVar80 - fVar48);
            fVar99 = (fVar85 - fVar53) * (fVar85 - fVar53);
            fVar100 = (fVar96 - fVar141) * (fVar96 - fVar141);
            auVar31._0_4_ = fVar97 + fVar98;
            auVar31._4_4_ = fVar99 + fVar100;
            auVar31._8_4_ = fVar97 + fVar98;
            auVar31._12_4_ = fVar99 + fVar100;
            auVar112 = NEON_ext(auVar31,auVar31,4,1);
            if (auVar112._0_4_ + auVar112._4_4_ <= fVar109) {
              bVar6 = false;
              bVar10 = true;
              if (*(float *)PTR_DAT_047d41c0 <= fVar52) {
                bVar6 = false;
                bVar10 = true;
                if (!NAN(fVar52) && !NAN(fVar110)) {
                  bVar6 = fVar52 == fVar110;
                  bVar10 = fVar110 <= fVar52;
                }
              }
              if (bVar10 && !bVar6) {
                fVar73 = fVar73 - local_c0;
                fVar80 = fVar80 - fStack_bc;
                fVar85 = fVar85 - fStack_b8;
                auVar119._4_4_ = fVar85;
                auVar119._0_4_ = fVar85;
                auVar119._8_4_ = fVar85;
                auVar119._12_4_ = fVar85;
                auVar120._4_12_ = auVar119._4_12_;
                auVar120._0_4_ = fVar73;
                auVar122._0_8_ = auVar120._0_8_;
                auVar122._8_4_ = fVar80;
                auVar122._12_4_ = fVar85;
                auVar121._8_8_ = auVar122._8_8_;
                auVar121._4_4_ = fVar85;
                auVar121._0_4_ = fVar73;
                auVar123._0_12_ = auVar121._0_12_;
                auVar123._12_4_ = fVar85;
                auVar113 = NEON_ext(auVar123,auVar123,8,1);
                fVar96 = auVar113._0_4_;
                auVar124._4_12_ = auVar123._4_12_;
                auVar124._0_4_ = fVar96;
                auVar126._0_8_ = auVar124._0_8_;
                auVar126._8_4_ = auVar113._8_4_;
                auVar126._12_4_ = fVar85;
                auVar125._8_8_ = auVar126._8_8_;
                auVar125._4_4_ = fVar73;
                auVar125._0_4_ = fVar96;
                auVar127._0_12_ = auVar125._0_12_;
                auVar127._12_4_ = fVar80;
                auVar112 = NEON_ext(auVar127,auVar113,8,1);
                auVar112 = NEON_ext(auVar112,auVar112,0xc,1);
                auVar115._0_4_ =
                     (fVar73 * fVar46 + fVar38 * fVar72 * 0.0 +
                     auVar112._0_4_ * auVar101._0_4_ * fVar72) - auVar41._0_4_ * fVar96;
                auVar115._4_4_ =
                     (fVar80 * fVar46 + fVar44 * fVar47 * 0.0 +
                     auVar112._4_4_ * auVar101._4_4_ * fVar47) - auVar41._4_4_ * auVar113._4_4_;
                auVar115._8_4_ =
                     (fVar85 * fVar46 + fVar45 * fVar59 * 0.0 +
                     auVar112._8_4_ * auVar101._8_4_ * fVar59) - auVar41._8_4_ * auVar113._8_4_;
                auVar115._12_4_ =
                     (fVar46 * 0.0 + fVar73 * fVar38 * fVar71 +
                     auVar112._12_4_ * auVar101._12_4_ * fVar71) - auVar41._12_4_ * auVar113._12_4_;
                auVar128._4_4_ = fVar51;
                auVar128._0_4_ = fVar51;
                auVar128._8_4_ = fVar51;
                auVar128._12_4_ = fVar51;
                auVar129._4_12_ = auVar128._4_12_;
                auVar129._0_4_ = fVar37;
                auVar131._0_8_ = auVar129._0_8_;
                auVar131._8_4_ = fVar39;
                auVar131._12_4_ = fVar51;
                auVar130._8_8_ = auVar131._8_8_;
                auVar130._4_4_ = fVar51;
                auVar130._0_4_ = fVar37;
                auVar132._0_12_ = auVar130._0_12_;
                auVar132._12_4_ = fVar51;
                auVar118._4_4_ = auVar115._8_4_;
                auVar118._0_4_ = auVar115._8_4_;
                auVar118._8_4_ = auVar115._8_4_;
                auVar118._12_4_ = auVar115._8_4_;
                auVar138 = NEON_ext(auVar132,auVar132,8,1);
                auVar113 = NEON_ext(auVar118,auVar115,0xc,1);
                auVar116._4_4_ = auVar115._4_4_;
                auVar116._0_4_ = auVar115._4_4_;
                auVar116._8_4_ = auVar115._4_4_;
                auVar116._12_4_ = auVar115._4_4_;
                fVar73 = auVar138._0_4_;
                auVar133._4_12_ = auVar132._4_12_;
                auVar133._0_4_ = fVar73;
                auVar135._0_8_ = auVar133._0_8_;
                auVar135._8_4_ = auVar138._8_4_;
                auVar135._12_4_ = fVar51;
                auVar134._8_8_ = auVar135._8_8_;
                auVar134._4_4_ = fVar37;
                auVar134._0_4_ = fVar73;
                auVar136._0_12_ = auVar134._0_12_;
                auVar136._12_4_ = fVar39;
                auVar112 = NEON_ext(auVar116,auVar113,0xc,1);
                auVar137 = NEON_ext(auVar136,auVar138,8,1);
                auVar137 = NEON_ext(auVar137,auVar137,0xc,1);
                fVar73 = local_c0 +
                         ((fVar37 * auVar115._12_4_ + fVar46 * auVar115._0_4_ * fVar72 +
                          auVar137._0_4_ * auVar112._0_4_ * fVar72) - auVar113._0_4_ * fVar73);
                fVar80 = fStack_bc +
                         ((fVar39 * auVar115._12_4_ + fVar46 * auVar115._4_4_ * fVar47 +
                          auVar137._4_4_ * auVar112._4_4_ * fVar47) -
                         auVar113._4_4_ * auVar138._4_4_);
                fVar85 = fStack_b8 +
                         ((fVar51 * auVar115._12_4_ + fVar46 * auVar115._8_4_ * fVar59 +
                          auVar137._8_4_ * auVar112._8_4_ * fVar59) -
                         auVar113._8_4_ * auVar138._8_4_);
                fVar96 = fStack_b4 + 0.0;
              }
              auVar117._0_4_ = fVar73 - (local_c0 - ABS(local_e0 * 0.5));
              auVar117._4_4_ = fVar80 - (fStack_bc - ABS(fStack_dc * 0.5));
              auVar117._8_4_ = fVar85 - (fStack_b8 - ABS(fStack_d8 * 0.5));
              auVar117._12_4_ = fVar96 - 0.0;
              auVar114._0_4_ = (ABS(local_e0 * 0.5) + local_c0) - fVar73;
              auVar114._4_4_ = (ABS(fStack_dc * 0.5) + fStack_bc) - fVar80;
              auVar114._8_4_ = (ABS(fStack_d8 * 0.5) + fStack_b8) - fVar85;
              auVar114._12_4_ = 0.0 - fVar96;
              auVar112 = NEON_fmin(auVar117,auVar114,4);
              if (((0.0 <= auVar112._8_4_) && (0.0 <= auVar112._0_4_)) && (0.0 <= auVar112._4_4_))
              goto LAB_028c85a0;
            }
            lVar19 = lVar19 + 0x230;
          } while (lVar23 != lVar19);
        }
      }
    }
    bVar6 = false;
    uVar11 = 0;
  }
  goto LAB_028c8614;
LAB_028c85a0:
  uVar11 = 0;
  bVar6 = true;
LAB_028c8614:
  local_b0 = (float)CONCAT31(local_b0._1_3_,(char)uVar20);
  local_144[0] = '\0';
  if (((uVar18 & (uVar20 ^ 1)) != 1) || (uVar11 != 0)) {
    *(undefined8 *)(param_3 + 0x40) = 0;
    *(undefined2 *)(param_3 + 0x12a) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    local_144[0] = '\0';
    goto LAB_028c8678;
  }
  if ((*(char *)(param_3 + 0x129) != '\0') && (*(ulong *)(param_3 + 0x40) < 0xff)) {
    *(ulong *)(param_3 + 0x40) = *(ulong *)(param_3 + 0x40) + 1;
  }
  if (*(char *)(param_1 + 0x23c) != '\0') {
    local_144[0] = '\x01';
    *(undefined1 *)(param_3 + 0x12a) = 1;
    *(undefined8 *)(param_3 + 0x30) = 0;
    goto LAB_028c8678;
  }
  cVar21 = *(char *)(*(long *)(*(long *)(param_1 + 0x3f8) + *(long *)(param_3 + 0x20) * 8) + 0x2c);
  if (*(char *)(param_1 + 0x4b0) == '\0' && cVar22 == '\0') {
    cVar22 = *(char *)(param_3 + 0x101);
    *(undefined1 *)(param_3 + 0x101) = 0;
    bVar10 = cVar22 != '\0';
  }
  else {
    bVar10 = true;
  }
  if ((cVar21 == '\0') || (cVar22 != '\0')) {
    if (!bVar6) {
      auVar82._4_4_ = fStack_dc;
      auVar82._0_4_ = local_e0;
      auVar82._8_4_ = fStack_d8;
      auVar82._12_4_ = uStack_d4;
      auVar75._4_4_ = fStack_cc;
      auVar75._0_4_ = local_d0;
      auVar75._8_4_ = fStack_c8;
      auVar75._12_4_ = fStack_c4;
      auVar61._4_4_ = fStack_bc;
      auVar61._0_4_ = local_c0;
      auVar61._8_4_ = fStack_b8;
      auVar61._12_4_ = fStack_b4;
LAB_028c88bc:
      *(long *)(param_2 + 0x28) = auVar82._8_8_;
      *(long *)(param_2 + 0x20) = auVar82._0_8_;
      *(long *)(param_2 + 0x38) = auVar75._8_8_;
      *(long *)(param_2 + 0x30) = auVar75._0_8_;
      *(long *)(param_2 + 0x48) = auVar61._8_8_;
      *(long *)(param_2 + 0x40) = auVar61._0_8_;
      if (*(char *)(param_2 + 0x50) == '\0') {
        *(undefined1 *)(param_2 + 0x50) = 1;
      }
LAB_028c88d4:
      if ((bVar10) || (*(long *)(param_3 + 0x30) == 0)) goto LAB_028c88d8;
      lVar19 = *(long *)(param_3 + 0x30) + -1;
      goto LAB_028c88f8;
    }
  }
  else {
    cVar22 = *(char *)(param_3 + 0x101);
    *(undefined1 *)(param_3 + 0x101) = 0;
    if (!bVar6) {
      uVar139 = CONCAT44(fStack_dc,local_e0);
      auVar82._8_4_ = fStack_d8;
      auVar82._0_8_ = uVar139;
      auVar82._12_4_ = uStack_d4;
      uVar140 = CONCAT44(fStack_cc,local_d0);
      auVar75._8_4_ = fStack_c8;
      auVar75._0_8_ = uVar140;
      auVar75._12_4_ = fStack_c4;
      uVar4 = CONCAT44(fStack_bc,local_c0);
      auVar61._8_4_ = fStack_b8;
      auVar61._0_8_ = uVar4;
      auVar61._12_4_ = fStack_b4;
      if (cVar22 != '\0') goto LAB_028c88bc;
      if ((DAT_04865eb0 & 1) == 0) {
        uVar78 = auVar75._8_8_;
        uVar84 = auVar82._8_8_;
        iVar12 = __cxa_guard_acquire(&DAT_04865eb0);
        auVar82._8_8_ = uVar84;
        auVar75._8_8_ = uVar78;
        if (iVar12 != 0) {
          auVar43._8_4_ = 0x34000000;
          auVar43._0_8_ = 0x3400000034000000;
          auVar43._12_4_ = 0x34000000;
          uRam0000000004865ea8 = auVar43._8_8_;
          _DAT_04865ea0 = 0x3400000034000000;
          __cxa_guard_release(&DAT_04865eb0);
        }
      }
      lVar19 = *(long *)(*(long *)(param_1 + 0x3f8) + *(long *)(param_3 + 0x20) * 8);
      fVar54 = *(float *)(lVar19 + 0x50) - auVar61._0_4_;
      fVar109 = *(float *)(lVar19 + 0x54) - auVar61._4_4_;
      fVar110 = *(float *)(lVar19 + 0x58) - auVar61._8_4_;
      fVar48 = *(float *)(lVar19 + 0x5c) - auVar61._12_4_;
      fVar54 = fVar54 * fVar54;
      fVar109 = fVar109 * fVar109;
      fVar110 = fVar110 * fVar110;
      fVar48 = fVar48 * fVar48;
      auVar32._0_4_ = fVar54 + fVar109;
      auVar32._4_4_ = fVar110 + fVar48;
      auVar32._8_4_ = fVar54 + fVar109;
      auVar32._12_4_ = fVar110 + fVar48;
      auVar41 = NEON_ext(auVar32,auVar32,4,1);
      fVar54 = (float)_DAT_04865ea0;
      if ((auVar41._0_4_ + auVar41._4_4_ <= fVar54) &&
         (fVar109 = *(float *)(lVar19 + 0x30) - auVar82._0_4_,
         fVar110 = *(float *)(lVar19 + 0x34) - auVar82._4_4_,
         fVar48 = *(float *)(lVar19 + 0x38) - auVar82._8_4_,
         fVar53 = *(float *)(lVar19 + 0x3c) - auVar82._12_4_, fVar109 = fVar109 * fVar109,
         fVar110 = fVar110 * fVar110, fVar48 = fVar48 * fVar48, fVar53 = fVar53 * fVar53,
         auVar33._0_4_ = fVar109 + fVar110, auVar33._4_4_ = fVar48 + fVar53,
         auVar33._8_4_ = fVar109 + fVar110, auVar33._12_4_ = fVar48 + fVar53,
         auVar41 = NEON_ext(auVar33,auVar33,4,1), auVar41._0_4_ + auVar41._4_4_ <= fVar54)) {
        fVar109 = *(float *)(lVar19 + 0x40) - auVar75._0_4_;
        fVar110 = *(float *)(lVar19 + 0x44) - auVar75._4_4_;
        fVar48 = *(float *)(lVar19 + 0x48) - auVar75._8_4_;
        fVar53 = *(float *)(lVar19 + 0x4c) - auVar75._12_4_;
        fVar109 = fVar109 * fVar109;
        fVar110 = fVar110 * fVar110;
        fVar48 = fVar48 * fVar48;
        fVar53 = fVar53 * fVar53;
        auVar34._0_4_ = fVar109 + fVar110;
        auVar34._4_4_ = fVar48 + fVar53;
        auVar34._8_4_ = fVar109 + fVar110;
        auVar34._12_4_ = fVar48 + fVar53;
        auVar41 = NEON_ext(auVar34,auVar34,4,1);
        if ((auVar41._0_4_ + auVar41._4_4_ <= fVar54) &&
           (fVar109 = auVar75._0_4_ + *(float *)(lVar19 + 0x40),
           fVar110 = auVar75._4_4_ + *(float *)(lVar19 + 0x44),
           fVar48 = auVar75._8_4_ + *(float *)(lVar19 + 0x48),
           fVar53 = auVar75._12_4_ + *(float *)(lVar19 + 0x4c), fVar109 = fVar109 * fVar109,
           fVar110 = fVar110 * fVar110, fVar48 = fVar48 * fVar48, fVar53 = fVar53 * fVar53,
           auVar35._0_4_ = fVar109 + fVar110, auVar35._4_4_ = fVar48 + fVar53,
           auVar35._8_4_ = fVar109 + fVar110, auVar35._12_4_ = fVar48 + fVar53,
           auVar41 = NEON_ext(auVar35,auVar35,4,1), auVar41._0_4_ + auVar41._4_4_ <= fVar54))
        goto LAB_028c88d4;
      }
      *(long *)(param_2 + 0x28) = auVar82._8_8_;
      *(long *)(param_2 + 0x20) = auVar82._0_8_;
      *(long *)(param_2 + 0x38) = auVar75._8_8_;
      *(long *)(param_2 + 0x30) = auVar75._0_8_;
      *(long *)(param_2 + 0x48) = auVar61._8_8_;
      *(long *)(param_2 + 0x40) = auVar61._0_8_;
      if (*(char *)(param_2 + 0x50) == '\0') {
        *(undefined1 *)(param_2 + 0x50) = 1;
      }
LAB_028c88d8:
      if (*(long *)(param_3 + 0x38) != 3) {
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x20);
      }
      if (*(char *)(param_3 + 0x12a) == '\0') {
        lVar19 = *(long *)(param_1 + 0x248);
      }
      else {
        lVar19 = *(long *)(param_1 + 0x240);
      }
LAB_028c88f8:
      *(long *)(param_3 + 0x30) = lVar19;
      uVar13 = *(ulong *)(param_3 + 0x28);
      if (uVar13 < 3) {
        if (uVar13 == 2) {
          *(undefined1 *)(param_3 + 299) = 1;
          *(undefined8 *)(param_3 + 0x40) = 5;
        }
        *(ulong *)(param_3 + 0x28) = uVar13 + 1;
      }
      else {
        *(undefined1 *)(param_3 + 299) = 1;
        if (*(char *)(param_3 + 0x129) == '\0') {
          if (*(char *)(param_3 + 0x12a) == '\0') {
            local_144[0] = '\0';
          }
          else if (4 < *(ulong *)(param_3 + 0x40)) {
            local_144[0] = '\x01';
            *(undefined8 *)(param_3 + 0x40) = 0;
          }
        }
        else {
          local_144[0] = *(char *)(param_3 + 0x12a);
        }
      }
    }
  }
  uVar20 = (uint)local_b0 & 0xff;
LAB_028c8678:
  if (uVar20 != *(byte *)(param_3 + 0x128)) {
    lVar19 = *(long *)(param_3 + 0x48);
    if (lVar19 == 0) {
      lVar23 = 0;
    }
    else if (*(short *)(lVar19 + 0x1a) == 0) {
      lVar23 = 0;
    }
    else {
      psVar1 = (short *)(lVar19 + 0x1a);
      sVar17 = *(short *)(lVar19 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar17) {
          cVar22 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar17 + 1;
            cVar22 = ExclusiveMonitorsStatus();
          }
          if (cVar22 != '\0') goto LAB_028c8c6c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_028c8c6c:
          bVar6 = false;
        }
        if (bVar6) {
          lVar23 = 0;
          if (*(long *)(lVar19 + 0x10) != 0) {
            lVar23 = *(long *)(lVar19 + 0x10) + -8;
          }
          break;
        }
        lVar23 = 0;
        sVar17 = sVar3;
      } while (sVar3 != 0);
    }
    plVar14 = *(long **)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))();
    }
    *(long *)(param_2 + 8) = lVar23;
    if (lVar23 != 0) {
      FUN_01ac1e54(*(undefined8 *)(param_3 + 0x110),&local_b0);
      *(char *)(param_3 + 0x128) = (char)uVar20;
      if (uVar20 == 0) {
        *(undefined8 *)(param_3 + 0x38) = 5;
      }
    }
  }
  uVar13 = *(ulong *)(param_3 + 0x38);
  if (uVar13 < 2) {
    if (uVar13 == 1) {
      *(undefined8 *)(param_3 + 0x38) = 0;
    }
  }
  else {
    *(ulong *)(param_3 + 0x38) = uVar13 - 1;
    local_144[0] = '\0';
  }
  cVar22 = local_144[0];
  if ((*(char *)(param_1 + 0x23d) == '\0') && (local_144[0] != *(char *)(param_3 + 0x129))) {
    if (*(long *)(param_2 + 8) == 0) {
      lVar19 = *(long *)(param_3 + 0x48);
      if (lVar19 == 0) {
        lVar23 = 0;
      }
      else if (*(short *)(lVar19 + 0x1a) == 0) {
        lVar23 = 0;
      }
      else {
        psVar1 = (short *)(lVar19 + 0x1a);
        sVar17 = *(short *)(lVar19 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar17) {
            cVar21 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar17 + 1;
              cVar21 = ExclusiveMonitorsStatus();
            }
            if (cVar21 != '\0') goto LAB_028c8cd8;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_028c8cd8:
            bVar6 = false;
          }
          if (bVar6) {
            lVar23 = 0;
            if (*(long *)(lVar19 + 0x10) != 0) {
              lVar23 = *(long *)(lVar19 + 0x10) + -8;
            }
            break;
          }
          lVar23 = 0;
          sVar17 = sVar3;
        } while (sVar3 != 0);
      }
      plVar14 = *(long **)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = 0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))();
      }
      *(long *)(param_2 + 8) = lVar23;
      if (lVar23 == 0) {
        return;
      }
    }
    FUN_01ac1e54(*(undefined8 *)(param_3 + 0x118),local_144);
    *(char *)(param_3 + 0x129) = cVar22;
  }
  return;
}


