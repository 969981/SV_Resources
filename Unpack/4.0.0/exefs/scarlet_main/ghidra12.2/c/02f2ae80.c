/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f2ae80; name: FUN_02f2ae80
 */


/* WARNING: Removing unreachable block (ram,0x02f2bb4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2ae80(undefined2 *param_1,undefined2 *param_2,long param_3,undefined8 *param_4,
                 undefined8 param_5,float *param_6,float *param_7,undefined4 *param_8,
                 undefined4 *param_9,float *param_10,undefined8 *param_11)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  byte bVar18;
  uint uVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  undefined1 *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  int iVar47;
  ulong uVar48;
  uint uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined2 uVar57;
  float fVar56;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar69;
  float fVar70;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined2 uVar68;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar71 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 uVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar99;
  float fVar100;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar101;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar108 [12];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar115;
  undefined1 auVar116 [16];
  float fVar117;
  undefined8 uVar118;
  undefined1 auVar119 [16];
  undefined8 uVar120;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  
  pfVar14 = (float *)*param_4;
  pfVar14[0x3a] = -1.0058441;
  pfVar14[0x38] = 0.0;
  pfVar14[0x39] = 0.0;
  pfVar14[0] = 0.0;
  pfVar14[1] = 0.0;
  *(undefined8 *)((long)pfVar14 + 6) = 0;
  pfVar14[0x3b] = 0.0;
  pfVar14[0x3c] = 0.0;
  pfVar14[0x3d] = 0.0;
  pfVar14[0x3e] = -1.0058441;
  pfVar14[0x41] = 0.0;
  pfVar14[0x42] = -1.0058441;
  fVar36 = 0.0;
  fVar37 = 0.0;
  fVar38 = 0.0;
  fVar39 = 0.0;
  pfVar14[0x3f] = 0.0;
  pfVar14[0x40] = 0.0;
  pfVar14[0x43] = 0.0;
  pfVar14[0x44] = 0.0;
  pfVar14[0x45] = 0.0;
  pfVar14[0x46] = -1.0058441;
  pfVar14[0x47] = 0.0;
  pfVar14[0x48] = 0.0;
  pfVar14[0x49] = 0.0;
  pfVar14[0x4a] = -1.0058441;
  pfVar14[0x4b] = 0.0;
  pfVar14[0x4c] = 0.0;
  pfVar14[0x4d] = 0.0;
  pfVar14[0x4e] = -1.0058441;
  pfVar14[0x4f] = 0.0;
  fVar29 = *param_10;
  fVar31 = param_10[1];
  fVar32 = param_10[2];
  fVar101 = (float)param_11[1];
  fVar107 = (float)*param_11;
  fVar106 = (float)((ulong)*param_11 >> 0x20);
  fVar28 = fVar29 * fVar29 + fVar31 * fVar31 + fVar32 * fVar32;
  fVar30 = fVar29 * fVar29 + fVar31 * fVar31 + fVar32 * fVar32;
  fVar34 = fVar107 * fVar107 + fVar106 * fVar106 + fVar101 * fVar101;
  fVar35 = fVar107 * fVar107 + fVar106 * fVar106 + fVar101 * fVar101;
  uVar27 = NEON_fmov(0x3f800000,4);
  fVar26 = (float)uVar27;
  fVar33 = (float)((ulong)uVar27 >> 0x20);
  if (fVar28 != 0.0) {
    fVar38 = fVar26 / SQRT(fVar28);
    fVar39 = fVar33 / SQRT(fVar30);
  }
  if (fVar34 != 0.0) {
    fVar36 = fVar26 / SQRT(fVar34);
    fVar37 = fVar33 / SQRT(fVar35);
  }
  uVar48 = CONCAT44(-(uint)(1.4210855e-14 < fVar35),-(uint)(1.4210855e-14 < fVar34)) & 0x100000001;
  uVar17 = CONCAT44(-(uint)(1.4210855e-14 < fVar30),-(uint)(1.4210855e-14 < fVar28)) & 0x100000001;
  iVar40 = (int)uVar17;
  iVar47 = (int)uVar48;
  uVar49 = (uint)DAT_03cab628;
  uVar19 = (uint)(fVar29 * fVar38) ^ (uint)DAT_03cab620;
  uVar7 = (uint)(fVar31 * fVar39) ^ DAT_03cab620._4_4_;
  fVar33 = (float)((uint)DAT_03cab620 ^
                  ((uint)DAT_03cab620 ^ (uint)(fVar107 * fVar36)) & (iVar47 << 0x1f) >> 0x1f);
  fVar30 = (float)(DAT_03cab620._4_4_ ^
                  (DAT_03cab620._4_4_ ^ (uint)(fVar106 * fVar37)) &
                  ((int)(uVar48 >> 0x20) << 0x1f) >> 0x1f);
  pfVar14[6] = (float)((uint)(fVar32 * fVar38) ^
                      ((uint)(fVar32 * fVar38) ^ uVar49) & ~((iVar40 << 0x1f) >> 0x1f));
  pfVar14[7] = fVar28 * fVar38;
  pfVar14[4] = (float)((uint)(fVar29 * fVar38) ^ uVar19 & ~((iVar40 << 0x1f) >> 0x1f));
  pfVar14[5] = (float)((uint)(fVar31 * fVar39) ^ uVar7 & ~(((int)(uVar17 >> 0x20) << 0x1f) >> 0x1f))
  ;
  pfVar14[10] = (float)(uVar49 ^ (uVar49 ^ (uint)(fVar101 * fVar36)) & (iVar47 << 0x1f) >> 0x1f);
  pfVar14[0xb] = fVar34 * fVar36;
  pfVar14[8] = fVar33;
  pfVar14[9] = fVar30;
  uVar118 = *(undefined8 *)param_6;
  lVar2 = *(long *)(param_3 + 0x30);
  lVar3 = *(long *)(param_3 + 0x38);
  fVar29 = param_7[0xc];
  fVar31 = param_7[0xd];
  fVar32 = param_7[0xe];
  fVar33 = param_7[0xf];
  uVar83 = *(undefined8 *)(param_6 + 0xe);
  uVar27 = *(undefined8 *)(param_6 + 0xc);
  pfVar15 = pfVar14 + 0x18;
  *(undefined8 *)(pfVar14 + 0x1a) = *(undefined8 *)(param_6 + 2);
  *(undefined8 *)pfVar15 = uVar118;
  uVar118 = *(undefined8 *)(param_6 + 4);
  *(undefined8 *)(pfVar14 + 0x1e) = *(undefined8 *)(param_6 + 6);
  *(undefined8 *)(pfVar14 + 0x1c) = uVar118;
  uVar118 = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(pfVar14 + 0x22) = *(undefined8 *)(param_6 + 10);
  *(undefined8 *)(pfVar14 + 0x20) = uVar118;
  uVar118 = *(undefined8 *)(param_6 + 0xc);
  *(undefined8 *)(pfVar14 + 0x26) = *(undefined8 *)(param_6 + 0xe);
  *(undefined8 *)(pfVar14 + 0x24) = uVar118;
  uVar118 = *(undefined8 *)param_7;
  pfVar16 = pfVar14 + 0x28;
  *(undefined8 *)(pfVar14 + 0x2a) = *(undefined8 *)(param_7 + 2);
  *(undefined8 *)pfVar16 = uVar118;
  uVar118 = *(undefined8 *)(param_7 + 4);
  *(undefined8 *)(pfVar14 + 0x2e) = *(undefined8 *)(param_7 + 6);
  *(undefined8 *)(pfVar14 + 0x2c) = uVar118;
  uVar118 = *(undefined8 *)(param_7 + 8);
  *(undefined8 *)(pfVar14 + 0x32) = *(undefined8 *)(param_7 + 10);
  *(undefined8 *)(pfVar14 + 0x30) = uVar118;
  uVar118 = *(undefined8 *)(param_7 + 0xc);
  *(undefined8 *)(pfVar14 + 0x36) = *(undefined8 *)(param_7 + 0xe);
  *(undefined8 *)(pfVar14 + 0x34) = uVar118;
  uVar118 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(pfVar14 + 0xe) = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(pfVar14 + 0xc) = uVar118;
  uVar118 = *(undefined8 *)(lVar2 + 0x80);
  *(undefined8 *)(pfVar14 + 0x12) = *(undefined8 *)(lVar2 + 0x88);
  *(undefined8 *)(pfVar14 + 0x10) = uVar118;
  uVar118 = *(undefined8 *)(lVar3 + 0x80);
  *(undefined8 *)(pfVar14 + 0x16) = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(pfVar14 + 0x14) = uVar118;
  fVar28 = (float)NEON_fminnm(*param_8,0x5f7ffff0);
  pfVar14[1] = fVar28;
  fVar28 = (float)NEON_fminnm(*param_9,0x5f7ffff0);
  pfVar14[2] = fVar28;
  if (param_1 < param_2) {
    fVar29 = fVar29 - (float)uVar27;
    fVar31 = fVar31 - (float)((ulong)uVar27 >> 0x20);
    fVar32 = fVar32 - (float)uVar83;
    fVar33 = fVar33 - (float)((ulong)uVar83 >> 0x20);
    iVar40 = 0;
    do {
      switch(*param_1) {
      case 5:
        *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed) = 1;
        *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xfd) = 1;
        *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0x10d) = 1;
        auVar80 = *(undefined1 (*) [16])(pfVar14 + 0x10);
        auVar67 = *(undefined1 (*) [16])(pfVar14 + 0x14);
        auVar103 = *(undefined1 (*) [16])(pfVar14 + 4);
        auVar113 = *(undefined1 (*) [16])(pfVar14 + 8);
        auVar79 = NEON_ext(auVar67,auVar67,8,1);
        auVar41 = NEON_ext(auVar80,auVar80,8,1);
        auVar92 = NEON_ext(auVar103,auVar103,8,1);
        fVar28 = auVar103._0_4_;
        fVar39 = auVar80._0_4_;
        fVar30 = auVar103._4_4_;
        fVar73 = auVar80._4_4_;
        fVar34 = auVar103._8_4_;
        fVar72 = auVar80._8_4_;
        fVar35 = auVar103._12_4_;
        fVar74 = auVar80._12_4_;
        uVar27 = NEON_ext(auVar103._0_8_,auVar92._0_8_,4,1);
        uVar118 = NEON_ext(auVar80._0_8_,auVar41._0_8_,4,1);
        auVar80 = NEON_ext(auVar113,auVar113,8,1);
        uVar83 = NEON_ext(auVar113._0_8_,auVar80._0_8_,4,1);
        uVar120 = NEON_ext(auVar67._0_8_,auVar79._0_8_,4,1);
        fVar56 = auVar41._4_4_ * auVar41._4_4_;
        fVar115 = fVar39 * fVar28 + fVar73 * fVar30 + fVar72 * fVar34;
        fVar105 = auVar79._4_4_ * auVar79._4_4_;
        fVar107 = auVar113._0_4_;
        fVar106 = auVar113._4_4_;
        fVar101 = auVar113._8_4_;
        fVar59 = auVar67._0_4_;
        fVar60 = auVar67._4_4_;
        fVar38 = auVar113._12_4_;
        fVar25 = fVar56 + -0.5;
        fVar58 = fVar105 + -0.5;
        fVar36 = auVar67._8_4_;
        fVar37 = auVar67._12_4_;
        auVar67 = *(undefined1 (*) [16])(pfVar14 + 0xc);
        auVar109._0_4_ = fVar107 * (float)uVar120 - fVar59 * (float)uVar83;
        auVar109._4_4_ =
             fVar106 * (float)((ulong)uVar120 >> 0x20) - fVar60 * (float)((ulong)uVar83 >> 0x20);
        auVar109._8_4_ = fVar101 * fVar59 - fVar36 * fVar107;
        auVar109._12_4_ = fVar38 * fVar60 - fVar37 * fVar106;
        auVar93._0_4_ = fVar28 * (float)uVar118 - fVar39 * (float)uVar27;
        auVar93._4_4_ =
             fVar30 * (float)((ulong)uVar118 >> 0x20) - fVar73 * (float)((ulong)uVar27 >> 0x20);
        auVar93._8_4_ = fVar34 * fVar39 - fVar72 * fVar28;
        auVar93._12_4_ = fVar35 * fVar73 - fVar74 * fVar30;
        fVar117 = fVar59 * fVar107 + fVar60 * fVar106 + fVar36 * fVar101;
        auVar103 = NEON_ext(auVar93,auVar93,4,1);
        auVar80 = NEON_ext(auVar109,auVar109,4,1);
        fVar24 = fVar28 * fVar25 + fVar39 * fVar115 + auVar103._0_4_ * fVar74;
        fVar39 = fVar30 * (fVar56 + -0.5) +
                 fVar73 * (fVar39 * fVar28 + fVar73 * fVar30 + fVar72 * fVar34) +
                 auVar103._4_4_ * fVar74;
        fVar73 = fVar34 * fVar25 + fVar72 * fVar115 + auVar93._0_4_ * fVar74;
        fVar28 = fVar107 * fVar58 + fVar59 * fVar117 + auVar80._0_4_ * fVar37;
        fVar30 = fVar106 * (fVar105 + -0.5) +
                 fVar60 * (fVar59 * fVar107 + fVar60 * fVar106 + fVar36 * fVar101) +
                 auVar80._4_4_ * fVar37;
        fVar34 = fVar101 * fVar58 + fVar36 * fVar117 + auVar109._0_4_ * fVar37;
        pfVar14[(long)iVar40 * 4 + 0x38] =
             auVar67._0_4_ + ((fVar28 + fVar28) * fVar38 - (fVar24 + fVar24) * fVar35);
        pfVar14[(long)iVar40 * 4 + 0x3c] =
             auVar67._4_4_ + ((fVar30 + fVar30) * fVar38 - (fVar39 + fVar39) * fVar35);
        pfVar14[(long)iVar40 * 4 + 0x40] =
             auVar67._8_4_ + ((fVar34 + fVar34) * fVar38 - (fVar73 + fVar73) * fVar35);
        fVar28 = *(float *)(param_3 + 0x74);
        fVar30 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar28 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar30 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar68 = (undefined2)((uint)fVar30 >> 0x10);
        if (1.0 < fVar30) {
          uVar68 = 0x3f80;
        }
        uVar57 = (undefined2)((uint)fVar28 >> 0x10);
        if (1.0 < fVar28) {
          uVar57 = 0x3f80;
        }
        *(undefined2 *)(pfVar14 + (long)iVar40 * 4 + 0x3a) = uVar68;
        *(undefined2 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xea) = uVar57;
        fVar28 = *(float *)(param_3 + 0x74);
        fVar30 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar28 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar30 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar68 = (undefined2)((uint)fVar30 >> 0x10);
        if (1.0 < fVar30) {
          uVar68 = 0x3f80;
        }
        uVar57 = (undefined2)((uint)fVar28 >> 0x10);
        if (1.0 < fVar28) {
          uVar57 = 0x3f80;
        }
        *(undefined2 *)(pfVar14 + (long)iVar40 * 4 + 0x3e) = uVar68;
        *(undefined2 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xfa) = uVar57;
        fVar28 = *(float *)(param_3 + 0x74);
        fVar30 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar28 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar30 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar68 = (undefined2)((uint)fVar30 >> 0x10);
        if (1.0 < fVar30) {
          uVar68 = 0x3f80;
        }
        uVar57 = (undefined2)((uint)fVar28 >> 0x10);
        if (1.0 < fVar28) {
          uVar57 = 0x3f80;
        }
        *(undefined2 *)(pfVar14 + (long)iVar40 * 4 + 0x42) = uVar68;
        *(undefined2 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0x10a) = uVar57;
        goto LAB_02f2c4dc;
      default:
        goto switchD_02f2b10c_caseD_6;
      case 7:
        *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed) = 2;
        *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3b) =
             *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3b) & 2 | (*(byte *)(param_1 + 1) & 3) << 2;
        pfVar22 = param_7 + (ulong)*(byte *)(param_1 + 1) * 4;
        auVar50._0_4_ = fVar29 * *pfVar22;
        auVar50._4_4_ = fVar31 * pfVar22[1];
        auVar50._8_4_ = fVar32 * pfVar22[2];
        auVar50._12_4_ = fVar33 * pfVar22[3];
        auVar67 = NEON_ext(auVar50,auVar50,8,1);
        pfVar14[(long)iVar40 * 4 + 0x38] = auVar50._0_4_ + auVar50._4_4_ + auVar67._0_4_;
        fVar28 = *(float *)(param_3 + 0x74);
        fVar30 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar28 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar30 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar68 = (undefined2)((uint)fVar30 >> 0x10);
        if (1.0 < fVar30) {
          uVar68 = 0x3f80;
        }
        uVar57 = (undefined2)((uint)fVar28 >> 0x10);
        if (1.0 < fVar28) {
          uVar57 = 0x3f80;
        }
        *(undefined2 *)(pfVar14 + (long)iVar40 * 4 + 0x3a) = uVar68;
        *(undefined2 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xea) = uVar57;
LAB_02f2b5ac:
        iVar40 = iVar40 + 1;
        goto LAB_02f2c4e0;
      case 9:
        fVar28 = *(float *)(param_1 + 4);
        if (3.40282e+38 <= ABS(*(float *)(param_1 + 2))) {
          if (3.40282e+38 <= ABS(fVar28)) goto LAB_02f2be4c;
          bVar12 = false;
          bVar18 = 1;
          fVar30 = fVar28;
        }
        else {
          bVar18 = 0;
          bVar12 = true;
          fVar30 = *(float *)(param_1 + 2);
        }
        pfVar22 = pfVar14 + (long)iVar40 * 4 + 0x3b;
        bVar18 = bVar18 | (byte)((*(byte *)(param_1 + 1) & 3) << 2) | *(byte *)pfVar22 & 2 |
                 (char)((*(byte *)(param_1 + 1) + 1) % 3) * '\x10';
        *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed) = 5;
        *(byte *)pfVar22 = bVar18;
        fVar34 = *(float *)(param_3 + 0x74);
        fVar35 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 6) && 0.0 <= *(float *)(param_1 + 8)) {
          fVar34 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 8);
          fVar35 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 6);
        }
        uVar68 = (undefined2)((uint)fVar35 >> 0x10);
        if (1.0 < fVar35) {
          uVar68 = 0x3f80;
        }
        if (1.0 < fVar34) {
          fVar34 = 1.0;
        }
        *(undefined2 *)(pfVar14 + (long)iVar40 * 4 + 0x3a) = uVar68;
        *(short *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xea) = (short)((uint)fVar34 >> 0x10);
        pfVar20 = param_7 + (ulong)*(byte *)(param_1 + 1) * 4;
        auVar61._0_4_ = fVar29 * *pfVar20;
        auVar61._4_4_ = fVar31 * pfVar20[1];
        auVar61._8_4_ = fVar32 * pfVar20[2];
        auVar61._12_4_ = fVar33 * pfVar20[3];
        auVar67 = NEON_ext(auVar61,auVar61,8,1);
        fVar34 = auVar61._0_4_ + auVar61._4_4_ + auVar67._0_4_;
        pfVar14[(long)iVar40 * 4 + 0x38] = fVar30 + fVar34;
        if ((bVar12) && (ABS(fVar28) < 3.40282e+38)) {
          pfVar14[(long)iVar40 * 4 + 0x39] = fVar28 + fVar34;
          *(byte *)pfVar22 = bVar18 | 2;
        }
        goto LAB_02f2be44;
      case 0xc:
        bVar18 = *(byte *)(param_1 + 1);
        uVar19 = (bVar18 + 2) % 3;
        *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3b) =
             *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3b) & 2 | (bVar18 & 3) << 4 |
             (char)uVar19 * '@' | (char)((bVar18 + 1) % 3) * '\x04';
        bVar4 = *(byte *)(param_1 + 1);
        uVar17 = (ulong)bVar4;
        uVar7 = (bVar4 + 1) % 3;
        uVar48 = (ulong)uVar7;
        *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3f) =
             *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3f) & 2 | (bVar4 & 3) << 4 | (char)uVar7 * '@'
             | (char)((bVar4 + 2) % 3) * '\x04';
        fVar34 = *(float *)(param_3 + 0x70);
        fVar30 = *(float *)(param_3 + 0x74);
        fVar36 = *(float *)(param_1 + 2);
        fVar35 = *(float *)(param_1 + 4);
        *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed) = 4;
        pfVar20 = pfVar14 + ((ulong)bVar18 & 3) * 4 + 0x18;
        pfVar22 = pfVar14 + (ulong)uVar19 * 4 + 0x28;
        auVar51._0_4_ = *pfVar20 * *pfVar22;
        auVar51._4_4_ = pfVar20[1] * pfVar22[1];
        auVar51._8_4_ = pfVar20[2] * pfVar22[2];
        auVar51._12_4_ = pfVar20[3] * pfVar22[3];
        auVar67 = NEON_ext(auVar51,auVar51,8,1);
        fVar28 = auVar51._0_4_ + auVar51._4_4_ + auVar67._0_4_;
        pfVar20 = pfVar14 + (long)iVar40 * 4 + 0x38;
        *pfVar20 = -fVar28;
        pfVar22 = pfVar14 + (long)iVar40 * 4 + 0x3a;
        if ((fVar36 < 0.0) || (fVar35 < 0.0)) {
LAB_02f2bf4c:
          uVar68 = (undefined2)((uint)fVar34 >> 0x10);
          if (1.0 < fVar34) {
            uVar68 = 0x3f80;
          }
          uVar57 = (undefined2)((uint)fVar30 >> 0x10);
          if (1.0 < fVar30) {
            uVar57 = 0x3f80;
          }
          *(undefined2 *)pfVar22 = uVar68;
          *(undefined2 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xea) = uVar57;
        }
        else {
          fVar34 = fVar34 * fVar36;
          fVar30 = fVar30 * fVar35;
          uVar68 = (undefined2)((uint)fVar34 >> 0x10);
          if (1.0 < fVar34) {
            uVar68 = 0x3f80;
          }
          uVar57 = (undefined2)((uint)fVar30 >> 0x10);
          if (1.0 < fVar30) {
            uVar57 = 0x3f80;
          }
          *(undefined2 *)pfVar22 = uVar68;
          *(undefined2 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xea) = uVar57;
        }
        lVar21 = (long)iVar40 + 1;
        *(undefined1 *)((long)(pfVar14 + lVar21 * 4 + 0x38) + 0xd) = 4;
        pfVar22 = pfVar14 + (uVar17 & 3) * 4 + 0x18;
        fVar30 = *pfVar22;
        fVar34 = pfVar22[1];
        fVar35 = pfVar22[2];
        fVar36 = pfVar22[3];
        pfVar22 = pfVar14 + uVar48 * 4 + 0x28;
        fVar37 = *pfVar22;
        fVar107 = pfVar22[1];
        fVar106 = pfVar22[2];
        fVar101 = pfVar22[3];
        *(undefined2 *)(pfVar14 + lVar21 * 4 + 0x3a) = uVar68;
        iVar40 = iVar40 + 2;
        *(undefined2 *)((long)pfVar14 + lVar21 * 0x10 + 0xea) = uVar57;
        auVar66._0_4_ = fVar30 * fVar37;
        auVar66._4_4_ = fVar34 * fVar107;
        auVar66._8_4_ = fVar35 * fVar106;
        auVar66._12_4_ = fVar36 * fVar101;
        auVar67 = NEON_ext(auVar66,auVar66,8,1);
        pfVar14[lVar21 * 4 + 0x38] = -(auVar66._0_4_ + auVar66._4_4_ + auVar67._0_4_);
        *pfVar20 = fVar28;
LAB_02f2bfbc:
        lVar21 = 0x10;
        break;
      case 0xd:
        bVar18 = *(byte *)((long)param_1 + 5);
        if (bVar18 != 0) {
          if (bVar18 == 2) {
            bVar18 = *(byte *)(param_1 + 2);
            uVar19 = (bVar18 + 2) % 3;
            *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3b) =
                 *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3b) & 2 | (bVar18 & 3) << 4 |
                 (char)uVar19 * '@' | (char)((bVar18 + 1) % 3) * '\x04';
            bVar4 = *(byte *)(param_1 + 2);
            uVar17 = (ulong)bVar4;
            uVar7 = (bVar4 + 1) % 3;
            uVar48 = (ulong)uVar7;
            *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3f) =
                 *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3f) & 2 | (bVar4 & 3) << 4 |
                 (char)uVar7 * '@' | (char)((bVar4 + 2) % 3) * '\x04';
            fVar34 = *(float *)(param_3 + 0x70);
            fVar30 = *(float *)(param_3 + 0x74);
            fVar36 = *(float *)(param_1 + 4);
            fVar35 = *(float *)(param_1 + 6);
            *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed) = 4;
            pfVar20 = pfVar14 + ((ulong)bVar18 & 3) * 4 + 0x18;
            pfVar22 = pfVar14 + (ulong)uVar19 * 4 + 0x28;
            auVar53._0_4_ = *pfVar20 * *pfVar22;
            auVar53._4_4_ = pfVar20[1] * pfVar22[1];
            auVar53._8_4_ = pfVar20[2] * pfVar22[2];
            auVar53._12_4_ = pfVar20[3] * pfVar22[3];
            auVar67 = NEON_ext(auVar53,auVar53,8,1);
            fVar28 = auVar53._0_4_ + auVar53._4_4_ + auVar67._0_4_;
            pfVar20 = pfVar14 + (long)iVar40 * 4 + 0x38;
            *pfVar20 = -fVar28;
            pfVar22 = pfVar14 + (long)iVar40 * 4 + 0x3a;
            if ((0.0 <= fVar36) && (0.0 <= fVar35)) {
              fVar34 = fVar34 * fVar36;
              fVar30 = fVar30 * fVar35;
            }
            goto LAB_02f2bf4c;
          }
          uVar19 = (uint)bVar18;
          if (uVar19 == 1) {
            *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3b) =
                 (*(byte *)(param_1 + 1) & 3) << 2 | (*(byte *)(param_1 + 2) & 3) << 4 |
                 *(char *)((long)param_1 + 3) << 6 |
                 *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3b) & 2;
            fVar28 = *(float *)(param_3 + 0x74);
            fVar30 = *(float *)(param_3 + 0x70);
            if (0.0 <= *(float *)(param_1 + 4) && 0.0 <= *(float *)(param_1 + 6)) {
              fVar28 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 6);
              fVar30 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 4);
            }
            uVar68 = (undefined2)((uint)fVar30 >> 0x10);
            if (1.0 < fVar30) {
              uVar68 = 0x3f80;
            }
            uVar57 = (undefined2)((uint)fVar28 >> 0x10);
            if (1.0 < fVar28) {
              uVar57 = 0x3f80;
            }
            *(undefined2 *)(pfVar14 + (long)iVar40 * 4 + 0x3a) = uVar68;
            *(undefined2 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xea) = uVar57;
            pfVar22 = pfVar15 + (ulong)*(byte *)((long)param_1 + 3) * 4;
            fVar28 = *pfVar22;
            fVar30 = pfVar22[1];
            fVar34 = pfVar22[2];
            fVar35 = pfVar22[3];
            pfVar22 = pfVar16 + (ulong)*(byte *)(param_1 + 2) * 4;
            fVar36 = *pfVar22;
            fVar37 = pfVar22[1];
            fVar107 = pfVar22[2];
            fVar106 = pfVar22[3];
            *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed) = 4;
            auVar52._0_4_ = fVar28 * fVar36;
            auVar52._4_4_ = fVar30 * fVar37;
            auVar52._8_4_ = fVar34 * fVar107;
            auVar52._12_4_ = fVar35 * fVar106;
            auVar67 = NEON_ext(auVar52,auVar52,8,1);
            pfVar14[(long)iVar40 * 4 + 0x38] = -(auVar52._0_4_ + auVar52._4_4_ + auVar67._0_4_);
            goto LAB_02f2b5ac;
          }
          bVar18 = *(byte *)(param_1 + 1);
          uVar17 = (ulong)uVar19;
          *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3b) =
               *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3b) & 2 | (byte)((bVar18 & 3) << 2) |
               (byte)((uint)((ulong)(bVar18 + 2) * 0x2aaaaaaab >> 0x21) << 6) |
               (char)((bVar18 + 1) % 3) * '\x10';
          bVar18 = *(byte *)((long)param_1 + 3);
          *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3f) =
               *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x3f) & 2 | (bVar18 & 3) << 2 |
               (byte)((uint)((ulong)(bVar18 + 2) * 0x2aaaaaaab >> 0x21) << 6) |
               (char)((bVar18 + 1) % 3) * '\x10';
          bVar18 = *(byte *)(param_1 + 2);
          *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x43) =
               *(byte *)(pfVar14 + (long)iVar40 * 4 + 0x43) & 2 | (bVar18 & 3) << 2 |
               (byte)((uint)((ulong)(bVar18 + 2) * 0x2aaaaaaab >> 0x21) << 6) |
               (char)((bVar18 + 1) % 3) * '\x10';
          fVar30 = *(float *)(param_3 + 0x70);
          fVar28 = *(float *)(param_3 + 0x74);
          if ((*(float *)(param_1 + 4) < 0.0) || (*(float *)(param_1 + 6) < 0.0)) {
            uVar68 = (undefined2)((uint)fVar30 >> 0x10);
            if (1.0 < fVar30) {
              uVar68 = 0x3f80;
            }
            uVar57 = (undefined2)((uint)fVar28 >> 0x10);
            if (1.0 < fVar28) {
              uVar57 = 0x3f80;
            }
            puVar23 = (undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed);
            do {
              *puVar23 = 4;
              uVar17 = uVar17 - 1;
              pfVar22 = pfVar14 + ((ulong)((byte)puVar23[-1] >> 4) & 3) * 4 + 0x18;
              fVar28 = *pfVar22;
              fVar30 = pfVar22[1];
              fVar34 = pfVar22[2];
              fVar35 = pfVar22[3];
              pfVar22 = pfVar14 + (ulong)((byte)puVar23[-1] >> 6) * 4 + 0x28;
              fVar36 = *pfVar22;
              fVar37 = pfVar22[1];
              fVar107 = pfVar22[2];
              fVar106 = pfVar22[3];
              *(undefined2 *)(puVar23 + -5) = uVar68;
              auVar55._0_4_ = fVar28 * fVar36;
              auVar55._4_4_ = fVar30 * fVar37;
              auVar55._8_4_ = fVar34 * fVar107;
              auVar55._12_4_ = fVar35 * fVar106;
              auVar67 = NEON_ext(auVar55,auVar55,8,1);
              *(float *)(puVar23 + -0xd) = -(auVar55._0_4_ + auVar55._4_4_ + auVar67._0_4_);
              *(undefined2 *)(puVar23 + -3) = uVar57;
              puVar23 = puVar23 + 0x10;
            } while (uVar17 != 0);
          }
          else {
            fVar30 = fVar30 * *(float *)(param_1 + 4);
            fVar28 = fVar28 * *(float *)(param_1 + 6);
            puVar23 = (undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed);
            uVar68 = (undefined2)((uint)fVar30 >> 0x10);
            if (1.0 < fVar30) {
              uVar68 = 0x3f80;
            }
            uVar57 = (undefined2)((uint)fVar28 >> 0x10);
            if (1.0 < fVar28) {
              uVar57 = 0x3f80;
            }
            do {
              *puVar23 = 4;
              uVar17 = uVar17 - 1;
              pfVar22 = pfVar14 + ((ulong)((byte)puVar23[-1] >> 4) & 3) * 4 + 0x18;
              fVar28 = *pfVar22;
              fVar30 = pfVar22[1];
              fVar34 = pfVar22[2];
              fVar35 = pfVar22[3];
              pfVar22 = pfVar14 + (ulong)((byte)puVar23[-1] >> 6) * 4 + 0x28;
              fVar36 = *pfVar22;
              fVar37 = pfVar22[1];
              fVar107 = pfVar22[2];
              fVar106 = pfVar22[3];
              *(undefined2 *)(puVar23 + -5) = uVar68;
              auVar54._0_4_ = fVar28 * fVar36;
              auVar54._4_4_ = fVar30 * fVar37;
              auVar54._8_4_ = fVar34 * fVar107;
              auVar54._12_4_ = fVar35 * fVar106;
              auVar67 = NEON_ext(auVar54,auVar54,8,1);
              *(float *)(puVar23 + -0xd) = -(auVar54._0_4_ + auVar54._4_4_ + auVar67._0_4_);
              *(undefined2 *)(puVar23 + -3) = uVar57;
              puVar23 = puVar23 + 0x10;
            } while (uVar17 != 0);
          }
          iVar40 = iVar40 + uVar19;
          goto LAB_02f2bfbc;
        }
        lVar21 = 0x10;
        break;
      case 0xe:
        if (*(char *)(param_1 + 1) != '\0') {
          fVar28 = *(float *)(param_1 + 6);
          if (1.8446726e+19 <= ABS(*(float *)(param_1 + 4))) {
            if (1.8446726e+19 <= ABS(fVar28)) goto LAB_02f2be4c;
            bVar12 = false;
            bVar18 = 1;
            fVar30 = fVar28;
          }
          else {
            bVar18 = 0;
            bVar12 = true;
            fVar30 = *(float *)(param_1 + 4);
          }
          bVar5 = *(byte *)((long)param_1 + 3);
          bVar6 = *(byte *)(param_1 + 2);
          pfVar22 = pfVar14 + (long)iVar40 * 4 + 0x3b;
          bVar4 = *(byte *)pfVar22;
          bVar18 = bVar18 | (bVar5 & 3) << 2 | (bVar6 & 3) << 4;
          *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed) = 6;
          *(byte *)pfVar22 = bVar18 | bVar4 & 2;
          fVar34 = *(float *)(param_3 + 0x74);
          fVar35 = *(float *)(param_3 + 0x70);
          if (0.0 <= *(float *)(param_1 + 8) && 0.0 <= *(float *)(param_1 + 10)) {
            fVar34 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 10);
            fVar35 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 8);
          }
          uVar68 = (undefined2)((uint)fVar35 >> 0x10);
          if (1.0 < fVar35) {
            uVar68 = 0x3f80;
          }
          uVar57 = (undefined2)((uint)fVar34 >> 0x10);
          if (1.0 < fVar34) {
            uVar57 = 0x3f80;
          }
          *(undefined2 *)(pfVar14 + (long)iVar40 * 4 + 0x3a) = uVar68;
          *(undefined2 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xea) = uVar57;
          lVar21 = (long)iVar40;
          auVar67 = *(undefined1 (*) [16])(pfVar16 + ((ulong)bVar5 & 3) * 4);
          uVar17 = (ulong)bVar6 & 3;
          auVar80 = *(undefined1 (*) [16])(pfVar16 + uVar17 * 4);
          auVar103 = NEON_ext(auVar67,auVar67,8,1);
          auVar113 = NEON_ext(auVar80,auVar80,8,1);
          uVar27 = NEON_ext(auVar67._0_8_,auVar103._0_8_,4,1);
          uVar83 = NEON_ext(auVar80._0_8_,auVar113._0_8_,4,1);
          fVar34 = auVar80._0_4_;
          fVar36 = auVar80._4_4_;
          auVar62._0_4_ = auVar67._0_4_ * (float)uVar83 - fVar34 * (float)uVar27;
          auVar62._4_4_ =
               auVar67._4_4_ * (float)((ulong)uVar83 >> 0x20) -
               fVar36 * (float)((ulong)uVar27 >> 0x20);
          auVar62._8_4_ = auVar67._8_4_ * fVar34 - auVar80._8_4_ * auVar67._0_4_;
          auVar62._12_4_ = auVar67._12_4_ * fVar36 - auVar80._12_4_ * auVar67._4_4_;
          auVar67 = NEON_ext(auVar62,auVar62,4,1);
          pfVar20 = pfVar15 + uVar17 * 4;
          fVar35 = *pfVar20 * auVar67._0_4_;
          fVar101 = pfVar20[1] * auVar67._4_4_;
          fVar106 = pfVar20[2] * auVar62._0_4_;
          fVar34 = fVar34 * *pfVar20;
          fVar36 = fVar36 * pfVar20[1];
          fVar37 = auVar80._8_4_ * pfVar20[2];
          fVar107 = fVar35 + fVar101 + fVar106;
          fVar106 = fVar35 + fVar101 + fVar106;
          fVar35 = fVar34 + fVar36 + fVar37;
          fVar37 = fVar34 + fVar36 + fVar37;
          auVar84._0_4_ = ABS(fVar107);
          auVar84._4_4_ = ABS(fVar106);
          auVar84._8_4_ = ABS(fVar107);
          auVar84._12_4_ = ABS(fVar106);
          auVar75._0_4_ = ABS(fVar35);
          auVar75._4_4_ = ABS(fVar37);
          auVar75._8_4_ = ABS(fVar35);
          auVar75._12_4_ = ABS(fVar37);
          auVar80 = NEON_fmax(auVar75,auVar84,4);
          auVar67 = NEON_fmin(auVar75,auVar84,4);
          auVar9._8_4_ = 0x800000;
          auVar9._0_8_ = 0x80000000800000;
          auVar9._12_4_ = 0x800000;
          auVar80 = NEON_fmax(auVar80,auVar9,4);
          fVar34 = auVar67._0_4_ / auVar80._0_4_;
          fVar36 = fVar34 * fVar34;
          fVar34 = fVar34 + (fVar36 * (fVar36 + -1.0048817) + 3.768408) *
                            (fVar36 * (fVar36 + -3.8319519) + 5.503148) *
                            fVar34 * fVar36 * (fVar36 * 0.0028662258 + -0.007186844) *
                            (fVar36 * (fVar36 + 1.7041799) + 2.2365003);
          fVar34 = (float)((uint)fVar34 ^
                          ((uint)fVar34 ^ (uint)(1.5707964 - fVar34)) &
                          -(uint)(auVar75._0_4_ < auVar84._0_4_));
          uVar19 = (uint)fVar34 ^
                   ((uint)fVar34 ^ (uint)(3.1415927 - fVar34)) & -(uint)(fVar35 <= 0.0);
          fVar34 = (float)CONCAT13((byte)(-(uint)(fVar107 < 0.0) >> 0x18) & 0x80 ^
                                   (byte)(uVar19 >> 0x18),(int3)uVar19);
          if (param_4[1] != 0) {
            fVar35 = -*(float *)(param_4[1] + lVar21 * 8 + 4);
            uVar27 = NEON_fminnm(CONCAT44(fVar35,fVar35),0x46f56fdb46f56fdb,4);
            uVar27 = NEON_fmax(uVar27,0xc6f56fdbc6f56fdb,4);
            uVar27 = CONCAT44(fVar34 - (float)((ulong)uVar27 >> 0x20),fVar34 - (float)uVar27);
            fVar35 = 0.0;
            do {
              fVar37 = (float)(int)(((float)uVar27 + 3.1415927) * 0.15915494);
              fVar36 = (float)uVar27 + fVar37 * -6.2831855;
              uVar27 = CONCAT44((float)((ulong)uVar27 >> 0x20) + fVar37 * -6.2831855,fVar36);
              uVar83 = NEON_fminnm(uVar27,0x40490fdb40490fdb,4);
              uVar83 = NEON_fmax(uVar83,0xc0490fdbc0490fdb,4);
              fVar35 = fVar35 + fVar37;
            } while ((float)uVar83 != fVar36);
            fVar34 = fVar34 + fVar35 * -6.2831855;
          }
          *(short *)((long)pfVar14 + lVar21 * 0x10 + 0xee) = (short)((uint)fVar34 >> 0x10);
          fVar35 = -6.2831855;
          if (-6.2831855 <= fVar30 - fVar34) {
            fVar35 = fVar30 - fVar34;
          }
          pfVar14[lVar21 * 4 + 0x38] = fVar35;
          if (((bVar12) && (ABS(fVar28) < 1.8446726e+19)) && (ABS(fVar28 - fVar34) < 6.2831855)) {
            pfVar14[lVar21 * 4 + 0x39] = fVar28 - fVar34;
LAB_02f2be3c:
            *(byte *)pfVar22 = bVar18 | 2;
          }
          goto LAB_02f2be44;
        }
LAB_02f2be4c:
        lVar21 = 0x20;
        break;
      case 0xf:
        if (*(char *)(param_1 + 1) == '\0') goto LAB_02f2be4c;
        fVar28 = *(float *)(param_1 + 6);
        if (3.1415927 <= ABS(*(float *)(param_1 + 4))) {
          if (3.1415927 <= ABS(fVar28)) goto LAB_02f2be4c;
          bVar12 = false;
          bVar18 = 1;
          fVar30 = fVar28;
        }
        else {
          bVar18 = 0;
          bVar12 = true;
          fVar30 = *(float *)(param_1 + 4);
        }
        bVar18 = bVar18 | (*(byte *)((long)param_1 + 3) & 3) << 2 |
                 (*(byte *)(param_1 + 2) & 3) << 4;
        pfVar22 = pfVar14 + (long)iVar40 * 4 + 0x3b;
        *(byte *)pfVar22 = bVar18 | *(byte *)pfVar22 & 2;
        *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed) = 7;
        fVar34 = *(float *)(param_3 + 0x74);
        fVar35 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 8) && 0.0 <= *(float *)(param_1 + 10)) {
          fVar34 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 10);
          fVar35 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 8);
        }
        uVar68 = (undefined2)((uint)fVar35 >> 0x10);
        if (1.0 < fVar35) {
          uVar68 = 0x3f80;
        }
        uVar57 = (undefined2)((uint)fVar34 >> 0x10);
        if (1.0 < fVar34) {
          uVar57 = 0x3f80;
        }
        *(undefined2 *)(pfVar14 + (long)iVar40 * 4 + 0x3a) = uVar68;
        *(undefined2 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xea) = uVar57;
        auVar63 = *(undefined1 (*) [16])(pfVar16 + (ulong)*(byte *)((long)param_1 + 3) * 4);
        pfVar20 = pfVar15 + (ulong)*(byte *)((long)param_1 + 3) * 4;
        fVar35 = auVar63._0_4_ + *pfVar20;
        fVar36 = auVar63._4_4_ + pfVar20[1];
        fVar37 = auVar63._8_4_ + pfVar20[2];
        fVar34 = auVar63._12_4_;
        fVar107 = SQRT(fVar35 * fVar35 + fVar36 * fVar36 + fVar37 * fVar37);
        fVar106 = SQRT(fVar35 * fVar35 + fVar36 * fVar36 + fVar37 * fVar37);
        if (1e-16 < fVar107) {
          auVar63._0_4_ = fVar35 / fVar107;
          auVar63._4_4_ = fVar36 / fVar106;
          auVar63._8_4_ = fVar37 / fVar107;
          auVar63._12_4_ = (fVar34 + pfVar20[3]) / fVar106;
        }
        auVar67 = *(undefined1 (*) [16])(pfVar16 + (ulong)*(byte *)(param_1 + 2) * 4);
        auVar103 = NEON_ext(auVar67,auVar67,8,1);
        auVar80 = NEON_ext(auVar63,auVar63,4,1);
        uVar27 = NEON_ext(auVar67._0_8_,auVar103._0_8_,4,1);
        fVar34 = auVar63._0_4_;
        fVar36 = auVar63._4_4_;
        fVar107 = fVar34 * (float)uVar27 - auVar67._0_4_ * auVar80._0_4_;
        auVar71._0_8_ =
             CONCAT44(fVar36 * (float)((ulong)uVar27 >> 0x20) - auVar67._4_4_ * auVar80._4_4_,
                      fVar107);
        auVar71._8_4_ = auVar63._8_4_ * auVar67._0_4_ - auVar67._8_4_ * fVar34;
        auVar71._12_4_ = auVar63._12_4_ * auVar67._4_4_ - auVar67._12_4_ * fVar36;
        auVar67 = NEON_ext(auVar71,auVar71,4,1);
        uVar27 = NEON_ext(auVar67._0_8_,auVar71._0_8_,4,1);
        fVar35 = auVar67._0_4_;
        fVar101 = auVar67._4_4_;
        auVar64._0_4_ = auVar80._0_4_ * fVar35 - fVar34 * (float)uVar27;
        auVar64._4_4_ = auVar80._4_4_ * fVar101 - fVar36 * (float)((ulong)uVar27 >> 0x20);
        auVar64._8_4_ = fVar34 * fVar107 - auVar63._8_4_ * fVar35;
        auVar64._12_4_ = fVar36 * 0.0 - auVar63._12_4_ * fVar101;
        auVar67 = NEON_ext(auVar64,auVar64,4,1);
        pfVar20 = pfVar15 + (ulong)*(byte *)(param_1 + 2) * 4;
        fVar35 = *pfVar20 * fVar35;
        fVar101 = pfVar20[1] * fVar101;
        fVar107 = pfVar20[2] * fVar107;
        fVar34 = *pfVar20 * auVar67._0_4_;
        fVar36 = pfVar20[1] * auVar67._4_4_;
        fVar37 = pfVar20[2] * auVar64._0_4_;
        fVar106 = fVar35 + fVar101 + fVar107;
        fVar107 = fVar35 + fVar101 + fVar107;
        fVar35 = fVar34 + fVar36 + fVar37;
        fVar37 = fVar34 + fVar36 + fVar37;
        auVar85._0_4_ = ABS(fVar106);
        auVar85._4_4_ = ABS(fVar107);
        auVar85._8_4_ = ABS(fVar106);
        auVar85._12_4_ = ABS(fVar107);
        auVar76._0_4_ = ABS(fVar35);
        auVar76._4_4_ = ABS(fVar37);
        auVar76._8_4_ = ABS(fVar35);
        auVar76._12_4_ = ABS(fVar37);
        auVar65._0_4_ = -(uint)(fVar35 <= 0.0);
        auVar65._4_4_ = 0;
        auVar65._8_4_ = -(uint)(fVar35 <= 0.0);
        auVar65._12_4_ = -(uint)(fVar37 <= 0.0);
        auVar80 = NEON_fmax(auVar76,auVar85,4);
        auVar67 = NEON_fmin(auVar76,auVar85,4);
        auVar8._8_4_ = 0x800000;
        auVar8._0_8_ = 0x80000000800000;
        auVar8._12_4_ = 0x800000;
        auVar80 = NEON_fmax(auVar80,auVar8,4);
        auVar77._0_4_ = -(uint)(auVar76._0_4_ < auVar85._0_4_);
        auVar77._4_4_ = -(uint)(auVar76._4_4_ < auVar85._4_4_);
        auVar77._8_4_ = -(uint)(auVar76._8_4_ < auVar85._8_4_);
        auVar77._12_4_ = -(uint)(auVar76._12_4_ < auVar85._12_4_);
        fVar34 = auVar67._0_4_ / auVar80._0_4_;
        fVar35 = auVar67._4_4_ / auVar80._4_4_;
        fVar36 = auVar67._8_4_ / auVar80._8_4_;
        fVar37 = auVar67._12_4_ / auVar80._12_4_;
        fVar107 = fVar34 * fVar34;
        fVar101 = fVar35 * fVar35;
        fVar38 = fVar36 * fVar36;
        fVar39 = fVar37 * fVar37;
        auVar78._0_4_ =
             fVar34 + (fVar107 * (fVar107 + -1.0048817) + 3.768408) *
                      (fVar107 * (fVar107 + -3.8319519) + 5.503148) *
                      fVar34 * fVar107 * (fVar107 * 0.0028662258 + -0.007186844) *
                      (fVar107 * (fVar107 + 1.7041799) + 2.2365003);
        auVar78._4_4_ =
             fVar35 + (fVar101 * (fVar101 + -1.0048817) + 3.768408) *
                      (fVar101 * (fVar101 + -3.8319519) + 5.503148) *
                      fVar35 * fVar101 * (fVar101 * 0.0028662258 + -0.007186844) *
                      (fVar101 * (fVar101 + 1.7041799) + 2.2365003);
        auVar78._8_4_ =
             fVar36 + (fVar38 * (fVar38 + -1.0048817) + 3.768408) *
                      (fVar38 * (fVar38 + -3.8319519) + 5.503148) *
                      fVar36 * fVar38 * (fVar38 * 0.0028662258 + -0.007186844) *
                      (fVar38 * (fVar38 + 1.7041799) + 2.2365003);
        auVar78._12_4_ =
             fVar37 + (fVar39 * (fVar39 + -1.0048817) + 3.768408) *
                      (fVar39 * (fVar39 + -3.8319519) + 5.503148) *
                      fVar37 * fVar39 * (fVar39 * 0.0028662258 + -0.007186844) *
                      (fVar39 * (fVar39 + 1.7041799) + 2.2365003);
        auVar86._0_4_ = 1.5707964 - auVar78._0_4_;
        auVar86._4_4_ = 1.5707964 - auVar78._4_4_;
        auVar86._8_4_ = 1.5707964 - auVar78._8_4_;
        auVar86._12_4_ = 1.5707964 - auVar78._12_4_;
        auVar78 = auVar78 ^ (auVar78 ^ auVar86) & auVar77;
        auVar87._0_4_ = 3.1415927 - auVar78._0_4_;
        auVar87._4_4_ = 0;
        auVar87._8_4_ = 0.0 - auVar78._8_4_;
        auVar87._12_4_ = 0.0 - auVar78._12_4_;
        auVar78 = auVar78 ^ (auVar78 ^ auVar87) & auVar65;
        fVar34 = (float)CONCAT13((byte)(-(uint)(fVar106 < 0.0) >> 0x18) & 0x80 ^ auVar78[3],
                                 auVar78._0_3_);
        pfVar14[(long)iVar40 * 4 + 0x38] = fVar30 - fVar34;
        if ((bVar12) && (ABS(fVar28) < 3.1415927)) {
          pfVar14[(long)iVar40 * 4 + 0x39] = fVar28 - fVar34;
          goto LAB_02f2be3c;
        }
LAB_02f2be44:
        iVar40 = iVar40 + 1;
        lVar21 = 0x20;
        break;
      case 0x10:
        if (*(char *)(param_1 + 1) == '\0') {
LAB_02f2b64c:
          lVar21 = 0x30;
        }
        else {
          fVar28 = *(float *)(param_1 + 8);
          fVar30 = *(float *)(param_1 + 10);
          fVar34 = ABS(fVar28);
          bVar12 = false;
          bVar13 = true;
          if (0.0 <= fVar28) {
            bVar12 = false;
            bVar13 = true;
            if (!NAN(fVar34)) {
              bVar12 = fVar34 == 3.1415927;
              bVar13 = 3.1415927 <= fVar34;
            }
          }
          if (!bVar13 || bVar12) {
            bVar18 = 0;
            bVar12 = true;
          }
          else {
            if (3.1415927 < ABS(fVar30)) goto LAB_02f2b64c;
            bVar12 = false;
            bVar18 = 1;
            fVar28 = fVar30;
          }
          pfVar22 = pfVar14 + (long)iVar40 * 4 + 0x3b;
          bVar18 = bVar18 | (*(byte *)((long)param_1 + 3) & 3) << 2 |
                   (*(byte *)(param_1 + 2) & 3) << 4;
          *(byte *)pfVar22 = bVar18 | *(byte *)pfVar22 & 2;
          *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed) = 8;
          fVar34 = *(float *)(param_3 + 0x74);
          fVar35 = *(float *)(param_3 + 0x70);
          if (0.0 <= *(float *)(param_1 + 4) && 0.0 <= *(float *)(param_1 + 6)) {
            fVar34 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 6);
            fVar35 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 4);
          }
          uVar68 = (undefined2)((uint)fVar35 >> 0x10);
          if (1.0 < fVar35) {
            uVar68 = 0x3f80;
          }
          uVar57 = (undefined2)((uint)fVar34 >> 0x10);
          if (1.0 < fVar34) {
            uVar57 = 0x3f80;
          }
          *(undefined2 *)(pfVar14 + (long)iVar40 * 4 + 0x3a) = uVar68;
          *(undefined2 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xea) = uVar57;
          auVar80 = NEON_fmov(0x3f800000,4);
          pfVar20 = pfVar16 + (ulong)*(byte *)(param_1 + 2) * 4;
          pfVar1 = pfVar15 + (ulong)*(byte *)((long)param_1 + 3) * 4;
          fVar34 = *pfVar20 * *pfVar1 + pfVar20[1] * pfVar1[1] + pfVar20[2] * pfVar1[2];
          fVar35 = *pfVar20 * *pfVar1 + pfVar20[1] * pfVar1[1] + pfVar20[2] * pfVar1[2];
          auVar122._0_4_ = ABS(fVar34);
          auVar122._4_4_ = ABS(fVar35);
          auVar122._8_4_ = ABS(fVar34);
          auVar122._12_4_ = ABS(fVar35);
          auVar67 = NEON_fmin(auVar122,auVar80,4);
          fVar35 = auVar67._0_4_;
          fVar36 = auVar67._4_4_;
          fVar37 = auVar67._8_4_;
          fVar107 = auVar67._12_4_;
          auVar104._0_4_ = fVar35 * fVar35;
          auVar104._4_4_ = fVar36 * fVar36;
          auVar104._8_4_ = fVar37 * fVar37;
          auVar104._12_4_ = fVar107 * fVar107;
          auVar108._0_4_ = -(uint)(0.5 < fVar35);
          auVar108._4_4_ = -(uint)(0.5 < fVar36);
          auVar108._8_4_ = -(uint)(0.5 < fVar37);
          auVar114._12_4_ = -(uint)(0.5 < fVar107);
          auVar114._0_12_ = auVar108;
          auVar90._0_4_ = -(uint)(fVar35 < 0.0001);
          auVar90._4_4_ = 0;
          auVar90._8_4_ = -(uint)(fVar37 < 0.0001);
          auVar90._12_4_ = -(uint)(fVar107 < 0.0001);
          auVar81._0_4_ = (auVar80._0_4_ - fVar35) * 0.5;
          auVar81._4_4_ = (auVar80._4_4_ - fVar36) * 0.5;
          auVar81._8_4_ = (auVar80._8_4_ - fVar37) * 0.5;
          auVar81._12_4_ = (auVar80._12_4_ - fVar107) * 0.5;
          auVar97._0_4_ = SQRT(auVar81._0_4_);
          auVar97._4_4_ = SQRT(auVar81._4_4_);
          auVar97._8_4_ = SQRT(auVar81._8_4_);
          auVar97._12_4_ = SQRT(auVar81._12_4_);
          auVar81 = auVar81 ^ (auVar81 ^ auVar104) & ~auVar114;
          fVar35 = auVar81._0_4_;
          fVar36 = auVar81._8_4_;
          fVar37 = auVar81._12_4_;
          auVar97 = auVar97 ^ (auVar97 ^ auVar67) & ~auVar114;
          auVar82._0_4_ =
               auVar97._0_4_ +
               auVar97._0_4_ *
               fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * 0.0421632 + 0.024181312) +
                                            0.045470025) + 0.074953005) + 0.16666752);
          auVar82._4_4_ = 0;
          auVar82._8_4_ =
               auVar97._8_4_ +
               auVar97._8_4_ *
               fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * 0.0421632 + 0.024181312) +
                                            0.045470025) + 0.074953005) + 0.16666752);
          auVar82._12_4_ =
               auVar97._12_4_ +
               auVar97._12_4_ *
               fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * 0.0421632 + 0.024181312) +
                                            0.045470025) + 0.074953005) + 0.16666752);
          auVar98._0_4_ = 1.5707964 - (auVar82._0_4_ + auVar82._0_4_);
          auVar98._4_4_ = 0;
          auVar98._8_4_ = 0.0 - (auVar82._8_4_ + auVar82._8_4_);
          auVar98._12_4_ = 0.0 - (auVar82._12_4_ + auVar82._12_4_);
          auVar121._12_4_ = 0;
          auVar121._0_12_ = auVar108;
          auVar67 = auVar67 ^ (auVar67 ^ auVar82 ^ (auVar82 ^ auVar98) & auVar121) & ~auVar90;
          fVar34 = 1.5707964 -
                   (float)CONCAT13((byte)(-(uint)(fVar34 < 0.0) >> 0x18) & 0x80 ^ auVar67[3],
                                   auVar67._0_3_);
          pfVar14[(long)iVar40 * 4 + 0x38] = fVar28 - fVar34;
          if ((bVar12) && (ABS(fVar30) <= 3.1415927)) {
            pfVar14[(long)iVar40 * 4 + 0x39] = fVar30 - fVar34;
            *(byte *)pfVar22 = bVar18 | 2;
          }
          lVar21 = 0x30;
          iVar40 = iVar40 + 1;
        }
        break;
      case 0x18:
        lVar21 = (long)iVar40;
        *(undefined1 *)((long)pfVar14 + (long)iVar40 * 0x10 + 0xed) = 3;
        *(undefined1 *)((long)pfVar14 + (lVar21 + 1) * 0x10 + 0xed) = 3;
        *(undefined1 *)((long)pfVar14 + (lVar21 + 2) * 0x10 + 0xed) = 3;
        uVar27 = _DAT_03cab140;
        fVar28 = param_6[8];
        fVar30 = param_6[9];
        fVar34 = param_6[10];
        fVar35 = *(float *)(lVar2 + 0x60);
        fVar36 = *(float *)(lVar2 + 100);
        fVar37 = *(float *)(lVar2 + 0x68);
        fVar107 = *(float *)(lVar2 + 0x40);
        fVar106 = *(float *)(lVar2 + 0x44);
        fVar101 = *(float *)(lVar2 + 0x48);
        fVar38 = *(float *)(lVar2 + 0x50);
        fVar39 = *(float *)(lVar2 + 0x54);
        fVar24 = *(float *)(lVar2 + 0x58);
        fVar73 = *param_6;
        fVar72 = param_6[1];
        fVar74 = param_6[2];
        fVar25 = param_6[4];
        fVar56 = param_6[5];
        fVar58 = param_6[6];
        fVar105 = *(float *)(lVar3 + 0x60);
        fVar115 = *(float *)(lVar3 + 100);
        fVar117 = *(float *)(lVar3 + 0x68);
        fVar91 = fVar35 * fVar74 + fVar107 * fVar73 + fVar38 * fVar72;
        fVar99 = fVar36 * fVar74 + fVar106 * fVar73 + fVar39 * fVar72;
        fVar100 = fVar37 * fVar74 + fVar101 * fVar73 + fVar24 * fVar72;
        fVar44 = fVar35 * fVar34 + fVar107 * fVar28 + fVar38 * fVar30;
        fVar45 = fVar36 * fVar34 + fVar106 * fVar28 + fVar39 * fVar30;
        fVar46 = fVar37 * fVar34 + fVar101 * fVar28 + fVar24 * fVar30;
        fVar28 = *(float *)(lVar3 + 0x40);
        fVar30 = *(float *)(lVar3 + 0x44);
        fVar34 = *(float *)(lVar3 + 0x48);
        fVar73 = *(float *)(lVar3 + 0x50);
        fVar72 = *(float *)(lVar3 + 0x54);
        fVar74 = *(float *)(lVar3 + 0x58);
        fVar59 = *param_7;
        fVar60 = param_7[1];
        fVar69 = param_7[2];
        fVar70 = param_7[4];
        fVar10 = param_7[5];
        fVar11 = param_7[6];
        fVar38 = fVar35 * fVar58 + fVar107 * fVar25 + fVar38 * fVar56;
        fVar106 = fVar36 * fVar58 + fVar106 * fVar25 + fVar39 * fVar56;
        fVar107 = fVar37 * fVar58 + fVar101 * fVar25 + fVar24 * fVar56;
        fVar35 = param_7[8];
        fVar36 = param_7[9];
        fVar37 = param_7[10];
        if (fVar46 < 0.0) {
          fVar99 = fVar99 + fVar38;
          if (fVar91 <= fVar106) {
            fVar39 = (fVar26 - fVar46) - (fVar91 - fVar106);
            fVar101 = fVar107 + fVar45;
            fVar107 = fVar44 - fVar100;
            fVar38 = fVar99;
          }
          else {
            fVar101 = fVar100 + fVar44;
            fVar107 = fVar107 - fVar45;
            fVar38 = (fVar91 - fVar106) + (fVar26 - fVar46);
            fVar39 = fVar99;
          }
        }
        else {
          fVar99 = fVar99 - fVar38;
          if (-fVar106 <= fVar91) {
            fVar38 = fVar107 - fVar45;
            fVar39 = fVar44 - fVar100;
            fVar107 = fVar91 + fVar106 + fVar46 + fVar26;
            fVar101 = fVar99;
          }
          else {
            fVar38 = fVar100 + fVar44;
            fVar39 = fVar107 + fVar45;
            fVar101 = (fVar46 + fVar26) - (fVar91 + fVar106);
            fVar107 = fVar99;
          }
        }
        fVar56 = fVar105 * fVar69 + fVar28 * fVar59 + fVar73 * fVar60;
        fVar58 = fVar115 * fVar69 + fVar30 * fVar59 + fVar72 * fVar60;
        fVar59 = fVar117 * fVar69 + fVar34 * fVar59 + fVar74 * fVar60;
        fVar60 = fVar105 * fVar11 + fVar28 * fVar70 + fVar73 * fVar10;
        fVar69 = fVar115 * fVar11 + fVar30 * fVar70 + fVar72 * fVar10;
        fVar70 = fVar117 * fVar11 + fVar34 * fVar70 + fVar74 * fVar10;
        fVar106 = fVar38 * fVar38 + fVar39 * fVar39;
        fVar25 = fVar101 * fVar101 + fVar107 * fVar107;
        fVar24 = fVar106 + fVar25;
        fVar28 = fVar105 * fVar37 + fVar28 * fVar35 + fVar73 * fVar36;
        fVar30 = fVar115 * fVar37 + fVar30 * fVar35 + fVar72 * fVar36;
        fVar34 = fVar117 * fVar37 + fVar34 * fVar35 + fVar74 * fVar36;
        auVar67 = ZEXT816(0);
        if (fVar24 != 0.0) {
          fVar24 = SQRT(fVar24);
          fVar35 = SQRT(fVar106 + fVar25);
          auVar67._0_4_ = fVar38 / fVar24;
          auVar67._4_4_ = fVar39 / fVar35;
          auVar67._8_4_ = fVar101 / fVar24;
          auVar67._12_4_ = fVar107 / fVar35;
        }
        if (fVar34 < 0.0) {
          fVar58 = fVar58 + fVar60;
          if (fVar56 <= fVar69) {
            fVar37 = (fVar26 - fVar34) - (fVar56 - fVar69);
            fVar35 = fVar70 + fVar30;
            fVar36 = fVar28 - fVar59;
            fVar34 = fVar58;
          }
          else {
            fVar35 = fVar59 + fVar28;
            fVar36 = fVar70 - fVar30;
            fVar34 = (fVar56 - fVar69) + (fVar26 - fVar34);
            fVar37 = fVar58;
          }
        }
        else {
          fVar58 = fVar58 - fVar60;
          if (-fVar69 <= fVar56) {
            fVar36 = fVar56 + fVar69 + fVar34 + fVar26;
            fVar35 = fVar58;
            fVar34 = fVar70 - fVar30;
            fVar37 = fVar28 - fVar59;
          }
          else {
            fVar35 = (fVar34 + fVar26) - (fVar56 + fVar69);
            fVar36 = fVar58;
            fVar34 = fVar59 + fVar28;
            fVar37 = fVar70 + fVar30;
          }
        }
        fVar28 = fVar34 * fVar34 + fVar37 * fVar37;
        fVar107 = fVar35 * fVar35 + fVar36 * fVar36;
        fVar30 = fVar28 + fVar107;
        auVar80 = ZEXT816(0);
        if (fVar30 != 0.0) {
          fVar30 = SQRT(fVar30);
          fVar28 = SQRT(fVar28 + fVar107);
          auVar80._0_4_ = fVar34 / fVar30;
          auVar80._4_4_ = fVar37 / fVar28;
          auVar80._8_4_ = fVar35 / fVar30;
          auVar80._12_4_ = fVar36 / fVar28;
        }
        auVar94._0_4_ = -pfVar14[0x14];
        auVar94._4_4_ = -pfVar14[0x15];
        auVar94._8_4_ = -pfVar14[0x16];
        auVar88._0_4_ = -pfVar14[0x10];
        auVar88._4_4_ = -pfVar14[0x11];
        auVar88._8_4_ = -pfVar14[0x12];
        auVar92._8_8_ = _UNK_03caa778;
        auVar92._0_8_ = _DAT_03caa770;
        auVar79._8_8_ = _UNK_03caa6a8;
        auVar79._0_8_ = _DAT_03caa6a0;
        auVar102 = a64_TBL(ZEXT816(0),auVar67,auVar79);
        auVar94._12_4_ = pfVar14[0x17];
        auVar96._8_8_ = _UNK_03caab38;
        auVar96._0_8_ = _DAT_03caab30;
        auVar88._12_4_ = pfVar14[0x13];
        auVar116._8_8_ = _UNK_03caab28;
        auVar116._0_8_ = _DAT_03caab20;
        auVar110 = a64_TBL(ZEXT816(0),auVar67,auVar96);
        auVar121 = a64_TBL(ZEXT816(0),auVar80,auVar79);
        auVar122 = a64_TBL(ZEXT816(0),auVar80,auVar96);
        auVar119 = a64_TBL(ZEXT816(0),auVar94,auVar116);
        auVar95 = a64_TBL(ZEXT816(0),auVar94,auVar92);
        auVar41 = a64_TBL(ZEXT816(0),auVar88,auVar116);
        auVar88 = a64_TBL(ZEXT816(0),auVar88,auVar92);
        auVar111._0_4_ = auVar88._0_4_ * auVar110._0_4_ - auVar41._0_4_ * auVar102._0_4_;
        auVar111._4_4_ = auVar88._4_4_ * auVar110._4_4_ - auVar41._4_4_ * auVar102._4_4_;
        auVar111._8_4_ = auVar88._8_4_ * auVar110._8_4_ - auVar41._8_4_ * auVar102._8_4_;
        auVar111._12_4_ = auVar88._12_4_ * auVar110._12_4_ - auVar41._12_4_ * auVar102._12_4_;
        uVar42 = (undefined4)_UNK_03cab148;
        uVar43 = (undefined4)((ulong)_UNK_03cab148 >> 0x20);
        pfVar22 = pfVar14 + lVar21 * 4 + 0x38;
        pfVar20 = pfVar14 + (lVar21 + 1) * 4 + 0x38;
        pfVar1 = pfVar14 + (lVar21 + 2) * 4 + 0x38;
        auVar103._8_4_ = uVar42;
        auVar103._0_8_ = _DAT_03cab140;
        auVar103._12_4_ = uVar43;
        auVar103 = a64_TBL(ZEXT816(0),auVar111,auVar103);
        auVar112._0_4_ = auVar95._0_4_ * auVar122._0_4_ - auVar119._0_4_ * auVar121._0_4_;
        auVar112._4_4_ = auVar95._4_4_ * auVar122._4_4_ - auVar119._4_4_ * auVar121._4_4_;
        auVar112._8_4_ = auVar95._8_4_ * auVar122._8_4_ - auVar119._8_4_ * auVar121._8_4_;
        auVar112._12_4_ = auVar95._12_4_ * auVar122._12_4_ - auVar119._12_4_ * auVar121._12_4_;
        auVar89._12_4_ =
             auVar103._12_4_ - (auVar88._12_4_ * auVar102._12_4_ + auVar41._12_4_ * auVar110._12_4_)
        ;
        auVar113._8_4_ = uVar42;
        auVar113._0_8_ = _DAT_03cab140;
        auVar113._12_4_ = uVar43;
        auVar113 = a64_TBL(ZEXT816(0),auVar112,auVar113);
        auVar89._0_4_ =
             --(auVar103._0_4_ - (auVar88._0_4_ * auVar102._0_4_ + auVar41._0_4_ * auVar110._0_4_));
        auVar89._4_4_ =
             --(auVar103._4_4_ - (auVar88._4_4_ * auVar102._4_4_ + auVar41._4_4_ * auVar110._4_4_));
        auVar89._8_4_ =
             --(auVar103._8_4_ - (auVar88._8_4_ * auVar102._8_4_ + auVar41._8_4_ * auVar110._8_4_));
        auVar102._12_4_ =
             auVar113._12_4_ -
             (auVar95._12_4_ * auVar121._12_4_ + auVar119._12_4_ * auVar122._12_4_);
        auVar102._0_4_ =
             -(auVar113._0_4_ - (auVar95._0_4_ * auVar121._0_4_ + auVar119._0_4_ * auVar122._0_4_));
        auVar102._4_4_ =
             -(auVar113._4_4_ - (auVar95._4_4_ * auVar121._4_4_ + auVar119._4_4_ * auVar122._4_4_));
        auVar102._8_4_ =
             -(auVar113._8_4_ - (auVar95._8_4_ * auVar121._8_4_ + auVar119._8_4_ * auVar122._8_4_));
        auVar113 = a64_TBL(ZEXT816(0),auVar102,auVar79);
        auVar79 = a64_TBL(ZEXT816(0),auVar102,auVar96);
        auVar96 = a64_TBL(ZEXT816(0),auVar89,auVar116);
        auVar103 = a64_TBL(ZEXT816(0),auVar89,auVar92);
        pfVar14[0x1a] = pfVar14[0x1a];
        pfVar14[0x1b] = auVar67._0_4_;
        pfVar14[0x18] = pfVar14[0x18];
        pfVar14[0x19] = pfVar14[0x19];
        pfVar14[0x1c] = pfVar14[0x1c];
        pfVar14[0x1d] = pfVar14[0x1d];
        pfVar14[0x1e] = pfVar14[0x1e];
        pfVar14[0x1f] = auVar67._4_4_;
        pfVar14[0x22] = pfVar14[0x22];
        pfVar14[0x23] = auVar67._8_4_;
        pfVar14[0x20] = pfVar14[0x20];
        pfVar14[0x21] = pfVar14[0x21];
        pfVar14[0x26] = pfVar14[0x26];
        pfVar14[0x27] = auVar67._12_4_;
        pfVar14[0x24] = pfVar14[0x24];
        pfVar14[0x25] = pfVar14[0x25];
        auVar119._0_12_ = SUB1612(*(undefined1 (*) [16])(pfVar14 + 0x2c),0);
        auVar119._12_4_ = auVar80._4_4_;
        auVar95._0_4_ = auVar103._0_4_ * auVar79._0_4_ - auVar96._0_4_ * auVar113._0_4_;
        auVar95._4_4_ = auVar103._4_4_ * auVar79._4_4_ - auVar96._4_4_ * auVar113._4_4_;
        auVar95._8_4_ = auVar103._8_4_ * auVar79._8_4_ - auVar96._8_4_ * auVar113._8_4_;
        auVar95._12_4_ = auVar103._12_4_ * auVar79._12_4_ - auVar96._12_4_ * auVar113._12_4_;
        auVar110._0_12_ = SUB1612(*(undefined1 (*) [16])(pfVar14 + 0x28),0);
        auVar110._12_4_ = auVar80._0_4_;
        auVar41._8_4_ = uVar42;
        auVar41._0_8_ = uVar27;
        auVar41._12_4_ = uVar43;
        auVar67 = a64_TBL(ZEXT816(0),auVar95,auVar41);
        *(long *)(pfVar14 + 0x2a) = auVar110._8_8_;
        *(long *)(pfVar14 + 0x28) = SUB168(*(undefined1 (*) [16])(pfVar14 + 0x28),0);
        *(long *)(pfVar14 + 0x2e) = auVar119._8_8_;
        *(long *)(pfVar14 + 0x2c) = SUB168(*(undefined1 (*) [16])(pfVar14 + 0x2c),0);
        pfVar14[0x32] = pfVar14[0x32];
        pfVar14[0x33] = auVar80._8_4_;
        pfVar14[0x30] = pfVar14[0x30];
        pfVar14[0x31] = pfVar14[0x31];
        pfVar14[0x36] = pfVar14[0x36];
        pfVar14[0x37] = auVar80._12_4_;
        pfVar14[0x34] = pfVar14[0x34];
        pfVar14[0x35] = pfVar14[0x35];
        *pfVar22 = -(auVar67._0_4_ -
                    (auVar103._0_4_ * auVar113._0_4_ + auVar96._0_4_ * auVar79._0_4_));
        *pfVar20 = -(auVar67._4_4_ -
                    (auVar103._4_4_ * auVar113._4_4_ + auVar96._4_4_ * auVar79._4_4_));
        *pfVar1 = -(auVar67._8_4_ -
                   (auVar103._8_4_ * auVar113._8_4_ + auVar96._8_4_ * auVar79._8_4_));
        fVar28 = *(float *)(param_3 + 0x74);
        fVar30 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar28 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar30 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar68 = (undefined2)((uint)fVar30 >> 0x10);
        if (1.0 < fVar30) {
          uVar68 = 0x3f80;
        }
        uVar57 = (undefined2)((uint)fVar28 >> 0x10);
        if (1.0 < fVar28) {
          uVar57 = 0x3f80;
        }
        *(undefined2 *)(pfVar22 + 2) = uVar68;
        *(undefined2 *)((long)pfVar22 + 10) = uVar57;
        fVar28 = *(float *)(param_3 + 0x74);
        fVar30 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar28 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar30 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar68 = (undefined2)((uint)fVar30 >> 0x10);
        if (1.0 < fVar30) {
          uVar68 = 0x3f80;
        }
        uVar57 = (undefined2)((uint)fVar28 >> 0x10);
        if (1.0 < fVar28) {
          uVar57 = 0x3f80;
        }
        *(undefined2 *)(pfVar20 + 2) = uVar68;
        *(undefined2 *)((long)pfVar20 + 10) = uVar57;
        fVar28 = *(float *)(param_3 + 0x74);
        fVar30 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar28 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar30 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar68 = (undefined2)((uint)fVar30 >> 0x10);
        if (1.0 < fVar30) {
          uVar68 = 0x3f80;
        }
        uVar57 = (undefined2)((uint)fVar28 >> 0x10);
        if (1.0 < fVar28) {
          uVar57 = 0x3f80;
        }
        *(undefined2 *)(pfVar1 + 2) = uVar68;
        *(undefined2 *)((long)pfVar1 + 10) = uVar57;
LAB_02f2c4dc:
        iVar40 = iVar40 + 3;
LAB_02f2c4e0:
        lVar21 = 0x10;
      }
      param_1 = (undefined2 *)(lVar21 + (long)param_1);
    } while (param_1 < param_2);
  }
switchD_02f2b10c_caseD_6:
  *param_4 = pfVar14 + 0x50;
  *pfVar14 = *pfVar14 + 1.1920929e-07;
  *(undefined1 *)pfVar14 = 0x1f;
  param_4[1] = param_4[1] + 0x30;
  return;
}


