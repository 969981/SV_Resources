/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028c651c; name: FUN_028c651c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028c651c(long param_1,long param_2,long param_3)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  long *plVar19;
  ulong uVar20;
  byte bVar21;
  short sVar22;
  long lVar23;
  char cVar24;
  char cVar25;
  long lVar26;
  undefined4 uVar41;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float extraout_s0;
  float fVar42;
  float fVar43;
  float fVar44;
  float extraout_var;
  float fVar46;
  float fVar47;
  float extraout_var_00;
  float fVar48;
  float fVar49;
  float extraout_var_01;
  float fVar50;
  undefined1 auVar45 [16];
  float fVar51;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar59 [12];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined2 uVar63;
  undefined2 uVar64;
  int iVar75;
  int iVar76;
  undefined1 auVar65 [16];
  int iVar77;
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  float fVar78;
  float fVar80;
  float fVar81;
  undefined1 auVar79 [16];
  undefined1 auVar82 [12];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  float fVar96;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar97 [16];
  float fVar101;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar103 [16];
  float fVar102;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar109 [16];
  float fVar110;
  float fVar114;
  float fVar115;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar116;
  float fVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar124 [16];
  undefined1 auVar123 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  undefined1 auVar128 [16];
  undefined1 auVar127 [16];
  undefined1 auVar126 [16];
  undefined1 auVar125 [16];
  undefined1 auVar129 [16];
  undefined1 auVar133 [16];
  undefined1 auVar132 [16];
  undefined1 auVar131 [16];
  undefined1 auVar130 [16];
  undefined1 auVar137 [16];
  undefined1 auVar136 [16];
  undefined1 auVar135 [16];
  undefined1 auVar134 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float local_170;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  char local_144 [4];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  undefined4 uStack_dc;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  undefined4 local_84;
  
  cVar25 = *(char *)(param_1 + 0x23b);
  if (cVar25 == '\0' && *(char *)(param_1 + 0x239) != '\0') {
    cVar24 = *(char *)(param_3 + 0x100);
    *(undefined1 *)(param_3 + 0x100) = 0;
    if (cVar24 == '\0') {
      cVar24 = *(char *)(param_3 + 0x101);
      *(undefined1 *)(param_3 + 0x101) = 0;
      if (cVar24 == '\0') {
        bVar17 = *(char *)(param_1 + 0x4b0) != '\0';
        goto LAB_028c6568;
      }
      cVar24 = '\x01';
      bVar21 = 1;
    }
    else {
      cVar24 = '\0';
      bVar21 = 0;
    }
    bVar17 = true;
  }
  else {
    bVar17 = false;
LAB_028c6568:
    cVar24 = '\0';
    bVar21 = 1;
  }
  if (*(char *)(param_1 + 0x23a) == '\0') {
    bVar14 = false;
  }
  else {
    bVar14 = *(char *)(param_3 + 0x19) != '\0';
  }
  cVar15 = cVar25 != '\0';
  cVar25 = cVar24;
  if ((bool)(bVar21 & (bVar17 ^ 1U))) {
    cVar2 = *(char *)(param_3 + 0x100);
    *(undefined1 *)(param_3 + 0x100) = 0;
    bVar16 = cVar2 == '\0';
    if (bVar16) {
      cVar25 = '\x01';
    }
    if (cVar24 == '\0' && bVar16) {
      cVar25 = *(char *)(param_3 + 0x101);
      *(undefined1 *)(param_3 + 0x101) = 0;
      if (cVar25 == '\0') {
        if (*(char *)(param_1 + 0x4b0) == '\0') {
          if ((*(char *)(param_1 + 0x239) == '\0') || (*(char *)(param_3 + 0x128) == '\0')) {
            cVar15 = *(char *)(param_1 + 0x23b) != '\0';
            cVar25 = '\0';
          }
          else {
            cVar25 = '\0';
            cVar15 = true;
          }
        }
        else {
          cVar25 = '\0';
        }
      }
      else {
        cVar25 = '\x01';
      }
    }
  }
  memcpy(&local_d0,(void *)(param_3 + 0xc0),0x30);
  local_f0 = *(undefined8 *)(param_3 + 0xa0);
  uStack_e8 = *(undefined8 *)(param_3 + 0xa8);
  local_e0 = *(float *)(param_3 + 0xb0);
  fVar58 = local_e0 + local_e0;
  bVar12 = local_d0 < fVar58;
  bVar8 = fStack_cc < fVar58;
  bVar9 = fStack_c8 < fVar58;
  bVar16 = bVar12 || (bVar9 || bVar8);
  fVar58 = local_e0 * local_e0;
  local_160 = (float)local_f0;
  fStack_15c = (float)((ulong)local_f0 >> 0x20);
  fStack_158 = (float)uStack_e8;
  fStack_154 = (float)((ulong)uStack_e8 >> 0x20);
  if (!bVar17) {
    if (bVar14 != false) {
      lVar23 = *(long *)(param_1 + 0x200);
      lVar26 = *(long *)(param_1 + 0x208);
      if (lVar23 != lVar26) {
        if (bVar16) {
          auVar52._0_4_ =
               local_c0 * *(float *)PTR_DAT_047d41d0 + fStack_bc * *(float *)(PTR_DAT_047d41d0 + 4);
          auVar52._4_4_ =
               fStack_b8 * *(float *)(PTR_DAT_047d41d0 + 8) +
               fStack_b4 * *(float *)(PTR_DAT_047d41d0 + 0xc);
          auVar52._8_4_ =
               local_c0 * *(float *)PTR_DAT_047d41d0 + fStack_bc * *(float *)(PTR_DAT_047d41d0 + 4);
          auVar52._12_4_ =
               fStack_b8 * *(float *)(PTR_DAT_047d41d0 + 8) +
               fStack_b4 * *(float *)(PTR_DAT_047d41d0 + 0xc);
          auVar52 = NEON_ext(auVar52,auVar52,4,1);
          auVar103._0_4_ = local_c0 * local_c0 + fStack_bc * fStack_bc;
          auVar103._4_4_ = fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4;
          auVar103._8_4_ = local_c0 * local_c0 + fStack_bc * fStack_bc;
          auVar103._12_4_ = fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4;
          fVar42 = auVar52._0_4_ + auVar52._4_4_;
          auVar52 = NEON_ext(auVar103,auVar103,4,1);
          fVar46 = auVar52._0_4_ + auVar52._4_4_;
          fVar48 = auVar52._8_4_ + auVar52._12_4_;
          fVar51 = auVar52._0_4_ + auVar52._4_4_;
          fVar50 = auVar52._8_4_ + auVar52._12_4_;
          iVar18 = -(uint)(fVar46 == 0.0);
          iVar75 = -(uint)(fVar48 == 0.0);
          iVar76 = -(uint)(fVar51 == 0.0);
          iVar77 = -(uint)(fVar50 == 0.0);
          fVar46 = -local_c0 / fVar46;
          fVar48 = -fStack_bc / fVar48;
          fVar51 = -fStack_b8 / fVar51;
          fVar50 = fStack_b4 / fVar50;
          fVar46 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                   CONCAT12((byte)((uint)fVar46 >> 0x10) &
                                            ~(byte)((uint)iVar18 >> 0x10),
                                            CONCAT11((byte)((uint)fVar46 >> 8) &
                                                     ~(byte)((uint)iVar18 >> 8),
                                                     SUB41(fVar46,0) & ~(byte)iVar18)));
          auVar82._0_8_ =
               CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                        CONCAT16((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                                 CONCAT15((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                          CONCAT14(SUB41(fVar48,0) & ~(byte)iVar75,fVar46))));
          auVar82[8] = SUB41(fVar51,0) & ~(byte)iVar76;
          auVar82[9] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar76 >> 8);
          auVar82[10] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
          auVar82[0xb] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
          auVar105[0xc] = SUB41(fVar50,0) & ~(byte)iVar77;
          auVar105._0_12_ = auVar82;
          auVar105[0xd] = (byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar77 >> 8);
          auVar105[0xe] = (byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
          auVar105[0xf] = (byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
          fVar55 = -fVar46;
          fVar48 = (float)((ulong)auVar82._0_8_ >> 0x20);
          fVar56 = -fVar48;
          fVar51 = auVar82._8_4_;
          fVar57 = -fVar51;
          fVar50 = auVar105._12_4_;
          auVar109._4_4_ = fVar51;
          auVar109._0_4_ = fVar51;
          auVar109._8_4_ = fVar51;
          auVar109._12_4_ = fVar51;
          fVar102 = ((float)(*(float *)PTR_DAT_047d4180 <= fVar42) * fVar42 +
                    *(float *)PTR_DAT_047d41a0 * (float)(fVar42 < *(float *)PTR_DAT_047d4180) *
                    fVar42) - *(float *)PTR_DAT_047d4190;
          auVar52 = NEON_ext(auVar109,auVar105,0xc,1);
          auVar138._4_4_ = fVar48;
          auVar138._0_4_ = fVar48;
          auVar138._8_4_ = fVar48;
          auVar138._12_4_ = fVar48;
          fVar42 = *(float *)PTR_DAT_047d41b0;
          auVar103 = NEON_ext(auVar138,auVar52,0xc,1);
          fVar43 = (float)_DAT_03cab640;
          fVar44 = (float)((ulong)_DAT_03cab640 >> 0x20);
          fVar47 = (float)_UNK_03cab648;
          fVar49 = (float)((ulong)_UNK_03cab648 >> 0x20);
          bVar17 = true;
          do {
            fVar110 = *(float *)(lVar23 + 400);
            fVar114 = *(float *)(lVar23 + 0x194);
            fVar115 = *(float *)(lVar23 + 0x198);
            fVar116 = *(float *)(lVar23 + 0x19c);
            fVar117 = (fVar110 - local_160) * (fVar110 - local_160);
            fVar78 = (fVar114 - fStack_15c) * (fVar114 - fStack_15c);
            fVar80 = (fVar115 - fStack_158) * (fVar115 - fStack_158);
            fVar81 = (fVar116 - fStack_154) * (fVar116 - fStack_154);
            auVar139._0_4_ = fVar117 + fVar78;
            auVar139._4_4_ = fVar80 + fVar81;
            auVar139._8_4_ = fVar117 + fVar78;
            auVar139._12_4_ = fVar80 + fVar81;
            auVar105 = NEON_ext(auVar139,auVar139,4,1);
            if (auVar105._0_4_ + auVar105._4_4_ <= fVar58) {
              bVar16 = false;
              bVar12 = true;
              if (*(float *)PTR_DAT_047d41c0 <= fVar102) {
                bVar16 = false;
                bVar12 = true;
                if (!NAN(fVar102) && !NAN(fVar42)) {
                  bVar16 = fVar102 == fVar42;
                  bVar12 = fVar42 <= fVar102;
                }
              }
              if (bVar12 && !bVar16) {
                fVar110 = fVar110 - local_b0;
                fVar114 = fVar114 - fStack_ac;
                fVar115 = fVar115 - fStack_a8;
                auVar120._4_4_ = fVar115;
                auVar120._0_4_ = fVar115;
                auVar120._8_4_ = fVar115;
                auVar120._12_4_ = fVar115;
                auVar121._4_12_ = auVar120._4_12_;
                auVar121._0_4_ = fVar110;
                auVar123._0_8_ = auVar121._0_8_;
                auVar123._8_4_ = fVar114;
                auVar123._12_4_ = fVar115;
                auVar122._8_8_ = auVar123._8_8_;
                auVar122._4_4_ = fVar115;
                auVar122._0_4_ = fVar110;
                auVar124._0_12_ = auVar122._0_12_;
                auVar124._12_4_ = fVar115;
                auVar109 = NEON_ext(auVar124,auVar124,8,1);
                fVar116 = auVar109._0_4_;
                auVar125._4_12_ = auVar124._4_12_;
                auVar125._0_4_ = fVar116;
                auVar127._0_8_ = auVar125._0_8_;
                auVar127._8_4_ = auVar109._8_4_;
                auVar127._12_4_ = fVar115;
                auVar126._8_8_ = auVar127._8_8_;
                auVar126._4_4_ = fVar110;
                auVar126._0_4_ = fVar116;
                auVar128._0_12_ = auVar126._0_12_;
                auVar128._12_4_ = fVar114;
                auVar105 = NEON_ext(auVar128,auVar109,8,1);
                auVar105 = NEON_ext(auVar105,auVar105,0xc,1);
                auVar112._0_4_ =
                     (fVar110 * fVar50 + fVar46 * fVar43 * 0.0 +
                     auVar105._0_4_ * auVar103._0_4_ * fVar43) - auVar52._0_4_ * fVar116;
                auVar112._4_4_ =
                     (fVar114 * fVar50 + fVar48 * fVar44 * 0.0 +
                     auVar105._4_4_ * auVar103._4_4_ * fVar44) - auVar52._4_4_ * auVar109._4_4_;
                auVar112._8_4_ =
                     (fVar115 * fVar50 + fVar51 * fVar47 * 0.0 +
                     auVar105._8_4_ * auVar103._8_4_ * fVar47) - auVar52._8_4_ * auVar109._8_4_;
                auVar112._12_4_ =
                     (fVar50 * 0.0 + fVar110 * fVar46 * fVar49 +
                     auVar105._12_4_ * auVar103._12_4_ * fVar49) - auVar52._12_4_ * auVar109._12_4_;
                auVar129._4_4_ = fVar57;
                auVar129._0_4_ = fVar57;
                auVar129._8_4_ = fVar57;
                auVar129._12_4_ = fVar57;
                auVar130._4_12_ = auVar129._4_12_;
                auVar130._0_4_ = fVar55;
                auVar132._0_8_ = auVar130._0_8_;
                auVar132._8_4_ = fVar56;
                auVar132._12_4_ = fVar57;
                auVar131._8_8_ = auVar132._8_8_;
                auVar131._4_4_ = fVar57;
                auVar131._0_4_ = fVar55;
                auVar133._0_12_ = auVar131._0_12_;
                auVar133._12_4_ = fVar57;
                auVar119._4_4_ = auVar112._8_4_;
                auVar119._0_4_ = auVar112._8_4_;
                auVar119._8_4_ = auVar112._8_4_;
                auVar119._12_4_ = auVar112._8_4_;
                auVar139 = NEON_ext(auVar133,auVar133,8,1);
                auVar109 = NEON_ext(auVar119,auVar112,0xc,1);
                auVar113._4_4_ = auVar112._4_4_;
                auVar113._0_4_ = auVar112._4_4_;
                auVar113._8_4_ = auVar112._4_4_;
                auVar113._12_4_ = auVar112._4_4_;
                fVar110 = auVar139._0_4_;
                auVar134._4_12_ = auVar133._4_12_;
                auVar134._0_4_ = fVar110;
                auVar136._0_8_ = auVar134._0_8_;
                auVar136._8_4_ = auVar139._8_4_;
                auVar136._12_4_ = fVar57;
                auVar135._8_8_ = auVar136._8_8_;
                auVar135._4_4_ = fVar55;
                auVar135._0_4_ = fVar110;
                auVar137._0_12_ = auVar135._0_12_;
                auVar137._12_4_ = fVar56;
                auVar105 = NEON_ext(auVar113,auVar109,0xc,1);
                auVar138 = NEON_ext(auVar137,auVar139,8,1);
                auVar138 = NEON_ext(auVar138,auVar138,0xc,1);
                fVar110 = local_b0 +
                          ((fVar55 * auVar112._12_4_ + fVar50 * auVar112._0_4_ * fVar43 +
                           auVar138._0_4_ * auVar105._0_4_ * fVar43) - auVar109._0_4_ * fVar110);
                fVar114 = fStack_ac +
                          ((fVar56 * auVar112._12_4_ + fVar50 * auVar112._4_4_ * fVar44 +
                           auVar138._4_4_ * auVar105._4_4_ * fVar44) -
                          auVar109._4_4_ * auVar139._4_4_);
                fVar115 = fStack_a8 +
                          ((fVar57 * auVar112._12_4_ + fVar50 * auVar112._8_4_ * fVar47 +
                           auVar138._8_4_ * auVar105._8_4_ * fVar47) -
                          auVar109._8_4_ * auVar139._8_4_);
                fVar116 = fStack_a4 + 0.0;
              }
              auVar118._0_4_ = fVar110 - (local_b0 - ABS(local_d0 * 0.5));
              auVar118._4_4_ = fVar114 - (fStack_ac - ABS(fStack_cc * 0.5));
              auVar118._8_4_ = fVar115 - (fStack_a8 - ABS(fStack_c8 * 0.5));
              auVar118._12_4_ = fVar116 - 0.0;
              auVar111._0_4_ = (ABS(local_d0 * 0.5) + local_b0) - fVar110;
              auVar111._4_4_ = (ABS(fStack_cc * 0.5) + fStack_ac) - fVar114;
              auVar111._8_4_ = (ABS(fStack_c8 * 0.5) + fStack_a8) - fVar115;
              auVar111._12_4_ = 0.0 - fVar116;
              auVar105 = NEON_fmin(auVar118,auVar111,4);
              if (((0.0 <= auVar105._8_4_) && (0.0 <= auVar105._0_4_)) && (0.0 <= auVar105._4_4_))
              goto LAB_028c6bdc;
            }
            lVar23 = lVar23 + 0x230;
          } while (lVar26 != lVar23);
          bVar16 = false;
          goto LAB_028c6c44;
        }
        do {
          fVar42 = *(float *)(lVar23 + 400) - local_160;
          fVar46 = *(float *)(lVar23 + 0x194) - fStack_15c;
          fVar48 = *(float *)(lVar23 + 0x198) - fStack_158;
          fVar51 = *(float *)(lVar23 + 0x19c) - fStack_154;
          fVar42 = fVar42 * fVar42;
          fVar46 = fVar46 * fVar46;
          fVar48 = fVar48 * fVar48;
          fVar51 = fVar51 * fVar51;
          auVar35._0_4_ = fVar42 + fVar46;
          auVar35._4_4_ = fVar48 + fVar51;
          auVar35._8_4_ = fVar42 + fVar46;
          auVar35._12_4_ = fVar48 + fVar51;
          auVar52 = NEON_ext(auVar35,auVar35,4,1);
          if (auVar52._0_4_ + auVar52._4_4_ <= fVar58) goto LAB_028c6bdc;
          lVar23 = lVar23 + 0x230;
        } while (lVar26 != lVar23);
      }
    }
LAB_028c6c3c:
    bVar16 = false;
    goto LAB_028c6c40;
  }
  lVar23 = *(long *)(param_1 + 0x200);
  lVar26 = *(long *)(param_1 + 0x208);
  if (lVar23 == lVar26) goto LAB_028c6c3c;
  do {
    auVar52 = *(undefined1 (*) [16])(lVar23 + 400);
    fVar42 = auVar52._0_4_;
    fVar46 = auVar52._4_4_;
    fVar48 = auVar52._8_4_;
    fVar50 = auVar52._12_4_;
    fVar51 = (local_160 - fVar42) * (local_160 - fVar42);
    fVar55 = (fStack_15c - fVar46) * (fStack_15c - fVar46);
    fVar56 = (fStack_158 - fVar48) * (fStack_158 - fVar48);
    fVar57 = (fStack_154 - fVar50) * (fStack_154 - fVar50);
    auVar27._0_4_ = fVar51 + fVar55;
    auVar27._4_4_ = fVar56 + fVar57;
    auVar27._8_4_ = fVar51 + fVar55;
    auVar27._12_4_ = fVar56 + fVar57;
    auVar52 = NEON_ext(auVar27,auVar27,4,1);
    fVar51 = auVar52._0_4_ + auVar52._4_4_;
    if (fVar51 <= fVar58) {
      if (bVar16) {
        auVar29._0_4_ =
             local_c0 * *(float *)PTR_DAT_047d41d0 + fStack_bc * *(float *)(PTR_DAT_047d41d0 + 4);
        auVar29._4_4_ =
             fStack_b8 * *(float *)(PTR_DAT_047d41d0 + 8) +
             fStack_b4 * *(float *)(PTR_DAT_047d41d0 + 0xc);
        auVar29._8_4_ =
             local_c0 * *(float *)PTR_DAT_047d41d0 + fStack_bc * *(float *)(PTR_DAT_047d41d0 + 4);
        auVar29._12_4_ =
             fStack_b8 * *(float *)(PTR_DAT_047d41d0 + 8) +
             fStack_b4 * *(float *)(PTR_DAT_047d41d0 + 0xc);
        auVar52 = NEON_ext(auVar29,auVar29,4,1);
        fVar55 = auVar52._0_4_ + auVar52._4_4_;
        fVar55 = ((float)((float)*(undefined8 *)PTR_DAT_047d4180 <= fVar55) * fVar55 +
                 *(float *)PTR_DAT_047d41a0 *
                 (float)(fVar55 < (float)*(undefined8 *)PTR_DAT_047d4180) * fVar55) -
                 *(float *)PTR_DAT_047d4190;
        if ((fVar55 < *(float *)PTR_DAT_047d41c0) || (*(float *)PTR_DAT_047d41b0 < fVar55)) {
          auVar40._0_4_ = local_c0 * local_c0 + fStack_bc * fStack_bc;
          auVar40._4_4_ = fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4;
          auVar40._8_4_ = local_c0 * local_c0 + fStack_bc * fStack_bc;
          auVar40._12_4_ = fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4;
          auVar52 = NEON_ext(auVar40,auVar40,4,1);
          fVar50 = auVar52._0_4_ + auVar52._4_4_;
          fVar55 = auVar52._8_4_ + auVar52._12_4_;
          fVar56 = auVar52._0_4_ + auVar52._4_4_;
          fVar57 = auVar52._8_4_ + auVar52._12_4_;
          iVar18 = -(uint)(fVar50 == 0.0);
          iVar75 = -(uint)(fVar55 == 0.0);
          iVar76 = -(uint)(fVar56 == 0.0);
          iVar77 = -(uint)(fVar57 == 0.0);
          fVar50 = -local_c0 / fVar50;
          fVar55 = -fStack_bc / fVar55;
          fVar56 = -fStack_b8 / fVar56;
          fVar57 = fStack_b4 / fVar57;
          fVar102 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                    CONCAT12((byte)((uint)fVar50 >> 0x10) &
                                             ~(byte)((uint)iVar18 >> 0x10),
                                             CONCAT11((byte)((uint)fVar50 >> 8) &
                                                      ~(byte)((uint)iVar18 >> 8),
                                                      SUB41(fVar50,0) & ~(byte)iVar18)));
          auVar59._0_8_ =
               CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                        CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                                 CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                          CONCAT14(SUB41(fVar55,0) & ~(byte)iVar75,fVar102))));
          auVar59[8] = SUB41(fVar56,0) & ~(byte)iVar76;
          auVar59[9] = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar76 >> 8);
          auVar59[10] = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
          auVar59[0xb] = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
          auVar61[0xc] = SUB41(fVar57,0) & ~(byte)iVar77;
          auVar61._0_12_ = auVar59;
          auVar61[0xd] = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar77 >> 8);
          auVar61[0xe] = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
          auVar61[0xf] = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
          fVar42 = fVar42 - local_b0;
          fVar46 = fVar46 - fStack_ac;
          fVar48 = fVar48 - fStack_a8;
          auVar87._4_4_ = fVar48;
          auVar87._0_4_ = fVar48;
          auVar87._8_4_ = fVar48;
          auVar87._12_4_ = fVar48;
          auVar88._4_12_ = auVar87._4_12_;
          auVar88._0_4_ = fVar42;
          uVar41 = (undefined4)
                   (CONCAT26((short)((uint)fVar46 >> 0x10),CONCAT24(SUB42(fVar46,0),fVar42)) >> 0x20
                   );
          auVar90._0_8_ = auVar88._0_8_;
          auVar90._8_4_ = uVar41;
          auVar90._12_4_ = fVar48;
          auVar89._8_8_ = auVar90._8_8_;
          auVar89._4_4_ = fVar48;
          auVar89._0_4_ = fVar42;
          auVar91._0_12_ = auVar89._0_12_;
          auVar91._12_4_ = fVar48;
          auVar109 = NEON_ext(auVar91,auVar91,8,1);
          fVar50 = auVar109._0_4_;
          auVar92._4_12_ = auVar91._4_12_;
          auVar92._0_4_ = fVar50;
          auVar94._0_8_ = auVar92._0_8_;
          auVar94._8_4_ = auVar109._8_4_;
          auVar94._12_4_ = fVar48;
          auVar93._8_8_ = auVar94._8_8_;
          auVar93._4_4_ = fVar42;
          auVar93._0_4_ = fVar50;
          auVar95._0_12_ = auVar93._0_12_;
          auVar95._12_4_ = uVar41;
          fVar57 = auVar61._12_4_;
          auVar67._0_4_ = -fVar102;
          fVar55 = (float)((ulong)auVar59._0_8_ >> 0x20);
          fVar43 = -fVar55;
          fVar56 = auVar59._8_4_;
          auVar66._8_4_ = -fVar56;
          auVar97._4_4_ = fVar56;
          auVar97._0_4_ = fVar56;
          auVar97._8_4_ = fVar56;
          auVar97._12_4_ = fVar56;
          auVar103 = NEON_ext(auVar97,auVar61,0xc,1);
          auVar104._4_4_ = fVar55;
          auVar104._0_4_ = fVar55;
          auVar104._8_4_ = fVar55;
          auVar104._12_4_ = fVar55;
          fVar44 = (float)_DAT_03cab640;
          fVar47 = (float)((ulong)_DAT_03cab640 >> 0x20);
          fVar49 = (float)_UNK_03cab648;
          fVar110 = (float)((ulong)_UNK_03cab648 >> 0x20);
          auVar105 = NEON_ext(auVar104,auVar103,0xc,1);
          auVar52 = NEON_ext(auVar95,auVar109,8,1);
          auVar52 = NEON_ext(auVar52,auVar52,0xc,1);
          auVar66._4_4_ = auVar66._8_4_;
          auVar66._0_4_ = auVar66._8_4_;
          auVar66._12_4_ = auVar66._8_4_;
          auVar67._4_12_ = auVar66._4_12_;
          auVar69._0_8_ = auVar67._0_8_;
          auVar69._8_4_ = fVar43;
          auVar69._12_4_ = auVar66._8_4_;
          auVar68._8_8_ = auVar69._8_8_;
          auVar68._4_4_ = auVar66._8_4_;
          auVar68._0_4_ = auVar67._0_4_;
          auVar70._0_12_ = auVar68._0_12_;
          auVar70._12_4_ = auVar66._8_4_;
          fVar50 = (fVar42 * fVar57 + fVar102 * fVar44 * 0.0 +
                   auVar52._0_4_ * auVar105._0_4_ * fVar44) - auVar103._0_4_ * fVar50;
          fVar46 = (fVar46 * fVar57 + fVar55 * fVar47 * 0.0 +
                   auVar52._4_4_ * auVar105._4_4_ * fVar47) - auVar103._4_4_ * auVar109._4_4_;
          fVar48 = (fVar48 * fVar57 + fVar56 * fVar49 * 0.0 +
                   auVar52._8_4_ * auVar105._8_4_ * fVar49) - auVar103._8_4_ * auVar109._8_4_;
          fVar42 = (fVar57 * 0.0 + fVar42 * fVar102 * fVar110 +
                   auVar52._12_4_ * auVar105._12_4_ * fVar110) - auVar103._12_4_ * auVar109._12_4_;
          auVar62._4_4_ = fVar48;
          auVar62._0_4_ = fVar48;
          auVar62._8_4_ = fVar48;
          auVar62._12_4_ = fVar48;
          auVar84._4_4_ = fVar46;
          auVar84._0_4_ = fVar46;
          auVar84._8_4_ = fVar46;
          auVar84._12_4_ = fVar46;
          auVar105 = NEON_ext(auVar70,auVar70,8,1);
          auVar4._4_2_ = SUB42(fVar46,0);
          auVar4._0_4_ = fVar50;
          auVar4._6_2_ = (short)((uint)fVar46 >> 0x10);
          auVar4._8_2_ = SUB42(fVar48,0);
          auVar4._10_2_ = (short)((uint)fVar48 >> 0x10);
          auVar4._12_2_ = SUB42(fVar42,0);
          auVar4._14_2_ = (short)((uint)fVar42 >> 0x10);
          auVar52 = NEON_ext(auVar62,auVar4,0xc,1);
          fVar55 = auVar105._0_4_;
          auVar71._4_12_ = auVar70._4_12_;
          auVar71._0_4_ = fVar55;
          auVar73._0_8_ = auVar71._0_8_;
          auVar73._8_4_ = auVar105._8_4_;
          auVar73._12_4_ = auVar66._8_4_;
          auVar72._8_8_ = auVar73._8_8_;
          auVar72._4_4_ = auVar67._0_4_;
          auVar72._0_4_ = fVar55;
          auVar74._0_12_ = auVar72._0_12_;
          auVar74._12_4_ = fVar43;
          auVar109 = NEON_ext(auVar84,auVar52,0xc,1);
          auVar103 = NEON_ext(auVar74,auVar105,8,1);
          auVar103 = NEON_ext(auVar103,auVar103,0xc,1);
          fVar50 = local_b0 +
                   ((auVar67._0_4_ * fVar42 + fVar57 * fVar50 * fVar44 +
                    auVar103._0_4_ * auVar109._0_4_ * fVar44) - auVar52._0_4_ * fVar55);
          fVar55 = fStack_ac +
                   ((fVar43 * fVar42 + fVar57 * fVar46 * fVar47 +
                    auVar103._4_4_ * auVar109._4_4_ * fVar47) - auVar52._4_4_ * auVar105._4_4_);
          fVar56 = fStack_a8 +
                   ((auVar66._8_4_ * fVar42 + fVar57 * fVar48 * fVar49 +
                    auVar103._8_4_ * auVar109._8_4_ * fVar49) - auVar52._8_4_ * auVar105._8_4_);
          fVar42 = fVar55 - (fStack_ac - ABS(fStack_cc * 0.5));
          fVar46 = fVar56 - (fStack_a8 - ABS(fStack_c8 * 0.5));
          fVar48 = (fStack_a4 + 0.0) - 0.0;
          auVar54._0_4_ = (local_b0 + ABS(local_d0 * 0.5)) - fVar50;
          auVar54._4_4_ = (fStack_ac + ABS(fStack_cc * 0.5)) - fVar55;
          auVar54._8_4_ = (fStack_a8 + ABS(fStack_c8 * 0.5)) - fVar56;
          auVar54._12_4_ = 0.0 - (fStack_a4 + 0.0);
          auVar5._4_2_ = SUB42(fVar42,0);
          auVar5._0_4_ = fVar50 - (local_b0 - ABS(local_d0 * 0.5));
          auVar5._6_2_ = (short)((uint)fVar42 >> 0x10);
          auVar5._8_2_ = SUB42(fVar46,0);
          auVar5._10_2_ = (short)((uint)fVar46 >> 0x10);
          auVar5._12_2_ = SUB42(fVar48,0);
          auVar5._14_2_ = (short)((uint)fVar48 >> 0x10);
          auVar52 = NEON_fmin(auVar5,auVar54,4);
          auVar82 = auVar52._0_12_;
        }
        else {
          auVar60._0_4_ = fVar42 - (local_b0 - ABS(local_d0 * 0.5));
          auVar60._4_4_ = fVar46 - (fStack_ac - ABS(fStack_cc * 0.5));
          auVar60._8_4_ = fVar48 - (fStack_a8 - ABS(fStack_c8 * 0.5));
          auVar60._12_4_ = fVar50 - 0.0;
          auVar53._0_4_ = (local_b0 + ABS(local_d0 * 0.5)) - fVar42;
          auVar53._4_4_ = (fStack_ac + ABS(fStack_cc * 0.5)) - fVar46;
          auVar53._8_4_ = (fStack_a8 + ABS(fStack_c8 * 0.5)) - fVar48;
          auVar53._12_4_ = 0.0 - fVar50;
          auVar52 = NEON_fmin(auVar60,auVar53,4);
          auVar82 = auVar52._0_12_;
        }
        if (((auVar82._8_4_ < 0.0) || (auVar82._0_4_ < 0.0)) || (auVar82._4_4_ < 0.0))
        goto LAB_028c6650;
      }
      cVar15 = false;
      goto LAB_028c6bdc;
    }
LAB_028c6650:
    local_170 = SUB164(*(undefined1 (*) [16])(lVar23 + 0x160),0);
    thunk_FUN_026fd880(&local_f0);
    fVar42 = (local_160 - extraout_s0) * (local_160 - extraout_s0);
    fVar46 = (fStack_15c - extraout_var) * (fStack_15c - extraout_var);
    fVar48 = (fStack_158 - extraout_var_00) * (fStack_158 - extraout_var_00);
    fVar50 = (fStack_154 - extraout_var_01) * (fStack_154 - extraout_var_01);
    auVar28._0_4_ = fVar42 + fVar46;
    auVar28._4_4_ = fVar48 + fVar50;
    auVar28._8_4_ = fVar42 + fVar46;
    auVar28._12_4_ = fVar48 + fVar50;
    auVar52 = NEON_ext(auVar28,auVar28,4,1);
    fVar51 = fVar51 + auVar52._0_4_ + auVar52._4_4_;
    if ((fVar51 <= local_170 * local_170) ||
       (*(double *)(param_1 + 0x270) <= (double)(fVar58 / fVar51))) {
      if (*(char *)(param_3 + 0x18) == '\0') {
        local_140 = local_f0;
        uStack_138 = uStack_e8;
        local_130 = CONCAT44(uStack_dc,local_e0);
        cVar24 = *(char *)(param_1 + 0x8e8);
        uVar20 = FUN_00c74600(lVar23,&local_140,cVar24);
        if (((uVar20 & 1) != 0) &&
           ((!bVar12 && (!bVar9 && !bVar8) ||
            (uVar20 = FUN_00ca3e00(lVar23,&local_d0,cVar24 != '\0'), (uVar20 & 1) != 0)))) {
LAB_028c6fc0:
          bVar16 = false;
          cVar15 = false;
          goto LAB_028c6c40;
        }
      }
      else {
        local_110 = local_f0;
        uStack_108 = uStack_e8;
        local_100 = CONCAT44(uStack_dc,local_e0);
        cVar24 = *(char *)(param_1 + 0x8e8);
        uVar20 = FUN_00c74600(lVar23,&local_110,cVar24);
        if ((uVar20 & 1) != 0) {
          if (bVar12 || (bVar9 || bVar8)) {
            uVar20 = FUN_00ca3e00(lVar23,&local_d0,cVar24 != '\0');
            if ((uVar20 & 1) != 0) goto LAB_028c6fc0;
            uVar20 = FUN_026f877c(*(undefined1 (*) [16])(param_1 + 0x280),lVar23,&local_d0,
                                  *(undefined1 *)(param_1 + 0x8e8));
          }
          else {
            local_118 = local_d4;
            fVar43 = *(float *)(lVar23 + 0x1d0);
            fVar50 = *(float *)(lVar23 + 0x170);
            fVar55 = *(float *)(lVar23 + 0x1b0);
            fVar56 = *(float *)(lVar23 + 0x1b4);
            fVar57 = *(float *)(lVar23 + 0x1b8);
            fVar102 = *(float *)(lVar23 + 0x1bc);
            fVar78 = *(float *)(lVar23 + 0x1c0) * fVar43;
            fVar80 = *(float *)(lVar23 + 0x1c4) * fVar43;
            fVar81 = *(float *)(lVar23 + 0x1c8) * fVar43;
            fVar43 = *(float *)(lVar23 + 0x1cc) * fVar43;
            auVar52 = *(undefined1 (*) [16])(param_1 + 0x280);
            fVar85 = fVar50 * fVar50;
            fVar44 = auVar52._0_4_;
            fVar96 = fVar44 * fVar50;
            fVar47 = auVar52._4_4_;
            fVar98 = fVar47 * fVar50;
            fVar49 = auVar52._8_4_;
            fVar99 = fVar49 * fVar50;
            fVar110 = auVar52._12_4_;
            fVar100 = fVar110 * fVar50;
            fVar42 = fVar55 + fVar78;
            fVar46 = fVar56 + fVar80;
            fVar48 = fVar57 + fVar81;
            fVar51 = fVar102 + fVar43;
            fVar114 = (float)local_f0;
            auVar83._0_4_ = fVar55 - fVar114;
            fVar115 = (float)((ulong)local_f0 >> 0x20);
            auVar83._4_4_ = fVar56 - fVar115;
            fVar116 = (float)uStack_e8;
            auVar83._8_4_ = fVar57 - fVar116;
            fVar117 = (float)((ulong)uStack_e8 >> 0x20);
            auVar83._12_4_ = fVar102 - fVar117;
            auVar30._0_4_ = auVar83._0_4_ * fVar96 + auVar83._4_4_ * fVar98;
            auVar30._4_4_ = auVar83._8_4_ * fVar99 + auVar83._12_4_ * fVar100;
            auVar30._8_4_ = auVar83._0_4_ * fVar96 + auVar83._4_4_ * fVar98;
            auVar30._12_4_ = auVar83._8_4_ * fVar99 + auVar83._12_4_ * fVar100;
            auVar52 = NEON_ext(auVar30,auVar30,4,1);
            auVar86._0_4_ = fVar42 - fVar114;
            auVar86._4_4_ = fVar46 - fVar115;
            auVar86._8_4_ = fVar48 - fVar116;
            auVar86._12_4_ = fVar51 - fVar117;
            fVar101 = fVar55 - (auVar52._0_4_ + auVar52._4_4_) * (fVar96 / fVar85);
            fVar106 = fVar56 - (auVar52._8_4_ + auVar52._12_4_) * (fVar98 / fVar85);
            fVar107 = fVar57 - (auVar52._0_4_ + auVar52._4_4_) * (fVar99 / fVar85);
            fVar108 = fVar102 - (auVar52._8_4_ + auVar52._12_4_) * (fVar100 / fVar85);
            auVar31._0_4_ = fVar96 * auVar86._0_4_ + fVar98 * auVar86._4_4_;
            auVar31._4_4_ = fVar99 * auVar86._8_4_ + fVar100 * auVar86._12_4_;
            auVar31._8_4_ = fVar96 * auVar86._0_4_ + fVar98 * auVar86._4_4_;
            auVar31._12_4_ = fVar99 * auVar86._8_4_ + fVar100 * auVar86._12_4_;
            auVar52 = NEON_ext(auVar31,auVar31,4,1);
            fVar42 = (fVar42 - (fVar96 / fVar85) * (auVar52._0_4_ + auVar52._4_4_)) - fVar101;
            fVar46 = (fVar46 - (fVar98 / fVar85) * (auVar52._8_4_ + auVar52._12_4_)) - fVar106;
            fVar48 = (fVar48 - (fVar99 / fVar85) * (auVar52._0_4_ + auVar52._4_4_)) - fVar107;
            fVar51 = (fVar51 - (fVar100 / fVar85) * (auVar52._8_4_ + auVar52._12_4_)) - fVar108;
            bVar17 = false;
            bVar11 = true;
            bVar13 = false;
            if (fVar42 < 1.1920929e-07) {
              bVar17 = false;
              bVar11 = false;
              bVar13 = true;
              if (!NAN(fVar42)) {
                bVar17 = fVar42 < -1.1920929e-07;
                bVar11 = fVar42 == -1.1920929e-07;
                bVar13 = false;
              }
            }
            bVar10 = false;
            if ((!bVar11 && bVar17 == bVar13) && (bVar10 = false, !NAN(fVar46))) {
              bVar10 = fVar46 < 1.1920929e-07;
            }
            bVar17 = false;
            bVar11 = true;
            bVar13 = false;
            if (bVar10) {
              bVar17 = false;
              bVar11 = false;
              bVar13 = true;
              if (!NAN(fVar46)) {
                bVar17 = fVar46 < -1.1920929e-07;
                bVar11 = fVar46 == -1.1920929e-07;
                bVar13 = false;
              }
            }
            bVar10 = false;
            if ((!bVar11 && bVar17 == bVar13) && (bVar10 = false, !NAN(fVar48))) {
              bVar10 = fVar48 < 1.1920929e-07;
            }
            bVar17 = false;
            bVar11 = true;
            bVar13 = false;
            if (bVar10) {
              bVar17 = false;
              bVar11 = false;
              bVar13 = true;
              if (!NAN(fVar48)) {
                bVar17 = fVar48 < -1.1920929e-07;
                bVar11 = fVar48 == -1.1920929e-07;
                bVar13 = false;
              }
            }
            if (bVar11 || bVar17 != bVar13) {
              fVar85 = (fVar114 - fVar101) * fVar42;
              fVar96 = (fVar115 - fVar106) * fVar46;
              fVar98 = (fVar116 - fVar107) * fVar48;
              fVar99 = (fVar117 - fVar108) * fVar51;
              auVar32._0_4_ = fVar85 + fVar96;
              auVar32._4_4_ = fVar98 + fVar99;
              auVar32._8_4_ = fVar85 + fVar96;
              auVar32._12_4_ = fVar98 + fVar99;
              auVar33._0_4_ = fVar42 * fVar42 + fVar46 * fVar46;
              auVar33._4_4_ = fVar48 * fVar48 + fVar51 * fVar51;
              auVar33._8_4_ = fVar42 * fVar42 + fVar46 * fVar46;
              auVar33._12_4_ = fVar48 * fVar48 + fVar51 * fVar51;
              auVar103 = NEON_ext(auVar32,auVar32,4,1);
              auVar52 = NEON_ext(auVar33,auVar33,4,1);
              fVar42 = (auVar103._0_4_ + auVar103._4_4_) / (auVar52._0_4_ + auVar52._4_4_);
              if ((0.0 < fVar42) && (auVar83 = auVar86, fVar42 < 1.0)) {
                auVar83._0_4_ = (fVar55 + fVar78 * fVar42) - fVar114;
                auVar83._4_4_ = (fVar56 + fVar80 * fVar42) - fVar115;
                auVar83._8_4_ = (fVar57 + fVar81 * fVar42) - fVar116;
                auVar83._12_4_ = (fVar102 + fVar43 * fVar42) - fVar117;
              }
            }
            fVar42 = fVar44 * auVar83._0_4_;
            fVar46 = fVar47 * auVar83._4_4_;
            fVar48 = fVar49 * auVar83._8_4_;
            fVar51 = fVar110 * auVar83._12_4_;
            auVar34._0_4_ = fVar42 + fVar46;
            auVar34._4_4_ = fVar48 + fVar51;
            auVar34._8_4_ = fVar42 + fVar46;
            auVar34._12_4_ = fVar48 + fVar51;
            auVar52 = NEON_ext(auVar34,auVar34,4,1);
            fVar42 = auVar52._0_4_ + auVar52._4_4_;
            fVar46 = 1.0;
            if (fVar42 < 0.0) {
              fVar46 = 0.0;
            }
            fVar46 = fVar46 * fVar42;
            fVar42 = 1.0;
            if (fVar50 <= fVar46) {
              fVar42 = 0.0;
            }
            fVar48 = 1.0;
            if (fVar50 > fVar46) {
              fVar48 = 0.0;
            }
            fVar42 = fVar46 * fVar42 + fVar50 * fVar48;
            if (0.0 < fVar42 / fVar50) {
              uStack_98 = CONCAT44(fVar117 + fVar110 * fVar42,fVar116 + fVar49 * fVar42);
              local_a0 = CONCAT44(fVar115 + fVar47 * fVar42,fVar114 + fVar44 * fVar42);
              fVar42 = 1.0;
              if (0.0 <= local_e0) {
                fVar42 = 0.0;
              }
              fVar46 = 1.0;
              if (0.0 > local_e0) {
                fVar46 = 0.0;
              }
              local_90 = local_e0 * fVar46 - local_e0 * fVar42;
            }
            else {
              uStack_98 = uStack_e8;
              local_a0 = local_f0;
              local_90 = local_e0;
              local_84 = local_d4;
            }
            uVar20 = FUN_00c74600(lVar23,&local_a0,cVar24 != '\0');
          }
          if ((uVar20 & 1) != 0) {
            bVar16 = false;
            bVar17 = false;
            cVar15 = false;
            goto LAB_028c6c44;
          }
        }
      }
    }
    lVar23 = lVar23 + 0x230;
  } while (lVar26 != lVar23);
  bVar16 = false;
  bVar17 = true;
  cVar15 = true;
  goto LAB_028c6c44;
LAB_028c6bdc:
  bVar16 = true;
LAB_028c6c40:
  bVar17 = true;
LAB_028c6c44:
  local_a0 = CONCAT71(local_a0._1_7_,cVar15);
  local_144[0] = '\0';
  if ((!bVar17) || ((bVar14 & (cVar15 ^ 1U)) == 0)) {
    *(undefined8 *)(param_3 + 0x40) = 0;
    *(undefined2 *)(param_3 + 0x12a) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    local_144[0] = '\0';
    goto LAB_028c6ca4;
  }
  if ((*(char *)(param_3 + 0x129) != '\0') && (*(ulong *)(param_3 + 0x40) < 0xff)) {
    *(ulong *)(param_3 + 0x40) = *(ulong *)(param_3 + 0x40) + 1;
  }
  if (*(char *)(param_1 + 0x23c) != '\0') {
    local_144[0] = '\x01';
    *(undefined1 *)(param_3 + 0x12a) = 1;
    *(undefined8 *)(param_3 + 0x30) = 0;
    goto LAB_028c6ca4;
  }
  cVar24 = *(char *)(*(long *)(*(long *)(param_1 + 0x3f8) + *(long *)(param_3 + 0x20) * 8) + 0x2c);
  if (*(char *)(param_1 + 0x4b0) == '\0' && cVar25 == '\0') {
    cVar25 = *(char *)(param_3 + 0x101);
    *(undefined1 *)(param_3 + 0x101) = 0;
    bVar17 = cVar25 != '\0';
  }
  else {
    bVar17 = true;
  }
  uVar63 = (undefined2)((uint)fStack_ac >> 0x10);
  uVar64 = (undefined2)((uint)fStack_a4 >> 0x10);
  if ((cVar24 == '\0') || (cVar25 != '\0')) {
    if (!bVar16) {
      auVar65._4_4_ = fStack_bc;
      auVar65._0_4_ = local_c0;
      auVar65._8_4_ = fStack_b8;
      auVar65._12_4_ = fStack_b4;
      auVar79._4_4_ = fStack_cc;
      auVar79._0_4_ = local_d0;
      auVar79._8_4_ = fStack_c8;
      auVar79._12_4_ = uStack_c4;
LAB_028c6ea8:
      *(long *)(param_2 + 0x28) = auVar79._8_8_;
      *(long *)(param_2 + 0x20) = auVar79._0_8_;
      *(long *)(param_2 + 0x38) = auVar65._8_8_;
      *(long *)(param_2 + 0x30) = auVar65._0_8_;
      *(ulong *)(param_2 + 0x48) = CONCAT26(uVar64,CONCAT24(SUB42(fStack_a4,0),fStack_a8));
      *(ulong *)(param_2 + 0x40) = CONCAT26(uVar63,CONCAT24(SUB42(fStack_ac,0),local_b0));
      if (*(char *)(param_2 + 0x50) == '\0') {
        *(undefined1 *)(param_2 + 0x50) = 1;
      }
LAB_028c6ec0:
      if ((bVar17) || (*(long *)(param_3 + 0x30) == 0)) goto LAB_028c6ec4;
      lVar23 = *(long *)(param_3 + 0x30) + -1;
      goto LAB_028c6ee4;
    }
  }
  else {
    cVar25 = *(char *)(param_3 + 0x101);
    *(undefined1 *)(param_3 + 0x101) = 0;
    if (!bVar16) {
      uVar7 = CONCAT44(fStack_bc,local_c0);
      auVar65._8_4_ = fStack_b8;
      auVar65._0_8_ = uVar7;
      auVar65._12_4_ = fStack_b4;
      uVar6 = CONCAT44(fStack_cc,local_d0);
      auVar79._8_4_ = fStack_c8;
      auVar79._0_8_ = uVar6;
      auVar79._12_4_ = uStack_c4;
      if (cVar25 != '\0') goto LAB_028c6ea8;
      if ((DAT_04865e50 & 1) == 0) {
        iVar18 = __cxa_guard_acquire(&DAT_04865e50);
        if (iVar18 != 0) {
          auVar45._8_4_ = 0x34000000;
          auVar45._0_8_ = 0x3400000034000000;
          auVar45._12_4_ = 0x34000000;
          uRam0000000004865e48 = auVar45._8_8_;
          _DAT_04865e40 = 0x3400000034000000;
          __cxa_guard_release(&DAT_04865e50);
        }
      }
      lVar23 = *(long *)(*(long *)(param_1 + 0x3f8) + *(long *)(param_3 + 0x20) * 8);
      fVar58 = *(float *)(lVar23 + 0x50) - local_b0;
      fVar42 = *(float *)(lVar23 + 0x54) - fStack_ac;
      fVar46 = *(float *)(lVar23 + 0x58) - fStack_a8;
      fVar48 = *(float *)(lVar23 + 0x5c) - fStack_a4;
      fVar58 = fVar58 * fVar58;
      fVar42 = fVar42 * fVar42;
      fVar46 = fVar46 * fVar46;
      fVar48 = fVar48 * fVar48;
      auVar36._0_4_ = fVar58 + fVar42;
      auVar36._4_4_ = fVar46 + fVar48;
      auVar36._8_4_ = fVar58 + fVar42;
      auVar36._12_4_ = fVar46 + fVar48;
      auVar52 = NEON_ext(auVar36,auVar36,4,1);
      fVar58 = (float)_DAT_04865e40;
      if ((auVar52._0_4_ + auVar52._4_4_ <= fVar58) &&
         (fVar42 = *(float *)(lVar23 + 0x30) - auVar79._0_4_,
         fVar46 = *(float *)(lVar23 + 0x34) - auVar79._4_4_,
         fVar48 = *(float *)(lVar23 + 0x38) - auVar79._8_4_,
         fVar51 = *(float *)(lVar23 + 0x3c) - auVar79._12_4_, fVar42 = fVar42 * fVar42,
         fVar46 = fVar46 * fVar46, fVar48 = fVar48 * fVar48, fVar51 = fVar51 * fVar51,
         auVar37._0_4_ = fVar42 + fVar46, auVar37._4_4_ = fVar48 + fVar51,
         auVar37._8_4_ = fVar42 + fVar46, auVar37._12_4_ = fVar48 + fVar51,
         auVar52 = NEON_ext(auVar37,auVar37,4,1), auVar52._0_4_ + auVar52._4_4_ <= fVar58)) {
        fVar42 = *(float *)(lVar23 + 0x40) - auVar65._0_4_;
        fVar46 = *(float *)(lVar23 + 0x44) - auVar65._4_4_;
        fVar48 = *(float *)(lVar23 + 0x48) - auVar65._8_4_;
        fVar51 = *(float *)(lVar23 + 0x4c) - auVar65._12_4_;
        fVar42 = fVar42 * fVar42;
        fVar46 = fVar46 * fVar46;
        fVar48 = fVar48 * fVar48;
        fVar51 = fVar51 * fVar51;
        auVar38._0_4_ = fVar42 + fVar46;
        auVar38._4_4_ = fVar48 + fVar51;
        auVar38._8_4_ = fVar42 + fVar46;
        auVar38._12_4_ = fVar48 + fVar51;
        auVar52 = NEON_ext(auVar38,auVar38,4,1);
        if ((auVar52._0_4_ + auVar52._4_4_ <= fVar58) &&
           (fVar42 = auVar65._0_4_ + *(float *)(lVar23 + 0x40),
           fVar46 = auVar65._4_4_ + *(float *)(lVar23 + 0x44),
           fVar48 = auVar65._8_4_ + *(float *)(lVar23 + 0x48),
           fVar51 = auVar65._12_4_ + *(float *)(lVar23 + 0x4c), fVar42 = fVar42 * fVar42,
           fVar46 = fVar46 * fVar46, fVar48 = fVar48 * fVar48, fVar51 = fVar51 * fVar51,
           auVar39._0_4_ = fVar42 + fVar46, auVar39._4_4_ = fVar48 + fVar51,
           auVar39._8_4_ = fVar42 + fVar46, auVar39._12_4_ = fVar48 + fVar51,
           auVar52 = NEON_ext(auVar39,auVar39,4,1), auVar52._0_4_ + auVar52._4_4_ <= fVar58))
        goto LAB_028c6ec0;
      }
      *(long *)(param_2 + 0x28) = auVar79._8_8_;
      *(long *)(param_2 + 0x20) = auVar79._0_8_;
      *(long *)(param_2 + 0x38) = auVar65._8_8_;
      *(long *)(param_2 + 0x30) = auVar65._0_8_;
      *(ulong *)(param_2 + 0x48) = CONCAT26(uVar64,CONCAT24(SUB42(fStack_a4,0),fStack_a8));
      *(ulong *)(param_2 + 0x40) = CONCAT26(uVar63,CONCAT24(SUB42(fStack_ac,0),local_b0));
      if (*(char *)(param_2 + 0x50) == '\0') {
        *(undefined1 *)(param_2 + 0x50) = 1;
      }
LAB_028c6ec4:
      if (*(long *)(param_3 + 0x38) != 3) {
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x20);
      }
      if (*(char *)(param_3 + 0x12a) == '\0') {
        lVar23 = *(long *)(param_1 + 0x248);
      }
      else {
        lVar23 = *(long *)(param_1 + 0x240);
      }
LAB_028c6ee4:
      *(long *)(param_3 + 0x30) = lVar23;
      uVar20 = *(ulong *)(param_3 + 0x28);
      if (uVar20 < 3) {
        if (uVar20 == 2) {
          *(undefined1 *)(param_3 + 299) = 1;
          *(undefined8 *)(param_3 + 0x40) = 5;
        }
        *(ulong *)(param_3 + 0x28) = uVar20 + 1;
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
  cVar15 = (char)local_a0;
LAB_028c6ca4:
  if (cVar15 != *(char *)(param_3 + 0x128)) {
    lVar23 = *(long *)(param_3 + 0x48);
    if ((lVar23 == 0) || (*(short *)(lVar23 + 0x1a) == 0)) {
      lVar26 = 0;
    }
    else {
      psVar1 = (short *)(lVar23 + 0x1a);
      sVar22 = *(short *)(lVar23 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar22) {
          cVar25 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar22 + 1;
            cVar25 = ExclusiveMonitorsStatus();
          }
          if (cVar25 != '\0') goto LAB_028c727c;
          bVar17 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_028c727c:
          bVar17 = false;
        }
        if (bVar17) {
          lVar26 = 0;
          if (*(long *)(lVar23 + 0x10) != 0) {
            lVar26 = *(long *)(lVar23 + 0x10) + -8;
          }
          break;
        }
        lVar26 = 0;
        sVar22 = sVar3;
      } while (sVar3 != 0);
    }
    plVar19 = *(long **)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))();
    }
    *(long *)(param_2 + 8) = lVar26;
    if (lVar26 != 0) {
      FUN_01ac1e54(*(undefined8 *)(param_3 + 0x110),&local_a0);
      *(char *)(param_3 + 0x128) = cVar15;
      if (cVar15 == '\0') {
        *(undefined8 *)(param_3 + 0x38) = 5;
      }
    }
  }
  uVar20 = *(ulong *)(param_3 + 0x38);
  if (uVar20 < 2) {
    if (uVar20 == 1) {
      *(undefined8 *)(param_3 + 0x38) = 0;
    }
  }
  else {
    *(ulong *)(param_3 + 0x38) = uVar20 - 1;
    local_144[0] = '\0';
  }
  cVar25 = local_144[0];
  if ((*(char *)(param_1 + 0x23d) == '\0') && (local_144[0] != *(char *)(param_3 + 0x129))) {
    if (*(long *)(param_2 + 8) == 0) {
      lVar23 = *(long *)(param_3 + 0x48);
      if ((lVar23 == 0) || (*(short *)(lVar23 + 0x1a) == 0)) {
        lVar26 = 0;
      }
      else {
        psVar1 = (short *)(lVar23 + 0x1a);
        sVar22 = *(short *)(lVar23 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar22) {
            cVar24 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar17) {
              *psVar1 = sVar22 + 1;
              cVar24 = ExclusiveMonitorsStatus();
            }
            if (cVar24 != '\0') goto LAB_028c72dc;
            bVar17 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_028c72dc:
            bVar17 = false;
          }
          if (bVar17) {
            lVar26 = 0;
            if (*(long *)(lVar23 + 0x10) != 0) {
              lVar26 = *(long *)(lVar23 + 0x10) + -8;
            }
            break;
          }
          lVar26 = 0;
          sVar22 = sVar3;
        } while (sVar3 != 0);
      }
      plVar19 = *(long **)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = 0;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x18))();
      }
      *(long *)(param_2 + 8) = lVar26;
      if (lVar26 == 0) {
        return;
      }
    }
    FUN_01ac1e54(*(undefined8 *)(param_3 + 0x118),local_144);
    *(char *)(param_3 + 0x129) = cVar25;
  }
  return;
}


