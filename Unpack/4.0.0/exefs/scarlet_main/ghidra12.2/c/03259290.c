/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03259290; name: FUN_03259290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03259290(long *param_1,long *param_2,long *param_3,int param_4,int param_5,long *param_6)

{
  float *pfVar1;
  long lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  int *piVar22;
  int *piVar23;
  undefined4 uVar24;
  int *piVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  int *piVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  int iVar33;
  long lVar34;
  int iVar35;
  int iVar36;
  undefined4 uVar37;
  int iVar38;
  undefined4 uVar50;
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  undefined1 auVar43 [16];
  undefined4 uVar52;
  undefined1 auVar44 [16];
  int iVar51;
  int iVar53;
  int iVar54;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar55;
  int iVar58;
  undefined1 auVar56 [12];
  int iVar59;
  undefined1 auVar57 [16];
  int iVar60;
  int iVar61;
  undefined1 auVar63 [12];
  undefined8 uVar62;
  int iVar69;
  int iVar70;
  int iVar72;
  undefined1 auVar65 [16];
  undefined1 auVar64 [12];
  undefined1 auVar66 [16];
  undefined8 uVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  int iVar73;
  undefined8 uVar74;
  int iVar80;
  int iVar81;
  int iVar83;
  undefined1 auVar75 [16];
  undefined8 uVar82;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  int iVar84;
  undefined8 uVar85;
  int iVar92;
  int iVar93;
  int iVar95;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined8 uVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 auVar100 [12];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar101 [12];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  int iVar110;
  float fVar111;
  int iVar112;
  float fVar113;
  int iVar114;
  float fVar115;
  int iVar116;
  float fVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  float fVar122;
  int iVar123;
  float fVar124;
  int iVar125;
  float fVar126;
  int iVar127;
  float fVar128;
  int iVar129;
  float fVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  float fVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  int iVar139;
  int iVar140;
  int iVar141;
  int iVar142;
  int iVar143;
  int iVar144;
  int iVar145;
  int iVar146;
  int iVar147;
  int iVar148;
  float fVar149;
  int iVar150;
  float fVar151;
  int iVar152;
  float fVar153;
  int iVar154;
  float fVar155;
  int iVar156;
  float fVar157;
  int iVar158;
  float fVar159;
  int iVar160;
  float fVar161;
  int iVar162;
  float fVar163;
  int iVar164;
  int iVar165;
  int iVar166;
  int iVar167;
  int iVar168;
  int iVar169;
  int iVar170;
  int iVar171;
  int iVar172;
  int iVar173;
  int iVar174;
  int iVar175;
  undefined8 uVar176;
  undefined8 uVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  byte bVar183;
  byte bVar184;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  byte bVar193;
  int local_1500 [256];
  int *local_1100;
  int aiStack_10f0 [256];
  int *local_cf0;
  int aiStack_ce0 [256];
  int *local_8e0;
  undefined8 auStack_8d0 [128];
  undefined8 auStack_4d0 [128];
  long *local_d0;
  uint local_c8;
  int local_c0 [4];
  undefined8 local_b0 [10];
  
  puVar17 = PTR_DAT_047d1aa8;
  puVar16 = PTR_DAT_047d1aa0;
  local_c8 = 0;
  local_8e0 = aiStack_ce0;
  local_cf0 = aiStack_10f0;
  local_d0 = param_3;
  lVar2 = 0;
  if (*param_1 != 0) {
    lVar2 = *param_1 + (long)param_1;
  }
  bVar178 = (byte)_DAT_03cab270;
  bVar179 = (byte)((ulong)_DAT_03cab270 >> 8);
  bVar180 = (byte)((ulong)_DAT_03cab270 >> 0x10);
  bVar181 = (byte)((ulong)_DAT_03cab270 >> 0x18);
  bVar182 = (byte)((ulong)_DAT_03cab270 >> 0x20);
  bVar183 = (byte)((ulong)_DAT_03cab270 >> 0x28);
  bVar184 = (byte)((ulong)_DAT_03cab270 >> 0x30);
  bVar185 = (byte)((ulong)_DAT_03cab270 >> 0x38);
  bVar186 = (byte)_UNK_03cab278;
  bVar187 = (byte)((ulong)_UNK_03cab278 >> 8);
  bVar188 = (byte)((ulong)_UNK_03cab278 >> 0x10);
  bVar189 = (byte)((ulong)_UNK_03cab278 >> 0x18);
  bVar190 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  bVar191 = (byte)((ulong)_UNK_03cab278 >> 0x28);
  bVar192 = (byte)((ulong)_UNK_03cab278 >> 0x30);
  bVar193 = (byte)((ulong)_UNK_03cab278 >> 0x38);
  if ((param_1 == param_2) && (param_4 == param_5)) {
    uVar18 = 0;
    local_1100 = (int *)((ulong)local_1500 | 4);
    local_1500[0] = param_4;
    do {
      piVar22 = local_8e0;
      piVar23 = local_cf0;
      piVar25 = local_1100 + -1;
      if (*(char *)(*param_6 + (ulong)(uint)local_1100[-1] * 0x80 + 0x71) != '\0') {
        pfVar1 = (float *)(lVar2 + (ulong)(uint)local_1100[-1] * 0x80);
        fVar135 = *pfVar1;
        fVar149 = pfVar1[1];
        fVar151 = pfVar1[2];
        fVar153 = pfVar1[3];
        fVar130 = pfVar1[4];
        fVar4 = pfVar1[5];
        fVar155 = pfVar1[6];
        fVar10 = pfVar1[7];
        fVar11 = pfVar1[8];
        fVar12 = pfVar1[9];
        fVar13 = pfVar1[10];
        fVar14 = pfVar1[0xb];
        iVar110 = -(uint)(fVar135 <= fVar130);
        iVar112 = -(uint)(fVar149 <= fVar130);
        iVar114 = -(uint)(fVar151 <= fVar130);
        iVar116 = -(uint)(fVar153 <= fVar130);
        iVar35 = -(uint)(fVar135 <= fVar130);
        iVar33 = -(uint)(fVar135 <= fVar4);
        iVar59 = -(uint)(fVar135 <= fVar155);
        iVar60 = -(uint)(fVar135 <= fVar10);
        fVar128 = (float)*(undefined8 *)(pfVar1 + 0xc);
        iVar140 = -(uint)(fVar149 <= fVar130);
        iVar141 = -(uint)(fVar149 <= fVar4);
        iVar142 = -(uint)(fVar149 <= fVar155);
        iVar143 = -(uint)(fVar149 <= fVar10);
        fVar122 = (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20);
        iVar172 = -(uint)(fVar151 <= fVar130);
        iVar173 = -(uint)(fVar151 <= fVar4);
        iVar174 = -(uint)(fVar151 <= fVar155);
        iVar175 = -(uint)(fVar151 <= fVar10);
        fVar10 = pfVar1[0x10];
        fVar15 = pfVar1[0x11];
        fVar111 = pfVar1[0x12];
        fVar113 = pfVar1[0x13];
        iVar144 = -(uint)(fVar135 <= fVar4);
        iVar145 = -(uint)(fVar149 <= fVar4);
        iVar146 = -(uint)(fVar151 <= fVar4);
        iVar147 = -(uint)(fVar153 <= fVar4);
        iVar118 = -(uint)(fVar11 <= fVar128);
        iVar119 = -(uint)(fVar11 <= fVar122);
        fVar130 = (float)*(undefined8 *)(pfVar1 + 0xe);
        iVar120 = -(uint)(fVar11 <= fVar130);
        fVar4 = (float)((ulong)*(undefined8 *)(pfVar1 + 0xe) >> 0x20);
        iVar121 = -(uint)(fVar11 <= fVar4);
        iVar148 = -(uint)(fVar12 <= fVar128);
        iVar150 = -(uint)(fVar12 <= fVar122);
        iVar152 = -(uint)(fVar12 <= fVar130);
        iVar154 = -(uint)(fVar12 <= fVar4);
        iVar123 = -(uint)(fVar11 <= fVar128);
        iVar125 = -(uint)(fVar12 <= fVar128);
        iVar127 = -(uint)(fVar13 <= fVar128);
        iVar129 = -(uint)(fVar14 <= fVar128);
        iVar61 = -(uint)(fVar135 <= fVar155);
        iVar69 = -(uint)(fVar149 <= fVar155);
        iVar70 = -(uint)(fVar151 <= fVar155);
        iVar72 = -(uint)(fVar153 <= fVar155);
        uVar177 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x88);
        uVar176 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x80);
        iVar73 = -(uint)(fVar13 <= fVar128);
        iVar80 = -(uint)(fVar13 <= fVar122);
        iVar81 = -(uint)(fVar13 <= fVar130);
        iVar83 = -(uint)(fVar13 <= fVar4);
        iVar156 = -(uint)(fVar11 <= fVar122);
        iVar158 = -(uint)(fVar12 <= fVar122);
        iVar160 = -(uint)(fVar13 <= fVar122);
        iVar162 = -(uint)(fVar14 <= fVar122);
        fVar128 = (float)*(undefined8 *)(pfVar1 + 0x14);
        fVar122 = (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20);
        iVar131 = -(uint)(fVar10 <= fVar128);
        iVar132 = -(uint)(fVar10 <= fVar122);
        fVar4 = (float)*(undefined8 *)(pfVar1 + 0x16);
        iVar133 = -(uint)(fVar10 <= fVar4);
        fVar135 = (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20);
        iVar134 = -(uint)(fVar10 <= fVar135);
        iVar84 = -(uint)(fVar11 <= fVar130);
        iVar92 = -(uint)(fVar12 <= fVar130);
        iVar93 = -(uint)(fVar13 <= fVar130);
        iVar95 = -(uint)(fVar14 <= fVar130);
        iVar164 = -(uint)(fVar15 <= fVar128);
        iVar165 = -(uint)(fVar15 <= fVar122);
        iVar166 = -(uint)(fVar15 <= fVar4);
        iVar167 = -(uint)(fVar15 <= fVar135);
        iVar136 = -(uint)(fVar10 <= fVar128);
        iVar137 = -(uint)(fVar15 <= fVar128);
        iVar138 = -(uint)(fVar111 <= fVar128);
        iVar139 = -(uint)(fVar113 <= fVar128);
        iVar168 = -(uint)(fVar10 <= fVar122);
        iVar169 = -(uint)(fVar15 <= fVar122);
        iVar170 = -(uint)(fVar111 <= fVar122);
        iVar171 = -(uint)(fVar113 <= fVar122);
        iVar36 = -(uint)(fVar111 <= fVar128);
        iVar5 = -(uint)(fVar111 <= fVar122);
        iVar38 = -(uint)(fVar111 <= fVar4);
        iVar51 = -(uint)(fVar111 <= fVar135);
        iVar53 = -(uint)(fVar10 <= fVar4);
        iVar54 = -(uint)(fVar15 <= fVar4);
        iVar55 = -(uint)(fVar111 <= fVar4);
        iVar58 = -(uint)(fVar113 <= fVar4);
        auVar57 = *(undefined1 (*) [16])(pfVar1 + 0x18);
        iVar35 = CONCAT13(PTR_DAT_047d19e0[0xe3] &
                          (byte)((uint)iVar110 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                          (byte)((uint)iVar118 >> 0x18) & (byte)((uint)iVar123 >> 0x18) &
                          (byte)((uint)iVar131 >> 0x18) & (byte)((uint)iVar136 >> 0x18) & bVar181,
                          CONCAT12(PTR_DAT_047d19e0[0xe2] &
                                   (byte)((uint)iVar110 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                                   (byte)((uint)iVar118 >> 0x10) & (byte)((uint)iVar123 >> 0x10) &
                                   (byte)((uint)iVar131 >> 0x10) & (byte)((uint)iVar136 >> 0x10) &
                                   bVar180,CONCAT11(PTR_DAT_047d19e0[0xe1] &
                                                    (byte)((uint)iVar110 >> 8) &
                                                    (byte)((uint)iVar35 >> 8) &
                                                    (byte)((uint)iVar118 >> 8) &
                                                    (byte)((uint)iVar123 >> 8) &
                                                    (byte)((uint)iVar131 >> 8) &
                                                    (byte)((uint)iVar136 >> 8) & bVar179,
                                                    PTR_DAT_047d19e0[0xe0] &
                                                    (byte)iVar110 & (byte)iVar35 & (byte)iVar118 &
                                                    (byte)iVar123 & (byte)iVar131 & (byte)iVar136 &
                                                    bVar178)));
        auVar39._0_8_ =
             CONCAT17(PTR_DAT_047d19e0[0xe7] &
                      (byte)((uint)iVar112 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                      (byte)((uint)iVar119 >> 0x18) & (byte)((uint)iVar125 >> 0x18) &
                      (byte)((uint)iVar132 >> 0x18) & (byte)((uint)iVar137 >> 0x18) & bVar185,
                      CONCAT16(PTR_DAT_047d19e0[0xe6] &
                               (byte)((uint)iVar112 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                               (byte)((uint)iVar119 >> 0x10) & (byte)((uint)iVar125 >> 0x10) &
                               (byte)((uint)iVar132 >> 0x10) & (byte)((uint)iVar137 >> 0x10) &
                               bVar184,CONCAT15(PTR_DAT_047d19e0[0xe5] &
                                                (byte)((uint)iVar112 >> 8) &
                                                (byte)((uint)iVar33 >> 8) &
                                                (byte)((uint)iVar119 >> 8) &
                                                (byte)((uint)iVar125 >> 8) &
                                                (byte)((uint)iVar132 >> 8) &
                                                (byte)((uint)iVar137 >> 8) & bVar183,
                                                CONCAT14(PTR_DAT_047d19e0[0xe4] &
                                                         (byte)iVar112 & (byte)iVar33 &
                                                         (byte)iVar119 & (byte)iVar125 &
                                                         (byte)iVar132 & (byte)iVar137 & bVar182,
                                                         iVar35))));
        auVar39[8] = PTR_DAT_047d19e0[0xe8] &
                     (byte)iVar114 & (byte)iVar59 & (byte)iVar120 & (byte)iVar127 & (byte)iVar133 &
                     (byte)iVar138 & bVar186;
        auVar39[9] = PTR_DAT_047d19e0[0xe9] &
                     (byte)((uint)iVar114 >> 8) & (byte)((uint)iVar59 >> 8) &
                     (byte)((uint)iVar120 >> 8) & (byte)((uint)iVar127 >> 8) &
                     (byte)((uint)iVar133 >> 8) & (byte)((uint)iVar138 >> 8) & bVar187;
        auVar39[10] = PTR_DAT_047d19e0[0xea] &
                      (byte)((uint)iVar114 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                      (byte)((uint)iVar120 >> 0x10) & (byte)((uint)iVar127 >> 0x10) &
                      (byte)((uint)iVar133 >> 0x10) & (byte)((uint)iVar138 >> 0x10) & bVar188;
        auVar39[0xb] = PTR_DAT_047d19e0[0xeb] &
                       (byte)((uint)iVar114 >> 0x18) & (byte)((uint)iVar59 >> 0x18) &
                       (byte)((uint)iVar120 >> 0x18) & (byte)((uint)iVar127 >> 0x18) &
                       (byte)((uint)iVar133 >> 0x18) & (byte)((uint)iVar138 >> 0x18) & bVar189;
        auVar43[0xc] = PTR_DAT_047d19e0[0xec] &
                       (byte)iVar116 & (byte)iVar60 & (byte)iVar121 & (byte)iVar129 & (byte)iVar134
                       & (byte)iVar139 & bVar190;
        auVar43._0_12_ = auVar39;
        auVar43[0xd] = PTR_DAT_047d19e0[0xed] &
                       (byte)((uint)iVar116 >> 8) & (byte)((uint)iVar60 >> 8) &
                       (byte)((uint)iVar121 >> 8) & (byte)((uint)iVar129 >> 8) &
                       (byte)((uint)iVar134 >> 8) & (byte)((uint)iVar139 >> 8) & bVar191;
        auVar43[0xe] = PTR_DAT_047d19e0[0xee] &
                       (byte)((uint)iVar116 >> 0x10) & (byte)((uint)iVar60 >> 0x10) &
                       (byte)((uint)iVar121 >> 0x10) & (byte)((uint)iVar129 >> 0x10) &
                       (byte)((uint)iVar134 >> 0x10) & (byte)((uint)iVar139 >> 0x10) & bVar192;
        auVar43[0xf] = PTR_DAT_047d19e0[0xef] &
                       (byte)((uint)iVar116 >> 0x18) & (byte)((uint)iVar60 >> 0x18) &
                       (byte)((uint)iVar121 >> 0x18) & (byte)((uint)iVar129 >> 0x18) &
                       (byte)((uint)iVar134 >> 0x18) & (byte)((uint)iVar139 >> 0x18) & bVar193;
        iVar33 = CONCAT13(PTR_DAT_047d19e0[0xc3] &
                          (byte)((uint)iVar144 >> 0x18) & (byte)((uint)iVar140 >> 0x18) &
                          (byte)((uint)iVar148 >> 0x18) & (byte)((uint)iVar156 >> 0x18) &
                          (byte)((uint)iVar164 >> 0x18) & (byte)((uint)iVar168 >> 0x18) & bVar181,
                          CONCAT12(PTR_DAT_047d19e0[0xc2] &
                                   (byte)((uint)iVar144 >> 0x10) & (byte)((uint)iVar140 >> 0x10) &
                                   (byte)((uint)iVar148 >> 0x10) & (byte)((uint)iVar156 >> 0x10) &
                                   (byte)((uint)iVar164 >> 0x10) & (byte)((uint)iVar168 >> 0x10) &
                                   bVar180,CONCAT11(PTR_DAT_047d19e0[0xc1] &
                                                    (byte)((uint)iVar144 >> 8) &
                                                    (byte)((uint)iVar140 >> 8) &
                                                    (byte)((uint)iVar148 >> 8) &
                                                    (byte)((uint)iVar156 >> 8) &
                                                    (byte)((uint)iVar164 >> 8) &
                                                    (byte)((uint)iVar168 >> 8) & bVar179,
                                                    PTR_DAT_047d19e0[0xc0] &
                                                    (byte)iVar144 & (byte)iVar140 & (byte)iVar148 &
                                                    (byte)iVar156 & (byte)iVar164 & (byte)iVar168 &
                                                    bVar178)));
        auVar56._0_8_ =
             CONCAT17(PTR_DAT_047d19e0[199] &
                      (byte)((uint)iVar145 >> 0x18) & (byte)((uint)iVar141 >> 0x18) &
                      (byte)((uint)iVar150 >> 0x18) & (byte)((uint)iVar158 >> 0x18) &
                      (byte)((uint)iVar165 >> 0x18) & (byte)((uint)iVar169 >> 0x18) & bVar185,
                      CONCAT16(PTR_DAT_047d19e0[0xc6] &
                               (byte)((uint)iVar145 >> 0x10) & (byte)((uint)iVar141 >> 0x10) &
                               (byte)((uint)iVar150 >> 0x10) & (byte)((uint)iVar158 >> 0x10) &
                               (byte)((uint)iVar165 >> 0x10) & (byte)((uint)iVar169 >> 0x10) &
                               bVar184,CONCAT15(PTR_DAT_047d19e0[0xc5] &
                                                (byte)((uint)iVar145 >> 8) &
                                                (byte)((uint)iVar141 >> 8) &
                                                (byte)((uint)iVar150 >> 8) &
                                                (byte)((uint)iVar158 >> 8) &
                                                (byte)((uint)iVar165 >> 8) &
                                                (byte)((uint)iVar169 >> 8) & bVar183,
                                                CONCAT14(PTR_DAT_047d19e0[0xc4] &
                                                         (byte)iVar145 & (byte)iVar141 &
                                                         (byte)iVar150 & (byte)iVar158 &
                                                         (byte)iVar165 & (byte)iVar169 & bVar182,
                                                         iVar33))));
        auVar56[8] = PTR_DAT_047d19e0[200] &
                     (byte)iVar146 & (byte)iVar142 & (byte)iVar152 & (byte)iVar160 & (byte)iVar166 &
                     (byte)iVar170 & bVar186;
        auVar56[9] = PTR_DAT_047d19e0[0xc9] &
                     (byte)((uint)iVar146 >> 8) & (byte)((uint)iVar142 >> 8) &
                     (byte)((uint)iVar152 >> 8) & (byte)((uint)iVar160 >> 8) &
                     (byte)((uint)iVar166 >> 8) & (byte)((uint)iVar170 >> 8) & bVar187;
        auVar56[10] = PTR_DAT_047d19e0[0xca] &
                      (byte)((uint)iVar146 >> 0x10) & (byte)((uint)iVar142 >> 0x10) &
                      (byte)((uint)iVar152 >> 0x10) & (byte)((uint)iVar160 >> 0x10) &
                      (byte)((uint)iVar166 >> 0x10) & (byte)((uint)iVar170 >> 0x10) & bVar188;
        auVar56[0xb] = PTR_DAT_047d19e0[0xcb] &
                       (byte)((uint)iVar146 >> 0x18) & (byte)((uint)iVar142 >> 0x18) &
                       (byte)((uint)iVar152 >> 0x18) & (byte)((uint)iVar160 >> 0x18) &
                       (byte)((uint)iVar166 >> 0x18) & (byte)((uint)iVar170 >> 0x18) & bVar189;
        auVar65[0xc] = PTR_DAT_047d19e0[0xcc] &
                       (byte)iVar147 & (byte)iVar143 & (byte)iVar154 & (byte)iVar162 & (byte)iVar167
                       & (byte)iVar171 & bVar190;
        auVar65._0_12_ = auVar56;
        auVar65[0xd] = PTR_DAT_047d19e0[0xcd] &
                       (byte)((uint)iVar147 >> 8) & (byte)((uint)iVar143 >> 8) &
                       (byte)((uint)iVar154 >> 8) & (byte)((uint)iVar162 >> 8) &
                       (byte)((uint)iVar167 >> 8) & (byte)((uint)iVar171 >> 8) & bVar191;
        auVar65[0xe] = PTR_DAT_047d19e0[0xce] &
                       (byte)((uint)iVar147 >> 0x10) & (byte)((uint)iVar143 >> 0x10) &
                       (byte)((uint)iVar154 >> 0x10) & (byte)((uint)iVar162 >> 0x10) &
                       (byte)((uint)iVar167 >> 0x10) & (byte)((uint)iVar171 >> 0x10) & bVar192;
        auVar65[0xf] = PTR_DAT_047d19e0[0xcf] &
                       (byte)((uint)iVar147 >> 0x18) & (byte)((uint)iVar143 >> 0x18) &
                       (byte)((uint)iVar154 >> 0x18) & (byte)((uint)iVar162 >> 0x18) &
                       (byte)((uint)iVar167 >> 0x18) & (byte)((uint)iVar171 >> 0x18) & bVar193;
        uVar20 = (ulong)(uint)(iVar35 + (int)((ulong)auVar39._0_8_ >> 0x20) +
                              auVar39._8_4_ + auVar43._12_4_);
        iVar35 = *(int *)(puVar17 + uVar20 * 4);
        uVar27 = (ulong)(uint)(iVar33 + (int)((ulong)auVar56._0_8_ >> 0x20) +
                              auVar56._8_4_ + auVar65._12_4_);
        iVar33 = *(int *)(puVar17 + uVar27 * 4);
        auVar86 = a64_TBL(ZEXT816(0),auVar57,*(undefined1 (*) [16])(puVar16 + uVar20 * 0x10));
        iVar59 = auVar57._4_4_;
        auVar87._0_8_ = CONCAT44(iVar59,iVar59);
        auVar87._8_4_ = iVar59;
        auVar87._12_4_ = iVar59;
        auVar65 = a64_TBL(ZEXT816(0),auVar57,*(undefined1 (*) [16])(puVar16 + uVar27 * 0x10));
        iVar60 = auVar57._8_4_;
        auVar75._0_8_ = CONCAT44(iVar60,iVar60);
        auVar75._8_4_ = iVar60;
        auVar75._12_4_ = iVar60;
        iVar36 = CONCAT13((byte)((ulong)uVar176 >> 0x18) &
                          (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar172 >> 0x18) &
                          (byte)((uint)iVar73 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                          (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar53 >> 0x18) & bVar181,
                          CONCAT12((byte)((ulong)uVar176 >> 0x10) &
                                   (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar172 >> 0x10) &
                                   (byte)((uint)iVar73 >> 0x10) & (byte)((uint)iVar84 >> 0x10) &
                                   (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                                   bVar180,CONCAT11((byte)((ulong)uVar176 >> 8) &
                                                    (byte)((uint)iVar61 >> 8) &
                                                    (byte)((uint)iVar172 >> 8) &
                                                    (byte)((uint)iVar73 >> 8) &
                                                    (byte)((uint)iVar84 >> 8) &
                                                    (byte)((uint)iVar36 >> 8) &
                                                    (byte)((uint)iVar53 >> 8) & bVar179,
                                                    (byte)uVar176 &
                                                    (byte)iVar61 & (byte)iVar172 & (byte)iVar73 &
                                                    (byte)iVar84 & (byte)iVar36 & (byte)iVar53 &
                                                    bVar178)));
        auVar40._0_8_ =
             CONCAT17((byte)((ulong)uVar176 >> 0x38) &
                      (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar173 >> 0x18) &
                      (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar92 >> 0x18) &
                      (byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar54 >> 0x18) & bVar185,
                      CONCAT16((byte)((ulong)uVar176 >> 0x30) &
                               (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar173 >> 0x10) &
                               (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar92 >> 0x10) &
                               (byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar54 >> 0x10) & bVar184,
                               CONCAT15((byte)((ulong)uVar176 >> 0x28) &
                                        (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar173 >> 8) &
                                        (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar92 >> 8) &
                                        (byte)((uint)iVar5 >> 8) & (byte)((uint)iVar54 >> 8) &
                                        bVar183,CONCAT14((byte)((ulong)uVar176 >> 0x20) &
                                                         (byte)iVar69 & (byte)iVar173 & (byte)iVar80
                                                         & (byte)iVar92 & (byte)iVar5 & (byte)iVar54
                                                         & bVar182,iVar36))));
        auVar40[8] = (byte)uVar177 &
                     (byte)iVar70 & (byte)iVar174 & (byte)iVar81 & (byte)iVar93 & (byte)iVar38 &
                     (byte)iVar55 & bVar186;
        auVar40[9] = (byte)((ulong)uVar177 >> 8) &
                     (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar174 >> 8) &
                     (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar93 >> 8) &
                     (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar55 >> 8) & bVar187;
        auVar40[10] = (byte)((ulong)uVar177 >> 0x10) &
                      (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar174 >> 0x10) &
                      (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar93 >> 0x10) &
                      (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar55 >> 0x10) & bVar188;
        auVar40[0xb] = (byte)((ulong)uVar177 >> 0x18) &
                       (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar174 >> 0x18) &
                       (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar93 >> 0x18) &
                       (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar55 >> 0x18) & bVar189;
        auVar68[0xc] = (byte)((ulong)uVar177 >> 0x20) &
                       (byte)iVar72 & (byte)iVar175 & (byte)iVar83 & (byte)iVar95 & (byte)iVar51 &
                       (byte)iVar58 & bVar190;
        auVar68._0_12_ = auVar40;
        auVar68[0xd] = (byte)((ulong)uVar177 >> 0x28) &
                       (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar175 >> 8) &
                       (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar95 >> 8) &
                       (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar58 >> 8) & bVar191;
        auVar68[0xe] = (byte)((ulong)uVar177 >> 0x30) &
                       (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar175 >> 0x10) &
                       (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar95 >> 0x10) &
                       (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar58 >> 0x10) & bVar192;
        auVar68[0xf] = (byte)((ulong)uVar177 >> 0x38) &
                       (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar175 >> 0x18) &
                       (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar95 >> 0x18) &
                       (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar58 >> 0x18) & bVar193;
        uVar20 = (ulong)(uint)(iVar36 + (int)((ulong)auVar40._0_8_ >> 0x20) +
                              auVar40._8_4_ + auVar68._12_4_);
        iVar36 = auVar57._0_4_;
        uVar96 = auVar57[0];
        uVar97 = auVar57[1];
        uVar98 = auVar57[2];
        uVar99 = auVar57[3];
        lVar26 = (long)*(int *)(puVar17 + uVar20 * 4);
        auVar43 = a64_TBL(ZEXT816(0),auVar57,*(undefined1 (*) [16])(puVar16 + uVar20 * 0x10));
        if (*(char *)(pfVar1 + 0x1c) == '\0') {
          iVar5 = -(uint)(0 < iVar36);
          iVar38 = -(uint)(0 < iVar59);
          iVar51 = -(uint)(0 < iVar60);
          iVar53 = -(uint)(0 < auVar57._12_4_);
          uVar20 = (ulong)(uint)(CONCAT13((byte)((uint)iVar5 >> 0x18) & bVar181,
                                          CONCAT12((byte)((uint)iVar5 >> 0x10) & bVar180,
                                                   CONCAT11((byte)((uint)iVar5 >> 8) & bVar179,
                                                            (byte)iVar5 & bVar178))) +
                                 CONCAT13((byte)((uint)iVar38 >> 0x18) & bVar185,
                                          CONCAT12((byte)((uint)iVar38 >> 0x10) & bVar184,
                                                   CONCAT11((byte)((uint)iVar38 >> 8) & bVar183,
                                                            (byte)iVar38 & bVar182))) +
                                CONCAT13((byte)((uint)iVar51 >> 0x18) & bVar189,
                                         CONCAT12((byte)((uint)iVar51 >> 0x10) & bVar188,
                                                  CONCAT11((byte)((uint)iVar51 >> 8) & bVar187,
                                                           (byte)iVar51 & bVar186))) +
                                CONCAT13((byte)((uint)iVar53 >> 0x18) & bVar193,
                                         CONCAT12((byte)((uint)iVar53 >> 0x10) & bVar192,
                                                  CONCAT11((byte)((uint)iVar53 >> 8) & bVar191,
                                                           (byte)iVar53 & bVar190))));
          uVar176 = *(undefined8 *)((long)(puVar16 + uVar20 * 0x10) + 8);
          iVar5 = *(int *)(puVar17 + uVar20 * 4);
          auVar6[9] = (char)((ulong)uVar176 >> 8);
          auVar6._0_9_ = *(unkbyte9 *)(puVar16 + uVar20 * 0x10);
          auVar6[10] = (char)((ulong)uVar176 >> 0x10);
          auVar6[0xb] = (char)((ulong)uVar176 >> 0x18);
          auVar6[0xc] = (char)((ulong)uVar176 >> 0x20);
          auVar6[0xd] = (char)((ulong)uVar176 >> 0x28);
          auVar6[0xe] = (char)((ulong)uVar176 >> 0x30);
          auVar6[0xf] = (char)((ulong)uVar176 >> 0x38);
          auVar57 = a64_TBL(ZEXT816(0),auVar57,auVar6);
          *(long *)(local_1100 + 1) = auVar57._8_8_;
          *(long *)piVar25 = auVar57._0_8_;
          local_1100 = piVar25 + iVar5;
          *(ulong *)(local_8e0 + 2) =
               CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,iVar36))));
          *(ulong *)piVar22 =
               CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,iVar36))));
          local_8e0 = local_8e0 + iVar35;
          *(long *)(local_cf0 + 2) = auVar86._8_8_;
          *(long *)piVar23 = auVar86._0_8_;
          piVar22 = local_8e0;
          piVar23 = local_cf0 + iVar35;
          *(long *)(local_8e0 + 2) = auVar87._8_8_;
          *(undefined8 *)piVar22 = auVar87._0_8_;
          local_8e0 = local_8e0 + iVar33;
          local_cf0 = piVar23;
          *(long *)(piVar23 + 2) = auVar65._8_8_;
          *(long *)piVar23 = auVar65._0_8_;
          piVar22 = local_8e0;
          piVar23 = local_cf0 + iVar33;
          *(long *)(local_8e0 + 2) = auVar75._8_8_;
          *(undefined8 *)piVar22 = auVar75._0_8_;
          local_8e0 = local_8e0 + lVar26;
          local_cf0 = piVar23;
          *(long *)(piVar23 + 2) = auVar43._8_8_;
          *(long *)piVar23 = auVar43._0_8_;
          goto LAB_03259b48;
        }
        lVar19 = (long)(int)local_c8;
        *(ulong *)((long)auStack_8d0 + lVar19 * 4 + 8) =
             CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,iVar36))));
        *(ulong *)((long)auStack_8d0 + lVar19 * 4) =
             CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,iVar36))));
        lVar19 = (long)(int)local_c8;
        *(long *)((long)auStack_4d0 + lVar19 * 4 + 8) = auVar86._8_8_;
        *(long *)((long)auStack_4d0 + lVar19 * 4) = auVar86._0_8_;
        local_c8 = local_c8 + iVar35;
        uVar20 = -(ulong)(local_c8 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_c8 << 2;
        *(long *)((long)auStack_8d0 + uVar20 + 8) = auVar87._8_8_;
        *(undefined8 *)((long)auStack_8d0 + uVar20) = auVar87._0_8_;
        lVar19 = (long)(int)local_c8;
        *(long *)((long)auStack_4d0 + lVar19 * 4 + 8) = auVar65._8_8_;
        *(long *)((long)auStack_4d0 + lVar19 * 4) = auVar65._0_8_;
        local_c8 = local_c8 + iVar33;
        uVar20 = -(ulong)(local_c8 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_c8 << 2;
        *(long *)((long)auStack_8d0 + uVar20 + 8) = auVar75._8_8_;
        *(undefined8 *)((long)auStack_8d0 + uVar20) = auVar75._0_8_;
        lVar19 = (long)(int)local_c8;
        *(long *)((long)auStack_4d0 + lVar19 * 4 + 8) = auVar43._8_8_;
        *(long *)((long)auStack_4d0 + lVar19 * 4) = auVar43._0_8_;
        local_1100 = piVar25;
        do {
          local_c8 = local_c8 + (int)lVar26;
          while( true ) {
            uVar18 = local_c8;
            if (0xbf < (int)local_c8) {
              (**(code **)(*local_d0 + 0x10))(local_d0,auStack_8d0,auStack_4d0);
              uVar18 = 0;
              local_c8 = 0;
            }
            do {
              piVar22 = local_8e0;
              piVar23 = local_cf0;
              piVar25 = local_1100;
              if (aiStack_ce0 == local_8e0) goto LAB_03259b5c;
              piVar25 = local_8e0 + -1;
              local_8e0 = piVar25;
              uVar20 = (ulong)(uint)piVar22[-1];
              piVar29 = local_cf0 + -1;
              local_cf0 = piVar29;
              uVar27 = (ulong)(uint)piVar23[-1];
            } while ((*(char *)(*param_6 + uVar20 * 0x80 + 0x71) == '\0') &&
                    (*(char *)(param_6[1] + uVar27 * 0x80 + 0x71) == '\0'));
            puVar32 = (undefined8 *)(lVar2 + uVar20 * 0x80);
            puVar21 = (undefined8 *)(lVar2 + uVar27 * 0x80);
            puVar31 = puVar32;
            if ((*(char *)(puVar32 + 0xe) == '\0') && (*(char *)(puVar21 + 0xe) != '\0')) {
              puVar31 = puVar21;
              puVar21 = puVar32;
            }
            fVar128 = (float)((ulong)puVar31[2] >> 0x20);
            fVar130 = (float)*puVar31;
            fVar4 = (float)((ulong)*puVar31 >> 0x20);
            fVar124 = (float)puVar31[4];
            fVar126 = (float)((ulong)puVar31[4] >> 0x20);
            fVar122 = (float)puVar31[3];
            fVar10 = *(float *)(puVar21 + 10);
            fVar11 = *(float *)((long)puVar21 + 0x54);
            fVar12 = *(float *)(puVar21 + 0xb);
            fVar13 = *(float *)((long)puVar21 + 0x5c);
            auVar43 = *(undefined1 (*) [16])(puVar21 + 0xc);
            fVar111 = (float)*puVar21;
            iVar148 = -(uint)(fVar111 <= fVar128);
            fVar113 = (float)((ulong)*puVar21 >> 0x20);
            iVar150 = -(uint)(fVar113 <= fVar128);
            fVar115 = (float)puVar21[1];
            iVar152 = -(uint)(fVar115 <= fVar128);
            fVar117 = (float)((ulong)puVar21[1] >> 0x20);
            iVar154 = -(uint)(fVar117 <= fVar128);
            fVar135 = (float)puVar31[1];
            fVar149 = (float)puVar21[2];
            iVar61 = -(uint)(fVar130 <= fVar149);
            fVar151 = (float)((ulong)puVar21[2] >> 0x20);
            iVar69 = -(uint)(fVar130 <= fVar151);
            fVar153 = (float)puVar21[3];
            iVar70 = -(uint)(fVar130 <= fVar153);
            fVar155 = (float)((ulong)puVar21[3] >> 0x20);
            iVar72 = -(uint)(fVar130 <= fVar155);
            fVar128 = (float)puVar31[2];
            iVar144 = -(uint)(fVar4 <= fVar149);
            iVar145 = -(uint)(fVar4 <= fVar151);
            iVar146 = -(uint)(fVar4 <= fVar153);
            iVar147 = -(uint)(fVar4 <= fVar155);
            fVar130 = *(float *)(puVar21 + 4);
            fVar4 = *(float *)((long)puVar21 + 0x24);
            fVar14 = *(float *)(puVar21 + 5);
            fVar15 = *(float *)((long)puVar21 + 0x2c);
            iVar172 = -(uint)(fVar111 <= fVar122);
            iVar173 = -(uint)(fVar113 <= fVar122);
            iVar174 = -(uint)(fVar115 <= fVar122);
            iVar175 = -(uint)(fVar117 <= fVar122);
            iVar73 = -(uint)(fVar111 <= fVar128);
            iVar80 = -(uint)(fVar113 <= fVar128);
            iVar81 = -(uint)(fVar115 <= fVar128);
            iVar83 = -(uint)(fVar117 <= fVar128);
            fVar128 = (float)((ulong)puVar31[3] >> 0x20);
            iVar35 = -(uint)(fVar111 <= fVar128);
            iVar33 = -(uint)(fVar113 <= fVar128);
            iVar36 = -(uint)(fVar115 <= fVar128);
            iVar5 = -(uint)(fVar117 <= fVar128);
            fVar117 = (float)((ulong)puVar31[5] >> 0x20);
            fVar128 = (float)puVar31[5];
            fVar157 = (float)puVar21[6];
            iVar84 = -(uint)(fVar124 <= fVar157);
            fVar159 = (float)((ulong)puVar21[6] >> 0x20);
            iVar92 = -(uint)(fVar124 <= fVar159);
            fVar161 = (float)puVar21[7];
            iVar93 = -(uint)(fVar124 <= fVar161);
            fVar163 = (float)((ulong)puVar21[7] >> 0x20);
            iVar95 = -(uint)(fVar124 <= fVar163);
            iVar156 = -(uint)(fVar126 <= fVar157);
            iVar158 = -(uint)(fVar126 <= fVar159);
            iVar160 = -(uint)(fVar126 <= fVar161);
            iVar162 = -(uint)(fVar126 <= fVar163);
            fVar124 = (float)puVar31[6];
            iVar136 = -(uint)(fVar128 <= fVar157);
            iVar137 = -(uint)(fVar128 <= fVar159);
            iVar138 = -(uint)(fVar128 <= fVar161);
            iVar139 = -(uint)(fVar128 <= fVar163);
            fVar122 = *(float *)(puVar21 + 8);
            fVar111 = *(float *)((long)puVar21 + 0x44);
            fVar113 = *(float *)(puVar21 + 9);
            fVar115 = *(float *)((long)puVar21 + 0x4c);
            iVar110 = -(uint)(fVar117 <= fVar157);
            iVar114 = -(uint)(fVar117 <= fVar159);
            iVar118 = -(uint)(fVar117 <= fVar161);
            iVar120 = -(uint)(fVar117 <= fVar163);
            auVar68 = *(undefined1 (*) [16])(puVar31 + 0xc);
            iVar168 = -(uint)(fVar135 <= fVar149);
            iVar169 = -(uint)(fVar135 <= fVar151);
            iVar170 = -(uint)(fVar135 <= fVar153);
            iVar171 = -(uint)(fVar135 <= fVar155);
            fVar128 = (float)((ulong)puVar31[1] >> 0x20);
            iVar38 = -(uint)(fVar128 <= fVar149);
            iVar53 = -(uint)(fVar128 <= fVar151);
            iVar55 = -(uint)(fVar128 <= fVar153);
            iVar59 = -(uint)(fVar128 <= fVar155);
            iVar112 = -(uint)(fVar130 <= fVar124);
            iVar116 = -(uint)(fVar4 <= fVar124);
            iVar119 = -(uint)(fVar14 <= fVar124);
            iVar121 = -(uint)(fVar15 <= fVar124);
            fVar149 = (float)puVar31[8];
            fVar128 = (float)((ulong)puVar31[6] >> 0x20);
            fVar151 = (float)((ulong)puVar31[8] >> 0x20);
            fVar117 = (float)((ulong)puVar31[10] >> 0x20);
            fVar153 = (float)puVar31[9];
            fVar135 = (float)((ulong)puVar31[7] >> 0x20);
            fVar124 = (float)puVar31[0xb];
            fVar155 = (float)((ulong)puVar31[9] >> 0x20);
            fVar126 = (float)((ulong)puVar31[0xb] >> 0x20);
            iVar123 = -(uint)(fVar149 <= fVar10);
            iVar125 = -(uint)(fVar149 <= fVar11);
            iVar127 = -(uint)(fVar149 <= fVar12);
            iVar129 = -(uint)(fVar149 <= fVar13);
            iVar164 = -(uint)(fVar130 <= fVar128);
            iVar165 = -(uint)(fVar4 <= fVar128);
            iVar166 = -(uint)(fVar14 <= fVar128);
            iVar167 = -(uint)(fVar15 <= fVar128);
            fVar128 = (float)puVar31[10];
            iVar51 = -(uint)(fVar122 <= fVar128);
            iVar54 = -(uint)(fVar111 <= fVar128);
            iVar58 = -(uint)(fVar113 <= fVar128);
            iVar60 = -(uint)(fVar115 <= fVar128);
            iVar61 = CONCAT13((byte)((uint)iVar73 >> 0x18) & (byte)((uint)iVar61 >> 0x18) &
                              (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar112 >> 0x18) &
                              (byte)((uint)iVar123 >> 0x18) & (byte)((uint)iVar51 >> 0x18) & bVar181
                              ,CONCAT12((byte)((uint)iVar73 >> 0x10) & (byte)((uint)iVar61 >> 0x10)
                                        & (byte)((uint)iVar84 >> 0x10) &
                                        (byte)((uint)iVar112 >> 0x10) &
                                        (byte)((uint)iVar123 >> 0x10) & (byte)((uint)iVar51 >> 0x10)
                                        & bVar180,
                                        CONCAT11((byte)((uint)iVar73 >> 8) &
                                                 (byte)((uint)iVar61 >> 8) &
                                                 (byte)((uint)iVar84 >> 8) &
                                                 (byte)((uint)iVar112 >> 8) &
                                                 (byte)((uint)iVar123 >> 8) &
                                                 (byte)((uint)iVar51 >> 8) & bVar179,
                                                 (byte)iVar73 & (byte)iVar61 & (byte)iVar84 &
                                                 (byte)iVar112 & (byte)iVar123 & (byte)iVar51 &
                                                 bVar178)));
            auVar100._0_8_ =
                 CONCAT17((byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                          (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar116 >> 0x18) &
                          (byte)((uint)iVar125 >> 0x18) & (byte)((uint)iVar54 >> 0x18) & bVar185,
                          CONCAT16((byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                                   (byte)((uint)iVar92 >> 0x10) & (byte)((uint)iVar116 >> 0x10) &
                                   (byte)((uint)iVar125 >> 0x10) & (byte)((uint)iVar54 >> 0x10) &
                                   bVar184,CONCAT15((byte)((uint)iVar80 >> 8) &
                                                    (byte)((uint)iVar69 >> 8) &
                                                    (byte)((uint)iVar92 >> 8) &
                                                    (byte)((uint)iVar116 >> 8) &
                                                    (byte)((uint)iVar125 >> 8) &
                                                    (byte)((uint)iVar54 >> 8) & bVar183,
                                                    CONCAT14((byte)iVar80 & (byte)iVar69 &
                                                             (byte)iVar92 & (byte)iVar116 &
                                                             (byte)iVar125 & (byte)iVar54 & bVar182,
                                                             iVar61))));
            auVar100[8] = (byte)iVar81 & (byte)iVar70 & (byte)iVar93 & (byte)iVar119 & (byte)iVar127
                          & (byte)iVar58 & bVar186;
            auVar100[9] = (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar70 >> 8) &
                          (byte)((uint)iVar93 >> 8) & (byte)((uint)iVar119 >> 8) &
                          (byte)((uint)iVar127 >> 8) & (byte)((uint)iVar58 >> 8) & bVar187;
            auVar100[10] = (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar70 >> 0x10) &
                           (byte)((uint)iVar93 >> 0x10) & (byte)((uint)iVar119 >> 0x10) &
                           (byte)((uint)iVar127 >> 0x10) & (byte)((uint)iVar58 >> 0x10) & bVar188;
            auVar100[0xb] =
                 (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar70 >> 0x18) &
                 (byte)((uint)iVar93 >> 0x18) & (byte)((uint)iVar119 >> 0x18) &
                 (byte)((uint)iVar127 >> 0x18) & (byte)((uint)iVar58 >> 0x18) & bVar189;
            auVar102[0xc] =
                 (byte)iVar83 & (byte)iVar72 & (byte)iVar95 & (byte)iVar121 & (byte)iVar129 &
                 (byte)iVar60 & bVar190;
            auVar102._0_12_ = auVar100;
            auVar102[0xd] =
                 (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar95 >> 8) &
                 (byte)((uint)iVar121 >> 8) & (byte)((uint)iVar129 >> 8) & (byte)((uint)iVar60 >> 8)
                 & bVar191;
            auVar102[0xe] =
                 (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar72 >> 0x10) &
                 (byte)((uint)iVar95 >> 0x10) & (byte)((uint)iVar121 >> 0x10) &
                 (byte)((uint)iVar129 >> 0x10) & (byte)((uint)iVar60 >> 0x10) & bVar192;
            auVar102[0xf] =
                 (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar72 >> 0x18) &
                 (byte)((uint)iVar95 >> 0x18) & (byte)((uint)iVar121 >> 0x18) &
                 (byte)((uint)iVar129 >> 0x18) & (byte)((uint)iVar60 >> 0x18) & bVar193;
            iVar123 = -(uint)(fVar151 <= fVar10);
            iVar127 = -(uint)(fVar151 <= fVar11);
            iVar131 = -(uint)(fVar151 <= fVar12);
            iVar133 = -(uint)(fVar151 <= fVar13);
            fVar128 = (float)puVar31[7];
            iVar51 = -(uint)(fVar130 <= fVar128);
            iVar54 = -(uint)(fVar4 <= fVar128);
            iVar58 = -(uint)(fVar14 <= fVar128);
            iVar60 = -(uint)(fVar15 <= fVar128);
            iVar140 = -(uint)(fVar122 <= fVar117);
            iVar141 = -(uint)(fVar111 <= fVar117);
            iVar142 = -(uint)(fVar113 <= fVar117);
            iVar143 = -(uint)(fVar115 <= fVar117);
            iVar112 = -(uint)(fVar153 <= fVar10);
            iVar116 = -(uint)(fVar153 <= fVar11);
            iVar119 = -(uint)(fVar153 <= fVar12);
            iVar121 = -(uint)(fVar153 <= fVar13);
            iVar84 = -(uint)(fVar130 <= fVar135);
            iVar92 = -(uint)(fVar4 <= fVar135);
            iVar93 = -(uint)(fVar14 <= fVar135);
            iVar95 = -(uint)(fVar15 <= fVar135);
            iVar125 = -(uint)(fVar122 <= fVar124);
            iVar129 = -(uint)(fVar111 <= fVar124);
            iVar132 = -(uint)(fVar113 <= fVar124);
            iVar134 = -(uint)(fVar115 <= fVar124);
            uVar20 = (ulong)(uint)(iVar61 + (int)((ulong)auVar100._0_8_ >> 0x20) +
                                  auVar100._8_4_ + auVar102._12_4_);
            iVar73 = -(uint)(fVar155 <= fVar10);
            iVar80 = -(uint)(fVar155 <= fVar11);
            iVar81 = -(uint)(fVar155 <= fVar12);
            iVar83 = -(uint)(fVar155 <= fVar13);
            iVar61 = -(uint)(fVar122 <= fVar126);
            iVar69 = -(uint)(fVar111 <= fVar126);
            iVar70 = -(uint)(fVar113 <= fVar126);
            iVar72 = -(uint)(fVar115 <= fVar126);
            iVar38 = CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                              (byte)((uint)iVar110 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                              (byte)((uint)iVar73 >> 0x18) & (byte)((uint)iVar61 >> 0x18) & bVar181,
                              CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                                       (byte)((uint)iVar110 >> 0x10) & (byte)((uint)iVar84 >> 0x10)
                                       & (byte)((uint)iVar73 >> 0x10) & (byte)((uint)iVar61 >> 0x10)
                                       & bVar180,
                                       CONCAT11((byte)((uint)iVar35 >> 8) &
                                                (byte)((uint)iVar38 >> 8) &
                                                (byte)((uint)iVar110 >> 8) &
                                                (byte)((uint)iVar84 >> 8) &
                                                (byte)((uint)iVar73 >> 8) &
                                                (byte)((uint)iVar61 >> 8) & bVar179,
                                                (byte)iVar35 & (byte)iVar38 & (byte)iVar110 &
                                                (byte)iVar84 & (byte)iVar73 & (byte)iVar61 & bVar178
                                               )));
            auVar63._0_8_ =
                 CONCAT17((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                          (byte)((uint)iVar114 >> 0x18) & (byte)((uint)iVar92 >> 0x18) &
                          (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar69 >> 0x18) & bVar185,
                          CONCAT16((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                                   (byte)((uint)iVar114 >> 0x10) & (byte)((uint)iVar92 >> 0x10) &
                                   (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                                   bVar184,CONCAT15((byte)((uint)iVar33 >> 8) &
                                                    (byte)((uint)iVar53 >> 8) &
                                                    (byte)((uint)iVar114 >> 8) &
                                                    (byte)((uint)iVar92 >> 8) &
                                                    (byte)((uint)iVar80 >> 8) &
                                                    (byte)((uint)iVar69 >> 8) & bVar183,
                                                    CONCAT14((byte)iVar33 & (byte)iVar53 &
                                                             (byte)iVar114 & (byte)iVar92 &
                                                             (byte)iVar80 & (byte)iVar69 & bVar182,
                                                             iVar38))));
            auVar63[8] = (byte)iVar36 & (byte)iVar55 & (byte)iVar118 & (byte)iVar93 & (byte)iVar81 &
                         (byte)iVar70 & bVar186;
            auVar63[9] = (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar55 >> 8) &
                         (byte)((uint)iVar118 >> 8) & (byte)((uint)iVar93 >> 8) &
                         (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar70 >> 8) & bVar187;
            auVar63[10] = (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                          (byte)((uint)iVar118 >> 0x10) & (byte)((uint)iVar93 >> 0x10) &
                          (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar70 >> 0x10) & bVar188;
            auVar63[0xb] = (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                           (byte)((uint)iVar118 >> 0x18) & (byte)((uint)iVar93 >> 0x18) &
                           (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar70 >> 0x18) & bVar189;
            auVar66[0xc] = (byte)iVar5 & (byte)iVar59 & (byte)iVar120 & (byte)iVar95 & (byte)iVar83
                           & (byte)iVar72 & bVar190;
            auVar66._0_12_ = auVar63;
            auVar66[0xd] = (byte)((uint)iVar5 >> 8) & (byte)((uint)iVar59 >> 8) &
                           (byte)((uint)iVar120 >> 8) & (byte)((uint)iVar95 >> 8) &
                           (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar72 >> 8) & bVar191;
            auVar66[0xe] = (byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                           (byte)((uint)iVar120 >> 0x10) & (byte)((uint)iVar95 >> 0x10) &
                           (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar72 >> 0x10) & bVar192;
            auVar66[0xf] = (byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar59 >> 0x18) &
                           (byte)((uint)iVar120 >> 0x18) & (byte)((uint)iVar95 >> 0x18) &
                           (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar72 >> 0x18) & bVar193;
            iVar35 = *(int *)(puVar17 + uVar20 * 4);
            uVar27 = (ulong)(uint)(CONCAT13((byte)((uint)iVar148 >> 0x18) &
                                            (byte)((uint)iVar144 >> 0x18) &
                                            (byte)((uint)iVar156 >> 0x18) &
                                            (byte)((uint)iVar164 >> 0x18) &
                                            (byte)((uint)iVar123 >> 0x18) &
                                            (byte)((uint)iVar140 >> 0x18) & bVar181,
                                            CONCAT12((byte)((uint)iVar148 >> 0x10) &
                                                     (byte)((uint)iVar144 >> 0x10) &
                                                     (byte)((uint)iVar156 >> 0x10) &
                                                     (byte)((uint)iVar164 >> 0x10) &
                                                     (byte)((uint)iVar123 >> 0x10) &
                                                     (byte)((uint)iVar140 >> 0x10) & bVar180,
                                                     CONCAT11((byte)((uint)iVar148 >> 8) &
                                                              (byte)((uint)iVar144 >> 8) &
                                                              (byte)((uint)iVar156 >> 8) &
                                                              (byte)((uint)iVar164 >> 8) &
                                                              (byte)((uint)iVar123 >> 8) &
                                                              (byte)((uint)iVar140 >> 8) & bVar179,
                                                              (byte)iVar148 & (byte)iVar144 &
                                                              (byte)iVar156 & (byte)iVar164 &
                                                              (byte)iVar123 & (byte)iVar140 &
                                                              bVar178))) +
                                   CONCAT13((byte)((uint)iVar150 >> 0x18) &
                                            (byte)((uint)iVar145 >> 0x18) &
                                            (byte)((uint)iVar158 >> 0x18) &
                                            (byte)((uint)iVar165 >> 0x18) &
                                            (byte)((uint)iVar127 >> 0x18) &
                                            (byte)((uint)iVar141 >> 0x18) & bVar185,
                                            CONCAT12((byte)((uint)iVar150 >> 0x10) &
                                                     (byte)((uint)iVar145 >> 0x10) &
                                                     (byte)((uint)iVar158 >> 0x10) &
                                                     (byte)((uint)iVar165 >> 0x10) &
                                                     (byte)((uint)iVar127 >> 0x10) &
                                                     (byte)((uint)iVar141 >> 0x10) & bVar184,
                                                     CONCAT11((byte)((uint)iVar150 >> 8) &
                                                              (byte)((uint)iVar145 >> 8) &
                                                              (byte)((uint)iVar158 >> 8) &
                                                              (byte)((uint)iVar165 >> 8) &
                                                              (byte)((uint)iVar127 >> 8) &
                                                              (byte)((uint)iVar141 >> 8) & bVar183,
                                                              (byte)iVar150 & (byte)iVar145 &
                                                              (byte)iVar158 & (byte)iVar165 &
                                                              (byte)iVar127 & (byte)iVar141 &
                                                              bVar182))) +
                                  CONCAT13((byte)((uint)iVar152 >> 0x18) &
                                           (byte)((uint)iVar146 >> 0x18) &
                                           (byte)((uint)iVar160 >> 0x18) &
                                           (byte)((uint)iVar166 >> 0x18) &
                                           (byte)((uint)iVar131 >> 0x18) &
                                           (byte)((uint)iVar142 >> 0x18) & bVar189,
                                           CONCAT12((byte)((uint)iVar152 >> 0x10) &
                                                    (byte)((uint)iVar146 >> 0x10) &
                                                    (byte)((uint)iVar160 >> 0x10) &
                                                    (byte)((uint)iVar166 >> 0x10) &
                                                    (byte)((uint)iVar131 >> 0x10) &
                                                    (byte)((uint)iVar142 >> 0x10) & bVar188,
                                                    CONCAT11((byte)((uint)iVar152 >> 8) &
                                                             (byte)((uint)iVar146 >> 8) &
                                                             (byte)((uint)iVar160 >> 8) &
                                                             (byte)((uint)iVar166 >> 8) &
                                                             (byte)((uint)iVar131 >> 8) &
                                                             (byte)((uint)iVar142 >> 8) & bVar187,
                                                             (byte)iVar152 & (byte)iVar146 &
                                                             (byte)iVar160 & (byte)iVar166 &
                                                             (byte)iVar131 & (byte)iVar142 & bVar186
                                                            ))) +
                                  CONCAT13((byte)((uint)iVar154 >> 0x18) &
                                           (byte)((uint)iVar147 >> 0x18) &
                                           (byte)((uint)iVar162 >> 0x18) &
                                           (byte)((uint)iVar167 >> 0x18) &
                                           (byte)((uint)iVar133 >> 0x18) &
                                           (byte)((uint)iVar143 >> 0x18) & bVar193,
                                           CONCAT12((byte)((uint)iVar154 >> 0x10) &
                                                    (byte)((uint)iVar147 >> 0x10) &
                                                    (byte)((uint)iVar162 >> 0x10) &
                                                    (byte)((uint)iVar167 >> 0x10) &
                                                    (byte)((uint)iVar133 >> 0x10) &
                                                    (byte)((uint)iVar143 >> 0x10) & bVar192,
                                                    CONCAT11((byte)((uint)iVar154 >> 8) &
                                                             (byte)((uint)iVar147 >> 8) &
                                                             (byte)((uint)iVar162 >> 8) &
                                                             (byte)((uint)iVar167 >> 8) &
                                                             (byte)((uint)iVar133 >> 8) &
                                                             (byte)((uint)iVar143 >> 8) & bVar191,
                                                             (byte)iVar154 & (byte)iVar147 &
                                                             (byte)iVar162 & (byte)iVar167 &
                                                             (byte)iVar133 & (byte)iVar143 & bVar190
                                                            ))));
            uVar176 = *(undefined8 *)((long)(puVar16 + uVar27 * 0x10) + 8);
            iVar33 = *(int *)(puVar17 + uVar27 * 4);
            uVar28 = (ulong)(uint)(CONCAT13((byte)((uint)iVar172 >> 0x18) &
                                            (byte)((uint)iVar168 >> 0x18) &
                                            (byte)((uint)iVar136 >> 0x18) &
                                            (byte)((uint)iVar51 >> 0x18) &
                                            (byte)((uint)iVar112 >> 0x18) &
                                            (byte)((uint)iVar125 >> 0x18) & bVar181,
                                            CONCAT12((byte)((uint)iVar172 >> 0x10) &
                                                     (byte)((uint)iVar168 >> 0x10) &
                                                     (byte)((uint)iVar136 >> 0x10) &
                                                     (byte)((uint)iVar51 >> 0x10) &
                                                     (byte)((uint)iVar112 >> 0x10) &
                                                     (byte)((uint)iVar125 >> 0x10) & bVar180,
                                                     CONCAT11((byte)((uint)iVar172 >> 8) &
                                                              (byte)((uint)iVar168 >> 8) &
                                                              (byte)((uint)iVar136 >> 8) &
                                                              (byte)((uint)iVar51 >> 8) &
                                                              (byte)((uint)iVar112 >> 8) &
                                                              (byte)((uint)iVar125 >> 8) & bVar179,
                                                              (byte)iVar172 & (byte)iVar168 &
                                                              (byte)iVar136 & (byte)iVar51 &
                                                              (byte)iVar112 & (byte)iVar125 &
                                                              bVar178))) +
                                   CONCAT13((byte)((uint)iVar173 >> 0x18) &
                                            (byte)((uint)iVar169 >> 0x18) &
                                            (byte)((uint)iVar137 >> 0x18) &
                                            (byte)((uint)iVar54 >> 0x18) &
                                            (byte)((uint)iVar116 >> 0x18) &
                                            (byte)((uint)iVar129 >> 0x18) & bVar185,
                                            CONCAT12((byte)((uint)iVar173 >> 0x10) &
                                                     (byte)((uint)iVar169 >> 0x10) &
                                                     (byte)((uint)iVar137 >> 0x10) &
                                                     (byte)((uint)iVar54 >> 0x10) &
                                                     (byte)((uint)iVar116 >> 0x10) &
                                                     (byte)((uint)iVar129 >> 0x10) & bVar184,
                                                     CONCAT11((byte)((uint)iVar173 >> 8) &
                                                              (byte)((uint)iVar169 >> 8) &
                                                              (byte)((uint)iVar137 >> 8) &
                                                              (byte)((uint)iVar54 >> 8) &
                                                              (byte)((uint)iVar116 >> 8) &
                                                              (byte)((uint)iVar129 >> 8) & bVar183,
                                                              (byte)iVar173 & (byte)iVar169 &
                                                              (byte)iVar137 & (byte)iVar54 &
                                                              (byte)iVar116 & (byte)iVar129 &
                                                              bVar182))) +
                                  CONCAT13((byte)((uint)iVar174 >> 0x18) &
                                           (byte)((uint)iVar170 >> 0x18) &
                                           (byte)((uint)iVar138 >> 0x18) &
                                           (byte)((uint)iVar58 >> 0x18) &
                                           (byte)((uint)iVar119 >> 0x18) &
                                           (byte)((uint)iVar132 >> 0x18) & bVar189,
                                           CONCAT12((byte)((uint)iVar174 >> 0x10) &
                                                    (byte)((uint)iVar170 >> 0x10) &
                                                    (byte)((uint)iVar138 >> 0x10) &
                                                    (byte)((uint)iVar58 >> 0x10) &
                                                    (byte)((uint)iVar119 >> 0x10) &
                                                    (byte)((uint)iVar132 >> 0x10) & bVar188,
                                                    CONCAT11((byte)((uint)iVar174 >> 8) &
                                                             (byte)((uint)iVar170 >> 8) &
                                                             (byte)((uint)iVar138 >> 8) &
                                                             (byte)((uint)iVar58 >> 8) &
                                                             (byte)((uint)iVar119 >> 8) &
                                                             (byte)((uint)iVar132 >> 8) & bVar187,
                                                             (byte)iVar174 & (byte)iVar170 &
                                                             (byte)iVar138 & (byte)iVar58 &
                                                             (byte)iVar119 & (byte)iVar132 & bVar186
                                                            ))) +
                                  CONCAT13((byte)((uint)iVar175 >> 0x18) &
                                           (byte)((uint)iVar171 >> 0x18) &
                                           (byte)((uint)iVar139 >> 0x18) &
                                           (byte)((uint)iVar60 >> 0x18) &
                                           (byte)((uint)iVar121 >> 0x18) &
                                           (byte)((uint)iVar134 >> 0x18) & bVar193,
                                           CONCAT12((byte)((uint)iVar175 >> 0x10) &
                                                    (byte)((uint)iVar171 >> 0x10) &
                                                    (byte)((uint)iVar139 >> 0x10) &
                                                    (byte)((uint)iVar60 >> 0x10) &
                                                    (byte)((uint)iVar121 >> 0x10) &
                                                    (byte)((uint)iVar134 >> 0x10) & bVar192,
                                                    CONCAT11((byte)((uint)iVar175 >> 8) &
                                                             (byte)((uint)iVar171 >> 8) &
                                                             (byte)((uint)iVar139 >> 8) &
                                                             (byte)((uint)iVar60 >> 8) &
                                                             (byte)((uint)iVar121 >> 8) &
                                                             (byte)((uint)iVar134 >> 8) & bVar191,
                                                             (byte)iVar175 & (byte)iVar171 &
                                                             (byte)iVar139 & (byte)iVar60 &
                                                             (byte)iVar121 & (byte)iVar134 & bVar190
                                                            ))));
            auVar87 = a64_TBL(ZEXT816(0),auVar43,*(undefined1 (*) [16])(puVar16 + uVar20 * 0x10));
            local_c0[0] = iVar35;
            local_c0[1] = iVar33;
            uVar177 = *(undefined8 *)((long)(puVar16 + uVar28 * 0x10) + 8);
            iVar36 = *(int *)(puVar17 + uVar28 * 4);
            uVar20 = (ulong)(uint)(iVar38 + (int)((ulong)auVar63._0_8_ >> 0x20) +
                                  auVar63._8_4_ + auVar66._12_4_);
            auVar86[9] = (char)((ulong)uVar176 >> 8);
            auVar86._0_9_ = *(unkbyte9 *)(puVar16 + uVar27 * 0x10);
            auVar86[10] = (char)((ulong)uVar176 >> 0x10);
            auVar86[0xb] = (char)((ulong)uVar176 >> 0x18);
            auVar86[0xc] = (char)((ulong)uVar176 >> 0x20);
            auVar86[0xd] = (char)((ulong)uVar176 >> 0x28);
            auVar86[0xe] = (char)((ulong)uVar176 >> 0x30);
            auVar86[0xf] = (char)((ulong)uVar176 >> 0x38);
            auVar75 = a64_TBL(ZEXT816(0),auVar43,auVar86);
            uVar176 = *(undefined8 *)((long)(puVar16 + uVar20 * 0x10) + 8);
            auVar8[9] = (char)((ulong)uVar177 >> 8);
            auVar8._0_9_ = *(unkbyte9 *)(puVar16 + uVar28 * 0x10);
            auVar8[10] = (char)((ulong)uVar177 >> 0x10);
            auVar8[0xb] = (char)((ulong)uVar177 >> 0x18);
            auVar8[0xc] = (char)((ulong)uVar177 >> 0x20);
            auVar8[0xd] = (char)((ulong)uVar177 >> 0x28);
            auVar8[0xe] = (char)((ulong)uVar177 >> 0x30);
            auVar8[0xf] = (char)((ulong)uVar177 >> 0x38);
            auVar65 = a64_TBL(ZEXT816(0),auVar43,auVar8);
            auVar57[9] = (char)((ulong)uVar176 >> 8);
            auVar57._0_9_ = *(unkbyte9 *)(puVar16 + uVar20 * 0x10);
            auVar57[10] = (char)((ulong)uVar176 >> 0x10);
            auVar57[0xb] = (char)((ulong)uVar176 >> 0x18);
            auVar57[0xc] = (char)((ulong)uVar176 >> 0x20);
            auVar57[0xd] = (char)((ulong)uVar176 >> 0x28);
            auVar57[0xe] = (char)((ulong)uVar176 >> 0x30);
            auVar57[0xf] = (char)((ulong)uVar176 >> 0x38);
            auVar57 = a64_TBL(ZEXT816(0),auVar43,auVar57);
            lVar26 = (long)*(int *)(puVar17 + uVar20 * 4);
            local_c0[2] = iVar36;
            local_c0[3] = *(int *)(puVar17 + uVar20 * 4);
            uVar94 = auVar87._8_8_;
            local_b0[1] = uVar94;
            uVar85 = auVar87._0_8_;
            local_b0[0] = uVar85;
            uVar82 = auVar75._8_8_;
            local_b0[3] = uVar82;
            uVar74 = auVar75._0_8_;
            local_b0[2] = uVar74;
            uVar71 = auVar65._8_8_;
            local_b0[5] = uVar71;
            uVar62 = auVar65._0_8_;
            local_b0[4] = uVar62;
            uVar177 = auVar57._8_8_;
            local_b0[7] = uVar177;
            uVar176 = auVar57._0_8_;
            local_b0[6] = uVar176;
            uVar37 = auVar68._0_4_;
            uVar50 = auVar68._4_4_;
            uVar52 = auVar68._8_4_;
            auVar44._12_4_ = auVar68._12_4_;
            uVar96 = auVar68[0];
            uVar97 = auVar68[1];
            uVar98 = auVar68[2];
            uVar99 = auVar68[3];
            if ((*(byte *)(puVar21 + 0xe) & *(byte *)(puVar31 + 0xe)) != 0) break;
            if (*(byte *)(puVar21 + 0xe) == 0 && *(byte *)(puVar31 + 0xe) == 0) {
              *(ulong *)(piVar22 + 1) =
                   CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,uVar37))));
              *(ulong *)piVar25 =
                   CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,uVar37))));
              local_8e0 = local_8e0 + iVar35;
              *(undefined8 *)(piVar23 + 1) = uVar94;
              *(undefined8 *)piVar29 = uVar85;
              piVar22 = local_8e0;
              piVar23 = local_cf0 + iVar35;
              auVar89._0_8_ = CONCAT44(uVar50,uVar50);
              auVar89._8_4_ = uVar50;
              auVar89._12_4_ = uVar50;
              *(long *)(local_8e0 + 2) = auVar89._8_8_;
              *(undefined8 *)piVar22 = auVar89._0_8_;
              local_8e0 = local_8e0 + iVar33;
              local_cf0 = piVar23;
              *(undefined8 *)(piVar23 + 2) = uVar82;
              *(undefined8 *)piVar23 = uVar74;
              piVar22 = local_8e0;
              piVar23 = local_cf0 + iVar33;
              auVar77._0_8_ = CONCAT44(uVar52,uVar52);
              auVar77._8_4_ = uVar52;
              auVar77._12_4_ = uVar52;
              auVar46._0_8_ = CONCAT44(auVar44._12_4_,auVar44._12_4_);
              auVar46._8_4_ = auVar44._12_4_;
              auVar46._12_4_ = auVar44._12_4_;
              *(long *)(local_8e0 + 2) = auVar77._8_8_;
              *(undefined8 *)piVar22 = auVar77._0_8_;
              local_8e0 = local_8e0 + iVar36;
              local_cf0 = piVar23;
              *(undefined8 *)(piVar23 + 2) = uVar71;
              *(undefined8 *)piVar23 = uVar62;
              piVar22 = local_8e0;
              piVar23 = local_cf0 + iVar36;
              *(long *)(local_8e0 + 2) = auVar46._8_8_;
              *(undefined8 *)piVar22 = auVar46._0_8_;
              local_8e0 = local_8e0 + lVar26;
              local_cf0 = piVar23;
              *(undefined8 *)(piVar23 + 2) = uVar177;
              *(undefined8 *)piVar23 = uVar176;
LAB_03259b48:
              local_cf0 = local_cf0 + lVar26;
            }
            else {
              lVar26 = 0;
              piVar23 = local_8e0;
              while( true ) {
                local_8e0 = piVar23;
                if (iVar35 != 0) {
                  uVar176 = local_b0[lVar26 * 2];
                  iVar33 = (int)lVar26;
                  *(undefined8 *)(piVar23 + 2) = local_b0[lVar26 * 2 + 1];
                  *(undefined8 *)piVar23 = uVar176;
                  if (iVar33 == 2) {
                    uVar24 = *(undefined4 *)(puVar31 + 1);
                    uVar96 = *(undefined1 *)(puVar31 + 3);
                    uVar97 = *(undefined1 *)((long)puVar31 + 0x19);
                    uVar98 = *(undefined1 *)((long)puVar31 + 0x1a);
                    uVar99 = *(undefined1 *)((long)puVar31 + 0x1b);
                    auVar103._4_4_ = uVar24;
                    auVar103._0_4_ = uVar24;
                    auVar103._8_4_ = uVar24;
                    auVar103._12_4_ = uVar24;
                    uVar106 = *(undefined1 *)(puVar31 + 5);
                    uVar107 = *(undefined1 *)((long)puVar31 + 0x29);
                    uVar108 = *(undefined1 *)((long)puVar31 + 0x2a);
                    uVar109 = *(undefined1 *)((long)puVar31 + 0x2b);
                    fVar128 = *(float *)(puVar31 + 7);
                    fVar122 = *(float *)(puVar31 + 9);
                    fVar130 = *(float *)(puVar31 + 0xb);
                    uVar24 = uVar52;
                  }
                  else if (iVar33 == 1) {
                    uVar24 = *(undefined4 *)((long)puVar31 + 4);
                    uVar96 = *(undefined1 *)((long)puVar31 + 0x14);
                    uVar97 = *(undefined1 *)((long)puVar31 + 0x15);
                    uVar98 = *(undefined1 *)((long)puVar31 + 0x16);
                    uVar99 = *(undefined1 *)((long)puVar31 + 0x17);
                    auVar103._4_4_ = uVar24;
                    auVar103._0_4_ = uVar24;
                    auVar103._8_4_ = uVar24;
                    auVar103._12_4_ = uVar24;
                    uVar106 = *(undefined1 *)((long)puVar31 + 0x24);
                    uVar107 = *(undefined1 *)((long)puVar31 + 0x25);
                    uVar108 = *(undefined1 *)((long)puVar31 + 0x26);
                    uVar109 = *(undefined1 *)((long)puVar31 + 0x27);
                    fVar128 = *(float *)((long)puVar31 + 0x34);
                    fVar122 = *(float *)((long)puVar31 + 0x44);
                    fVar130 = *(float *)((long)puVar31 + 0x54);
                    uVar24 = uVar50;
                  }
                  else if (iVar33 == 0) {
                    uVar24 = *(undefined4 *)puVar31;
                    uVar96 = *(undefined1 *)(puVar31 + 2);
                    uVar97 = *(undefined1 *)((long)puVar31 + 0x11);
                    uVar98 = *(undefined1 *)((long)puVar31 + 0x12);
                    uVar99 = *(undefined1 *)((long)puVar31 + 0x13);
                    auVar103._4_4_ = uVar24;
                    auVar103._0_4_ = uVar24;
                    auVar103._8_4_ = uVar24;
                    auVar103._12_4_ = uVar24;
                    uVar106 = *(undefined1 *)(puVar31 + 4);
                    uVar107 = *(undefined1 *)((long)puVar31 + 0x21);
                    uVar108 = *(undefined1 *)((long)puVar31 + 0x22);
                    uVar109 = *(undefined1 *)((long)puVar31 + 0x23);
                    fVar128 = *(float *)(puVar31 + 6);
                    fVar122 = *(float *)(puVar31 + 8);
                    fVar130 = *(float *)(puVar31 + 10);
                    uVar24 = uVar37;
                  }
                  else {
                    uVar24 = *(undefined4 *)((long)puVar31 + 0xc);
                    uVar96 = *(undefined1 *)((long)puVar31 + 0x1c);
                    uVar97 = *(undefined1 *)((long)puVar31 + 0x1d);
                    uVar98 = *(undefined1 *)((long)puVar31 + 0x1e);
                    uVar99 = *(undefined1 *)((long)puVar31 + 0x1f);
                    auVar103._4_4_ = uVar24;
                    auVar103._0_4_ = uVar24;
                    auVar103._8_4_ = uVar24;
                    auVar103._12_4_ = uVar24;
                    uVar106 = *(undefined1 *)((long)puVar31 + 0x2c);
                    uVar107 = *(undefined1 *)((long)puVar31 + 0x2d);
                    uVar108 = *(undefined1 *)((long)puVar31 + 0x2e);
                    uVar109 = *(undefined1 *)((long)puVar31 + 0x2f);
                    fVar128 = *(float *)((long)puVar31 + 0x3c);
                    fVar122 = *(float *)((long)puVar31 + 0x4c);
                    fVar130 = *(float *)((long)puVar31 + 0x5c);
                    uVar24 = auVar44._12_4_;
                  }
                  piVar22 = local_8e0 + iVar35;
                  do {
                    piVar25 = piVar22 + -1;
                    local_8e0 = piVar25;
                    pfVar1 = (float *)(lVar2 + (ulong)(uint)piVar22[-1] * 0x80);
                    iVar38 = -(uint)(auVar103._0_4_ <= pfVar1[4]);
                    iVar51 = -(uint)(auVar103._4_4_ <= pfVar1[5]);
                    iVar53 = -(uint)(auVar103._8_4_ <= pfVar1[6]);
                    iVar54 = -(uint)(auVar103._12_4_ <= pfVar1[7]);
                    iVar55 = -(uint)(*pfVar1 <=
                                    (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)))
                                    );
                    iVar58 = -(uint)(pfVar1[1] <=
                                    (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)))
                                    );
                    iVar59 = -(uint)(pfVar1[2] <=
                                    (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)))
                                    );
                    iVar60 = -(uint)(pfVar1[3] <=
                                    (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)))
                                    );
                    iVar61 = -(uint)((float)CONCAT13(uVar109,CONCAT12(uVar108,CONCAT11(uVar107,
                                                  uVar106))) <= pfVar1[0xc]);
                    iVar69 = -(uint)((float)CONCAT13(uVar109,CONCAT12(uVar108,CONCAT11(uVar107,
                                                  uVar106))) <= pfVar1[0xd]);
                    iVar70 = -(uint)((float)CONCAT13(uVar109,CONCAT12(uVar108,CONCAT11(uVar107,
                                                  uVar106))) <= pfVar1[0xe]);
                    iVar72 = -(uint)((float)CONCAT13(uVar109,CONCAT12(uVar108,CONCAT11(uVar107,
                                                  uVar106))) <= pfVar1[0xf]);
                    iVar73 = -(uint)(pfVar1[8] <= fVar128);
                    iVar80 = -(uint)(pfVar1[9] <= fVar128);
                    iVar81 = -(uint)(pfVar1[10] <= fVar128);
                    iVar83 = -(uint)(pfVar1[0xb] <= fVar128);
                    iVar84 = -(uint)(fVar122 <= pfVar1[0x14]);
                    iVar92 = -(uint)(fVar122 <= pfVar1[0x15]);
                    iVar93 = -(uint)(fVar122 <= pfVar1[0x16]);
                    iVar95 = -(uint)(fVar122 <= pfVar1[0x17]);
                    iVar35 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <= fVar130);
                    iVar33 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <=
                                    fVar130);
                    iVar36 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <= fVar130);
                    iVar5 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <=
                                   fVar130);
                    iVar35 = CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                                      (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar73 >> 0x18) &
                                      (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                                      bVar181,CONCAT12((byte)((uint)iVar55 >> 0x10) &
                                                       (byte)((uint)iVar38 >> 0x10) &
                                                       (byte)((uint)iVar61 >> 0x10) &
                                                       (byte)((uint)iVar73 >> 0x10) &
                                                       (byte)((uint)iVar84 >> 0x10) &
                                                       (byte)((uint)iVar35 >> 0x10) & bVar180,
                                                       CONCAT11((byte)((uint)iVar55 >> 8) &
                                                                (byte)((uint)iVar38 >> 8) &
                                                                (byte)((uint)iVar61 >> 8) &
                                                                (byte)((uint)iVar73 >> 8) &
                                                                (byte)((uint)iVar84 >> 8) &
                                                                (byte)((uint)iVar35 >> 8) & bVar179,
                                                                (byte)iVar55 & (byte)iVar38 &
                                                                (byte)iVar61 & (byte)iVar73 &
                                                                (byte)iVar84 & (byte)iVar35 &
                                                                bVar178)));
                    auVar41._0_8_ =
                         CONCAT17((byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar51 >> 0x18) &
                                  (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar80 >> 0x18) &
                                  (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                                  bVar185,CONCAT16((byte)((uint)iVar58 >> 0x10) &
                                                   (byte)((uint)iVar51 >> 0x10) &
                                                   (byte)((uint)iVar69 >> 0x10) &
                                                   (byte)((uint)iVar80 >> 0x10) &
                                                   (byte)((uint)iVar92 >> 0x10) &
                                                   (byte)((uint)iVar33 >> 0x10) & bVar184,
                                                   CONCAT15((byte)((uint)iVar58 >> 8) &
                                                            (byte)((uint)iVar51 >> 8) &
                                                            (byte)((uint)iVar69 >> 8) &
                                                            (byte)((uint)iVar80 >> 8) &
                                                            (byte)((uint)iVar92 >> 8) &
                                                            (byte)((uint)iVar33 >> 8) & bVar183,
                                                            CONCAT14((byte)iVar58 & (byte)iVar51 &
                                                                     (byte)iVar69 & (byte)iVar80 &
                                                                     (byte)iVar92 & (byte)iVar33 &
                                                                     bVar182,iVar35))));
                    auVar41[8] = (byte)iVar59 & (byte)iVar53 & (byte)iVar70 & (byte)iVar81 &
                                 (byte)iVar93 & (byte)iVar36 & bVar186;
                    auVar41[9] = (byte)((uint)iVar59 >> 8) & (byte)((uint)iVar53 >> 8) &
                                 (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar81 >> 8) &
                                 (byte)((uint)iVar93 >> 8) & (byte)((uint)iVar36 >> 8) & bVar187;
                    auVar41[10] = (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                                  (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar81 >> 0x10) &
                                  (byte)((uint)iVar93 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                                  bVar188;
                    auVar41[0xb] = (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                                   (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar81 >> 0x18) &
                                   (byte)((uint)iVar93 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                                   bVar189;
                    auVar45[0xc] = (byte)iVar60 & (byte)iVar54 & (byte)iVar72 & (byte)iVar83 &
                                   (byte)iVar95 & (byte)iVar5 & bVar190;
                    auVar45._0_12_ = auVar41;
                    auVar45[0xd] = (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar54 >> 8) &
                                   (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar83 >> 8) &
                                   (byte)((uint)iVar95 >> 8) & (byte)((uint)iVar5 >> 8) & bVar191;
                    auVar45[0xe] = (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar54 >> 0x10) &
                                   (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar83 >> 0x10) &
                                   (byte)((uint)iVar95 >> 0x10) & (byte)((uint)iVar5 >> 0x10) &
                                   bVar192;
                    auVar45[0xf] = (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar54 >> 0x18) &
                                   (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar83 >> 0x18) &
                                   (byte)((uint)iVar95 >> 0x18) & (byte)((uint)iVar5 >> 0x18) &
                                   bVar193;
                    uVar20 = (ulong)(uint)(iVar35 + (int)((ulong)auVar41._0_8_ >> 0x20) +
                                          auVar41._8_4_ + auVar45._12_4_);
                    iVar35 = *(int *)(puVar17 + uVar20 * 4);
                    auVar57 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                                      *(undefined1 (*) [16])(puVar16 + uVar20 * 0x10));
                    if (*(char *)(pfVar1 + 0x1c) == '\0') {
                      *(long *)(piVar22 + 1) = auVar57._8_8_;
                      *(long *)piVar25 = auVar57._0_8_;
                      local_8e0 = piVar25 + iVar35;
                    }
                    else {
                      lVar19 = (long)(int)local_c8;
                      *(ulong *)((long)auStack_8d0 + lVar19 * 4 + 8) = CONCAT44(uVar24,uVar24);
                      *(ulong *)((long)auStack_8d0 + lVar19 * 4) = CONCAT44(uVar24,uVar24);
                      lVar19 = (long)(int)local_c8;
                      *(long *)((long)auStack_4d0 + lVar19 * 4 + 8) = auVar57._8_8_;
                      *(long *)((long)auStack_4d0 + lVar19 * 4) = auVar57._0_8_;
                      local_c8 = local_c8 + iVar35;
                      if (0xbf < (int)local_c8) {
                        (**(code **)(*local_d0 + 0x10))(local_d0,auStack_8d0,auStack_4d0);
                        local_c8 = 0;
                      }
                    }
                    piVar22 = local_8e0;
                  } while (piVar23 != local_8e0);
                }
                lVar26 = lVar26 + 1;
                if (lVar26 == 4) break;
                iVar35 = local_c0[lVar26];
                piVar23 = local_8e0;
              }
            }
          }
          lVar19 = (long)(int)local_c8;
          *(ulong *)((long)auStack_8d0 + lVar19 * 4 + 8) =
               CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,uVar37))));
          *(ulong *)((long)auStack_8d0 + lVar19 * 4) =
               CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,uVar37))));
          lVar19 = (long)(int)local_c8;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4 + 8) = uVar94;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4) = uVar85;
          auVar88._0_8_ = CONCAT44(uVar50,uVar50);
          auVar88._8_4_ = uVar50;
          auVar88._12_4_ = uVar50;
          local_c8 = local_c8 + iVar35;
          uVar20 = -(ulong)(local_c8 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_c8 << 2;
          *(long *)((long)auStack_8d0 + uVar20 + 8) = auVar88._8_8_;
          *(undefined8 *)((long)auStack_8d0 + uVar20) = auVar88._0_8_;
          lVar19 = (long)(int)local_c8;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4 + 8) = uVar82;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4) = uVar74;
          auVar76._0_8_ = CONCAT44(uVar52,uVar52);
          auVar76._8_4_ = uVar52;
          auVar76._12_4_ = uVar52;
          auVar44._0_8_ = CONCAT44(auVar44._12_4_,auVar44._12_4_);
          auVar44._8_4_ = auVar44._12_4_;
          local_c8 = local_c8 + iVar33;
          uVar20 = -(ulong)(local_c8 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_c8 << 2;
          *(long *)((long)auStack_8d0 + uVar20 + 8) = auVar76._8_8_;
          *(undefined8 *)((long)auStack_8d0 + uVar20) = auVar76._0_8_;
          lVar19 = (long)(int)local_c8;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4 + 8) = uVar71;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4) = uVar62;
          local_c8 = local_c8 + iVar36;
          uVar20 = -(ulong)(local_c8 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_c8 << 2;
          *(long *)((long)auStack_8d0 + uVar20 + 8) = auVar44._8_8_;
          *(undefined8 *)((long)auStack_8d0 + uVar20) = auVar44._0_8_;
          lVar19 = (long)(int)local_c8;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4 + 8) = uVar177;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4) = uVar176;
        } while( true );
      }
LAB_03259b5c:
      local_1100 = piVar25;
    } while (local_1500 != local_1100);
  }
  else {
    aiStack_ce0[0] = param_4;
    uVar18 = 0;
    aiStack_10f0[0] = param_5;
    lVar26 = 0;
    if (*param_2 != 0) {
      lVar26 = *param_2 + (long)param_2;
    }
    piVar23 = (int *)((ulong)local_cf0 | 4);
    piVar22 = (int *)((ulong)local_8e0 | 4);
    while( true ) {
      local_8e0 = piVar22 + -1;
      local_cf0 = piVar23 + -1;
      if ((*(char *)(*param_6 + (ulong)(uint)piVar22[-1] * 0x80 + 0x71) != '\0') ||
         (*(char *)(param_6[1] + (ulong)(uint)piVar23[-1] * 0x80 + 0x71) != '\0')) {
        puVar32 = (undefined8 *)(lVar2 + (ulong)(uint)piVar22[-1] * 0x80);
        puVar21 = (undefined8 *)(lVar26 + (ulong)(uint)piVar23[-1] * 0x80);
        lVar19 = lVar26;
        if (*(char *)(puVar32 + 0xe) == '\0') {
          puVar31 = puVar32;
          if (*(char *)(puVar21 + 0xe) != '\0') {
            lVar19 = lVar2;
            puVar31 = puVar21;
            puVar21 = puVar32;
          }
          puVar32 = puVar31;
        }
        fVar128 = (float)((ulong)puVar32[2] >> 0x20);
        fVar130 = (float)*puVar32;
        fVar4 = (float)((ulong)*puVar32 >> 0x20);
        fVar124 = (float)puVar32[4];
        fVar126 = (float)((ulong)puVar32[4] >> 0x20);
        fVar122 = (float)puVar32[3];
        fVar10 = *(float *)(puVar21 + 10);
        fVar11 = *(float *)((long)puVar21 + 0x54);
        fVar12 = *(float *)(puVar21 + 0xb);
        fVar13 = *(float *)((long)puVar21 + 0x5c);
        auVar57 = *(undefined1 (*) [16])(puVar21 + 0xc);
        fVar111 = (float)*puVar21;
        iVar148 = -(uint)(fVar111 <= fVar128);
        fVar113 = (float)((ulong)*puVar21 >> 0x20);
        iVar150 = -(uint)(fVar113 <= fVar128);
        fVar115 = (float)puVar21[1];
        iVar152 = -(uint)(fVar115 <= fVar128);
        fVar117 = (float)((ulong)puVar21[1] >> 0x20);
        iVar154 = -(uint)(fVar117 <= fVar128);
        fVar135 = (float)puVar32[1];
        fVar149 = (float)puVar21[2];
        iVar61 = -(uint)(fVar130 <= fVar149);
        fVar151 = (float)((ulong)puVar21[2] >> 0x20);
        iVar69 = -(uint)(fVar130 <= fVar151);
        fVar153 = (float)puVar21[3];
        iVar70 = -(uint)(fVar130 <= fVar153);
        fVar155 = (float)((ulong)puVar21[3] >> 0x20);
        iVar72 = -(uint)(fVar130 <= fVar155);
        fVar128 = (float)puVar32[2];
        iVar144 = -(uint)(fVar4 <= fVar149);
        iVar145 = -(uint)(fVar4 <= fVar151);
        iVar146 = -(uint)(fVar4 <= fVar153);
        iVar147 = -(uint)(fVar4 <= fVar155);
        fVar130 = *(float *)(puVar21 + 4);
        fVar4 = *(float *)((long)puVar21 + 0x24);
        fVar14 = *(float *)(puVar21 + 5);
        fVar15 = *(float *)((long)puVar21 + 0x2c);
        iVar172 = -(uint)(fVar111 <= fVar122);
        iVar173 = -(uint)(fVar113 <= fVar122);
        iVar174 = -(uint)(fVar115 <= fVar122);
        iVar175 = -(uint)(fVar117 <= fVar122);
        iVar73 = -(uint)(fVar111 <= fVar128);
        iVar80 = -(uint)(fVar113 <= fVar128);
        iVar81 = -(uint)(fVar115 <= fVar128);
        iVar83 = -(uint)(fVar117 <= fVar128);
        fVar128 = (float)((ulong)puVar32[3] >> 0x20);
        iVar35 = -(uint)(fVar111 <= fVar128);
        iVar33 = -(uint)(fVar113 <= fVar128);
        iVar36 = -(uint)(fVar115 <= fVar128);
        iVar5 = -(uint)(fVar117 <= fVar128);
        fVar117 = (float)((ulong)puVar32[5] >> 0x20);
        fVar128 = (float)puVar32[5];
        fVar157 = (float)puVar21[6];
        iVar84 = -(uint)(fVar124 <= fVar157);
        fVar159 = (float)((ulong)puVar21[6] >> 0x20);
        iVar92 = -(uint)(fVar124 <= fVar159);
        fVar161 = (float)puVar21[7];
        iVar93 = -(uint)(fVar124 <= fVar161);
        fVar163 = (float)((ulong)puVar21[7] >> 0x20);
        iVar95 = -(uint)(fVar124 <= fVar163);
        iVar156 = -(uint)(fVar126 <= fVar157);
        iVar158 = -(uint)(fVar126 <= fVar159);
        iVar160 = -(uint)(fVar126 <= fVar161);
        iVar162 = -(uint)(fVar126 <= fVar163);
        fVar124 = (float)puVar32[6];
        iVar136 = -(uint)(fVar128 <= fVar157);
        iVar137 = -(uint)(fVar128 <= fVar159);
        iVar138 = -(uint)(fVar128 <= fVar161);
        iVar139 = -(uint)(fVar128 <= fVar163);
        fVar122 = *(float *)(puVar21 + 8);
        fVar111 = *(float *)((long)puVar21 + 0x44);
        fVar113 = *(float *)(puVar21 + 9);
        fVar115 = *(float *)((long)puVar21 + 0x4c);
        iVar110 = -(uint)(fVar117 <= fVar157);
        iVar114 = -(uint)(fVar117 <= fVar159);
        iVar118 = -(uint)(fVar117 <= fVar161);
        iVar120 = -(uint)(fVar117 <= fVar163);
        auVar43 = *(undefined1 (*) [16])(puVar32 + 0xc);
        iVar168 = -(uint)(fVar135 <= fVar149);
        iVar169 = -(uint)(fVar135 <= fVar151);
        iVar170 = -(uint)(fVar135 <= fVar153);
        iVar171 = -(uint)(fVar135 <= fVar155);
        fVar128 = (float)((ulong)puVar32[1] >> 0x20);
        iVar38 = -(uint)(fVar128 <= fVar149);
        iVar53 = -(uint)(fVar128 <= fVar151);
        iVar55 = -(uint)(fVar128 <= fVar153);
        iVar59 = -(uint)(fVar128 <= fVar155);
        iVar112 = -(uint)(fVar130 <= fVar124);
        iVar116 = -(uint)(fVar4 <= fVar124);
        iVar119 = -(uint)(fVar14 <= fVar124);
        iVar121 = -(uint)(fVar15 <= fVar124);
        fVar149 = (float)puVar32[8];
        fVar128 = (float)((ulong)puVar32[6] >> 0x20);
        fVar151 = (float)((ulong)puVar32[8] >> 0x20);
        fVar117 = (float)((ulong)puVar32[10] >> 0x20);
        fVar153 = (float)puVar32[9];
        fVar135 = (float)((ulong)puVar32[7] >> 0x20);
        fVar124 = (float)puVar32[0xb];
        fVar155 = (float)((ulong)puVar32[9] >> 0x20);
        fVar126 = (float)((ulong)puVar32[0xb] >> 0x20);
        iVar123 = -(uint)(fVar149 <= fVar10);
        iVar125 = -(uint)(fVar149 <= fVar11);
        iVar127 = -(uint)(fVar149 <= fVar12);
        iVar129 = -(uint)(fVar149 <= fVar13);
        iVar164 = -(uint)(fVar130 <= fVar128);
        iVar165 = -(uint)(fVar4 <= fVar128);
        iVar166 = -(uint)(fVar14 <= fVar128);
        iVar167 = -(uint)(fVar15 <= fVar128);
        fVar128 = (float)puVar32[10];
        iVar51 = -(uint)(fVar122 <= fVar128);
        iVar54 = -(uint)(fVar111 <= fVar128);
        iVar58 = -(uint)(fVar113 <= fVar128);
        iVar60 = -(uint)(fVar115 <= fVar128);
        iVar61 = CONCAT13((byte)((uint)iVar73 >> 0x18) & (byte)((uint)iVar61 >> 0x18) &
                          (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar112 >> 0x18) &
                          (byte)((uint)iVar123 >> 0x18) & (byte)((uint)iVar51 >> 0x18) & bVar181,
                          CONCAT12((byte)((uint)iVar73 >> 0x10) & (byte)((uint)iVar61 >> 0x10) &
                                   (byte)((uint)iVar84 >> 0x10) & (byte)((uint)iVar112 >> 0x10) &
                                   (byte)((uint)iVar123 >> 0x10) & (byte)((uint)iVar51 >> 0x10) &
                                   bVar180,CONCAT11((byte)((uint)iVar73 >> 8) &
                                                    (byte)((uint)iVar61 >> 8) &
                                                    (byte)((uint)iVar84 >> 8) &
                                                    (byte)((uint)iVar112 >> 8) &
                                                    (byte)((uint)iVar123 >> 8) &
                                                    (byte)((uint)iVar51 >> 8) & bVar179,
                                                    (byte)iVar73 & (byte)iVar61 & (byte)iVar84 &
                                                    (byte)iVar112 & (byte)iVar123 & (byte)iVar51 &
                                                    bVar178)));
        auVar101._0_8_ =
             CONCAT17((byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                      (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar116 >> 0x18) &
                      (byte)((uint)iVar125 >> 0x18) & (byte)((uint)iVar54 >> 0x18) & bVar185,
                      CONCAT16((byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                               (byte)((uint)iVar92 >> 0x10) & (byte)((uint)iVar116 >> 0x10) &
                               (byte)((uint)iVar125 >> 0x10) & (byte)((uint)iVar54 >> 0x10) &
                               bVar184,CONCAT15((byte)((uint)iVar80 >> 8) &
                                                (byte)((uint)iVar69 >> 8) &
                                                (byte)((uint)iVar92 >> 8) &
                                                (byte)((uint)iVar116 >> 8) &
                                                (byte)((uint)iVar125 >> 8) &
                                                (byte)((uint)iVar54 >> 8) & bVar183,
                                                CONCAT14((byte)iVar80 & (byte)iVar69 & (byte)iVar92
                                                         & (byte)iVar116 & (byte)iVar125 &
                                                         (byte)iVar54 & bVar182,iVar61))));
        auVar101[8] = (byte)iVar81 & (byte)iVar70 & (byte)iVar93 & (byte)iVar119 & (byte)iVar127 &
                      (byte)iVar58 & bVar186;
        auVar101[9] = (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar70 >> 8) &
                      (byte)((uint)iVar93 >> 8) & (byte)((uint)iVar119 >> 8) &
                      (byte)((uint)iVar127 >> 8) & (byte)((uint)iVar58 >> 8) & bVar187;
        auVar101[10] = (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar70 >> 0x10) &
                       (byte)((uint)iVar93 >> 0x10) & (byte)((uint)iVar119 >> 0x10) &
                       (byte)((uint)iVar127 >> 0x10) & (byte)((uint)iVar58 >> 0x10) & bVar188;
        auVar101[0xb] =
             (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar70 >> 0x18) &
             (byte)((uint)iVar93 >> 0x18) & (byte)((uint)iVar119 >> 0x18) &
             (byte)((uint)iVar127 >> 0x18) & (byte)((uint)iVar58 >> 0x18) & bVar189;
        auVar104[0xc] =
             (byte)iVar83 & (byte)iVar72 & (byte)iVar95 & (byte)iVar121 & (byte)iVar129 &
             (byte)iVar60 & bVar190;
        auVar104._0_12_ = auVar101;
        auVar104[0xd] =
             (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar95 >> 8) &
             (byte)((uint)iVar121 >> 8) & (byte)((uint)iVar129 >> 8) & (byte)((uint)iVar60 >> 8) &
             bVar191;
        auVar104[0xe] =
             (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar72 >> 0x10) &
             (byte)((uint)iVar95 >> 0x10) & (byte)((uint)iVar121 >> 0x10) &
             (byte)((uint)iVar129 >> 0x10) & (byte)((uint)iVar60 >> 0x10) & bVar192;
        auVar104[0xf] =
             (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar72 >> 0x18) &
             (byte)((uint)iVar95 >> 0x18) & (byte)((uint)iVar121 >> 0x18) &
             (byte)((uint)iVar129 >> 0x18) & (byte)((uint)iVar60 >> 0x18) & bVar193;
        iVar123 = -(uint)(fVar151 <= fVar10);
        iVar127 = -(uint)(fVar151 <= fVar11);
        iVar131 = -(uint)(fVar151 <= fVar12);
        iVar133 = -(uint)(fVar151 <= fVar13);
        fVar128 = (float)puVar32[7];
        iVar51 = -(uint)(fVar130 <= fVar128);
        iVar54 = -(uint)(fVar4 <= fVar128);
        iVar58 = -(uint)(fVar14 <= fVar128);
        iVar60 = -(uint)(fVar15 <= fVar128);
        iVar140 = -(uint)(fVar122 <= fVar117);
        iVar141 = -(uint)(fVar111 <= fVar117);
        iVar142 = -(uint)(fVar113 <= fVar117);
        iVar143 = -(uint)(fVar115 <= fVar117);
        iVar112 = -(uint)(fVar153 <= fVar10);
        iVar116 = -(uint)(fVar153 <= fVar11);
        iVar119 = -(uint)(fVar153 <= fVar12);
        iVar121 = -(uint)(fVar153 <= fVar13);
        iVar84 = -(uint)(fVar130 <= fVar135);
        iVar92 = -(uint)(fVar4 <= fVar135);
        iVar93 = -(uint)(fVar14 <= fVar135);
        iVar95 = -(uint)(fVar15 <= fVar135);
        iVar125 = -(uint)(fVar122 <= fVar124);
        iVar129 = -(uint)(fVar111 <= fVar124);
        iVar132 = -(uint)(fVar113 <= fVar124);
        iVar134 = -(uint)(fVar115 <= fVar124);
        uVar20 = (ulong)(uint)(iVar61 + (int)((ulong)auVar101._0_8_ >> 0x20) +
                              auVar101._8_4_ + auVar104._12_4_);
        iVar73 = -(uint)(fVar155 <= fVar10);
        iVar80 = -(uint)(fVar155 <= fVar11);
        iVar81 = -(uint)(fVar155 <= fVar12);
        iVar83 = -(uint)(fVar155 <= fVar13);
        iVar61 = -(uint)(fVar122 <= fVar126);
        iVar69 = -(uint)(fVar111 <= fVar126);
        iVar70 = -(uint)(fVar113 <= fVar126);
        iVar72 = -(uint)(fVar115 <= fVar126);
        iVar38 = CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                          (byte)((uint)iVar110 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                          (byte)((uint)iVar73 >> 0x18) & (byte)((uint)iVar61 >> 0x18) & bVar181,
                          CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                                   (byte)((uint)iVar110 >> 0x10) & (byte)((uint)iVar84 >> 0x10) &
                                   (byte)((uint)iVar73 >> 0x10) & (byte)((uint)iVar61 >> 0x10) &
                                   bVar180,CONCAT11((byte)((uint)iVar35 >> 8) &
                                                    (byte)((uint)iVar38 >> 8) &
                                                    (byte)((uint)iVar110 >> 8) &
                                                    (byte)((uint)iVar84 >> 8) &
                                                    (byte)((uint)iVar73 >> 8) &
                                                    (byte)((uint)iVar61 >> 8) & bVar179,
                                                    (byte)iVar35 & (byte)iVar38 & (byte)iVar110 &
                                                    (byte)iVar84 & (byte)iVar73 & (byte)iVar61 &
                                                    bVar178)));
        auVar64._0_8_ =
             CONCAT17((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                      (byte)((uint)iVar114 >> 0x18) & (byte)((uint)iVar92 >> 0x18) &
                      (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar69 >> 0x18) & bVar185,
                      CONCAT16((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                               (byte)((uint)iVar114 >> 0x10) & (byte)((uint)iVar92 >> 0x10) &
                               (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar69 >> 0x10) & bVar184
                               ,CONCAT15((byte)((uint)iVar33 >> 8) & (byte)((uint)iVar53 >> 8) &
                                         (byte)((uint)iVar114 >> 8) & (byte)((uint)iVar92 >> 8) &
                                         (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar69 >> 8) &
                                         bVar183,CONCAT14((byte)iVar33 & (byte)iVar53 &
                                                          (byte)iVar114 & (byte)iVar92 &
                                                          (byte)iVar80 & (byte)iVar69 & bVar182,
                                                          iVar38))));
        auVar64[8] = (byte)iVar36 & (byte)iVar55 & (byte)iVar118 & (byte)iVar93 & (byte)iVar81 &
                     (byte)iVar70 & bVar186;
        auVar64[9] = (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar55 >> 8) &
                     (byte)((uint)iVar118 >> 8) & (byte)((uint)iVar93 >> 8) &
                     (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar70 >> 8) & bVar187;
        auVar64[10] = (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                      (byte)((uint)iVar118 >> 0x10) & (byte)((uint)iVar93 >> 0x10) &
                      (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar70 >> 0x10) & bVar188;
        auVar64[0xb] = (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                       (byte)((uint)iVar118 >> 0x18) & (byte)((uint)iVar93 >> 0x18) &
                       (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar70 >> 0x18) & bVar189;
        auVar67[0xc] = (byte)iVar5 & (byte)iVar59 & (byte)iVar120 & (byte)iVar95 & (byte)iVar83 &
                       (byte)iVar72 & bVar190;
        auVar67._0_12_ = auVar64;
        auVar67[0xd] = (byte)((uint)iVar5 >> 8) & (byte)((uint)iVar59 >> 8) &
                       (byte)((uint)iVar120 >> 8) & (byte)((uint)iVar95 >> 8) &
                       (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar72 >> 8) & bVar191;
        auVar67[0xe] = (byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                       (byte)((uint)iVar120 >> 0x10) & (byte)((uint)iVar95 >> 0x10) &
                       (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar72 >> 0x10) & bVar192;
        auVar67[0xf] = (byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar59 >> 0x18) &
                       (byte)((uint)iVar120 >> 0x18) & (byte)((uint)iVar95 >> 0x18) &
                       (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar72 >> 0x18) & bVar193;
        iVar35 = *(int *)(puVar17 + uVar20 * 4);
        uVar27 = (ulong)(uint)(CONCAT13((byte)((uint)iVar148 >> 0x18) &
                                        (byte)((uint)iVar144 >> 0x18) &
                                        (byte)((uint)iVar156 >> 0x18) &
                                        (byte)((uint)iVar164 >> 0x18) &
                                        (byte)((uint)iVar123 >> 0x18) &
                                        (byte)((uint)iVar140 >> 0x18) & bVar181,
                                        CONCAT12((byte)((uint)iVar148 >> 0x10) &
                                                 (byte)((uint)iVar144 >> 0x10) &
                                                 (byte)((uint)iVar156 >> 0x10) &
                                                 (byte)((uint)iVar164 >> 0x10) &
                                                 (byte)((uint)iVar123 >> 0x10) &
                                                 (byte)((uint)iVar140 >> 0x10) & bVar180,
                                                 CONCAT11((byte)((uint)iVar148 >> 8) &
                                                          (byte)((uint)iVar144 >> 8) &
                                                          (byte)((uint)iVar156 >> 8) &
                                                          (byte)((uint)iVar164 >> 8) &
                                                          (byte)((uint)iVar123 >> 8) &
                                                          (byte)((uint)iVar140 >> 8) & bVar179,
                                                          (byte)iVar148 & (byte)iVar144 &
                                                          (byte)iVar156 & (byte)iVar164 &
                                                          (byte)iVar123 & (byte)iVar140 & bVar178)))
                               + CONCAT13((byte)((uint)iVar150 >> 0x18) &
                                          (byte)((uint)iVar145 >> 0x18) &
                                          (byte)((uint)iVar158 >> 0x18) &
                                          (byte)((uint)iVar165 >> 0x18) &
                                          (byte)((uint)iVar127 >> 0x18) &
                                          (byte)((uint)iVar141 >> 0x18) & bVar185,
                                          CONCAT12((byte)((uint)iVar150 >> 0x10) &
                                                   (byte)((uint)iVar145 >> 0x10) &
                                                   (byte)((uint)iVar158 >> 0x10) &
                                                   (byte)((uint)iVar165 >> 0x10) &
                                                   (byte)((uint)iVar127 >> 0x10) &
                                                   (byte)((uint)iVar141 >> 0x10) & bVar184,
                                                   CONCAT11((byte)((uint)iVar150 >> 8) &
                                                            (byte)((uint)iVar145 >> 8) &
                                                            (byte)((uint)iVar158 >> 8) &
                                                            (byte)((uint)iVar165 >> 8) &
                                                            (byte)((uint)iVar127 >> 8) &
                                                            (byte)((uint)iVar141 >> 8) & bVar183,
                                                            (byte)iVar150 & (byte)iVar145 &
                                                            (byte)iVar158 & (byte)iVar165 &
                                                            (byte)iVar127 & (byte)iVar141 & bVar182)
                                                  )) +
                              CONCAT13((byte)((uint)iVar152 >> 0x18) & (byte)((uint)iVar146 >> 0x18)
                                       & (byte)((uint)iVar160 >> 0x18) &
                                       (byte)((uint)iVar166 >> 0x18) & (byte)((uint)iVar131 >> 0x18)
                                       & (byte)((uint)iVar142 >> 0x18) & bVar189,
                                       CONCAT12((byte)((uint)iVar152 >> 0x10) &
                                                (byte)((uint)iVar146 >> 0x10) &
                                                (byte)((uint)iVar160 >> 0x10) &
                                                (byte)((uint)iVar166 >> 0x10) &
                                                (byte)((uint)iVar131 >> 0x10) &
                                                (byte)((uint)iVar142 >> 0x10) & bVar188,
                                                CONCAT11((byte)((uint)iVar152 >> 8) &
                                                         (byte)((uint)iVar146 >> 8) &
                                                         (byte)((uint)iVar160 >> 8) &
                                                         (byte)((uint)iVar166 >> 8) &
                                                         (byte)((uint)iVar131 >> 8) &
                                                         (byte)((uint)iVar142 >> 8) & bVar187,
                                                         (byte)iVar152 & (byte)iVar146 &
                                                         (byte)iVar160 & (byte)iVar166 &
                                                         (byte)iVar131 & (byte)iVar142 & bVar186)))
                              + CONCAT13((byte)((uint)iVar154 >> 0x18) &
                                         (byte)((uint)iVar147 >> 0x18) &
                                         (byte)((uint)iVar162 >> 0x18) &
                                         (byte)((uint)iVar167 >> 0x18) &
                                         (byte)((uint)iVar133 >> 0x18) &
                                         (byte)((uint)iVar143 >> 0x18) & bVar193,
                                         CONCAT12((byte)((uint)iVar154 >> 0x10) &
                                                  (byte)((uint)iVar147 >> 0x10) &
                                                  (byte)((uint)iVar162 >> 0x10) &
                                                  (byte)((uint)iVar167 >> 0x10) &
                                                  (byte)((uint)iVar133 >> 0x10) &
                                                  (byte)((uint)iVar143 >> 0x10) & bVar192,
                                                  CONCAT11((byte)((uint)iVar154 >> 8) &
                                                           (byte)((uint)iVar147 >> 8) &
                                                           (byte)((uint)iVar162 >> 8) &
                                                           (byte)((uint)iVar167 >> 8) &
                                                           (byte)((uint)iVar133 >> 8) &
                                                           (byte)((uint)iVar143 >> 8) & bVar191,
                                                           (byte)iVar154 & (byte)iVar147 &
                                                           (byte)iVar162 & (byte)iVar167 &
                                                           (byte)iVar133 & (byte)iVar143 & bVar190))
                                        ));
        uVar176 = *(undefined8 *)((long)(puVar16 + uVar27 * 0x10) + 8);
        iVar33 = *(int *)(puVar17 + uVar27 * 4);
        uVar28 = (ulong)(uint)(CONCAT13((byte)((uint)iVar172 >> 0x18) &
                                        (byte)((uint)iVar168 >> 0x18) &
                                        (byte)((uint)iVar136 >> 0x18) & (byte)((uint)iVar51 >> 0x18)
                                        & (byte)((uint)iVar112 >> 0x18) &
                                        (byte)((uint)iVar125 >> 0x18) & bVar181,
                                        CONCAT12((byte)((uint)iVar172 >> 0x10) &
                                                 (byte)((uint)iVar168 >> 0x10) &
                                                 (byte)((uint)iVar136 >> 0x10) &
                                                 (byte)((uint)iVar51 >> 0x10) &
                                                 (byte)((uint)iVar112 >> 0x10) &
                                                 (byte)((uint)iVar125 >> 0x10) & bVar180,
                                                 CONCAT11((byte)((uint)iVar172 >> 8) &
                                                          (byte)((uint)iVar168 >> 8) &
                                                          (byte)((uint)iVar136 >> 8) &
                                                          (byte)((uint)iVar51 >> 8) &
                                                          (byte)((uint)iVar112 >> 8) &
                                                          (byte)((uint)iVar125 >> 8) & bVar179,
                                                          (byte)iVar172 & (byte)iVar168 &
                                                          (byte)iVar136 & (byte)iVar51 &
                                                          (byte)iVar112 & (byte)iVar125 & bVar178)))
                               + CONCAT13((byte)((uint)iVar173 >> 0x18) &
                                          (byte)((uint)iVar169 >> 0x18) &
                                          (byte)((uint)iVar137 >> 0x18) &
                                          (byte)((uint)iVar54 >> 0x18) &
                                          (byte)((uint)iVar116 >> 0x18) &
                                          (byte)((uint)iVar129 >> 0x18) & bVar185,
                                          CONCAT12((byte)((uint)iVar173 >> 0x10) &
                                                   (byte)((uint)iVar169 >> 0x10) &
                                                   (byte)((uint)iVar137 >> 0x10) &
                                                   (byte)((uint)iVar54 >> 0x10) &
                                                   (byte)((uint)iVar116 >> 0x10) &
                                                   (byte)((uint)iVar129 >> 0x10) & bVar184,
                                                   CONCAT11((byte)((uint)iVar173 >> 8) &
                                                            (byte)((uint)iVar169 >> 8) &
                                                            (byte)((uint)iVar137 >> 8) &
                                                            (byte)((uint)iVar54 >> 8) &
                                                            (byte)((uint)iVar116 >> 8) &
                                                            (byte)((uint)iVar129 >> 8) & bVar183,
                                                            (byte)iVar173 & (byte)iVar169 &
                                                            (byte)iVar137 & (byte)iVar54 &
                                                            (byte)iVar116 & (byte)iVar129 & bVar182)
                                                  )) +
                              CONCAT13((byte)((uint)iVar174 >> 0x18) & (byte)((uint)iVar170 >> 0x18)
                                       & (byte)((uint)iVar138 >> 0x18) &
                                       (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar119 >> 0x18)
                                       & (byte)((uint)iVar132 >> 0x18) & bVar189,
                                       CONCAT12((byte)((uint)iVar174 >> 0x10) &
                                                (byte)((uint)iVar170 >> 0x10) &
                                                (byte)((uint)iVar138 >> 0x10) &
                                                (byte)((uint)iVar58 >> 0x10) &
                                                (byte)((uint)iVar119 >> 0x10) &
                                                (byte)((uint)iVar132 >> 0x10) & bVar188,
                                                CONCAT11((byte)((uint)iVar174 >> 8) &
                                                         (byte)((uint)iVar170 >> 8) &
                                                         (byte)((uint)iVar138 >> 8) &
                                                         (byte)((uint)iVar58 >> 8) &
                                                         (byte)((uint)iVar119 >> 8) &
                                                         (byte)((uint)iVar132 >> 8) & bVar187,
                                                         (byte)iVar174 & (byte)iVar170 &
                                                         (byte)iVar138 & (byte)iVar58 &
                                                         (byte)iVar119 & (byte)iVar132 & bVar186)))
                              + CONCAT13((byte)((uint)iVar175 >> 0x18) &
                                         (byte)((uint)iVar171 >> 0x18) &
                                         (byte)((uint)iVar139 >> 0x18) &
                                         (byte)((uint)iVar60 >> 0x18) &
                                         (byte)((uint)iVar121 >> 0x18) &
                                         (byte)((uint)iVar134 >> 0x18) & bVar193,
                                         CONCAT12((byte)((uint)iVar175 >> 0x10) &
                                                  (byte)((uint)iVar171 >> 0x10) &
                                                  (byte)((uint)iVar139 >> 0x10) &
                                                  (byte)((uint)iVar60 >> 0x10) &
                                                  (byte)((uint)iVar121 >> 0x10) &
                                                  (byte)((uint)iVar134 >> 0x10) & bVar192,
                                                  CONCAT11((byte)((uint)iVar175 >> 8) &
                                                           (byte)((uint)iVar171 >> 8) &
                                                           (byte)((uint)iVar139 >> 8) &
                                                           (byte)((uint)iVar60 >> 8) &
                                                           (byte)((uint)iVar121 >> 8) &
                                                           (byte)((uint)iVar134 >> 8) & bVar191,
                                                           (byte)iVar175 & (byte)iVar171 &
                                                           (byte)iVar139 & (byte)iVar60 &
                                                           (byte)iVar121 & (byte)iVar134 & bVar190))
                                        ));
        auVar75 = a64_TBL(ZEXT816(0),auVar57,*(undefined1 (*) [16])(puVar16 + uVar20 * 0x10));
        local_c0[0] = iVar35;
        local_c0[1] = iVar33;
        uVar177 = *(undefined8 *)((long)(puVar16 + uVar28 * 0x10) + 8);
        iVar36 = *(int *)(puVar17 + uVar28 * 4);
        uVar20 = (ulong)(uint)(iVar38 + (int)((ulong)auVar64._0_8_ >> 0x20) +
                              auVar64._8_4_ + auVar67._12_4_);
        auVar7[9] = (char)((ulong)uVar176 >> 8);
        auVar7._0_9_ = *(unkbyte9 *)(puVar16 + uVar27 * 0x10);
        auVar7[10] = (char)((ulong)uVar176 >> 0x10);
        auVar7[0xb] = (char)((ulong)uVar176 >> 0x18);
        auVar7[0xc] = (char)((ulong)uVar176 >> 0x20);
        auVar7[0xd] = (char)((ulong)uVar176 >> 0x28);
        auVar7[0xe] = (char)((ulong)uVar176 >> 0x30);
        auVar7[0xf] = (char)((ulong)uVar176 >> 0x38);
        auVar65 = a64_TBL(ZEXT816(0),auVar57,auVar7);
        uVar176 = *(undefined8 *)((long)(puVar16 + uVar20 * 0x10) + 8);
        auVar9[9] = (char)((ulong)uVar177 >> 8);
        auVar9._0_9_ = *(unkbyte9 *)(puVar16 + uVar28 * 0x10);
        auVar9[10] = (char)((ulong)uVar177 >> 0x10);
        auVar9[0xb] = (char)((ulong)uVar177 >> 0x18);
        auVar9[0xc] = (char)((ulong)uVar177 >> 0x20);
        auVar9[0xd] = (char)((ulong)uVar177 >> 0x28);
        auVar9[0xe] = (char)((ulong)uVar177 >> 0x30);
        auVar9[0xf] = (char)((ulong)uVar177 >> 0x38);
        auVar68 = a64_TBL(ZEXT816(0),auVar57,auVar9);
        auVar3[9] = (char)((ulong)uVar176 >> 8);
        auVar3._0_9_ = *(unkbyte9 *)(puVar16 + uVar20 * 0x10);
        auVar3[10] = (char)((ulong)uVar176 >> 0x10);
        auVar3[0xb] = (char)((ulong)uVar176 >> 0x18);
        auVar3[0xc] = (char)((ulong)uVar176 >> 0x20);
        auVar3[0xd] = (char)((ulong)uVar176 >> 0x28);
        auVar3[0xe] = (char)((ulong)uVar176 >> 0x30);
        auVar3[0xf] = (char)((ulong)uVar176 >> 0x38);
        auVar57 = a64_TBL(ZEXT816(0),auVar57,auVar3);
        iVar5 = *(int *)(puVar17 + uVar20 * 4);
        local_c0[2] = iVar36;
        local_c0[3] = iVar5;
        uVar94 = auVar75._8_8_;
        local_b0[1] = uVar94;
        uVar85 = auVar75._0_8_;
        local_b0[0] = uVar85;
        uVar82 = auVar65._8_8_;
        local_b0[3] = uVar82;
        uVar74 = auVar65._0_8_;
        local_b0[2] = uVar74;
        uVar71 = auVar68._8_8_;
        local_b0[5] = uVar71;
        uVar62 = auVar68._0_8_;
        local_b0[4] = uVar62;
        uVar177 = auVar57._8_8_;
        local_b0[7] = uVar177;
        uVar176 = auVar57._0_8_;
        local_b0[6] = uVar176;
        uVar37 = auVar43._0_4_;
        uVar50 = auVar43._4_4_;
        uVar52 = auVar43._8_4_;
        auVar47._12_4_ = auVar43._12_4_;
        uVar96 = auVar43[0];
        uVar97 = auVar43[1];
        uVar98 = auVar43[2];
        uVar99 = auVar43[3];
        if ((*(byte *)(puVar21 + 0xe) & *(byte *)(puVar32 + 0xe)) == 0) {
          if (*(byte *)(puVar21 + 0xe) == 0 && *(byte *)(puVar32 + 0xe) == 0) {
            *(ulong *)(piVar22 + 1) =
                 CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,uVar37))));
            *(ulong *)local_8e0 =
                 CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,uVar37))));
            local_8e0 = local_8e0 + iVar35;
            *(undefined8 *)(piVar23 + 1) = uVar94;
            *(undefined8 *)local_cf0 = uVar85;
            local_cf0 = local_cf0 + iVar35;
            auVar91._0_8_ = CONCAT44(uVar50,uVar50);
            auVar91._8_4_ = uVar50;
            auVar91._12_4_ = uVar50;
            *(long *)(local_8e0 + 2) = auVar91._8_8_;
            *(undefined8 *)local_8e0 = auVar91._0_8_;
            local_8e0 = local_8e0 + iVar33;
            *(undefined8 *)(local_cf0 + 2) = uVar82;
            *(undefined8 *)local_cf0 = uVar74;
            local_cf0 = local_cf0 + iVar33;
            auVar79._0_8_ = CONCAT44(uVar52,uVar52);
            auVar79._8_4_ = uVar52;
            auVar79._12_4_ = uVar52;
            auVar49._0_8_ = CONCAT44(auVar47._12_4_,auVar47._12_4_);
            auVar49._8_4_ = auVar47._12_4_;
            auVar49._12_4_ = auVar47._12_4_;
            *(long *)(local_8e0 + 2) = auVar79._8_8_;
            *(undefined8 *)local_8e0 = auVar79._0_8_;
            local_8e0 = local_8e0 + iVar36;
            *(undefined8 *)(local_cf0 + 2) = uVar71;
            *(undefined8 *)local_cf0 = uVar62;
            local_cf0 = local_cf0 + iVar36;
            *(long *)(local_8e0 + 2) = auVar49._8_8_;
            *(undefined8 *)local_8e0 = auVar49._0_8_;
            local_8e0 = local_8e0 + iVar5;
            *(undefined8 *)(local_cf0 + 2) = uVar177;
            *(undefined8 *)local_cf0 = uVar176;
            local_cf0 = local_cf0 + iVar5;
          }
          else {
            lVar34 = 0;
            piVar23 = local_8e0;
            while( true ) {
              local_8e0 = piVar23;
              if (iVar35 != 0) {
                uVar176 = local_b0[lVar34 * 2];
                iVar33 = (int)lVar34;
                *(undefined8 *)(piVar23 + 2) = local_b0[lVar34 * 2 + 1];
                *(undefined8 *)piVar23 = uVar176;
                if (iVar33 == 2) {
                  uVar24 = *(undefined4 *)(puVar32 + 1);
                  uVar96 = *(undefined1 *)(puVar32 + 3);
                  uVar97 = *(undefined1 *)((long)puVar32 + 0x19);
                  uVar98 = *(undefined1 *)((long)puVar32 + 0x1a);
                  uVar99 = *(undefined1 *)((long)puVar32 + 0x1b);
                  auVar105._4_4_ = uVar24;
                  auVar105._0_4_ = uVar24;
                  auVar105._8_4_ = uVar24;
                  auVar105._12_4_ = uVar24;
                  uVar106 = *(undefined1 *)(puVar32 + 5);
                  uVar107 = *(undefined1 *)((long)puVar32 + 0x29);
                  uVar108 = *(undefined1 *)((long)puVar32 + 0x2a);
                  uVar109 = *(undefined1 *)((long)puVar32 + 0x2b);
                  fVar128 = *(float *)(puVar32 + 7);
                  fVar122 = *(float *)(puVar32 + 9);
                  fVar130 = *(float *)(puVar32 + 0xb);
                  uVar24 = uVar52;
                }
                else if (iVar33 == 1) {
                  uVar24 = *(undefined4 *)((long)puVar32 + 4);
                  uVar96 = *(undefined1 *)((long)puVar32 + 0x14);
                  uVar97 = *(undefined1 *)((long)puVar32 + 0x15);
                  uVar98 = *(undefined1 *)((long)puVar32 + 0x16);
                  uVar99 = *(undefined1 *)((long)puVar32 + 0x17);
                  auVar105._4_4_ = uVar24;
                  auVar105._0_4_ = uVar24;
                  auVar105._8_4_ = uVar24;
                  auVar105._12_4_ = uVar24;
                  uVar106 = *(undefined1 *)((long)puVar32 + 0x24);
                  uVar107 = *(undefined1 *)((long)puVar32 + 0x25);
                  uVar108 = *(undefined1 *)((long)puVar32 + 0x26);
                  uVar109 = *(undefined1 *)((long)puVar32 + 0x27);
                  fVar128 = *(float *)((long)puVar32 + 0x34);
                  fVar122 = *(float *)((long)puVar32 + 0x44);
                  fVar130 = *(float *)((long)puVar32 + 0x54);
                  uVar24 = uVar50;
                }
                else if (iVar33 == 0) {
                  uVar24 = *(undefined4 *)puVar32;
                  uVar96 = *(undefined1 *)(puVar32 + 2);
                  uVar97 = *(undefined1 *)((long)puVar32 + 0x11);
                  uVar98 = *(undefined1 *)((long)puVar32 + 0x12);
                  uVar99 = *(undefined1 *)((long)puVar32 + 0x13);
                  auVar105._4_4_ = uVar24;
                  auVar105._0_4_ = uVar24;
                  auVar105._8_4_ = uVar24;
                  auVar105._12_4_ = uVar24;
                  uVar106 = *(undefined1 *)(puVar32 + 4);
                  uVar107 = *(undefined1 *)((long)puVar32 + 0x21);
                  uVar108 = *(undefined1 *)((long)puVar32 + 0x22);
                  uVar109 = *(undefined1 *)((long)puVar32 + 0x23);
                  fVar128 = *(float *)(puVar32 + 6);
                  fVar122 = *(float *)(puVar32 + 8);
                  fVar130 = *(float *)(puVar32 + 10);
                  uVar24 = uVar37;
                }
                else {
                  uVar24 = *(undefined4 *)((long)puVar32 + 0xc);
                  uVar96 = *(undefined1 *)((long)puVar32 + 0x1c);
                  uVar97 = *(undefined1 *)((long)puVar32 + 0x1d);
                  uVar98 = *(undefined1 *)((long)puVar32 + 0x1e);
                  uVar99 = *(undefined1 *)((long)puVar32 + 0x1f);
                  auVar105._4_4_ = uVar24;
                  auVar105._0_4_ = uVar24;
                  auVar105._8_4_ = uVar24;
                  auVar105._12_4_ = uVar24;
                  uVar106 = *(undefined1 *)((long)puVar32 + 0x2c);
                  uVar107 = *(undefined1 *)((long)puVar32 + 0x2d);
                  uVar108 = *(undefined1 *)((long)puVar32 + 0x2e);
                  uVar109 = *(undefined1 *)((long)puVar32 + 0x2f);
                  fVar128 = *(float *)((long)puVar32 + 0x3c);
                  fVar122 = *(float *)((long)puVar32 + 0x4c);
                  fVar130 = *(float *)((long)puVar32 + 0x5c);
                  uVar24 = auVar47._12_4_;
                }
                piVar22 = piVar23 + iVar35;
                do {
                  local_8e0 = piVar22 + -1;
                  pfVar1 = (float *)(lVar19 + (ulong)(uint)piVar22[-1] * 0x80);
                  iVar38 = -(uint)(auVar105._0_4_ <= pfVar1[4]);
                  iVar51 = -(uint)(auVar105._4_4_ <= pfVar1[5]);
                  iVar53 = -(uint)(auVar105._8_4_ <= pfVar1[6]);
                  iVar54 = -(uint)(auVar105._12_4_ <= pfVar1[7]);
                  iVar55 = -(uint)(*pfVar1 <=
                                  (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96))));
                  iVar58 = -(uint)(pfVar1[1] <=
                                  (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96))));
                  iVar59 = -(uint)(pfVar1[2] <=
                                  (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96))));
                  iVar60 = -(uint)(pfVar1[3] <=
                                  (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96))));
                  iVar61 = -(uint)((float)CONCAT13(uVar109,CONCAT12(uVar108,CONCAT11(uVar107,uVar106
                                                                                    ))) <=
                                  pfVar1[0xc]);
                  iVar69 = -(uint)((float)CONCAT13(uVar109,CONCAT12(uVar108,CONCAT11(uVar107,uVar106
                                                                                    ))) <=
                                  pfVar1[0xd]);
                  iVar70 = -(uint)((float)CONCAT13(uVar109,CONCAT12(uVar108,CONCAT11(uVar107,uVar106
                                                                                    ))) <=
                                  pfVar1[0xe]);
                  iVar72 = -(uint)((float)CONCAT13(uVar109,CONCAT12(uVar108,CONCAT11(uVar107,uVar106
                                                                                    ))) <=
                                  pfVar1[0xf]);
                  iVar73 = -(uint)(pfVar1[8] <= fVar128);
                  iVar80 = -(uint)(pfVar1[9] <= fVar128);
                  iVar81 = -(uint)(pfVar1[10] <= fVar128);
                  iVar83 = -(uint)(pfVar1[0xb] <= fVar128);
                  iVar84 = -(uint)(fVar122 <= pfVar1[0x14]);
                  iVar92 = -(uint)(fVar122 <= pfVar1[0x15]);
                  iVar93 = -(uint)(fVar122 <= pfVar1[0x16]);
                  iVar95 = -(uint)(fVar122 <= pfVar1[0x17]);
                  iVar35 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x10) <= fVar130);
                  iVar33 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) <= fVar130
                                  );
                  iVar36 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x12) <= fVar130);
                  iVar5 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) <= fVar130)
                  ;
                  iVar35 = CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                                    (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar73 >> 0x18) &
                                    (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                                    bVar181,CONCAT12((byte)((uint)iVar55 >> 0x10) &
                                                     (byte)((uint)iVar38 >> 0x10) &
                                                     (byte)((uint)iVar61 >> 0x10) &
                                                     (byte)((uint)iVar73 >> 0x10) &
                                                     (byte)((uint)iVar84 >> 0x10) &
                                                     (byte)((uint)iVar35 >> 0x10) & bVar180,
                                                     CONCAT11((byte)((uint)iVar55 >> 8) &
                                                              (byte)((uint)iVar38 >> 8) &
                                                              (byte)((uint)iVar61 >> 8) &
                                                              (byte)((uint)iVar73 >> 8) &
                                                              (byte)((uint)iVar84 >> 8) &
                                                              (byte)((uint)iVar35 >> 8) & bVar179,
                                                              (byte)iVar55 & (byte)iVar38 &
                                                              (byte)iVar61 & (byte)iVar73 &
                                                              (byte)iVar84 & (byte)iVar35 & bVar178)
                                                    ));
                  auVar42._0_8_ =
                       CONCAT17((byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar51 >> 0x18) &
                                (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar80 >> 0x18) &
                                (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                                bVar185,CONCAT16((byte)((uint)iVar58 >> 0x10) &
                                                 (byte)((uint)iVar51 >> 0x10) &
                                                 (byte)((uint)iVar69 >> 0x10) &
                                                 (byte)((uint)iVar80 >> 0x10) &
                                                 (byte)((uint)iVar92 >> 0x10) &
                                                 (byte)((uint)iVar33 >> 0x10) & bVar184,
                                                 CONCAT15((byte)((uint)iVar58 >> 8) &
                                                          (byte)((uint)iVar51 >> 8) &
                                                          (byte)((uint)iVar69 >> 8) &
                                                          (byte)((uint)iVar80 >> 8) &
                                                          (byte)((uint)iVar92 >> 8) &
                                                          (byte)((uint)iVar33 >> 8) & bVar183,
                                                          CONCAT14((byte)iVar58 & (byte)iVar51 &
                                                                   (byte)iVar69 & (byte)iVar80 &
                                                                   (byte)iVar92 & (byte)iVar33 &
                                                                   bVar182,iVar35))));
                  auVar42[8] = (byte)iVar59 & (byte)iVar53 & (byte)iVar70 & (byte)iVar81 &
                               (byte)iVar93 & (byte)iVar36 & bVar186;
                  auVar42[9] = (byte)((uint)iVar59 >> 8) & (byte)((uint)iVar53 >> 8) &
                               (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar81 >> 8) &
                               (byte)((uint)iVar93 >> 8) & (byte)((uint)iVar36 >> 8) & bVar187;
                  auVar42[10] = (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                                (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar81 >> 0x10) &
                                (byte)((uint)iVar93 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                                bVar188;
                  auVar42[0xb] = (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                                 (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar81 >> 0x18) &
                                 (byte)((uint)iVar93 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                                 bVar189;
                  auVar48[0xc] = (byte)iVar60 & (byte)iVar54 & (byte)iVar72 & (byte)iVar83 &
                                 (byte)iVar95 & (byte)iVar5 & bVar190;
                  auVar48._0_12_ = auVar42;
                  auVar48[0xd] = (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar54 >> 8) &
                                 (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar83 >> 8) &
                                 (byte)((uint)iVar95 >> 8) & (byte)((uint)iVar5 >> 8) & bVar191;
                  auVar48[0xe] = (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar54 >> 0x10) &
                                 (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar83 >> 0x10) &
                                 (byte)((uint)iVar95 >> 0x10) & (byte)((uint)iVar5 >> 0x10) &
                                 bVar192;
                  auVar48[0xf] = (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar54 >> 0x18) &
                                 (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar83 >> 0x18) &
                                 (byte)((uint)iVar95 >> 0x18) & (byte)((uint)iVar5 >> 0x18) &
                                 bVar193;
                  uVar20 = (ulong)(uint)(iVar35 + (int)((ulong)auVar42._0_8_ >> 0x20) +
                                        auVar42._8_4_ + auVar48._12_4_);
                  iVar35 = *(int *)(puVar17 + uVar20 * 4);
                  auVar57 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                                    *(undefined1 (*) [16])(puVar16 + uVar20 * 0x10));
                  if (*(char *)(pfVar1 + 0x1c) == '\0') {
                    *(long *)(piVar22 + 1) = auVar57._8_8_;
                    *(long *)local_8e0 = auVar57._0_8_;
                    local_8e0 = local_8e0 + iVar35;
                  }
                  else {
                    lVar30 = (long)(int)local_c8;
                    *(ulong *)((long)auStack_8d0 + lVar30 * 4 + 8) = CONCAT44(uVar24,uVar24);
                    *(ulong *)((long)auStack_8d0 + lVar30 * 4) = CONCAT44(uVar24,uVar24);
                    lVar30 = (long)(int)local_c8;
                    *(long *)((long)auStack_4d0 + lVar30 * 4 + 8) = auVar57._8_8_;
                    *(long *)((long)auStack_4d0 + lVar30 * 4) = auVar57._0_8_;
                    local_c8 = local_c8 + iVar35;
                    if (0xbf < (int)local_c8) {
                      (**(code **)(*local_d0 + 0x10))(local_d0,auStack_8d0,auStack_4d0);
                      local_c8 = 0;
                    }
                  }
                  piVar22 = local_8e0;
                } while (piVar23 != local_8e0);
              }
              lVar34 = lVar34 + 1;
              if (lVar34 == 4) break;
              iVar35 = local_c0[lVar34];
              piVar23 = local_8e0;
            }
          }
        }
        else {
          lVar19 = (long)(int)local_c8;
          *(ulong *)((long)auStack_8d0 + lVar19 * 4 + 8) =
               CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,uVar37))));
          *(ulong *)((long)auStack_8d0 + lVar19 * 4) =
               CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,uVar37))));
          lVar19 = (long)(int)local_c8;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4 + 8) = uVar94;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4) = uVar85;
          auVar90._0_8_ = CONCAT44(uVar50,uVar50);
          auVar90._8_4_ = uVar50;
          auVar90._12_4_ = uVar50;
          local_c8 = local_c8 + iVar35;
          uVar20 = -(ulong)(local_c8 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_c8 << 2;
          *(long *)((long)auStack_8d0 + uVar20 + 8) = auVar90._8_8_;
          *(undefined8 *)((long)auStack_8d0 + uVar20) = auVar90._0_8_;
          lVar19 = (long)(int)local_c8;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4 + 8) = uVar82;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4) = uVar74;
          auVar78._0_8_ = CONCAT44(uVar52,uVar52);
          auVar78._8_4_ = uVar52;
          auVar78._12_4_ = uVar52;
          auVar47._0_8_ = CONCAT44(auVar47._12_4_,auVar47._12_4_);
          auVar47._8_4_ = auVar47._12_4_;
          local_c8 = local_c8 + iVar33;
          uVar20 = -(ulong)(local_c8 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_c8 << 2;
          *(long *)((long)auStack_8d0 + uVar20 + 8) = auVar78._8_8_;
          *(undefined8 *)((long)auStack_8d0 + uVar20) = auVar78._0_8_;
          lVar19 = (long)(int)local_c8;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4 + 8) = uVar71;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4) = uVar62;
          local_c8 = local_c8 + iVar36;
          uVar20 = -(ulong)(local_c8 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_c8 << 2;
          *(long *)((long)auStack_8d0 + uVar20 + 8) = auVar47._8_8_;
          *(undefined8 *)((long)auStack_8d0 + uVar20) = auVar47._0_8_;
          lVar19 = (long)(int)local_c8;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4 + 8) = uVar177;
          *(undefined8 *)((long)auStack_4d0 + lVar19 * 4) = uVar176;
          local_c8 = local_c8 + iVar5;
        }
        uVar18 = local_c8;
        if (0xbf < (int)local_c8) {
          (**(code **)(*local_d0 + 0x10))(local_d0,auStack_8d0,auStack_4d0);
          uVar18 = 0;
          local_c8 = 0;
        }
      }
      if (aiStack_ce0 == local_8e0) break;
      piVar23 = local_cf0;
      piVar22 = local_8e0;
    }
  }
  if (0 < (int)uVar18) {
    (**(code **)(*local_d0 + 0x10))(local_d0,auStack_8d0,auStack_4d0);
  }
  return;
}


