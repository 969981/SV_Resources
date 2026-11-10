/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0305c53c; name: FUN_0305c53c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0305c53c(long param_1,int *param_2,undefined8 *param_3,uint *param_4,long param_5,float *param_6
            ,float *param_7,int *param_8,char *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  long lVar17;
  undefined1 (*pauVar18) [16];
  long lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined4 uVar22;
  undefined1 auVar23 [12];
  byte bVar38;
  byte bVar39;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar24 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [12];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar53;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar67;
  float fVar68;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [12];
  float fVar72;
  undefined8 uVar73;
  undefined1 auVar74 [12];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar75 [12];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [12];
  float fVar89;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar82 [12];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar112;
  ulong uVar103;
  undefined1 auVar104 [12];
  undefined1 auVar105 [12];
  float fVar111;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar116;
  float fVar122;
  float fVar124;
  float fVar126;
  undefined1 auVar117 [16];
  byte bVar121;
  byte bVar123;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined8 uVar125;
  undefined1 auVar120 [16];
  float fVar127;
  undefined1 auVar128 [12];
  float fVar134;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar135;
  float fVar136;
  undefined1 auVar137 [12];
  byte bVar145;
  float fVar143;
  byte bVar146;
  float fVar144;
  float fVar147;
  float fVar148;
  undefined1 auVar138 [16];
  float fVar149;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  float fVar150;
  undefined1 auVar151 [12];
  undefined1 auVar152 [12];
  float fVar158;
  undefined1 auVar153 [16];
  float fVar159;
  float fVar160;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  int iVar161;
  int iVar163;
  int iVar164;
  int iVar165;
  undefined1 auVar162 [16];
  float fVar166;
  float fVar168;
  float fVar169;
  undefined1 auVar167 [16];
  float fVar170;
  undefined1 auVar171 [12];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  puVar10 = PTR_DAT_047d19e0;
  lVar19 = *(long *)(param_1 + 0x18);
  pauVar18 = (undefined1 (*) [16])(lVar19 + (long)*(int *)(param_1 + 0x20) * 0x90);
  pauVar16 = (undefined1 (*) [16])(lVar19 + (long)param_2[1] * 0x90);
  if (pauVar18 <= pauVar16) {
    pauVar16 = pauVar18;
  }
  if (*(int *)(param_1 + 0x20) <= param_2[1]) {
    return 4;
  }
  pauVar21 = pauVar16 + 2;
  fVar91 = (float)*(undefined8 *)(pauVar16[2] + 8);
  fVar92 = (float)((ulong)*(undefined8 *)(pauVar16[2] + 8) >> 0x20);
  auVar56 = *pauVar21;
  fVar53 = (float)*(undefined8 *)*pauVar21;
  fVar90 = (float)((ulong)*(undefined8 *)*pauVar21 >> 0x20);
  uVar11 = *param_4;
  if (uVar11 == 0xffffffff) {
    if (*(uint *)pauVar16[7] == 0xffffffff) goto LAB_0305c6e8;
    lVar14 = *(long *)(*(long *)(param_5 + 0x38) + ((ulong)(*(uint *)pauVar16[7] >> 0xe) & 0x3ff00))
    ;
    auVar74 = SUB1612(*(undefined1 (*) [16])(lVar14 + 0x70),0);
    auVar71 = SUB1612(*(undefined1 (*) [16])(lVar14 + 0x60),0);
    local_d0 = *(float *)(lVar14 + 0x80);
    fStack_cc = *(float *)(lVar14 + 0x84);
    fStack_c8 = *(float *)(lVar14 + 0x88);
    local_c0 = *(float *)(lVar14 + 0x90);
    fStack_bc = *(float *)(lVar14 + 0x94);
    fStack_b8 = *(float *)(lVar14 + 0x98);
  }
  else {
    lVar14 = *(long *)(*(long *)(param_5 + 0x38) + (long)(int)uVar11 * 0x100);
    if (lVar14 == 0) {
      return 2;
    }
    uVar12 = *(uint *)pauVar16[7] >> 0x16;
    if (uVar11 == uVar12) {
LAB_0305c6e8:
      auVar76._8_8_ = DAT_03cab628;
      auVar76._0_8_ = DAT_03cab620;
      auVar106._8_8_ = _UNK_03cabe68;
      auVar106._0_8_ = _DAT_03cabe60;
      local_c0 = _DAT_03cabe50;
      fStack_bc = _UNK_03cabe54;
      fStack_b8 = _UNK_03cabe58;
      fStack_b4 = _UNK_03cabe5c;
      local_d0 = _DAT_03caa5b0;
      fStack_cc = _UNK_03caa5b4;
      fStack_c8 = _UNK_03caa5b8;
      fStack_c4 = _UNK_03caa5bc;
      goto LAB_0305c710;
    }
    lVar17 = *(long *)(*(long *)(param_5 + 0x38) + (ulong)uVar12 * 0x100);
    if (lVar17 == 0) {
      return 3;
    }
    auVar76 = *(undefined1 (*) [16])(lVar14 + 0x60);
    auVar106 = *(undefined1 (*) [16])(lVar14 + 0x70);
    auVar61 = NEON_ext(auVar106,auVar106,8,1);
    auVar54 = NEON_ext(auVar76,auVar76,8,1);
    fVar99 = auVar54._0_4_;
    fVar169 = auVar61._0_4_;
    auVar54 = *(undefined1 (*) [16])(lVar14 + 0x80);
    auVar61 = NEON_ext(auVar54,auVar54,8,1);
    fVar102 = auVar54._4_4_;
    fVar166 = auVar76._0_4_;
    fVar170 = auVar106._0_4_;
    fVar168 = auVar76._4_4_;
    fVar89 = auVar106._4_4_;
    fVar135 = *(float *)(lVar17 + 0x80);
    fVar143 = *(float *)(lVar17 + 0x84);
    fVar136 = *(float *)(lVar17 + 0x88);
    fVar60 = *(float *)(lVar17 + 0x90) - *(float *)(lVar14 + 0x90);
    fVar67 = *(float *)(lVar17 + 0x94) - *(float *)(lVar14 + 0x94);
    fVar68 = *(float *)(lVar17 + 0x98) - *(float *)(lVar14 + 0x98);
    fVar112 = auVar54._0_4_;
    fVar100 = *(float *)(lVar17 + 0x60);
    fVar144 = *(float *)(lVar17 + 100);
    fVar147 = *(float *)(lVar17 + 0x68);
    fVar148 = *(float *)(lVar17 + 0x70);
    fVar97 = *(float *)(lVar17 + 0x74);
    fVar98 = *(float *)(lVar17 + 0x78);
    fVar72 = auVar61._0_4_;
    auVar71._0_4_ = fVar99 * fVar147 + fVar166 * fVar100 + fVar168 * fVar144;
    auVar71._4_4_ = fVar169 * fVar147 + fVar170 * fVar100 + fVar89 * fVar144;
    auVar71._8_4_ = fVar72 * fVar147 + fVar112 * fVar100 + fVar102 * fVar144;
    auVar74._0_4_ = fVar99 * fVar98 + fVar166 * fVar148 + fVar168 * fVar97;
    auVar74._4_4_ = fVar169 * fVar98 + fVar170 * fVar148 + fVar89 * fVar97;
    auVar74._8_4_ = fVar72 * fVar98 + fVar112 * fVar148 + fVar102 * fVar97;
    local_d0 = fVar99 * fVar136 + fVar166 * fVar135 + fVar168 * fVar143;
    fStack_cc = fVar169 * fVar136 + fVar170 * fVar135 + fVar89 * fVar143;
    fStack_c8 = fVar72 * fVar136 + fVar112 * fVar135 + fVar102 * fVar143;
    local_c0 = fVar99 * fVar68 + fVar166 * fVar60 + fVar168 * fVar67;
    fStack_bc = fVar169 * fVar68 + fVar170 * fVar60 + fVar89 * fVar67;
    fStack_b8 = fVar72 * fVar68 + fVar112 * fVar60 + fVar102 * fVar67;
  }
  auVar106._12_4_ = 0.0;
  auVar106._0_12_ = auVar74;
  auVar76._12_4_ = 0.0;
  auVar76._0_12_ = auVar71;
  fStack_b4 = 1.0;
  fStack_c4 = 0.0;
LAB_0305c710:
  auVar54._12_4_ = fVar92;
  auVar54._0_12_ = *(undefined1 (*) [12])*pauVar21;
  auVar61._12_4_ = fVar92;
  auVar61._0_12_ = *(undefined1 (*) [12])*pauVar21;
  auVar54 = NEON_ext(auVar54,auVar61,4,1);
  auVar61 = NEON_fmov(0x3f800000,4);
  do {
    pauVar20 = pauVar16;
    auVar167 = *pauVar20;
    fVar135 = *(float *)pauVar20[1];
    fVar143 = *(float *)(pauVar20[1] + 4);
    fVar136 = *(float *)(pauVar20[1] + 8);
    fVar100 = *(float *)(pauVar20[1] + 0xc);
    fVar166 = auVar76._0_4_;
    fVar168 = auVar76._4_4_;
    fVar169 = auVar76._8_4_;
    fVar170 = auVar76._12_4_;
    fVar89 = auVar106._0_4_;
    fVar60 = auVar106._4_4_;
    fVar68 = auVar106._8_4_;
    fVar102 = auVar106._12_4_;
    fVar180 = (float)*(undefined8 *)(pauVar20[6] + 8);
    fVar149 = (float)*(undefined8 *)pauVar20[6];
    fVar177 = (float)((ulong)*(undefined8 *)pauVar20[6] >> 0x20);
    fVar144 = auVar167._0_4_;
    fVar147 = auVar167._4_4_;
    fVar150 = (float)*(undefined8 *)pauVar20[5];
    fVar148 = auVar167._8_4_;
    fVar158 = (float)((ulong)*(undefined8 *)pauVar20[5] >> 0x20);
    auVar29._0_4_ = local_d0 * fVar148 + fVar89 * fVar147 + local_c0 + fVar166 * fVar144;
    auVar29._4_4_ = fStack_cc * fVar148 + fVar60 * fVar147 + fStack_bc + fVar168 * fVar144;
    auVar29._8_4_ = fStack_c8 * fVar148 + fVar68 * fVar147 + fStack_b8 + fVar169 * fVar144;
    fVar112 = auVar167._12_4_;
    fVar97 = local_d0 * fVar136 + fVar89 * fVar143 + local_c0 + fVar166 * fVar135;
    fVar98 = fStack_cc * fVar136 + fVar60 * fVar143 + fStack_bc + fVar168 * fVar135;
    fVar99 = fStack_c8 * fVar136 + fVar68 * fVar143 + fStack_b8 + fVar169 * fVar135;
    auVar29._12_4_ = fVar112;
    fVar135 = *(float *)pauVar20[3];
    fVar143 = *(float *)(pauVar20[3] + 4);
    fVar136 = *(float *)(pauVar20[3] + 8);
    fVar144 = *(float *)pauVar20[4];
    fVar147 = *(float *)(pauVar20[4] + 4);
    fVar148 = *(float *)(pauVar20[4] + 8);
    fVar93 = (float)*param_3;
    auVar69._0_4_ = auVar29._0_4_ - fVar93;
    fVar94 = (float)((ulong)*param_3 >> 0x20);
    auVar69._4_4_ = auVar29._4_4_ - fVar94;
    fVar95 = (float)param_3[1];
    auVar69._8_4_ = auVar29._8_4_ - fVar95;
    fVar96 = (float)((ulong)param_3[1] >> 0x20);
    auVar69._12_4_ = fVar112 - fVar96;
    auVar142._0_4_ = fVar97 - fVar93;
    auVar142._4_4_ = fVar98 - fVar94;
    auVar142._8_4_ = fVar99 - fVar95;
    auVar142._12_4_ = fVar100 - fVar96;
    fVar72 = fVar53 * auVar69._0_4_ + fVar90 * auVar69._4_4_ + fVar91 * auVar69._8_4_;
    fVar67 = fVar53 * auVar69._0_4_ + fVar90 * auVar69._4_4_ + fVar91 * auVar69._8_4_;
    fVar159 = (float)*(undefined8 *)(pauVar20[5] + 8);
    fVar176 = local_d0 * fVar180;
    fVar178 = fStack_cc * fVar180;
    fVar179 = fStack_c8 * fVar180;
    fVar180 = fStack_c4 * fVar180;
    fVar101 = fVar53 * auVar142._0_4_ + fVar90 * auVar142._4_4_ + fVar91 * auVar142._8_4_;
    fVar111 = fVar53 * auVar142._0_4_ + fVar90 * auVar142._4_4_ + fVar91 * auVar142._8_4_;
    fVar116 = auVar69._0_4_ - fVar53 * fVar72;
    fVar122 = auVar69._4_4_ - fVar90 * fVar67;
    fVar124 = auVar69._8_4_ - fVar91 * fVar72;
    fVar126 = auVar69._12_4_ - fVar92 * fVar67;
    fVar127 = auVar142._0_4_ - fVar53 * fVar101;
    fVar134 = auVar142._4_4_ - fVar90 * fVar111;
    fVar101 = auVar142._8_4_ - fVar91 * fVar101;
    fVar111 = auVar142._12_4_ - fVar92 * fVar111;
    auVar172._0_4_ = fVar116 * fVar116;
    auVar172._4_4_ = fVar122 * fVar122;
    auVar172._8_4_ = fVar124 * fVar124;
    auVar172._12_4_ = fVar126 * fVar126;
    auVar173._0_4_ = fVar127 * fVar127;
    auVar173._4_4_ = fVar134 * fVar134;
    auVar173._8_4_ = fVar101 * fVar101;
    auVar173._12_4_ = fVar111 * fVar111;
    auVar76 = NEON_ext(auVar172,auVar172,8,1);
    auVar106 = NEON_ext(auVar173,auVar173,8,1);
    fVar72 = auVar172._0_4_ + auVar172._4_4_ + auVar76._0_4_;
    fVar67 = auVar173._0_4_ + auVar173._4_4_ + auVar106._0_4_;
    auVar76._0_8_ =
         CONCAT44(fStack_cc * fVar136 + fVar168 * fVar135 + fVar60 * fVar143,
                  local_d0 * fVar136 + fVar166 * fVar135 + fVar89 * fVar143);
    auVar76._8_4_ = fStack_c8 * fVar136 + fVar169 * fVar135 + fVar68 * fVar143;
    auVar76._12_4_ = fStack_c4 * fVar136 + fVar170 * fVar135 + fVar102 * fVar143;
    fVar135 = fVar112 * fVar112;
    fVar143 = fVar100 * fVar100;
    auVar106._0_8_ =
         CONCAT44(fStack_cc * fVar148 + fVar168 * fVar144 + fVar60 * fVar147,
                  local_d0 * fVar148 + fVar166 * fVar144 + fVar89 * fVar147);
    auVar106._8_4_ = fStack_c8 * fVar148 + fVar169 * fVar144 + fVar68 * fVar147;
    auVar106._12_4_ = fStack_c4 * fVar148 + fVar170 * fVar144 + fVar102 * fVar147;
    bVar38 = (byte)((uint)fVar135 >> 8);
    bVar39 = (byte)((uint)fVar135 >> 0x10);
    bVar121 = (byte)((uint)fVar135 >> 0x18);
    bVar123 = (byte)((uint)fVar143 >> 8);
    bVar145 = (byte)((uint)fVar143 >> 0x10);
    bVar146 = (byte)((uint)fVar143 >> 0x18);
    fVar136 = fVar72 - fVar135;
    fVar144 = fVar67 - fVar143;
    fVar147 = fVar72 - fVar135;
    fVar148 = fVar67 - fVar143;
    local_d0 = local_d0 * fVar159 + fVar166 * fVar150 + fVar89 * fVar158;
    fStack_cc = fStack_cc * fVar159 + fVar168 * fVar150 + fVar60 * fVar158;
    fStack_c8 = fStack_c8 * fVar159 + fVar169 * fVar150 + fVar68 * fVar158;
    fStack_c4 = fStack_c4 * fVar159 + fVar170 * fVar150 + fVar102 * fVar158;
    local_100 = (uint)_DAT_03caa780;
    uStack_fc = (uint)((ulong)_DAT_03caa780 >> 0x20);
    uStack_f8 = (uint)_UNK_03caa788;
    uStack_f4 = (uint)((ulong)_UNK_03caa788 >> 0x20);
    iVar161 = -(uint)(fVar72 <= 0.0);
    iVar163 = -(uint)(fVar67 <= 0.0);
    iVar164 = -(uint)(fVar72 <= 0.0);
    iVar165 = -(uint)(fVar67 <= 0.0);
    fVar150 = (float)CONCAT13((byte)((uint)fVar136 >> 0x18) & ~PTR_DAT_047d19e0[0x33] |
                              PTR_DAT_047d19e0[0x33] & bVar121,
                              CONCAT12((byte)((uint)fVar136 >> 0x10) & ~PTR_DAT_047d19e0[0x32] |
                                       PTR_DAT_047d19e0[0x32] & bVar39,
                                       CONCAT11((byte)((uint)fVar136 >> 8) & ~PTR_DAT_047d19e0[0x31]
                                                | PTR_DAT_047d19e0[0x31] & bVar38,
                                                SUB41(fVar136,0) & ~PTR_DAT_047d19e0[0x30] |
                                                PTR_DAT_047d19e0[0x30] & SUB41(fVar135,0))));
    auVar151._0_8_ =
         CONCAT17((byte)((uint)fVar144 >> 0x18) & ~PTR_DAT_047d19e0[0x37] |
                  PTR_DAT_047d19e0[0x37] & bVar146,
                  CONCAT16((byte)((uint)fVar144 >> 0x10) & ~PTR_DAT_047d19e0[0x36] |
                           PTR_DAT_047d19e0[0x36] & bVar145,
                           CONCAT15((byte)((uint)fVar144 >> 8) & ~PTR_DAT_047d19e0[0x35] |
                                    PTR_DAT_047d19e0[0x35] & bVar123,
                                    CONCAT14(SUB41(fVar144,0) & ~PTR_DAT_047d19e0[0x34] |
                                             PTR_DAT_047d19e0[0x34] & SUB41(fVar143,0),fVar150))));
    auVar151[8] = SUB41(fVar147,0) & ~PTR_DAT_047d19e0[0x38] |
                  PTR_DAT_047d19e0[0x38] & SUB41(fVar135,0);
    auVar151[9] = (byte)((uint)fVar147 >> 8) & ~PTR_DAT_047d19e0[0x39] |
                  PTR_DAT_047d19e0[0x39] & bVar38;
    auVar151[10] = (byte)((uint)fVar147 >> 0x10) & ~PTR_DAT_047d19e0[0x3a] |
                   PTR_DAT_047d19e0[0x3a] & bVar39;
    auVar151[0xb] =
         (byte)((uint)fVar147 >> 0x18) & ~PTR_DAT_047d19e0[0x3b] | PTR_DAT_047d19e0[0x3b] & bVar121;
    auVar153[0xc] =
         SUB41(fVar148,0) & ~PTR_DAT_047d19e0[0x3c] | PTR_DAT_047d19e0[0x3c] & SUB41(fVar143,0);
    auVar153._0_12_ = auVar151;
    auVar153[0xd] =
         (byte)((uint)fVar148 >> 8) & ~PTR_DAT_047d19e0[0x3d] | PTR_DAT_047d19e0[0x3d] & bVar123;
    auVar153[0xe] =
         (byte)((uint)fVar148 >> 0x10) & ~PTR_DAT_047d19e0[0x3e] | PTR_DAT_047d19e0[0x3e] & bVar145;
    auVar153[0xf] =
         (byte)((uint)fVar148 >> 0x18) & ~PTR_DAT_047d19e0[0x3f] | PTR_DAT_047d19e0[0x3f] & bVar146;
    fVar150 = fVar136 * fVar150;
    fVar158 = fVar144 * (float)((ulong)auVar151._0_8_ >> 0x20);
    fVar159 = fVar147 * auVar151._8_4_;
    fVar160 = fVar148 * auVar153._12_4_;
    local_c0 = fVar176 + fVar89 * fVar177 + local_c0 + fVar166 * fVar149;
    fStack_bc = fVar178 + fVar60 * fVar177 + fStack_bc + fVar168 * fVar149;
    fStack_b8 = fVar179 + fVar68 * fVar177 + fStack_b8 + fVar169 * fVar149;
    fStack_b4 = fVar180 + fVar102 * fVar177 + fStack_b4 + fVar170 * fVar149;
    uStack_e8 = auVar76._8_8_;
    uStack_d8 = auVar106._8_8_;
    fVar135 = auVar61._0_4_ / SQRT(fVar72);
    fVar143 = auVar61._4_4_ / SQRT(fVar67);
    fVar168 = auVar61._8_4_ / SQRT(fVar72);
    fVar169 = auVar61._12_4_ / SQRT(fVar67);
    fVar166 = (float)CONCAT13((byte)((uint)fVar135 >> 0x18) & ~(byte)((uint)iVar161 >> 0x18),
                              CONCAT12((byte)((uint)fVar135 >> 0x10) &
                                       ~(byte)((uint)iVar161 >> 0x10),
                                       CONCAT11((byte)((uint)fVar135 >> 8) &
                                                ~(byte)((uint)iVar161 >> 8),
                                                SUB41(fVar135,0) & ~(byte)iVar161)));
    auVar152._0_8_ =
         CONCAT17((byte)((uint)fVar143 >> 0x18) & ~(byte)((uint)iVar163 >> 0x18),
                  CONCAT16((byte)((uint)fVar143 >> 0x10) & ~(byte)((uint)iVar163 >> 0x10),
                           CONCAT15((byte)((uint)fVar143 >> 8) & ~(byte)((uint)iVar163 >> 8),
                                    CONCAT14(SUB41(fVar143,0) & ~(byte)iVar163,fVar166))));
    auVar152[8] = SUB41(fVar168,0) & ~(byte)iVar164;
    auVar152[9] = (byte)((uint)fVar168 >> 8) & ~(byte)((uint)iVar164 >> 8);
    auVar152[10] = (byte)((uint)fVar168 >> 0x10) & ~(byte)((uint)iVar164 >> 0x10);
    auVar152[0xb] = (byte)((uint)fVar168 >> 0x18) & ~(byte)((uint)iVar164 >> 0x18);
    auVar154[0xc] = SUB41(fVar169,0) & ~(byte)iVar165;
    auVar154._0_12_ = auVar152;
    auVar154[0xd] = (byte)((uint)fVar169 >> 8) & ~(byte)((uint)iVar165 >> 8);
    auVar154[0xe] = (byte)((uint)fVar169 >> 0x10) & ~(byte)((uint)iVar165 >> 0x10);
    auVar154[0xf] = (byte)((uint)fVar169 >> 0x18) & ~(byte)((uint)iVar165 >> 0x18);
    auVar162._0_4_ = fVar116 * fVar166;
    auVar162._4_4_ = fVar122 * fVar166;
    auVar162._8_4_ = fVar124 * fVar166;
    auVar162._12_4_ = fVar126 * fVar166;
    auVar167 = NEON_ext(auVar162,auVar162,4,1);
    fVar168 = (float)((ulong)auVar152._0_8_ >> 0x20);
    auVar117._0_4_ = fVar127 * fVar168;
    auVar117._4_4_ = fVar134 * fVar168;
    auVar117._8_4_ = fVar101 * fVar168;
    auVar117._12_4_ = fVar111 * fVar168;
    auVar172 = NEON_ext(auVar117,auVar117,4,1);
    fVar135 = auVar54._0_4_;
    fVar143 = auVar54._4_4_;
    auVar129._0_4_ = fVar53 * auVar167._0_4_ - fVar135 * auVar162._0_4_;
    auVar129._4_4_ = fVar90 * auVar167._4_4_ - fVar143 * auVar162._4_4_;
    auVar129._8_4_ = fVar91 * auVar162._0_4_ - fVar53 * auVar162._8_4_;
    auVar129._12_4_ = fVar92 * auVar162._4_4_ - fVar90 * auVar162._12_4_;
    auVar173 = NEON_ext(auVar129,auVar129,4,1);
    auVar175._0_4_ = fVar53 * auVar172._0_4_ - fVar135 * auVar117._0_4_;
    auVar175._4_4_ = fVar90 * auVar172._4_4_ - fVar143 * auVar117._4_4_;
    auVar175._8_4_ = fVar91 * auVar117._0_4_ - fVar53 * auVar117._8_4_;
    auVar175._12_4_ = fVar92 * auVar117._4_4_ - fVar90 * auVar117._12_4_;
    bVar121 = (byte)(-(uint)(fVar112 < 0.0) >> 0x18);
    bVar123 = (byte)(-(uint)(fVar112 < 0.0) >> 0x18);
    uVar15 = CONCAT17(bVar123,(uint7)(bVar121 & 0x80) << 0x18) & 0x80ffffffffffffff;
    fVar166 = fVar166 * SQRT((float)((uint)fVar150 ^
                                    ((uint)fVar150 ^ local_100) & -(uint)(fVar136 <= 0.0)));
    fVar168 = fVar168 * SQRT((float)((uint)fVar158 ^
                                    ((uint)fVar158 ^ uStack_fc) & -(uint)(fVar144 <= 0.0)));
    fVar169 = auVar152._8_4_ *
              SQRT((float)((uint)fVar159 ^ ((uint)fVar159 ^ uStack_f8) & -(uint)(fVar147 <= 0.0)));
    fVar170 = auVar154._12_4_ *
              SQRT((float)((uint)fVar160 ^ ((uint)fVar160 ^ uStack_f4) & -(uint)(fVar148 <= 0.0)));
    auVar167 = NEON_ext(auVar175,auVar175,4,1);
    bVar38 = (byte)(-(uint)(fVar100 < 0.0) >> 0x18);
    bVar39 = (byte)(-(uint)(fVar100 < 0.0) >> 0x18);
    uVar103 = CONCAT17(bVar39,(uint7)(bVar38 & 0x80) << 0x18) & 0x80ffffffffffffff;
    fVar89 = (float)CONCAT13((byte)(uVar15 >> 0x18) ^ auVar173[3],auVar173._0_3_);
    auVar171._0_8_ =
         CONCAT17((byte)(uVar15 >> 0x38) ^ auVar173[7],
                  CONCAT16(auVar173[6],CONCAT15(auVar173[5],CONCAT14(auVar173[4],fVar89))));
    auVar171[8] = SUB41(auVar129._0_4_,0);
    auVar171[9] = (undefined1)((uint)auVar129._0_4_ >> 8);
    auVar171[10] = (undefined1)((uint)auVar129._0_4_ >> 0x10);
    auVar171[0xb] = bVar121 & 0x80 ^ (byte)((uint)auVar129._0_4_ >> 0x18);
    auVar174._12_3_ = 0;
    auVar174._0_12_ = auVar171;
    auVar174[0xf] = bVar123 & 0x80;
    fVar136 = (float)CONCAT13((byte)(uVar103 >> 0x18) ^ auVar167[3],auVar167._0_3_);
    auVar137._0_8_ =
         CONCAT17((byte)(uVar103 >> 0x38) ^ auVar167[7],
                  CONCAT16(auVar167[6],CONCAT15(auVar167[5],CONCAT14(auVar167[4],fVar136))));
    auVar137[8] = SUB41(auVar175._0_4_,0);
    auVar137[9] = (undefined1)((uint)auVar175._0_4_ >> 8);
    auVar137[10] = (undefined1)((uint)auVar175._0_4_ >> 0x10);
    auVar137[0xb] = bVar38 & 0x80 ^ (byte)((uint)auVar175._0_4_ >> 0x18);
    auVar138._12_3_ = 0;
    auVar138._0_12_ = auVar137;
    auVar138[0xf] = bVar39 & 0x80;
    fVar72 = (float)((ulong)auVar171._0_8_ >> 0x20);
    auVar167._0_4_ = auVar162._0_4_ * fVar169 + fVar89 * fVar166;
    auVar167._4_4_ = auVar162._4_4_ * fVar169 + fVar72 * fVar166;
    auVar167._8_4_ = auVar162._8_4_ * fVar169 + auVar171._8_4_ * fVar166;
    auVar167._12_4_ = auVar162._12_4_ * fVar169 + auVar174._12_4_ * fVar166;
    fVar144 = (float)((ulong)auVar137._0_8_ >> 0x20);
    fVar147 = auVar137._8_4_;
    fVar148 = auVar138._12_4_;
    local_f0 = auVar76._0_8_;
    uStack_e0 = auVar106._0_8_;
    if (((byte)pauVar20[8][0] >> 4 & 1) != 0) {
      fVar89 = fVar169 * fVar89 - auVar162._0_4_ * fVar166;
      fVar72 = fVar169 * fVar72 - auVar162._4_4_ * fVar166;
      fVar60 = fVar169 * auVar171._8_4_ - auVar162._8_4_ * fVar166;
      fVar166 = fVar169 * auVar174._12_4_ - auVar162._12_4_ * fVar166;
      auVar41._0_4_ = auVar117._0_4_ * fVar170 + fVar168 * fVar136;
      auVar41._4_4_ = auVar117._4_4_ * fVar170 + fVar168 * fVar144;
      auVar41._8_4_ = auVar117._8_4_ * fVar170 + fVar168 * fVar147;
      auVar41._12_4_ = auVar117._12_4_ * fVar170 + fVar168 * fVar148;
      bVar38 = (char)((fVar112 < 0.0) * -0x80) >> 7;
      bVar39 = (char)((fVar112 < 0.0) * -0x80) >> 7;
      uVar15 = CONCAT17(bVar39,(uint7)(bVar38 & 0x80) << 0x18) & 0x80ffffffffffffff;
      fVar136 = (float)CONCAT13((byte)(uVar15 >> 0x18) ^ (byte)((uint)fVar89 >> 0x18),
                                SUB43(fVar89,0));
      auVar23._0_8_ =
           CONCAT17((byte)(uVar15 >> 0x38) ^ (byte)((uint)fVar72 >> 0x18),
                    CONCAT16((char)((uint)fVar72 >> 0x10),
                             CONCAT15((char)((uint)fVar72 >> 8),CONCAT14(SUB41(fVar72,0),fVar136))))
      ;
      auVar23[8] = SUB41(fVar60,0);
      auVar23[9] = (char)((uint)fVar60 >> 8);
      auVar23[10] = (char)((uint)fVar60 >> 0x10);
      auVar23[0xb] = bVar38 & 0x80 ^ (byte)((uint)fVar60 >> 0x18);
      auVar25[0xc] = SUB41(fVar166,0);
      auVar25._0_12_ = auVar23;
      auVar25[0xd] = (char)((uint)fVar166 >> 8);
      auVar25[0xe] = (char)((uint)fVar166 >> 0x10);
      auVar25[0xf] = bVar39 & 0x80 ^ (byte)((uint)fVar166 >> 0x18);
      auVar26._0_4_ = auVar41._0_4_ * fVar136;
      auVar26._4_4_ = auVar41._4_4_ * (float)((ulong)auVar23._0_8_ >> 0x20);
      auVar26._8_4_ = auVar41._8_4_ * auVar23._8_4_;
      auVar26._12_4_ = auVar41._12_4_ * auVar25._12_4_;
      auVar76 = NEON_ext(auVar26,auVar26,8,1);
      iVar161 = -(uint)(0.0 < auVar76._0_4_ + auVar26._0_4_ + auVar26._4_4_);
      uVar22 = CONCAT13(~(byte)((uint)iVar161 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar161 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar161 >> 8),~(byte)iVar161)));
      auVar64._0_8_ = CONCAT44(uVar22,uVar22);
      auVar64._8_4_ = uVar22;
      auVar64._12_4_ = uVar22;
      auVar27._8_8_ = auVar64._8_8_;
      auVar27._0_8_ = auVar64._0_8_;
      auVar106 = auVar167 ^ (auVar167 ^ auVar41) & auVar64;
      auVar167 = auVar167 ^ (auVar167 ^ auVar41) & ~auVar64;
      auVar2._4_4_ = fVar98;
      auVar2._0_4_ = fVar97;
      auVar2._8_4_ = fVar99;
      auVar2._12_4_ = fVar100;
      auVar76 = auVar29 ^ (auVar29 ^ auVar2) & auVar27;
      auVar3._4_4_ = fVar98;
      auVar3._0_4_ = fVar97;
      auVar3._8_4_ = fVar99;
      auVar3._12_4_ = fVar100;
      auVar29 = auVar29 ^ (auVar29 ^ auVar3) & ~auVar64;
      uVar11 = FUN_0305d490(auVar76,auVar29,*pauVar21,pauVar20 + 9,pauVar18,&local_f0,&local_f0);
      fVar147 = auVar106._8_4_;
      fVar148 = auVar106._12_4_;
      fVar136 = auVar106._0_4_;
      fVar144 = auVar106._4_4_;
      bVar13 = true;
      fVar99 = auVar76._8_4_;
      fVar100 = auVar76._12_4_;
      fVar97 = auVar76._0_4_;
      fVar98 = auVar76._4_4_;
LAB_0305cb80:
      uVar9 = _UNK_03cab278;
      uVar73 = _DAT_03cab270;
      pauVar16 = pauVar20 + 9;
      if (pauVar16 != pauVar18) {
        pauVar21 = pauVar20;
        goto LAB_0305cbb0;
      }
      break;
    }
    if ((fVar112 == 0.0) && (fVar100 == 0.0)) {
LAB_0305c9f0:
      uVar11 = 0;
      bVar13 = false;
      fVar136 = auVar117._0_4_ * fVar170 + fVar168 * fVar136;
      fVar144 = auVar117._4_4_ * fVar170 + fVar168 * fVar144;
      fVar147 = auVar117._8_4_ * fVar170 + fVar168 * fVar147;
      fVar148 = auVar117._12_4_ * fVar170 + fVar168 * fVar148;
      goto LAB_0305cb80;
    }
    fVar166 = fVar136 * fVar170 - auVar117._0_4_ * fVar168;
    fVar169 = fVar144 * fVar170 - auVar117._4_4_ * fVar168;
    fVar89 = fVar147 * fVar170 - auVar117._8_4_ * fVar168;
    fVar72 = fVar148 * fVar170 - auVar117._12_4_ * fVar168;
    bVar38 = (char)((fVar100 < 0.0) * -0x80) >> 7;
    bVar39 = (char)((fVar100 < 0.0) * -0x80) >> 7;
    uVar15 = CONCAT17(bVar39,(uint7)(bVar38 & 0x80) << 0x18) & 0x80ffffffffffffff;
    fVar166 = (float)CONCAT13((byte)(uVar15 >> 0x18) ^ (byte)((uint)fVar166 >> 0x18),
                              SUB43(fVar166,0));
    auVar81._0_8_ =
         CONCAT17((byte)(uVar15 >> 0x38) ^ (byte)((uint)fVar169 >> 0x18),
                  CONCAT16((char)((uint)fVar169 >> 0x10),
                           CONCAT15((char)((uint)fVar169 >> 8),CONCAT14(SUB41(fVar169,0),fVar166))))
    ;
    auVar81[8] = SUB41(fVar89,0);
    auVar81[9] = (undefined1)((uint)fVar89 >> 8);
    auVar81[10] = (undefined1)((uint)fVar89 >> 0x10);
    auVar81[0xb] = bVar38 & 0x80 ^ (byte)((uint)fVar89 >> 0x18);
    auVar83[0xc] = SUB41(fVar72,0);
    auVar83._0_12_ = auVar81;
    auVar83[0xd] = (undefined1)((uint)fVar72 >> 8);
    auVar83[0xe] = (undefined1)((uint)fVar72 >> 0x10);
    auVar83[0xf] = bVar39 & 0x80 ^ (byte)((uint)fVar72 >> 0x18);
    auVar84._0_4_ = auVar167._0_4_ * fVar166;
    auVar84._4_4_ = auVar167._4_4_ * (float)((ulong)auVar81._0_8_ >> 0x20);
    auVar84._8_4_ = auVar167._8_4_ * auVar81._8_4_;
    auVar84._12_4_ = auVar167._12_4_ * auVar83._12_4_;
    auVar172 = NEON_ext(auVar84,auVar84,8,1);
    if (0.001 < auVar172._0_4_ + auVar84._0_4_ + auVar84._4_4_) goto LAB_0305c9f0;
    auVar172 = NEON_ext(auVar142,auVar142,4,1);
    auVar173 = NEON_ext(auVar69,auVar69,4,1);
    auVar62._0_4_ = auVar142._0_4_ * auVar173._0_4_ - auVar69._0_4_ * auVar172._0_4_;
    auVar62._4_4_ = auVar142._4_4_ * auVar173._4_4_ - auVar69._4_4_ * auVar172._4_4_;
    auVar62._8_4_ = auVar142._8_4_ * auVar69._0_4_ - auVar69._8_4_ * auVar142._0_4_;
    auVar62._12_4_ = auVar142._12_4_ * auVar69._4_4_ - auVar69._12_4_ * auVar142._4_4_;
    auVar69 = NEON_ext(auVar62,auVar62,4,1);
    auVar63._0_4_ = fVar53 * auVar69._0_4_;
    auVar63._4_4_ = fVar90 * auVar69._4_4_;
    auVar63._8_4_ = fVar91 * auVar62._0_4_;
    auVar63._12_4_ = fVar92 * 0.0;
    auVar69 = NEON_ext(auVar63,auVar63,8,1);
    if (0.0 <= auVar69._0_4_ + auVar63._0_4_ + auVar63._4_4_) {
      fVar136 = auVar117._0_4_ * fVar170 + fVar168 * fVar136;
      fVar144 = auVar117._4_4_ * fVar170 + fVar168 * fVar144;
      fVar147 = auVar117._8_4_ * fVar170 + fVar168 * fVar147;
      fVar148 = auVar117._12_4_ * fVar170 + fVar168 * fVar148;
      if (-1 < *param_2) {
        auVar42._0_4_ = auVar167._0_4_ * auVar167._0_4_;
        auVar42._4_4_ = auVar167._4_4_ * auVar167._4_4_;
        auVar42._8_4_ = auVar167._8_4_ * auVar167._8_4_;
        auVar42._12_4_ = auVar167._12_4_ * auVar167._12_4_;
        auVar55._0_4_ = fVar136 * fVar136;
        auVar55._4_4_ = fVar144 * fVar144;
        auVar55._8_4_ = fVar147 * fVar147;
        auVar55._12_4_ = fVar148 * fVar148;
        auVar76 = NEON_ext(auVar42,auVar42,8,1);
        auVar56 = NEON_ext(auVar55,auVar55,8,1);
        bVar13 = auVar76._0_4_ + auVar42._0_4_ + auVar42._4_4_ <
                 auVar56._0_4_ + auVar55._0_4_ + auVar55._4_4_;
        iVar161 = -(uint)bVar13;
        auVar43._4_4_ = iVar161;
        auVar43._0_4_ = iVar161;
        auVar43._8_4_ = iVar161;
        auVar43._12_4_ = iVar161;
        *param_9 = bVar13;
        auVar6._4_4_ = fVar144;
        auVar6._0_4_ = fVar136;
        auVar6._8_4_ = fVar147;
        auVar6._12_4_ = fVar148;
        auVar44._4_4_ = fVar144;
        auVar44._0_4_ = fVar136;
        auVar44._8_4_ = fVar147;
        auVar44._12_4_ = fVar148;
        auVar44 = auVar44 ^ (auVar6 ^ auVar167) & auVar43;
        *(long *)(param_6 + 2) = auVar44._8_8_;
        *(long *)param_6 = auVar44._0_8_;
        auVar28[0] = -(*param_9 == '\0');
        auVar28[1] = auVar28[0];
        auVar28[2] = auVar28[0];
        auVar28[3] = auVar28[0];
        auVar28[4] = auVar28[0];
        auVar28[5] = auVar28[0];
        auVar28[6] = auVar28[0];
        auVar28[7] = auVar28[0];
        auVar28[8] = auVar28[0];
        auVar28[9] = auVar28[0];
        auVar28[10] = auVar28[0];
        auVar28[0xb] = auVar28[0];
        auVar28[0xc] = auVar28[0];
        auVar28[0xd] = auVar28[0];
        auVar28[0xe] = auVar28[0];
        auVar28[0xf] = auVar28[0];
        auVar1._4_4_ = fVar98;
        auVar1._0_4_ = fVar97;
        auVar1._8_4_ = fVar99;
        auVar1._12_4_ = fVar100;
        auVar29 = auVar29 ^ (auVar29 ^ auVar1) & auVar28;
        *(long *)(param_7 + 2) = auVar29._8_8_;
        *(long *)param_7 = auVar29._0_8_;
        *param_8 = (int)((ulong)((long)pauVar20 - lVar19) >> 4) * 0x38e38e39;
        return 0;
      }
      uVar11 = 0;
      bVar13 = false;
      goto LAB_0305cb80;
    }
    pauVar16 = pauVar20 + 9;
  } while (pauVar20 + 9 != pauVar18);
  *(long *)(param_6 + 2) = auVar167._8_8_;
  *(long *)param_6 = auVar167._0_8_;
  *(long *)(param_7 + 2) = auVar29._8_8_;
  *(long *)param_7 = auVar29._0_8_;
  *param_8 = (int)((ulong)((long)pauVar20 - lVar19) >> 4) * 0x38e38e39;
  *param_9 = '\x01';
  return 0;
LAB_0305cbb0:
  do {
    fVar166 = *(float *)*pauVar16;
    fVar168 = *(float *)(*pauVar16 + 4);
    fVar169 = *(float *)(*pauVar16 + 8);
    fVar170 = *(float *)pauVar16[1];
    fVar89 = *(float *)(pauVar16[1] + 4);
    fVar72 = *(float *)(pauVar16[1] + 8);
    auVar24._0_8_ =
         CONCAT44(fStack_bc + local_f0._4_4_ * fVar166 + uStack_e0._4_4_ * fVar168 +
                  fStack_cc * fVar169,
                  local_c0 + (float)local_f0 * fVar166 + (float)uStack_e0 * fVar168 +
                  local_d0 * fVar169);
    auVar24._8_4_ =
         fStack_b8 + (float)uStack_e8 * fVar166 + (float)uStack_d8 * fVar168 + fStack_c8 * fVar169;
    auVar30._12_4_ =
         fStack_b4 + uStack_e8._4_4_ * fVar166 + uStack_d8._4_4_ * fVar168 + fStack_c4 * fVar169;
    auVar30._0_12_ = auVar24;
    auVar40._0_4_ =
         local_d0 * fVar72 + (float)uStack_e0 * fVar89 + local_c0 + (float)local_f0 * fVar170;
    auVar40._4_4_ =
         fStack_cc * fVar72 + uStack_e0._4_4_ * fVar89 + fStack_bc + local_f0._4_4_ * fVar170;
    auVar40._8_4_ =
         fStack_c8 * fVar72 + (float)uStack_d8 * fVar89 + fStack_b8 + (float)uStack_e8 * fVar170;
    if ((uVar11 & 1) == 0) {
      auVar107._8_8_ = auVar30._8_8_;
      auVar107._0_8_ = auVar24._0_8_;
      auVar45._0_12_ = auVar107._0_12_;
      auVar45._12_4_ = *(float *)(*pauVar16 + 0xc);
      auVar31._12_4_ = *(float *)(pauVar16[1] + 0xc);
      auVar31._0_12_ = auVar40;
    }
    else {
      auVar31._12_4_ = -*(float *)(*pauVar16 + 0xc);
      auVar31._0_12_ = auVar24;
      auVar45._12_4_ = -*(float *)(pauVar16[1] + 0xc);
      auVar45._0_12_ = auVar40;
    }
    fVar169 = auVar45._0_4_ - fVar93;
    fVar170 = auVar45._4_4_ - fVar94;
    fVar89 = auVar45._8_4_ - fVar95;
    fVar168 = auVar45._12_4_;
    fVar60 = auVar31._0_4_ - fVar93;
    fVar67 = auVar31._4_4_ - fVar94;
    fVar68 = auVar31._8_4_ - fVar95;
    fVar166 = auVar31._12_4_;
    fVar72 = fVar53 * fVar169;
    fVar112 = fVar90 * fVar170;
    fVar101 = fVar91 * fVar89;
    fVar111 = fVar53 * fVar60;
    fVar116 = fVar90 * fVar67;
    fVar122 = fVar91 * fVar68;
    fVar102 = fVar72 + fVar112 + fVar101;
    fVar101 = fVar72 + fVar112 + fVar101;
    fVar112 = fVar111 + fVar116 + fVar122;
    fVar122 = fVar111 + fVar116 + fVar122;
    fVar169 = fVar169 - fVar53 * fVar102;
    fVar170 = fVar170 - fVar90 * fVar101;
    fVar89 = fVar89 - fVar91 * fVar102;
    fVar72 = (fVar168 - fVar96) - fVar92 * fVar101;
    fVar60 = fVar60 - fVar53 * fVar112;
    fVar67 = fVar67 - fVar90 * fVar122;
    fVar68 = fVar68 - fVar91 * fVar112;
    fVar102 = (fVar166 - fVar96) - fVar92 * fVar122;
    auVar113._0_4_ = fVar169 * fVar169;
    auVar113._4_4_ = fVar170 * fVar170;
    auVar113._8_4_ = fVar89 * fVar89;
    auVar113._12_4_ = fVar72 * fVar72;
    auVar106 = NEON_ext(auVar113,auVar113,8,1);
    auVar130._0_4_ = fVar60 * fVar60;
    auVar130._4_4_ = fVar67 * fVar67;
    auVar130._8_4_ = fVar68 * fVar68;
    auVar130._12_4_ = fVar102 * fVar102;
    auVar76 = NEON_ext(auVar130,auVar130,8,1);
    fVar112 = auVar113._0_4_ + auVar113._4_4_ + auVar106._0_4_;
    fVar124 = auVar130._0_4_ + auVar130._4_4_ + auVar76._0_4_;
    fVar111 = fVar168 * fVar168;
    fVar122 = fVar166 * fVar166;
    iVar161 = -(uint)(fVar112 <= 0.0);
    iVar163 = -(uint)(fVar124 <= 0.0);
    iVar164 = -(uint)(fVar112 <= 0.0);
    iVar165 = -(uint)(fVar124 <= 0.0);
    fVar158 = auVar61._0_4_ / SQRT(fVar112);
    fVar159 = auVar61._4_4_ / SQRT(fVar124);
    fVar160 = auVar61._8_4_ / SQRT(fVar112);
    fVar149 = auVar61._12_4_ / SQRT(fVar124);
    fVar101 = fVar112 - fVar111;
    fVar116 = fVar124 - fVar122;
    fVar112 = fVar112 - fVar111;
    fVar124 = fVar124 - fVar122;
    fVar126 = fVar101 * (float)((uint)fVar111 ^
                               ((uint)fVar111 ^ (uint)fVar101) & ~*(uint *)(puVar10 + 0x30));
    fVar127 = fVar116 * (float)((uint)fVar122 ^
                               ((uint)fVar122 ^ (uint)fVar116) & ~*(uint *)(puVar10 + 0x34));
    fVar134 = fVar112 * (float)((uint)fVar111 ^
                               ((uint)fVar111 ^ (uint)fVar112) & ~*(uint *)(puVar10 + 0x38));
    fVar150 = fVar124 * (float)((uint)fVar122 ^
                               ((uint)fVar122 ^ (uint)fVar124) & ~*(uint *)(puVar10 + 0x3c));
    fVar111 = (float)CONCAT13((byte)((uint)fVar158 >> 0x18) & ~(byte)((uint)iVar161 >> 0x18),
                              CONCAT12((byte)((uint)fVar158 >> 0x10) &
                                       ~(byte)((uint)iVar161 >> 0x10),
                                       CONCAT11((byte)((uint)fVar158 >> 8) &
                                                ~(byte)((uint)iVar161 >> 8),
                                                SUB41(fVar158,0) & ~(byte)iVar161)));
    auVar128._0_8_ =
         CONCAT17((byte)((uint)fVar159 >> 0x18) & ~(byte)((uint)iVar163 >> 0x18),
                  CONCAT16((byte)((uint)fVar159 >> 0x10) & ~(byte)((uint)iVar163 >> 0x10),
                           CONCAT15((byte)((uint)fVar159 >> 8) & ~(byte)((uint)iVar163 >> 8),
                                    CONCAT14(SUB41(fVar159,0) & ~(byte)iVar163,fVar111))));
    auVar128[8] = SUB41(fVar160,0) & ~(byte)iVar164;
    auVar128[9] = (byte)((uint)fVar160 >> 8) & ~(byte)((uint)iVar164 >> 8);
    auVar128[10] = (byte)((uint)fVar160 >> 0x10) & ~(byte)((uint)iVar164 >> 0x10);
    auVar128[0xb] = (byte)((uint)fVar160 >> 0x18) & ~(byte)((uint)iVar164 >> 0x18);
    auVar131[0xc] = SUB41(fVar149,0) & ~(byte)iVar165;
    auVar131._0_12_ = auVar128;
    auVar131[0xd] = (byte)((uint)fVar149 >> 8) & ~(byte)((uint)iVar165 >> 8);
    auVar131[0xe] = (byte)((uint)fVar149 >> 0x10) & ~(byte)((uint)iVar165 >> 0x10);
    auVar131[0xf] = (byte)((uint)fVar149 >> 0x18) & ~(byte)((uint)iVar165 >> 0x18);
    auVar77._0_4_ = fVar169 * fVar111;
    auVar77._4_4_ = fVar170 * fVar111;
    auVar77._8_4_ = fVar89 * fVar111;
    auVar77._12_4_ = fVar72 * fVar111;
    auVar76 = NEON_ext(auVar77,auVar77,4,1);
    fVar122 = (float)((ulong)auVar128._0_8_ >> 0x20);
    auVar85._0_4_ = fVar60 * fVar122;
    auVar85._4_4_ = fVar67 * fVar122;
    auVar85._8_4_ = fVar68 * fVar122;
    auVar85._12_4_ = fVar102 * fVar122;
    auVar106 = NEON_ext(auVar85,auVar85,4,1);
    fVar111 = fVar111 * SQRT((float)((uint)fVar126 ^
                                    ((uint)fVar126 ^ local_100) & -(uint)(fVar101 <= 0.0)));
    fVar122 = fVar122 * SQRT((float)((uint)fVar127 ^
                                    ((uint)fVar127 ^ uStack_fc) & -(uint)(fVar116 <= 0.0)));
    fVar68 = auVar128._8_4_ *
             SQRT((float)((uint)fVar134 ^ ((uint)fVar134 ^ uStack_f8) & -(uint)(fVar112 <= 0.0)));
    fVar112 = auVar131._12_4_ *
              SQRT((float)((uint)fVar150 ^ ((uint)fVar150 ^ uStack_f4) & -(uint)(fVar124 <= 0.0)));
    bVar38 = (byte)(-(uint)(fVar168 < 0.0) >> 0x18);
    bVar39 = (byte)(-(uint)(fVar168 < 0.0) >> 0x18);
    uVar103 = CONCAT17(bVar39,(uint7)(bVar38 & 0x80) << 0x18) & 0x80ffffffffffffff;
    auVar139._0_4_ = fVar53 * auVar76._0_4_ - fVar135 * auVar77._0_4_;
    auVar139._4_4_ = fVar90 * auVar76._4_4_ - fVar143 * auVar77._4_4_;
    auVar139._8_4_ = fVar91 * auVar77._0_4_ - fVar53 * auVar77._8_4_;
    auVar139._12_4_ = fVar92 * auVar77._4_4_ - fVar90 * auVar77._12_4_;
    auVar76 = NEON_ext(auVar139,auVar139,4,1);
    auVar155._0_4_ = fVar53 * auVar106._0_4_ - fVar135 * auVar85._0_4_;
    auVar155._4_4_ = fVar90 * auVar106._4_4_ - fVar143 * auVar85._4_4_;
    auVar155._8_4_ = fVar91 * auVar85._0_4_ - fVar53 * auVar85._8_4_;
    auVar155._12_4_ = fVar92 * auVar85._4_4_ - fVar90 * auVar85._12_4_;
    auVar106 = NEON_ext(auVar155,auVar155,4,1);
    bVar121 = (byte)(-(uint)(fVar166 < 0.0) >> 0x18);
    bVar123 = (byte)(-(uint)(fVar166 < 0.0) >> 0x18);
    uVar15 = CONCAT17(bVar123,(uint7)(bVar121 & 0x80) << 0x18) & 0x80ffffffffffffff;
    auVar78[0xf] = bVar123 & 0x80;
    fVar169 = (float)CONCAT13((byte)(uVar15 >> 0x18) ^ auVar106[3],auVar106._0_3_);
    auVar75._0_8_ =
         CONCAT17((byte)(uVar15 >> 0x38) ^ auVar106[7],
                  CONCAT16(auVar106[6],CONCAT15(auVar106[5],CONCAT14(auVar106[4],fVar169))));
    auVar75[8] = SUB41(auVar155._0_4_,0);
    auVar75[9] = (char)((uint)auVar155._0_4_ >> 8);
    auVar75[10] = (char)((uint)auVar155._0_4_ >> 0x10);
    auVar75[0xb] = bVar121 & 0x80 ^ (byte)((uint)auVar155._0_4_ >> 0x18);
    auVar78._12_3_ = 0;
    auVar78._0_12_ = auVar75;
    fVar89 = (float)CONCAT13((byte)(uVar103 >> 0x18) ^ auVar76[3],auVar76._0_3_);
    auVar82._0_8_ =
         CONCAT17((byte)(uVar103 >> 0x38) ^ auVar76[7],
                  CONCAT16(auVar76[6],CONCAT15(auVar76[5],CONCAT14(auVar76[4],fVar89))));
    auVar82[8] = SUB41(auVar139._0_4_,0);
    auVar82[9] = (char)((uint)auVar139._0_4_ >> 8);
    auVar82[10] = (char)((uint)auVar139._0_4_ >> 0x10);
    auVar82[0xb] = bVar38 & 0x80 ^ (byte)((uint)auVar139._0_4_ >> 0x18);
    auVar86._12_3_ = 0;
    auVar86._0_12_ = auVar82;
    auVar86[0xf] = bVar39 & 0x80;
    fVar72 = (float)((ulong)auVar82._0_8_ >> 0x20);
    fVar170 = (float)((ulong)auVar75._0_8_ >> 0x20);
    fVar60 = fVar169 * fVar112 - auVar85._0_4_ * fVar122;
    fVar67 = fVar170 * fVar112 - auVar85._4_4_ * fVar122;
    fVar102 = auVar75._8_4_ * fVar112 - auVar85._8_4_ * fVar122;
    fVar101 = auVar78._12_4_ * fVar112 - auVar85._12_4_ * fVar122;
    auVar87._0_4_ = auVar85._0_4_ * fVar112 + fVar169 * fVar122;
    auVar87._4_4_ = auVar85._4_4_ * fVar112 + fVar170 * fVar122;
    auVar87._8_4_ = auVar85._8_4_ * fVar112 + auVar75._8_4_ * fVar122;
    auVar87._12_4_ = auVar85._12_4_ * fVar112 + auVar78._12_4_ * fVar122;
    fVar169 = fVar89 * fVar68 - auVar77._0_4_ * fVar111;
    fVar170 = fVar72 * fVar68 - auVar77._4_4_ * fVar111;
    fVar112 = auVar82._8_4_ * fVar68 - auVar77._8_4_ * fVar111;
    fVar116 = auVar86._12_4_ * fVar68 - auVar77._12_4_ * fVar111;
    auVar79._0_4_ = auVar77._0_4_ * fVar68 + fVar89 * fVar111;
    auVar79._4_4_ = auVar77._4_4_ * fVar68 + fVar72 * fVar111;
    auVar79._8_4_ = auVar77._8_4_ * fVar68 + auVar82._8_4_ * fVar111;
    auVar79._12_4_ = auVar77._12_4_ * fVar68 + auVar86._12_4_ * fVar111;
    bVar38 = (char)((fVar168 < 0.0) * -0x80) >> 7;
    bVar39 = (char)((fVar168 < 0.0) * -0x80) >> 7;
    uVar15 = CONCAT17(bVar39,(uint7)(bVar38 & 0x80) << 0x18) & 0x80ffffffffffffff;
    fVar168 = (float)CONCAT13((byte)(uVar15 >> 0x18) ^ (byte)((uint)fVar169 >> 0x18),
                              SUB43(fVar169,0));
    auVar104._0_8_ =
         CONCAT17((byte)(uVar15 >> 0x38) ^ (byte)((uint)fVar170 >> 0x18),
                  CONCAT16((char)((uint)fVar170 >> 0x10),
                           CONCAT15((char)((uint)fVar170 >> 8),CONCAT14(SUB41(fVar170,0),fVar168))))
    ;
    auVar104[8] = SUB41(fVar112,0);
    auVar104[9] = (char)((uint)fVar112 >> 8);
    auVar104[10] = (char)((uint)fVar112 >> 0x10);
    auVar104[0xb] = bVar38 & 0x80 ^ (byte)((uint)fVar112 >> 0x18);
    auVar108[0xc] = SUB41(fVar116,0);
    auVar108._0_12_ = auVar104;
    auVar108[0xd] = (char)((uint)fVar116 >> 8);
    auVar108[0xe] = (char)((uint)fVar116 >> 0x10);
    auVar108[0xf] = bVar39 & 0x80 ^ (byte)((uint)fVar116 >> 0x18);
    bVar38 = (char)((fVar166 < 0.0) * -0x80) >> 7;
    bVar39 = (char)((fVar166 < 0.0) * -0x80) >> 7;
    uVar15 = CONCAT17(bVar39,(uint7)(bVar38 & 0x80) << 0x18) & 0x80ffffffffffffff;
    auVar114._0_3_ = SUB43(fVar60,0);
    auVar114[3] = (byte)(uVar15 >> 0x18) ^ (byte)((uint)fVar60 >> 0x18);
    auVar114[4] = SUB41(fVar67,0);
    auVar114[5] = (undefined1)((uint)fVar67 >> 8);
    auVar114[6] = (undefined1)((uint)fVar67 >> 0x10);
    auVar114[7] = (byte)(uVar15 >> 0x38) ^ (byte)((uint)fVar67 >> 0x18);
    auVar114[8] = SUB41(fVar102,0);
    auVar114[9] = (undefined1)((uint)fVar102 >> 8);
    auVar114[10] = (undefined1)((uint)fVar102 >> 0x10);
    auVar114[0xb] = bVar38 & 0x80 ^ (byte)((uint)fVar102 >> 0x18);
    auVar114[0xc] = SUB41(fVar101,0);
    auVar114[0xd] = (undefined1)((uint)fVar101 >> 8);
    auVar114[0xe] = (undefined1)((uint)fVar101 >> 0x10);
    auVar114[0xf] = bVar39 & 0x80 ^ (byte)((uint)fVar101 >> 0x18);
    auVar157 = auVar31;
    auVar76 = auVar87;
    auVar106 = auVar114;
    if (((byte)pauVar16[8][0] >> 4 & 1) != 0) {
      auVar118._0_4_ = auVar87._0_4_ * fVar168;
      auVar118._4_4_ = auVar87._4_4_ * (float)((ulong)auVar104._0_8_ >> 0x20);
      auVar118._8_4_ = auVar87._8_4_ * auVar104._8_4_;
      auVar118._12_4_ = auVar87._12_4_ * auVar108._12_4_;
      auVar76 = NEON_ext(auVar118,auVar118,8,1);
      iVar161 = -(uint)(0.0 < auVar76._0_4_ + auVar118._0_4_ + auVar118._4_4_);
      uVar22 = CONCAT13(~(byte)((uint)iVar161 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar161 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar161 >> 8),~(byte)iVar161)));
      auVar119._0_8_ = CONCAT44(uVar22,uVar22);
      auVar119._8_4_ = uVar22;
      auVar119._12_4_ = uVar22;
      uVar125 = auVar119._8_8_;
      auVar132._8_8_ = uVar125;
      auVar132._0_8_ = auVar119._0_8_;
      auVar140._8_8_ = uVar125;
      auVar140._0_8_ = auVar119._0_8_;
      auVar156._8_8_ = uVar125;
      auVar156._0_8_ = auVar119._0_8_;
      auVar106 = auVar108 ^ (auVar108 ^ auVar114) & auVar132;
      auVar76 = auVar79 ^ (auVar79 ^ auVar87) & auVar140;
      auVar157 = auVar45 ^ (auVar45 ^ auVar31) & auVar156;
      auVar108 = auVar108 ^ (auVar108 ^ auVar114) & ~auVar119;
      auVar79 = auVar79 ^ (auVar79 ^ auVar87) & ~auVar119;
      auVar45 = auVar45 ^ (auVar45 ^ auVar31) & ~auVar119;
    }
    fVar89 = auVar108._0_4_;
    auVar141._0_4_ = fVar136 * fVar89;
    fVar72 = auVar108._4_4_;
    auVar141._4_4_ = fVar144 * fVar72;
    fVar60 = auVar108._8_4_;
    auVar141._8_4_ = fVar147 * fVar60;
    fVar67 = auVar108._12_4_;
    auVar141._12_4_ = fVar148 * fVar67;
    fVar68 = auVar167._0_4_;
    auVar120._0_4_ = fVar68 * fVar89;
    fVar102 = auVar167._4_4_;
    auVar120._4_4_ = fVar102 * fVar72;
    fVar112 = auVar167._8_4_;
    auVar120._8_4_ = fVar112 * fVar60;
    fVar101 = auVar167._12_4_;
    auVar120._12_4_ = fVar101 * fVar67;
    auVar133._0_4_ = fVar68 * -auVar106._0_4_;
    auVar133._4_4_ = fVar102 * -auVar106._4_4_;
    auVar133._8_4_ = fVar112 * -auVar106._8_4_;
    auVar133._12_4_ = fVar101 * auVar106._12_4_;
    auVar115._0_4_ = fVar136 * -auVar106._0_4_;
    auVar115._4_4_ = fVar144 * -auVar106._4_4_;
    auVar115._8_4_ = fVar147 * -auVar106._8_4_;
    auVar115._12_4_ = fVar148 * auVar106._12_4_;
    auVar54 = NEON_ext(auVar120,auVar120,8,1);
    auVar69 = NEON_ext(auVar133,auVar133,8,1);
    auVar142 = NEON_ext(auVar141,auVar141,8,1);
    auVar106 = NEON_ext(auVar115,auVar115,8,1);
    fVar166 = auVar76._0_4_;
    fVar168 = auVar76._4_4_;
    fVar169 = auVar76._8_4_;
    fVar170 = auVar76._12_4_;
    if ((bVar13) ||
       (auVar109._0_4_ = fVar166 * fVar89, auVar109._4_4_ = fVar168 * fVar72,
       auVar109._8_4_ = fVar169 * fVar60, auVar109._12_4_ = fVar170 * fVar67,
       auVar172 = NEON_ext(auVar109,auVar109,8,1),
       auVar172._0_4_ + auVar109._0_4_ + auVar109._4_4_ <= -0.001)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0x10;
    }
    iVar161 = -(uint)(0.0 <= auVar54._0_4_ + auVar120._0_4_ + auVar120._4_4_);
    iVar163 = -(uint)(0.0 <= auVar69._0_4_ + auVar133._0_4_ + auVar133._4_4_);
    iVar164 = -(uint)(0.0 <= auVar142._0_4_ + auVar141._0_4_ + auVar141._4_4_);
    iVar165 = -(uint)(0.0 <= auVar106._0_4_ + auVar115._0_4_ + auVar115._4_4_);
    iVar161 = CONCAT13((byte)((uint)iVar161 >> 0x18) & (byte)((ulong)uVar73 >> 0x18),
                       CONCAT12((byte)((uint)iVar161 >> 0x10) & (byte)((ulong)uVar73 >> 0x10),
                                CONCAT11((byte)((uint)iVar161 >> 8) & (byte)((ulong)uVar73 >> 8),
                                         (byte)iVar161 & (byte)uVar73)));
    auVar105._0_8_ =
         CONCAT17((byte)((uint)iVar163 >> 0x18) & (byte)((ulong)uVar73 >> 0x38),
                  CONCAT16((byte)((uint)iVar163 >> 0x10) & (byte)((ulong)uVar73 >> 0x30),
                           CONCAT15((byte)((uint)iVar163 >> 8) & (byte)((ulong)uVar73 >> 0x28),
                                    CONCAT14((byte)iVar163 & (byte)((ulong)uVar73 >> 0x20),iVar161))
                          ));
    auVar105[8] = (byte)iVar164 & (byte)uVar9;
    auVar105[9] = (byte)((uint)iVar164 >> 8) & (byte)((ulong)uVar9 >> 8);
    auVar105[10] = (byte)((uint)iVar164 >> 0x10) & (byte)((ulong)uVar9 >> 0x10);
    auVar105[0xb] = (byte)((uint)iVar164 >> 0x18) & (byte)((ulong)uVar9 >> 0x18);
    auVar110[0xc] = (byte)iVar165 & (byte)((ulong)uVar9 >> 0x20);
    auVar110._0_12_ = auVar105;
    auVar110[0xd] = (byte)((uint)iVar165 >> 8) & (byte)((ulong)uVar9 >> 0x28);
    auVar110[0xe] = (byte)((uint)iVar165 >> 0x10) & (byte)((ulong)uVar9 >> 0x30);
    auVar110[0xf] = (byte)((uint)iVar165 >> 0x18) & (byte)((ulong)uVar9 >> 0x38);
    fVar150 = auVar29._12_4_;
    fVar111 = auVar79._0_4_;
    fVar116 = auVar79._4_4_;
    fVar122 = auVar79._8_4_;
    fVar124 = auVar79._12_4_;
    fVar126 = auVar29._0_4_;
    fVar127 = auVar29._4_4_;
    fVar134 = auVar29._8_4_;
    fVar89 = auVar157._0_4_;
    fVar72 = auVar157._4_4_;
    fVar60 = auVar157._8_4_;
    fVar67 = auVar157._12_4_;
    switch(iVar161 + (int)((ulong)auVar105._0_8_ >> 0x20) + auVar105._8_4_ + auVar110._12_4_ |
           uVar12) {
    case 1:
    case 3:
      goto LAB_0305cee8;
    case 2:
    case 0xb:
    case 0xe:
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x1e:
      goto switchD_0305cebc_caseD_2;
    case 4:
    case 7:
    case 0xd:
    case 0x11:
    case 0x14:
    case 0x17:
    case 0x1c:
      goto switchD_0305cebc_caseD_4;
    case 5:
    case 0x15:
      auVar32._0_4_ = fVar111 * fVar111;
      auVar32._4_4_ = fVar116 * fVar116;
      auVar32._8_4_ = fVar122 * fVar122;
      auVar32._12_4_ = fVar124 * fVar124;
      auVar56 = NEON_ext(auVar32,auVar32,8,1);
      auVar58._0_4_ = fVar136 * fVar136;
      auVar58._4_4_ = fVar144 * fVar144;
      auVar58._8_4_ = fVar147 * fVar147;
      auVar58._12_4_ = fVar148 * fVar148;
      auVar76 = NEON_ext(auVar58,auVar58,8,1);
      if (!(bool)(~(auVar56._0_4_ + auVar32._0_4_ + auVar32._4_4_ <
                   auVar76._0_4_ + auVar58._0_4_ + auVar58._4_4_) & 1)) {
        fVar143 = auVar45._0_4_ - fVar126;
        fVar168 = auVar45._4_4_ - fVar127;
        fVar170 = auVar45._8_4_ - fVar134;
        fVar135 = fVar53 * (fVar97 - fVar126);
        fVar166 = fVar90 * (fVar98 - fVar127);
        fVar72 = fVar91 * (fVar99 - fVar134);
        fVar169 = fVar72 + fVar135 + fVar166;
        fVar72 = fVar72 + fVar135 + fVar166;
        fVar135 = fVar53 * fVar143;
        fVar166 = fVar90 * fVar168;
        fVar68 = fVar91 * fVar170;
        fVar89 = fVar68 + fVar135 + fVar166;
        fVar68 = fVar68 + fVar135 + fVar166;
        fVar135 = (fVar97 - fVar126) - fVar53 * fVar169;
        fVar166 = (fVar98 - fVar127) - fVar90 * fVar72;
        fVar169 = (fVar99 - fVar134) - fVar91 * fVar169;
        fVar143 = fVar143 - fVar53 * fVar89;
        fVar168 = fVar168 - fVar90 * fVar68;
        fVar170 = fVar170 - fVar91 * fVar89;
        uVar73 = NEON_fmov(0x3f800000,4);
        fVar89 = fVar135 * fVar143;
        fVar60 = fVar166 * fVar168;
        fVar67 = fVar169 * fVar170;
        uVar73 = NEON_fminnm(CONCAT44(((float)((ulong)uVar73 >> 0x20) /
                                      (fVar135 * fVar135 + fVar166 * fVar166 + fVar169 * fVar169)) *
                                      (fVar89 + fVar60 + fVar67),
                                      ((float)uVar73 /
                                      (fVar135 * fVar135 + fVar166 * fVar166 + fVar169 * fVar169)) *
                                      (fVar89 + fVar60 + fVar67)),uVar73,4);
        uVar73 = NEON_fmax(uVar73,0,4);
        fVar60 = (float)uVar73;
        fVar67 = (float)((ulong)uVar73 >> 0x20);
        fVar89 = fVar150 + (-fVar100 - fVar150) * fVar60;
        fVar143 = fVar143 - fVar135 * fVar60;
        fVar168 = fVar168 - fVar166 * fVar67;
        fVar170 = fVar170 - fVar169 * fVar60;
        fVar135 = fVar53 * fVar143;
        fVar169 = fVar90 * fVar168;
        fVar60 = fVar91 * fVar170;
        fVar166 = fVar135 + fVar169 + fVar60;
        fVar60 = fVar135 + fVar169 + fVar60;
        fVar143 = fVar143 - fVar53 * fVar166;
        fVar168 = fVar168 - fVar90 * fVar60;
        fVar170 = fVar170 - fVar91 * fVar166;
        fVar53 = (((auVar45._12_4_ - fVar150) - fVar92 * fVar68) -
                 ((fVar100 - fVar150) - fVar92 * fVar72) * fVar67) - fVar92 * fVar60;
        auVar33._0_4_ = fVar143 * fVar143;
        auVar33._4_4_ = fVar168 * fVar168;
        auVar33._8_4_ = fVar170 * fVar170;
        auVar33._12_4_ = fVar53 * fVar53;
        auVar56 = NEON_ext(auVar33,auVar33,8,1);
        if (auVar33._0_4_ + auVar33._4_4_ + auVar56._0_4_ < fVar89 * fVar89)
        goto switchD_0305cebc_caseD_1b;
      }
switchD_0305cebc_caseD_4:
      *(ulong *)(param_6 + 2) = CONCAT44(fVar148,fVar147);
      *(ulong *)param_6 = CONCAT44(fVar144,fVar136);
      *(ulong *)(param_7 + 2) = CONCAT44(fVar100,fVar99);
      *(ulong *)param_7 = CONCAT44(fVar98,fVar97);
      uVar15 = (long)pauVar20 - lVar19;
LAB_0305d260:
      *param_8 = (int)(uVar15 >> 4) * 0x38e38e39;
      *param_9 = '\0';
      return 0;
    case 6:
    case 0x16:
    case 0x19:
      auVar65._0_4_ = fVar111 * fVar111;
      auVar65._4_4_ = fVar116 * fVar116;
      auVar65._8_4_ = fVar122 * fVar122;
      auVar65._12_4_ = fVar124 * fVar124;
      auVar70._0_4_ = fVar166 * fVar166;
      auVar70._4_4_ = fVar168 * fVar168;
      auVar70._8_4_ = fVar169 * fVar169;
      auVar70._12_4_ = fVar170 * fVar170;
      uVar15 = (long)pauVar16 - lVar19;
      auVar106 = NEON_ext(auVar65,auVar65,8,1);
      auVar56 = NEON_ext(auVar70,auVar70,8,1);
      bVar13 = auVar106._0_4_ + auVar65._0_4_ + auVar65._4_4_ <
               auVar56._0_4_ + auVar70._0_4_ + auVar70._4_4_;
      iVar161 = -(uint)bVar13;
      auVar66._4_4_ = iVar161;
      auVar66._0_4_ = iVar161;
      auVar66._8_4_ = iVar161;
      auVar66._12_4_ = iVar161;
      *param_9 = bVar13;
      auVar76 = auVar76 ^ (auVar76 ^ auVar79) & auVar66;
      *(long *)(param_6 + 2) = auVar76._8_8_;
      *(long *)param_6 = auVar76._0_8_;
      auVar57[0] = -(*param_9 == '\0');
      auVar57[1] = auVar57[0];
      auVar57[2] = auVar57[0];
      auVar57[3] = auVar57[0];
      auVar57[4] = auVar57[0];
      auVar57[5] = auVar57[0];
      auVar57[6] = auVar57[0];
      auVar57[7] = auVar57[0];
      auVar57[8] = auVar57[0];
      auVar57[9] = auVar57[0];
      auVar57[10] = auVar57[0];
      auVar57[0xb] = auVar57[0];
      auVar57[0xc] = auVar57[0];
      auVar57[0xd] = auVar57[0];
      auVar57[0xe] = auVar57[0];
      auVar57[0xf] = auVar57[0];
      auVar157 = auVar157 ^ (auVar157 ^ auVar45) & ~auVar57;
      goto LAB_0305d464;
    case 8:
    case 0xc:
      pauVar20 = pauVar16;
      fVar97 = fVar89;
      fVar98 = fVar72;
      fVar99 = fVar60;
      fVar100 = fVar67;
      fVar136 = fVar166;
      fVar144 = fVar168;
      fVar147 = fVar169;
      fVar148 = fVar170;
      break;
    case 9:
      pauVar20 = pauVar16;
      fVar97 = fVar89;
      fVar98 = fVar72;
      fVar99 = fVar60;
      fVar100 = fVar67;
      fVar136 = fVar166;
      fVar144 = fVar168;
      fVar147 = fVar169;
      fVar148 = fVar170;
LAB_0305cee8:
      pauVar21 = pauVar16;
      auVar29 = auVar45;
      auVar167 = auVar79;
      break;
    case 10:
    case 0x1a:
      auVar46._0_4_ = fVar166 * fVar166;
      auVar46._4_4_ = fVar168 * fVar168;
      auVar46._8_4_ = fVar169 * fVar169;
      auVar46._12_4_ = fVar170 * fVar170;
      auVar56 = NEON_ext(auVar46,auVar46,8,1);
      auVar59._0_4_ = fVar68 * fVar68;
      auVar59._4_4_ = fVar102 * fVar102;
      auVar59._8_4_ = fVar112 * fVar112;
      auVar59._12_4_ = fVar101 * fVar101;
      auVar106 = NEON_ext(auVar59,auVar59,8,1);
      if (!(bool)(~(auVar56._0_4_ + auVar46._0_4_ + auVar46._4_4_ <
                   auVar106._0_4_ + auVar59._0_4_ + auVar59._4_4_) & 1)) {
        fVar135 = fVar53 * (fVar97 - fVar126);
        fVar136 = fVar90 * (fVar98 - fVar127);
        fVar166 = fVar91 * (fVar99 - fVar134);
        fVar143 = fVar166 + fVar135 + fVar136;
        fVar166 = fVar166 + fVar135 + fVar136;
        fVar135 = fVar53 * (fVar89 - fVar126);
        fVar136 = fVar90 * (fVar72 - fVar127);
        fVar168 = fVar91 * (fVar60 - fVar134);
        fVar148 = fVar168 + fVar135 + fVar136;
        fVar168 = fVar168 + fVar135 + fVar136;
        fVar135 = (fVar97 - fVar126) - fVar53 * fVar143;
        fVar136 = (fVar98 - fVar127) - fVar90 * fVar166;
        fVar147 = (fVar99 - fVar134) - fVar91 * fVar143;
        fVar143 = (fVar89 - fVar126) - fVar53 * fVar148;
        fVar144 = (fVar72 - fVar127) - fVar90 * fVar168;
        fVar148 = (fVar60 - fVar134) - fVar91 * fVar148;
        uVar73 = NEON_fmov(0x3f800000,4);
        fVar97 = fVar135 * fVar143;
        fVar98 = fVar136 * fVar144;
        fVar99 = fVar147 * fVar148;
        uVar73 = NEON_fminnm(CONCAT44(((float)((ulong)uVar73 >> 0x20) /
                                      (fVar135 * fVar135 + fVar136 * fVar136 + fVar147 * fVar147)) *
                                      (fVar97 + fVar98 + fVar99),
                                      ((float)uVar73 /
                                      (fVar135 * fVar135 + fVar136 * fVar136 + fVar147 * fVar147)) *
                                      (fVar97 + fVar98 + fVar99)),uVar73,4);
        uVar73 = NEON_fmax(uVar73,0,4);
        fVar98 = (float)uVar73;
        fVar99 = (float)((ulong)uVar73 >> 0x20);
        fVar97 = fVar150 + (-fVar100 - fVar150) * fVar98;
        fVar143 = fVar143 - fVar135 * fVar98;
        fVar144 = fVar144 - fVar136 * fVar99;
        fVar148 = fVar148 - fVar147 * fVar98;
        fVar135 = fVar53 * fVar143;
        fVar147 = fVar90 * fVar144;
        fVar98 = fVar91 * fVar148;
        fVar136 = fVar135 + fVar147 + fVar98;
        fVar98 = fVar135 + fVar147 + fVar98;
        fVar143 = fVar143 - fVar53 * fVar136;
        fVar144 = fVar144 - fVar90 * fVar98;
        fVar148 = fVar148 - fVar91 * fVar136;
        fVar53 = (((fVar67 - fVar150) - fVar92 * fVar168) -
                 ((fVar100 - fVar150) - fVar92 * fVar166) * fVar99) - fVar92 * fVar98;
        auVar47._0_4_ = fVar143 * fVar143;
        auVar47._4_4_ = fVar144 * fVar144;
        auVar47._8_4_ = fVar148 * fVar148;
        auVar47._12_4_ = fVar53 * fVar53;
        auVar56 = NEON_ext(auVar47,auVar47,8,1);
        if (auVar47._0_4_ + auVar47._4_4_ + auVar56._0_4_ < fVar97 * fVar97)
        goto switchD_0305cebc_caseD_1d;
      }
      goto switchD_0305cebc_caseD_2;
    case 0xf:
    case 0x10:
      auVar34._0_4_ = fVar136 * fVar111;
      auVar34._4_4_ = fVar144 * fVar116;
      auVar34._8_4_ = fVar147 * fVar122;
      auVar34._12_4_ = fVar148 * fVar124;
      auVar56 = NEON_ext(auVar34,auVar34,8,1);
      fVar53 = auVar56._0_4_ + auVar34._0_4_ + auVar34._4_4_;
      iVar161 = -(uint)(0.0 < fVar53);
      if (0.0 < fVar53) {
        pauVar21 = pauVar20;
      }
      uVar22 = CONCAT13(~(byte)((uint)iVar161 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar161 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar161 >> 8),~(byte)iVar161)));
      auVar35._0_8_ = CONCAT44(uVar22,uVar22);
      auVar35._8_4_ = uVar22;
      auVar35._12_4_ = uVar22;
      auVar48._8_8_ = auVar35._8_8_;
      auVar48._0_8_ = auVar35._0_8_;
      auVar8._4_4_ = fVar144;
      auVar8._0_4_ = fVar136;
      auVar8._8_4_ = fVar147;
      auVar8._12_4_ = fVar148;
      auVar36._4_4_ = fVar144;
      auVar36._0_4_ = fVar136;
      auVar36._8_4_ = fVar147;
      auVar36._12_4_ = fVar148;
      auVar36 = auVar36 ^ (auVar8 ^ auVar167) & auVar35;
      auVar5._4_4_ = fVar98;
      auVar5._0_4_ = fVar97;
      auVar5._8_4_ = fVar99;
      auVar5._12_4_ = fVar100;
      auVar49._4_4_ = fVar98;
      auVar49._0_4_ = fVar97;
      auVar49._8_4_ = fVar99;
      auVar49._12_4_ = fVar100;
      auVar49 = auVar49 ^ (auVar5 ^ auVar29) & auVar48;
      *(long *)(param_6 + 2) = auVar36._8_8_;
      *(long *)param_6 = auVar36._0_8_;
      *(long *)(param_7 + 2) = auVar49._8_8_;
      *(long *)param_7 = auVar49._0_8_;
      *param_8 = (int)((ulong)((long)pauVar21 - lVar19) >> 4) * 0x38e38e39;
      bVar13 = fVar53 <= 0.0;
      goto LAB_0305d008;
    case 0x1b:
switchD_0305cebc_caseD_1b:
      *(long *)(param_6 + 2) = auVar79._8_8_;
      *(long *)param_6 = auVar79._0_8_;
      uVar15 = (long)pauVar16 - lVar19;
      *(long *)(param_7 + 2) = auVar45._8_8_;
      *(long *)param_7 = auVar45._0_8_;
      goto LAB_0305cfec;
    case 0x1d:
switchD_0305cebc_caseD_1d:
      *(long *)(param_6 + 2) = auVar76._8_8_;
      *(long *)param_6 = auVar76._0_8_;
      *(long *)(param_7 + 2) = auVar157._8_8_;
      *(long *)param_7 = auVar157._0_8_;
      uVar15 = (long)pauVar16 - lVar19;
      goto LAB_0305d260;
    case 0x1f:
      auVar56._0_4_ = fVar68 * fVar68;
      auVar56._4_4_ = fVar102 * fVar102;
      auVar56._8_4_ = fVar112 * fVar112;
      auVar56._12_4_ = fVar101 * fVar101;
      auVar50._0_4_ = fVar136 * fVar136;
      auVar50._4_4_ = fVar144 * fVar144;
      auVar50._8_4_ = fVar147 * fVar147;
      auVar50._12_4_ = fVar148 * fVar148;
      auVar106 = NEON_ext(auVar56,auVar56,8,1);
      auVar76 = NEON_ext(auVar50,auVar50,8,1);
      bVar13 = auVar106._0_4_ + auVar56._0_4_ + auVar56._4_4_ <
               auVar76._0_4_ + auVar50._0_4_ + auVar50._4_4_;
      *param_9 = bVar13;
      iVar161 = -(uint)bVar13;
      auVar37._0_8_ = CONCAT44(iVar161,iVar161);
      auVar37._8_4_ = iVar161;
      auVar37._12_4_ = iVar161;
      if (!bVar13) {
        pauVar21 = pauVar20;
      }
      uVar15 = (long)pauVar21 - lVar19;
      auVar51._8_8_ = auVar37._8_8_;
      auVar51._0_8_ = auVar37._0_8_;
      auVar4._4_4_ = fVar98;
      auVar4._0_4_ = fVar97;
      auVar4._8_4_ = fVar99;
      auVar4._12_4_ = fVar100;
      auVar157._4_4_ = fVar98;
      auVar157._0_4_ = fVar97;
      auVar157._8_4_ = fVar99;
      auVar157._12_4_ = fVar100;
      auVar157 = auVar157 ^ (auVar4 ^ auVar29) & auVar37;
      auVar7._4_4_ = fVar144;
      auVar7._0_4_ = fVar136;
      auVar7._8_4_ = fVar147;
      auVar7._12_4_ = fVar148;
      auVar52._4_4_ = fVar144;
      auVar52._0_4_ = fVar136;
      auVar52._8_4_ = fVar147;
      auVar52._12_4_ = fVar148;
      auVar52 = auVar52 ^ (auVar7 ^ auVar167) & auVar51;
      *(long *)(param_6 + 2) = auVar52._8_8_;
      *(long *)param_6 = auVar52._0_8_;
LAB_0305d464:
      *(long *)(param_7 + 2) = auVar157._8_8_;
      *(long *)param_7 = auVar157._0_8_;
      *param_8 = (int)(uVar15 >> 4) * 0x38e38e39;
      return 0;
    }
    fVar166 = *(float *)pauVar16[3];
    fVar168 = *(float *)(pauVar16[3] + 4);
    fVar169 = *(float *)(pauVar16[3] + 8);
    fVar170 = *(float *)pauVar16[4];
    fVar89 = *(float *)(pauVar16[4] + 4);
    fVar72 = *(float *)(pauVar16[4] + 8);
    fVar60 = *(float *)pauVar16[5];
    fVar67 = *(float *)(pauVar16[5] + 4);
    fVar68 = *(float *)(pauVar16[5] + 8);
    fVar102 = *(float *)pauVar16[6];
    fVar112 = *(float *)(pauVar16[6] + 4);
    fVar101 = *(float *)(pauVar16[6] + 8);
    auVar88._0_8_ =
         CONCAT44(fStack_cc * fVar72 + local_f0._4_4_ * fVar170 + uStack_e0._4_4_ * fVar89,
                  local_d0 * fVar72 + (float)local_f0 * fVar170 + (float)uStack_e0 * fVar89);
    auVar88._8_4_ = fStack_c8 * fVar72 + (float)uStack_e8 * fVar170 + (float)uStack_d8 * fVar89;
    auVar88._12_4_ = fStack_c4 * fVar72 + uStack_e8._4_4_ * fVar170 + uStack_d8._4_4_ * fVar89;
    auVar80._0_8_ =
         CONCAT44(fStack_cc * fVar169 + local_f0._4_4_ * fVar166 + uStack_e0._4_4_ * fVar168,
                  local_d0 * fVar169 + (float)local_f0 * fVar166 + (float)uStack_e0 * fVar168);
    auVar80._8_4_ = fStack_c8 * fVar169 + (float)uStack_e8 * fVar166 + (float)uStack_d8 * fVar168;
    auVar80._12_4_ = fStack_c4 * fVar169 + uStack_e8._4_4_ * fVar166 + uStack_d8._4_4_ * fVar168;
    fVar89 = (float)uStack_e8 * fVar102;
    fVar111 = uStack_e8._4_4_ * fVar102;
    fVar166 = (float)uStack_d8 * fVar112;
    fVar168 = uStack_d8._4_4_ * fVar112;
    fVar169 = local_d0 * fVar101;
    fVar170 = fStack_cc * fVar101;
    fVar72 = fStack_c8 * fVar101;
    fVar101 = fStack_c4 * fVar101;
    local_d0 = local_d0 * fVar68 + (float)local_f0 * fVar60 + (float)uStack_e0 * fVar67;
    fStack_cc = fStack_cc * fVar68 + local_f0._4_4_ * fVar60 + uStack_e0._4_4_ * fVar67;
    fStack_c8 = fStack_c8 * fVar68 + (float)uStack_e8 * fVar60 + (float)uStack_d8 * fVar67;
    fStack_c4 = fStack_c4 * fVar68 + uStack_e8._4_4_ * fVar60 + uStack_d8._4_4_ * fVar67;
    uStack_e8 = auVar80._8_8_;
    uStack_d8 = auVar88._8_8_;
    local_c0 = fVar169 + (float)uStack_e0 * fVar112 + local_c0 + (float)local_f0 * fVar102;
    fStack_bc = fVar170 + uStack_e0._4_4_ * fVar112 + fStack_bc + local_f0._4_4_ * fVar102;
    fStack_b8 = fVar72 + fVar166 + fStack_b8 + fVar89;
    fStack_b4 = fVar101 + fVar168 + fStack_b4 + fVar111;
    bVar13 = ((byte)pauVar16[8][0] >> 4 & 1) != 0;
    local_f0 = auVar80._0_8_;
    uStack_e0 = auVar88._0_8_;
    if (bVar13) {
      uVar12 = FUN_0305d490(auVar157,auVar45,auVar56,pauVar16 + 9,pauVar18,&local_f0,&local_f0);
      uVar11 = uVar11 ^ uVar12;
    }
    pauVar16 = pauVar16 + 9;
  } while (pauVar16 != pauVar18);
  iVar161 = -(uint)(*(float *)*pauVar21 == *(float *)pauVar21[1]);
  iVar163 = -(uint)(*(float *)(*pauVar21 + 4) == *(float *)(pauVar21[1] + 4));
  iVar164 = -(uint)(*(float *)(*pauVar21 + 8) == *(float *)(pauVar21[1] + 8));
  iVar165 = -(uint)(*(float *)(*pauVar21 + 0xc) == *(float *)(pauVar21[1] + 0xc));
  if (CONCAT13((byte)((uint)iVar163 >> 0x18) & (byte)((uint)iVar161 >> 0x18) &
               (byte)((uint)iVar164 >> 0x18) & (byte)((uint)iVar165 >> 0x18),
               CONCAT12((byte)((uint)iVar163 >> 0x10) & (byte)((uint)iVar161 >> 0x10) &
                        (byte)((uint)iVar164 >> 0x10) & (byte)((uint)iVar165 >> 0x10),
                        CONCAT11((byte)((uint)iVar163 >> 8) & (byte)((uint)iVar161 >> 8) &
                                 (byte)((uint)iVar164 >> 8) & (byte)((uint)iVar165 >> 8),
                                 (byte)iVar163 & (byte)iVar161 & (byte)iVar164 & (byte)iVar165))) ==
      0) {
    param_6[2] = auVar167._8_4_ + (fVar147 - auVar167._8_4_) * 0.5;
    param_6[3] = auVar167._12_4_ + (fVar148 - auVar167._12_4_) * 0.5;
    *param_6 = auVar167._0_4_ + (fVar136 - auVar167._0_4_) * 0.5;
    param_6[1] = auVar167._4_4_ + (fVar144 - auVar167._4_4_) * 0.5;
    param_7[2] = auVar29._8_4_ + (fVar99 - auVar29._8_4_) * 0.5;
    param_7[3] = auVar29._12_4_ + (fVar100 - auVar29._12_4_) * 0.5;
    *param_7 = auVar29._0_4_ + (fVar97 - auVar29._0_4_) * 0.5;
    param_7[1] = auVar29._4_4_ + (fVar98 - auVar29._4_4_) * 0.5;
    *param_8 = (int)((ulong)((long)pauVar21 - lVar19) >> 4) * 0x38e38e39;
    *param_9 = '\x01';
    return 1;
  }
switchD_0305cebc_caseD_2:
  *(long *)(param_6 + 2) = auVar167._8_8_;
  *(long *)param_6 = auVar167._0_8_;
  uVar15 = (long)pauVar21 - lVar19;
  *(long *)(param_7 + 2) = auVar29._8_8_;
  *(long *)param_7 = auVar29._0_8_;
LAB_0305cfec:
  *param_8 = (int)(uVar15 >> 4) * 0x38e38e39;
  bVar13 = true;
LAB_0305d008:
  *param_9 = bVar13;
  return 0;
}


