/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020df958; name: FUN_020df958
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020df958(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar21;
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  byte bVar22;
  int iVar23;
  byte bVar37;
  byte bVar38;
  byte bVar40;
  int iVar41;
  byte bVar42;
  byte bVar43;
  byte bVar45;
  float fVar46;
  byte bVar48;
  byte bVar49;
  byte bVar52;
  byte bVar53;
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  byte bVar39;
  byte bVar44;
  int iVar47;
  byte bVar50;
  int iVar51;
  byte bVar54;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar55;
  undefined1 auVar56 [12];
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar78;
  float fVar79;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar89;
  float fVar90;
  float fVar93;
  float fVar94;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar118;
  float fVar119;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar120;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar117 [16];
  undefined1 auVar116 [16];
  undefined1 auVar115 [16];
  undefined1 auVar114 [16];
  float fVar121;
  float fVar127;
  float fVar128;
  undefined1 in_q22 [16];
  undefined1 auVar125 [16];
  undefined1 auVar124 [16];
  undefined1 auVar123 [16];
  undefined1 auVar122 [16];
  float fVar129;
  undefined1 auVar126 [16];
  undefined1 in_q23 [16];
  undefined1 auVar133 [16];
  undefined1 auVar132 [16];
  undefined1 auVar131 [16];
  undefined1 auVar130 [16];
  undefined1 auVar137 [16];
  undefined1 auVar136 [16];
  undefined1 auVar135 [16];
  undefined1 auVar134 [16];
  undefined1 auVar138 [16];
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  float local_28;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar7 = *(long *)(param_1 + 0x30);
    uVar9 = *(ulong *)(lVar7 + 0x78);
    if (uVar9 != 0) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar8 = *(ulong *)(param_1 + 0x38);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & uVar8;
      }
      else if (uVar8 < uVar9) {
        uVar11 = uVar8;
      }
      else {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar8 / uVar9;
        }
        uVar11 = uVar8 - uVar11 * uVar9;
      }
      plVar12 = *(long **)(*(long *)(lVar7 + 0x70) + uVar11 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar12[1] == uVar8) {
              if (plVar12[2] == uVar8) {
LAB_020dfa60:
                lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + (long)(int)plVar12[6] * 0x20);
                if (lVar7 == 0 || *(char *)(lVar7 + 0xd0) == '\0') {
                  return;
                }
                fVar81 = *(float *)(lVar7 + 0x50);
                fVar14 = *(float *)(lVar7 + 0x54);
                fVar109 = *(float *)(lVar7 + 0x58);
                fVar16 = *(float *)(lVar7 + 0x5c);
                auVar73 = *(undefined1 (*) [16])(lVar7 + 0x60);
                fVar21 = *(float *)(lVar7 + 0x70);
                fVar119 = *(float *)(lVar7 + 0x74);
                fVar120 = *(float *)(lVar7 + 0x78);
                fVar88 = *(float *)(lVar7 + 0x7c);
                fVar17 = *(float *)(lVar7 + 0x80);
                fVar89 = *(float *)(lVar7 + 0x84);
                fVar118 = *(float *)(lVar7 + 0x88);
                fVar80 = *(float *)(lVar7 + 0x8c);
                fVar107 = auVar73._8_4_;
                fVar108 = auVar73._12_4_;
                fVar106 = auVar73._4_4_;
                auVar25._0_8_ = auVar73._0_8_;
                auVar25._8_4_ = fVar106;
                auVar25._12_4_ = fVar108;
                auVar24._8_8_ = auVar25._8_8_;
                auVar24._0_4_ = auVar73._0_4_;
                auVar24._4_4_ = fVar17;
                auVar26._0_12_ = auVar24._0_12_;
                auVar26._12_4_ = fVar89;
                auVar110._4_4_ = fVar107;
                auVar110._0_4_ = fVar107;
                auVar110._8_4_ = fVar107;
                auVar110._12_4_ = fVar107;
                auVar122._4_12_ = in_q22._4_12_;
                auVar122._0_4_ = fVar109;
                auVar124._12_4_ = in_q22._12_4_;
                auVar124._0_8_ = auVar122._0_8_;
                auVar124._8_4_ = fVar120;
                auVar123._8_8_ = auVar124._8_8_;
                auVar123._4_4_ = fVar109;
                auVar123._0_4_ = fVar109;
                auVar125._0_12_ = auVar123._0_12_;
                auVar125._12_4_ = fVar120;
                auVar111 = NEON_ext(auVar125,auVar110,8,1);
                auVar72._4_4_ = fVar108;
                auVar72._0_4_ = fVar108;
                auVar72._8_4_ = fVar108;
                auVar72._12_4_ = fVar108;
                auVar130._4_12_ = in_q23._4_12_;
                auVar130._0_4_ = fVar14;
                auVar132._12_4_ = in_q23._12_4_;
                auVar132._0_8_ = auVar130._0_8_;
                auVar132._8_4_ = fVar119;
                auVar131._8_8_ = auVar132._8_8_;
                auVar131._4_4_ = fVar106;
                auVar131._0_4_ = fVar14;
                auVar133._0_12_ = auVar131._0_12_;
                auVar133._12_4_ = fVar89;
                auVar73._4_4_ = fVar16;
                auVar73._0_4_ = fVar16;
                auVar73._8_4_ = fVar88;
                auVar73._12_4_ = fVar88;
                auVar73 = NEON_ext(auVar73,auVar72,8,1);
                fVar71 = auVar73._0_4_;
                fVar78 = auVar73._4_4_;
                fVar79 = auVar73._8_4_;
                fVar121 = fVar80 * auVar111._0_4_ - fVar118 * fVar71;
                fVar127 = fVar80 * auVar111._4_4_ - fVar118 * fVar78;
                fVar128 = fVar80 * auVar111._8_4_ - fVar118 * fVar79;
                fVar129 = fVar88 * auVar111._12_4_ - fVar120 * auVar73._12_4_;
                fVar95 = fVar118 * fVar108 - fVar107 * fVar80;
                fVar96 = fVar118 * fVar16 - fVar109 * fVar80;
                fVar97 = fVar118 * fVar16 - fVar109 * fVar80;
                fVar98 = fVar120 * fVar16 - fVar109 * fVar88;
                auVar91._4_4_ = fVar106;
                auVar91._0_4_ = fVar106;
                auVar91._8_4_ = fVar106;
                auVar91._12_4_ = fVar106;
                auVar134._4_12_ = auVar133._4_12_;
                auVar134._0_4_ = fVar14;
                auVar136._0_8_ = auVar134._0_8_;
                auVar136._8_4_ = fVar119;
                auVar136._12_4_ = fVar89;
                auVar135._8_8_ = auVar136._8_8_;
                auVar135._4_4_ = fVar14;
                auVar135._0_4_ = fVar14;
                auVar137._0_12_ = auVar135._0_12_;
                auVar137._12_4_ = fVar119;
                auVar92 = NEON_ext(auVar137,auVar91,8,1);
                fVar99 = fVar107 * fVar71 - auVar111._0_4_ * fVar108;
                fVar103 = fVar109 * fVar78 - auVar111._4_4_ * fVar16;
                fVar104 = fVar109 * fVar79 - auVar111._8_4_ * fVar16;
                fVar105 = fVar109 * auVar73._12_4_ - auVar111._12_4_ * fVar16;
                auVar27._4_12_ = auVar26._4_12_;
                auVar27._0_4_ = fVar81;
                auVar29._0_8_ = auVar27._0_8_;
                auVar29._8_4_ = fVar21;
                auVar29._12_4_ = fVar89;
                auVar28._8_8_ = auVar29._8_8_;
                auVar28._4_4_ = auVar24._0_4_;
                auVar28._0_4_ = fVar81;
                auVar30._0_12_ = auVar28._0_12_;
                auVar30._12_4_ = fVar17;
                auVar138._4_4_ = auVar24._0_4_;
                auVar138._0_4_ = auVar24._0_4_;
                auVar138._8_4_ = auVar24._0_4_;
                auVar138._12_4_ = auVar24._0_4_;
                fVar90 = auVar92._0_4_;
                fVar93 = auVar92._4_4_;
                fVar94 = auVar92._8_4_;
                fVar55 = (fVar106 * fVar121 + fVar95 * fVar90 + fVar99 * fVar89) *
                         (float)_DAT_03cabc00;
                fVar64 = (fVar14 * fVar127 + fVar96 * fVar93 + fVar103 * fVar89) *
                         (float)((ulong)_DAT_03cabc00 >> 0x20);
                fVar65 = (fVar14 * fVar128 + fVar97 * fVar94 + fVar104 * fVar89) *
                         (float)_UNK_03cabc08;
                fVar66 = (fVar14 * fVar129 + fVar98 * auVar92._12_4_ + fVar105 * fVar119) *
                         (float)((ulong)_UNK_03cabc08 >> 0x20);
                fVar109 = fVar81 * fVar55;
                fVar118 = auVar24._0_4_ * fVar64;
                fVar119 = fVar21 * fVar65;
                fVar120 = fVar17 * fVar66;
                auVar31._4_12_ = auVar30._4_12_;
                auVar31._0_4_ = fVar81;
                auVar33._0_8_ = auVar31._0_8_;
                auVar33._8_4_ = fVar21;
                auVar33._12_4_ = fVar17;
                auVar32._8_8_ = auVar33._8_8_;
                auVar32._4_4_ = fVar81;
                auVar32._0_4_ = fVar81;
                auVar34._0_12_ = auVar32._0_12_;
                auVar34._12_4_ = fVar21;
                auVar92 = NEON_ext(auVar34,auVar138,8,1);
                auVar112._0_4_ = fVar109 + fVar118;
                auVar112._4_4_ = fVar119 + fVar120;
                auVar112._8_4_ = fVar109 + fVar118;
                auVar112._12_4_ = fVar119 + fVar120;
                fVar88 = auVar92._0_4_;
                fVar107 = auVar92._4_4_;
                fVar46 = auVar92._8_4_;
                auVar73 = NEON_ext(auVar112,auVar112,4,1);
                auVar102._0_4_ = auVar73._0_4_ + auVar73._4_4_;
                auVar102._4_4_ = auVar73._8_4_ + auVar73._12_4_;
                auVar102._8_4_ = auVar73._0_4_ + auVar73._4_4_;
                auVar102._12_4_ = auVar73._8_4_ + auVar73._12_4_;
                auVar111 = NEON_frecpe(auVar102,4);
                auVar73 = NEON_frecps(auVar111,auVar102,4);
                iVar23 = -(uint)(auVar102._0_4_ == 0.0);
                iVar41 = -(uint)(auVar102._4_4_ == 0.0);
                iVar47 = -(uint)(auVar102._8_4_ == 0.0);
                iVar51 = -(uint)(auVar102._12_4_ == 0.0);
                auVar100._0_4_ = auVar111._0_4_ * auVar73._0_4_;
                auVar100._4_4_ = auVar111._4_4_ * auVar73._4_4_;
                auVar100._8_4_ = auVar111._8_4_ * auVar73._8_4_;
                auVar100._12_4_ = auVar111._12_4_ * auVar73._12_4_;
                bVar22 = ~(byte)iVar23;
                bVar37 = ~(byte)((uint)iVar23 >> 8);
                bVar38 = ~(byte)((uint)iVar23 >> 0x10);
                bVar39 = ~(byte)((uint)iVar23 >> 0x18);
                bVar40 = ~(byte)iVar41;
                bVar42 = ~(byte)((uint)iVar41 >> 8);
                bVar43 = ~(byte)((uint)iVar41 >> 0x10);
                bVar44 = ~(byte)((uint)iVar41 >> 0x18);
                bVar45 = ~(byte)iVar47;
                bVar48 = ~(byte)((uint)iVar47 >> 8);
                bVar49 = ~(byte)((uint)iVar47 >> 0x10);
                bVar50 = ~(byte)((uint)iVar47 >> 0x18);
                bVar52 = ~(byte)((uint)iVar51 >> 8);
                bVar53 = ~(byte)((uint)iVar51 >> 0x10);
                bVar54 = ~(byte)((uint)iVar51 >> 0x18);
                auVar73 = NEON_frecps(auVar100,auVar102,4);
                fVar109 = auVar100._0_4_ * auVar73._0_4_;
                fVar118 = auVar100._4_4_ * auVar73._4_4_;
                fVar119 = auVar100._8_4_ * auVar73._8_4_;
                fVar120 = auVar100._12_4_ * auVar73._12_4_;
                auVar73 = NEON_fmov(0x3f800000,4);
                fVar55 = fVar109 * fVar55;
                fVar64 = fVar118 * fVar64;
                fVar65 = fVar119 * fVar65;
                fVar66 = fVar120 * fVar66;
                fVar55 = (float)CONCAT13((byte)((uint)fVar55 >> 0x18) & bVar39,
                                         CONCAT12((byte)((uint)fVar55 >> 0x10) & bVar38,
                                                  CONCAT11((byte)((uint)fVar55 >> 8) & bVar37,
                                                           SUB41(fVar55,0) & bVar22)));
                auVar56._0_8_ =
                     CONCAT17((byte)((uint)fVar64 >> 0x18) & bVar44,
                              CONCAT16((byte)((uint)fVar64 >> 0x10) & bVar43,
                                       CONCAT15((byte)((uint)fVar64 >> 8) & bVar42,
                                                CONCAT14(SUB41(fVar64,0) & bVar40,fVar55))));
                auVar56[8] = SUB41(fVar65,0) & bVar45;
                auVar56[9] = (byte)((uint)fVar65 >> 8) & bVar48;
                auVar56[10] = (byte)((uint)fVar65 >> 0x10) & bVar49;
                auVar56[0xb] = (byte)((uint)fVar65 >> 0x18) & bVar50;
                auVar57[0xc] = SUB41(fVar66,0) & ~(byte)iVar51;
                auVar57._0_12_ = auVar56;
                auVar57[0xd] = (byte)((uint)fVar66 >> 8) & bVar52;
                auVar57[0xe] = (byte)((uint)fVar66 >> 0x10) & bVar53;
                auVar57[0xf] = (byte)((uint)fVar66 >> 0x18) & bVar54;
                fVar64 = fVar109 * (auVar24._0_4_ * fVar121 + fVar95 * fVar88 + fVar99 * fVar17) *
                                   (float)_DAT_03cab860;
                fVar65 = fVar118 * (fVar81 * fVar127 + fVar96 * fVar107 + fVar103 * fVar17) *
                                   (float)((ulong)_DAT_03cab860 >> 0x20);
                fVar66 = fVar119 * (fVar81 * fVar128 + fVar97 * fVar46 + fVar104 * fVar17) *
                                   (float)_UNK_03cab868;
                fVar120 = fVar120 * (fVar81 * fVar129 + fVar98 * auVar92._12_4_ + fVar105 * fVar21)
                                    * (float)((ulong)_UNK_03cab868 >> 0x20);
                fVar109 = fVar109 * (fVar108 * (fVar89 * fVar88 - fVar17 * fVar90) +
                                     (fVar17 * fVar106 - auVar24._0_4_ * fVar89) * fVar71 +
                                    (auVar24._0_4_ * fVar90 - fVar88 * fVar106) * fVar80) *
                                    (float)_DAT_03cac270;
                fVar118 = fVar118 * (fVar16 * (fVar89 * fVar107 - fVar17 * fVar93) +
                                     (fVar17 * fVar14 - fVar81 * fVar89) * fVar78 +
                                    (fVar81 * fVar93 - fVar107 * fVar14) * fVar80) *
                                    (float)((ulong)_DAT_03cac270 >> 0x20);
                fVar119 = fVar119 * (fVar16 * (fVar89 * fVar46 - fVar17 * fVar94) +
                                     (fVar17 * fVar14 - fVar81 * fVar89) * fVar79 +
                                    (fVar81 * fVar94 - fVar46 * fVar14) * fVar80) *
                                    (float)_UNK_03cac278;
                fVar106 = (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & bVar39,
                                          CONCAT12((byte)((uint)fVar64 >> 0x10) & bVar38,
                                                   CONCAT11((byte)((uint)fVar64 >> 8) & bVar37,
                                                            SUB41(fVar64,0) & bVar22)));
                auVar67._0_8_ =
                     CONCAT17((byte)((uint)fVar65 >> 0x18) & bVar44,
                              CONCAT16((byte)((uint)fVar65 >> 0x10) & bVar43,
                                       CONCAT15((byte)((uint)fVar65 >> 8) & bVar42,
                                                CONCAT14(SUB41(fVar65,0) & bVar40,fVar106))));
                auVar67[8] = SUB41(fVar66,0) & bVar45;
                auVar67[9] = (byte)((uint)fVar66 >> 8) & bVar48;
                auVar67[10] = (byte)((uint)fVar66 >> 0x10) & bVar49;
                auVar67[0xb] = (byte)((uint)fVar66 >> 0x18) & bVar50;
                auVar67[0xc] = SUB41(fVar120,0) & ~(byte)iVar51;
                auVar67[0xd] = (byte)((uint)fVar120 >> 8) & bVar52;
                auVar67[0xe] = (byte)((uint)fVar120 >> 0x10) & bVar53;
                auVar67[0xf] = (byte)((uint)fVar120 >> 0x18) & bVar54;
                fVar88 = (float)((ulong)auVar56._0_8_ >> 0x20);
                fVar17 = (float)((ulong)auVar67._0_8_ >> 0x20);
                fVar89 = (float)CONCAT13((byte)((uint)fVar109 >> 0x18) & bVar39,
                                         CONCAT12((byte)((uint)fVar109 >> 0x10) & bVar38,
                                                  CONCAT11((byte)((uint)fVar109 >> 8) & bVar37,
                                                           SUB41(fVar109,0) & bVar22)));
                auVar18._0_8_ =
                     CONCAT17((byte)((uint)fVar118 >> 0x18) & bVar44,
                              CONCAT16((byte)((uint)fVar118 >> 0x10) & bVar43,
                                       CONCAT15((byte)((uint)fVar118 >> 8) & bVar42,
                                                CONCAT14(SUB41(fVar118,0) & bVar40,fVar89))));
                auVar18[8] = SUB41(fVar119,0) & bVar45;
                auVar18[9] = (byte)((uint)fVar119 >> 8) & bVar48;
                auVar18[10] = (byte)((uint)fVar119 >> 0x10) & bVar49;
                auVar18[0xb] = (byte)((uint)fVar119 >> 0x18) & bVar50;
                auVar92 = NEON_ext(auVar67,auVar67,8,1);
                fVar80 = (float)((ulong)auVar18._0_8_ >> 0x20);
                fVar81 = auVar18._8_4_;
                fVar14 = auVar73._0_4_ + (float)_DAT_03cab3a0 * fVar55 +
                         (float)_DAT_03cac210 * fVar17 + (float)_DAT_03cabb00 * fVar81;
                fVar109 = auVar73._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar55 +
                          (float)((ulong)_DAT_03cac210 >> 0x20) * fVar17 +
                          (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar81;
                fVar16 = auVar73._8_4_ + (float)_UNK_03cab3a8 * fVar55 +
                         (float)_UNK_03cac218 * fVar17 + (float)_UNK_03cabb08 * fVar81;
                fVar17 = auVar73._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar55 +
                         (float)((ulong)_UNK_03cac218 >> 0x20) * fVar17 +
                         (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar81;
                auVar111 = NEON_ext(auVar57,auVar57,8,1);
                fVar81 = auVar92._0_4_;
                auVar73 = NEON_fmov(0x40800000,4);
                auVar74._0_4_ = SQRT(fVar14) * 0.5 * auVar73._0_4_;
                auVar74._4_4_ = SQRT(fVar109) * 0.5 * auVar73._4_4_;
                auVar74._8_4_ = SQRT(fVar16) * 0.5 * auVar73._8_4_;
                auVar74._12_4_ = SQRT(fVar17) * 0.5 * auVar73._12_4_;
                auVar112 = NEON_frecpe(auVar74,4);
                auVar82._4_4_ = fVar14;
                auVar82._0_4_ = fVar14;
                auVar82._8_4_ = fVar14;
                auVar82._12_4_ = fVar14;
                auVar58._4_4_ = fVar109;
                auVar58._0_4_ = fVar109;
                auVar58._8_4_ = fVar109;
                auVar58._12_4_ = fVar109;
                auVar73 = NEON_frecps(auVar112,auVar74,4);
                auVar92._4_4_ = -(uint)(fVar14 <= fVar109);
                auVar92._0_4_ = -(uint)(fVar14 <= fVar109);
                auVar92._8_4_ = -(uint)(fVar14 <= fVar109);
                auVar92._12_4_ = -(uint)(fVar14 <= fVar109);
                auVar58 = auVar58 ^ (auVar58 ^ auVar82) & ~auVar92;
                auVar83._4_4_ = fVar16;
                auVar83._0_4_ = fVar16;
                auVar83._8_4_ = fVar16;
                auVar83._12_4_ = fVar16;
                auVar19._0_4_ = auVar112._0_4_ * auVar73._0_4_;
                auVar19._4_4_ = auVar112._4_4_ * auVar73._4_4_;
                auVar19._8_4_ = auVar112._8_4_ * auVar73._8_4_;
                auVar19._12_4_ = auVar112._12_4_ * auVar73._12_4_;
                auVar86._0_4_ = -(uint)(auVar58._0_4_ <= fVar16);
                auVar86._4_4_ = -(uint)(auVar58._4_4_ <= fVar16);
                auVar86._8_4_ = -(uint)(auVar58._8_4_ <= fVar16);
                auVar86._12_4_ = -(uint)(auVar58._12_4_ <= fVar16);
                auVar58 = auVar58 ^ (auVar58 ^ auVar83) & auVar86;
                auVar73 = NEON_frecps(auVar19,auVar74,4);
                auVar15._0_8_ =
                     CONCAT44(-(uint)(auVar58._4_4_ <= fVar17),-(uint)(auVar58._0_4_ <= fVar17));
                auVar15._8_4_ = -(uint)(auVar58._8_4_ <= fVar17);
                auVar15._12_4_ = -(uint)(auVar58._12_4_ <= fVar17);
                fVar118 = auVar19._0_4_ * auVar73._0_4_;
                fVar21 = auVar19._4_4_ * auVar73._4_4_;
                fVar119 = auVar19._8_4_ * auVar73._8_4_;
                fVar120 = auVar19._12_4_ * auVar73._12_4_;
                auVar3._4_8_ = auVar73._8_8_;
                auVar3._0_4_ = (fVar106 + fVar88) * fVar118;
                auVar75._0_8_ = auVar3._0_8_ << 0x20;
                auVar75._8_4_ = (auVar111._0_4_ + fVar89) * fVar118;
                auVar75._12_4_ = (fVar81 + -fVar80) * fVar118;
                auVar68._0_4_ = (fVar88 + fVar106) * fVar21;
                auVar68._4_4_ = fVar21 * 0.0;
                auVar68._8_4_ = (fVar81 + fVar80) * fVar21;
                auVar68._12_4_ = (fVar89 + -auVar56._8_4_) * fVar21;
                auVar84._0_4_ = (auVar111._0_4_ + fVar89) * fVar119;
                auVar84._4_4_ = (fVar81 + fVar80) * fVar119;
                auVar84._12_4_ = (fVar88 - fVar106) * fVar119;
                auVar126._8_8_ = auVar15._8_8_;
                auVar126._0_8_ = auVar15._0_8_;
                auVar20._0_4_ = (fVar81 - fVar80) * fVar120;
                auVar20._4_4_ = (fVar89 - auVar56._8_4_) * fVar120;
                auVar20._8_4_ = (fVar88 - fVar106) * fVar120;
                auVar76._4_12_ = auVar75._4_12_;
                auVar76._0_4_ = SQRT(fVar14) * 0.5;
                auVar69._8_8_ = auVar68._8_8_;
                auVar69._4_4_ = SQRT(fVar109) * 0.5;
                auVar69._0_4_ = auVar68._0_4_;
                auVar84._8_4_ = SQRT(fVar16) * 0.5;
                auVar20._12_4_ = SQRT(fVar17) * 0.5;
                auVar111._4_4_ = -(uint)(fVar14 <= fVar109);
                auVar111._0_4_ = -(uint)(fVar14 <= fVar109);
                auVar111._8_4_ = -(uint)(fVar14 <= fVar109);
                auVar111._12_4_ = -(uint)(fVar14 <= fVar109);
                auVar69 = auVar69 ^ (auVar69 ^ auVar76) & ~auVar111;
                auVar69 = auVar69 ^ (auVar69 ^ auVar84) & auVar86;
                auVar69 = auVar69 ^ (auVar69 ^ auVar20) & auVar126;
                if (((*PTR_DAT_047d8280 & 1) == 0) &&
                   (iVar23 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar23 != 0)) {
                  FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d8280);
                }
                fVar46 = auVar69._0_4_;
                fVar64 = auVar69._8_4_;
                auVar85._4_4_ = fVar64;
                auVar85._0_4_ = fVar64;
                auVar85._8_4_ = fVar64;
                auVar85._12_4_ = fVar64;
                fVar55 = auVar69._4_4_;
                auVar87._4_4_ = fVar55;
                auVar87._0_4_ = fVar55;
                auVar87._8_4_ = fVar55;
                auVar87._12_4_ = fVar55;
                auVar92 = NEON_ext(auVar85,auVar69,0xc,1);
                auVar59._8_8_ = _UNK_03cab5c8;
                auVar59._0_8_ = _DAT_03cab5c0;
                fVar65 = auVar69._12_4_;
                auVar73 = NEON_ext(auVar87,auVar92,0xc,1);
                fVar109 = (float)_DAT_03cab640;
                fVar16 = (float)((ulong)_DAT_03cab640 >> 0x20);
                fVar17 = (float)_UNK_03cab648;
                fVar89 = (float)((ulong)_UNK_03cab648 >> 0x20);
                fVar118 = fVar46 * fVar89;
                fVar119 = auVar73._0_4_ * fVar109;
                fVar120 = auVar73._4_4_ * fVar16;
                fVar88 = auVar73._8_4_ * fVar17;
                fVar89 = auVar73._12_4_ * fVar89;
                auVar62._12_4_ = (float)((ulong)_UNK_03cab5c8 >> 0x20);
                fVar106 = -fVar46;
                fVar107 = -fVar55;
                fVar108 = -fVar64;
                auVar113._4_4_ = fVar108;
                auVar113._0_4_ = fVar108;
                auVar113._8_4_ = fVar108;
                auVar113._12_4_ = fVar108;
                auVar114._4_12_ = auVar113._4_12_;
                auVar114._0_4_ = fVar106;
                auVar116._0_8_ = auVar114._0_8_;
                auVar116._8_4_ = fVar107;
                auVar116._12_4_ = fVar108;
                auVar115._8_8_ = auVar116._8_8_;
                auVar115._4_4_ = fVar108;
                auVar115._0_4_ = fVar106;
                auVar117._0_12_ = auVar115._0_12_;
                auVar117._12_4_ = fVar108;
                auVar73 = NEON_ext(auVar117,auVar117,8,1);
                fVar81 = auVar73._0_4_;
                auVar60._4_12_ = auVar59._4_12_;
                auVar60._0_4_ = fVar81;
                fVar14 = auVar73._8_4_;
                auVar62._0_8_ = auVar60._0_8_;
                auVar62._8_4_ = fVar14;
                auVar61._8_8_ = auVar62._8_8_;
                auVar61._4_4_ = fVar106;
                auVar61._0_4_ = fVar81;
                auVar63._0_12_ = auVar61._0_12_;
                auVar63._12_4_ = fVar107;
                fVar80 = (float)((ulong)_DAT_03cab1d0 >> 0x20);
                fVar21 = (float)((ulong)_UNK_03cab1d8 >> 0x20);
                auVar35._0_4_ =
                     (float)_DAT_03cab1c0 * fVar65 + (float)_DAT_03cab5c0 * fVar46 * fVar109 +
                     (float)_DAT_03cab1d0 * fVar119 + (float)_DAT_03cac000 * auVar92._0_4_;
                auVar35._4_4_ =
                     (float)((ulong)_DAT_03cab1c0 >> 0x20) * fVar65 +
                     (float)((ulong)_DAT_03cab5c0 >> 0x20) * fVar55 * fVar16 + fVar80 * fVar120 +
                     (float)((ulong)_DAT_03cac000 >> 0x20) * auVar92._4_4_;
                auVar35._8_4_ =
                     (float)_UNK_03cab1c8 * fVar65 + (float)_UNK_03cab5c8 * fVar64 * fVar17 +
                     (float)_UNK_03cab1d8 * fVar88 + (float)_UNK_03cac008 * auVar92._8_4_;
                auVar35._12_4_ =
                     (float)((ulong)_UNK_03cab1c8 >> 0x20) * fVar65 + auVar62._12_4_ * fVar118 +
                     fVar21 * fVar89 + (float)((ulong)_UNK_03cac008 >> 0x20) * auVar92._12_4_;
                auVar77._4_4_ = auVar35._8_4_;
                auVar77._0_4_ = auVar35._8_4_;
                auVar77._8_4_ = auVar35._8_4_;
                auVar77._12_4_ = auVar35._8_4_;
                auVar101._4_4_ = auVar35._4_4_;
                auVar101._0_4_ = auVar35._4_4_;
                auVar101._8_4_ = auVar35._4_4_;
                auVar101._12_4_ = auVar35._4_4_;
                auVar112 = NEON_ext(auVar77,auVar35,0xc,1);
                lVar13 = *(long *)PTR_DAT_047d8288;
                fVar119 = (float)_DAT_03cabe60 * fVar65 + fVar46 * fVar109 * 0.0 +
                          (float)_DAT_03caaaa0 * fVar119 + (float)_DAT_03cab1d0 * auVar92._0_4_;
                fVar80 = (float)((ulong)_DAT_03cabe60 >> 0x20) * fVar65 + fVar55 * fVar16 * 0.0 +
                         (float)((ulong)_DAT_03caaaa0 >> 0x20) * fVar120 + fVar80 * auVar92._4_4_;
                fVar120 = (float)_UNK_03cabe68 * fVar65 + fVar64 * fVar17 * 0.0 +
                          (float)_UNK_03caaaa8 * fVar88 + (float)_UNK_03cab1d8 * auVar92._8_4_;
                fVar89 = (float)((ulong)_UNK_03cabe68 >> 0x20) * fVar65 + fVar118 * 0.0 +
                         (float)((ulong)_UNK_03caaaa8 >> 0x20) * fVar89 + fVar21 * auVar92._12_4_;
                auVar102 = NEON_ext(auVar101,auVar112,0xc,1);
                auVar92 = NEON_ext(auVar63,auVar73,8,1);
                auVar111 = NEON_ext(auVar92,auVar92,0xc,1);
                auVar36._4_4_ = fVar120;
                auVar36._0_4_ = fVar120;
                auVar36._8_4_ = fVar120;
                auVar36._12_4_ = fVar120;
                auVar2._4_4_ = fVar80;
                auVar2._0_4_ = fVar119;
                auVar2._8_4_ = fVar120;
                auVar2._12_4_ = fVar89;
                auVar92 = NEON_ext(auVar36,auVar2,0xc,1);
                auVar70._4_4_ = fVar80;
                auVar70._0_4_ = fVar80;
                auVar70._8_4_ = fVar80;
                auVar70._12_4_ = fVar80;
                fVar118 = (fVar106 * auVar35._12_4_ + fVar65 * auVar35._0_4_ * fVar109 +
                          auVar111._0_4_ * auVar102._0_4_ * fVar109) - auVar112._0_4_ * fVar81;
                fVar21 = (fVar107 * auVar35._12_4_ + fVar65 * auVar35._4_4_ * fVar16 +
                         auVar111._4_4_ * auVar102._4_4_ * fVar16) - auVar112._4_4_ * auVar73._4_4_;
                fVar88 = (fVar108 * auVar35._12_4_ + fVar65 * auVar35._8_4_ * fVar17 +
                         auVar111._8_4_ * auVar102._8_4_ * fVar17) - auVar112._8_4_ * fVar14;
                auVar112 = NEON_ext(auVar70,auVar92,0xc,1);
                fVar81 = (fVar106 * fVar89 + fVar65 * fVar119 * fVar109 +
                         auVar111._0_4_ * auVar112._0_4_ * fVar109) - auVar92._0_4_ * fVar81;
                fVar109 = (fVar107 * fVar89 + fVar65 * fVar80 * fVar16 +
                          auVar111._4_4_ * auVar112._4_4_ * fVar16) - auVar92._4_4_ * auVar73._4_4_;
                fVar14 = (fVar108 * fVar89 + fVar65 * fVar120 * fVar17 +
                         auVar111._8_4_ * auVar112._8_4_ * fVar17) - auVar92._8_4_ * fVar14;
                *(long *)PTR_DAT_047d8290 = lVar13;
                uVar4 = *(undefined8 *)*(undefined1 (*) [16])(lVar7 + 0x40);
                uVar5 = *(undefined8 *)(lVar7 + 0x48);
                auVar73 = *(undefined1 (*) [16])(lVar7 + 0x40);
                nn::os::LockMutex((MutexType *)(lVar13 + 0x150));
                *(long *)(lVar13 + 0x128) = auVar73._8_8_;
                *(long *)(lVar13 + 0x120) = auVar73._0_8_;
                *(ulong *)(lVar13 + 0x138) = (ulong)(uint)fVar88;
                *(ulong *)(lVar13 + 0x130) = CONCAT44(fVar21,fVar118);
                *(ulong *)(lVar13 + 0x148) = (ulong)(uint)fVar14;
                *(ulong *)(lVar13 + 0x140) = CONCAT44(fVar109,fVar81);
                if (*(long *)(lVar13 + 0x40) == 0) {
                  uVar6 = 0xffffffffffffffff;
                }
                else {
                  uVar6 = FUN_00cf8198();
                }
                local_48 = CONCAT44(fVar21,fVar118);
                local_3c = CONCAT44(fVar109,fVar81);
                local_28 = -(float)uVar5;
                local_34 = -fVar14;
                local_40 = -fVar88;
                plVar12 = *(long **)(*(long *)(lVar13 + 0x200) + 0x60);
                local_30 = uVar4;
                (**(code **)(*plVar12 + 0x70))(plVar12,uVar6,&local_48);
                nn::os::UnlockMutex((MutexType *)(lVar13 + 0x150));
                return;
              }
            }
            else if ((plVar12[1] & uVar9 - 1) != uVar11) {
              return;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar12[1];
            if (uVar10 == uVar8) {
              if (plVar12[2] == uVar8) goto LAB_020dfa60;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar1 = 0;
                if (uVar9 != 0) {
                  uVar1 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar1 * uVar9;
              }
              if (uVar10 != uVar11) {
                return;
              }
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  return;
}


