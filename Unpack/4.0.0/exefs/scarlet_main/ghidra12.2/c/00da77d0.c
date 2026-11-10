/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da77d0; name: FUN_00da77d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00da77d0(long param_1,undefined8 *param_2,ulong param_3)

{
  unkbyte9 *pVar1;
  undefined1 (*pauVar2) [12];
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int *piVar10;
  float *pfVar11;
  undefined1 (*pauVar12) [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  bool bVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  bool bVar25;
  char cVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  int *piVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  int iVar39;
  undefined1 auVar41 [12];
  int iVar65;
  int iVar66;
  int iVar67;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar40;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined4 uVar80;
  undefined1 auVar81 [12];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  float fVar112;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  ulong local_130;
  char *local_128;
  undefined8 local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  char *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  ulong local_98;
  
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
  lVar3 = 0x224;
  if (bVar25) {
    lVar3 = 0x1e8;
  }
  lVar4 = 0x225;
  pcVar5 = (char *)(param_1 + 0x225);
  if (bVar25) {
    lVar4 = 0x1e9;
    pcVar5 = (char *)(param_1 + 0x1e9);
  }
  lVar6 = 0x226;
  if (bVar25) {
    lVar6 = 0x1ea;
  }
  lVar7 = 0x227;
  pcVar8 = (char *)(param_1 + 0x227);
  if (bVar25) {
    lVar7 = 0x1eb;
    pcVar8 = (char *)(param_1 + 0x1eb);
  }
  *(undefined1 *)(param_1 + lVar3) = *(undefined1 *)(param_1 + lVar4);
  puVar9 = (undefined1 *)(param_1 + 0x228);
  if (bVar25) {
    puVar9 = (undefined1 *)(param_1 + 0x1ec);
  }
  *(undefined1 *)(param_1 + lVar6) = *(undefined1 *)(param_1 + lVar7);
  *(undefined8 *)(lVar27 + 0x4c0) = *(undefined8 *)(lVar27 + 0xe0);
  piVar10 = (int *)(param_1 + 0x250);
  pfVar11 = (float *)(param_1 + 0x240);
  pauVar12 = (undefined1 (*) [16])(param_1 + 0x230);
  if (bVar25) {
    piVar10 = (int *)(param_1 + 0x220);
    pfVar11 = (float *)(param_1 + 0x210);
    pauVar12 = (undefined1 (*) [16])(param_1 + 0x200);
  }
  piVar31 = (int *)(param_1 + 0x220);
  *(undefined8 *)(lVar27 + 0x4e0) = *(undefined8 *)(lVar27 + 0x120);
  *(undefined8 *)(lVar27 + 0x4e8) = *(undefined8 *)(lVar27 + 0x128);
  auVar49 = *(undefined1 (*) [16])(lVar27 + 0x4e0);
  pVar1 = (unkbyte9 *)(lVar27 + 0x560);
  uVar30 = *(undefined8 *)(lVar27 + 0x568);
  uVar100 = (undefined1)((ulong)uVar30 >> 8);
  uVar101 = (undefined1)((ulong)uVar30 >> 0x10);
  uVar102 = (undefined1)((ulong)uVar30 >> 0x18);
  uVar103 = (undefined1)((ulong)uVar30 >> 0x20);
  uVar106 = (undefined1)((ulong)uVar30 >> 0x28);
  uVar108 = (undefined1)((ulong)uVar30 >> 0x30);
  uVar110 = (undefined1)((ulong)uVar30 >> 0x38);
  uVar30 = *(undefined8 *)pVar1;
  uVar96 = (undefined1)uVar30;
  uVar97 = (undefined1)((ulong)uVar30 >> 8);
  uVar98 = (undefined1)((ulong)uVar30 >> 0x10);
  uVar99 = (undefined1)((ulong)uVar30 >> 0x18);
  auVar82[9] = uVar100;
  auVar82._0_9_ = *pVar1;
  auVar82[10] = uVar101;
  auVar82[0xb] = uVar102;
  auVar82[0xc] = uVar103;
  auVar82[0xd] = uVar106;
  auVar82[0xe] = uVar108;
  auVar82[0xf] = uVar110;
  auVar113[9] = uVar100;
  auVar113._0_9_ = *pVar1;
  auVar113[10] = uVar101;
  auVar113[0xb] = uVar102;
  auVar113[0xc] = uVar103;
  auVar113[0xd] = uVar106;
  auVar113[0xe] = uVar108;
  auVar113[0xf] = uVar110;
  auVar82 = NEON_ext(auVar82,auVar113,8,1);
  uVar100 = auVar49[4];
  uVar101 = auVar49[5];
  uVar102 = auVar49[6];
  uVar103 = auVar49[7];
  uVar106 = auVar82[0];
  uVar108 = auVar82[1];
  uVar110 = auVar82[2];
  uVar104 = auVar82[3];
  *(undefined8 *)(lVar27 + 0x4c8) = *(undefined8 *)(lVar27 + 0xe8);
  local_140 = (float)uVar30;
  fVar119 = auVar49._0_4_ - local_140;
  fVar121 = auVar49._4_4_ - auVar49._4_4_;
  fStack_138 = auVar82._0_4_;
  fVar123 = auVar49._8_4_ - fStack_138;
  fVar125 = auVar49._12_4_ - 0.0;
  *(undefined8 *)(lVar27 + 0x508) = *(undefined8 *)(lVar27 + 0xf8);
  fVar112 = fVar119 * fVar119;
  fVar115 = fVar121 * fVar121;
  fVar116 = fVar123 * fVar123;
  fVar38 = fVar116 + fVar112 + fVar115;
  fVar126 = SQRT(fVar38);
  *(undefined8 *)(lVar27 + 0x500) = *(undefined8 *)(lVar27 + 0xf0);
  if (NAN(fVar126)) {
    fVar126 = sqrtf(fVar38);
  }
  uVar111 = 0;
  uVar109 = 0;
  uVar107 = 0;
  uVar105 = 0;
  auVar85 = ZEXT816(0);
  if (fVar126 <= 1.1920929e-07) {
    fVar126 = 0.001;
    goto LAB_00da7bf4;
  }
  auVar32._0_4_ = fVar112 + fVar115;
  auVar32._4_4_ = fVar116 + fVar125 * fVar125;
  auVar32._8_4_ = fVar112 + fVar115;
  auVar32._12_4_ = fVar116 + fVar125 * fVar125;
  auVar82 = NEON_ext(auVar32,auVar32,4,1);
  iVar40 = *(int *)(param_1 + 0x168);
  lVar3 = param_1 + 0x150;
  auVar33._0_4_ = auVar82._0_4_ + auVar82._4_4_;
  auVar33._4_4_ = auVar82._8_4_ + auVar82._12_4_;
  auVar33._8_4_ = auVar82._0_4_ + auVar82._4_4_;
  auVar33._12_4_ = auVar82._8_4_ + auVar82._12_4_;
  auVar113 = NEON_frsqrte(auVar33,4);
  auVar83._0_4_ = auVar33._0_4_ * auVar113._0_4_;
  auVar83._4_4_ = auVar33._4_4_ * auVar113._4_4_;
  auVar83._8_4_ = auVar33._8_4_ * auVar113._8_4_;
  auVar83._12_4_ = auVar33._12_4_ * auVar113._12_4_;
  auVar82 = NEON_frsqrts(auVar113,auVar83,4);
  auVar114._0_4_ = auVar113._0_4_ * auVar82._0_4_;
  auVar114._4_4_ = auVar113._4_4_ * auVar82._4_4_;
  auVar114._8_4_ = auVar113._8_4_ * auVar82._8_4_;
  auVar114._12_4_ = auVar113._12_4_ * auVar82._12_4_;
  auVar84._0_4_ = auVar33._0_4_ * auVar114._0_4_;
  auVar84._4_4_ = auVar33._4_4_ * auVar114._4_4_;
  auVar84._8_4_ = auVar33._8_4_ * auVar114._8_4_;
  auVar84._12_4_ = auVar33._12_4_ * auVar114._12_4_;
  iVar39 = -(uint)(auVar33._0_4_ == 0.0);
  iVar65 = -(uint)(auVar33._4_4_ == 0.0);
  iVar66 = -(uint)(auVar33._8_4_ == 0.0);
  iVar67 = -(uint)(auVar33._12_4_ == 0.0);
  auVar82 = NEON_frsqrts(auVar114,auVar84,4);
  fVar119 = fVar119 * auVar114._0_4_ * auVar82._0_4_;
  fVar121 = fVar121 * auVar114._4_4_ * auVar82._4_4_;
  fVar123 = fVar123 * auVar114._8_4_ * auVar82._8_4_;
  fVar125 = fVar125 * auVar114._12_4_ * auVar82._12_4_;
  uVar80 = CONCAT13((byte)((uint)fVar119 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                    CONCAT12((byte)((uint)fVar119 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                             CONCAT11((byte)((uint)fVar119 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                      SUB41(fVar119,0) & ~(byte)iVar39)));
  auVar81._0_8_ =
       CONCAT17((byte)((uint)fVar121 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                CONCAT16((byte)((uint)fVar121 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                         CONCAT15((byte)((uint)fVar121 >> 8) & ~(byte)((uint)iVar65 >> 8),
                                  CONCAT14(SUB41(fVar121,0) & ~(byte)iVar65,uVar80))));
  auVar81[8] = SUB41(fVar123,0) & ~(byte)iVar66;
  auVar81[9] = (byte)((uint)fVar123 >> 8) & ~(byte)((uint)iVar66 >> 8);
  auVar81[10] = (byte)((uint)fVar123 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
  auVar81[0xb] = (byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
  auVar85[0xc] = SUB41(fVar125,0) & ~(byte)iVar67;
  auVar85._0_12_ = auVar81;
  auVar85[0xd] = (byte)((uint)fVar125 >> 8) & ~(byte)((uint)iVar67 >> 8);
  auVar85[0xe] = (byte)((uint)fVar125 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
  auVar85[0xf] = (byte)((uint)fVar125 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
  fStack_14c = (float)((ulong)auVar81._0_8_ >> 0x20);
  fStack_144 = auVar85._12_4_;
  fStack_148 = auVar81._8_4_;
  if (iVar40 == 0) {
    auVar49[4] = uVar100;
    auVar49._0_4_ = local_140;
    auVar49[5] = uVar101;
    auVar49[6] = uVar102;
    auVar49[7] = uVar103;
    auVar49._8_4_ = fStack_138;
    auVar49._12_4_ = 0;
    fStack_134 = 0.0;
    fStack_13c = (float)(CONCAT17(uVar103,CONCAT16(uVar102,CONCAT15(uVar101,CONCAT14(uVar100,
                                                  local_140)))) >> 0x20);
    uVar29 = FUN_00dab388(auVar49,lVar3,0x60042);
LAB_00da7bd8:
    auVar85._4_4_ = fStack_14c;
    auVar85._0_4_ = uVar80;
    auVar85._8_4_ = fStack_148;
    auVar85._12_4_ = fStack_144;
    uVar106 = SUB41(fStack_138,0);
    uVar108 = (undefined1)((uint)fStack_138 >> 8);
    uVar110 = (undefined1)((uint)fStack_138 >> 0x10);
    uVar104 = (undefined1)((uint)fStack_138 >> 0x18);
    uVar105 = SUB41(fStack_134,0);
    uVar107 = (undefined1)((uint)fStack_134 >> 8);
    uVar109 = (undefined1)((uint)fStack_134 >> 0x10);
    uVar111 = (undefined1)((uint)fStack_134 >> 0x18);
    uVar96 = SUB41(local_140,0);
    uVar97 = (undefined1)((uint)local_140 >> 8);
    uVar98 = (undefined1)((uint)local_140 >> 0x10);
    uVar99 = (undefined1)((uint)local_140 >> 0x18);
    uVar100 = SUB41(fStack_13c,0);
    uVar101 = (undefined1)((uint)fStack_13c >> 8);
    uVar102 = (undefined1)((uint)fStack_13c >> 0x10);
    uVar103 = (undefined1)((uint)fStack_13c >> 0x18);
    if ((uVar29 & 0xff) != 0) {
      fVar126 = (float)(uVar29 >> 0x20);
    }
  }
  else if (iVar40 == 1) {
    auVar50[4] = uVar100;
    auVar50._0_4_ = local_140;
    auVar50[5] = uVar101;
    auVar50[6] = uVar102;
    auVar50[7] = uVar103;
    auVar50._8_4_ = fStack_138;
    auVar50._12_4_ = 0;
    uVar29 = FUN_00dab408(auVar50,lVar3,0x60042);
    if ((uVar29 & 0xff) != 0) {
      fVar126 = (float)(uVar29 >> 0x20);
    }
    auVar85._4_4_ = fStack_14c;
    auVar85._0_4_ = uVar80;
    auVar85._8_4_ = fStack_148;
    auVar85._12_4_ = fStack_144;
    uVar105 = 0;
    uVar107 = 0;
    uVar109 = 0;
  }
  else if (iVar40 == 2) {
    auVar42[4] = uVar100;
    auVar42._0_4_ = local_140;
    auVar42[5] = uVar101;
    auVar42[6] = uVar102;
    auVar42[7] = uVar103;
    auVar42._8_4_ = fStack_138;
    auVar42._12_4_ = 0;
    fStack_134 = 0.0;
    fStack_13c = (float)(CONCAT17(uVar103,CONCAT16(uVar102,CONCAT15(uVar101,CONCAT14(uVar100,
                                                  local_140)))) >> 0x20);
    FUN_00da6108(&local_e0,auVar42,lVar3,0x60042);
    if ((char)local_e0 == '\0') {
LAB_00da7bb8:
      auVar48._4_4_ = fStack_13c;
      auVar48._0_4_ = local_140;
      auVar48._8_4_ = fStack_138;
      auVar48._12_4_ = fStack_134;
    }
    else {
      auVar18._4_4_ = fStack_13c;
      auVar18._0_4_ = local_140;
      auVar18._8_4_ = fStack_138;
      auVar18._12_4_ = 0;
      fVar38 = ABS(local_b0) + 0.01;
      auVar68._0_4_ = local_140 - local_c0;
      auVar68._4_4_ = fStack_13c - fStack_bc;
      auVar68._8_4_ = fStack_138 - fStack_b8;
      auVar68._12_4_ = 0.0 - fStack_b4;
      auVar43._0_4_ = local_140 + local_c0 * fVar38;
      auVar43._4_4_ = fStack_13c + fStack_bc * fVar38;
      auVar43._8_4_ = fStack_138 + fStack_b8 * fVar38;
      auVar43._12_4_ = fStack_b4 * fVar38 + 0.0;
      FUN_01091414(&local_130,auVar43,auVar68,auVar18,lVar3,0x60042);
      cVar26 = (char)local_130;
      if ((char)local_130 != '\0') {
        if ((local_e8 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_e8 - 1,0);
        }
        local_130 = local_130 & 0xffffffffffffff00;
      }
      auVar44[0] = -(cVar26 == '\0');
      auVar44[1] = auVar44[0];
      auVar44[2] = auVar44[0];
      auVar44[3] = auVar44[0];
      auVar44[4] = auVar44[0];
      auVar44[5] = auVar44[0];
      auVar44[6] = auVar44[0];
      auVar44[7] = auVar44[0];
      auVar44[8] = auVar44[0];
      auVar44[9] = auVar44[0];
      auVar44[10] = auVar44[0];
      auVar44[0xb] = auVar44[0];
      auVar44[0xc] = auVar44[0];
      auVar44[0xd] = auVar44[0];
      auVar44[0xe] = auVar44[0];
      auVar44[0xf] = auVar44[0];
      fVar38 = ABS(local_b0) + 0.01;
      auVar69._0_4_ = local_c0 * fVar38;
      auVar69._4_4_ = fStack_bc * fVar38;
      auVar69._8_4_ = fStack_b8 * fVar38;
      auVar69._12_4_ = fStack_b4 * fVar38;
      auVar45._0_4_ = -auVar69._0_4_;
      auVar45._4_4_ = -auVar69._4_4_;
      auVar45._8_4_ = -auVar69._8_4_;
      auVar45._12_4_ = -auVar69._12_4_;
      auVar45 = auVar45 ^ (auVar45 ^ auVar69) & auVar44;
      auVar70._0_4_ = local_140 + auVar45._0_4_;
      auVar70._4_4_ = fStack_13c + auVar45._4_4_;
      auVar70._8_4_ = fStack_138 + auVar45._8_4_;
      auVar70._12_4_ = auVar45._12_4_ + 0.0;
      auVar63 = auVar70;
      if ((char)local_e0 != '\0') {
        if ((local_98 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(auVar70,0,local_98 - 1,0);
          auVar63._4_4_ = auVar70._4_4_;
          auVar63._0_4_ = auVar70._0_4_;
          auVar63._8_4_ = auVar70._8_4_;
          auVar63._12_4_ = auVar70._12_4_;
        }
        local_e0 = local_e0 & 0xffffffffffffff00;
      }
      FUN_00da6108(&local_e0,auVar63,lVar3,0x60042);
      local_140 = auVar70._0_4_;
      fStack_13c = auVar70._4_4_;
      fStack_138 = auVar70._8_4_;
      fStack_134 = auVar70._12_4_;
      if ((char)local_e0 == '\0') goto LAB_00da7bb8;
      auVar19._4_4_ = auVar70._4_4_;
      auVar19._0_4_ = auVar70._0_4_;
      auVar19._8_4_ = auVar70._8_4_;
      auVar19._12_4_ = auVar70._12_4_;
      fVar38 = ABS(local_b0) + 0.01;
      auVar71._0_4_ = auVar70._0_4_ - local_c0;
      auVar71._4_4_ = auVar70._4_4_ - fStack_bc;
      auVar71._8_4_ = auVar70._8_4_ - fStack_b8;
      auVar71._12_4_ = auVar70._12_4_ - fStack_b4;
      auVar46._0_4_ = auVar70._0_4_ + local_c0 * fVar38;
      auVar46._4_4_ = auVar70._4_4_ + fStack_bc * fVar38;
      auVar46._8_4_ = auVar70._8_4_ + fStack_b8 * fVar38;
      auVar46._12_4_ = auVar70._12_4_ + fStack_b4 * fVar38;
      auVar82 = FUN_01091414(&local_130,auVar46,auVar71,auVar19,lVar3,0x60042);
      cVar26 = (char)local_130;
      if ((char)local_130 != '\0') {
        if ((local_e8 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(auVar82,auVar49,0,local_e8 - 1,0);
        }
        local_130 = local_130 & 0xffffffffffffff00;
      }
      auVar47[0] = -(cVar26 == '\0');
      auVar47[1] = auVar47[0];
      auVar47[2] = auVar47[0];
      auVar47[3] = auVar47[0];
      auVar47[4] = auVar47[0];
      auVar47[5] = auVar47[0];
      auVar47[6] = auVar47[0];
      auVar47[7] = auVar47[0];
      auVar47[8] = auVar47[0];
      auVar47[9] = auVar47[0];
      auVar47[10] = auVar47[0];
      auVar47[0xb] = auVar47[0];
      auVar47[0xc] = auVar47[0];
      auVar47[0xd] = auVar47[0];
      auVar47[0xe] = auVar47[0];
      auVar47[0xf] = auVar47[0];
      fVar38 = ABS(local_b0) + 0.01;
      auVar93._0_4_ = local_c0 * fVar38;
      auVar93._4_4_ = fStack_bc * fVar38;
      auVar93._8_4_ = fStack_b8 * fVar38;
      auVar93._12_4_ = fStack_b4 * fVar38;
      auVar86._0_4_ = -auVar93._0_4_;
      auVar86._4_4_ = -auVar93._4_4_;
      auVar86._8_4_ = -auVar93._8_4_;
      auVar86._12_4_ = -auVar93._12_4_;
      auVar86 = auVar86 ^ (auVar86 ^ auVar93) & auVar47;
      auVar64._4_4_ = auVar70._4_4_;
      auVar64._0_4_ = auVar70._0_4_;
      auVar64._8_4_ = auVar70._8_4_;
      auVar64._12_4_ = auVar70._12_4_;
      local_170 = auVar86._0_4_;
      fStack_16c = auVar86._4_4_;
      fStack_168 = auVar86._8_4_;
      fStack_164 = auVar86._12_4_;
      if ((char)local_e0 != '\0') {
        if ((local_98 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(auVar64,auVar49,0,local_98 - 1,0);
        }
        local_e0 = local_e0 & 0xffffffffffffff00;
      }
      auVar48._0_4_ = auVar64._0_4_ + local_170;
      auVar48._4_4_ = auVar64._4_4_ + fStack_16c;
      auVar48._8_4_ = auVar64._8_4_ + fStack_168;
      auVar48._12_4_ = auVar64._12_4_ + fStack_164;
    }
    fStack_138 = auVar48._8_4_;
    fStack_134 = auVar48._12_4_;
    local_140 = auVar48._0_4_;
    fStack_13c = auVar48._4_4_;
    uVar29 = FUN_00da94c4(auVar48,auVar49,lVar3,0x60042);
    goto LAB_00da7bd8;
  }
LAB_00da7bf4:
  fVar126 = fVar126 + -0.001;
  fVar38 = (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96))) +
           auVar85._0_4_ * fVar126;
  fVar119 = (float)CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100))) +
            auVar85._4_4_ * fVar126;
  uVar96 = (undefined1)((uint)fVar119 >> 8);
  uVar97 = (undefined1)((uint)fVar119 >> 0x10);
  uVar98 = (undefined1)((uint)fVar119 >> 0x18);
  fVar121 = (float)CONCAT13(uVar104,CONCAT12(uVar110,CONCAT11(uVar108,uVar106))) +
            auVar85._8_4_ * fVar126;
  fVar126 = (float)CONCAT13(uVar111,CONCAT12(uVar109,CONCAT11(uVar107,uVar105))) +
            auVar85._12_4_ * fVar126;
  uVar99 = (undefined1)((uint)fVar126 >> 8);
  uVar100 = (undefined1)((uint)fVar126 >> 0x10);
  uVar101 = (undefined1)((uint)fVar126 >> 0x18);
  fVar123 = *(float *)(lVar27 + 0x588);
  pauVar2 = (undefined1 (*) [12])(lVar27 + 0x4c0);
  auVar24 = *pauVar2;
  auVar23 = *pauVar2;
  auVar81 = *pauVar2;
  lVar3 = param_1 + 0x150;
  fStack_158 = (float)*(undefined8 *)(lVar27 + 0x4c8);
  fStack_154 = (float)((ulong)*(undefined8 *)(lVar27 + 0x4c8) >> 0x20);
  local_160 = (float)*(undefined8 *)*pauVar2;
  fStack_15c = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  bVar25 = true;
  do {
    bVar22 = bVar25;
    auVar87[0xc] = SUB41(fVar126,0);
    auVar87._8_4_ = fVar121;
    auVar87[0xd] = uVar99;
    auVar87[0xe] = uVar100;
    auVar87[0xf] = uVar101;
    auVar87[4] = SUB41(fVar119,0);
    auVar87._0_4_ = fVar38;
    auVar87[5] = uVar96;
    auVar87[6] = uVar97;
    auVar87[7] = uVar98;
    *pcVar5 = '\0';
    *pcVar8 = '\0';
    if ((0.0 < fVar123) && (bVar22)) {
      auVar82 = *(undefined1 (*) [16])(lVar27 + 0x560);
      fVar125 = fVar123 + auVar82._4_4_;
      if (fVar119 - *(float *)(lVar27 + 0x74) <= fVar123) {
        fVar125 = fVar119;
      }
      auVar87._0_4_ = auVar82._0_4_;
      auVar87._4_4_ = fVar125;
      auVar82 = NEON_ext(auVar82,auVar82,8,1);
      auVar87._8_4_ = (float)auVar82._0_4_;
      auVar87._12_4_ = 0.0;
    }
    fVar115 = local_160 - auVar87._0_4_;
    fVar116 = fStack_15c - auVar87._4_4_;
    fVar117 = fStack_158 - auVar87._8_4_;
    fVar118 = fStack_154 - auVar87._12_4_;
    fVar120 = fVar115 * fVar115;
    fVar122 = fVar116 * fVar116;
    fVar124 = fVar117 * fVar117;
    fVar112 = fVar124 + fVar120 + fVar122;
    fVar125 = SQRT(fVar112);
    if (NAN(fVar125)) {
      fVar125 = sqrtf(fVar112);
    }
    if (fVar125 <= 1.1920929e-07) {
      fVar125 = 0.0;
      fStack_148 = 0.0;
      fStack_144 = 0.0;
      local_150 = 0.0;
      fStack_14c = 0.0;
    }
    else {
      auVar34._0_4_ = fVar120 + fVar122;
      auVar34._4_4_ = fVar124 + fVar118 * fVar118;
      auVar34._8_4_ = fVar120 + fVar122;
      auVar34._12_4_ = fVar124 + fVar118 * fVar118;
      auVar82 = NEON_ext(auVar34,auVar34,4,1);
      auVar35._0_4_ = auVar82._0_4_ + auVar82._4_4_;
      auVar35._4_4_ = auVar82._8_4_ + auVar82._12_4_;
      auVar35._8_4_ = auVar82._0_4_ + auVar82._4_4_;
      auVar35._12_4_ = auVar82._8_4_ + auVar82._12_4_;
      auVar82 = NEON_frsqrte(auVar35,4);
      local_e0 = 0x9b4f449bbb69c14f;
      auVar88._0_4_ = auVar35._0_4_ * auVar82._0_4_;
      auVar88._4_4_ = auVar35._4_4_ * auVar82._4_4_;
      auVar88._8_4_ = auVar35._8_4_ * auVar82._8_4_;
      auVar88._12_4_ = auVar35._12_4_ * auVar82._12_4_;
      local_d8 = "collision";
      uStack_d0 = 9;
      auVar113 = NEON_frsqrts(auVar82,auVar88,4);
      local_130 = 0xe86a3897de1e64db;
      auVar72._0_4_ = auVar82._0_4_ * auVar113._0_4_;
      auVar72._4_4_ = auVar82._4_4_ * auVar113._4_4_;
      auVar72._8_4_ = auVar82._8_4_ * auVar113._8_4_;
      auVar72._12_4_ = auVar82._12_4_ * auVar113._12_4_;
      local_c8 = (long *)0x0;
      auVar89._0_4_ = auVar35._0_4_ * auVar72._0_4_;
      auVar89._4_4_ = auVar35._4_4_ * auVar72._4_4_;
      auVar89._8_4_ = auVar35._8_4_ * auVar72._8_4_;
      auVar89._12_4_ = auVar35._12_4_ * auVar72._12_4_;
      local_118 = (long *)0x0;
      iVar40 = -(uint)(auVar35._0_4_ == 0.0);
      iVar39 = -(uint)(auVar35._4_4_ == 0.0);
      iVar65 = -(uint)(auVar35._8_4_ == 0.0);
      iVar66 = -(uint)(auVar35._12_4_ == 0.0);
      auVar82 = NEON_frsqrts(auVar72,auVar89,4);
      local_128 = "distanceLimitMin";
      local_120 = 0x10;
      fVar115 = fVar115 * auVar72._0_4_ * auVar82._0_4_;
      fVar116 = fVar116 * auVar72._4_4_ * auVar82._4_4_;
      fVar117 = fVar117 * auVar72._8_4_ * auVar82._8_4_;
      fVar118 = fVar118 * auVar72._12_4_ * auVar82._12_4_;
      local_150 = (float)CONCAT13((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                  CONCAT12((byte)((uint)fVar115 >> 0x10) &
                                           ~(byte)((uint)iVar40 >> 0x10),
                                           CONCAT11((byte)((uint)fVar115 >> 8) &
                                                    ~(byte)((uint)iVar40 >> 8),
                                                    SUB41(fVar115,0) & ~(byte)iVar40)));
      auVar41._0_8_ =
           CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                    CONCAT16((byte)((uint)fVar116 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                             CONCAT15((byte)((uint)fVar116 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                      CONCAT14(SUB41(fVar116,0) & ~(byte)iVar39,local_150))));
      auVar41[8] = SUB41(fVar117,0) & ~(byte)iVar65;
      auVar41[9] = (byte)((uint)fVar117 >> 8) & ~(byte)((uint)iVar65 >> 8);
      auVar41[10] = (byte)((uint)fVar117 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
      auVar41[0xb] = (byte)((uint)fVar117 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
      auVar51[0xc] = SUB41(fVar118,0) & ~(byte)iVar66;
      auVar51._0_12_ = auVar41;
      auVar51[0xd] = (byte)((uint)fVar118 >> 8) & ~(byte)((uint)iVar66 >> 8);
      auVar51[0xe] = (byte)((uint)fVar118 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
      auVar51[0xf] = (byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
      fStack_148 = auVar41._8_4_;
      fStack_144 = auVar51._12_4_;
      fStack_14c = (float)((ulong)auVar41._0_8_ >> 0x20);
      fVar112 = (float)FUN_00e06d80(lVar28,&local_e0,&local_130);
      auVar73._0_8_ = CONCAT44(fStack_14c * fVar112,local_150 * fVar112);
      auVar73._8_4_ = fStack_148 * fVar112;
      auVar73._12_4_ = fStack_144 * fVar112;
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
        auVar73._8_8_ = auVar73._8_8_;
      }
      auVar52._0_4_ = auVar87._0_4_ + auVar73._0_4_;
      auVar52._4_4_ = auVar87._4_4_ + auVar73._4_4_;
      auVar52._8_4_ = auVar87._8_4_ + auVar73._8_4_;
      auVar52._12_4_ = auVar87._12_4_ + auVar73._12_4_;
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      FUN_00da6108(&local_e0,auVar52,lVar3,0x60042);
      local_140 = auVar52._0_4_;
      fStack_13c = auVar52._4_4_;
      fStack_138 = auVar52._8_4_;
      fStack_134 = auVar52._12_4_;
      if ((char)local_e0 == '\0') {
LAB_00da7ed0:
        auVar87._4_4_ = fStack_13c;
        auVar87._0_4_ = local_140;
        auVar87._8_4_ = fStack_138;
        auVar87._12_4_ = fStack_134;
      }
      else {
        fVar112 = ABS(local_b0) + 0.01;
        auVar20._4_4_ = auVar52._4_4_;
        auVar20._0_4_ = auVar52._0_4_;
        auVar20._8_4_ = auVar52._8_4_;
        auVar20._12_4_ = auVar52._12_4_;
        auVar74._0_4_ = auVar52._0_4_ - local_c0;
        auVar74._4_4_ = auVar52._4_4_ - fStack_bc;
        auVar74._8_4_ = auVar52._8_4_ - fStack_b8;
        auVar74._12_4_ = auVar52._12_4_ - fStack_b4;
        auVar53._0_4_ = auVar52._0_4_ + local_c0 * fVar112;
        auVar53._4_4_ = auVar52._4_4_ + fStack_bc * fVar112;
        auVar53._8_4_ = auVar52._8_4_ + fStack_b8 * fVar112;
        auVar53._12_4_ = auVar52._12_4_ + fStack_b4 * fVar112;
        FUN_01091414(&local_130,auVar53,auVar74,auVar20,lVar3,0x60042);
        cVar26 = (char)local_130;
        if ((char)local_130 != '\0') {
          if ((local_e8 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_e8 - 1,0);
          }
          local_130 = local_130 & 0xffffffffffffff00;
        }
        auVar54[0] = -(cVar26 == '\0');
        auVar54[1] = auVar54[0];
        auVar54[2] = auVar54[0];
        auVar54[3] = auVar54[0];
        auVar54[4] = auVar54[0];
        auVar54[5] = auVar54[0];
        auVar54[6] = auVar54[0];
        auVar54[7] = auVar54[0];
        auVar54[8] = auVar54[0];
        auVar54[9] = auVar54[0];
        auVar54[10] = auVar54[0];
        auVar54[0xb] = auVar54[0];
        auVar54[0xc] = auVar54[0];
        auVar54[0xd] = auVar54[0];
        auVar54[0xe] = auVar54[0];
        auVar54[0xf] = auVar54[0];
        fVar112 = ABS(local_b0) + 0.01;
        auVar75._0_4_ = local_c0 * fVar112;
        auVar75._4_4_ = fStack_bc * fVar112;
        auVar75._8_4_ = fStack_b8 * fVar112;
        auVar75._12_4_ = fStack_b4 * fVar112;
        auVar55._0_4_ = -auVar75._0_4_;
        auVar55._4_4_ = -auVar75._4_4_;
        auVar55._8_4_ = -auVar75._8_4_;
        auVar55._12_4_ = -auVar75._12_4_;
        auVar55 = auVar55 ^ (auVar55 ^ auVar75) & auVar54;
        auVar76._0_4_ = auVar52._0_4_ + auVar55._0_4_;
        auVar76._4_4_ = auVar52._4_4_ + auVar55._4_4_;
        auVar76._8_4_ = auVar52._8_4_ + auVar55._8_4_;
        auVar76._12_4_ = auVar52._12_4_ + auVar55._12_4_;
        auVar59 = auVar76;
        if ((char)local_e0 != '\0') {
          if ((local_98 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(auVar76,0,local_98 - 1,0);
            auVar59._4_4_ = auVar76._4_4_;
            auVar59._0_4_ = auVar76._0_4_;
            auVar59._8_4_ = auVar76._8_4_;
            auVar59._12_4_ = auVar76._12_4_;
          }
          local_e0 = local_e0 & 0xffffffffffffff00;
        }
        FUN_00da6108(&local_e0,auVar59,lVar3,0x60042);
        local_140 = auVar76._0_4_;
        fStack_13c = auVar76._4_4_;
        fStack_138 = auVar76._8_4_;
        fStack_134 = auVar76._12_4_;
        if ((char)local_e0 == '\0') goto LAB_00da7ed0;
        fVar112 = ABS(local_b0) + 0.01;
        auVar21._4_4_ = auVar76._4_4_;
        auVar21._0_4_ = auVar76._0_4_;
        auVar21._8_4_ = auVar76._8_4_;
        auVar21._12_4_ = auVar76._12_4_;
        auVar77._0_4_ = auVar76._0_4_ - local_c0;
        auVar77._4_4_ = auVar76._4_4_ - fStack_bc;
        auVar77._8_4_ = auVar76._8_4_ - fStack_b8;
        auVar77._12_4_ = auVar76._12_4_ - fStack_b4;
        auVar56._0_4_ = auVar76._0_4_ + local_c0 * fVar112;
        auVar56._4_4_ = auVar76._4_4_ + fStack_bc * fVar112;
        auVar56._8_4_ = auVar76._8_4_ + fStack_b8 * fVar112;
        auVar56._12_4_ = auVar76._12_4_ + fStack_b4 * fVar112;
        FUN_01091414(&local_130,auVar56,auVar77,auVar21,lVar3,0x60042);
        cVar26 = (char)local_130;
        if ((char)local_130 != '\0') {
          if ((local_e8 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_e8 - 1,0);
          }
          local_130 = local_130 & 0xffffffffffffff00;
        }
        auVar57[0] = -(cVar26 == '\0');
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
        fVar112 = ABS(local_b0) + 0.01;
        auVar78._0_4_ = local_c0 * fVar112;
        auVar78._4_4_ = fStack_bc * fVar112;
        auVar78._8_4_ = fStack_b8 * fVar112;
        auVar78._12_4_ = fStack_b4 * fVar112;
        auVar58._0_4_ = -auVar78._0_4_;
        auVar58._4_4_ = -auVar78._4_4_;
        auVar58._8_4_ = -auVar78._8_4_;
        auVar58._12_4_ = -auVar78._12_4_;
        auVar58 = auVar58 ^ (auVar58 ^ auVar78) & auVar57;
        auVar90._4_4_ = auVar76._4_4_;
        auVar90._0_4_ = auVar76._0_4_;
        auVar90._8_4_ = auVar76._8_4_;
        auVar90._12_4_ = auVar76._12_4_;
        if ((char)local_e0 != '\0') {
          if ((local_98 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_98 - 1,0);
          }
          local_e0 = local_e0 & 0xffffffffffffff00;
        }
        auVar87._0_4_ = auVar90._0_4_ + auVar58._0_4_;
        auVar87._4_4_ = auVar90._4_4_ + auVar58._4_4_;
        auVar87._8_4_ = auVar90._8_4_ + auVar58._8_4_;
        auVar87._12_4_ = auVar90._12_4_ + auVar58._12_4_;
      }
      iVar40 = *(int *)(param_1 + 0x168);
      if (iVar40 == 2) {
        auVar14._12_4_ = fStack_154;
        auVar14._0_12_ = auVar23;
        uVar29 = FUN_00da94c4(auVar87,auVar14,lVar3,0x60042);
        if ((uVar29 & 0xff) != 0) {
          fVar112 = (float)(uVar29 >> 0x20);
          fVar125 = 0.01;
          if (0.01 <= fVar112) {
            fVar125 = fVar112;
          }
          *pcVar5 = '\x01';
          *pcVar8 = '\x01';
          cVar26 = FUN_00dab408(lVar3,0x60042);
          if (cVar26 != '\0') {
            *pcVar8 = '\0';
          }
        }
      }
      else {
        if (iVar40 == 1) {
          auVar15._12_4_ = fStack_154;
          auVar15._0_12_ = auVar24;
          uVar29 = FUN_00dab408(auVar87,auVar15,lVar3,0x60042);
        }
        else {
          if (iVar40 != 0) goto LAB_00da7fd0;
          auVar13._12_4_ = fStack_154;
          auVar13._0_12_ = auVar81;
          uVar29 = FUN_00dab388(auVar87,auVar13,lVar3,0x60042);
        }
        if ((uVar29 & 0xff) != 0) {
          fVar112 = (float)(uVar29 >> 0x20);
          fVar125 = 0.01;
          if (0.01 <= fVar112) {
            fVar125 = fVar112;
          }
          *pcVar5 = '\x01';
        }
      }
    }
LAB_00da7fd0:
  } while (((0.0 < fVar123) && (*pcVar5 != '\0')) && (bVar25 = false, bVar22));
  fStack_138 = auVar87._8_4_;
  fStack_134 = auVar87._12_4_;
  local_140 = auVar87._0_4_;
  fStack_13c = auVar87._4_4_;
  auVar60._0_8_ = CONCAT44(fStack_13c + fStack_14c * fVar125,local_140 + local_150 * fVar125);
  auVar60._8_4_ = fStack_138 + fStack_148 * fVar125;
  auVar60._12_4_ = fStack_134 + fStack_144 * fVar125;
  *(long *)(*pauVar12 + 8) = auVar60._8_8_;
  *(undefined8 *)*pauVar12 = auVar60._0_8_;
  local_e0 = 0x9b4f449bbb69c14f;
  local_d8 = "collision";
  uStack_d0 = 9;
  local_c8 = (long *)0x0;
  local_130 = 0x1294bfddd05e5df6;
  local_128 = "distanceToWater";
  local_120 = 0xf;
  local_118 = (long *)0x0;
  fVar126 = (float)FUN_00e06d80(lVar28,&local_e0,&local_130);
  uVar30 = _DAT_03cab4f0;
  auVar91._8_8_ = _UNK_03cab4f8;
  auVar91._0_8_ = _DAT_03cab4f0;
  auVar82 = *pauVar12;
  local_150 = auVar82._0_4_;
  fStack_14c = auVar82._4_4_;
  fStack_148 = auVar82._8_4_;
  fStack_144 = auVar82._12_4_;
  if (local_118 != (long *)0x0) {
    fStack_168 = (float)_UNK_03cab4f8;
    fStack_164 = (float)((ulong)_UNK_03cab4f8 >> 0x20);
    (**(code **)(*local_118 + 0x20))();
    auVar91._8_4_ = fStack_168;
    auVar91._0_8_ = uVar30;
    auVar91._12_4_ = fStack_164;
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  auVar61._0_4_ = local_150 + auVar91._0_4_ * fVar126;
  auVar61._4_4_ = fStack_14c + auVar91._4_4_ * fVar126;
  auVar61._8_4_ = fStack_148 + auVar91._8_4_ * fVar126;
  auVar61._12_4_ = fStack_144 + auVar91._12_4_ * fVar126;
  local_e0 = 0x9b4f449bbb69c14f;
  local_d8 = "collision";
  uStack_d0 = 9;
  local_c8 = (long *)0x0;
  local_130 = 0x78efb067777005fe;
  local_128 = "castLengthToWater";
  local_120 = 0x11;
  local_118 = (long *)0x0;
  fVar126 = (float)FUN_00e06d80(lVar28,&local_e0,&local_130);
  fStack_168 = (float)_UNK_03cabe68;
  fStack_164 = (float)((ulong)_UNK_03cabe68 >> 0x20);
  local_170 = (float)_DAT_03cabe60;
  fStack_16c = (float)((ulong)_DAT_03cabe60 >> 0x20);
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  auVar79._0_4_ = auVar61._0_4_ + local_170 * fVar126;
  auVar79._4_4_ = auVar61._4_4_ + fStack_16c * fVar126;
  auVar79._8_4_ = auVar61._8_4_ + fStack_168 * fVar126;
  auVar79._12_4_ = auVar61._12_4_ + fStack_164 * fVar126;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  uVar29 = FUN_00dab408(auVar61,auVar79,lVar3,4);
  if ((uVar29 & 0xff) != 0) {
    auVar16._4_4_ = auVar79._4_4_;
    auVar16._0_4_ = auVar79._0_4_;
    auVar16._8_4_ = auVar79._8_4_;
    auVar16._12_4_ = auVar79._12_4_;
    auVar17._4_4_ = auVar61._4_4_;
    auVar17._0_4_ = auVar61._0_4_;
    auVar17._8_4_ = auVar61._8_4_;
    auVar17._12_4_ = auVar61._12_4_;
    fVar126 = (float)(uVar29 >> 0x20);
    uVar29 = FUN_00dab408(auVar17,auVar16,lVar3,0x60042);
    if (((uVar29 & 0xff) == 0) || (fVar126 < (float)(uVar29 >> 0x20))) {
      local_e0 = 0x9b4f449bbb69c14f;
      local_c8 = (long *)0x0;
      local_d8 = "collision";
      uStack_d0 = 9;
      local_130 = 0x1294bfddd05e5df6;
      local_128 = "distanceToWater";
      local_120 = 0xf;
      local_118 = (long *)0x0;
      fVar38 = (float)FUN_00e06d80(lVar28,&local_e0,&local_130);
      fVar38 = fVar38 + fVar126;
      auVar62._0_8_ =
           CONCAT44(auVar61._4_4_ + fStack_16c * fVar38,auVar61._0_4_ + local_170 * fVar38);
      auVar62._8_4_ = auVar61._8_4_ + fStack_168 * fVar38;
      auVar62._12_4_ = auVar61._12_4_ + fStack_164 * fVar38;
      *(long *)(*pauVar12 + 8) = auVar62._8_8_;
      *(undefined8 *)*pauVar12 = auVar62._0_8_;
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
    }
  }
  *puVar9 = 1;
  *(float *)(puVar9 + 4) = fVar125;
  if ((param_3 & 1) == 0) {
    if (*(char *)(param_1 + 0x1e9) == '\0') {
      if (*(char *)(param_1 + 0x1e8) == '\0') goto LAB_00da8340;
    }
    else if ((*(char *)(param_1 + 0x1eb) == '\0') && (*(char *)(param_1 + 0x1ea) == '\0'))
    goto LAB_00da87a8;
LAB_00da840c:
    *piVar10 = 2;
LAB_00da8414:
    *(long *)(lVar27 + 0x4f8) = auVar87._8_8_;
    *(long *)(lVar27 + 0x4f0) = auVar87._0_8_;
    fVar126 = *(float *)*pauVar12 - *pfVar11;
    fVar38 = *(float *)(*pauVar12 + 4) - pfVar11[1];
    fVar119 = *(float *)(*pauVar12 + 8) - pfVar11[2];
    fVar121 = *(float *)(*pauVar12 + 0xc) - pfVar11[3];
    fVar123 = fVar126 * fVar126;
    fVar125 = fVar38 * fVar38;
    fVar112 = fVar119 * fVar119;
    fVar115 = fVar112 + fVar123 + fVar125;
    if (1.1920929e-07 < fVar115) {
      auVar36._0_4_ = fVar123 + fVar125;
      auVar36._4_4_ = fVar112 + fVar121 * fVar121;
      auVar36._8_4_ = fVar123 + fVar125;
      auVar36._12_4_ = fVar112 + fVar121 * fVar121;
      auVar82 = NEON_ext(auVar36,auVar36,4,1);
      auVar37._0_4_ = auVar82._0_4_ + auVar82._4_4_;
      auVar37._4_4_ = auVar82._8_4_ + auVar82._12_4_;
      auVar37._8_4_ = auVar82._0_4_ + auVar82._4_4_;
      auVar37._12_4_ = auVar82._8_4_ + auVar82._12_4_;
      auVar82 = NEON_frsqrte(auVar37,4);
      local_e0 = 0x9b4f449bbb69c14f;
      auVar94._0_4_ = auVar37._0_4_ * auVar82._0_4_;
      auVar94._4_4_ = auVar37._4_4_ * auVar82._4_4_;
      auVar94._8_4_ = auVar37._8_4_ * auVar82._8_4_;
      auVar94._12_4_ = auVar37._12_4_ * auVar82._12_4_;
      local_d8 = "collision";
      uStack_d0 = 9;
      auVar113 = NEON_frsqrts(auVar82,auVar94,4);
      local_130 = 0x55b0f929c298199e;
      local_128 = "resolveSpeed";
      local_120 = 0xc;
      local_118 = (long *)0x0;
      auVar92._0_4_ = auVar82._0_4_ * auVar113._0_4_;
      auVar92._4_4_ = auVar82._4_4_ * auVar113._4_4_;
      auVar92._8_4_ = auVar82._8_4_ * auVar113._8_4_;
      auVar92._12_4_ = auVar82._12_4_ * auVar113._12_4_;
      local_c8 = (long *)0x0;
      auVar95._0_4_ = auVar37._0_4_ * auVar92._0_4_;
      auVar95._4_4_ = auVar37._4_4_ * auVar92._4_4_;
      auVar95._8_4_ = auVar37._8_4_ * auVar92._8_4_;
      auVar95._12_4_ = auVar37._12_4_ * auVar92._12_4_;
      iVar40 = -(uint)(auVar37._0_4_ == 0.0);
      iVar39 = -(uint)(auVar37._4_4_ == 0.0);
      iVar65 = -(uint)(auVar37._8_4_ == 0.0);
      iVar66 = -(uint)(auVar37._12_4_ == 0.0);
      auVar82 = NEON_frsqrts(auVar92,auVar95,4);
      fVar126 = fVar126 * auVar92._0_4_ * auVar82._0_4_;
      fVar38 = fVar38 * auVar92._4_4_ * auVar82._4_4_;
      fVar119 = fVar119 * auVar92._8_4_ * auVar82._8_4_;
      fVar121 = fVar121 * auVar92._12_4_ * auVar82._12_4_;
      fVar123 = (float)FUN_00e06d80(lVar28,&local_e0,&local_130);
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      fVar125 = (float)(0x5f1ffff9 - ((uint)fVar115 >> 1));
      fVar112 = 1.0 / ((fVar115 * -0.70395225 * fVar125 * fVar125 + 1.6819141) * fVar125) +
                fVar123 * -0.4;
      fVar125 = fVar112 / 0.03;
      if (fVar112 <= 1.1920929e-07) {
        fVar125 = 0.0;
      }
      fVar123 = fVar123 + fVar125;
      lVar28 = (*(code *)**(undefined8 **)*param_2)
                         ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x114));
      fVar125 = (float)((double)*(long *)(lVar28 + 8) / 1000000000.0);
      fVar126 = (float)CONCAT13((byte)((uint)fVar126 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                CONCAT12((byte)((uint)fVar126 >> 0x10) &
                                         ~(byte)((uint)iVar40 >> 0x10),
                                         CONCAT11((byte)((uint)fVar126 >> 8) &
                                                  ~(byte)((uint)iVar40 >> 8),
                                                  SUB41(fVar126,0) & ~(byte)iVar40))) * fVar123 *
                fVar125;
      fVar38 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                               CONCAT12((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar38 >> 8) &
                                                  ~(byte)((uint)iVar39 >> 8),
                                                  SUB41(fVar38,0) & ~(byte)iVar39))) * fVar123 *
               fVar125;
      fVar119 = (float)CONCAT13((byte)((uint)fVar119 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                                CONCAT12((byte)((uint)fVar119 >> 0x10) &
                                         ~(byte)((uint)iVar65 >> 0x10),
                                         CONCAT11((byte)((uint)fVar119 >> 8) &
                                                  ~(byte)((uint)iVar65 >> 8),
                                                  SUB41(fVar119,0) & ~(byte)iVar65))) * fVar123 *
                fVar125;
      if (fVar119 * fVar119 + fVar126 * fVar126 + fVar38 * fVar38 <= fVar115) {
        pfVar11[2] = fVar119 + pfVar11[2];
        pfVar11[3] = (float)CONCAT13((byte)((uint)fVar121 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                                     CONCAT12((byte)((uint)fVar121 >> 0x10) &
                                              ~(byte)((uint)iVar66 >> 0x10),
                                              CONCAT11((byte)((uint)fVar121 >> 8) &
                                                       ~(byte)((uint)iVar66 >> 8),
                                                       SUB41(fVar121,0) & ~(byte)iVar66))) * fVar123
                     * fVar125 + pfVar11[3];
        *pfVar11 = fVar126 + *pfVar11;
        pfVar11[1] = fVar38 + pfVar11[1];
        *(undefined8 *)(lVar27 + 0x4d8) = *(undefined8 *)(pfVar11 + 2);
        uVar30 = *(undefined8 *)pfVar11;
        goto LAB_00da8374;
      }
    }
    *(undefined8 *)(pfVar11 + 2) = *(undefined8 *)(*pauVar12 + 8);
    *(undefined8 *)pfVar11 = *(undefined8 *)*pauVar12;
    *(undefined8 *)(lVar27 + 0x4d8) = *(undefined8 *)(*pauVar12 + 8);
    *(undefined8 *)(lVar27 + 0x4d0) = *(undefined8 *)*pauVar12;
    *piVar10 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x225) == '\0') {
      piVar31 = (int *)(param_1 + 0x250);
      if (*(char *)(param_1 + 0x224) != '\0') goto LAB_00da840c;
LAB_00da8340:
      iVar40 = *piVar31;
      *piVar10 = iVar40;
      if (iVar40 != 2) goto LAB_00da8354;
      goto LAB_00da8414;
    }
    if ((*(char *)(param_1 + 0x227) != '\0') || (*(char *)(param_1 + 0x226) != '\0'))
    goto LAB_00da840c;
LAB_00da87a8:
    *piVar10 = 1;
LAB_00da8354:
    *(long *)(lVar27 + 0x4f8) = auVar87._8_8_;
    *(long *)(lVar27 + 0x4f0) = auVar87._0_8_;
    *(undefined8 *)(pfVar11 + 2) = *(undefined8 *)(*pauVar12 + 8);
    *(undefined8 *)pfVar11 = *(undefined8 *)*pauVar12;
    *(undefined8 *)(lVar27 + 0x4d8) = *(undefined8 *)(*pauVar12 + 8);
    uVar30 = *(undefined8 *)*pauVar12;
LAB_00da8374:
    *(undefined8 *)(lVar27 + 0x4d0) = uVar30;
  }
  uVar30 = *(undefined8 *)(lVar27 + 0xf0);
  *(undefined8 *)(lVar27 + 0x518) = *(undefined8 *)(lVar27 + 0xf8);
  *(undefined8 *)(lVar27 + 0x510) = uVar30;
  cVar26 = *pcVar5;
  *(undefined8 *)(lVar27 + 0x548) = *(undefined8 *)(lVar27 + 0xf8);
  *(undefined8 *)(lVar27 + 0x538) = *(undefined8 *)(lVar27 + 0x4d8);
  *(undefined8 *)(lVar27 + 0x558) = *(undefined8 *)(lVar27 + 0x4f8);
  *(undefined8 *)(lVar27 + 0x530) = *(undefined8 *)(lVar27 + 0x4d0);
  *(undefined8 *)(lVar27 + 0x540) = uVar30;
  *(char *)(lVar27 + 0x4b0) = cVar26;
  *(undefined8 *)(lVar27 + 0x550) = *(undefined8 *)(lVar27 + 0x4f0);
  return;
}


