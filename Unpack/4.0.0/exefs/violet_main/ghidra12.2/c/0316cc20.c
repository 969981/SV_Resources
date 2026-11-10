/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0316cc20; name: FUN_0316cc20
 */


int FUN_0316cc20(float *param_1,undefined1 (*param_2) [12],long param_3,long param_4,int param_5,
                int param_6,int param_7,int param_8,int *param_9)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  float *pfVar5;
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
  undefined1 auVar19 [16];
  byte bVar20;
  undefined1 auVar21 [16];
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  int *piVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  float fVar36;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar52;
  float fVar53;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [12];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar74;
  float fVar75;
  float fVar77;
  float fVar78;
  undefined1 auVar76 [16];
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  undefined4 uVar89;
  undefined1 auVar90 [16];
  float fVar91;
  float fVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 uVar96;
  float fVar99;
  float fVar100;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar101;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar107;
  float fVar109;
  float fVar110;
  undefined1 auVar108 [16];
  float fVar111;
  float fVar114;
  float fVar115;
  undefined1 auVar112 [12];
  undefined1 auVar113 [16];
  float fVar116;
  float fVar120;
  float fVar121;
  ulong uVar117;
  undefined1 auVar118 [12];
  float fVar122;
  undefined1 auVar119 [16];
  float fVar123;
  ulong uVar124;
  int iVar125;
  int iVar126;
  undefined8 uVar127;
  int iVar129;
  undefined1 auVar128 [16];
  ulong uVar130;
  undefined8 uVar131;
  undefined1 auVar132 [16];
  float fVar133;
  float fVar134;
  undefined1 uVar135;
  byte bVar136;
  undefined1 uVar137;
  byte bVar138;
  undefined1 uVar139;
  byte bVar140;
  undefined1 uVar141;
  undefined8 uVar142;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  int iVar146;
  float fVar150;
  int iVar151;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  float fVar152;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  undefined1 auVar153 [16];
  ulong uVar158;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  float fVar161;
  float fVar162;
  float fVar165;
  float fVar168;
  undefined1 auVar163 [16];
  float fVar166;
  float fVar167;
  undefined1 auVar164 [16];
  undefined8 uVar169;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  
  lVar26 = *(long *)(param_3 + 0x20);
  bVar136 = *(byte *)(*(long *)(lVar26 + 0x68) + 0x80);
  lVar28 = *(long *)(param_4 + 0x20);
  bVar138 = *(byte *)(*(long *)(lVar28 + 0x68) + 0x80);
  bVar20 = bVar136 & bVar138;
  bVar138 = bVar138 | bVar136;
  if ((bVar20 & 1) == 0) {
    fVar48 = (float)*(undefined8 *)(*param_2 + 8);
    fVar74 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    fVar47 = (float)*(undefined8 *)*param_2;
    fVar49 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
    if (param_5 < *(int *)(lVar26 + 0x30)) {
      lVar29 = *(long *)(lVar26 + 0x28);
      iVar125 = param_5;
      if (*(int *)(lVar26 + 0x78) != 0) {
        iVar125 = *(int *)(*(long *)(lVar26 + 0x70) + (long)param_5 * 4);
      }
      if (iVar125 != -1) {
        plVar30 = (long *)(lVar26 + 0xc0);
        goto LAB_0316ce00;
      }
      iVar125 = param_5;
    }
    else {
      iVar125 = param_5 - *(int *)(lVar26 + 0x30);
      plVar30 = (long *)(lVar26 + 0xe0);
LAB_0316ce00:
      lVar29 = *plVar30;
    }
    if (param_6 < *(int *)(lVar28 + 0x30)) {
      lVar32 = *(long *)(lVar28 + 0x28);
      iVar146 = param_6;
      if (*(int *)(lVar28 + 0x78) != 0) {
        iVar146 = *(int *)(*(long *)(lVar28 + 0x70) + (long)param_6 * 4);
      }
      iVar151 = param_6;
      if (iVar146 != -1) {
        plVar30 = (long *)(lVar28 + 0xc0);
        goto LAB_0316ce44;
      }
    }
    else {
      iVar146 = param_6 - *(int *)(lVar28 + 0x30);
      plVar30 = (long *)(lVar28 + 0xe0);
LAB_0316ce44:
      lVar32 = *plVar30;
      iVar151 = iVar146;
    }
    piVar31 = (int *)(lVar29 + (long)iVar125 * 0x14);
    iVar126 = *(int *)(lVar26 + 0x40);
    auVar51 = ZEXT816(0);
    iVar125 = *piVar31;
    iVar146 = piVar31[1];
    lVar29 = 0x38;
    if (iVar126 <= iVar125) {
      lVar29 = 0xf0;
    }
    iVar129 = 0;
    if (iVar126 <= iVar125) {
      iVar129 = iVar126;
    }
    pfVar5 = (float *)(*(long *)(lVar26 + lVar29) + (long)(iVar125 - iVar129) * 0x10);
    fVar57 = *pfVar5;
    fVar54 = pfVar5[1];
    fVar99 = pfVar5[2];
    lVar29 = 0x38;
    if (iVar126 <= iVar146) {
      lVar29 = 0xf0;
    }
    iVar125 = 0;
    if (iVar126 <= iVar146) {
      iVar125 = iVar126;
    }
    pfVar5 = (float *)(*(long *)(lVar26 + lVar29) + (long)(iVar146 - iVar125) * 0x10);
    fVar100 = *pfVar5;
    fVar79 = pfVar5[1];
    fVar82 = pfVar5[2];
    piVar31 = (int *)(lVar32 + (long)iVar151 * 0x14);
    iVar151 = *(int *)(lVar28 + 0x40);
    iVar125 = *piVar31;
    iVar146 = piVar31[1];
    fVar85 = *(float *)(param_3 + 0x90) +
             *(float *)(param_3 + 0x80) * fVar99 +
             *(float *)(param_3 + 0x60) * fVar57 + *(float *)(param_3 + 0x70) * fVar54;
    fVar88 = *(float *)(param_3 + 0x94) +
             *(float *)(param_3 + 0x84) * fVar99 +
             *(float *)(param_3 + 100) * fVar57 + *(float *)(param_3 + 0x74) * fVar54;
    fVar91 = *(float *)(param_3 + 0x98) +
             *(float *)(param_3 + 0x88) * fVar99 +
             *(float *)(param_3 + 0x68) * fVar57 + *(float *)(param_3 + 0x78) * fVar54;
    fVar57 = *(float *)(param_3 + 0x9c) +
             *(float *)(param_3 + 0x8c) * fVar99 +
             *(float *)(param_3 + 0x6c) * fVar57 + *(float *)(param_3 + 0x7c) * fVar54;
    lVar26 = 0x38;
    if (iVar151 <= iVar125) {
      lVar26 = 0xf0;
    }
    iVar126 = 0;
    if (iVar151 <= iVar125) {
      iVar126 = iVar151;
    }
    iVar129 = 0;
    if (iVar151 <= iVar146) {
      iVar129 = iVar151;
    }
    pfVar5 = (float *)(*(long *)(lVar28 + lVar26) + (long)(iVar125 - iVar126) * 0x10);
    fVar54 = *pfVar5;
    fVar99 = pfVar5[1];
    fVar92 = pfVar5[2];
    lVar26 = 0x38;
    if (iVar151 <= iVar146) {
      lVar26 = 0xf0;
    }
    pfVar5 = (float *)(*(long *)(lVar28 + lVar26) + (long)(iVar146 - iVar129) * 0x10);
    fVar55 = *pfVar5;
    fVar36 = pfVar5[1];
    fVar39 = pfVar5[2];
    fVar40 = *(float *)(param_4 + 0x90) +
             *(float *)(param_4 + 0x80) * fVar92 +
             *(float *)(param_4 + 0x60) * fVar54 + *(float *)(param_4 + 0x70) * fVar99;
    fVar41 = *(float *)(param_4 + 0x94) +
             *(float *)(param_4 + 0x84) * fVar92 +
             *(float *)(param_4 + 100) * fVar54 + *(float *)(param_4 + 0x74) * fVar99;
    fVar42 = *(float *)(param_4 + 0x98) +
             *(float *)(param_4 + 0x88) * fVar92 +
             *(float *)(param_4 + 0x68) * fVar54 + *(float *)(param_4 + 0x78) * fVar99;
    fVar99 = *(float *)(param_4 + 0x9c) +
             *(float *)(param_4 + 0x8c) * fVar92 +
             *(float *)(param_4 + 0x6c) * fVar54 + *(float *)(param_4 + 0x7c) * fVar99;
    fVar92 = (*(float *)(param_3 + 0x90) +
             *(float *)(param_3 + 0x80) * fVar82 +
             *(float *)(param_3 + 0x60) * fVar100 + *(float *)(param_3 + 0x70) * fVar79) - fVar85;
    fVar44 = (*(float *)(param_3 + 0x94) +
             *(float *)(param_3 + 0x84) * fVar82 +
             *(float *)(param_3 + 100) * fVar100 + *(float *)(param_3 + 0x74) * fVar79) - fVar88;
    fVar56 = (*(float *)(param_3 + 0x98) +
             *(float *)(param_3 + 0x88) * fVar82 +
             *(float *)(param_3 + 0x68) * fVar100 + *(float *)(param_3 + 0x78) * fVar79) - fVar91;
    fVar100 = (*(float *)(param_3 + 0x9c) +
              *(float *)(param_3 + 0x8c) * fVar82 +
              *(float *)(param_3 + 0x6c) * fVar100 + *(float *)(param_3 + 0x7c) * fVar79) - fVar57;
    fVar79 = (*(float *)(param_4 + 0x90) +
             *(float *)(param_4 + 0x80) * fVar39 +
             *(float *)(param_4 + 0x60) * fVar55 + *(float *)(param_4 + 0x70) * fVar36) - fVar40;
    fVar82 = (*(float *)(param_4 + 0x94) +
             *(float *)(param_4 + 0x84) * fVar39 +
             *(float *)(param_4 + 100) * fVar55 + *(float *)(param_4 + 0x74) * fVar36) - fVar41;
    fVar75 = (*(float *)(param_4 + 0x98) +
             *(float *)(param_4 + 0x88) * fVar39 +
             *(float *)(param_4 + 0x68) * fVar55 + *(float *)(param_4 + 0x78) * fVar36) - fVar42;
    fVar55 = (*(float *)(param_4 + 0x9c) +
             *(float *)(param_4 + 0x8c) * fVar39 +
             *(float *)(param_4 + 0x6c) * fVar55 + *(float *)(param_4 + 0x7c) * fVar36) - fVar99;
    fVar54 = fVar56 * fVar56 + fVar92 * fVar92 + fVar44 * fVar44;
    if (fVar54 != 0.0) {
      fVar54 = SQRT(fVar54);
      fVar36 = SQRT(fVar56 * fVar56 + fVar92 * fVar92 + fVar44 * fVar44);
      auVar51._0_4_ = fVar92 / fVar54;
      auVar51._4_4_ = fVar44 / fVar36;
      auVar51._8_4_ = fVar56 / fVar54;
      auVar51._12_4_ = fVar100 / fVar36;
    }
    fVar54 = fVar75 * fVar75 + fVar79 * fVar79 + fVar82 * fVar82;
    auVar132 = ZEXT816(0);
    if (fVar54 != 0.0) {
      fVar54 = SQRT(fVar54);
      fVar36 = SQRT(fVar75 * fVar75 + fVar79 * fVar79 + fVar82 * fVar82);
      auVar132._0_4_ = fVar79 / fVar54;
      auVar132._4_4_ = fVar82 / fVar36;
      auVar132._8_4_ = fVar75 / fVar54;
      auVar132._12_4_ = fVar55 / fVar36;
    }
    fVar54 = -(fVar48 * fVar56 + fVar47 * fVar92 + fVar49 * fVar44);
    fVar39 = -(fVar48 * fVar56 + fVar47 * fVar92 + fVar49 * fVar44);
    fVar107 = fVar92 + fVar47 * fVar54;
    fVar109 = fVar44 + fVar49 * fVar39;
    fVar110 = fVar56 + fVar48 * fVar54;
    fVar54 = -(fVar48 * fVar75 + fVar47 * fVar79 + fVar49 * fVar82);
    fVar77 = -(fVar48 * fVar75 + fVar47 * fVar79 + fVar49 * fVar82);
    fVar101 = fVar107 * fVar107 + fVar109 * fVar109 + fVar110 * fVar110;
    fVar50 = 0.0;
    fVar53 = 0.0;
    fVar104 = 0.0;
    fVar52 = 0.0;
    fVar36 = fVar79 + fVar47 * fVar54;
    fVar78 = fVar82 + fVar49 * fVar77;
    fVar54 = fVar75 + fVar48 * fVar54;
    if (fVar101 != 0.0) {
      fVar101 = SQRT(fVar101);
      fVar52 = SQRT(fVar107 * fVar107 + fVar109 * fVar109 + fVar110 * fVar110);
      fVar50 = fVar107 / fVar101;
      fVar53 = fVar109 / fVar52;
      fVar104 = fVar110 / fVar101;
      fVar52 = (fVar100 + fVar74 * fVar39) / fVar52;
    }
    fVar39 = fVar54 * fVar54 + fVar36 * fVar36 + fVar78 * fVar78;
    fVar109 = 0.0;
    fVar110 = 0.0;
    fVar101 = 0.0;
    fVar107 = 0.0;
    if (fVar39 != 0.0) {
      fVar39 = SQRT(fVar39);
      fVar107 = SQRT(fVar54 * fVar54 + fVar36 * fVar36 + fVar78 * fVar78);
      fVar109 = fVar36 / fVar39;
      fVar110 = fVar78 / fVar107;
      fVar101 = fVar54 / fVar39;
      fVar107 = (fVar55 + fVar74 * fVar77) / fVar107;
    }
    auVar149._0_4_ = fVar50 * fVar109;
    auVar149._4_4_ = fVar53 * fVar110;
    auVar149._8_4_ = fVar104 * fVar101;
    auVar149._12_4_ = fVar52 * fVar107;
    auVar171 = NEON_ext(auVar149,auVar149,8,1);
    fVar54 = -(auVar149._0_4_ + auVar149._4_4_ + auVar171._0_4_);
    if (fVar54 < param_1[4]) {
      return 0;
    }
    fVar36 = auVar51._0_4_;
    fVar107 = auVar132._0_4_;
    auVar144._0_4_ = fVar36 - fVar107;
    fVar39 = auVar51._4_4_;
    fVar109 = auVar132._4_4_;
    auVar144._4_4_ = fVar39 - fVar109;
    fVar77 = auVar51._8_4_;
    fVar110 = auVar132._8_4_;
    auVar144._8_4_ = fVar77 - fVar110;
    fVar78 = auVar51._12_4_;
    fVar101 = auVar132._12_4_;
    auVar144._12_4_ = fVar78 - fVar101;
    auVar149 = NEON_ext(auVar144,auVar144,4,1);
    auVar171._12_4_ = fVar74;
    auVar171._0_12_ = *param_2;
    auVar87._12_4_ = fVar74;
    auVar87._0_12_ = *param_2;
    auVar171 = NEON_ext(auVar171,auVar87,4,1);
    fVar50 = auVar171._0_4_;
    fVar52 = auVar171._4_4_;
    auVar173._0_4_ = fVar50 * auVar144._0_4_ - fVar47 * auVar149._0_4_;
    auVar173._4_4_ = fVar52 * auVar144._4_4_ - fVar49 * auVar149._4_4_;
    auVar173._8_4_ = fVar47 * auVar144._8_4_ - fVar48 * auVar144._0_4_;
    auVar173._12_4_ = fVar49 * auVar144._12_4_ - fVar74 * auVar144._4_4_;
    auVar149 = NEON_ext(auVar173,auVar173,4,1);
    fVar46 = auVar149._0_4_;
    fVar64 = auVar149._4_4_;
    fVar71 = auVar173._0_4_ * auVar173._0_4_ + fVar46 * fVar46 + fVar64 * fVar64;
    fVar53 = 0.0;
    fVar43 = 0.0;
    fVar45 = 0.0;
    fVar104 = 0.0;
    fVar73 = 0.0;
    fVar105 = 0.0;
    fVar106 = 0.0;
    fVar72 = 0.0;
    if (fVar71 != 0.0) {
      fVar71 = SQRT(fVar71);
      fVar72 = SQRT(auVar173._0_4_ * auVar173._0_4_ + fVar46 * fVar46 + fVar64 * fVar64);
      fVar73 = fVar46 / fVar71;
      fVar105 = fVar64 / fVar72;
      fVar106 = auVar173._0_4_ / fVar71;
      fVar72 = 0.0 / fVar72;
    }
    fVar46 = -(fVar36 * fVar73 + fVar39 * fVar105 + fVar77 * fVar106);
    fVar71 = -(fVar36 * fVar73 + fVar39 * fVar105 + fVar77 * fVar106);
    fVar114 = fVar36 + fVar73 * fVar46;
    fVar115 = fVar39 + fVar105 * fVar71;
    fVar123 = fVar77 + fVar106 * fVar46;
    fVar46 = -(fVar107 * fVar73 + fVar109 * fVar105 + fVar110 * fVar106);
    fVar111 = -(fVar107 * fVar73 + fVar109 * fVar105 + fVar110 * fVar106);
    fVar116 = fVar114 * fVar114 + fVar115 * fVar115 + fVar123 * fVar123;
    fVar64 = fVar107 + fVar73 * fVar46;
    fVar73 = fVar109 + fVar105 * fVar111;
    fVar46 = fVar110 + fVar106 * fVar46;
    fVar105 = 0.0;
    fVar120 = 0.0;
    fVar121 = 0.0;
    fVar106 = 0.0;
    if (fVar116 != 0.0) {
      fVar116 = SQRT(fVar116);
      fVar106 = SQRT(fVar114 * fVar114 + fVar115 * fVar115 + fVar123 * fVar123);
      fVar105 = fVar114 / fVar116;
      fVar120 = fVar115 / fVar106;
      fVar121 = fVar123 / fVar116;
      fVar106 = (fVar78 + fVar72 * fVar71) / fVar106;
    }
    fVar71 = fVar46 * fVar46 + fVar64 * fVar64 + fVar73 * fVar73;
    if (fVar71 != 0.0) {
      fVar71 = SQRT(fVar71);
      fVar104 = SQRT(fVar46 * fVar46 + fVar64 * fVar64 + fVar73 * fVar73);
      fVar53 = fVar64 / fVar71;
      fVar43 = fVar73 / fVar104;
      fVar45 = fVar46 / fVar71;
      fVar104 = (fVar101 + fVar72 * fVar111) / fVar104;
    }
    auVar76._0_4_ = fVar105 * fVar53;
    auVar76._4_4_ = fVar120 * fVar43;
    auVar76._8_4_ = fVar121 * fVar45;
    auVar76._12_4_ = fVar106 * fVar104;
    auVar149 = NEON_ext(auVar76,auVar76,8,1);
    if (-(auVar76._0_4_ + auVar76._4_4_ + auVar149._0_4_) < param_1[5]) {
      return 1;
    }
    fVar104 = fVar47 * auVar144._0_4_ * 0.5;
    fVar45 = fVar49 * auVar144._4_4_ * 0.5;
    fVar46 = fVar48 * auVar144._8_4_ * 0.5;
    fVar43 = -(fVar46 + fVar104 + fVar45);
    fVar53 = auVar144._0_4_ * 0.5 + fVar47 * fVar43;
    fVar104 = auVar144._4_4_ * 0.5 + fVar49 * -(fVar46 + fVar104 + fVar45);
    fVar43 = auVar144._8_4_ * 0.5 + fVar48 * fVar43;
    fVar45 = fVar53 * fVar53 + fVar104 * fVar104 + fVar43 * fVar43;
    if (fVar45 == 0.0) {
      auVar118 = SUB1612(ZEXT816(0),0);
    }
    else {
      fVar45 = SQRT(fVar45);
      auVar118._0_4_ = fVar53 / fVar45;
      auVar118._4_4_ = fVar104 / SQRT(fVar53 * fVar53 + fVar104 * fVar104 + fVar43 * fVar43);
      auVar118._8_4_ = fVar43 / fVar45;
    }
    fVar43 = auVar118._0_4_;
    fVar72 = (fVar85 + fVar92) * fVar43;
    fVar45 = auVar118._4_4_;
    fVar73 = (fVar88 + fVar44) * fVar45;
    fVar46 = auVar118._8_4_;
    fVar71 = (fVar91 + fVar56) * fVar46;
    fVar53 = (fVar40 + fVar79 * 0.0) * fVar43;
    fVar104 = (fVar41 + fVar82 * 0.0) * fVar45;
    fVar111 = (fVar42 + fVar75 * 0.0) * fVar46;
    fVar64 = fVar72 + fVar73 + fVar71;
    fVar71 = fVar72 + fVar73 + fVar71;
    fVar72 = (fVar40 + fVar79) * fVar43;
    fVar73 = (fVar41 + fVar82) * fVar45;
    fVar105 = (fVar42 + fVar75) * fVar46;
    fVar106 = fVar111 + fVar53 + fVar104;
    uVar124 = CONCAT44(fVar111 + fVar53 + fVar104,fVar106);
    fVar104 = fVar105 + fVar72 + fVar73;
    fVar105 = fVar105 + fVar72 + fVar73;
    fVar53 = fVar104;
    if (fVar104 >= fVar106) {
      fVar53 = fVar106;
    }
    iVar125 = -(uint)(fVar104 < fVar106);
    if (fVar64 < fVar53) {
      return 3;
    }
    uVar135 = (undefined1)((uint)iVar125 >> 8);
    uVar137 = (undefined1)((uint)iVar125 >> 0x10);
    uVar139 = (undefined1)((uint)iVar125 >> 0x18);
    uVar158 = CONCAT44(fVar105,fVar104) ^
              (CONCAT44(fVar105,fVar104) ^ uVar124) &
              CONCAT17(uVar139,CONCAT16(uVar137,CONCAT15(uVar135,CONCAT14((char)iVar125,iVar125))));
    fVar43 = (fVar85 + fVar92 * 0.0) * fVar43;
    fVar45 = (fVar88 + fVar44 * 0.0) * fVar45;
    fVar46 = (fVar91 + fVar56 * 0.0) * fVar46;
    fVar53 = fVar43 + fVar45 + fVar46;
    fVar46 = fVar43 + fVar45 + fVar46;
    fVar43 = (float)uVar158;
    fVar45 = (float)(uVar158 >> 0x20);
    if (fVar43 < fVar53) {
      return 3;
    }
    fVar72 = fVar64 - fVar53;
    if (fVar72 < 1e-06) {
      return 3;
    }
    uVar124 = CONCAT44(fVar105,fVar104) ^
              (CONCAT44(fVar105,fVar104) ^ uVar124) &
              ~CONCAT17(uVar139,CONCAT16(uVar137,CONCAT15(uVar135,CONCAT14((char)iVar125,iVar125))))
    ;
    fVar73 = (float)uVar124;
    fVar105 = (float)(uVar124 >> 0x20);
    fVar104 = fVar43 - fVar73;
    if (fVar104 < 1e-06) {
      return 3;
    }
    uVar169 = NEON_fmax(CONCAT44(fVar46,fVar53),uVar124,4);
    uVar142 = NEON_fmin(CONCAT44(fVar71,fVar64),uVar158,4);
    fVar106 = (float)uVar142 - (float)uVar169;
    if (((fVar106 < param_1[6]) && (1e-05 < ABS(fVar106 - fVar72))) &&
       (1e-05 < ABS(fVar106 - fVar104))) {
      return 4;
    }
    param_9[3] = param_8;
    param_9[4] = -0x40800000;
    *(undefined1 *)(param_9 + 7) = 1;
    param_9[5] = (int)fVar54;
    param_9[6] = (int)fVar106;
    uVar169 = NEON_fmov(0x3f800000,4);
    fVar54 = (float)uVar169;
    fVar106 = (float)((ulong)uVar169 >> 0x20);
    fVar116 = fVar106 / (fVar71 - fVar46);
    fVar115 = 0.0;
    fVar123 = 0.0;
    *param_9 = param_5;
    param_9[1] = param_6;
    param_9[2] = param_7;
    fVar120 = fVar106 / (fVar45 - fVar105);
    fVar111 = fVar115;
    fVar114 = fVar123;
    if (0.001 < ABS(fVar53 - fVar73)) {
      if (fVar53 <= fVar73) {
        fVar111 = (fVar54 / fVar72) * (fVar73 - fVar53);
        fVar114 = fVar116 * (fVar105 - fVar46);
      }
      else {
        fVar115 = (fVar53 - fVar73) * (fVar54 / fVar104);
        fVar123 = (fVar46 - fVar105) * fVar120;
      }
    }
    uVar142 = uVar169;
    if (0.001 < ABS(fVar64 - fVar43)) {
      if (fVar64 <= fVar43) {
        uVar142 = CONCAT44((fVar71 - fVar105) * fVar120,(fVar64 - fVar73) * (fVar54 / fVar104));
      }
      else {
        uVar169 = CONCAT44(fVar116 * (fVar45 - fVar46),(fVar54 / fVar72) * (fVar43 - fVar53));
      }
    }
    fVar53 = (float)uVar169;
    fVar104 = (float)((ulong)uVar169 >> 0x20);
    if (!(bool)(~(fVar53 <= fVar111) & 1)) {
      return 5;
    }
    fVar115 = fVar54 - fVar115;
    fVar54 = fVar54 - (float)uVar142;
    fVar43 = fVar106 - (float)((ulong)uVar142 >> 0x20);
    uVar135 = (undefined1)((uint)fVar43 >> 8);
    uVar137 = (undefined1)((uint)fVar43 >> 0x10);
    uVar139 = (undefined1)((uint)fVar43 >> 0x18);
    if (!(bool)(~(fVar115 <= fVar54) & 1)) {
      return 5;
    }
    fVar64 = fVar85 + fVar92 * fVar111;
    fVar71 = fVar88 + fVar44 * fVar114;
    fVar72 = fVar91 + fVar56 * fVar111;
    fVar73 = fVar57 + fVar100 * fVar114;
    fVar45 = fVar85 + fVar92 * fVar53;
    fVar46 = fVar88 + fVar44 * fVar104;
    fVar56 = fVar91 + fVar56 * fVar53;
    fVar57 = fVar57 + fVar100 * fVar104;
    auVar153._0_4_ = fVar45 - fVar64;
    auVar153._4_4_ = fVar46 - fVar71;
    auVar153._8_4_ = fVar56 - fVar72;
    auVar153._12_4_ = fVar57 - fVar73;
    auVar171 = NEON_ext(auVar153,auVar153,4,1);
    fVar105 = fVar40 + fVar79 * fVar54;
    fVar114 = fVar41 + fVar82 * (float)(CONCAT17(uVar139,CONCAT16(uVar137,CONCAT15(uVar135,CONCAT14(
                                                  SUB41(fVar43,0),fVar54)))) >> 0x20);
    fVar116 = fVar42 + fVar75 * fVar54;
    fVar120 = fVar99 + fVar55 * (float)(CONCAT17(uVar139,CONCAT16(uVar137,CONCAT15(uVar135,CONCAT14(
                                                  SUB41(fVar43,0),fVar54)))) >> 0x20);
    fVar104 = fVar40 + fVar79 * fVar115;
    fVar43 = fVar41 + fVar82 * (fVar106 - fVar123);
    fVar75 = fVar42 + fVar75 * fVar115;
    fVar99 = fVar99 + fVar55 * (fVar106 - fVar123);
    auVar147._0_4_ = fVar104 - fVar105;
    auVar147._4_4_ = fVar43 - fVar114;
    auVar147._8_4_ = fVar75 - fVar116;
    auVar147._12_4_ = fVar99 - fVar120;
    auVar149 = NEON_ext(auVar147,auVar147,4,1);
    fVar79 = fVar105 - fVar64;
    fVar82 = fVar114 - fVar71;
    fVar44 = fVar116 - fVar72;
    auVar86._0_4_ = auVar153._0_4_ * fVar79;
    auVar86._4_4_ = auVar153._4_4_ * fVar82;
    auVar86._8_4_ = auVar153._8_4_ * fVar44;
    auVar86._12_4_ = auVar153._12_4_ * (fVar120 - fVar73);
    fVar100 = auVar147._0_4_ * auVar171._0_4_ - auVar153._0_4_ * auVar149._0_4_;
    auVar128._0_8_ =
         CONCAT44(auVar147._4_4_ * auVar171._4_4_ - auVar153._4_4_ * auVar149._4_4_,fVar100);
    auVar128._8_4_ = auVar147._8_4_ * auVar153._0_4_ - auVar153._8_4_ * auVar147._0_4_;
    auVar128._12_4_ = auVar147._12_4_ * auVar153._4_4_ - auVar153._12_4_ * auVar147._4_4_;
    auVar171 = NEON_ext(auVar128,auVar128,4,1);
    uVar169 = NEON_ext(auVar171._0_8_,auVar128._0_8_,4,1);
    fVar92 = auVar171._0_4_;
    fVar55 = auVar171._4_4_;
    fVar123 = fVar100 * fVar100 + fVar92 * fVar92 + fVar55 * fVar55;
    fVar121 = fVar100 * fVar100 + fVar92 * fVar92 + fVar55 * fVar55;
    uVar142 = NEON_fmov(0x3f800000,4);
    auVar83._0_4_ = auVar153._0_4_ * auVar153._0_4_;
    auVar83._4_4_ = auVar153._4_4_ * auVar153._4_4_;
    auVar83._8_4_ = auVar153._8_4_ * auVar153._8_4_;
    auVar83._12_4_ = auVar153._12_4_ * auVar153._12_4_;
    fVar106 = (float)((ulong)uVar142 >> 0x20);
    auVar163._0_4_ = auVar149._0_4_ * fVar92 - auVar147._0_4_ * (float)uVar169;
    auVar163._4_4_ = auVar149._4_4_ * fVar55 - auVar147._4_4_ * (float)((ulong)uVar169 >> 0x20);
    auVar163._8_4_ = auVar147._0_4_ * fVar100 - auVar147._8_4_ * fVar92;
    auVar163._12_4_ = auVar147._4_4_ * 0.0 - auVar147._12_4_ * fVar55;
    auVar149 = NEON_ext(auVar163,auVar163,4,1);
    iVar125 = -(uint)(fVar123 == 0.0);
    uVar89 = CONCAT13(~(byte)((uint)iVar125 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar125 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar125 >> 8),~(byte)iVar125)));
    fVar122 = fVar79 * auVar149._0_4_;
    fVar134 = fVar82 * auVar149._4_4_;
    uVar124 = CONCAT44(fVar106 / fVar121,(float)uVar142 / fVar123) & CONCAT44(uVar89,uVar89);
    fVar133 = auVar153._8_4_ * auVar147._8_4_ +
              auVar153._0_4_ * auVar147._0_4_ + auVar153._4_4_ * auVar147._4_4_;
    fVar150 = auVar153._8_4_ * auVar147._8_4_ +
              auVar153._0_4_ * auVar147._0_4_ + auVar153._4_4_ * auVar147._4_4_;
    auVar80._0_4_ = auVar147._0_4_ * auVar147._0_4_;
    auVar80._4_4_ = auVar147._4_4_ * auVar147._4_4_;
    auVar80._8_4_ = auVar147._8_4_ * auVar147._8_4_;
    auVar80._12_4_ = auVar147._12_4_ * auVar147._12_4_;
    auVar143._0_4_ = auVar147._0_4_ * fVar79;
    auVar143._4_4_ = auVar147._4_4_ * fVar82;
    auVar143._8_4_ = auVar147._8_4_ * fVar44;
    auVar143._12_4_ = auVar147._12_4_ * (fVar120 - fVar73);
    auVar171 = NEON_ext(auVar83,auVar83,8,1);
    auVar87 = NEON_ext(auVar86,auVar86,8,1);
    auVar149 = NEON_ext(auVar80,auVar80,8,1);
    auVar144 = NEON_ext(auVar143,auVar143,8,1);
    fVar100 = auVar171._0_4_ + auVar83._0_4_ + auVar83._4_4_;
    fVar82 = auVar87._0_4_ + auVar86._0_4_ + auVar86._4_4_;
    fVar92 = auVar149._0_4_ + auVar80._0_4_ + auVar80._4_4_;
    fVar55 = auVar144._0_4_ + auVar143._0_4_ + auVar143._4_4_;
    iVar125 = -(uint)(fVar100 == 0.0);
    iVar146 = -(uint)(fVar92 == 0.0);
    auVar149 = NEON_fmov(0x3f800000,4);
    fVar100 = auVar149._0_4_ / fVar100;
    fVar92 = auVar149._8_4_ / fVar92;
    uVar169 = NEON_fminnm(CONCAT44((fVar44 * auVar163._0_4_ + fVar122 + fVar134) *
                                   (float)(uVar124 >> 0x20),
                                   (fVar44 * auVar163._0_4_ + fVar122 + fVar134) * (float)uVar124),
                          uVar142,4);
    uVar124 = NEON_fmax(uVar169,0,4);
    iVar151 = -(uint)(fVar123 == 0.0);
    iVar126 = -(uint)(fVar121 == 0.0);
    fVar79 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar125 >> 0x18),
                             CONCAT12((byte)((uint)fVar100 >> 0x10) & ~(byte)((uint)iVar125 >> 0x10)
                                      ,CONCAT11((byte)((uint)fVar100 >> 8) &
                                                ~(byte)((uint)iVar125 >> 8),
                                                SUB41(fVar100,0) & ~(byte)iVar125)));
    fVar100 = (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar146 >> 0x18),
                              CONCAT12((byte)((uint)fVar92 >> 0x10) & ~(byte)((uint)iVar146 >> 0x10)
                                       ,CONCAT11((byte)((uint)fVar92 >> 8) &
                                                 ~(byte)((uint)iVar146 >> 8),
                                                 SUB41(fVar92,0) & ~(byte)iVar146)));
    fVar92 = ((float)uVar124 * fVar133 - fVar55) * fVar100;
    fVar100 = ((float)(uVar124 >> 0x20) * fVar150 - fVar55) * fVar100;
    uVar169 = NEON_fminnm(CONCAT44(fVar100,fVar92),uVar142,4);
    uVar169 = NEON_fmax(uVar169,0,4);
    fVar55 = (float)uVar169;
    fVar44 = (float)((ulong)uVar169 >> 0x20);
    iVar125 = -(uint)(fVar55 == fVar92);
    iVar146 = -(uint)(fVar44 == fVar100);
    uVar169 = NEON_fminnm(CONCAT44((fVar82 + fVar44 * fVar150) * fVar79,
                                   (fVar82 + fVar55 * fVar133) * fVar79),uVar142,4);
    uVar158 = NEON_fmax(uVar169,0,4);
    uVar124 = uVar124 ^ (uVar124 ^ uVar158) &
                        CONCAT17(~(byte)((uint)iVar146 >> 0x18) | (byte)((uint)iVar126 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar146 >> 0x10) |
                                          (byte)((uint)iVar126 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar146 >> 8) |
                                                   (byte)((uint)iVar126 >> 8),
                                                   CONCAT14(~(byte)iVar146 | (byte)iVar126,
                                                            CONCAT13(~(byte)((uint)iVar125 >> 0x18)
                                                                     | (byte)((uint)iVar151 >> 0x18)
                                                                     ,CONCAT12(~(byte)((uint)iVar125
                                                                                      >> 0x10) |
                                                                               (byte)((uint)iVar151
                                                                                     >> 0x10),
                                                                               CONCAT11(~(byte)((
                                                  uint)iVar125 >> 8) | (byte)((uint)iVar151 >> 8),
                                                  ~(byte)iVar125 | (byte)iVar151)))))));
    fVar123 = (float)uVar124;
    fVar100 = *(float *)*param_2;
    fVar79 = *(float *)(*param_2 + 4);
    fVar82 = *(float *)(*param_2 + 8);
    fVar92 = *(float *)param_2[1];
    if (*param_1 <
        ABS(fVar100 * ((fVar64 + auVar153._0_4_ * fVar123) - (fVar105 + auVar147._0_4_ * fVar55)) +
            fVar79 * ((fVar71 + auVar153._4_4_ * (float)(uVar124 >> 0x20)) -
                     (fVar114 + auVar147._4_4_ * fVar44)) +
            fVar82 * ((fVar72 + auVar153._8_4_ * fVar123) - (fVar116 + auVar147._8_4_ * fVar55)))) {
      return 6;
    }
    fVar55 = fVar72 * fVar82 + fVar64 * fVar100 + fVar71 * fVar79;
    fVar44 = fVar72 * fVar82 + fVar64 * fVar100 + fVar71 * fVar79;
    fVar123 = fVar56 * fVar82 + fVar45 * fVar100 + fVar46 * fVar79;
    fVar121 = fVar56 * fVar82 + fVar45 * fVar100 + fVar46 * fVar79;
    fVar134 = fVar64 - fVar100 * fVar55;
    fVar150 = fVar71 - fVar79 * fVar44;
    fVar152 = fVar72 - fVar82 * fVar55;
    fVar154 = fVar73 - fVar92 * fVar44;
    auVar164._0_4_ = (fVar45 - fVar100 * fVar123) - fVar134;
    auVar164._4_4_ = (fVar46 - fVar79 * fVar121) - fVar150;
    auVar164._8_4_ = (fVar56 - fVar82 * fVar123) - fVar152;
    auVar164._12_4_ = (fVar57 - fVar92 * fVar121) - fVar154;
    fVar55 = fVar116 * fVar82 + fVar105 * fVar100 + fVar114 * fVar79;
    fVar44 = fVar116 * fVar82 + fVar105 * fVar100 + fVar114 * fVar79;
    fVar123 = fVar75 * fVar82 + fVar104 * fVar100 + fVar43 * fVar79;
    fVar121 = fVar75 * fVar82 + fVar104 * fVar100 + fVar43 * fVar79;
    auVar171 = NEON_ext(auVar164,auVar164,4,1);
    fVar161 = fVar105 - fVar100 * fVar55;
    fVar165 = fVar114 - fVar79 * fVar44;
    fVar166 = fVar116 - fVar82 * fVar55;
    fVar155 = fVar120 - fVar92 * fVar44;
    fVar44 = fVar161 - fVar134;
    fVar122 = fVar165 - fVar150;
    fVar133 = fVar166 - fVar152;
    auVar160._0_4_ = (fVar104 - fVar100 * fVar123) - fVar161;
    auVar160._4_4_ = (fVar43 - fVar79 * fVar121) - fVar165;
    auVar160._8_4_ = (fVar75 - fVar82 * fVar123) - fVar166;
    auVar160._12_4_ = (fVar99 - fVar92 * fVar121) - fVar155;
    auVar87 = NEON_ext(auVar160,auVar160,4,1);
    auVar94._0_4_ = auVar160._0_4_ * auVar160._0_4_;
    auVar94._4_4_ = auVar160._4_4_ * auVar160._4_4_;
    auVar94._8_4_ = auVar160._8_4_ * auVar160._8_4_;
    auVar94._12_4_ = auVar160._12_4_ * auVar160._12_4_;
    fVar100 = auVar171._0_4_ * auVar160._0_4_ - auVar164._0_4_ * auVar87._0_4_;
    auVar81._0_8_ =
         CONCAT44(auVar171._4_4_ * auVar160._4_4_ - auVar164._4_4_ * auVar87._4_4_,fVar100);
    auVar81._8_4_ = auVar164._0_4_ * auVar160._8_4_ - auVar164._8_4_ * auVar160._0_4_;
    auVar81._12_4_ = auVar164._4_4_ * auVar160._12_4_ - auVar164._12_4_ * auVar160._4_4_;
    auVar171 = NEON_ext(auVar81,auVar81,4,1);
    uVar169 = NEON_ext(auVar171._0_8_,auVar81._0_8_,4,1);
    fVar92 = auVar171._0_4_;
    fVar55 = auVar171._4_4_;
    auVar93._0_4_ = auVar164._0_4_ * fVar44;
    auVar93._4_4_ = auVar164._4_4_ * fVar122;
    auVar93._8_4_ = auVar164._8_4_ * fVar133;
    auVar93._12_4_ = auVar164._12_4_ * (fVar155 - fVar154);
    fVar79 = fVar92 * fVar92 + fVar55 * fVar55 + fVar100 * fVar100;
    fVar82 = fVar92 * fVar92 + fVar55 * fVar55 + fVar100 * fVar100;
    iVar125 = -(uint)(fVar79 == 0.0);
    uVar89 = CONCAT13(~(byte)((uint)iVar125 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar125 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar125 >> 8),~(byte)iVar125)));
    auVar84._0_4_ = auVar87._0_4_ * fVar92 - auVar160._0_4_ * (float)uVar169;
    auVar84._4_4_ = auVar87._4_4_ * fVar55 - auVar160._4_4_ * (float)((ulong)uVar169 >> 0x20);
    auVar84._8_4_ = auVar160._0_4_ * fVar100 - auVar160._8_4_ * fVar92;
    auVar84._12_4_ = auVar160._4_4_ * 0.0 - auVar160._12_4_ * fVar55;
    auVar171 = NEON_ext(auVar84,auVar84,4,1);
    uVar124 = CONCAT44(fVar106 / fVar82,(float)uVar142 / fVar79) & CONCAT44(uVar89,uVar89);
    fVar100 = fVar44 * auVar171._0_4_;
    fVar92 = fVar122 * auVar171._4_4_;
    auVar90._0_4_ = auVar164._0_4_ * auVar164._0_4_;
    auVar90._4_4_ = auVar164._4_4_ * auVar164._4_4_;
    auVar90._8_4_ = auVar164._8_4_ * auVar164._8_4_;
    auVar90._12_4_ = auVar164._12_4_ * auVar164._12_4_;
    auVar172._0_4_ = fVar44 * auVar160._0_4_;
    auVar172._4_4_ = fVar122 * auVar160._4_4_;
    auVar172._8_4_ = fVar133 * auVar160._8_4_;
    auVar172._12_4_ = (fVar155 - fVar154) * auVar160._12_4_;
    fVar55 = auVar164._0_4_ * auVar160._0_4_ + auVar164._4_4_ * auVar160._4_4_ +
             auVar164._8_4_ * auVar160._8_4_;
    fVar44 = auVar164._0_4_ * auVar160._0_4_ + auVar164._4_4_ * auVar160._4_4_ +
             auVar164._8_4_ * auVar160._8_4_;
    auVar171 = NEON_ext(auVar90,auVar90,8,1);
    auVar87 = NEON_ext(auVar93,auVar93,8,1);
    auVar144 = NEON_ext(auVar94,auVar94,8,1);
    auVar173 = NEON_ext(auVar172,auVar172,8,1);
    fVar106 = auVar171._0_4_ + auVar90._0_4_ + auVar90._4_4_;
    fVar123 = auVar87._0_4_ + auVar93._0_4_ + auVar93._4_4_;
    fVar121 = auVar144._0_4_ + auVar94._0_4_ + auVar94._4_4_;
    fVar122 = auVar173._0_4_ + auVar172._0_4_ + auVar172._4_4_;
    uVar169 = NEON_fminnm(CONCAT44((float)(uVar124 >> 0x20) *
                                   (fVar100 + fVar92 + fVar133 * auVar84._0_4_),
                                   (float)uVar124 * (fVar100 + fVar92 + fVar133 * auVar84._0_4_)),
                          uVar142,4);
    fVar100 = auVar149._0_4_ / fVar106;
    fVar92 = auVar149._8_4_ / fVar121;
    uVar124 = NEON_fmax(uVar169,0,4);
    iVar125 = -(uint)(fVar106 == 0.0);
    iVar146 = -(uint)(fVar121 == 0.0);
    fVar133 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar125 >> 0x18),
                              CONCAT12((byte)((uint)fVar100 >> 0x10) &
                                       ~(byte)((uint)iVar125 >> 0x10),
                                       CONCAT11((byte)((uint)fVar100 >> 8) &
                                                ~(byte)((uint)iVar125 >> 8),
                                                SUB41(fVar100,0) & ~(byte)iVar125)));
    fVar100 = (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar146 >> 0x18),
                              CONCAT12((byte)((uint)fVar92 >> 0x10) & ~(byte)((uint)iVar146 >> 0x10)
                                       ,CONCAT11((byte)((uint)fVar92 >> 8) &
                                                 ~(byte)((uint)iVar146 >> 8),
                                                 SUB41(fVar92,0) & ~(byte)iVar146)));
    fVar121 = ((float)uVar124 * fVar55 - fVar122) * fVar100;
    fVar100 = ((float)(uVar124 >> 0x20) * fVar44 - fVar122) * fVar100;
    uVar169 = NEON_fminnm(CONCAT44(fVar100,fVar121),uVar142,4);
    uVar169 = NEON_fmax(uVar169,0,4);
    fVar92 = (float)uVar169;
    fVar106 = (float)((ulong)uVar169 >> 0x20);
    iVar125 = -(uint)(fVar92 == fVar121);
    iVar146 = -(uint)(fVar106 == fVar100);
    uVar169 = NEON_fminnm(CONCAT44((fVar106 * fVar44 + fVar123) * fVar133,
                                   (fVar92 * fVar55 + fVar123) * fVar133),uVar142,4);
    iVar151 = -(uint)(fVar79 == 0.0);
    iVar126 = -(uint)(fVar82 == 0.0);
    uVar158 = NEON_fmax(uVar169,0,4);
    uVar124 = uVar124 ^ (uVar124 ^ uVar158) &
                        CONCAT17(~(byte)((uint)iVar146 >> 0x18) | (byte)((uint)iVar126 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar146 >> 0x10) |
                                          (byte)((uint)iVar126 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar146 >> 8) |
                                                   (byte)((uint)iVar126 >> 8),
                                                   CONCAT14(~(byte)iVar146 | (byte)iVar126,
                                                            CONCAT13(~(byte)((uint)iVar125 >> 0x18)
                                                                     | (byte)((uint)iVar151 >> 0x18)
                                                                     ,CONCAT12(~(byte)((uint)iVar125
                                                                                      >> 0x10) |
                                                                               (byte)((uint)iVar151
                                                                                     >> 0x10),
                                                                               CONCAT11(~(byte)((
                                                  uint)iVar125 >> 8) | (byte)((uint)iVar151 >> 8),
                                                  ~(byte)iVar125 | (byte)iVar151)))))));
    fVar100 = (float)uVar124;
    fVar82 = (float)(uVar124 >> 0x20);
    fVar79 = (fVar134 + auVar164._0_4_ * fVar100) - (fVar161 + auVar160._0_4_ * fVar92);
    fVar55 = (fVar150 + auVar164._4_4_ * fVar82) - (fVar165 + auVar160._4_4_ * fVar106);
    fVar100 = (fVar152 + auVar164._8_4_ * fVar100) - (fVar166 + auVar160._8_4_ * fVar92);
    fVar82 = (fVar154 + auVar164._12_4_ * fVar82) - (fVar155 + auVar160._12_4_ * fVar106);
    auVar98._0_4_ = fVar79 * fVar79;
    auVar98._4_4_ = fVar55 * fVar55;
    auVar98._8_4_ = fVar100 * fVar100;
    auVar98._12_4_ = fVar82 * fVar82;
    auVar149 = NEON_ext(auVar98,auVar98,8,1);
    if (param_1[1] * param_1[1] < auVar98._0_4_ + auVar98._4_4_ + auVar149._0_4_) {
      return 2;
    }
    param_9[8] = (int)fVar111;
    param_9[9] = (int)fVar53;
    param_9[10] = (int)fVar54;
    param_9[0xb] = (int)fVar115;
    fVar100 = *(float *)*param_2;
    fVar79 = *(float *)(*param_2 + 4);
    fVar82 = *(float *)(*param_2 + 8);
    fVar44 = fVar64 * fVar100 + fVar71 * fVar79 + fVar72 * fVar82;
    fVar53 = fVar45 * fVar100 + fVar46 * fVar79 + fVar56 * fVar82;
    fVar115 = fVar116 * fVar82 + fVar105 * fVar100 + fVar114 * fVar79;
    fVar54 = fVar75 * fVar82 + fVar104 * fVar100 + fVar43 * fVar79;
    fVar92 = fVar64 - fVar100 * fVar44;
    fVar55 = fVar71 - fVar79 * (fVar64 * fVar100 + fVar71 * fVar79 + fVar72 * fVar82);
    fVar44 = fVar72 - fVar82 * fVar44;
    fVar106 = fVar45 - fVar100 * fVar53;
    fVar111 = fVar46 - fVar79 * (fVar45 * fVar100 + fVar46 * fVar79 + fVar56 * fVar82);
    fVar123 = fVar56 - fVar82 * fVar53;
    fVar134 = fVar105 - fVar100 * fVar115;
    fVar150 = fVar114 - fVar79 * (fVar116 * fVar82 + fVar105 * fVar100 + fVar114 * fVar79);
    fVar152 = fVar116 - fVar82 * fVar115;
    fVar53 = fVar104 - fVar100 * fVar54;
    fVar79 = fVar43 - fVar79 * (fVar75 * fVar82 + fVar104 * fVar100 + fVar43 * fVar79);
    fVar54 = fVar75 - fVar82 * fVar54;
    fVar121 = fVar92 - fVar106;
    fVar122 = fVar55 - fVar111;
    fVar133 = fVar44 - fVar123;
    fVar100 = fVar134 - fVar53;
    fVar82 = fVar150 - fVar79;
    fVar115 = fVar152 - fVar54;
    fVar106 = fVar134 - (fVar92 + (fVar106 - fVar92) * 0.5);
    fVar111 = fVar150 - (fVar55 + (fVar111 - fVar55) * 0.5);
    fVar123 = fVar152 - (fVar44 + (fVar123 - fVar44) * 0.5);
    fVar92 = fVar92 - (fVar134 + (fVar53 - fVar134) * 0.5);
    fVar55 = fVar55 - (fVar150 + (fVar79 - fVar150) * 0.5);
    fVar44 = fVar44 - (fVar152 + (fVar54 - fVar152) * 0.5);
    fVar79 = fVar100 * fVar106;
    fVar53 = fVar82 * fVar111;
    fVar134 = fVar115 * fVar123;
    fVar150 = fVar121 * fVar92;
    fVar152 = fVar122 * fVar55;
    fVar154 = fVar133 * fVar44;
    fVar54 = (fVar79 + fVar53 + fVar134) / (fVar100 * fVar100 + fVar82 * fVar82 + fVar115 * fVar115)
    ;
    auVar51 = NEON_ext(auVar51,auVar51,4,1);
    uVar169 = NEON_fminnm(CONCAT17((char)((uint)fVar54 >> 0x18),
                                   CONCAT16((char)((uint)fVar54 >> 0x10),
                                            CONCAT15((char)((uint)fVar54 >> 8),
                                                     CONCAT14(SUB41(fVar54,0),
                                                              (fVar79 + fVar53 + fVar134) /
                                                              (fVar100 * fVar100 + fVar82 * fVar82 +
                                                              fVar115 * fVar115))))),uVar142,4);
    uVar142 = NEON_fminnm(CONCAT44((fVar150 + fVar152 + fVar154) /
                                   (fVar133 * fVar133 + fVar121 * fVar121 + fVar122 * fVar122),
                                   (fVar150 + fVar152 + fVar154) /
                                   (fVar133 * fVar133 + fVar121 * fVar121 + fVar122 * fVar122)),
                          uVar142,4);
    uVar169 = NEON_fmax(uVar169,0,4);
    uVar142 = NEON_fmax(uVar142,0,4);
    fVar92 = fVar92 - fVar121 * (float)uVar142;
    fVar55 = fVar55 - fVar122 * (float)((ulong)uVar142 >> 0x20);
    fVar44 = fVar44 - fVar133 * (float)uVar142;
    fVar106 = fVar106 - (float)uVar169 * fVar100;
    fVar111 = fVar111 - (float)((ulong)uVar169 >> 0x20) * fVar82;
    fVar123 = fVar123 - (float)uVar169 * fVar115;
    auVar119._0_4_ = fVar50 * fVar36 - fVar47 * auVar51._0_4_;
    auVar119._4_4_ = fVar52 * fVar39 - fVar49 * auVar51._4_4_;
    auVar119._8_4_ = fVar47 * fVar77 - fVar48 * fVar36;
    auVar119._12_4_ = fVar49 * fVar78 - fVar74 * fVar39;
    auVar51 = NEON_ext(auVar132,auVar132,4,1);
    auVar132 = NEON_ext(auVar119,auVar119,4,1);
    fVar54 = fVar50 * fVar107 - fVar47 * auVar51._0_4_;
    fVar100 = fVar52 * fVar109 - fVar49 * auVar51._4_4_;
    fVar47 = fVar47 * fVar110 - fVar48 * fVar107;
    fVar49 = fVar49 * fVar101 - fVar74 * fVar109;
    fVar79 = auVar132._0_4_;
    fVar82 = auVar132._4_4_;
    auVar8._4_4_ = fVar100;
    auVar8._0_4_ = fVar54;
    auVar8._8_4_ = fVar47;
    auVar8._12_4_ = fVar49;
    auVar9._4_4_ = fVar100;
    auVar9._0_4_ = fVar54;
    auVar9._8_4_ = fVar47;
    auVar9._12_4_ = fVar49;
    auVar51 = NEON_ext(auVar8,auVar9,4,1);
    fVar47 = 0.0;
    fVar49 = 0.0;
    fVar48 = 0.0;
    fVar100 = auVar119._0_4_ * auVar119._0_4_ + fVar79 * fVar79 + fVar82 * fVar82;
    fVar74 = (SQRT(fVar106 * fVar106 + fVar111 * fVar111 + fVar123 * fVar123) +
             SQRT(fVar92 * fVar92 + fVar55 * fVar55 + fVar44 * fVar44)) * 0.5;
    fVar74 = fVar74 * fVar74;
    auVar58 = SUB1612(ZEXT816(0),0);
    param_9[4] = (int)fVar74;
    if (fVar100 != 0.0) {
      fVar100 = SQRT(fVar100);
      auVar58._0_4_ = fVar79 / fVar100;
      auVar58._4_4_ =
           fVar82 / SQRT(auVar119._0_4_ * auVar119._0_4_ + fVar79 * fVar79 + fVar82 * fVar82);
      auVar58._8_4_ = auVar119._0_4_ / fVar100;
    }
    fVar79 = auVar58._0_4_;
    fVar82 = auVar58._4_4_;
    fVar92 = auVar58._8_4_;
    fVar85 = -(fVar85 * fVar79 + fVar88 * fVar82 + fVar91 * fVar92);
    fVar88 = auVar51._0_4_;
    fVar91 = auVar51._4_4_;
    fVar100 = fVar54 * fVar54 + fVar88 * fVar88 + fVar91 * fVar91;
    if (fVar100 != 0.0) {
      fVar100 = SQRT(fVar100);
      fVar47 = fVar88 / fVar100;
      fVar49 = fVar91 / SQRT(fVar54 * fVar54 + fVar88 * fVar88 + fVar91 * fVar91);
      fVar48 = fVar54 / fVar100;
    }
    auVar67._0_4_ = fVar105 * fVar79;
    auVar67._4_4_ = fVar114 * fVar82;
    auVar67._8_4_ = fVar116 * fVar92;
    auVar67._12_4_ = fVar120 * fVar85;
    fVar54 = -param_1[2];
    auVar51 = NEON_ext(auVar67,auVar67,8,1);
    if (auVar67._0_4_ + auVar67._4_4_ + auVar51._0_4_ + fVar85 < fVar54) {
      return 7;
    }
    auVar68._0_4_ = fVar104 * fVar79;
    auVar68._4_4_ = fVar43 * fVar82;
    auVar68._8_4_ = fVar75 * fVar92;
    auVar68._12_4_ = fVar99 * fVar85;
    auVar51 = NEON_ext(auVar68,auVar68,8,1);
    if (auVar68._0_4_ + auVar68._4_4_ + auVar51._0_4_ + fVar85 < fVar54) {
      return 7;
    }
    fVar99 = -(fVar40 * fVar47 + fVar41 * fVar49 + fVar42 * fVar48);
    auVar69._0_4_ = fVar64 * fVar47;
    auVar69._4_4_ = fVar71 * fVar49;
    auVar69._8_4_ = fVar72 * fVar48;
    auVar69._12_4_ = fVar73 * fVar99;
    auVar51 = NEON_ext(auVar69,auVar69,8,1);
    if (auVar69._0_4_ + auVar69._4_4_ + auVar51._0_4_ + fVar99 < fVar54) {
      return 7;
    }
    auVar70._0_4_ = fVar45 * fVar47;
    auVar70._4_4_ = fVar46 * fVar49;
    auVar70._8_4_ = fVar56 * fVar48;
    auVar70._12_4_ = fVar57 * fVar99;
    auVar51 = NEON_ext(auVar70,auVar70,8,1);
    if (auVar70._0_4_ + auVar70._4_4_ + auVar51._0_4_ + fVar99 < fVar54) {
      return 7;
    }
    lVar28 = *(long *)(param_4 + 0x20);
    fVar57 = param_1[3];
    iVar125 = *(int *)(lVar28 + 0x20);
    lVar29 = *(long *)(lVar28 + 0x18);
    if (param_8 < iVar125) {
      iVar151 = param_8;
      if (*(int *)(lVar28 + 0x98) != 0) {
        iVar151 = *(int *)(*(long *)(lVar28 + 0x90) + (long)param_8 * 4);
      }
      lVar26 = lVar29;
      iVar146 = param_8;
      if (iVar151 != -1) {
        plVar30 = (long *)(lVar28 + 0xb0);
        iVar146 = iVar151;
        goto LAB_0316e454;
      }
    }
    else {
      iVar146 = param_8 - iVar125;
      plVar30 = (long *)(lVar28 + 0xd0);
LAB_0316e454:
      lVar26 = *plVar30;
    }
    uVar3 = *(ushort *)(lVar26 + (long)iVar146 * 0x10 + 8);
    fVar54 = -3.40282e+38;
    if ((short)uVar3 < 1) {
      uVar169 = 0xff7fffeeff7fffee;
    }
    else {
      uVar124 = (ulong)uVar3;
      uVar169 = 0xff7fffeeff7fffee;
      lVar34 = (long)*(int *)(lVar26 + (long)iVar146 * 0x10);
      piVar31 = (int *)(*(long *)(lVar28 + 0x28) + lVar34 * 0x14);
      lVar26 = 0;
      iVar146 = *(int *)(lVar28 + 0x40);
      lVar32 = lVar34;
      do {
        if (lVar32 < *(int *)(lVar28 + 0x30)) {
          if (*(int *)(lVar28 + 0x78) == 0) {
            iVar151 = (int)lVar32;
          }
          else {
            iVar151 = *(int *)(*(long *)(lVar28 + 0x70) + lVar32 * 4);
          }
          piVar27 = piVar31;
          if (iVar151 != -1) {
            piVar27 = (int *)(*(long *)(lVar28 + 0xc0) + (long)iVar151 * 0x14);
          }
        }
        else {
          piVar27 = (int *)(*(long *)(lVar28 + 0xe0) +
                           ((lVar26 + lVar34) - (long)*(int *)(lVar28 + 0x30)) * 0x14);
        }
        iVar151 = *piVar27;
        lVar33 = 0x38;
        if (iVar146 <= iVar151) {
          lVar33 = 0xf0;
        }
        iVar126 = 0;
        if (iVar146 <= iVar151) {
          iVar126 = iVar146;
        }
        pfVar5 = (float *)(*(long *)(lVar28 + lVar33) + (long)(iVar151 - iVar126) * 0x10);
        fVar100 = *pfVar5;
        fVar88 = pfVar5[1];
        fVar91 = pfVar5[2];
        lVar26 = lVar26 + 1;
        piVar31 = piVar31 + 5;
        lVar32 = lVar32 + 1;
        uVar124 = uVar124 - 1;
        auVar113._0_4_ =
             fVar79 * (*(float *)(param_4 + 0x90) +
                      *(float *)(param_4 + 0x80) * fVar91 +
                      *(float *)(param_4 + 0x60) * fVar100 + *(float *)(param_4 + 0x70) * fVar88);
        auVar113._4_4_ =
             fVar82 * (*(float *)(param_4 + 0x94) +
                      *(float *)(param_4 + 0x84) * fVar91 +
                      *(float *)(param_4 + 100) * fVar100 + *(float *)(param_4 + 0x74) * fVar88);
        auVar113._8_4_ =
             fVar92 * (*(float *)(param_4 + 0x98) +
                      *(float *)(param_4 + 0x88) * fVar91 +
                      *(float *)(param_4 + 0x68) * fVar100 + *(float *)(param_4 + 0x78) * fVar88);
        auVar113._12_4_ =
             fVar85 * (*(float *)(param_4 + 0x9c) +
                      *(float *)(param_4 + 0x8c) * fVar91 +
                      *(float *)(param_4 + 0x6c) * fVar100 + *(float *)(param_4 + 0x7c) * fVar88);
        auVar51 = NEON_ext(auVar113,auVar113,8,1);
        fVar100 = auVar51._0_4_ + fVar85;
        uVar169 = NEON_fmax(uVar169,CONCAT44(auVar113._0_4_ + auVar113._4_4_ + fVar100,
                                             auVar113._0_4_ + auVar113._4_4_ + fVar100),4);
      } while (uVar124 != 0);
    }
    if ((float)uVar169 < fVar57) {
      return 8;
    }
    lVar26 = *(long *)(param_3 + 0x20);
    iVar146 = *(int *)(lVar26 + 0x20);
    lVar32 = *(long *)(lVar26 + 0x18);
    if (param_7 < iVar146) {
      iVar126 = param_7;
      if (*(int *)(lVar26 + 0x98) != 0) {
        iVar126 = *(int *)(*(long *)(lVar26 + 0x90) + (long)param_7 * 4);
      }
      lVar34 = lVar32;
      iVar151 = param_7;
      if (iVar126 != -1) {
        plVar30 = (long *)(lVar26 + 0xb0);
        iVar151 = iVar126;
        goto LAB_0316e5b8;
      }
    }
    else {
      iVar151 = param_7 - iVar146;
      plVar30 = (long *)(lVar26 + 0xd0);
LAB_0316e5b8:
      lVar34 = *plVar30;
    }
    uVar3 = *(ushort *)(lVar34 + (long)iVar151 * 0x10 + 8);
    if ((short)uVar3 < 1) {
      uVar169 = 0xff7fffeeff7fffee;
    }
    else {
      uVar124 = (ulong)uVar3;
      uVar169 = 0xff7fffeeff7fffee;
      lVar35 = (long)*(int *)(lVar34 + (long)iVar151 * 0x10);
      piVar31 = (int *)(*(long *)(lVar26 + 0x28) + lVar35 * 0x14);
      lVar34 = 0;
      iVar151 = *(int *)(lVar26 + 0x40);
      lVar33 = lVar35;
      do {
        if (lVar33 < *(int *)(lVar26 + 0x30)) {
          if (*(int *)(lVar26 + 0x78) == 0) {
            iVar126 = (int)lVar33;
          }
          else {
            iVar126 = *(int *)(*(long *)(lVar26 + 0x70) + lVar33 * 4);
          }
          piVar27 = piVar31;
          if (iVar126 != -1) {
            piVar27 = (int *)(*(long *)(lVar26 + 0xc0) + (long)iVar126 * 0x14);
          }
        }
        else {
          piVar27 = (int *)(*(long *)(lVar26 + 0xe0) +
                           ((lVar34 + lVar35) - (long)*(int *)(lVar26 + 0x30)) * 0x14);
        }
        iVar126 = *piVar27;
        lVar2 = 0x38;
        if (iVar151 <= iVar126) {
          lVar2 = 0xf0;
        }
        iVar129 = 0;
        if (iVar151 <= iVar126) {
          iVar129 = iVar151;
        }
        pfVar5 = (float *)(*(long *)(lVar26 + lVar2) + (long)(iVar126 - iVar129) * 0x10);
        fVar100 = *pfVar5;
        fVar88 = pfVar5[1];
        fVar91 = pfVar5[2];
        lVar34 = lVar34 + 1;
        piVar31 = piVar31 + 5;
        lVar33 = lVar33 + 1;
        uVar124 = uVar124 - 1;
        auVar108._0_4_ =
             fVar47 * (*(float *)(param_3 + 0x90) +
                      *(float *)(param_3 + 0x80) * fVar91 +
                      *(float *)(param_3 + 0x60) * fVar100 + *(float *)(param_3 + 0x70) * fVar88);
        auVar108._4_4_ =
             fVar49 * (*(float *)(param_3 + 0x94) +
                      *(float *)(param_3 + 0x84) * fVar91 +
                      *(float *)(param_3 + 100) * fVar100 + *(float *)(param_3 + 0x74) * fVar88);
        auVar108._8_4_ =
             fVar48 * (*(float *)(param_3 + 0x98) +
                      *(float *)(param_3 + 0x88) * fVar91 +
                      *(float *)(param_3 + 0x68) * fVar100 + *(float *)(param_3 + 0x78) * fVar88);
        auVar108._12_4_ =
             fVar99 * (*(float *)(param_3 + 0x9c) +
                      *(float *)(param_3 + 0x8c) * fVar91 +
                      *(float *)(param_3 + 0x6c) * fVar100 + *(float *)(param_3 + 0x7c) * fVar88);
        auVar51 = NEON_ext(auVar108,auVar108,8,1);
        fVar100 = auVar51._0_4_ + fVar99;
        uVar169 = NEON_fmax(uVar169,CONCAT44(auVar108._0_4_ + auVar108._4_4_ + fVar100,
                                             auVar108._0_4_ + auVar108._4_4_ + fVar100),4);
      } while (uVar124 != 0);
    }
    if ((float)uVar169 < fVar57) {
      return 8;
    }
    if (0.0 < fVar57) {
      if (param_7 < iVar146) {
        iVar151 = param_7;
        if (*(int *)(lVar26 + 0x98) != 0) {
          iVar151 = *(int *)(*(long *)(lVar26 + 0x90) + (long)param_7 * 4);
        }
        iVar146 = param_7;
        if (iVar151 != -1) {
          plVar30 = (long *)(lVar26 + 0xb0);
          iVar146 = iVar151;
          goto LAB_0316e714;
        }
      }
      else {
        iVar146 = param_7 - iVar146;
        plVar30 = (long *)(lVar26 + 0xd0);
LAB_0316e714:
        lVar32 = *plVar30;
      }
      uVar3 = *(ushort *)(lVar32 + (long)iVar146 * 0x10 + 8);
      if ((short)uVar3 < 1) {
        fVar57 = -3.40282e+38;
      }
      else {
        lVar33 = (long)*(int *)(lVar32 + (long)iVar146 * 0x10);
        uVar124 = (ulong)uVar3;
        piVar31 = (int *)(*(long *)(lVar26 + 0x28) + lVar33 * 0x14);
        fVar57 = -3.40282e+38;
        lVar32 = 0;
        iVar146 = *(int *)(lVar26 + 0x40);
        lVar34 = lVar33;
        do {
          if (lVar34 < *(int *)(lVar26 + 0x30)) {
            if (*(int *)(lVar26 + 0x78) == 0) {
              iVar151 = (int)lVar34;
            }
            else {
              iVar151 = *(int *)(*(long *)(lVar26 + 0x70) + lVar34 * 4);
            }
            piVar27 = piVar31;
            if (iVar151 != -1) {
              piVar27 = (int *)(*(long *)(lVar26 + 0xc0) + (long)iVar151 * 0x14);
            }
          }
          else {
            piVar27 = (int *)(*(long *)(lVar26 + 0xe0) +
                             ((lVar32 + lVar33) - (long)*(int *)(lVar26 + 0x30)) * 0x14);
          }
          iVar151 = *piVar27;
          lVar35 = 0x38;
          if (iVar146 <= iVar151) {
            lVar35 = 0xf0;
          }
          iVar126 = 0;
          if (iVar146 <= iVar151) {
            iVar126 = iVar146;
          }
          pfVar5 = (float *)(*(long *)(lVar26 + lVar35) + (long)(iVar151 - iVar126) * 0x10);
          fVar100 = *pfVar5;
          fVar88 = pfVar5[1];
          fVar91 = pfVar5[2];
          lVar32 = lVar32 + 1;
          piVar31 = piVar31 + 5;
          lVar34 = lVar34 + 1;
          uVar124 = uVar124 - 1;
          auVar102._0_4_ =
               (*(float *)(param_3 + 0x90) +
               *(float *)(param_3 + 0x80) * fVar91 +
               *(float *)(param_3 + 0x60) * fVar100 + *(float *)(param_3 + 0x70) * fVar88) * -fVar79
          ;
          auVar102._4_4_ =
               (*(float *)(param_3 + 0x94) +
               *(float *)(param_3 + 0x84) * fVar91 +
               *(float *)(param_3 + 100) * fVar100 + *(float *)(param_3 + 0x74) * fVar88) * -fVar82;
          auVar102._8_4_ =
               (*(float *)(param_3 + 0x98) +
               *(float *)(param_3 + 0x88) * fVar91 +
               *(float *)(param_3 + 0x68) * fVar100 + *(float *)(param_3 + 0x78) * fVar88) * -fVar92
          ;
          auVar102._12_4_ =
               (*(float *)(param_3 + 0x9c) +
               *(float *)(param_3 + 0x8c) * fVar91 +
               *(float *)(param_3 + 0x6c) * fVar100 + *(float *)(param_3 + 0x7c) * fVar88) * -fVar85
          ;
          auVar51 = NEON_ext(auVar102,auVar102,8,1);
          fVar100 = auVar102._0_4_ + auVar102._4_4_ + auVar51._0_4_ + -fVar85;
          fVar57 = (float)((uint)fVar57 ^ ((uint)fVar57 ^ (uint)fVar100) & -(uint)(fVar57 < fVar100)
                          );
        } while (uVar124 != 0);
      }
      if (param_8 < iVar125) {
        iVar146 = param_8;
        if (*(int *)(lVar28 + 0x98) != 0) {
          iVar146 = *(int *)(*(long *)(lVar28 + 0x90) + (long)param_8 * 4);
        }
        iVar125 = param_8;
        if (iVar146 != -1) {
          plVar30 = (long *)(lVar28 + 0xb0);
          iVar125 = iVar146;
          goto LAB_0316e85c;
        }
      }
      else {
        iVar125 = param_8 - iVar125;
        plVar30 = (long *)(lVar28 + 0xd0);
LAB_0316e85c:
        lVar29 = *plVar30;
      }
      uVar3 = *(ushort *)(lVar29 + (long)iVar125 * 0x10 + 8);
      if (0 < (short)uVar3) {
        iVar146 = *(int *)(lVar28 + 0x40);
        lVar34 = (long)*(int *)(lVar29 + (long)iVar125 * 0x10);
        uVar124 = (ulong)uVar3;
        piVar31 = (int *)(*(long *)(lVar28 + 0x28) + lVar34 * 0x14);
        lVar29 = 0;
        lVar32 = lVar34;
        do {
          if (lVar32 < *(int *)(lVar28 + 0x30)) {
            if (*(int *)(lVar28 + 0x78) == 0) {
              iVar125 = (int)lVar32;
            }
            else {
              iVar125 = *(int *)(*(long *)(lVar28 + 0x70) + lVar32 * 4);
            }
            piVar27 = piVar31;
            if (iVar125 != -1) {
              piVar27 = (int *)(*(long *)(lVar28 + 0xc0) + (long)iVar125 * 0x14);
            }
          }
          else {
            piVar27 = (int *)(*(long *)(lVar28 + 0xe0) +
                             ((lVar29 + lVar34) - (long)*(int *)(lVar28 + 0x30)) * 0x14);
          }
          iVar125 = *piVar27;
          lVar33 = 0x38;
          if (iVar146 <= iVar125) {
            lVar33 = 0xf0;
          }
          iVar151 = 0;
          if (iVar146 <= iVar125) {
            iVar151 = iVar146;
          }
          pfVar5 = (float *)(*(long *)(lVar28 + lVar33) + (long)(iVar125 - iVar151) * 0x10);
          fVar100 = *pfVar5;
          fVar79 = pfVar5[1];
          fVar82 = pfVar5[2];
          lVar29 = lVar29 + 1;
          piVar31 = piVar31 + 5;
          lVar32 = lVar32 + 1;
          uVar124 = uVar124 - 1;
          auVar103._0_4_ =
               (*(float *)(param_4 + 0x90) +
               *(float *)(param_4 + 0x80) * fVar82 +
               *(float *)(param_4 + 0x60) * fVar100 + *(float *)(param_4 + 0x70) * fVar79) * -fVar47
          ;
          auVar103._4_4_ =
               (*(float *)(param_4 + 0x94) +
               *(float *)(param_4 + 0x84) * fVar82 +
               *(float *)(param_4 + 100) * fVar100 + *(float *)(param_4 + 0x74) * fVar79) * -fVar49;
          auVar103._8_4_ =
               (*(float *)(param_4 + 0x98) +
               *(float *)(param_4 + 0x88) * fVar82 +
               *(float *)(param_4 + 0x68) * fVar100 + *(float *)(param_4 + 0x78) * fVar79) * -fVar48
          ;
          auVar103._12_4_ =
               (*(float *)(param_4 + 0x9c) +
               *(float *)(param_4 + 0x8c) * fVar82 +
               *(float *)(param_4 + 0x6c) * fVar100 + *(float *)(param_4 + 0x7c) * fVar79) * -fVar99
          ;
          auVar51 = NEON_ext(auVar103,auVar103,8,1);
          fVar100 = auVar103._0_4_ + auVar103._4_4_ + auVar51._0_4_ + -fVar99;
          fVar54 = (float)((uint)fVar54 ^ ((uint)fVar54 ^ (uint)fVar100) & -(uint)(fVar54 < fVar100)
                          );
        } while (uVar124 != 0);
      }
      bVar22 = false;
      bVar24 = true;
      bVar23 = false;
      if (0.0 < fVar54) {
        bVar22 = false;
        bVar24 = false;
        bVar23 = true;
        if (!NAN(fVar57)) {
          bVar22 = fVar57 < 0.0;
          bVar24 = fVar57 == 0.0;
          bVar23 = false;
        }
      }
      iVar125 = 9;
      if (!bVar24 && bVar22 == bVar23) {
        iVar125 = -1;
      }
    }
    else {
      iVar125 = -1;
    }
    if ((bVar138 & 1) == 0) {
      return iVar125;
    }
    if (iVar125 != -1) {
      return iVar125;
    }
  }
  else {
    fVar74 = (float)param_9[4];
  }
  uVar169 = *(undefined8 *)param_9;
  uVar142 = *(undefined8 *)(param_9 + 2);
  iVar125 = param_9[7];
  fVar92 = (float)param_9[5];
  auVar149 = ZEXT416((uint)fVar92);
  fVar91 = (float)param_9[6];
  fVar88 = (float)param_9[8];
  auVar132 = ZEXT416((uint)fVar88);
  fVar85 = (float)param_9[9];
  fVar82 = (float)param_9[10];
  auVar51 = ZEXT416((uint)fVar82);
  fVar79 = (float)param_9[0xb];
  fVar57 = fVar85;
  fVar48 = fVar79;
  fVar54 = fVar91;
  fVar47 = fVar88;
  fVar49 = fVar82;
  fVar99 = fVar92;
  fVar100 = fVar74;
  if ((bVar138 & 1) == 0) goto LAB_0316ccd0;
  FUN_030963b0(lVar26,param_7,&local_c0);
  fVar36 = (float)*(undefined8 *)(param_3 + 0x80) * fStack_b8 +
           *(float *)(param_3 + 0x60) * local_c0 +
           (float)*(undefined8 *)(param_3 + 0x70) * fStack_bc;
  fVar39 = (float)((ulong)*(undefined8 *)(param_3 + 0x80) >> 0x20) * fStack_b8 +
           *(float *)(param_3 + 100) * local_c0 +
           (float)((ulong)*(undefined8 *)(param_3 + 0x70) >> 0x20) * fStack_bc;
  fVar40 = (float)*(undefined8 *)(param_3 + 0x88) * fStack_b8 +
           *(float *)(param_3 + 0x68) * local_c0 +
           (float)*(undefined8 *)(param_3 + 0x78) * fStack_bc;
  fVar41 = (float)((ulong)*(undefined8 *)(param_3 + 0x88) >> 0x20) * fStack_b8 +
           *(float *)(param_3 + 0x6c) * local_c0 +
           (float)((ulong)*(undefined8 *)(param_3 + 0x78) >> 0x20) * fStack_bc;
  FUN_030963b0(*(undefined8 *)(param_4 + 0x20),param_8,&local_c0);
  fVar49 = auVar51._0_4_;
  fVar47 = auVar132._0_4_;
  fVar92 = auVar149._0_4_;
  fVar77 = (float)*(undefined8 *)(param_4 + 0x68);
  fVar78 = (float)((ulong)*(undefined8 *)(param_4 + 0x68) >> 0x20);
  fVar56 = (float)*(undefined8 *)(param_4 + 0x60);
  fVar75 = (float)((ulong)*(undefined8 *)(param_4 + 0x60) >> 0x20);
  fVar54 = *(float *)(param_4 + 0x70);
  fVar99 = *(float *)(param_4 + 0x74);
  fVar100 = *(float *)(param_4 + 0x78);
  fVar79 = *(float *)(param_4 + 0x7c);
  fVar82 = *(float *)(param_4 + 0x80);
  fVar85 = *(float *)(param_4 + 0x84);
  fVar88 = *(float *)(param_4 + 0x88);
  fVar55 = *(float *)(param_4 + 0x8c);
  auVar37._0_4_ = fVar82 * fStack_b8 + fVar56 * local_c0 + fVar54 * fStack_bc;
  auVar37._4_4_ = fVar85 * fStack_b8 + fVar75 * local_c0 + fVar99 * fStack_bc;
  auVar37._8_4_ = fVar88 * fStack_b8 + fVar77 * local_c0 + fVar100 * fStack_bc;
  auVar37._12_4_ = fVar55 * fStack_b8 + fVar78 * local_c0 + fVar79 * fStack_bc;
  auVar21._4_4_ = fVar39;
  auVar21._0_4_ = fVar36;
  auVar21._8_4_ = fVar40;
  auVar21._12_4_ = fVar41;
  fVar42 = fVar36 * auVar37._0_4_;
  fVar44 = fVar39 * auVar37._4_4_;
  auVar6._4_4_ = fVar44;
  auVar6._0_4_ = fVar42;
  auVar6._8_4_ = fVar40 * auVar37._8_4_;
  auVar6._12_4_ = fVar41 * auVar37._12_4_;
  auVar7._4_4_ = fVar44;
  auVar7._0_4_ = fVar42;
  auVar7._8_4_ = fVar40 * auVar37._8_4_;
  auVar7._12_4_ = fVar41 * auVar37._12_4_;
  auVar51 = NEON_ext(auVar6,auVar7,8,1);
  if (fVar42 + fVar44 + auVar51._0_4_ < param_1[9]) {
    return 0xc;
  }
  lVar26 = *(long *)(param_3 + 0x20);
  if (param_5 < *(int *)(lVar26 + 0x30)) {
    lVar28 = *(long *)(lVar26 + 0x28);
    iVar146 = param_5;
    if (*(int *)(lVar26 + 0x78) != 0) {
      iVar146 = *(int *)(*(long *)(lVar26 + 0x70) + (long)param_5 * 4);
    }
    iVar151 = param_5;
    if (iVar146 != -1) {
      plVar30 = (long *)(lVar26 + 0xc0);
      goto LAB_0316d354;
    }
  }
  else {
    iVar146 = param_5 - *(int *)(lVar26 + 0x30);
    plVar30 = (long *)(lVar26 + 0xe0);
LAB_0316d354:
    lVar28 = *plVar30;
    iVar151 = iVar146;
  }
  lVar29 = *(long *)(param_4 + 0x20);
  if (param_6 < *(int *)(lVar29 + 0x30)) {
    lVar32 = *(long *)(lVar29 + 0x28);
    iVar146 = param_6;
    if (*(int *)(lVar29 + 0x78) != 0) {
      iVar146 = *(int *)(*(long *)(lVar29 + 0x70) + (long)param_6 * 4);
    }
    if (iVar146 != -1) {
      plVar30 = (long *)(lVar29 + 0xc0);
      goto LAB_0316d39c;
    }
    iVar146 = param_6;
  }
  else {
    iVar146 = param_6 - *(int *)(lVar29 + 0x30);
    plVar30 = (long *)(lVar29 + 0xe0);
LAB_0316d39c:
    lVar32 = *plVar30;
  }
  iVar129 = *(int *)(lVar26 + 0x40);
  piVar31 = (int *)(lVar28 + (long)iVar151 * 0x14);
  iVar151 = *piVar31;
  iVar126 = piVar31[1];
  lVar28 = 0x38;
  if (iVar129 <= iVar151) {
    lVar28 = 0xf0;
  }
  iVar1 = 0;
  if (iVar129 <= iVar151) {
    iVar1 = iVar129;
  }
  puVar4 = (undefined8 *)(*(long *)(lVar26 + lVar28) + (long)(iVar151 - iVar1) * 0x10);
  fVar107 = (float)puVar4[1];
  uVar127 = *puVar4;
  fVar42 = (float)uVar127;
  fVar44 = (float)((ulong)uVar127 >> 0x20);
  lVar28 = 0x38;
  if (iVar129 <= iVar126) {
    lVar28 = 0xf0;
  }
  iVar151 = 0;
  if (iVar129 <= iVar126) {
    iVar151 = iVar129;
  }
  pfVar5 = (float *)(*(long *)(lVar26 + lVar28) + (long)(iVar126 - iVar151) * 0x10);
  fVar109 = *pfVar5;
  fVar110 = pfVar5[1];
  fVar101 = pfVar5[2];
  piVar31 = (int *)(lVar32 + (long)iVar146 * 0x14);
  iVar126 = *(int *)(lVar29 + 0x40);
  iVar146 = *piVar31;
  iVar151 = piVar31[1];
  fVar50 = *(float *)(param_3 + 0x90) +
           *(float *)(param_3 + 0x80) * fVar107 +
           *(float *)(param_3 + 0x60) * fVar42 + *(float *)(param_3 + 0x70) * fVar44;
  fVar52 = *(float *)(param_3 + 0x94) +
           *(float *)(param_3 + 0x84) * fVar107 +
           *(float *)(param_3 + 100) * fVar42 + *(float *)(param_3 + 0x74) * fVar44;
  fVar53 = *(float *)(param_3 + 0x98) +
           *(float *)(param_3 + 0x88) * fVar107 +
           *(float *)(param_3 + 0x68) * fVar42 + *(float *)(param_3 + 0x78) * fVar44;
  fVar42 = *(float *)(param_3 + 0x9c) +
           *(float *)(param_3 + 0x8c) * fVar107 +
           *(float *)(param_3 + 0x6c) * fVar42 + *(float *)(param_3 + 0x7c) * fVar44;
  lVar26 = 0x38;
  if (iVar126 <= iVar146) {
    lVar26 = 0xf0;
  }
  iVar129 = 0;
  if (iVar126 <= iVar146) {
    iVar129 = iVar126;
  }
  iVar1 = 0;
  if (iVar126 <= iVar151) {
    iVar1 = iVar126;
  }
  puVar4 = (undefined8 *)(*(long *)(lVar29 + lVar26) + (long)(iVar146 - iVar129) * 0x10);
  fVar104 = (float)puVar4[1];
  uVar127 = *puVar4;
  fVar44 = (float)uVar127;
  fVar107 = (float)((ulong)uVar127 >> 0x20);
  lVar26 = 0x38;
  if (iVar126 <= iVar151) {
    lVar26 = 0xf0;
  }
  fVar64 = (*(float *)(param_3 + 0x90) +
           *(float *)(param_3 + 0x80) * fVar101 +
           *(float *)(param_3 + 0x60) * fVar109 + *(float *)(param_3 + 0x70) * fVar110) - fVar50;
  fVar71 = (*(float *)(param_3 + 0x94) +
           *(float *)(param_3 + 0x84) * fVar101 +
           *(float *)(param_3 + 100) * fVar109 + *(float *)(param_3 + 0x74) * fVar110) - fVar52;
  fVar72 = (*(float *)(param_3 + 0x98) +
           *(float *)(param_3 + 0x88) * fVar101 +
           *(float *)(param_3 + 0x68) * fVar109 + *(float *)(param_3 + 0x78) * fVar110) - fVar53;
  fVar73 = (*(float *)(param_3 + 0x9c) +
           *(float *)(param_3 + 0x8c) * fVar101 +
           *(float *)(param_3 + 0x6c) * fVar109 + *(float *)(param_3 + 0x7c) * fVar110) - fVar42;
  pfVar5 = (float *)(*(long *)(lVar29 + lVar26) + (long)(iVar151 - iVar1) * 0x10);
  fVar109 = *pfVar5;
  fVar110 = pfVar5[1];
  fVar101 = pfVar5[2];
  fVar43 = *(float *)(param_4 + 0x90) + fVar82 * fVar104 + fVar56 * fVar44 + fVar54 * fVar107;
  fVar45 = *(float *)(param_4 + 0x94) + fVar85 * fVar104 + fVar75 * fVar44 + fVar99 * fVar107;
  fVar46 = *(float *)(param_4 + 0x98) + fVar88 * fVar104 + fVar77 * fVar44 + fVar100 * fVar107;
  fVar44 = *(float *)(param_4 + 0x9c) + fVar55 * fVar104 + fVar78 * fVar44 + fVar79 * fVar107;
  auVar61 = ZEXT816(0);
  fVar82 = (*(float *)(param_4 + 0x90) + fVar82 * fVar101 + fVar56 * fVar109 + fVar54 * fVar110) -
           fVar43;
  fVar99 = (*(float *)(param_4 + 0x94) + fVar85 * fVar101 + fVar75 * fVar109 + fVar99 * fVar110) -
           fVar45;
  fVar100 = (*(float *)(param_4 + 0x98) + fVar88 * fVar101 + fVar77 * fVar109 + fVar100 * fVar110) -
            fVar46;
  fVar79 = (*(float *)(param_4 + 0x9c) + fVar55 * fVar101 + fVar78 * fVar109 + fVar79 * fVar110) -
           fVar44;
  fVar54 = fVar72 * fVar72 + fVar64 * fVar64 + fVar71 * fVar71;
  auVar59 = auVar61;
  if (fVar54 != 0.0) {
    fVar54 = SQRT(fVar54);
    fVar85 = SQRT(fVar72 * fVar72 + fVar64 * fVar64 + fVar71 * fVar71);
    auVar59._0_4_ = fVar64 / fVar54;
    auVar59._4_4_ = fVar71 / fVar85;
    auVar59._8_4_ = fVar72 / fVar54;
    auVar59._12_4_ = fVar73 / fVar85;
  }
  fVar54 = fVar100 * fVar100 + fVar82 * fVar82 + fVar99 * fVar99;
  fVar85 = 0.0;
  fVar75 = fVar64 * 0.0;
  fVar55 = 0.0;
  fVar77 = fVar71 * 0.0;
  fVar78 = fVar72 * 0.0;
  fVar56 = 0.0;
  fVar88 = 0.0;
  fVar107 = fVar82 * 0.0;
  fVar109 = fVar99 * 0.0;
  fVar110 = fVar100 * 0.0;
  if (fVar54 != 0.0) {
    fVar54 = SQRT(fVar54);
    fVar88 = SQRT(fVar100 * fVar100 + fVar82 * fVar82 + fVar99 * fVar99);
    fVar85 = fVar82 / fVar54;
    fVar55 = fVar99 / fVar88;
    fVar56 = fVar100 / fVar54;
    fVar88 = fVar79 / fVar88;
  }
  fVar54 = -(fVar78 + fVar75 + fVar77);
  fVar104 = -(fVar78 + fVar75 + fVar77);
  fVar111 = fVar64 + fVar54 * 0.0;
  fVar114 = fVar71 + fVar104 * 0.0;
  fVar115 = fVar72 + fVar54 * 0.0;
  fVar54 = -(fVar110 + fVar107 + fVar109);
  fVar105 = -(fVar110 + fVar107 + fVar109);
  fVar123 = fVar111 * fVar111 + fVar114 * fVar114 + fVar115 * fVar115;
  fVar116 = 0.0;
  fVar121 = 0.0;
  fVar122 = 0.0;
  fVar120 = 0.0;
  fVar101 = fVar82 + fVar54 * 0.0;
  fVar106 = fVar99 + fVar105 * 0.0;
  fVar54 = fVar100 + fVar54 * 0.0;
  if (fVar123 != 0.0) {
    fVar123 = SQRT(fVar123);
    fVar120 = SQRT(fVar111 * fVar111 + fVar114 * fVar114 + fVar115 * fVar115);
    fVar116 = fVar111 / fVar123;
    fVar121 = fVar114 / fVar120;
    fVar122 = fVar115 / fVar123;
    fVar120 = (fVar73 + fVar104 * 0.0) / fVar120;
  }
  fVar104 = fVar54 * fVar54 + fVar101 * fVar101 + fVar106 * fVar106;
  if (fVar104 != 0.0) {
    fVar104 = SQRT(fVar104);
    fVar111 = SQRT(fVar54 * fVar54 + fVar101 * fVar101 + fVar106 * fVar106);
    auVar61._0_4_ = fVar101 / fVar104;
    auVar61._4_4_ = fVar106 / fVar111;
    auVar61._8_4_ = fVar54 / fVar104;
    auVar61._12_4_ = (fVar79 + fVar105 * 0.0) / fVar111;
  }
  auVar62._0_4_ = fVar116 * auVar61._0_4_;
  auVar62._4_4_ = fVar121 * auVar61._4_4_;
  auVar62._8_4_ = fVar122 * auVar61._8_4_;
  auVar62._12_4_ = fVar120 * auVar61._12_4_;
  auVar51 = NEON_ext(auVar62,auVar62,8,1);
  fVar54 = -(auVar62._0_4_ + auVar62._4_4_ + auVar51._0_4_);
  if (fVar54 < param_1[10]) {
    return 0xd;
  }
  fVar101 = auVar59._0_4_;
  fVar104 = auVar59._4_4_;
  fVar106 = (fVar101 - fVar85) * 0.5;
  fVar111 = (fVar104 - fVar55) * 0.5;
  fVar114 = (auVar59._8_4_ - fVar56) * 0.5;
  auVar112 = SUB1612(ZEXT816(0),0);
  fVar105 = fVar106 * 0.0;
  fVar123 = fVar111 * 0.0;
  fVar116 = fVar114 * 0.0;
  fVar115 = -(fVar116 + fVar105 + fVar123);
  fVar106 = fVar106 + fVar115 * 0.0;
  fVar111 = fVar111 + -(fVar116 + fVar105 + fVar123) * 0.0;
  fVar114 = fVar114 + fVar115 * 0.0;
  fVar105 = fVar106 * fVar106 + fVar111 * fVar111 + fVar114 * fVar114;
  if (fVar105 != 0.0) {
    fVar105 = SQRT(fVar105);
    auVar112._0_4_ = fVar106 / fVar105;
    auVar112._4_4_ = fVar111 / SQRT(fVar106 * fVar106 + fVar111 * fVar111 + fVar114 * fVar114);
    auVar112._8_4_ = fVar114 / fVar105;
  }
  fVar105 = auVar112._0_4_;
  fVar115 = (fVar50 + fVar64) * fVar105;
  fVar106 = auVar112._4_4_;
  fVar123 = (fVar52 + fVar71) * fVar106;
  fVar111 = auVar112._8_4_;
  fVar114 = (fVar53 + fVar72) * fVar111;
  fVar116 = (fVar43 + fVar107) * fVar105;
  fVar120 = (fVar45 + fVar109) * fVar106;
  fVar121 = (fVar46 + fVar110) * fVar111;
  fVar109 = fVar115 + fVar123 + fVar114;
  fVar114 = fVar115 + fVar123 + fVar114;
  fVar107 = (fVar43 + fVar82) * fVar105;
  fVar110 = (fVar45 + fVar99) * fVar106;
  fVar115 = (fVar46 + fVar100) * fVar111;
  fVar123 = fVar121 + fVar116 + fVar120;
  uVar124 = CONCAT44(fVar121 + fVar116 + fVar120,fVar123);
  fVar116 = fVar115 + fVar107 + fVar110;
  uVar158 = CONCAT44(fVar115 + fVar107 + fVar110,fVar116);
  fVar107 = fVar116;
  if (fVar116 >= fVar123) {
    fVar107 = fVar123;
  }
  iVar146 = -(uint)(fVar116 < fVar123);
  if (fVar107 <= fVar109) {
    uVar130 = CONCAT44(iVar146,iVar146);
    fVar105 = (fVar50 + fVar75) * fVar105;
    fVar106 = (fVar52 + fVar77) * fVar106;
    fVar111 = (fVar53 + fVar78) * fVar111;
    uVar117 = uVar158 ^ (uVar158 ^ uVar124) & uVar130;
    fVar75 = fVar105 + fVar106 + fVar111;
    fVar111 = fVar105 + fVar106 + fVar111;
    fVar77 = (float)uVar117;
    fVar78 = (float)(uVar117 >> 0x20);
    if (fVar75 <= fVar77) {
      fVar107 = fVar109 - fVar75;
      if (1e-06 <= fVar107) {
        uVar124 = uVar124 ^ (uVar124 ^ uVar158) & uVar130;
        fVar110 = (float)uVar124;
        fVar106 = fVar77 - fVar110;
        fVar105 = (float)(uVar124 >> 0x20);
        if (1e-06 <= fVar106) {
          uVar127 = NEON_fmax(CONCAT44(fVar111,fVar75),uVar124,4);
          uVar131 = NEON_fmin(CONCAT44(fVar114,fVar109),uVar117,4);
          fVar123 = (float)uVar131 - (float)uVar127;
          fVar115 = ABS(fVar123 - fVar107);
          bVar22 = false;
          bVar24 = false;
          if (fVar123 < param_1[6]) {
            bVar22 = false;
            bVar24 = true;
            if (!NAN(fVar115)) {
              bVar22 = fVar115 == 1e-05;
              bVar24 = 1e-05 <= fVar115;
            }
          }
          fVar115 = ABS(fVar123 - fVar106);
          bVar23 = false;
          bVar25 = false;
          if (bVar24 && !bVar22) {
            bVar23 = false;
            bVar25 = true;
            if (!NAN(fVar115)) {
              bVar23 = fVar115 == 1e-05;
              bVar25 = 1e-05 <= fVar115;
            }
          }
          if (bVar25 && !bVar23) {
            return 4;
          }
          uVar127 = NEON_fmov(0x3f800000,4);
          param_9[5] = (int)fVar54;
          param_9[6] = (int)fVar123;
          param_9[3] = param_8;
          param_9[4] = -0x40800000;
          fVar115 = 0.0;
          fVar123 = 0.0;
          *(undefined1 *)(param_9 + 7) = 1;
          fVar116 = (float)uVar127;
          fVar120 = (float)((ulong)uVar127 >> 0x20);
          fVar122 = fVar120 / (fVar114 - fVar111);
          *param_9 = param_5;
          param_9[1] = param_6;
          param_9[2] = param_7;
          fVar54 = fVar120 / (fVar78 - fVar105);
          fVar121 = 0.0;
          fVar133 = 0.0;
          if (0.001 < ABS(fVar75 - fVar110)) {
            if (fVar75 <= fVar110) {
              fVar115 = (fVar116 / fVar107) * (fVar110 - fVar75);
              fVar123 = fVar122 * (fVar105 - fVar111);
            }
            else {
              fVar121 = (fVar75 - fVar110) * (fVar116 / fVar106);
              fVar133 = (fVar111 - fVar105) * fVar54;
            }
          }
          uVar131 = uVar127;
          if (0.001 < ABS(fVar109 - fVar77)) {
            if (fVar109 <= fVar77) {
              uVar131 = CONCAT44((fVar114 - fVar105) * fVar54,
                                 (fVar109 - fVar110) * (fVar116 / fVar106));
            }
            else {
              uVar127 = CONCAT44(fVar122 * (fVar78 - fVar111),
                                 (fVar116 / fVar107) * (fVar77 - fVar75));
            }
          }
          fVar54 = (float)uVar127;
          fVar75 = (float)((ulong)uVar127 >> 0x20);
          if ((bool)(~(fVar54 <= fVar115) & 1)) {
            fVar121 = fVar116 - fVar121;
            fVar116 = fVar116 - (float)uVar131;
            fVar77 = fVar120 - (float)((ulong)uVar131 >> 0x20);
            if ((bool)(~(fVar121 <= fVar116) & 1)) {
              fVar78 = fVar50 + fVar64 * fVar115;
              fVar107 = fVar52 + fVar71 * fVar123;
              fVar114 = fVar53 + fVar72 * fVar115;
              fVar123 = fVar42 + fVar73 * fVar123;
              fVar109 = fVar50 + fVar64 * fVar54;
              fVar110 = fVar52 + fVar71 * fVar75;
              fVar64 = fVar53 + fVar72 * fVar54;
              fVar42 = fVar42 + fVar73 * fVar75;
              auVar145._0_4_ = fVar109 - fVar78;
              auVar145._4_4_ = fVar110 - fVar107;
              auVar145._8_4_ = fVar64 - fVar114;
              auVar145._12_4_ = fVar42 - fVar123;
              auVar51 = NEON_ext(auVar145,auVar145,4,1);
              fVar73 = fVar43 + fVar82 * fVar116;
              fVar105 = fVar45 + fVar99 * fVar77;
              fVar106 = fVar46 + fVar100 * fVar116;
              fVar111 = fVar44 + fVar79 * fVar77;
              fVar82 = fVar43 + fVar82 * fVar121;
              fVar75 = fVar45 + fVar99 * (fVar120 - fVar133);
              fVar72 = fVar46 + fVar100 * fVar121;
              fVar44 = fVar44 + fVar79 * (fVar120 - fVar133);
              fVar120 = fVar82 - fVar73;
              fVar122 = fVar75 - fVar105;
              fVar133 = fVar72 - fVar106;
              fVar134 = fVar44 - fVar111;
              auVar16._4_4_ = fVar122;
              auVar16._0_4_ = fVar120;
              auVar16._8_4_ = fVar133;
              auVar16._12_4_ = fVar134;
              auVar17._4_4_ = fVar122;
              auVar17._0_4_ = fVar120;
              auVar17._8_4_ = fVar133;
              auVar17._12_4_ = fVar134;
              auVar132 = NEON_ext(auVar16,auVar17,4,1);
              fVar77 = fVar73 - fVar78;
              fVar71 = fVar105 - fVar107;
              fVar150 = fVar106 - fVar114;
              auVar95._0_4_ = auVar145._0_4_ * fVar77;
              auVar95._4_4_ = auVar145._4_4_ * fVar71;
              auVar95._8_4_ = auVar145._8_4_ * fVar150;
              auVar95._12_4_ = auVar145._12_4_ * (fVar111 - fVar123);
              fVar99 = fVar120 * auVar51._0_4_ - auVar145._0_4_ * auVar132._0_4_;
              fVar100 = fVar122 * auVar51._4_4_ - auVar145._4_4_ * auVar132._4_4_;
              uVar135 = SUB41(fVar100,0);
              uVar137 = (undefined1)((uint)fVar100 >> 8);
              uVar139 = (undefined1)((uint)fVar100 >> 0x10);
              uVar141 = (undefined1)((uint)fVar100 >> 0x18);
              fVar100 = fVar133 * auVar145._0_4_ - auVar145._8_4_ * fVar120;
              fVar79 = fVar134 * auVar145._4_4_ - auVar145._12_4_ * fVar122;
              auVar18[4] = uVar135;
              auVar18._0_4_ = fVar99;
              auVar18[5] = uVar137;
              auVar18[6] = uVar139;
              auVar18[7] = uVar141;
              auVar18._8_4_ = fVar100;
              auVar18._12_4_ = fVar79;
              auVar19[4] = uVar135;
              auVar19._0_4_ = fVar99;
              auVar19[5] = uVar137;
              auVar19[6] = uVar139;
              auVar19[7] = uVar141;
              auVar19._8_4_ = fVar100;
              auVar19._12_4_ = fVar79;
              auVar51 = NEON_ext(auVar18,auVar19,4,1);
              uVar127 = NEON_ext(auVar51._0_8_,
                                 CONCAT17(uVar141,CONCAT16(uVar139,CONCAT15(uVar137,CONCAT14(uVar135
                                                  ,fVar99)))),4,1);
              fVar100 = auVar51._0_4_;
              fVar79 = auVar51._4_4_;
              fVar152 = fVar99 * fVar99 + fVar100 * fVar100 + fVar79 * fVar79;
              fVar154 = fVar99 * fVar99 + fVar100 * fVar100 + fVar79 * fVar79;
              uVar131 = NEON_fmov(0x3f800000,4);
              auVar159._0_4_ = auVar132._0_4_ * fVar100 - fVar120 * (float)uVar127;
              auVar159._4_4_ = auVar132._4_4_ * fVar79 - fVar122 * (float)((ulong)uVar127 >> 0x20);
              auVar159._8_4_ = fVar120 * fVar99 - fVar133 * fVar100;
              auVar159._12_4_ = fVar122 * 0.0 - fVar134 * fVar79;
              auVar51 = NEON_ext(auVar159,auVar159,4,1);
              iVar146 = -(uint)(fVar152 == 0.0);
              bVar136 = ~(byte)((uint)iVar146 >> 8);
              bVar138 = ~(byte)((uint)iVar146 >> 0x10);
              bVar140 = ~(byte)((uint)iVar146 >> 0x18);
              uVar124 = CONCAT44((float)((ulong)uVar131 >> 0x20) / fVar154,(float)uVar131 / fVar152)
                        & CONCAT17(bVar140,CONCAT16(bVar138,CONCAT15(bVar136,CONCAT14(~(byte)iVar146
                                                                                      ,CONCAT13(
                                                  bVar140,CONCAT12(bVar138,CONCAT11(bVar136,~(byte)
                                                  iVar146)))))));
              auVar97._0_4_ = auVar145._0_4_ * auVar145._0_4_;
              auVar97._4_4_ = auVar145._4_4_ * auVar145._4_4_;
              auVar97._8_4_ = auVar145._8_4_ * auVar145._8_4_;
              auVar97._12_4_ = auVar145._12_4_ * auVar145._12_4_;
              fVar100 = fVar77 * auVar51._0_4_;
              fVar165 = fVar71 * auVar51._4_4_;
              fVar161 = auVar145._8_4_ * fVar133 +
                        auVar145._0_4_ * fVar120 + auVar145._4_4_ * fVar122;
              fVar166 = auVar145._8_4_ * fVar133 +
                        auVar145._0_4_ * fVar120 + auVar145._4_4_ * fVar122;
              auVar170._0_4_ = fVar120 * fVar120;
              auVar170._4_4_ = fVar122 * fVar122;
              auVar170._8_4_ = fVar133 * fVar133;
              auVar170._12_4_ = fVar134 * fVar134;
              auVar132 = NEON_ext(auVar97,auVar97,8,1);
              auVar148._0_4_ = fVar120 * fVar77;
              auVar148._4_4_ = fVar122 * fVar71;
              auVar148._8_4_ = fVar133 * fVar150;
              auVar148._12_4_ = fVar134 * (fVar111 - fVar123);
              auVar51 = NEON_ext(auVar95,auVar95,8,1);
              auVar171 = NEON_ext(auVar170,auVar170,8,1);
              auVar149 = NEON_ext(auVar148,auVar148,8,1);
              fVar99 = auVar132._0_4_ + auVar97._0_4_ + auVar97._4_4_;
              fVar79 = auVar51._0_4_ + auVar95._0_4_ + auVar95._4_4_;
              auVar51 = NEON_fmov(0x3f800000,4);
              fVar77 = auVar171._0_4_ + auVar170._0_4_ + auVar170._4_4_;
              fVar71 = auVar149._0_4_ + auVar148._0_4_ + auVar148._4_4_;
              uVar127 = NEON_fminnm(CONCAT44((fVar150 * auVar159._0_4_ + fVar100 + fVar165) *
                                             (float)(uVar124 >> 0x20),
                                             (fVar150 * auVar159._0_4_ + fVar100 + fVar165) *
                                             (float)uVar124),uVar131,4);
              iVar146 = -(uint)(fVar99 == 0.0);
              iVar151 = -(uint)(fVar77 == 0.0);
              uVar158 = NEON_fmax(uVar127,0,4);
              fVar99 = auVar51._0_4_ / fVar99;
              fVar77 = auVar51._8_4_ / fVar77;
              fVar100 = (float)CONCAT13((byte)((uint)fVar99 >> 0x18) &
                                        ~(byte)((uint)iVar146 >> 0x18),
                                        CONCAT12((byte)((uint)fVar99 >> 0x10) &
                                                 ~(byte)((uint)iVar146 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar99 >> 8) &
                                                          ~(byte)((uint)iVar146 >> 8),
                                                          SUB41(fVar99,0) & ~(byte)iVar146)));
              fVar99 = (float)CONCAT13((byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar151 >> 0x18)
                                       ,CONCAT12((byte)((uint)fVar77 >> 0x10) &
                                                 ~(byte)((uint)iVar151 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar77 >> 8) &
                                                          ~(byte)((uint)iVar151 >> 8),
                                                          SUB41(fVar77,0) & ~(byte)iVar151)));
              fVar77 = ((float)uVar158 * fVar161 - fVar71) * fVar99;
              fVar99 = ((float)(uVar158 >> 0x20) * fVar166 - fVar71) * fVar99;
              uVar127 = NEON_fminnm(CONCAT44(fVar99,fVar77),uVar131,4);
              uVar127 = NEON_fmax(uVar127,0,4);
              fVar71 = (float)uVar127;
              fVar150 = (float)((ulong)uVar127 >> 0x20);
              iVar146 = -(uint)(fVar71 == fVar77);
              iVar151 = -(uint)(fVar150 == fVar99);
              uVar127 = NEON_fminnm(CONCAT44((fVar79 + fVar150 * fVar166) * fVar100,
                                             (fVar79 + fVar71 * fVar161) * fVar100),uVar131,4);
              iVar126 = -(uint)(fVar152 == 0.0);
              iVar129 = -(uint)(fVar154 == 0.0);
              uVar124 = NEON_fmax(uVar127,0,4);
              uVar124 = uVar124 ^ (uVar124 ^ uVar158) &
                                  ~CONCAT17(~(byte)((uint)iVar151 >> 0x18) |
                                            (byte)((uint)iVar129 >> 0x18),
                                            CONCAT16(~(byte)((uint)iVar151 >> 0x10) |
                                                     (byte)((uint)iVar129 >> 0x10),
                                                     CONCAT15(~(byte)((uint)iVar151 >> 8) |
                                                              (byte)((uint)iVar129 >> 8),
                                                              CONCAT14(~(byte)iVar151 |
                                                                       (byte)iVar129,
                                                                       CONCAT13(~(byte)((uint)
                                                  iVar146 >> 0x18) | (byte)((uint)iVar126 >> 0x18),
                                                  CONCAT12(~(byte)((uint)iVar146 >> 0x10) |
                                                           (byte)((uint)iVar126 >> 0x10),
                                                           CONCAT11(~(byte)((uint)iVar146 >> 8) |
                                                                    (byte)((uint)iVar126 >> 8),
                                                                    ~(byte)iVar146 | (byte)iVar126))
                                                  )))));
              fVar99 = (float)uVar124;
              fVar79 = (float)(uVar124 >> 0x20);
              fVar100 = (fVar78 + auVar145._0_4_ * fVar99) - (fVar73 + fVar120 * fVar71);
              fVar77 = (fVar107 + auVar145._4_4_ * fVar79) - (fVar105 + fVar122 * fVar150);
              fVar99 = (fVar114 + auVar145._8_4_ * fVar99) - (fVar106 + fVar133 * fVar71);
              fVar79 = (fVar123 + auVar145._12_4_ * fVar79) - (fVar111 + fVar134 * fVar150);
              auVar65._0_4_ = fVar100 * fVar100;
              auVar65._4_4_ = fVar77 * fVar77;
              auVar65._8_4_ = fVar99 * fVar99;
              auVar65._12_4_ = fVar79 * fVar79;
              auVar51 = NEON_ext(auVar65,auVar65,8,1);
              if (param_1[1] * param_1[1] < auVar65._0_4_ + auVar65._4_4_ + auVar51._0_4_) {
                return 2;
              }
              fVar133 = 0.0;
              fVar134 = 0.0;
              fVar150 = 0.0;
              fVar100 = fVar114 * 0.0 + fVar78 * 0.0 + fVar107 * 0.0;
              param_9[8] = (int)fVar115;
              param_9[9] = (int)fVar54;
              auVar10._4_4_ = fVar55;
              auVar10._0_4_ = fVar85;
              auVar10._8_4_ = fVar56;
              auVar10._12_4_ = fVar88;
              auVar11._4_4_ = fVar55;
              auVar11._0_4_ = fVar85;
              auVar11._8_4_ = fVar56;
              auVar11._12_4_ = fVar88;
              auVar149 = NEON_ext(auVar10,auVar11,4,1);
              fVar54 = fVar64 * 0.0 + fVar109 * 0.0 + fVar110 * 0.0;
              fVar79 = fVar106 * 0.0 + fVar73 * 0.0 + fVar105 * 0.0;
              fVar77 = fVar72 * 0.0 + fVar82 * 0.0 + fVar75 * 0.0;
              fVar71 = fVar109 - fVar54 * 0.0;
              fVar166 = fVar110 - (fVar64 * 0.0 + fVar109 * 0.0 + fVar110 * 0.0) * 0.0;
              fVar156 = fVar64 - fVar54 * 0.0;
              auVar132 = NEON_ext(auVar59,auVar59,4,1);
              fVar54 = fVar78 - fVar100 * 0.0;
              fVar99 = fVar107 - (fVar114 * 0.0 + fVar78 * 0.0 + fVar107 * 0.0) * 0.0;
              fVar100 = fVar114 - fVar100 * 0.0;
              auVar51 = NEON_ext(auVar21,auVar21,4,1);
              fVar152 = fVar73 - fVar79 * 0.0;
              fVar154 = fVar105 - (fVar106 * 0.0 + fVar73 * 0.0 + fVar105 * 0.0) * 0.0;
              fVar161 = fVar106 - fVar79 * 0.0;
              auVar171 = NEON_ext(auVar37,auVar37,4,1);
              fVar162 = fVar82 - fVar77 * 0.0;
              fVar167 = fVar75 - (fVar72 * 0.0 + fVar82 * 0.0 + fVar75 * 0.0) * 0.0;
              fVar168 = fVar72 - fVar77 * 0.0;
              fVar165 = fVar54 - fVar71;
              fVar155 = fVar99 - fVar166;
              fVar157 = fVar100 - fVar156;
              fVar115 = fVar152 - fVar162;
              fVar120 = fVar154 - fVar167;
              fVar122 = fVar161 - fVar168;
              fVar79 = fVar152 - (fVar54 + (fVar71 - fVar54) * 0.5);
              fVar77 = fVar154 - (fVar99 + (fVar166 - fVar99) * 0.5);
              fVar71 = fVar161 - (fVar100 + (fVar156 - fVar100) * 0.5);
              fVar54 = fVar54 - (fVar152 + (fVar162 - fVar152) * 0.5);
              fVar99 = fVar99 - (fVar154 + (fVar167 - fVar154) * 0.5);
              fVar100 = fVar100 - (fVar161 + (fVar168 - fVar161) * 0.5);
              fVar166 = fVar165 * fVar54;
              fVar156 = fVar155 * fVar99;
              fVar162 = fVar157 * fVar100;
              fVar152 = fVar115 * fVar79;
              fVar154 = fVar120 * fVar77;
              fVar161 = fVar122 * fVar71;
              auVar60._0_4_ = auVar51._0_4_ * fVar101 - fVar36 * auVar132._0_4_;
              auVar60._4_4_ = auVar51._4_4_ * fVar104 - fVar39 * auVar132._4_4_;
              auVar60._8_4_ = fVar36 * auVar59._8_4_ - fVar40 * fVar101;
              auVar60._12_4_ = fVar39 * auVar59._12_4_ - fVar41 * fVar104;
              uVar127 = NEON_fminnm(CONCAT44((fVar166 + fVar156 + fVar162) /
                                             (fVar157 * fVar157 +
                                             fVar165 * fVar165 + fVar155 * fVar155),
                                             (fVar166 + fVar156 + fVar162) /
                                             (fVar157 * fVar157 +
                                             fVar165 * fVar165 + fVar155 * fVar155)),uVar131,4);
              uVar96 = NEON_fmax(uVar127,0,4);
              uVar127 = NEON_fminnm(CONCAT44((fVar152 + fVar154 + fVar161) /
                                             (fVar115 * fVar115 + fVar120 * fVar120 +
                                             fVar122 * fVar122),
                                             (fVar152 + fVar154 + fVar161) /
                                             (fVar115 * fVar115 + fVar120 * fVar120 +
                                             fVar122 * fVar122)),uVar131,4);
              uVar127 = NEON_fmax(uVar127,0,4);
              auVar51 = NEON_ext(auVar60,auVar60,4,1);
              param_9[10] = (int)fVar116;
              param_9[0xb] = (int)fVar121;
              fVar36 = auVar51._0_4_;
              fVar39 = auVar51._4_4_;
              fVar54 = fVar54 - fVar165 * (float)uVar96;
              fVar99 = fVar99 - fVar155 * (float)((ulong)uVar96 >> 0x20);
              fVar100 = fVar100 - fVar157 * (float)uVar96;
              fVar79 = fVar79 - (float)uVar127 * fVar115;
              fVar77 = fVar77 - (float)((ulong)uVar127 >> 0x20) * fVar120;
              fVar71 = fVar71 - (float)uVar127 * fVar122;
              auVar38._0_4_ = auVar171._0_4_ * fVar85 - auVar37._0_4_ * auVar149._0_4_;
              auVar38._4_4_ = auVar171._4_4_ * fVar55 - auVar37._4_4_ * auVar149._4_4_;
              auVar38._8_4_ = auVar37._0_4_ * fVar56 - auVar37._8_4_ * fVar85;
              auVar38._12_4_ = auVar37._4_4_ * fVar88 - auVar37._12_4_ * fVar55;
              auVar51 = NEON_ext(auVar38,auVar38,4,1);
              fVar100 = (SQRT(fVar79 * fVar79 + fVar77 * fVar77 + fVar71 * fVar71) +
                        SQRT(fVar54 * fVar54 + fVar99 * fVar99 + fVar100 * fVar100)) * 0.5;
              fVar54 = auVar60._0_4_ * auVar60._0_4_ + fVar36 * fVar36 + fVar39 * fVar39;
              fVar85 = 0.0;
              fVar99 = 0.0;
              fVar79 = 0.0;
              fVar100 = fVar100 * fVar100;
              param_9[4] = (int)fVar100;
              if (fVar54 != 0.0) {
                fVar54 = SQRT(fVar54);
                fVar99 = fVar36 / fVar54;
                fVar79 = fVar39 / SQRT(auVar60._0_4_ * auVar60._0_4_ +
                                       fVar36 * fVar36 + fVar39 * fVar39);
                fVar85 = auVar60._0_4_ / fVar54;
              }
              fVar54 = -(fVar50 * fVar99 + fVar52 * fVar79 + fVar53 * fVar85);
              fVar55 = auVar51._0_4_;
              fVar36 = auVar51._4_4_;
              fVar88 = auVar38._0_4_ * auVar38._0_4_ + fVar55 * fVar55 + fVar36 * fVar36;
              if (fVar88 != 0.0) {
                fVar88 = SQRT(fVar88);
                fVar133 = fVar55 / fVar88;
                fVar134 = fVar36 / SQRT(auVar38._0_4_ * auVar38._0_4_ +
                                        fVar55 * fVar55 + fVar36 * fVar36);
                fVar150 = auVar38._0_4_ / fVar88;
              }
              auVar63._0_4_ = fVar73 * fVar99;
              auVar63._4_4_ = fVar105 * fVar79;
              auVar63._8_4_ = fVar106 * fVar85;
              auVar63._12_4_ = fVar111 * fVar54;
              auVar51 = NEON_ext(auVar63,auVar63,8,1);
              fVar82 = fVar82 * fVar99;
              fVar75 = fVar75 * fVar79;
              fVar44 = fVar44 * fVar54;
              auVar12._4_4_ = fVar75;
              auVar12._0_4_ = fVar82;
              auVar12._8_4_ = fVar72 * fVar85;
              auVar12._12_4_ = fVar44;
              auVar13._4_4_ = fVar75;
              auVar13._0_4_ = fVar82;
              auVar13._8_4_ = fVar72 * fVar85;
              auVar13._12_4_ = fVar44;
              auVar132 = NEON_ext(auVar12,auVar13,8,1);
              fVar99 = -(fVar43 * fVar133 + fVar45 * fVar134 + fVar46 * fVar150);
              fVar78 = fVar78 * fVar133;
              fVar107 = fVar107 * fVar134;
              auVar14._4_4_ = fVar107;
              auVar14._0_4_ = fVar78;
              auVar14._8_4_ = fVar114 * fVar150;
              auVar14._12_4_ = fVar123 * fVar99;
              auVar15._4_4_ = fVar107;
              auVar15._0_4_ = fVar78;
              auVar15._8_4_ = fVar114 * fVar150;
              auVar15._12_4_ = fVar123 * fVar99;
              auVar149 = NEON_ext(auVar14,auVar15,8,1);
              fVar79 = -param_1[2];
              auVar66._0_4_ = fVar109 * fVar133;
              auVar66._4_4_ = fVar110 * fVar134;
              auVar66._8_4_ = fVar64 * fVar150;
              auVar66._12_4_ = fVar42 * fVar99;
              auVar171 = NEON_ext(auVar66,auVar66,8,1);
              bVar22 = auVar63._0_4_ + auVar63._4_4_ + auVar51._0_4_ + fVar54 < fVar79;
              bVar24 = fVar82 + fVar75 + auVar132._0_4_ + fVar54 < fVar79;
              bVar23 = fVar78 + fVar107 + auVar149._0_4_ + fVar99 < fVar79;
              bVar25 = auVar66._0_4_ + auVar66._4_4_ + auVar171._0_4_ + fVar99 < fVar79;
              iVar146 = 7;
              if (((!bVar22 && !bVar24) && !bVar23) && !bVar25) {
                iVar146 = -1;
              }
              if ((bVar20 & 1) != 0) {
                return iVar146;
              }
              if (((bVar22 || bVar24) || bVar23) || bVar25) {
                return iVar146;
              }
              fVar99 = (float)param_9[5];
              fVar54 = (float)param_9[6];
              fVar88 = (float)param_9[8];
              fVar85 = (float)param_9[9];
              fVar82 = (float)param_9[10];
              fVar79 = (float)param_9[0xb];
LAB_0316ccd0:
              param_9[7] = iVar125;
              *(undefined8 *)param_9 = uVar169;
              *(undefined8 *)(param_9 + 2) = uVar142;
              param_9[4] = (int)((fVar74 + fVar100) * 0.5);
              param_9[5] = (int)((fVar92 + fVar99) * 0.5);
              param_9[6] = (int)((fVar91 + fVar54) * 0.5);
              if (fVar47 <= fVar88) {
                fVar47 = fVar88;
              }
              if (fVar85 <= fVar57) {
                fVar57 = fVar85;
              }
              param_9[8] = (int)fVar47;
              param_9[9] = (int)fVar57;
              if (fVar49 <= fVar82) {
                fVar49 = fVar82;
              }
              if (fVar79 <= fVar48) {
                fVar48 = fVar79;
              }
              param_9[10] = (int)fVar49;
              param_9[0xb] = (int)fVar48;
              return -1;
            }
          }
          return 5;
        }
      }
    }
  }
  return 3;
}


