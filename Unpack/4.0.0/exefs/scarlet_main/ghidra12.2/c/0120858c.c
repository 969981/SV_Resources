/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0120858c; name: FUN_0120858c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0120858c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 int *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong *puVar12;
  uint uVar13;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  float fVar22;
  undefined1 auVar21 [16];
  float fVar23;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar53;
  float fVar54;
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  undefined1 in_q16 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  float fVar83;
  float fVar85;
  float fVar86;
  undefined1 auVar84 [16];
  float fVar87;
  undefined1 in_q20 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
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
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar107 [16];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  long local_180 [3];
  undefined8 uStack_168;
  float local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  
  uVar3 = DAT_03cab628;
  uVar2 = DAT_03cab620;
  fVar30 = param_3._8_4_;
  fVar29 = param_3._0_4_;
  fVar20 = ABS(param_1._0_4_ * 0.5);
  fVar22 = ABS(param_1._8_4_ * 0.5);
  fVar35 = (fVar29 - fVar20) - fVar29;
  fVar39 = (fVar30 - fVar22) - fVar30;
  fVar31 = (fVar29 + fVar20) - fVar29;
  fVar34 = (fVar30 + fVar22) - fVar30;
  fVar98 = param_2._0_4_;
  auVar44._0_4_ = -fVar98;
  fVar96 = param_2._4_4_;
  fVar53 = -fVar96;
  fVar97 = param_2._8_4_;
  auVar43._8_4_ = -fVar97;
  fVar28 = param_2._12_4_;
  auVar61._4_12_ = in_q16._4_12_;
  auVar61._0_4_ = fVar35;
  auVar63._12_4_ = in_q16._12_4_;
  auVar63._0_8_ = auVar61._0_8_;
  auVar63._8_4_ = 0;
  auVar62._8_8_ = auVar63._8_8_;
  auVar62._4_4_ = fVar39;
  auVar62._0_4_ = fVar35;
  auVar64._0_12_ = auVar62._0_12_;
  auVar64._12_4_ = fVar39;
  auVar88._4_12_ = in_q20._4_12_;
  auVar88._0_4_ = fVar35;
  auVar90._12_4_ = in_q20._12_4_;
  auVar90._0_8_ = auVar88._0_8_;
  auVar90._8_4_ = 0;
  auVar89._8_8_ = auVar90._8_8_;
  auVar89._4_4_ = fVar34;
  auVar89._0_4_ = fVar35;
  auVar91._0_12_ = auVar89._0_12_;
  auVar91._12_4_ = fVar34;
  auVar55._4_4_ = fVar39;
  auVar55._0_4_ = fVar31;
  auVar55._8_4_ = 0;
  auVar55._12_4_ = fVar39;
  auVar107._4_4_ = fVar97;
  auVar107._0_4_ = fVar97;
  auVar107._8_4_ = fVar97;
  auVar107._12_4_ = fVar97;
  auVar84 = NEON_ext(auVar107,param_2,0xc,1);
  auVar43._4_4_ = auVar43._8_4_;
  auVar43._0_4_ = auVar43._8_4_;
  auVar43._12_4_ = auVar43._8_4_;
  auVar24._4_4_ = fVar96;
  auVar24._0_4_ = fVar96;
  auVar24._8_4_ = fVar96;
  auVar24._12_4_ = fVar96;
  auVar24 = NEON_ext(auVar24,auVar84,0xc,1);
  auVar36 = NEON_ext(auVar64,auVar64,8,1);
  fVar20 = auVar36._0_4_;
  auVar65._4_12_ = auVar64._4_12_;
  auVar65._0_4_ = fVar20;
  auVar67._0_8_ = auVar65._0_8_;
  auVar67._8_4_ = auVar36._8_4_;
  auVar67._12_4_ = fVar39;
  auVar66._8_8_ = auVar67._8_8_;
  auVar66._4_4_ = fVar35;
  auVar66._0_4_ = fVar20;
  auVar68._0_12_ = auVar66._0_12_;
  auVar68._12_4_ = 0;
  auVar69 = NEON_ext(auVar68,auVar36,8,1);
  fVar99 = (float)_DAT_03cab640;
  fVar95 = fVar98 * fVar99;
  fVar100 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar96 = fVar96 * fVar100;
  fVar101 = (float)_UNK_03cab648;
  fVar97 = fVar97 * fVar101;
  fVar102 = (float)((ulong)_UNK_03cab648 >> 0x20);
  fVar98 = fVar98 * fVar102;
  auVar69 = NEON_ext(auVar69,auVar69,0xc,1);
  fVar103 = auVar24._0_4_ * fVar99;
  fVar104 = auVar24._4_4_ * fVar100;
  fVar105 = auVar24._8_4_ * fVar101;
  fVar106 = auVar24._12_4_ * fVar102;
  auVar44._4_12_ = auVar43._4_12_;
  auVar46._0_8_ = auVar44._0_8_;
  auVar46._8_4_ = fVar53;
  auVar46._12_4_ = auVar43._8_4_;
  auVar45._8_8_ = auVar46._8_8_;
  auVar45._4_4_ = auVar43._8_4_;
  auVar45._0_4_ = auVar44._0_4_;
  auVar47._0_12_ = auVar45._0_12_;
  auVar47._12_4_ = auVar43._8_4_;
  auVar107 = NEON_ext(auVar47,auVar47,8,1);
  fVar22 = auVar107._0_4_;
  auVar48._4_12_ = auVar47._4_12_;
  auVar48._0_4_ = fVar22;
  fVar19 = auVar107._8_4_;
  auVar50._0_8_ = auVar48._0_8_;
  auVar50._8_4_ = fVar19;
  auVar50._12_4_ = auVar43._8_4_;
  auVar49._8_8_ = auVar50._8_8_;
  auVar49._4_4_ = auVar44._0_4_;
  auVar49._0_4_ = fVar22;
  auVar51._0_12_ = auVar49._0_12_;
  auVar51._12_4_ = fVar53;
  auVar24 = NEON_ext(auVar51,auVar107,8,1);
  auVar52 = NEON_ext(auVar24,auVar24,0xc,1);
  fVar83 = auVar84._0_4_;
  fVar85 = auVar84._4_4_;
  fVar86 = auVar84._8_4_;
  fVar87 = auVar84._12_4_;
  auVar77._0_4_ = (fVar35 * fVar28 + fVar95 * 0.0 + auVar69._0_4_ * fVar103) - fVar83 * fVar20;
  auVar77._4_4_ = (fVar28 * 0.0 + fVar96 * 0.0 + auVar69._4_4_ * fVar104) - fVar85 * auVar36._4_4_;
  auVar77._8_4_ =
       (fVar39 * fVar28 + fVar97 * 0.0 + auVar69._8_4_ * fVar105) - fVar86 * auVar36._8_4_;
  auVar77._12_4_ =
       (fVar28 * 0.0 + fVar35 * fVar98 + auVar69._12_4_ * fVar106) - fVar87 * auVar36._12_4_;
  auVar25._4_4_ = auVar77._8_4_;
  auVar25._0_4_ = auVar77._8_4_;
  auVar25._8_4_ = auVar77._8_4_;
  auVar25._12_4_ = auVar77._8_4_;
  auVar24 = NEON_ext(auVar25,auVar77,0xc,1);
  auVar37._4_4_ = auVar77._4_4_;
  auVar37._0_4_ = auVar77._4_4_;
  auVar37._8_4_ = auVar77._4_4_;
  auVar37._12_4_ = auVar77._4_4_;
  auVar36 = NEON_ext(auVar37,auVar24,0xc,1);
  fVar42 = auVar52._0_4_;
  fVar54 = auVar52._8_4_;
  auVar69 = NEON_ext(auVar91,auVar91,8,1);
  auVar70._0_4_ =
       (auVar44._0_4_ * auVar77._12_4_ + fVar28 * auVar77._0_4_ * fVar99 +
       fVar42 * auVar36._0_4_ * fVar99) - auVar24._0_4_ * fVar22;
  auVar70._4_4_ =
       (fVar53 * auVar77._12_4_ + fVar28 * auVar77._4_4_ * fVar100 +
       auVar52._4_4_ * auVar36._4_4_ * fVar100) - auVar24._4_4_ * auVar107._4_4_;
  auVar70._8_4_ =
       (auVar43._8_4_ * auVar77._12_4_ + fVar28 * auVar77._8_4_ * fVar101 +
       fVar54 * auVar36._8_4_ * fVar101) - auVar24._8_4_ * fVar19;
  auVar70._12_4_ =
       (fVar28 * auVar77._12_4_ + auVar44._0_4_ * auVar77._0_4_ * fVar102 +
       auVar52._12_4_ * auVar36._12_4_ * fVar102) - auVar24._12_4_ * auVar107._12_4_;
  fVar23 = fVar29 + auVar70._0_4_;
  fVar27 = fVar30 + auVar70._8_4_;
  fVar20 = auVar69._0_4_;
  auVar71._4_12_ = auVar70._4_12_;
  auVar71._0_4_ = fVar20;
  auVar73._0_8_ = auVar71._0_8_;
  auVar73._8_4_ = auVar69._8_4_;
  auVar73._12_4_ = auVar70._12_4_;
  auVar72._8_8_ = auVar73._8_8_;
  auVar72._4_4_ = fVar35;
  auVar72._0_4_ = fVar20;
  auVar74._0_12_ = auVar72._0_12_;
  auVar74._12_4_ = 0;
  auVar24 = NEON_ext(auVar74,auVar69,8,1);
  auVar24 = NEON_ext(auVar24,auVar24,0xc,1);
  fVar20 = (fVar35 * fVar28 + fVar95 * 0.0 + auVar24._0_4_ * fVar103) - fVar83 * fVar20;
  fVar93 = (fVar28 * 0.0 + fVar96 * 0.0 + auVar24._4_4_ * fVar104) - fVar85 * auVar69._4_4_;
  fVar94 = (fVar34 * fVar28 + fVar97 * 0.0 + auVar24._8_4_ * fVar105) - fVar86 * auVar69._8_4_;
  fVar35 = (fVar28 * 0.0 + fVar35 * fVar98 + auVar24._12_4_ * fVar106) - fVar87 * auVar69._12_4_;
  auVar38._4_4_ = fVar94;
  auVar38._0_4_ = fVar94;
  auVar38._8_4_ = fVar94;
  auVar38._12_4_ = fVar94;
  auVar36._4_4_ = fVar93;
  auVar36._0_4_ = fVar20;
  auVar36._8_4_ = fVar94;
  auVar36._12_4_ = fVar35;
  auVar24 = NEON_ext(auVar38,auVar36,0xc,1);
  auVar75._4_4_ = fVar93;
  auVar75._0_4_ = fVar93;
  auVar75._8_4_ = fVar93;
  auVar75._12_4_ = fVar93;
  auVar36 = NEON_ext(auVar75,auVar24,0xc,1);
  auVar69._4_4_ = fVar34;
  auVar69._0_4_ = fVar31;
  auVar69._8_4_ = 0;
  auVar69._12_4_ = fVar34;
  auVar84._4_4_ = fVar34;
  auVar84._0_4_ = fVar31;
  auVar84._8_4_ = 0;
  auVar84._12_4_ = fVar34;
  auVar69 = NEON_ext(auVar69,auVar84,8,1);
  auVar78._0_4_ =
       (auVar44._0_4_ * fVar35 + fVar28 * fVar20 * fVar99 + fVar42 * auVar36._0_4_ * fVar99) -
       auVar24._0_4_ * fVar22;
  auVar78._4_4_ =
       (fVar53 * fVar35 + fVar28 * fVar93 * fVar100 + auVar52._4_4_ * auVar36._4_4_ * fVar100) -
       auVar24._4_4_ * auVar107._4_4_;
  auVar78._8_4_ =
       (auVar43._8_4_ * fVar35 + fVar28 * fVar94 * fVar101 + fVar54 * auVar36._8_4_ * fVar101) -
       auVar24._8_4_ * fVar19;
  auVar78._12_4_ =
       (fVar28 * fVar35 + auVar44._0_4_ * fVar20 * fVar102 +
       auVar52._12_4_ * auVar36._12_4_ * fVar102) - auVar24._12_4_ * auVar107._12_4_;
  fVar35 = fVar29 + auVar78._0_4_;
  fVar53 = fVar30 + auVar78._8_4_;
  fVar20 = auVar69._0_4_;
  auVar79._4_12_ = auVar78._4_12_;
  auVar79._0_4_ = fVar20;
  auVar81._0_8_ = auVar79._0_8_;
  auVar81._8_4_ = auVar69._8_4_;
  auVar81._12_4_ = auVar78._12_4_;
  auVar80._8_8_ = auVar81._8_8_;
  auVar80._4_4_ = fVar31;
  auVar80._0_4_ = fVar20;
  auVar82._0_12_ = auVar80._0_12_;
  auVar82._12_4_ = 0;
  auVar24 = NEON_ext(auVar82,auVar69,8,1);
  auVar24 = NEON_ext(auVar24,auVar24,0xc,1);
  fVar20 = (fVar31 * fVar28 + fVar95 * 0.0 + auVar24._0_4_ * fVar103) - fVar83 * fVar20;
  fVar93 = (fVar28 * 0.0 + fVar96 * 0.0 + auVar24._4_4_ * fVar104) - fVar85 * auVar69._4_4_;
  fVar34 = (fVar34 * fVar28 + fVar97 * 0.0 + auVar24._8_4_ * fVar105) - fVar86 * auVar69._8_4_;
  fVar94 = (fVar28 * 0.0 + fVar31 * fVar98 + auVar24._12_4_ * fVar106) - fVar87 * auVar69._12_4_;
  auVar32._4_4_ = fVar34;
  auVar32._0_4_ = fVar34;
  auVar32._8_4_ = fVar34;
  auVar32._12_4_ = fVar34;
  auVar52._4_4_ = fVar93;
  auVar52._0_4_ = fVar20;
  auVar52._8_4_ = fVar34;
  auVar52._12_4_ = fVar94;
  auVar24 = NEON_ext(auVar32,auVar52,0xc,1);
  auVar92._4_4_ = fVar93;
  auVar92._0_4_ = fVar93;
  auVar92._8_4_ = fVar93;
  auVar92._12_4_ = fVar93;
  auVar36 = NEON_ext(auVar92,auVar24,0xc,1);
  auVar33._0_4_ =
       fVar29 + ((auVar44._0_4_ * fVar94 + fVar28 * fVar20 * fVar99 +
                 fVar42 * auVar36._0_4_ * fVar99) - auVar24._0_4_ * fVar22);
  fVar34 = fVar30 + ((auVar43._8_4_ * fVar94 + fVar28 * fVar34 * fVar101 +
                     fVar54 * auVar36._8_4_ * fVar101) - auVar24._8_4_ * fVar19);
  auVar36 = NEON_ext(auVar55,auVar55,8,1);
  fVar20 = auVar36._0_4_;
  auVar56._4_12_ = auVar55._4_12_;
  auVar56._0_4_ = fVar20;
  auVar58._0_8_ = auVar56._0_8_;
  auVar58._8_4_ = auVar36._8_4_;
  auVar58._12_4_ = fVar39;
  auVar57._8_8_ = auVar58._8_8_;
  auVar57._4_4_ = fVar31;
  auVar57._0_4_ = fVar20;
  auVar59._0_12_ = auVar57._0_12_;
  auVar59._12_4_ = 0;
  auVar24 = NEON_ext(auVar59,auVar36,8,1);
  auVar24 = NEON_ext(auVar24,auVar24,0xc,1);
  auVar40._0_4_ = (fVar31 * fVar28 + fVar95 * 0.0 + auVar24._0_4_ * fVar103) - fVar83 * fVar20;
  auVar40._4_4_ = (fVar28 * 0.0 + fVar96 * 0.0 + auVar24._4_4_ * fVar104) - fVar85 * auVar36._4_4_;
  auVar40._8_4_ =
       (fVar39 * fVar28 + fVar97 * 0.0 + auVar24._8_4_ * fVar105) - fVar86 * auVar36._8_4_;
  auVar40._12_4_ =
       (fVar28 * 0.0 + fVar31 * fVar98 + auVar24._12_4_ * fVar106) - fVar87 * auVar36._12_4_;
  auVar60._4_4_ = auVar40._8_4_;
  auVar60._0_4_ = auVar40._8_4_;
  auVar60._8_4_ = auVar40._8_4_;
  auVar60._12_4_ = auVar40._8_4_;
  auVar24 = NEON_ext(auVar60,auVar40,0xc,1);
  auVar76._4_4_ = auVar40._4_4_;
  auVar76._0_4_ = auVar40._4_4_;
  auVar76._8_4_ = auVar40._4_4_;
  auVar76._12_4_ = auVar40._4_4_;
  auVar36 = NEON_ext(auVar76,auVar24,0xc,1);
  fVar29 = fVar29 + ((auVar44._0_4_ * auVar40._12_4_ + fVar28 * auVar40._0_4_ * fVar99 +
                     fVar42 * auVar36._0_4_ * fVar99) - auVar24._0_4_ * fVar22);
  fVar30 = fVar30 + ((auVar43._8_4_ * auVar40._12_4_ + fVar28 * auVar40._8_4_ * fVar101 +
                     fVar54 * auVar36._8_4_ * fVar101) - auVar24._8_4_ * fVar19);
  fVar20 = fVar29;
  if (auVar33._0_4_ <= fVar29) {
    fVar20 = auVar33._0_4_;
  }
  fVar22 = fVar35;
  if (fVar23 <= fVar35) {
    fVar22 = fVar23;
  }
  if (fVar22 <= fVar20) {
    fVar20 = fVar22;
  }
  fVar22 = fVar30;
  if (fVar34 <= fVar30) {
    fVar22 = fVar34;
  }
  fVar19 = fVar53;
  if (fVar27 <= fVar53) {
    fVar19 = fVar27;
  }
  if (fVar19 <= fVar22) {
    fVar22 = fVar19;
  }
  fVar19 = fVar35;
  if (fVar35 <= fVar23) {
    fVar19 = fVar23;
  }
  fVar98 = fVar29;
  if (fVar29 <= auVar33._0_4_) {
    fVar98 = auVar33._0_4_;
  }
  if (fVar98 <= fVar19) {
    fVar98 = fVar19;
  }
  fVar19 = fVar53;
  if (fVar53 <= fVar27) {
    fVar19 = fVar27;
  }
  fVar96 = fVar30;
  if (fVar30 <= fVar34) {
    fVar96 = fVar34;
  }
  if (fVar96 <= fVar19) {
    fVar96 = fVar19;
  }
  iVar8 = (int)(fVar20 / 3.0);
  iVar9 = (int)(fVar22 / 3.0);
  iVar11 = (int)(fVar96 / 3.0);
  iVar8 = iVar8 - (uint)(fVar20 / 3.0 < (float)iVar8);
  iVar9 = iVar9 - (uint)(fVar22 / 3.0 < (float)iVar9);
  iVar10 = (int)(fVar98 / 3.0);
  iVar10 = iVar10 - (uint)(fVar98 / 3.0 < (float)iVar10);
  iVar11 = iVar11 - (uint)(fVar96 / 3.0 < (float)iVar11);
  if (iVar8 <= param_4[2]) {
    iVar8 = param_4[2];
  }
  if (iVar9 <= param_4[3]) {
    iVar9 = param_4[3];
  }
  if (param_4[4] <= iVar10) {
    iVar10 = param_4[4];
  }
  if (param_4[5] <= iVar11) {
    iVar11 = param_4[5];
  }
  if (iVar8 <= iVar10 && iVar9 <= iVar11) {
    auVar21._4_4_ = fVar27;
    auVar21._0_4_ = fVar23;
    auVar21._8_4_ = fVar23;
    auVar21._12_4_ = fVar27;
    auVar26._4_4_ = fVar53;
    auVar26._0_4_ = fVar35;
    auVar26._8_4_ = fVar35;
    auVar26._12_4_ = fVar53;
    auVar24 = NEON_ext(ZEXT816(0),auVar21,8,1);
    auVar36 = NEON_ext(ZEXT816(0),auVar26,8,1);
    auVar24 = NEON_ext(auVar24,auVar24,8,1);
    auVar36 = NEON_ext(auVar36,auVar36,8,1);
    auVar33._4_4_ = fVar34;
    auVar33._8_4_ = auVar33._0_4_;
    auVar33._12_4_ = fVar34;
    auVar41._4_4_ = fVar30;
    auVar41._0_4_ = fVar29;
    auVar41._8_4_ = fVar29;
    auVar41._12_4_ = fVar30;
    auVar69 = NEON_ext(ZEXT816(0),auVar33,8,1);
    auVar69 = NEON_ext(auVar69,auVar69,8,1);
    local_b0 = auVar36._0_4_ - auVar24._0_4_;
    fStack_ac = auVar36._4_4_ - auVar24._4_4_;
    fStack_a8 = auVar36._8_4_ - auVar24._8_4_;
    fStack_a4 = auVar36._12_4_ - auVar24._12_4_;
    uStack_b8 = auVar24._8_8_;
    local_c0 = auVar24._0_8_;
    auVar14._0_4_ = local_b0 * local_b0 + fStack_ac * fStack_ac;
    auVar14._4_4_ = fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4;
    auVar14._8_4_ = local_b0 * local_b0 + fStack_ac * fStack_ac;
    auVar14._12_4_ = fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4;
    auVar84 = NEON_ext(ZEXT816(0),auVar41,8,1);
    auVar52 = NEON_ext(auVar14,auVar14,4,1);
    local_a0 = SQRT(auVar52._0_4_ + auVar52._4_4_);
    bVar4 = false;
    bVar5 = true;
    bVar6 = false;
    if (local_a0 < 1.1920929e-07) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(local_a0)) {
        bVar4 = local_a0 < -1.1920929e-07;
        bVar5 = local_a0 == -1.1920929e-07;
        bVar6 = false;
      }
    }
    if (bVar5 || bVar4 != bVar6) {
      local_b0 = local_b0 / local_a0;
      fStack_ac = fStack_ac / local_a0;
      fStack_a8 = fStack_a8 / local_a0;
      fStack_a4 = fStack_a4 / local_a0;
    }
    local_e0 = auVar69._0_4_ - auVar36._0_4_;
    fStack_dc = auVar69._4_4_ - auVar36._4_4_;
    fStack_d8 = auVar69._8_4_ - auVar36._8_4_;
    fStack_d4 = auVar69._12_4_ - auVar36._12_4_;
    uStack_e8 = auVar36._8_8_;
    local_f0 = auVar36._0_8_;
    auVar15._0_4_ = local_e0 * local_e0 + fStack_dc * fStack_dc;
    auVar15._4_4_ = fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4;
    auVar15._8_4_ = local_e0 * local_e0 + fStack_dc * fStack_dc;
    auVar15._12_4_ = fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4;
    auVar36 = NEON_ext(auVar84,auVar84,8,1);
    auVar84 = NEON_ext(auVar15,auVar15,4,1);
    local_d0 = SQRT(auVar84._0_4_ + auVar84._4_4_);
    if ((1.1920929e-07 <= local_d0) || (local_d0 <= -1.1920929e-07)) {
      local_e0 = local_e0 / local_d0;
      fStack_dc = fStack_dc / local_d0;
      fStack_d8 = fStack_d8 / local_d0;
      fStack_d4 = fStack_d4 / local_d0;
    }
    local_110 = auVar36._0_4_ - auVar69._0_4_;
    fStack_10c = auVar36._4_4_ - auVar69._4_4_;
    fStack_108 = auVar36._8_4_ - auVar69._8_4_;
    fStack_104 = auVar36._12_4_ - auVar69._12_4_;
    uStack_118 = auVar69._8_8_;
    local_120 = auVar69._0_8_;
    auVar16._0_4_ = local_110 * local_110 + fStack_10c * fStack_10c;
    auVar16._4_4_ = fStack_108 * fStack_108 + fStack_104 * fStack_104;
    auVar16._8_4_ = local_110 * local_110 + fStack_10c * fStack_10c;
    auVar16._12_4_ = fStack_108 * fStack_108 + fStack_104 * fStack_104;
    auVar69 = NEON_ext(auVar16,auVar16,4,1);
    local_100 = SQRT(auVar69._0_4_ + auVar69._4_4_);
    if ((1.1920929e-07 <= local_100) || (local_100 <= -1.1920929e-07)) {
      local_110 = local_110 / local_100;
      fStack_10c = fStack_10c / local_100;
      fStack_108 = fStack_108 / local_100;
      fStack_104 = fStack_104 / local_100;
    }
    local_140 = auVar24._0_4_ - auVar36._0_4_;
    fStack_13c = auVar24._4_4_ - auVar36._4_4_;
    fStack_138 = auVar24._8_4_ - auVar36._8_4_;
    fStack_134 = auVar24._12_4_ - auVar36._12_4_;
    uStack_148 = auVar36._8_8_;
    local_150 = auVar36._0_8_;
    auVar17._0_4_ = local_140 * local_140 + fStack_13c * fStack_13c;
    auVar17._4_4_ = fStack_138 * fStack_138 + fStack_134 * fStack_134;
    auVar17._8_4_ = local_140 * local_140 + fStack_13c * fStack_13c;
    auVar17._12_4_ = fStack_138 * fStack_138 + fStack_134 * fStack_134;
    auVar24 = NEON_ext(auVar17,auVar17,4,1);
    local_130 = SQRT(auVar24._0_4_ + auVar24._4_4_);
    if ((1.1920929e-07 <= local_130) || (local_130 <= -1.1920929e-07)) {
      local_140 = local_140 / local_130;
      fStack_13c = fStack_13c / local_130;
      fStack_138 = fStack_138 / local_130;
      fStack_134 = fStack_134 / local_130;
    }
    fVar22 = (float)DAT_03cab620;
    fVar19 = (float)((ulong)DAT_03cab620 >> 0x20);
    auVar18._0_4_ = fVar22 + fVar19;
    fVar23 = (float)DAT_03cab628;
    fVar96 = (float)((ulong)DAT_03cab628 >> 0x20);
    auVar18._4_4_ = fVar23 + fVar96;
    auVar18._8_4_ = fVar22 + fVar19;
    auVar18._12_4_ = fVar23 + fVar96;
    auVar24 = NEON_ext(auVar18,auVar18,4,1);
    fVar97 = SQRT(auVar24._0_4_ + auVar24._4_4_);
    puVar12 = (ulong *)(param_4 + (long)(iVar9 - param_4[1]) * 2 + 6);
    do {
      local_180[0] = (ulong)(uint)((float)iVar9 * 3.0 + 1.5) << 0x20;
      local_180[1] = 0;
      uStack_168 = uVar3;
      local_180[2] = uVar2;
      if (1.1920929e-07 <= fVar97 || fVar97 <= -1.1920929e-07) {
        local_180[2] = CONCAT44(fVar19 / fVar97,fVar22 / fVar97);
        auVar1._8_4_ = fVar23 / fVar97;
        auVar1._0_8_ = local_180[2];
        auVar1._12_4_ = fVar96 / fVar97;
        uStack_168 = auVar1._8_8_;
      }
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_160 = fVar97;
      uVar7 = FUN_01208ce8(&local_c0,local_180,&local_1a0,&local_190,0);
      fVar28 = fVar20;
      fVar27 = fVar98;
      if ((uVar7 & 1) != 0) {
        fVar27 = (float)local_1a0;
        if (fVar98 <= (float)local_1a0) {
          fVar27 = fVar98;
        }
        fVar28 = (float)local_1a0;
        if ((float)local_1a0 <= fVar20) {
          fVar28 = fVar20;
        }
      }
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      uVar7 = FUN_01208ce8(&local_f0,local_180,&local_1a0,&local_190,0);
      fVar29 = fVar28;
      if ((uVar7 & 1) != 0) {
        fVar29 = (float)local_1a0;
        if (fVar27 <= (float)local_1a0) {
          fVar29 = fVar27;
        }
        fVar27 = fVar29;
        fVar29 = (float)local_1a0;
        if ((float)local_1a0 <= fVar28) {
          fVar29 = fVar28;
        }
      }
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      uVar7 = FUN_01208ce8(&local_120,local_180,&local_1a0,&local_190,0);
      fVar28 = fVar29;
      if ((uVar7 & 1) != 0) {
        fVar28 = (float)local_1a0;
        if (fVar27 <= (float)local_1a0) {
          fVar28 = fVar27;
        }
        fVar27 = fVar28;
        fVar28 = (float)local_1a0;
        if ((float)local_1a0 <= fVar29) {
          fVar28 = fVar29;
        }
      }
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      uVar7 = FUN_01208ce8(&local_150,local_180,&local_1a0,&local_190,0);
      if ((uVar7 & 1) != 0) {
        fVar29 = (float)local_1a0;
        if (fVar27 <= (float)local_1a0) {
          fVar29 = fVar27;
        }
        fVar27 = fVar29;
        if ((float)local_1a0 <= fVar28) {
          local_1a0._0_4_ = fVar28;
        }
        fVar28 = (float)local_1a0;
      }
      if (fVar27 < fVar28) {
        iVar8 = (int)(fVar27 / 3.0);
        iVar10 = (int)(fVar28 / 3.0);
        uVar13 = (iVar8 - *param_4) - (uint)(fVar27 / 3.0 < (float)iVar8);
        uVar7 = ((uint)(fVar28 / 3.0 < (float)iVar10) - iVar10) + *param_4 + 0x3f;
        if (0x3e < (int)uVar13) {
          uVar13 = 0x3f;
        }
        if (0x3e < (int)uVar7) {
          uVar7 = 0x3f;
        }
        *puVar12 = *puVar12 &
                   (-1L << ((ulong)(uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)) & 0x3f) &
                    0xffffffffffffffffU >>
                    ((ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) & 0x3f) ^
                   0xffffffffffffffff);
      }
      puVar12 = puVar12 + 1;
      bVar4 = iVar9 < iVar11;
      iVar9 = iVar9 + 1;
    } while (bVar4);
  }
  return;
}


