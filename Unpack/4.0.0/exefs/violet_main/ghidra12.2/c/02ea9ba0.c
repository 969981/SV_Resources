/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ea9ba0; name: FUN_02ea9ba0
 */


void FUN_02ea9ba0(long param_1,long *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  long lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar38;
  float fVar39;
  float fVar42;
  float fVar44;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar40;
  float fVar41;
  float fVar43;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  undefined8 uVar50;
  float fVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar64;
  float fVar66;
  float fVar67;
  undefined1 auVar62 [16];
  float fVar61;
  float fVar65;
  undefined1 auVar63 [16];
  float fVar68;
  undefined8 uVar70;
  float fVar74;
  float fVar76;
  undefined1 auVar71 [16];
  float fVar69;
  float fVar77;
  undefined1 auVar72 [16];
  float fVar75;
  undefined1 auVar73 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  undefined1 auVar82 [16];
  float fVar83;
  float fVar94;
  ulong uVar87;
  float fVar95;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar84;
  float fVar85;
  undefined4 uVar86;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float unaff_s8;
  undefined8 unaff_d9;
  undefined8 uVar96;
  float fVar98;
  undefined8 uVar97;
  float fVar99;
  undefined8 uVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  int iVar104;
  float fVar105;
  undefined8 uVar106;
  float fVar107;
  int iVar108;
  float fVar109;
  float fVar110;
  undefined8 uVar111;
  ulong uVar112;
  float fVar114;
  float fVar115;
  undefined1 auVar113 [16];
  float fVar116;
  undefined1 auVar117 [16];
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float local_1a0;
  float fStack_19c;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  long local_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  fVar28 = *(float *)(param_2 + 0x25);
  fVar29 = *(float *)((long)param_2 + 300);
  uVar96 = CONCAT44((int)param_2[0x23],(int)param_2[0x23]);
  uVar97 = CONCAT44(*(undefined4 *)((long)param_2 + 0x11c),*(undefined4 *)((long)param_2 + 0x11c));
  fVar101 = *(float *)(param_2 + 0x22);
  fVar116 = *(float *)(*param_2 + 0x20);
  fVar118 = *(float *)(param_2[1] + 0x20);
  pauVar24 = (undefined1 (*) [16])(param_2 + 10);
  auVar35 = *pauVar24;
  auVar34 = *(undefined1 (*) [16])(param_1 + 0x170);
  auVar51 = NEON_ext(auVar35,auVar35,8,1);
  fVar64 = auVar51._4_4_ * auVar51._4_4_;
  uVar50 = NEON_ext(auVar35._0_8_,auVar51._0_8_,4,1);
  auVar51 = NEON_ext(auVar34,auVar34,8,1);
  fVar30 = auVar35._0_4_;
  fVar38 = auVar34._0_4_;
  fVar31 = auVar35._4_4_;
  fVar42 = auVar34._4_4_;
  fVar32 = auVar35._8_4_;
  fVar44 = auVar34._8_4_;
  fVar39 = auVar35._12_4_;
  uVar70 = NEON_ext(auVar34._0_8_,auVar51._0_8_,4,1);
  fVar54 = fVar30 * fVar38 + fVar31 * fVar42 + fVar32 * fVar44;
  fVar55 = fVar30 * fVar38 + fVar31 * fVar42 + fVar32 * fVar44;
  fVar59 = fVar64 + SUB164(ZEXT816(0xbf000000bf000000),0);
  fVar64 = fVar64 + SUB164(ZEXT816(0xbf000000bf000000),4);
  uVar27 = CONCAT44(fVar101,fVar101);
  auVar35._0_4_ = fVar30 * (float)uVar70 - fVar38 * (float)uVar50;
  auVar35._4_4_ = fVar31 * (float)((ulong)uVar70 >> 0x20) - fVar42 * (float)((ulong)uVar50 >> 0x20);
  auVar35._8_4_ = fVar32 * fVar38 - fVar44 * fVar30;
  auVar35._12_4_ = fVar39 * fVar42 - auVar34._12_4_ * fVar31;
  auVar51 = NEON_ext(auVar35,auVar35,4,1);
  cVar4 = *(char *)((long)param_2 + 0x131);
  fVar49 = fVar116 + fVar118;
  fVar30 = fVar38 * fVar59 + fVar30 * fVar54 + auVar51._0_4_ * fVar39;
  fVar38 = fVar42 * fVar64 + fVar31 * fVar55 + auVar51._4_4_ * fVar39;
  fVar42 = fVar44 * fVar59 + fVar32 * fVar54 + auVar35._0_4_ * fVar39;
  fVar44 = auVar34._12_4_ * fVar64 + fVar39 * fVar55 + fVar39 * 0.0;
  auVar35 = *(undefined1 (*) [16])(param_2 + 0x1e);
  uVar50 = *(undefined8 *)(param_1 + 0x160);
  fVar31 = *(float *)(param_2 + 2);
  fVar32 = auVar35._0_4_ * fVar31;
  fVar39 = auVar35._4_4_ * fVar31;
  auVar34._0_8_ = CONCAT44(fVar39,fVar32);
  auVar34._8_4_ = auVar35._8_4_ * fVar31;
  auVar34._12_4_ = auVar35._12_4_ * fVar31;
  uVar14 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(*param_2 + 0x18) * 0x200 + 0x58
                       ))();
  lVar17 = tpidr_el0;
  lVar16 = *(long *)(lVar17 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar17 + 0x1000b8) = lVar16;
  }
  auVar51._8_8_ = auVar34._8_8_;
  auVar51._0_8_ = auVar34._0_8_;
  auVar62._0_4_ = fVar30 + fVar30;
  auVar62._4_4_ = fVar38 + fVar38;
  auVar62._8_4_ = fVar42 + fVar42;
  auVar62._12_4_ = fVar44 + fVar44;
  auVar35 = NEON_ext(auVar51,auVar51,4,1);
  lVar17 = *(long *)(*(long *)(lVar16 + 0x3d0) + 0x10);
  plVar3 = param_2 + 0xc;
  uVar2 = (-(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1) + (long)(int)uVar14;
  lVar16 = *(long *)(lVar17 + 8);
  lVar25 = uVar2 * 4;
  uVar22 = (uint)uVar2;
  uVar23 = lVar25 + 0x3fU & 0xffffffffffffffc0;
  *param_4 = 0;
  if (lVar16 != 0) {
    lVar17 = 0;
  }
  bVar13 = cVar4 != '\x01';
  puVar26 = (undefined8 *)0x0;
  uVar70 = 0;
  fVar30 = (float)uVar50 - fVar49;
  fVar31 = (float)((ulong)uVar50 >> 0x20) - fVar49;
LAB_02ea9dd4:
  do {
    fVar42 = fVar31;
    fVar38 = fVar30;
    uVar50 = uVar70;
    fVar56 = auVar62._0_4_;
    fVar31 = auVar62._4_4_;
    fVar30 = fVar31 * *(float *)((long)param_2 + 0xe4);
    fVar44 = auVar62._8_4_ * *(float *)(param_2 + 0x1d);
    auVar51 = NEON_ext(auVar62,auVar62,4,1);
    fVar60 = fVar56 * *(float *)(param_2 + 0x1c) + fVar30 + fVar44;
    local_1a0 = auVar35._0_4_;
    fStack_19c = auVar35._4_4_;
    auVar82._0_4_ = fVar32 * auVar51._0_4_ - local_1a0 * fVar56;
    auVar82._4_4_ = fVar39 * auVar51._4_4_ - fStack_19c * fVar31;
    auVar82._8_4_ = auVar34._8_4_ * fVar56 - fVar32 * auVar62._8_4_;
    auVar82._12_4_ = auVar34._12_4_ * fVar31 - fVar39 * auVar62._12_4_;
    auVar51 = NEON_ext(auVar82,auVar82,4,1);
    fVar54 = auVar51._0_4_ * auVar51._0_4_;
    fVar59 = auVar51._4_4_ * auVar51._4_4_;
    fVar68 = SQRT(fVar54 + fVar59 + auVar82._0_4_ * auVar82._0_4_);
    fVar55 = fVar101 - (float)uVar50;
    fVar31 = (float)((ulong)uVar50 >> 0x20);
    fVar64 = fVar101 - fVar31;
    fVar99 = fVar55 * (fVar68 - fVar60);
    fVar79 = (float)uVar96;
    if (!(bool)(~(fVar99 <= fVar38 - fVar79) & 1)) break;
    fVar98 = (float)((ulong)uVar97 >> 0x20);
    uVar100 = NEON_fmax(CONCAT44((fVar64 * (fVar42 - fVar98)) /
                                 (fVar64 * (SQRT(fVar54 + fVar59 + auVar82._0_4_ * auVar82._0_4_) -
                                           (fVar56 * *(float *)(param_2 + 0x1c) + fVar30 + fVar44)))
                                 ,(fVar55 * (fVar38 - (float)uVar97)) / fVar99),
                        CONCAT44(fVar29,fVar29),4);
    uVar70 = NEON_fmin(CONCAT44((float)((ulong)uVar100 >> 0x20) + fVar31,
                                (float)uVar100 + (float)uVar50),uVar27,4);
    fVar59 = (float)uVar70;
    local_c8 = CONCAT44((float)((ulong)uVar70 >> 0x20) * *(float *)((long)param_2 + 0x114),
                        fVar59 * *(float *)((long)param_2 + 0x114));
    FUN_031ccd10(&local_c0,pauVar24,plVar3,&local_c8);
    auVar73._8_4_ = fStack_b8;
    auVar73._0_8_ = CONCAT44(fStack_bc,local_c0);
    auVar73._12_4_ = fStack_b4;
    fVar74 = fStack_bc + fStack_bc;
    fVar76 = fStack_b8 + fStack_b8;
    auVar51 = *(undefined1 (*) [16])(param_2 + 8);
    auVar62 = NEON_ext(auVar73,auVar73,8,1);
    auVar82 = NEON_ext(auVar51,auVar51,8,1);
    uVar106 = NEON_ext(CONCAT44(fStack_bc,local_c0),auVar62._0_8_,4,1);
    uVar81 = NEON_ext(auVar51._0_8_,auVar82._0_8_,4,1);
    fVar30 = auVar51._0_4_;
    fVar44 = auVar51._4_4_;
    fVar54 = auVar51._8_4_;
    fVar65 = auVar62._4_4_ * auVar62._4_4_;
    fVar83 = (local_c0 + local_c0) * fStack_b4;
    fVar55 = local_c0 * fVar30 + fStack_bc * fVar44 + fStack_b8 * fVar54;
    fVar56 = local_c0 * fVar30 + fStack_bc * fVar44 + fStack_b8 * fVar54;
    fVar120 = (local_c0 + local_c0) * local_c0;
    fVar61 = fVar65 + -0.5;
    fVar65 = fVar65 + -0.5;
    fVar31 = 1.0 - fStack_b8 * fVar76;
    fVar64 = (float)((ulong)local_c8 >> 0x20);
    fVar121 = fVar31 - fVar74 * fStack_bc;
    auVar92._0_4_ = local_c0 * (float)uVar81 - (float)uVar106 * fVar30;
    auVar92._4_4_ =
         fStack_bc * (float)((ulong)uVar81 >> 0x20) - (float)((ulong)uVar106 >> 0x20) * fVar44;
    auVar92._8_4_ = fStack_b8 * fVar30 - local_c0 * fVar54;
    auVar92._12_4_ = fStack_b4 * fVar44 - fStack_bc * auVar51._12_4_;
    auVar62 = NEON_ext(auVar92,auVar92,4,1);
    fVar123 = fVar74 * local_c0 + fVar76 * fStack_b4;
    fVar122 = fVar76 * fStack_bc - fVar83;
    fVar83 = fVar76 * fStack_bc + fVar83;
    fVar78 = fVar74 * local_c0 - fVar76 * fStack_b4;
    fVar119 = fVar76 * local_c0 - fVar74 * fStack_b4;
    fVar30 = fVar30 * fVar61 + local_c0 * fVar55 + auVar62._0_4_ * fStack_b4;
    fVar44 = fVar44 * fVar65 + fStack_bc * fVar56 + auVar62._4_4_ * fStack_b4;
    fVar54 = fVar54 * fVar61 + fStack_b8 * fVar55 + auVar92._0_4_ * fStack_b4;
    fVar55 = auVar51._12_4_ * fVar65 + fStack_b4 * fVar56 + fStack_b4 * 0.0;
    fVar56 = fVar76 * local_c0 + fVar74 * fStack_b4;
    fVar31 = fVar31 - fVar120;
    auVar88._4_4_ = fVar31;
    auVar88._0_4_ = fVar78;
    uVar81 = CONCAT44((*(float *)((long)param_2 + 0x24) +
                      fVar64 * (*(float *)((long)param_2 + 0x34) - *(float *)((long)param_2 + 0x24))
                      ) - (fVar44 + fVar44),
                      (*(float *)(param_2 + 4) +
                      (float)local_c8 * (*(float *)(param_2 + 6) - *(float *)(param_2 + 4))) -
                      (fVar30 + fVar30));
    uVar106 = CONCAT44((*(float *)((long)param_2 + 0x2c) +
                       fVar64 * (*(float *)((long)param_2 + 0x3c) - *(float *)((long)param_2 + 0x2c)
                                )) - (fVar55 + fVar55),
                       (*(float *)(param_2 + 5) +
                       (float)local_c8 * (*(float *)(param_2 + 7) - *(float *)(param_2 + 5))) -
                       (fVar54 + fVar54));
    fVar30 = (1.0 - fVar120) - fVar74 * fStack_bc;
    auVar88._8_4_ = fVar83;
    auVar88._12_4_ = fVar56;
    if (bVar13) {
      bVar13 = true;
      if ((-fVar60 < fVar68) && (fVar59 < fVar101)) {
        fVar55 = (float)uStack_158;
        fVar64 = (float)((ulong)uStack_158 >> 0x20);
        fVar44 = (float)local_160;
        fVar54 = (float)((ulong)local_160 >> 0x20);
        if (puVar26 == (undefined8 *)0x0) {
          local_c8 = lVar25;
          if (lVar17 == 0) {
            puVar26 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(1,&local_c8,0x40);
LAB_02eaa09c:
          }
          else {
            local_c0 = (float)uVar23;
            fStack_bc = (float)(uVar23 >> 0x20);
            if (*(ulong *)(lVar17 + 0x28) < uVar23) {
LAB_02eaa068:
              puVar26 = (undefined8 *)FUN_031cf3b4(lVar17,&local_c0);
              goto LAB_02eaa09c;
            }
            puVar26 = *(undefined8 **)(lVar17 + 0x38);
            if (*(ulong *)(lVar17 + 0x40) < uVar23 + (long)puVar26) goto LAB_02eaa068;
            *(ulong *)(lVar17 + 0x38) = uVar23 + (long)puVar26;
          }
          puVar15 = (undefined8 *)
                    (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                 (ulong)*(byte *)(*param_2 + 0x18) * 0x200 + 0x60))
                              (*param_2,puVar26,(ulong)uVar14,&local_c0);
          if ((0 < (int)uVar22) && (puVar15 != puVar26)) {
            if (uVar22 - 1 < 7) {
              puVar18 = puVar26;
            }
            else {
              puVar19 = puVar26;
              iVar104 = -(uVar22 & 0xfffffff8);
              do {
                *(undefined4 *)puVar19 = *(undefined4 *)puVar15;
                *(undefined4 *)((long)puVar19 + 4) = *(undefined4 *)((long)puVar15 + 4);
                *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar15 + 1);
                *(undefined4 *)((long)puVar19 + 0xc) = *(undefined4 *)((long)puVar15 + 0xc);
                *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar15 + 2);
                *(undefined4 *)((long)puVar19 + 0x14) = *(undefined4 *)((long)puVar15 + 0x14);
                *(undefined4 *)(puVar19 + 3) = *(undefined4 *)(puVar15 + 3);
                puVar1 = (undefined4 *)((long)puVar15 + 0x1c);
                puVar15 = puVar15 + 4;
                puVar18 = puVar19 + 4;
                iVar104 = iVar104 + 8;
                *(undefined4 *)((long)puVar19 + 0x1c) = *puVar1;
                puVar19 = puVar18;
              } while (iVar104 != 0);
            }
            if ((uVar2 & 7) != 0) {
              uVar20 = uVar22 & 7;
              do {
                uVar20 = uVar20 - 1;
                *(undefined4 *)puVar18 = *(undefined4 *)puVar15;
                puVar15 = (undefined8 *)((long)puVar15 + 4);
                puVar18 = (undefined8 *)((long)puVar18 + 4);
              } while (uVar20 != 0);
            }
          }
          fVar60 = *(float *)(param_2 + 0x1e);
          fVar68 = *(float *)((long)param_2 + 0xf4);
          fVar61 = *(float *)(param_2 + 0x1f);
          fVar44 = local_c0 + *(float *)(param_2[1] + 0x20);
          unaff_d9 = CONCAT44(fVar44,fVar44);
          fVar44 = fVar119 * fVar61 + fVar121 * fVar60 + fVar123 * fVar68;
          fVar54 = fVar83 * fVar61 + fVar78 * fVar60 + fVar31 * fVar68;
          fVar55 = fVar30 * fVar61 + fVar56 * fVar60 + fVar122 * fVar68;
          fVar64 = fVar61 * 0.0 + fVar122 * fVar60 + fVar68 * 0.0;
          unaff_s8 = fVar60 * fVar60 + fVar68 * fVar68 + fVar61 * fVar61;
        }
        uStack_158 = CONCAT44(fVar64,fVar55);
        local_160 = CONCAT44(fVar54,fVar44);
        puVar15 = (undefined8 *)((long)puVar26 + (long)(int)uVar14 * 0xc + -0xc);
        if (puVar26 <= puVar15) {
          auVar63._4_4_ = fVar54;
          auVar63._0_4_ = fVar44;
          auVar63._8_4_ = fVar55;
          auVar63._12_4_ = fVar64;
          auVar5._4_4_ = fVar54;
          auVar5._0_4_ = fVar44;
          auVar5._8_4_ = fVar55;
          auVar5._12_4_ = fVar64;
          auVar82 = NEON_ext(auVar63,auVar5,4,1);
          fVar61 = (float)*(undefined8 *)(param_1 + 0x160) - fVar118;
          fVar31 = *(float *)(param_1 + 0x170);
          fVar60 = *(float *)(param_1 + 0x174);
          fVar68 = *(float *)(param_1 + 0x178);
          fVar120 = *(float *)(param_1 + 0x180) - fVar31 * fVar61;
          fVar40 = *(float *)(param_1 + 0x184) -
                   fVar60 * ((float)((ulong)*(undefined8 *)(param_1 + 0x160) >> 0x20) - fVar118);
          fVar43 = *(float *)(param_1 + 0x188) - fVar68 * fVar61;
          fVar61 = *(float *)(param_1 + 0x110);
          fVar65 = *(float *)(param_1 + 0x114);
          fVar83 = *(float *)(param_1 + 0x118);
          fVar74 = *(float *)(param_1 + 0x120);
          fVar76 = *(float *)(param_1 + 0x124);
          fVar78 = *(float *)(param_1 + 0x128);
          auVar51 = *(undefined1 (*) [16])(param_1 + 0x130);
          auVar62 = *(undefined1 (*) [16])(param_1 + 0x140);
          fVar33 = auVar51._0_4_ * fVar68 + fVar61 * fVar31 + fVar74 * fVar60;
          fVar41 = auVar51._4_4_ * fVar68 + fVar65 * fVar31 + fVar76 * fVar60;
          fVar31 = auVar51._8_4_ * fVar68 + fVar83 * fVar31 + fVar78 * fVar60;
          do {
            fVar68 = fVar101 - (float)uVar70;
            fVar60 = (float)((ulong)uVar70 >> 0x20);
            uVar87 = CONCAT44(fVar101 - fVar60,fVar68);
            if (puVar26 <= puVar15) {
              auVar6._4_4_ = fVar123;
              auVar6._0_4_ = fVar121;
              auVar6._8_4_ = fVar119;
              auVar6._12_4_ = fVar122;
              auVar7._4_4_ = fVar123;
              auVar7._0_4_ = fVar121;
              auVar7._8_4_ = fVar119;
              auVar7._12_4_ = fVar122;
              auVar73 = NEON_ext(auVar6,auVar7,8,1);
              auVar92 = NEON_ext(auVar88,auVar88,8,1);
              auVar8._4_4_ = fVar122;
              auVar8._0_4_ = fVar56;
              auVar8._8_4_ = fVar30;
              auVar8._12_4_ = 0;
              auVar9._4_4_ = fVar122;
              auVar9._0_4_ = fVar56;
              auVar9._8_4_ = fVar30;
              auVar9._12_4_ = 0;
              auVar63 = NEON_ext(auVar8,auVar9,8,1);
              fVar80 = auVar88._4_4_;
              fVar67 = auVar73._0_4_;
              fVar69 = auVar92._0_4_;
              fVar75 = auVar88._0_4_;
              fVar53 = *(float *)(param_2 + 0x1c);
              fVar48 = *(float *)((long)param_2 + 0xe4);
              fVar66 = *(float *)(param_2 + 0x1d);
              fVar102 = (auVar62._0_4_ + auVar51._0_4_ * fVar43 + fVar61 * fVar120 + fVar74 * fVar40
                        ) - (float)uVar81;
              fVar107 = (auVar62._4_4_ + auVar51._4_4_ * fVar43 + fVar65 * fVar120 + fVar76 * fVar40
                        ) - (float)((ulong)uVar81 >> 0x20);
              fVar109 = (auVar62._8_4_ + auVar51._8_4_ * fVar43 + fVar83 * fVar120 + fVar78 * fVar40
                        ) - (float)uVar106;
              fVar77 = auVar63._0_4_;
              fVar105 = fVar31 * fVar67 + fVar33 * fVar121 + fVar41 * fVar123;
              fVar57 = fVar31 * fVar69 + fVar33 * fVar75 + fVar41 * fVar80;
              fVar58 = fVar31 * fVar77 + fVar33 * fVar56 + fVar41 * fVar122;
              auVar72._8_8_ = 0;
              auVar72._0_8_ = uVar87;
              puVar19 = puVar26;
              puVar18 = puVar15;
              do {
                fVar110 = *(float *)(puVar19 + 1);
                fVar115 = (float)*puVar19;
                fVar114 = (float)((ulong)*puVar19 >> 0x20);
                fVar84 = fVar105 * (fVar115 -
                                   (fVar67 * fVar109 + fVar121 * fVar102 + fVar123 * fVar107));
                fVar94 = fVar57 * (fVar114 -
                                  (fVar69 * fVar109 + fVar75 * fVar102 + fVar80 * fVar107));
                fVar95 = fVar58 * (fVar110 -
                                  (fVar77 * fVar109 + fVar56 * fVar102 + fVar122 * fVar107));
                fVar103 = (fVar84 + fVar94 + fVar95) - (float)unaff_d9;
                fVar85 = fVar103 - (float)uVar97;
                fVar84 = ((fVar84 + fVar94 + fVar95) - (float)((ulong)unaff_d9 >> 0x20)) - fVar98;
                if ((bool)(~(fVar99 < fVar85) & 1)) {
                  auVar117._0_4_ = fVar115 - *(float *)(param_2 + 8);
                  auVar117._4_4_ = fVar114 - *(float *)((long)param_2 + 0x44);
                  auVar117._8_4_ = fVar110 - *(float *)(param_2 + 9);
                  auVar117._12_4_ = fVar110 - *(float *)((long)param_2 + 0x4c);
                  auVar73 = NEON_ext(auVar117,auVar117,4,1);
                  auVar113._0_4_ = fVar44 * auVar73._0_4_ - auVar82._0_4_ * auVar117._0_4_;
                  auVar113._4_4_ = fVar54 * auVar73._4_4_ - auVar82._4_4_ * auVar117._4_4_;
                  auVar113._8_4_ = fVar55 * auVar117._0_4_ - fVar44 * auVar117._8_4_;
                  auVar113._12_4_ = fVar64 * auVar117._4_4_ - fVar54 * auVar117._12_4_;
                  auVar73 = NEON_ext(auVar113,auVar113,4,1);
                  fVar110 = fVar105 * (fVar67 * fVar66 + fVar121 * fVar53 + fVar123 * fVar48 +
                                      auVar73._0_4_);
                  fVar95 = fVar57 * (fVar69 * fVar66 + fVar75 * fVar53 + fVar80 * fVar48 +
                                    auVar73._4_4_);
                  fVar115 = fVar58 * (fVar77 * fVar66 + fVar56 * fVar53 + fVar122 * fVar48 +
                                     auVar113._0_4_);
                  fVar94 = fVar110 + fVar95 + fVar115;
                  fVar115 = fVar110 + fVar95 + fVar115;
                  fVar110 = unaff_s8 *
                            SQRT(auVar117._0_4_ * auVar117._0_4_ + auVar117._4_4_ * auVar117._4_4_ +
                                 auVar117._8_4_ * auVar117._8_4_);
                  if (fVar68 * 0.5 * fVar68 * fVar110 < fVar85 + fVar68 * fVar94) goto LAB_02eaa898;
                  if (!(bool)(~(fVar103 < fVar79) & 1)) goto LAB_02eaa218;
                  uVar111 = NEON_fmov(0x40800000,4);
                  puVar19 = (undefined8 *)((long)puVar19 + 0xc);
                  fVar110 = SQRT(fVar85 * fVar110 * (float)uVar111 + fVar94 * fVar94);
                  iVar104 = -(uint)(fVar110 - fVar94 == 0.0);
                  iVar108 = -(uint)(-fVar110 - fVar115 == 0.0);
                  uVar87 = CONCAT44((fVar84 + fVar84) / (-fVar110 - fVar115),
                                    (fVar85 + fVar85) / (fVar110 - fVar94)) &
                           CONCAT17(~(byte)((uint)iVar108 >> 0x18),
                                    CONCAT16(~(byte)((uint)iVar108 >> 0x10),
                                             CONCAT15(~(byte)((uint)iVar108 >> 8),
                                                      CONCAT14(~(byte)iVar108,
                                                               CONCAT13(~(byte)((uint)iVar104 >>
                                                                               0x18),
                                                                        CONCAT12(~(byte)((uint)
                                                  iVar104 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar104 >> 8),
                                                           ~(byte)iVar104)))))));
                  uVar86 = (undefined4)uVar87;
                  uVar111 = CONCAT44(uVar86,uVar86);
                  uVar86 = (undefined4)(uVar87 >> 0x20);
                  uVar21 = CONCAT44(uVar86,uVar86);
                  uVar112 = NEON_fmax(uVar111,uVar21,4);
                  uVar87 = NEON_fmin(uVar111,uVar21,4);
                  auVar72._0_8_ =
                       NEON_fmin(auVar72._0_8_,
                                 uVar87 ^ (uVar87 ^ uVar112) &
                                          ~CONCAT44(-(uint)(0.0 < (float)(uVar87 >> 0x20)),
                                                    -(uint)(0.0 < (float)uVar87)),4);
                  puVar15 = puVar18;
                }
                else {
LAB_02eaa898:
                  uVar111 = *puVar19;
                  fStack_b8 = *(float *)(puVar19 + 1);
                  local_c0 = (float)uVar111;
                  fStack_bc = (float)((ulong)uVar111 >> 0x20);
                  uVar21 = *puVar18;
                  *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar18 + 1);
                  *puVar19 = uVar21;
                  *(float *)(puVar18 + 1) = fStack_b8;
                  puVar15 = (undefined8 *)((long)puVar18 + -0xc);
                  *puVar18 = uVar111;
                }
                uVar87 = auVar72._0_8_;
                puVar18 = puVar15;
              } while (puVar19 <= puVar15);
            }
            fVar30 = (float)uVar87 + (float)uVar70;
            fVar60 = (float)(uVar87 >> 0x20) + fVar60;
            uVar70 = CONCAT44(fVar60,fVar30);
            local_c8 = CONCAT44(fVar60 * *(float *)((long)param_2 + 0x114),
                                fVar30 * *(float *)((long)param_2 + 0x114));
            FUN_031ccd10(&local_c0,pauVar24,plVar3,&local_c8);
            auVar12._8_4_ = fStack_b8;
            auVar12._0_8_ = CONCAT44(fStack_bc,local_c0);
            auVar12._12_4_ = fStack_b4;
            auVar88 = NEON_ext(auVar12,auVar12,8,1);
            auVar73 = *(undefined1 (*) [16])(param_2 + 8);
            fVar66 = fStack_bc + fStack_bc;
            fVar67 = fStack_b8 + fStack_b8;
            auVar92 = NEON_ext(auVar73,auVar73,8,1);
            fVar80 = (local_c0 + local_c0) * local_c0;
            uVar81 = NEON_ext(auVar73._0_8_,auVar92._0_8_,4,1);
            uVar106 = NEON_ext(CONCAT44(fStack_bc,local_c0),auVar88._0_8_,4,1);
            fVar105 = (local_c0 + local_c0) * fStack_b4;
            fVar75 = auVar88._4_4_ * auVar88._4_4_;
            fVar57 = (float)param_2[4];
            fVar58 = (float)((ulong)param_2[4] >> 0x20);
            fVar77 = (float)param_2[5];
            fVar102 = (float)((ulong)param_2[5] >> 0x20);
            fVar69 = fVar75 + -0.5;
            fVar75 = fVar75 + -0.5;
            fVar119 = 1.0 - fStack_b8 * fVar67;
            fVar48 = (float)((ulong)local_c8 >> 0x20);
            fVar121 = fVar119 - fVar66 * fStack_bc;
            auVar88._0_4_ = fVar66 * local_c0 - fVar67 * fStack_b4;
            fVar30 = auVar73._0_4_;
            fVar60 = auVar73._4_4_;
            fVar68 = auVar73._8_4_;
            auVar93._0_4_ = local_c0 * (float)uVar81 - (float)uVar106 * fVar30;
            auVar93._4_4_ =
                 fStack_bc * (float)((ulong)uVar81 >> 0x20) -
                 (float)((ulong)uVar106 >> 0x20) * fVar60;
            auVar93._8_4_ = fStack_b8 * fVar30 - local_c0 * fVar68;
            auVar93._12_4_ = fStack_b4 * fVar60 - fStack_bc * auVar73._12_4_;
            fVar56 = local_c0 * fVar30 + fStack_bc * fVar60 + fStack_b8 * fVar68;
            fVar53 = local_c0 * fVar30 + fStack_bc * fVar60 + fStack_b8 * fVar68;
            auVar88._4_4_ = fVar119 - fVar80;
            auVar92 = NEON_ext(auVar93,auVar93,4,1);
            fVar123 = fVar66 * local_c0 + fVar67 * fStack_b4;
            fVar119 = fVar67 * local_c0 - fVar66 * fStack_b4;
            fVar122 = fVar67 * fStack_bc - fVar105;
            fVar30 = fVar30 * fVar69 + local_c0 * fVar56 + auVar92._0_4_ * fStack_b4;
            fVar60 = fVar60 * fVar75 + fStack_bc * fVar53 + auVar92._4_4_ * fStack_b4;
            fVar68 = fVar68 * fVar69 + fStack_b8 * fVar56 + auVar93._0_4_ * fStack_b4;
            fVar53 = auVar73._12_4_ * fVar75 + fStack_b4 * fVar53 + fStack_b4 * 0.0;
            fVar56 = fVar67 * local_c0 + fVar66 * fStack_b4;
            uVar81 = CONCAT44((fVar58 + fVar48 * (*(float *)((long)param_2 + 0x34) - fVar58)) -
                              (fVar60 + fVar60),
                              (fVar57 + (float)local_c8 * (*(float *)(param_2 + 6) - fVar57)) -
                              (fVar30 + fVar30));
            uVar106 = CONCAT44((fVar102 + fVar48 * (*(float *)((long)param_2 + 0x3c) - fVar102)) -
                               (fVar53 + fVar53),
                               (fVar77 + (float)local_c8 * (*(float *)(param_2 + 7) - fVar77)) -
                               (fVar68 + fVar68));
            auVar88._8_4_ = fVar67 * fStack_bc + fVar105;
            fVar30 = (1.0 - fVar80) - fVar66 * fStack_bc;
            auVar88._12_4_ = fVar56;
          } while (puVar26 <= puVar15);
        }
LAB_02eaa218:
        bVar13 = (float)uVar100 < (float)uVar70 - fVar59;
      }
    }
    else {
      bVar13 = false;
    }
    fStack_f8 = auVar88._8_4_;
    fStack_f4 = auVar88._12_4_;
    local_100 = auVar88._0_4_;
    fStack_fc = auVar88._4_4_;
    *(ulong *)(param_1 + 0x118) = CONCAT44(fVar122,fVar119);
    *(ulong *)(param_1 + 0x110) = CONCAT44(fVar123,fVar121);
    *(long *)(param_1 + 0x128) = auVar88._8_8_;
    *(long *)(param_1 + 0x120) = auVar88._0_8_;
    *(ulong *)(param_1 + 0x138) = (ulong)(uint)fVar30;
    *(ulong *)(param_1 + 0x130) = CONCAT44(fVar122,fVar56);
    *(undefined8 *)(param_1 + 0x148) = uVar106;
    *(undefined8 *)(param_1 + 0x140) = uVar81;
    FUN_008273cc(param_1,*param_2,param_2[1],param_1 + 0x110,1,param_3,param_1 + 0x160);
    auVar71._4_4_ = fVar122;
    auVar71._0_4_ = fVar56;
    auVar71._8_4_ = fVar30;
    auVar71._12_4_ = 0;
    fVar31 = *(float *)(param_1 + 0x170);
    fVar44 = *(float *)(param_1 + 0x174);
    fVar54 = *(float *)(param_1 + 0x178);
    auVar62._0_4_ = fVar56 * fVar54 + fVar121 * fVar31 + local_100 * fVar44;
    auVar62._4_4_ = fVar122 * fVar54 + fVar123 * fVar31 + fStack_fc * fVar44;
    auVar62._8_4_ = fVar30 * fVar54 + fVar119 * fVar31 + fStack_f8 * fVar44;
    auVar62._12_4_ = fVar54 * 0.0 + fVar122 * fVar31 + fStack_f4 * fVar44;
    fVar30 = (float)*(undefined8 *)(param_1 + 0x160) - fVar49;
    fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x160) >> 0x20) - fVar49;
    if (!(bool)(~(fVar30 < fVar79) & 1)) {
      auVar91._8_8_ = uVar106;
      auVar91._0_8_ = uVar81;
      uVar81 = auVar62._8_8_;
      if (ABS(fVar30 - fVar79) <= fVar28) {
LAB_02eaaa60:
        fVar38 = fVar30;
      }
      else {
        iVar104 = 10;
        uVar100 = uVar70;
        fVar44 = fVar30;
        fVar54 = fVar31;
        do {
          uVar70 = NEON_fminnm(CONCAT44(((float)((ulong)uVar96 >> 0x20) - fVar42) /
                                        (fVar54 - fVar42),(fVar79 - fVar38) / (fVar44 - fVar38)),
                               0x3f6666663f666666,4);
          uVar70 = NEON_fmax(uVar70,0x3dcccccd3dcccccd,4);
          fVar30 = (float)((ulong)uVar50 >> 0x20);
          uVar70 = NEON_fmax(CONCAT44(((float)((ulong)uVar100 >> 0x20) - fVar30) *
                                      (float)((ulong)uVar70 >> 0x20) + fVar30,
                                      ((float)uVar100 - (float)uVar50) * (float)uVar70 +
                                      (float)uVar50),CONCAT44(fVar29,fVar29),4);
          fVar64 = (float)uVar70;
          local_c8 = CONCAT44((float)((ulong)uVar70 >> 0x20) * *(float *)((long)param_2 + 0x114),
                              fVar64 * *(float *)((long)param_2 + 0x114));
          FUN_031ccd10(&local_c0,pauVar24,plVar3,&local_c8);
          auVar10._8_4_ = fStack_b8;
          auVar10._0_8_ = CONCAT44(fStack_bc,local_c0);
          auVar10._12_4_ = fStack_b4;
          auVar82 = NEON_ext(auVar10,auVar10,8,1);
          auVar51 = *(undefined1 (*) [16])(param_2 + 8);
          fVar68 = fStack_bc + fStack_bc;
          fVar99 = fStack_b8 + fStack_b8;
          auVar88 = NEON_ext(auVar51,auVar51,8,1);
          fVar83 = (local_c0 + local_c0) * local_c0;
          uVar106 = NEON_ext(auVar51._0_8_,auVar88._0_8_,4,1);
          uVar111 = NEON_ext(CONCAT44(fStack_bc,local_c0),auVar82._0_8_,4,1);
          fStack_f8 = (local_c0 + local_c0) * fStack_b4;
          fVar65 = auVar82._4_4_ * auVar82._4_4_;
          fVar74 = (float)param_2[4];
          fVar76 = (float)((ulong)param_2[4] >> 0x20);
          fVar78 = (float)param_2[5];
          fVar98 = (float)((ulong)param_2[5] >> 0x20);
          fVar61 = fVar65 + -0.5;
          fVar65 = fVar65 + -0.5;
          fStack_fc = 1.0 - fStack_b8 * fVar99;
          fVar30 = auVar51._0_4_;
          fVar31 = auVar51._4_4_;
          fVar60 = auVar51._8_4_;
          fVar56 = (float)((ulong)local_c8 >> 0x20);
          fVar121 = fStack_fc - fVar68 * fStack_bc;
          fStack_fc = fStack_fc - fVar83;
          auVar89._0_4_ = local_c0 * (float)uVar106 - (float)uVar111 * fVar30;
          auVar89._4_4_ =
               fStack_bc * (float)((ulong)uVar106 >> 0x20) -
               (float)((ulong)uVar111 >> 0x20) * fVar31;
          auVar89._8_4_ = fStack_b8 * fVar30 - local_c0 * fVar60;
          auVar89._12_4_ = fStack_b4 * fVar31 - fStack_bc * auVar51._12_4_;
          fVar123 = fVar68 * local_c0 + fVar99 * fStack_b4;
          local_100 = fVar68 * local_c0 - fVar99 * fStack_b4;
          fVar55 = local_c0 * fVar30 + fStack_bc * fVar31 + fStack_b8 * fVar60;
          fVar59 = local_c0 * fVar30 + fStack_bc * fVar31 + fStack_b8 * fVar60;
          auVar82 = NEON_ext(auVar89,auVar89,4,1);
          fVar119 = fVar99 * local_c0 - fVar68 * fStack_b4;
          fVar122 = fVar99 * fStack_bc - fStack_f8;
          fVar30 = fVar30 * fVar61 + local_c0 * fVar55 + auVar82._0_4_ * fStack_b4;
          fVar31 = fVar31 * fVar65 + fStack_bc * fVar59 + auVar82._4_4_ * fStack_b4;
          fVar55 = fVar60 * fVar61 + fStack_b8 * fVar55 + auVar89._0_4_ * fStack_b4;
          fVar59 = auVar51._12_4_ * fVar65 + fStack_b4 * fVar59 + fStack_b4 * 0.0;
          auVar52._0_8_ =
               CONCAT44((fVar76 + fVar56 * (*(float *)((long)param_2 + 0x34) - fVar76)) -
                        (fVar31 + fVar31),
                        (fVar74 + (float)local_c8 * (*(float *)(param_2 + 6) - fVar74)) -
                        (fVar30 + fVar30));
          auVar52._8_4_ =
               (fVar78 + (float)local_c8 * (*(float *)(param_2 + 7) - fVar78)) - (fVar55 + fVar55);
          auVar52._12_4_ =
               (fVar98 + fVar56 * (*(float *)((long)param_2 + 0x3c) - fVar98)) - (fVar59 + fVar59);
          fStack_f8 = fVar99 * fStack_bc + fStack_f8;
          fStack_f4 = fVar99 * local_c0 + fVar68 * fStack_b4;
          fVar55 = (1.0 - fVar83) - fVar68 * fStack_bc;
          *(float *)(param_1 + 0x118) = fVar119;
          *(float *)(param_1 + 0x11c) = fVar122;
          *(float *)(param_1 + 0x110) = fVar121;
          *(float *)(param_1 + 0x114) = fVar123;
          *(ulong *)(param_1 + 0x128) = CONCAT44(fStack_f4,fStack_f8);
          *(ulong *)(param_1 + 0x120) = CONCAT44(fStack_fc,local_100);
          *(ulong *)(param_1 + 0x138) = (ulong)(uint)fVar55;
          *(ulong *)(param_1 + 0x130) = CONCAT44(fVar122,fStack_f4);
          uVar106 = auVar52._8_8_;
          *(undefined8 *)(param_1 + 0x148) = uVar106;
          *(undefined8 *)(param_1 + 0x140) = auVar52._0_8_;
          FUN_008273cc(param_1,*param_2,param_2[1],param_1 + 0x110,1,param_3,param_1 + 0x160);
          fVar30 = (float)*(undefined8 *)(param_1 + 0x160) - fVar49;
          fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x160) >> 0x20) - fVar49;
          if (ABS(fVar30 - fVar79) < fVar28) {
            auVar71._4_4_ = fVar122;
            auVar71._0_4_ = fStack_f4;
            auVar71._8_4_ = fVar55;
            auVar71._12_4_ = 0;
            auVar91._8_8_ = uVar106;
            auVar91._0_8_ = auVar52._0_8_;
            fVar38 = fVar30;
            goto LAB_02eaaa64;
          }
          if ((bool)(~(fVar30 < fVar79) & 1)) {
            auVar71._4_4_ = fVar122;
            auVar71._0_4_ = fStack_f4;
            auVar71._8_4_ = fVar55;
            auVar71._12_4_ = 0;
            uVar50 = uVar70;
            uVar70 = uVar100;
            fVar38 = fVar30;
            fVar42 = fVar31;
            fVar30 = fVar44;
            fVar31 = fVar54;
          }
          else {
            auVar71._4_4_ = fVar122;
            auVar71._0_4_ = fStack_f4;
            auVar71._8_4_ = fVar55;
            auVar71._12_4_ = 0;
            if (fVar64 == fVar29) goto LAB_02eaaa5c;
          }
          iVar104 = iVar104 + -1;
          uVar100 = uVar70;
          fVar44 = fVar30;
          fVar54 = fVar31;
        } while (iVar104 != 0);
        if (!(bool)(~(fVar64 == (float)uVar70) & 1)) {
LAB_02eaaa5c:
          auVar91._8_8_ = uVar106;
          auVar91._0_8_ = auVar52._0_8_;
          goto LAB_02eaaa60;
        }
        local_c8 = CONCAT44((float)((ulong)uVar70 >> 0x20) * *(float *)((long)param_2 + 0x114),
                            (float)uVar70 * *(float *)((long)param_2 + 0x114));
        FUN_031ccd10(&local_c0,pauVar24,plVar3,&local_c8);
        auVar11._8_4_ = fStack_b8;
        auVar11._0_8_ = CONCAT44(fStack_bc,local_c0);
        auVar11._12_4_ = fStack_b4;
        auVar82 = NEON_ext(auVar11,auVar11,8,1);
        auVar51 = *(undefined1 (*) [16])(param_2 + 8);
        fVar64 = fStack_bc + fStack_bc;
        fVar56 = fStack_b8 + fStack_b8;
        auVar88 = NEON_ext(auVar51,auVar51,8,1);
        fVar79 = (local_c0 + local_c0) * local_c0;
        uVar50 = NEON_ext(auVar51._0_8_,auVar88._0_8_,4,1);
        uVar100 = NEON_ext(CONCAT44(fStack_bc,local_c0),auVar82._0_8_,4,1);
        fStack_f8 = (local_c0 + local_c0) * fStack_b4;
        fVar68 = auVar82._4_4_ * auVar82._4_4_;
        fVar99 = (float)param_2[4];
        fVar61 = (float)((ulong)param_2[4] >> 0x20);
        fVar65 = (float)param_2[5];
        fVar83 = (float)((ulong)param_2[5] >> 0x20);
        fVar60 = fVar68 + -0.5;
        fVar68 = fVar68 + -0.5;
        fStack_fc = 1.0 - fStack_b8 * fVar56;
        fVar38 = auVar51._0_4_;
        fVar42 = auVar51._4_4_;
        fVar59 = auVar51._8_4_;
        fVar55 = (float)((ulong)local_c8 >> 0x20);
        fVar121 = fStack_fc - fVar64 * fStack_bc;
        fStack_fc = fStack_fc - fVar79;
        auVar90._0_4_ = local_c0 * (float)uVar50 - (float)uVar100 * fVar38;
        auVar90._4_4_ =
             fStack_bc * (float)((ulong)uVar50 >> 0x20) - (float)((ulong)uVar100 >> 0x20) * fVar42;
        auVar90._8_4_ = fStack_b8 * fVar38 - local_c0 * fVar59;
        auVar90._12_4_ = fStack_b4 * fVar42 - fStack_bc * auVar51._12_4_;
        fVar123 = fVar64 * local_c0 + fVar56 * fStack_b4;
        local_100 = fVar64 * local_c0 - fVar56 * fStack_b4;
        fVar44 = local_c0 * fVar38 + fStack_bc * fVar42 + fStack_b8 * fVar59;
        fVar54 = local_c0 * fVar38 + fStack_bc * fVar42 + fStack_b8 * fVar59;
        auVar82 = NEON_ext(auVar90,auVar90,4,1);
        fVar119 = fVar56 * local_c0 - fVar64 * fStack_b4;
        fVar122 = fVar56 * fStack_bc - fStack_f8;
        fVar38 = fVar38 * fVar60 + local_c0 * fVar44 + auVar82._0_4_ * fStack_b4;
        fVar42 = fVar42 * fVar68 + fStack_bc * fVar54 + auVar82._4_4_ * fStack_b4;
        fVar44 = fVar59 * fVar60 + fStack_b8 * fVar44 + auVar90._0_4_ * fStack_b4;
        fVar54 = auVar51._12_4_ * fVar68 + fStack_b4 * fVar54 + fStack_b4 * 0.0;
        auVar91._0_4_ =
             (fVar99 + (float)local_c8 * (*(float *)(param_2 + 6) - fVar99)) - (fVar38 + fVar38);
        auVar91._4_4_ =
             (fVar61 + fVar55 * (*(float *)((long)param_2 + 0x34) - fVar61)) - (fVar42 + fVar42);
        auVar91._8_4_ =
             (fVar65 + (float)local_c8 * (*(float *)(param_2 + 7) - fVar65)) - (fVar44 + fVar44);
        auVar91._12_4_ =
             (fVar83 + fVar55 * (*(float *)((long)param_2 + 0x3c) - fVar83)) - (fVar54 + fVar54);
        fStack_f8 = fVar56 * fStack_bc + fStack_f8;
        fStack_f4 = fVar56 * local_c0 + fVar64 * fStack_b4;
        auVar71._4_4_ = fVar122;
        auVar71._0_4_ = fStack_f4;
        auVar71._8_4_ = (1.0 - fVar79) - fVar64 * fStack_bc;
        auVar71._12_4_ = 0;
        fVar38 = fVar30;
      }
LAB_02eaaa64:
      fVar30 = *(float *)(param_1 + 0x170);
      fVar42 = *(float *)(param_1 + 0x174);
      fVar44 = *(float *)(param_1 + 0x178);
      fVar59 = *(float *)(param_1 + 0x180) - fVar116 * fVar30;
      fVar64 = *(float *)(param_1 + 0x184) - fVar116 * fVar42;
      fVar56 = *(float *)(param_1 + 0x188) - fVar116 * fVar44;
      fVar54 = auVar71._0_4_ * fVar44 + fVar121 * fVar30 + local_100 * fVar42;
      fVar55 = auVar71._4_4_ * fVar44 + fVar123 * fVar30 + fStack_fc * fVar42;
      auVar36._0_8_ = CONCAT44(fVar55,fVar54);
      auVar36._8_4_ = auVar71._8_4_ * fVar44 + fVar119 * fVar30 + fStack_f8 * fVar42;
      auVar36._12_4_ = auVar71._12_4_ * fVar44 + fVar122 * fVar30 + fStack_f4 * fVar42;
      fVar30 = auVar91._0_4_ + auVar71._0_4_ * fVar56 + fVar121 * fVar59 + local_100 * fVar64;
      fVar42 = auVar91._4_4_ + auVar71._4_4_ * fVar56 + fVar123 * fVar59 + fStack_fc * fVar64;
      auVar45._0_8_ = CONCAT44(fVar42,fVar30);
      auVar45._8_4_ = auVar91._8_4_ + auVar71._8_4_ * fVar56 + fVar119 * fVar59 + fStack_f8 * fVar64
      ;
      auVar45._12_4_ =
           auVar91._12_4_ + auVar71._12_4_ * fVar56 + fVar122 * fVar59 + fStack_f4 * fVar64;
      *(long *)(param_4 + 0x18) = auVar45._8_8_;
      *(undefined8 *)(param_4 + 0x10) = auVar45._0_8_;
      *(long *)(param_4 + 0x28) = auVar36._8_8_;
      *(undefined8 *)(param_4 + 0x20) = auVar36._0_8_;
      if ((char)param_2[0x26] == '\0') {
        fVar44 = (float)uVar70 * *(float *)((long)param_2 + 0x114);
        fVar59 = (float)((ulong)uVar70 >> 0x20) * *(float *)((long)param_2 + 0x114);
        auVar46._0_4_ =
             fVar30 - (*(float *)(param_2 + 4) +
                      (*(float *)(param_2 + 6) - *(float *)(param_2 + 4)) * fVar44);
        auVar46._4_4_ =
             fVar42 - (*(float *)((long)param_2 + 0x24) +
                      (*(float *)((long)param_2 + 0x34) - *(float *)((long)param_2 + 0x24)) * fVar59
                      );
        auVar46._8_4_ =
             auVar45._8_4_ -
             (*(float *)(param_2 + 5) + (*(float *)(param_2 + 7) - *(float *)(param_2 + 5)) * fVar44
             );
        auVar46._12_4_ =
             auVar45._12_4_ -
             (*(float *)((long)param_2 + 0x2c) +
             (*(float *)((long)param_2 + 0x3c) - *(float *)((long)param_2 + 0x2c)) * fVar59);
        auVar73 = NEON_ext(auVar46,auVar46,4,1);
        auVar82 = *(undefined1 (*) [16])(param_2 + 0x1c);
        auVar51 = *(undefined1 (*) [16])(param_2 + 0x1e);
        auVar88 = NEON_ext(auVar51,auVar51,8,1);
        uVar50 = NEON_ext(auVar51._0_8_,auVar88._0_8_,4,1);
        auVar47._0_4_ = auVar51._0_4_ * auVar73._0_4_ - (float)uVar50 * auVar46._0_4_;
        auVar47._4_4_ =
             auVar51._4_4_ * auVar73._4_4_ - (float)((ulong)uVar50 >> 0x20) * auVar46._4_4_;
        auVar47._8_4_ = auVar51._8_4_ * auVar46._0_4_ - auVar51._0_4_ * auVar46._8_4_;
        auVar47._12_4_ = auVar51._12_4_ * auVar46._4_4_ - auVar51._4_4_ * auVar46._12_4_;
        auVar51 = NEON_ext(auVar47,auVar47,4,1);
        auVar37._0_4_ = fVar54 * (auVar82._0_4_ + auVar51._0_4_);
        auVar37._4_4_ = fVar55 * (auVar82._4_4_ + auVar51._4_4_);
        auVar37._8_4_ = auVar36._8_4_ * (auVar82._8_4_ + auVar47._0_4_);
        auVar37._12_4_ = auVar36._12_4_ * (auVar82._12_4_ + 0.0);
        auVar51 = NEON_ext(auVar37,auVar37,8,1);
        if (0.0 <= auVar37._0_4_ + auVar37._4_4_ + auVar51._0_4_) {
          auVar62._8_8_ = uVar81;
          uVar96 = NEON_fmin(uVar96,CONCAT44(*(float *)(param_2 + 0x24) + fVar31,
                                             *(float *)(param_2 + 0x24) + fVar38),4);
          uVar97 = NEON_fmin(uVar97,CONCAT44(*(float *)((long)param_2 + 0x124) + fVar31,
                                             *(float *)((long)param_2 + 0x124) + fVar38),4);
          fVar30 = fVar38;
          goto LAB_02ea9dd4;
        }
      }
      *param_4 = 1;
      uVar27 = uVar70;
      break;
    }
  } while( true );
  if (puVar26 != (undefined8 *)0x0) {
    if (lVar17 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar26,lVar25);
    }
    else {
      if ((*(ulong *)(lVar17 + 0x28) < uVar23) ||
         (*(long *)(lVar17 + 0x38) != uVar23 + (long)puVar26)) {
        if (*(ulong *)(lVar17 + 0x28) < uVar23 + 0x40) {
          *(int *)(*(long *)(lVar17 + 0x30) + 0x20) = *(int *)(*(long *)(lVar17 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar17 + 0x10) + 0x18))
                    (*(long **)(lVar17 + 0x10),(long)puVar26 - (long)*(int *)((long)puVar26 + -4),
                     uVar23 + 0x44);
          goto LAB_02eaac24;
        }
        if (*(long *)(lVar17 + 0x38) != uVar23 + (long)puVar26) {
          FUN_031cf778(lVar17,puVar26);
          goto LAB_02eaac24;
        }
        *(undefined8 **)(lVar17 + 0x38) = puVar26;
      }
      else {
        *(undefined8 **)(lVar17 + 0x38) = puVar26;
        if (*(undefined8 **)(lVar17 + 0x48) != puVar26) goto LAB_02eaac24;
      }
      FUN_031cf578();
    }
  }
LAB_02eaac24:
  *(ulong *)(param_4 + 4) = CONCAT44(fVar38,(int)uVar27);
  return;
}


