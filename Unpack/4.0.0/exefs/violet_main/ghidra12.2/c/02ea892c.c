/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ea892c; name: FUN_02ea892c
 */


void FUN_02ea892c(long param_1,long *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined1 (*pauVar2) [12];
  ulong uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  uint uVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar46;
  float fVar47;
  float fVar50;
  int iVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar58;
  undefined8 uVar56;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar57 [16];
  float fVar63;
  undefined8 uVar64;
  ulong uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar71;
  float fVar72;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  float fVar74;
  float fVar76;
  undefined1 auVar75 [16];
  float fVar77;
  float fVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar79 [16];
  undefined8 unaff_d8;
  undefined8 uVar84;
  undefined8 uVar85;
  float fVar86;
  float unaff_s14;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar90 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined4 uVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  int iVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar113;
  int iVar114;
  undefined8 uVar112;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined8 uVar118;
  ulong uVar119;
  float fVar123;
  undefined1 auVar120 [16];
  float fVar122;
  undefined1 auVar121 [16];
  float fVar124;
  float fVar125;
  float fVar128;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined8 uVar129;
  undefined1 auVar130 [16];
  float fVar131;
  undefined8 uVar132;
  undefined1 auVar133 [16];
  undefined8 local_180;
  undefined8 uStack_178;
  float local_170;
  float fStack_16c;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_b8;
  long local_b0 [2];
  
  fVar23 = *(float *)(param_2 + 0x25);
  fVar24 = *(float *)((long)param_2 + 300);
  auVar29 = *(undefined1 (*) [16])(param_2 + 10);
  auVar28 = *(undefined1 (*) [16])(param_1 + 0x170);
  auVar57 = NEON_ext(auVar28,auVar28,8,1);
  uVar55 = NEON_ext(auVar28._0_8_,auVar57._0_8_,4,1);
  fVar25 = auVar29._0_4_;
  fVar32 = auVar28._0_4_;
  fVar26 = auVar29._4_4_;
  fVar34 = auVar28._4_4_;
  fVar27 = auVar29._8_4_;
  fVar35 = auVar28._8_4_;
  fVar33 = auVar29._12_4_;
  auVar57 = NEON_ext(auVar29,auVar29,8,1);
  fVar71 = auVar57._4_4_ * auVar57._4_4_;
  uVar64 = NEON_ext(auVar29._0_8_,auVar57._0_8_,4,1);
  auVar29._0_4_ = fVar25 * (float)uVar55 - fVar32 * (float)uVar64;
  auVar29._4_4_ = fVar26 * (float)((ulong)uVar55 >> 0x20) - fVar34 * (float)((ulong)uVar64 >> 0x20);
  auVar29._8_4_ = fVar27 * fVar32 - fVar35 * fVar25;
  auVar29._12_4_ = fVar33 * fVar34 - auVar28._12_4_ * fVar26;
  fVar46 = fVar25 * fVar32 + fVar26 * fVar34 + fVar27 * fVar35;
  fVar50 = fVar25 * fVar32 + fVar26 * fVar34 + fVar27 * fVar35;
  fVar68 = fVar71 + SUB164(ZEXT816(0xbf000000bf000000),0);
  fVar71 = fVar71 + SUB164(ZEXT816(0xbf000000bf000000),4);
  auVar57 = NEON_ext(auVar29,auVar29,4,1);
  fVar52 = *(float *)(param_2 + 0x22);
  uVar55 = CONCAT44(fVar52,fVar52);
  fVar96 = *(float *)(*param_2 + 0x20);
  fVar73 = *(float *)(param_2[1] + 0x20);
  uVar84 = CONCAT44((int)param_2[0x23],(int)param_2[0x23]);
  fVar47 = fVar96 + fVar73;
  fVar25 = fVar32 * fVar68 + fVar25 * fVar46 + auVar57._0_4_ * fVar33;
  fVar32 = fVar34 * fVar71 + fVar26 * fVar50 + auVar57._4_4_ * fVar33;
  fVar34 = fVar35 * fVar68 + fVar27 * fVar46 + auVar29._0_4_ * fVar33;
  fVar35 = auVar28._12_4_ * fVar71 + fVar33 * fVar50 + fVar33 * 0.0;
  uVar85 = CONCAT44(*(undefined4 *)((long)param_2 + 0x11c),*(undefined4 *)((long)param_2 + 0x11c));
  auVar29 = *(undefined1 (*) [16])(param_2 + 0x1e);
  uVar64 = *(undefined8 *)(param_1 + 0x160);
  fVar26 = *(float *)(param_2 + 2);
  fVar27 = auVar29._0_4_ * fVar26;
  fVar33 = auVar29._4_4_ * fVar26;
  auVar28._0_8_ = CONCAT44(fVar33,fVar27);
  auVar28._8_4_ = auVar29._8_4_ * fVar26;
  auVar28._12_4_ = auVar29._12_4_ * fVar26;
  cVar4 = *(char *)((long)param_2 + 0x131);
  uVar13 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(*param_2 + 0x18) * 0x200 + 0x58
                       ))();
  lVar16 = tpidr_el0;
  lVar15 = *(long *)(lVar16 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar15;
  }
  auVar57._8_8_ = auVar28._8_8_;
  auVar57._0_8_ = auVar28._0_8_;
  uVar3 = (-(ulong)(uVar13 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar13 << 1) + (long)(int)uVar13;
  lVar16 = *(long *)(*(long *)(lVar15 + 0x3d0) + 0x10);
  lVar15 = uVar3 * 4;
  uVar18 = (uint)uVar3;
  uVar20 = lVar15 + 0x3fU & 0xffffffffffffffc0;
  if (*(long *)(lVar16 + 8) != 0) {
    lVar16 = 0;
  }
  bVar12 = cVar4 != '\x01';
  uVar36 = NEON_fmov(0xbf800000,4);
  *param_4 = 0;
  auVar66._0_4_ = fVar25 + fVar25;
  auVar66._4_4_ = fVar32 + fVar32;
  auVar66._8_4_ = fVar34 + fVar34;
  auVar66._12_4_ = fVar35 + fVar35;
  auVar29 = NEON_ext(auVar57,auVar57,4,1);
  puVar22 = (ulong *)0x0;
  uVar132 = 0;
  fVar25 = (float)uVar64 - fVar47;
  fVar26 = (float)((ulong)uVar64 >> 0x20) - fVar47;
LAB_02ea8b64:
  do {
    fVar34 = fVar26;
    fVar32 = fVar25;
    uVar64 = uVar132;
    fVar54 = auVar66._0_4_;
    fVar46 = auVar66._4_4_;
    fVar26 = fVar46 * *(float *)((long)param_2 + 0xe4);
    fVar35 = auVar66._8_4_ * *(float *)(param_2 + 0x1d);
    auVar57 = NEON_ext(auVar66,auVar66,4,1);
    fVar25 = fVar54 * *(float *)(param_2 + 0x1c) + fVar26 + fVar35;
    local_170 = auVar29._0_4_;
    fStack_16c = auVar29._4_4_;
    auVar120._0_4_ = fVar27 * auVar57._0_4_ - local_170 * fVar54;
    auVar120._4_4_ = fVar33 * auVar57._4_4_ - fStack_16c * fVar46;
    auVar120._8_4_ = auVar28._8_4_ * fVar54 - fVar27 * auVar66._8_4_;
    auVar120._12_4_ = auVar28._12_4_ * fVar46 - fVar33 * auVar66._12_4_;
    auVar57 = NEON_ext(auVar120,auVar120,4,1);
    fVar50 = auVar57._0_4_ * auVar57._0_4_;
    fVar68 = auVar57._4_4_ * auVar57._4_4_;
    fVar46 = SQRT(fVar50 + fVar68 + auVar120._0_4_ * auVar120._0_4_);
    fVar53 = fVar52 - (float)uVar64;
    fVar71 = (float)((ulong)uVar64 >> 0x20);
    fVar58 = fVar52 - fVar71;
    fVar87 = fVar53 * (fVar46 - fVar25);
    fVar45 = (float)uVar84;
    if (!(bool)(~(fVar87 <= fVar32 - fVar45) & 1)) break;
    fVar72 = (float)((ulong)uVar85 >> 0x20);
    uVar56 = NEON_fmax(CONCAT44((fVar58 * (fVar34 - fVar72)) /
                                (fVar58 * (SQRT(fVar50 + fVar68 + auVar120._0_4_ * auVar120._0_4_) -
                                          (fVar54 * *(float *)(param_2 + 0x1c) + fVar26 + fVar35))),
                                (fVar53 * (fVar32 - (float)uVar85)) / fVar87),
                       CONCAT44(fVar24,fVar24),4);
    uVar132 = NEON_fmin(CONCAT44((float)((ulong)uVar56 >> 0x20) + fVar71,
                                 (float)uVar56 + (float)uVar64),uVar55,4);
    fVar76 = (float)uVar132;
    fVar71 = fVar76 * *(float *)((long)param_2 + 0x114);
    fVar53 = (float)((ulong)uVar132 >> 0x20) * *(float *)((long)param_2 + 0x114);
    fVar58 = fVar71 + fVar71;
    fVar59 = fVar53 + fVar53;
    fVar26 = *(float *)(param_2 + 0xe);
    fVar35 = *(float *)((long)param_2 + 0x74);
    fVar50 = *(float *)(param_2 + 0xf);
    fVar68 = *(float *)((long)param_2 + 0x7c);
    fVar99 = (float)uVar36;
    fVar111 = (float)((ulong)uVar36 >> 0x20);
    fVar54 = fVar26 + (*(float *)(param_2 + 0xc) - fVar26) * (fVar58 + fVar99);
    fVar60 = fVar35 + (*(float *)((long)param_2 + 100) - fVar35) * (fVar59 + fVar111);
    fVar62 = fVar50 + (*(float *)(param_2 + 0xd) - fVar50) * (fVar58 + fVar99);
    fVar63 = fVar68 + (*(float *)((long)param_2 + 0x6c) - fVar68) * (fVar59 + fVar111);
    uVar65 = CONCAT44(-(uint)(fVar53 < 0.5),-(uint)(fVar71 < 0.5)) & 0x100000001;
    iVar108 = (int)uVar65;
    iVar114 = (int)(uVar65 >> 0x20);
    fVar54 = (float)((uint)fVar54 ^
                    ((uint)fVar54 ^
                    (uint)(*(float *)(param_2 + 10) + (fVar26 - *(float *)(param_2 + 10)) * fVar58))
                    & (iVar108 << 0x1f) >> 0x1f);
    fVar60 = (float)((uint)fVar60 ^
                    ((uint)fVar60 ^
                    (uint)(*(float *)((long)param_2 + 0x54) +
                          (fVar35 - *(float *)((long)param_2 + 0x54)) * fVar59)) &
                    (iVar114 << 0x1f) >> 0x1f);
    fVar62 = (float)((uint)fVar62 ^
                    ((uint)fVar62 ^
                    (uint)(*(float *)(param_2 + 0xb) + (fVar50 - *(float *)(param_2 + 0xb)) * fVar58
                          )) & (iVar108 << 0x1f) >> 0x1f);
    fVar63 = (float)((uint)fVar63 ^
                    ((uint)fVar63 ^
                    (uint)(*(float *)((long)param_2 + 0x5c) +
                          (fVar68 - *(float *)((long)param_2 + 0x5c)) * fVar59)) &
                    (iVar114 << 0x1f) >> 0x1f);
    auVar126._0_4_ = fVar54 * fVar54;
    auVar126._4_4_ = fVar60 * fVar60;
    auVar126._8_4_ = fVar62 * fVar62;
    auVar126._12_4_ = fVar63 * fVar63;
    auVar57 = NEON_ext(auVar126,auVar126,8,1);
    fVar35 = auVar57._0_4_ + auVar57._4_4_;
    fVar26 = auVar126._0_4_ + auVar126._4_4_ + fVar35;
    auVar70 = ZEXT816(0);
    if (fVar26 != 0.0) {
      fVar26 = SQRT(fVar26);
      fVar35 = SQRT(auVar126._0_4_ + auVar126._4_4_ + fVar35);
      auVar70._0_4_ = fVar54 / fVar26;
      auVar70._4_4_ = fVar60 / fVar35;
      auVar70._8_4_ = fVar62 / fVar26;
      auVar70._12_4_ = fVar63 / fVar35;
    }
    auVar57 = *(undefined1 (*) [16])(param_2 + 8);
    auVar120 = NEON_ext(auVar57,auVar57,8,1);
    auVar126 = NEON_ext(auVar70,auVar70,8,1);
    auVar66 = NEON_ext(auVar70,auVar70,4,1);
    fVar26 = auVar70._0_4_;
    fVar93 = auVar57._0_4_;
    fVar54 = auVar70._4_4_;
    fVar110 = auVar57._4_4_;
    fVar68 = auVar70._8_4_;
    fVar94 = auVar57._8_4_;
    fVar58 = auVar70._12_4_;
    fVar128 = auVar126._4_4_ * auVar126._4_4_;
    fVar62 = fVar54 + fVar54;
    fVar50 = fVar68 + fVar68;
    uVar118 = NEON_ext(auVar57._0_8_,auVar120._0_8_,4,1);
    fVar101 = (fVar26 + fVar26) * fVar26;
    fVar124 = fVar128 + -0.5;
    fVar128 = fVar128 + -0.5;
    fVar97 = fVar26 * fVar93 + fVar54 * fVar110 + fVar68 * fVar94;
    fVar100 = fVar26 * fVar93 + fVar54 * fVar110 + fVar68 * fVar94;
    fVar60 = (fVar26 + fVar26) * fVar58;
    fVar35 = 1.0 - fVar68 * fVar50;
    auVar67._0_4_ = fVar26 * (float)uVar118 - auVar66._0_4_ * fVar93;
    auVar67._4_4_ = fVar54 * (float)((ulong)uVar118 >> 0x20) - auVar66._4_4_ * fVar110;
    auVar67._8_4_ = fVar68 * fVar93 - fVar26 * fVar94;
    auVar67._12_4_ = fVar58 * fVar110 - fVar54 * auVar57._12_4_;
    auVar66 = NEON_ext(auVar67,auVar67,4,1);
    fVar86 = fVar62 * fVar26 + fVar50 * fVar58;
    fVar63 = fVar50 * fVar54 - fVar60;
    fVar60 = fVar50 * fVar54 + fVar60;
    fVar125 = fVar50 * fVar26 - fVar62 * fVar58;
    fVar88 = fVar35 - fVar62 * fVar54;
    fVar59 = fVar50 * fVar26 + fVar62 * fVar58;
    auVar133._12_4_ = fVar63;
    auVar133._8_4_ = fVar125;
    auVar133._4_4_ = fVar86;
    auVar133._0_4_ = fVar88;
    fVar98 = fVar62 * fVar26 - fVar50 * fVar58;
    fVar26 = fVar93 * fVar124 + fVar26 * fVar97 + auVar66._0_4_ * fVar58;
    fVar50 = fVar110 * fVar128 + fVar54 * fVar100 + auVar66._4_4_ * fVar58;
    fVar68 = fVar94 * fVar124 + fVar68 * fVar97 + auVar67._0_4_ * fVar58;
    fVar58 = auVar57._12_4_ * fVar128 + fVar58 * fVar100 + fVar58 * 0.0;
    fVar35 = fVar35 - fVar101;
    auVar130._4_4_ = fVar35;
    auVar130._0_4_ = fVar98;
    local_110 = (*(float *)(param_2 + 4) +
                fVar71 * (*(float *)(param_2 + 6) - *(float *)(param_2 + 4))) - (fVar26 + fVar26);
    fStack_10c = (*(float *)((long)param_2 + 0x24) +
                 fVar53 * (*(float *)((long)param_2 + 0x34) - *(float *)((long)param_2 + 0x24))) -
                 (fVar50 + fVar50);
    fStack_108 = (*(float *)(param_2 + 5) +
                 fVar71 * (*(float *)(param_2 + 7) - *(float *)(param_2 + 5))) - (fVar68 + fVar68);
    fStack_104 = (*(float *)((long)param_2 + 0x2c) +
                 fVar53 * (*(float *)((long)param_2 + 0x3c) - *(float *)((long)param_2 + 0x2c))) -
                 (fVar58 + fVar58);
    fVar26 = (1.0 - fVar101) - fVar62 * fVar54;
    auVar130._8_4_ = fVar60;
    auVar130._12_4_ = fVar59;
    if (bVar12) {
      bVar12 = true;
      if ((-fVar25 < fVar46) && (fVar76 < fVar52)) {
        fVar50 = (float)uStack_178;
        fVar68 = (float)((ulong)uStack_178 >> 0x20);
        fVar25 = (float)local_180;
        fVar46 = (float)((ulong)local_180 >> 0x20);
        if (puVar22 == (ulong *)0x0) {
          local_b0[0] = lVar15;
          if (lVar16 == 0) {
            puVar22 = (ulong *)(**(code **)PTR_DAT_047d1a08)(1,local_b0,0x40);
LAB_02ea8e80:
          }
          else {
            local_c0 = uVar20;
            if (*(ulong *)(lVar16 + 0x28) < uVar20) {
LAB_02ea8e4c:
              puVar22 = (ulong *)FUN_031cf3b4(lVar16,&local_c0);
              goto LAB_02ea8e80;
            }
            puVar22 = *(ulong **)(lVar16 + 0x38);
            if (*(ulong *)(lVar16 + 0x40) < uVar20 + (long)puVar22) goto LAB_02ea8e4c;
            *(ulong *)(lVar16 + 0x38) = uVar20 + (long)puVar22;
          }
          puVar14 = (ulong *)(**(code **)(*(long *)PTR_DAT_047d19f0 +
                                          (ulong)*(byte *)(*param_2 + 0x18) * 0x200 + 0x60))
                                       (*param_2,puVar22,(ulong)uVar13,&local_c0);
          if ((0 < (int)uVar18) && (puVar14 != puVar22)) {
            if (uVar18 - 1 < 7) {
              puVar17 = puVar22;
            }
            else {
              puVar21 = puVar22;
              iVar108 = -(uVar18 & 0xfffffff8);
              do {
                *(int *)puVar21 = (int)*puVar14;
                *(undefined4 *)((long)puVar21 + 4) = *(undefined4 *)((long)puVar14 + 4);
                *(int *)(puVar21 + 1) = (int)puVar14[1];
                *(undefined4 *)((long)puVar21 + 0xc) = *(undefined4 *)((long)puVar14 + 0xc);
                *(int *)(puVar21 + 2) = (int)puVar14[2];
                *(undefined4 *)((long)puVar21 + 0x14) = *(undefined4 *)((long)puVar14 + 0x14);
                *(int *)(puVar21 + 3) = (int)puVar14[3];
                puVar1 = (undefined4 *)((long)puVar14 + 0x1c);
                puVar14 = puVar14 + 4;
                puVar17 = puVar21 + 4;
                iVar108 = iVar108 + 8;
                *(undefined4 *)((long)puVar21 + 0x1c) = *puVar1;
                puVar21 = puVar17;
              } while (iVar108 != 0);
            }
            if ((uVar3 & 7) != 0) {
              uVar19 = uVar18 & 7;
              do {
                uVar19 = uVar19 - 1;
                *(int *)puVar17 = (int)*puVar14;
                puVar14 = (ulong *)((long)puVar14 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              } while (uVar19 != 0);
            }
          }
          fVar71 = *(float *)(param_2 + 0x1e);
          fVar53 = *(float *)((long)param_2 + 0xf4);
          fVar58 = *(float *)(param_2 + 0x1f);
          fVar25 = (float)local_c0 + *(float *)(param_2[1] + 0x20);
          unaff_d8 = CONCAT44(fVar25,fVar25);
          fVar25 = fVar125 * fVar58 + fVar88 * fVar71 + fVar86 * fVar53;
          fVar46 = fVar60 * fVar58 + fVar98 * fVar71 + fVar35 * fVar53;
          fVar50 = fVar26 * fVar58 + fVar59 * fVar71 + fVar63 * fVar53;
          fVar68 = fVar58 * 0.0 + fVar63 * fVar71 + fVar53 * 0.0;
          unaff_s14 = fVar71 * fVar71 + fVar53 * fVar53 + fVar58 * fVar58;
        }
        puVar14 = (ulong *)((long)puVar22 + (long)(int)uVar13 * 0xc + -0xc);
        if (puVar22 <= puVar14) {
          fVar58 = (float)*(undefined8 *)(param_1 + 0x160) - fVar73;
          fVar35 = *(float *)(param_1 + 0x170);
          fVar71 = *(float *)(param_1 + 0x174);
          fVar53 = *(float *)(param_1 + 0x178);
          fVar101 = *(float *)(param_1 + 0x180) - fVar35 * fVar58;
          fVar124 = *(float *)(param_1 + 0x184) -
                    fVar71 * ((float)((ulong)*(undefined8 *)(param_1 + 0x160) >> 0x20) - fVar73);
          fVar125 = *(float *)(param_1 + 0x188) - fVar53 * fVar58;
          fVar58 = *(float *)(param_1 + 0x110);
          fVar54 = *(float *)(param_1 + 0x114);
          fVar60 = *(float *)(param_1 + 0x118);
          fVar62 = *(float *)(param_1 + 0x120);
          fVar86 = *(float *)(param_1 + 0x124);
          fVar93 = *(float *)(param_1 + 0x128);
          fVar88 = *(float *)(param_1 + 0x130);
          fVar110 = *(float *)(param_1 + 0x134);
          fVar94 = *(float *)(param_1 + 0x138);
          fVar97 = *(float *)(param_1 + 0x140);
          fVar98 = *(float *)(param_1 + 0x144);
          fVar100 = *(float *)(param_1 + 0x148);
          auVar10._4_4_ = fVar46;
          auVar10._0_4_ = fVar25;
          auVar10._8_4_ = fVar50;
          auVar10._12_4_ = fVar68;
          auVar11._4_4_ = fVar46;
          auVar11._0_4_ = fVar25;
          auVar11._8_4_ = fVar50;
          auVar11._12_4_ = fVar68;
          auVar57 = NEON_ext(auVar10,auVar11,4,1);
          fVar128 = fVar88 * fVar53 + fVar58 * fVar35 + fVar62 * fVar71;
          fVar61 = fVar110 * fVar53 + fVar54 * fVar35 + fVar86 * fVar71;
          fVar35 = fVar94 * fVar53 + fVar60 * fVar35 + fVar93 * fVar71;
          do {
            fVar53 = fVar52 - (float)uVar132;
            fVar71 = (float)((ulong)uVar132 >> 0x20);
            uVar118 = CONCAT44(fVar52 - fVar71,fVar53);
            if (puVar22 <= puVar14) {
              auVar66 = NEON_ext(auVar133,auVar133,8,1);
              auVar120 = NEON_ext(auVar130,auVar130,8,1);
              auVar7._4_4_ = fVar63;
              auVar7._0_4_ = fVar59;
              auVar7._8_4_ = fVar26;
              auVar7._12_4_ = 0;
              auVar8._4_4_ = fVar63;
              auVar8._0_4_ = fVar59;
              auVar8._8_4_ = fVar26;
              auVar8._12_4_ = 0;
              auVar126 = NEON_ext(auVar7,auVar8,8,1);
              fVar80 = auVar66._0_4_;
              fVar83 = auVar120._0_4_;
              fVar81 = auVar133._0_4_;
              fVar92 = auVar130._0_4_;
              fVar74 = *(float *)(param_2 + 0x1c);
              fVar77 = *(float *)((long)param_2 + 0xe4);
              fVar78 = *(float *)(param_2 + 0x1d);
              fVar82 = auVar133._4_4_;
              fVar95 = auVar130._4_4_;
              fVar131 = (fVar97 + fVar88 * fVar125 + fVar58 * fVar101 + fVar62 * fVar124) -
                        local_110;
              fVar113 = (fVar98 + fVar110 * fVar125 + fVar54 * fVar101 + fVar86 * fVar124) -
                        fStack_10c;
              fVar116 = (fVar100 + fVar94 * fVar125 + fVar60 * fVar101 + fVar93 * fVar124) -
                        fStack_108;
              fVar115 = auVar126._0_4_;
              fVar89 = fVar35 * fVar80 + fVar128 * fVar81 + fVar61 * fVar82;
              fVar91 = fVar35 * fVar83 + fVar128 * fVar92 + fVar61 * fVar95;
              fVar109 = fVar35 * fVar115 + fVar128 * fVar59 + fVar61 * fVar63;
              puVar17 = puVar14;
              puVar21 = puVar22;
              do {
                fVar117 = *(float *)(puVar21 + 1);
                fVar123 = (float)*puVar21;
                fVar122 = (float)(*puVar21 >> 0x20);
                fVar102 = fVar89 * (fVar123 -
                                   (fVar80 * fVar116 + fVar81 * fVar131 + fVar82 * fVar113));
                fVar105 = fVar91 * (fVar122 -
                                   (fVar83 * fVar116 + fVar92 * fVar131 + fVar95 * fVar113));
                fVar106 = fVar109 * (fVar117 -
                                    (fVar115 * fVar116 + fVar59 * fVar131 + fVar63 * fVar113));
                fVar107 = (fVar102 + fVar105 + fVar106) - (float)unaff_d8;
                fVar103 = fVar107 - (float)uVar85;
                fVar102 = ((fVar102 + fVar105 + fVar106) - (float)((ulong)unaff_d8 >> 0x20)) -
                          fVar72;
                if ((bool)(~(fVar87 < fVar103) & 1)) {
                  auVar127._0_4_ = fVar123 - *(float *)(param_2 + 8);
                  auVar127._4_4_ = fVar122 - *(float *)((long)param_2 + 0x44);
                  auVar127._8_4_ = fVar117 - *(float *)(param_2 + 9);
                  auVar127._12_4_ = fVar117 - *(float *)((long)param_2 + 0x4c);
                  auVar66 = NEON_ext(auVar127,auVar127,4,1);
                  auVar121._0_4_ = fVar25 * auVar66._0_4_ - auVar57._0_4_ * auVar127._0_4_;
                  auVar121._4_4_ = fVar46 * auVar66._4_4_ - auVar57._4_4_ * auVar127._4_4_;
                  auVar121._8_4_ = fVar50 * auVar127._0_4_ - fVar25 * auVar127._8_4_;
                  auVar121._12_4_ = fVar68 * auVar127._4_4_ - fVar46 * auVar127._12_4_;
                  auVar66 = NEON_ext(auVar121,auVar121,4,1);
                  fVar117 = fVar89 * (fVar80 * fVar78 + fVar81 * fVar74 + fVar82 * fVar77 +
                                     auVar66._0_4_);
                  fVar106 = fVar91 * (fVar83 * fVar78 + fVar92 * fVar74 + fVar95 * fVar77 +
                                     auVar66._4_4_);
                  fVar123 = fVar109 * (fVar115 * fVar78 + fVar59 * fVar74 + fVar63 * fVar77 +
                                      auVar121._0_4_);
                  fVar105 = fVar117 + fVar106 + fVar123;
                  fVar123 = fVar117 + fVar106 + fVar123;
                  fVar117 = unaff_s14 *
                            SQRT(auVar127._0_4_ * auVar127._0_4_ + auVar127._4_4_ * auVar127._4_4_ +
                                 auVar127._8_4_ * auVar127._8_4_);
                  if (fVar53 * 0.5 * fVar53 * fVar117 < fVar103 + fVar53 * fVar105)
                  goto LAB_02ea9240;
                  if (!(bool)(~(fVar107 < fVar45) & 1)) goto LAB_02ea9430;
                  uVar129 = NEON_fmov(0x40800000,4);
                  puVar21 = (ulong *)((long)puVar21 + 0xc);
                  fVar117 = SQRT(fVar103 * fVar117 * (float)uVar129 + fVar105 * fVar105);
                  iVar108 = -(uint)(fVar117 - fVar105 == 0.0);
                  iVar114 = -(uint)(-fVar117 - fVar123 == 0.0);
                  uVar65 = CONCAT44((fVar102 + fVar102) / (-fVar117 - fVar123),
                                    (fVar103 + fVar103) / (fVar117 - fVar105)) &
                           CONCAT17(~(byte)((uint)iVar114 >> 0x18),
                                    CONCAT16(~(byte)((uint)iVar114 >> 0x10),
                                             CONCAT15(~(byte)((uint)iVar114 >> 8),
                                                      CONCAT14(~(byte)iVar114,
                                                               CONCAT13(~(byte)((uint)iVar108 >>
                                                                               0x18),
                                                                        CONCAT12(~(byte)((uint)
                                                  iVar108 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar108 >> 8),
                                                           ~(byte)iVar108)))))));
                  uVar104 = (undefined4)uVar65;
                  uVar112 = CONCAT44(uVar104,uVar104);
                  uVar104 = (undefined4)(uVar65 >> 0x20);
                  uVar129 = CONCAT44(uVar104,uVar104);
                  uVar119 = NEON_fmax(uVar112,uVar129,4);
                  uVar65 = NEON_fmin(uVar112,uVar129,4);
                  uVar118 = NEON_fmin(uVar118,uVar65 ^ (uVar65 ^ uVar119) &
                                                       ~CONCAT44(-(uint)(0.0 < (float)(uVar65 >>
                                                                                      0x20)),
                                                                 -(uint)(0.0 < (float)uVar65)),4);
                  puVar14 = puVar17;
                }
                else {
LAB_02ea9240:
                  local_c0 = *puVar21;
                  local_b8 = (undefined4)puVar21[1];
                  uVar65 = *puVar17;
                  *(int *)(puVar21 + 1) = (int)puVar17[1];
                  *puVar21 = uVar65;
                  *(undefined4 *)(puVar17 + 1) = local_b8;
                  puVar14 = (ulong *)((long)puVar17 + -0xc);
                  *puVar17 = local_c0;
                }
                puVar17 = puVar14;
              } while (puVar21 <= puVar14);
            }
            fVar74 = (float)uVar118 + (float)uVar132;
            fVar71 = (float)((ulong)uVar118 >> 0x20) + fVar71;
            uVar132 = CONCAT44(fVar71,fVar74);
            fVar74 = fVar74 * *(float *)((long)param_2 + 0x114);
            fVar71 = fVar71 * *(float *)((long)param_2 + 0x114);
            fVar26 = *(float *)(param_2 + 0xe);
            fVar53 = *(float *)((long)param_2 + 0x74);
            fVar59 = *(float *)(param_2 + 0xf);
            fVar63 = *(float *)((long)param_2 + 0x7c);
            fVar77 = fVar74 + fVar74;
            fVar80 = fVar71 + fVar71;
            fVar78 = fVar26 + (*(float *)(param_2 + 0xc) - fVar26) * (fVar77 + fVar99);
            fVar81 = fVar53 + (*(float *)((long)param_2 + 100) - fVar53) * (fVar80 + fVar111);
            fVar82 = fVar59 + (*(float *)(param_2 + 0xd) - fVar59) * (fVar77 + fVar99);
            fVar83 = fVar63 + (*(float *)((long)param_2 + 0x6c) - fVar63) * (fVar80 + fVar111);
            uVar65 = CONCAT44(-(uint)(fVar71 < 0.5),-(uint)(fVar74 < 0.5)) & 0x100000001;
            iVar108 = (int)uVar65;
            iVar114 = (int)(uVar65 >> 0x20);
            fVar78 = (float)((uint)fVar78 ^
                            ((uint)fVar78 ^
                            (uint)(*(float *)(param_2 + 10) +
                                  (fVar26 - *(float *)(param_2 + 10)) * fVar77)) &
                            (iVar108 << 0x1f) >> 0x1f);
            fVar81 = (float)((uint)fVar81 ^
                            ((uint)fVar81 ^
                            (uint)(*(float *)((long)param_2 + 0x54) +
                                  (fVar53 - *(float *)((long)param_2 + 0x54)) * fVar80)) &
                            (iVar114 << 0x1f) >> 0x1f);
            fVar82 = (float)((uint)fVar82 ^
                            ((uint)fVar82 ^
                            (uint)(*(float *)(param_2 + 0xb) +
                                  (fVar59 - *(float *)(param_2 + 0xb)) * fVar77)) &
                            (iVar108 << 0x1f) >> 0x1f);
            fVar83 = (float)((uint)fVar83 ^
                            ((uint)fVar83 ^
                            (uint)(*(float *)((long)param_2 + 0x5c) +
                                  (fVar63 - *(float *)((long)param_2 + 0x5c)) * fVar80)) &
                            (iVar114 << 0x1f) >> 0x1f);
            auVar90._0_4_ = fVar78 * fVar78;
            auVar90._4_4_ = fVar81 * fVar81;
            auVar90._8_4_ = fVar82 * fVar82;
            auVar90._12_4_ = fVar83 * fVar83;
            auVar66 = NEON_ext(auVar90,auVar90,8,1);
            fVar53 = auVar66._0_4_ + auVar66._4_4_;
            fVar26 = auVar90._0_4_ + auVar90._4_4_ + fVar53;
            auVar75 = ZEXT816(0);
            if (fVar26 != 0.0) {
              fVar26 = SQRT(fVar26);
              fVar53 = SQRT(auVar90._0_4_ + auVar90._4_4_ + fVar53);
              auVar75._0_4_ = fVar78 / fVar26;
              auVar75._4_4_ = fVar81 / fVar53;
              auVar75._8_4_ = fVar82 / fVar26;
              auVar75._12_4_ = fVar83 / fVar53;
            }
            auVar66 = NEON_ext(auVar75,auVar75,8,1);
            pauVar2 = (undefined1 (*) [12])(param_2 + 8);
            fVar89 = (float)param_2[9];
            fVar91 = (float)((ulong)param_2[9] >> 0x20);
            lVar9 = *(long *)*pauVar2;
            fVar53 = (float)lVar9;
            fVar78 = (float)((ulong)lVar9 >> 0x20);
            fVar26 = auVar75._0_4_;
            fVar77 = auVar75._4_4_;
            fVar92 = fVar77 + fVar77;
            fVar59 = auVar75._8_4_;
            fVar95 = fVar59 + fVar59;
            fVar81 = auVar75._12_4_;
            fVar115 = auVar66._4_4_ * auVar66._4_4_;
            fVar109 = fVar115 + -0.5;
            fVar115 = fVar115 + -0.5;
            auVar66 = NEON_ext(auVar75,auVar75,4,1);
            auVar5._12_4_ = fVar91;
            auVar5._0_12_ = *pauVar2;
            auVar6._12_4_ = fVar91;
            auVar6._0_12_ = *pauVar2;
            auVar120 = NEON_ext(auVar5,auVar6,8,1);
            uVar118 = NEON_ext(lVar9,auVar120._0_8_,4,1);
            fVar63 = 1.0 - fVar59 * fVar95;
            fVar131 = (fVar26 + fVar26) * fVar26;
            fVar83 = (fVar26 + fVar26) * fVar81;
            fVar80 = fVar26 * fVar53 + fVar77 * fVar78 + fVar59 * fVar89;
            fVar82 = fVar26 * fVar53 + fVar77 * fVar78 + fVar59 * fVar89;
            auVar79._0_4_ = fVar26 * (float)uVar118 - auVar66._0_4_ * fVar53;
            auVar79._4_4_ = fVar77 * (float)((ulong)uVar118 >> 0x20) - auVar66._4_4_ * fVar78;
            auVar79._8_4_ = fVar59 * fVar53 - fVar26 * fVar89;
            auVar79._12_4_ = fVar81 * fVar78 - fVar77 * fVar91;
            auVar130._0_4_ = fVar92 * fVar26 - fVar95 * fVar81;
            auVar130._4_4_ = fVar63 - fVar131;
            auVar66 = NEON_ext(auVar79,auVar79,4,1);
            auVar133._0_4_ = fVar63 - fVar92 * fVar77;
            auVar133._4_4_ = fVar92 * fVar26 + fVar95 * fVar81;
            fVar63 = fVar95 * fVar77 - fVar83;
            auVar133._8_4_ = fVar95 * fVar26 - fVar92 * fVar81;
            auVar133._12_4_ = fVar63;
            fVar53 = fVar53 * fVar109 + fVar26 * fVar80 + auVar66._0_4_ * fVar81;
            fVar78 = fVar78 * fVar115 + fVar77 * fVar82 + auVar66._4_4_ * fVar81;
            fVar80 = fVar89 * fVar109 + fVar59 * fVar80 + auVar79._0_4_ * fVar81;
            fVar82 = fVar91 * fVar115 + fVar81 * fVar82 + fVar81 * 0.0;
            fVar59 = fVar95 * fVar26 + fVar92 * fVar81;
            local_110 = (*(float *)(param_2 + 4) +
                        fVar74 * (*(float *)(param_2 + 6) - *(float *)(param_2 + 4))) -
                        (fVar53 + fVar53);
            fStack_10c = (*(float *)((long)param_2 + 0x24) +
                         fVar71 * (*(float *)((long)param_2 + 0x34) -
                                  *(float *)((long)param_2 + 0x24))) - (fVar78 + fVar78);
            fStack_108 = (*(float *)(param_2 + 5) +
                         fVar74 * (*(float *)(param_2 + 7) - *(float *)(param_2 + 5))) -
                         (fVar80 + fVar80);
            fStack_104 = (*(float *)((long)param_2 + 0x2c) +
                         fVar71 * (*(float *)((long)param_2 + 0x3c) -
                                  *(float *)((long)param_2 + 0x2c))) - (fVar82 + fVar82);
            auVar130._8_4_ = fVar95 * fVar77 + fVar83;
            fVar26 = (1.0 - fVar131) - fVar92 * fVar77;
            auVar130._12_4_ = fVar59;
          } while (puVar22 <= puVar14);
        }
LAB_02ea9430:
        uStack_178 = CONCAT44(fVar68,fVar50);
        local_180 = CONCAT44(fVar46,fVar25);
        bVar12 = (float)uVar56 < (float)uVar132 - fVar76;
      }
    }
    else {
      bVar12 = false;
    }
    fStack_e8 = auVar130._8_4_;
    fStack_e4 = auVar130._12_4_;
    local_f0 = auVar130._0_4_;
    fStack_ec = auVar130._4_4_;
    *(undefined1 (*) [16])(param_1 + 0x110) = auVar133;
    *(long *)(param_1 + 0x128) = auVar130._8_8_;
    *(long *)(param_1 + 0x120) = auVar130._0_8_;
    *(ulong *)(param_1 + 0x138) = (ulong)(uint)fVar26;
    *(ulong *)(param_1 + 0x130) = CONCAT44(fVar63,fVar59);
    *(float *)(param_1 + 0x148) = fStack_108;
    *(float *)(param_1 + 0x14c) = fStack_104;
    *(float *)(param_1 + 0x140) = local_110;
    *(float *)(param_1 + 0x144) = fStack_10c;
    FUN_008273cc(param_1,*param_2,param_2[1],param_1 + 0x110,1,param_3,param_1 + 0x160);
    auVar69._4_4_ = fVar63;
    auVar69._0_4_ = fVar59;
    auVar69._8_4_ = fVar26;
    auVar69._12_4_ = 0;
    uStack_c8 = auVar133._8_8_;
    local_d0 = auVar133._0_8_;
    fVar25 = *(float *)(param_1 + 0x170);
    fVar35 = *(float *)(param_1 + 0x174);
    fVar46 = *(float *)(param_1 + 0x178);
    auVar66._0_4_ = fVar59 * fVar46 + auVar133._0_4_ * fVar25 + local_f0 * fVar35;
    auVar66._4_4_ = fVar63 * fVar46 + auVar133._4_4_ * fVar25 + fStack_ec * fVar35;
    auVar66._8_4_ = fVar26 * fVar46 + auVar133._8_4_ * fVar25 + fStack_e8 * fVar35;
    auVar66._12_4_ = fVar46 * 0.0 + auVar133._12_4_ * fVar25 + fStack_e4 * fVar35;
    fVar25 = (float)*(undefined8 *)(param_1 + 0x160) - fVar47;
    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x160) >> 0x20) - fVar47;
    if (!(bool)(~(fVar25 < fVar45) & 1)) {
      uVar56 = uVar132;
      if (fVar23 < ABS(fVar25 - fVar45)) {
        iVar108 = 10;
        fVar35 = fVar26;
        do {
          uVar56 = NEON_fminnm(CONCAT44(((float)((ulong)uVar84 >> 0x20) - fVar34) /
                                        (fVar35 - fVar34),(fVar45 - fVar32) / (fVar25 - fVar32)),
                               0x3f6666663f666666,4);
          uVar56 = NEON_fmax(uVar56,0x3dcccccd3dcccccd,4);
          fVar71 = (float)((ulong)uVar64 >> 0x20);
          fVar26 = *(float *)(param_2 + 0xe);
          fVar46 = *(float *)((long)param_2 + 0x74);
          fVar50 = *(float *)(param_2 + 0xf);
          fVar68 = *(float *)((long)param_2 + 0x7c);
          uVar56 = NEON_fmax(CONCAT44(((float)((ulong)uVar132 >> 0x20) - fVar71) *
                                      (float)((ulong)uVar56 >> 0x20) + fVar71,
                                      ((float)uVar132 - (float)uVar64) * (float)uVar56 +
                                      (float)uVar64),CONCAT44(fVar24,fVar24),4);
          fVar63 = (float)uVar56;
          fVar71 = fVar63 * *(float *)((long)param_2 + 0x114);
          fVar53 = (float)((ulong)uVar56 >> 0x20) * *(float *)((long)param_2 + 0x114);
          fVar58 = fVar71 + fVar71;
          fVar54 = fVar53 + fVar53;
          fVar87 = fVar26 + (*(float *)(param_2 + 0xc) - fVar26) * (fVar58 + fVar99);
          fVar59 = fVar46 + (*(float *)((long)param_2 + 100) - fVar46) * (fVar54 + fVar111);
          fVar60 = fVar50 + (*(float *)(param_2 + 0xd) - fVar50) * (fVar58 + fVar99);
          fVar62 = fVar68 + (*(float *)((long)param_2 + 0x6c) - fVar68) * (fVar54 + fVar111);
          uVar65 = CONCAT44(-(uint)(fVar53 < 0.5),-(uint)(fVar71 < 0.5)) & 0x100000001;
          iVar114 = (int)uVar65;
          iVar51 = (int)(uVar65 >> 0x20);
          fVar87 = (float)((uint)fVar87 ^
                          ((uint)fVar87 ^
                          (uint)(*(float *)(param_2 + 10) +
                                (fVar26 - *(float *)(param_2 + 10)) * fVar58)) &
                          (iVar114 << 0x1f) >> 0x1f);
          fVar59 = (float)((uint)fVar59 ^
                          ((uint)fVar59 ^
                          (uint)(*(float *)((long)param_2 + 0x54) +
                                (fVar46 - *(float *)((long)param_2 + 0x54)) * fVar54)) &
                          (iVar51 << 0x1f) >> 0x1f);
          fVar60 = (float)((uint)fVar60 ^
                          ((uint)fVar60 ^
                          (uint)(*(float *)(param_2 + 0xb) +
                                (fVar50 - *(float *)(param_2 + 0xb)) * fVar58)) &
                          (iVar114 << 0x1f) >> 0x1f);
          fVar62 = (float)((uint)fVar62 ^
                          ((uint)fVar62 ^
                          (uint)(*(float *)((long)param_2 + 0x5c) +
                                (fVar68 - *(float *)((long)param_2 + 0x5c)) * fVar54)) &
                          (iVar51 << 0x1f) >> 0x1f);
          auVar37._0_4_ = fVar87 * fVar87;
          auVar37._4_4_ = fVar59 * fVar59;
          auVar37._8_4_ = fVar60 * fVar60;
          auVar37._12_4_ = fVar62 * fVar62;
          auVar57 = NEON_ext(auVar37,auVar37,8,1);
          fVar46 = auVar57._0_4_ + auVar57._4_4_;
          fVar26 = auVar37._0_4_ + auVar37._4_4_ + fVar46;
          auVar38 = ZEXT816(0);
          if (fVar26 != 0.0) {
            fVar26 = SQRT(fVar26);
            fVar46 = SQRT(auVar37._0_4_ + auVar37._4_4_ + fVar46);
            auVar38._0_4_ = fVar87 / fVar26;
            auVar38._4_4_ = fVar59 / fVar46;
            auVar38._8_4_ = fVar60 / fVar26;
            auVar38._12_4_ = fVar62 / fVar46;
          }
          auVar120 = NEON_ext(auVar38,auVar38,8,1);
          auVar57 = *(undefined1 (*) [16])(param_2 + 8);
          fVar26 = auVar38._0_4_;
          fVar50 = auVar38._4_4_;
          fVar60 = fVar50 + fVar50;
          fVar58 = auVar38._8_4_;
          fVar62 = fVar58 + fVar58;
          fVar87 = auVar38._12_4_;
          fVar93 = auVar120._4_4_ * auVar120._4_4_;
          fVar86 = fVar93 + -0.5;
          fVar93 = fVar93 + -0.5;
          auVar120 = NEON_ext(auVar38,auVar38,4,1);
          auVar126 = NEON_ext(auVar57,auVar57,8,1);
          fVar46 = auVar57._0_4_;
          fVar68 = auVar57._4_4_;
          fVar76 = auVar57._8_4_;
          uVar118 = NEON_ext(auVar57._0_8_,auVar126._0_8_,4,1);
          fVar88 = 1.0 - fVar58 * fVar62;
          fVar110 = (fVar26 + fVar26) * fVar26;
          fStack_e8 = (fVar26 + fVar26) * fVar87;
          fVar54 = fVar26 * fVar46 + fVar50 * fVar68 + fVar58 * fVar76;
          fVar72 = fVar26 * fVar46 + fVar50 * fVar68 + fVar58 * fVar76;
          local_f0 = fVar60 * fVar26 - fVar62 * fVar87;
          auVar48._0_4_ = fVar26 * (float)uVar118 - auVar120._0_4_ * fVar46;
          auVar48._4_4_ = fVar50 * (float)((ulong)uVar118 >> 0x20) - auVar120._4_4_ * fVar68;
          auVar48._8_4_ = fVar58 * fVar46 - fVar26 * fVar76;
          auVar48._12_4_ = fVar87 * fVar68 - fVar50 * auVar57._12_4_;
          fStack_ec = fVar88 - fVar110;
          auVar120 = NEON_ext(auVar48,auVar48,4,1);
          fVar59 = fVar62 * fVar50 - fStack_e8;
          local_d0 = CONCAT44(fVar60 * fVar26 + fVar62 * fVar87,fVar88 - fVar60 * fVar50);
          fVar46 = fVar46 * fVar86 + fVar26 * fVar54 + auVar120._0_4_ * fVar87;
          fVar68 = fVar68 * fVar93 + fVar50 * fVar72 + auVar120._4_4_ * fVar87;
          fVar58 = fVar76 * fVar86 + fVar58 * fVar54 + auVar48._0_4_ * fVar87;
          fVar54 = auVar57._12_4_ * fVar93 + fVar87 * fVar72 + fVar87 * 0.0;
          uStack_c8 = CONCAT44(fVar59,fVar62 * fVar26 - fVar60 * fVar87);
          local_110 = (*(float *)(param_2 + 4) +
                      fVar71 * (*(float *)(param_2 + 6) - *(float *)(param_2 + 4))) -
                      (fVar46 + fVar46);
          fStack_10c = (*(float *)((long)param_2 + 0x24) +
                       fVar53 * (*(float *)((long)param_2 + 0x34) - *(float *)((long)param_2 + 0x24)
                                )) - (fVar68 + fVar68);
          auVar39._0_8_ = CONCAT44(fStack_10c,local_110);
          auVar39._8_4_ =
               (*(float *)(param_2 + 5) +
               fVar71 * (*(float *)(param_2 + 7) - *(float *)(param_2 + 5))) - (fVar58 + fVar58);
          auVar39._12_4_ =
               (*(float *)((long)param_2 + 0x2c) +
               fVar53 * (*(float *)((long)param_2 + 0x3c) - *(float *)((long)param_2 + 0x2c))) -
               (fVar54 + fVar54);
          fStack_e8 = fVar62 * fVar50 + fStack_e8;
          fStack_e4 = fVar62 * fVar26 + fVar60 * fVar87;
          fVar50 = (1.0 - fVar110) - fVar60 * fVar50;
          *(undefined8 *)(param_1 + 0x118) = uStack_c8;
          *(undefined8 *)(param_1 + 0x110) = local_d0;
          *(float *)(param_1 + 0x128) = fStack_e8;
          *(float *)(param_1 + 300) = fStack_e4;
          *(float *)(param_1 + 0x120) = local_f0;
          *(float *)(param_1 + 0x124) = fStack_ec;
          *(ulong *)(param_1 + 0x138) = (ulong)(uint)fVar50;
          *(ulong *)(param_1 + 0x130) = CONCAT44(fVar59,fStack_e4);
          *(long *)(param_1 + 0x148) = auVar39._8_8_;
          *(undefined8 *)(param_1 + 0x140) = auVar39._0_8_;
          FUN_008273cc(param_1,*param_2,param_2[1],param_1 + 0x110,1,param_3,param_1 + 0x160);
          fVar46 = (float)*(undefined8 *)(param_1 + 0x160) - fVar47;
          fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x160) >> 0x20) - fVar47;
          fStack_108 = auVar39._8_4_;
          fStack_104 = auVar39._12_4_;
          if (ABS(fVar46 - fVar45) < fVar23) {
            auVar69._4_4_ = fVar59;
            auVar69._0_4_ = fStack_e4;
            auVar69._8_4_ = fVar50;
            auVar69._12_4_ = 0;
            fVar25 = fVar46;
            goto LAB_02ea9974;
          }
          if ((bool)(~(fVar46 < fVar45) & 1)) {
            auVar69._4_4_ = fVar59;
            auVar69._0_4_ = fStack_e4;
            auVar69._8_4_ = fVar50;
            auVar69._12_4_ = 0;
            uVar64 = uVar56;
            fVar32 = fVar46;
            fVar34 = fVar26;
            fVar46 = fVar25;
            fVar26 = fVar35;
          }
          else {
            auVar69._4_4_ = fVar59;
            auVar69._0_4_ = fStack_e4;
            auVar69._8_4_ = fVar50;
            auVar69._12_4_ = 0;
            uVar132 = uVar56;
            fVar25 = fVar46;
            if (fVar63 == fVar24) goto LAB_02ea9974;
          }
          iVar108 = iVar108 + -1;
          fVar25 = fVar46;
          fVar35 = fVar26;
        } while (iVar108 != 0);
        uVar56 = uVar132;
        if ((bool)(~(fVar63 == (float)uVar132) & 1)) {
          fVar50 = (float)uVar132 * *(float *)((long)param_2 + 0x114);
          fVar68 = (float)((ulong)uVar132 >> 0x20) * *(float *)((long)param_2 + 0x114);
          fVar71 = fVar50 + fVar50;
          fVar58 = fVar68 + fVar68;
          fVar32 = *(float *)(param_2 + 0xe);
          fVar34 = *(float *)((long)param_2 + 0x74);
          fVar35 = *(float *)(param_2 + 0xf);
          fVar46 = *(float *)((long)param_2 + 0x7c);
          fVar53 = fVar32 + (*(float *)(param_2 + 0xc) - fVar32) * (fVar71 + fVar99);
          fVar45 = fVar34 + (*(float *)((long)param_2 + 100) - fVar34) * (fVar58 + fVar111);
          fVar87 = fVar35 + (*(float *)(param_2 + 0xd) - fVar35) * (fVar71 + fVar99);
          fVar54 = fVar46 + (*(float *)((long)param_2 + 0x6c) - fVar46) * (fVar58 + fVar111);
          uVar65 = CONCAT44(-(uint)(fVar68 < 0.5),-(uint)(fVar50 < 0.5)) & 0x100000001;
          iVar108 = (int)uVar65;
          iVar114 = (int)(uVar65 >> 0x20);
          fVar53 = (float)((uint)fVar53 ^
                          ((uint)fVar53 ^
                          (uint)(*(float *)(param_2 + 10) +
                                (fVar32 - *(float *)(param_2 + 10)) * fVar71)) &
                          (iVar108 << 0x1f) >> 0x1f);
          fVar45 = (float)((uint)fVar45 ^
                          ((uint)fVar45 ^
                          (uint)(*(float *)((long)param_2 + 0x54) +
                                (fVar34 - *(float *)((long)param_2 + 0x54)) * fVar58)) &
                          (iVar114 << 0x1f) >> 0x1f);
          fVar87 = (float)((uint)fVar87 ^
                          ((uint)fVar87 ^
                          (uint)(*(float *)(param_2 + 0xb) +
                                (fVar35 - *(float *)(param_2 + 0xb)) * fVar71)) &
                          (iVar108 << 0x1f) >> 0x1f);
          fVar54 = (float)((uint)fVar54 ^
                          ((uint)fVar54 ^
                          (uint)(*(float *)((long)param_2 + 0x5c) +
                                (fVar46 - *(float *)((long)param_2 + 0x5c)) * fVar58)) &
                          (iVar114 << 0x1f) >> 0x1f);
          auVar40._0_4_ = fVar53 * fVar53;
          auVar40._4_4_ = fVar45 * fVar45;
          auVar40._8_4_ = fVar87 * fVar87;
          auVar40._12_4_ = fVar54 * fVar54;
          auVar57 = NEON_ext(auVar40,auVar40,8,1);
          fVar34 = auVar57._0_4_ + auVar57._4_4_;
          fVar32 = auVar40._0_4_ + auVar40._4_4_ + fVar34;
          auVar41 = ZEXT816(0);
          if (fVar32 != 0.0) {
            fVar32 = SQRT(fVar32);
            fVar34 = SQRT(auVar40._0_4_ + auVar40._4_4_ + fVar34);
            auVar41._0_4_ = fVar53 / fVar32;
            auVar41._4_4_ = fVar45 / fVar34;
            auVar41._8_4_ = fVar87 / fVar32;
            auVar41._12_4_ = fVar54 / fVar34;
          }
          auVar126 = NEON_ext(auVar41,auVar41,8,1);
          auVar57 = *(undefined1 (*) [16])(param_2 + 8);
          fVar32 = auVar41._0_4_;
          fVar35 = auVar41._4_4_;
          fVar87 = fVar35 + fVar35;
          fVar71 = auVar41._8_4_;
          fVar54 = fVar71 + fVar71;
          fVar53 = auVar41._12_4_;
          auVar120 = NEON_ext(auVar41,auVar41,4,1);
          fVar63 = auVar126._4_4_ * auVar126._4_4_;
          auVar126 = NEON_ext(auVar57,auVar57,8,1);
          uVar64 = NEON_ext(auVar57._0_8_,auVar126._0_8_,4,1);
          fVar62 = fVar63 + -0.5;
          fVar63 = fVar63 + -0.5;
          fVar34 = auVar57._0_4_;
          fVar46 = auVar57._4_4_;
          fVar60 = auVar57._8_4_;
          fVar99 = 1.0 - fVar71 * fVar54;
          fVar111 = (fVar32 + fVar32) * fVar32;
          fStack_e8 = (fVar32 + fVar32) * fVar53;
          fVar58 = fVar32 * fVar34 + fVar35 * fVar46 + fVar71 * fVar60;
          fVar59 = fVar32 * fVar34 + fVar35 * fVar46 + fVar71 * fVar60;
          local_f0 = fVar87 * fVar32 - fVar54 * fVar53;
          auVar49._0_4_ = fVar32 * (float)uVar64 - auVar120._0_4_ * fVar34;
          auVar49._4_4_ = fVar35 * (float)((ulong)uVar64 >> 0x20) - auVar120._4_4_ * fVar46;
          auVar49._8_4_ = fVar71 * fVar34 - fVar32 * fVar60;
          auVar49._12_4_ = fVar53 * fVar46 - fVar35 * auVar57._12_4_;
          fStack_ec = fVar99 - fVar111;
          auVar120 = NEON_ext(auVar49,auVar49,4,1);
          fVar45 = fVar54 * fVar35 - fStack_e8;
          local_d0 = CONCAT44(fVar87 * fVar32 + fVar54 * fVar53,fVar99 - fVar87 * fVar35);
          fVar34 = fVar34 * fVar62 + fVar32 * fVar58 + auVar120._0_4_ * fVar53;
          fVar46 = fVar46 * fVar63 + fVar35 * fVar59 + auVar120._4_4_ * fVar53;
          fVar71 = fVar60 * fVar62 + fVar71 * fVar58 + auVar49._0_4_ * fVar53;
          fVar58 = auVar57._12_4_ * fVar63 + fVar53 * fVar59 + fVar53 * 0.0;
          uStack_c8 = CONCAT44(fVar45,fVar54 * fVar32 - fVar87 * fVar53);
          local_110 = (*(float *)(param_2 + 4) +
                      fVar50 * (*(float *)(param_2 + 6) - *(float *)(param_2 + 4))) -
                      (fVar34 + fVar34);
          fStack_10c = (*(float *)((long)param_2 + 0x24) +
                       fVar68 * (*(float *)((long)param_2 + 0x34) - *(float *)((long)param_2 + 0x24)
                                )) - (fVar46 + fVar46);
          fStack_108 = (*(float *)(param_2 + 5) +
                       fVar50 * (*(float *)(param_2 + 7) - *(float *)(param_2 + 5))) -
                       (fVar71 + fVar71);
          fStack_104 = (*(float *)((long)param_2 + 0x2c) +
                       fVar68 * (*(float *)((long)param_2 + 0x3c) - *(float *)((long)param_2 + 0x2c)
                                )) - (fVar58 + fVar58);
          fStack_e8 = fVar54 * fVar35 + fStack_e8;
          fStack_e4 = fVar54 * fVar32 + fVar87 * fVar53;
          auVar69._4_4_ = fVar45;
          auVar69._0_4_ = fStack_e4;
          auVar69._8_4_ = (1.0 - fVar111) - fVar87 * fVar35;
          auVar69._12_4_ = 0;
        }
      }
LAB_02ea9974:
      fVar32 = fVar25;
      fVar25 = *(float *)(param_1 + 0x170);
      fVar34 = *(float *)(param_1 + 0x174);
      fVar35 = *(float *)(param_1 + 0x178);
      fVar68 = *(float *)(param_1 + 0x180) - fVar96 * fVar25;
      fVar71 = *(float *)(param_1 + 0x184) - fVar96 * fVar34;
      fVar53 = *(float *)(param_1 + 0x188) - fVar96 * fVar35;
      fVar58 = (float)((ulong)local_d0 >> 0x20);
      fVar45 = (float)((ulong)uStack_c8 >> 0x20);
      fVar46 = auVar69._0_4_ * fVar35 + (float)local_d0 * fVar25 + local_f0 * fVar34;
      fVar50 = auVar69._4_4_ * fVar35 + fVar58 * fVar25 + fStack_ec * fVar34;
      auVar30._0_8_ = CONCAT44(fVar50,fVar46);
      auVar30._8_4_ = auVar69._8_4_ * fVar35 + (float)uStack_c8 * fVar25 + fStack_e8 * fVar34;
      auVar30._12_4_ = auVar69._12_4_ * fVar35 + fVar45 * fVar25 + fStack_e4 * fVar34;
      local_110 = local_110 + auVar69._0_4_ * fVar53 + (float)local_d0 * fVar68 + local_f0 * fVar71;
      fStack_10c = fStack_10c + auVar69._4_4_ * fVar53 + fVar58 * fVar68 + fStack_ec * fVar71;
      auVar42._0_8_ = CONCAT44(fStack_10c,local_110);
      auVar42._8_4_ =
           fStack_108 + auVar69._8_4_ * fVar53 + (float)uStack_c8 * fVar68 + fStack_e8 * fVar71;
      auVar42._12_4_ = fStack_104 + auVar69._12_4_ * fVar53 + fVar45 * fVar68 + fStack_e4 * fVar71;
      *(long *)(param_4 + 0x18) = auVar42._8_8_;
      *(undefined8 *)(param_4 + 0x10) = auVar42._0_8_;
      *(long *)(param_4 + 0x28) = auVar30._8_8_;
      *(undefined8 *)(param_4 + 0x20) = auVar30._0_8_;
      if ((char)param_2[0x26] == '\0') {
        fVar25 = (float)uVar56 * *(float *)((long)param_2 + 0x114);
        fVar34 = (float)((ulong)uVar56 >> 0x20) * *(float *)((long)param_2 + 0x114);
        auVar43._0_4_ =
             local_110 -
             (*(float *)(param_2 + 4) + (*(float *)(param_2 + 6) - *(float *)(param_2 + 4)) * fVar25
             );
        auVar43._4_4_ =
             fStack_10c -
             (*(float *)((long)param_2 + 0x24) +
             (*(float *)((long)param_2 + 0x34) - *(float *)((long)param_2 + 0x24)) * fVar34);
        auVar43._8_4_ =
             auVar42._8_4_ -
             (*(float *)(param_2 + 5) + (*(float *)(param_2 + 7) - *(float *)(param_2 + 5)) * fVar25
             );
        auVar43._12_4_ =
             auVar42._12_4_ -
             (*(float *)((long)param_2 + 0x2c) +
             (*(float *)((long)param_2 + 0x3c) - *(float *)((long)param_2 + 0x2c)) * fVar34);
        auVar70 = NEON_ext(auVar43,auVar43,4,1);
        auVar120 = *(undefined1 (*) [16])(param_2 + 0x1c);
        auVar57 = *(undefined1 (*) [16])(param_2 + 0x1e);
        auVar126 = NEON_ext(auVar57,auVar57,8,1);
        uVar64 = NEON_ext(auVar57._0_8_,auVar126._0_8_,4,1);
        auVar44._0_4_ = auVar57._0_4_ * auVar70._0_4_ - (float)uVar64 * auVar43._0_4_;
        auVar44._4_4_ =
             auVar57._4_4_ * auVar70._4_4_ - (float)((ulong)uVar64 >> 0x20) * auVar43._4_4_;
        auVar44._8_4_ = auVar57._8_4_ * auVar43._0_4_ - auVar57._0_4_ * auVar43._8_4_;
        auVar44._12_4_ = auVar57._12_4_ * auVar43._4_4_ - auVar57._4_4_ * auVar43._12_4_;
        auVar57 = NEON_ext(auVar44,auVar44,4,1);
        auVar31._0_4_ = fVar46 * (auVar120._0_4_ + auVar57._0_4_);
        auVar31._4_4_ = fVar50 * (auVar120._4_4_ + auVar57._4_4_);
        auVar31._8_4_ = auVar30._8_4_ * (auVar120._8_4_ + auVar44._0_4_);
        auVar31._12_4_ = auVar30._12_4_ * (auVar120._12_4_ + 0.0);
        auVar57 = NEON_ext(auVar31,auVar31,8,1);
        if (0.0 <= auVar31._0_4_ + auVar31._4_4_ + auVar57._0_4_) {
          uVar84 = NEON_fmin(uVar84,CONCAT44(*(float *)(param_2 + 0x24) + fVar26,
                                             *(float *)(param_2 + 0x24) + fVar32),4);
          uVar85 = NEON_fmin(uVar85,CONCAT44(*(float *)((long)param_2 + 0x124) + fVar26,
                                             *(float *)((long)param_2 + 0x124) + fVar32),4);
          uVar132 = uVar56;
          fVar25 = fVar32;
          goto LAB_02ea8b64;
        }
      }
      *param_4 = 1;
      uVar55 = uVar56;
      break;
    }
  } while( true );
  if (puVar22 != (ulong *)0x0) {
    if (lVar16 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar22,lVar15);
    }
    else {
      if ((*(ulong *)(lVar16 + 0x28) < uVar20) ||
         (*(long *)(lVar16 + 0x38) != uVar20 + (long)puVar22)) {
        if (*(ulong *)(lVar16 + 0x28) < uVar20 + 0x40) {
          *(int *)(*(long *)(lVar16 + 0x30) + 0x20) = *(int *)(*(long *)(lVar16 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar16 + 0x10) + 0x18))
                    (*(long **)(lVar16 + 0x10),(long)puVar22 - (long)*(int *)((long)puVar22 + -4),
                     uVar20 + 0x44);
          goto LAB_02ea9b2c;
        }
        if (*(long *)(lVar16 + 0x38) != uVar20 + (long)puVar22) {
          FUN_031cf778(lVar16,puVar22);
          goto LAB_02ea9b2c;
        }
        *(ulong **)(lVar16 + 0x38) = puVar22;
      }
      else {
        *(ulong **)(lVar16 + 0x38) = puVar22;
        if (*(ulong **)(lVar16 + 0x48) != puVar22) goto LAB_02ea9b2c;
      }
      FUN_031cf578();
    }
  }
LAB_02ea9b2c:
  *(ulong *)(param_4 + 4) = CONCAT44(fVar32,(int)uVar55);
  return;
}


