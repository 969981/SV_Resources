/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d22188; name: FUN_00d22188
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00d22188(undefined1 param_1 [16],long param_2,long *param_3,undefined8 param_4,uint param_5)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [12];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  double *pdVar25;
  code *pcVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  ulong *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar41;
  float fVar43;
  int iVar35;
  undefined8 uVar45;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar42;
  int iVar44;
  float fVar46;
  int iVar47;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar48;
  float fVar49;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar74;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined8 uVar101;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
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
  undefined1 auStack_110 [16];
  double local_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  
  lVar28 = *(long *)(param_2 + 0x10);
  uVar45 = param_1._8_8_;
  auVar40._0_8_ = param_1._0_8_;
  if (((*PTR_DAT_047daf58 & 1) == 0) &&
     (iVar35 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar35 != 0)) {
    FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf58);
  }
  uVar16 = _UNK_03cac218;
  uVar15 = _DAT_03cac210;
  uVar14 = _UNK_03cabb08;
  uVar13 = _DAT_03cabb00;
  uVar12 = _UNK_03cab3a8;
  uVar11 = _DAT_03cab3a0;
  puVar30 = (ulong *)*param_3;
  puVar1 = (ulong *)param_3[1];
  if (puVar30 == puVar1) {
    uVar27 = 0;
  }
  else {
    auVar36 = NEON_fmov(0x3f800000,4);
    lVar28 = *(long *)(lVar28 + 0xc0);
    auVar37 = NEON_fmov(0x40800000,4);
    uVar27 = 0;
    plVar17 = (long *)PTR_DAT_047daf60;
    if (lVar28 != 0) {
      plVar17 = (long *)(lVar28 + 0x70);
    }
    do {
      lVar28 = *(long *)(*(long *)(param_2 + 0x18) + 0x38) + (*puVar30 & 0xffffff) * 0xc0;
      if (*(short *)(lVar28 + 0x98) != -1) {
        lVar29 = *plVar17;
        puVar22 = (undefined8 *)FUN_00c4c40c(lVar29);
        auVar92 = *(undefined1 (*) [16])(lVar29 + 0x3e0);
        auVar80 = *(undefined1 (*) [16])(lVar29 + 0x3f0);
        auVar93 = *(undefined1 (*) [16])(lVar29 + 0x400);
        fVar6 = *(float *)(lVar29 + 0x410);
        fVar7 = *(float *)(lVar29 + 0x414);
        fVar8 = *(float *)(lVar29 + 0x418);
        fVar9 = *(float *)(lVar29 + 0x41c);
        fVar79 = *(float *)(puVar22 + 4);
        fVar88 = *(float *)((long)puVar22 + 0x24);
        fVar87 = *(float *)(puVar22 + 5);
        fVar49 = *(float *)((long)puVar22 + 0x2c);
        fVar55 = auVar92._0_4_;
        fVar61 = auVar92._4_4_;
        fVar62 = auVar92._8_4_;
        fVar63 = auVar92._12_4_;
        fVar48 = auVar80._0_4_;
        fVar52 = auVar80._4_4_;
        fVar53 = auVar80._8_4_;
        fVar54 = auVar80._12_4_;
        fVar66 = (float)puVar22[1];
        fVar73 = (float)((ulong)puVar22[1] >> 0x20);
        fVar64 = (float)*puVar22;
        fVar65 = (float)((ulong)*puVar22 >> 0x20);
        fVar67 = *(float *)(puVar22 + 2);
        fVar74 = *(float *)((long)puVar22 + 0x14);
        fVar77 = *(float *)(puVar22 + 3);
        fVar78 = *(float *)((long)puVar22 + 0x1c);
        fVar34 = auVar93._0_4_;
        fVar41 = auVar93._4_4_;
        fVar43 = auVar93._8_4_;
        fVar46 = auVar93._12_4_;
        fVar68 = fVar55 * fVar64 + fVar48 * fVar65 + fVar34 * fVar66 + fVar6 * fVar73;
        fVar71 = fVar61 * fVar64 + fVar52 * fVar65 + fVar41 * fVar66 + fVar7 * fVar73;
        fVar72 = fVar62 * fVar64 + fVar53 * fVar65 + fVar43 * fVar66 + fVar8 * fVar73;
        fVar73 = fVar63 * fVar64 + fVar54 * fVar65 + fVar46 * fVar66 + fVar9 * fVar73;
        fVar64 = fVar55 * fVar67 + fVar48 * fVar74 + fVar34 * fVar77 + fVar6 * fVar78;
        fVar65 = fVar61 * fVar67 + fVar52 * fVar74 + fVar41 * fVar77 + fVar7 * fVar78;
        fVar66 = fVar62 * fVar67 + fVar53 * fVar74 + fVar43 * fVar77 + fVar8 * fVar78;
        fVar67 = fVar63 * fVar67 + fVar54 * fVar74 + fVar46 * fVar77 + fVar9 * fVar78;
        fVar74 = fVar55 * fVar79 + fVar48 * fVar88 + fVar34 * fVar87 + fVar6 * fVar49;
        fVar77 = fVar61 * fVar79 + fVar52 * fVar88 + fVar41 * fVar87 + fVar7 * fVar49;
        fVar78 = fVar62 * fVar79 + fVar53 * fVar88 + fVar43 * fVar87 + fVar8 * fVar49;
        fVar79 = fVar63 * fVar79 + fVar54 * fVar88 + fVar46 * fVar87 + fVar9 * fVar49;
        auVar80._0_4_ = fVar68 * fVar68 + fVar71 * fVar71;
        auVar80._4_4_ = fVar72 * fVar72 + fVar73 * fVar73;
        auVar80._8_4_ = fVar68 * fVar68 + fVar71 * fVar71;
        auVar80._12_4_ = fVar72 * fVar72 + fVar73 * fVar73;
        auVar80 = NEON_ext(auVar80,auVar80,4,1);
        auVar92._0_4_ = fVar64 * fVar64 + fVar65 * fVar65;
        auVar92._4_4_ = fVar66 * fVar66 + fVar67 * fVar67;
        auVar92._8_4_ = fVar64 * fVar64 + fVar65 * fVar65;
        auVar92._12_4_ = fVar66 * fVar66 + fVar67 * fVar67;
        fVar79 = fVar79 * fVar79;
        fVar88 = SQRT(auVar80._0_4_ + auVar80._4_4_);
        auVar80 = NEON_ext(auVar92,auVar92,4,1);
        auVar93._0_4_ = fVar74 * fVar74 + fVar77 * fVar77;
        auVar93._4_4_ = fVar78 * fVar78 + fVar79;
        auVar93._8_4_ = fVar74 * fVar74 + fVar77 * fVar77;
        auVar93._12_4_ = fVar78 * fVar78 + fVar79;
        fVar79 = SQRT(auVar80._0_4_ + auVar80._4_4_);
        auVar80 = NEON_ext(auVar93,auVar93,4,1);
        bVar18 = false;
        bVar20 = false;
        if (1.1920929e-07 < fVar88) {
          bVar18 = false;
          bVar20 = true;
          if (!NAN(fVar79)) {
            bVar18 = fVar79 == 1.1920929e-07;
            bVar20 = 1.1920929e-07 <= fVar79;
          }
        }
        fVar87 = SQRT(auVar80._0_4_ + auVar80._4_4_);
        bVar19 = false;
        bVar21 = false;
        if (bVar20 && !bVar18) {
          bVar19 = false;
          bVar21 = true;
          if (!NAN(fVar87)) {
            bVar19 = fVar87 == 1.1920929e-07;
            bVar21 = 1.1920929e-07 <= fVar87;
          }
        }
        if (bVar21 && !bVar19) {
          uVar101 = puVar22[7];
          auVar84._0_4_ = fVar68 / fVar88;
          auVar84._4_4_ = fVar71 / fVar88;
          auVar84._8_4_ = fVar72 / fVar88;
          auVar84._12_4_ = fVar73 / fVar88;
          auVar92 = NEON_ext(auVar84,auVar84,8,1);
          auVar81._0_4_ = fVar64 / fVar79;
          auVar81._4_4_ = fVar65 / fVar79;
          auVar81._8_4_ = fVar66 / fVar79;
          auVar81._12_4_ = fVar67 / fVar79;
          local_140 = (float)uVar11;
          fStack_13c = (float)((ulong)uVar11 >> 0x20);
          fStack_138 = (float)uVar12;
          fStack_134 = (float)((ulong)uVar12 >> 0x20);
          local_150 = (float)uVar15;
          fStack_14c = (float)((ulong)uVar15 >> 0x20);
          fStack_148 = (float)uVar16;
          fStack_144 = (float)((ulong)uVar16 >> 0x20);
          auVar80 = NEON_ext(auVar81,auVar81,8,1);
          fVar49 = auVar80._0_4_;
          fVar74 = fVar74 / fVar87;
          fVar77 = fVar77 / fVar87;
          fVar78 = fVar78 / fVar87;
          local_160 = (float)uVar13;
          fStack_15c = (float)((ulong)uVar13 >> 0x20);
          fStack_158 = (float)uVar14;
          fStack_154 = (float)((ulong)uVar14 >> 0x20);
          fVar66 = auVar36._0_4_ + local_140 * auVar84._0_4_ + local_150 * auVar81._4_4_ +
                   local_160 * fVar78;
          fVar73 = auVar36._4_4_ + fStack_13c * auVar84._0_4_ + fStack_14c * auVar81._4_4_ +
                   fStack_15c * fVar78;
          fVar68 = auVar36._8_4_ + fStack_138 * auVar84._0_4_ + fStack_148 * auVar81._4_4_ +
                   fStack_158 * fVar78;
          fVar71 = auVar36._12_4_ + fStack_134 * auVar84._0_4_ + fStack_144 * auVar81._4_4_ +
                   fStack_154 * fVar78;
          fVar72 = (float)((uint)fVar66 ^ ((uint)fVar66 ^ (uint)fVar73) & -(uint)(fVar66 <= fVar73))
          ;
          fVar89 = (float)((uint)fVar66 ^ ((uint)fVar66 ^ (uint)fVar73) & -(uint)(fVar66 <= fVar73))
          ;
          fVar90 = (float)((uint)fVar66 ^ ((uint)fVar66 ^ (uint)fVar73) & -(uint)(fVar66 <= fVar73))
          ;
          fVar91 = (float)((uint)fVar66 ^ ((uint)fVar66 ^ (uint)fVar73) & -(uint)(fVar66 <= fVar73))
          ;
          local_170 = auVar37._0_4_;
          fStack_16c = auVar37._4_4_;
          fStack_168 = auVar37._8_4_;
          fStack_164 = auVar37._12_4_;
          auVar75._0_4_ = SQRT(fVar66) * 0.5 * local_170;
          auVar75._4_4_ = SQRT(fVar73) * 0.5 * fStack_16c;
          auVar75._8_4_ = SQRT(fVar68) * 0.5 * fStack_168;
          auVar75._12_4_ = SQRT(fVar71) * 0.5 * fStack_164;
          auVar93 = NEON_frecpe(auVar75,4);
          uVar94 = -(uint)(fVar72 <= fVar68);
          uVar95 = -(uint)(fVar89 <= fVar68);
          uVar96 = -(uint)(fVar90 <= fVar68);
          uVar97 = -(uint)(fVar91 <= fVar68);
          auVar80 = NEON_frecps(auVar93,auVar75,4);
          fVar98 = (float)puVar22[6];
          fVar99 = (float)((ulong)puVar22[6] >> 0x20);
          fVar100 = (float)uVar101;
          auVar56._0_4_ = auVar93._0_4_ * auVar80._0_4_;
          auVar56._4_4_ = auVar93._4_4_ * auVar80._4_4_;
          auVar56._8_4_ = auVar93._8_4_ * auVar80._8_4_;
          auVar56._12_4_ = auVar93._12_4_ * auVar80._12_4_;
          auVar80 = NEON_frecps(auVar56,auVar75,4);
          fVar67 = auVar56._0_4_ * auVar80._0_4_;
          fVar78 = auVar56._4_4_ * auVar80._4_4_;
          fVar64 = auVar56._8_4_ * auVar80._8_4_;
          fVar65 = auVar56._12_4_ * auVar80._12_4_;
          auVar5._4_8_ = auVar80._8_8_;
          auVar5._0_4_ = (auVar84._4_4_ + auVar81._0_4_) * fVar67;
          auVar76._0_8_ = auVar5._0_8_ << 0x20;
          auVar76._8_4_ = (auVar92._0_4_ + fVar74) * fVar67;
          auVar76._12_4_ = (fVar49 + -fVar77) * fVar67;
          auVar82._0_4_ = (auVar84._4_4_ + auVar81._0_4_) * fVar78;
          auVar82._4_4_ = fVar78 * 0.0;
          auVar82._8_4_ = (fVar49 + fVar77) * fVar78;
          auVar82._12_4_ = (fVar74 + -auVar84._8_4_) * fVar78;
          auVar85._0_4_ = (auVar92._0_4_ + fVar74) * fVar64;
          auVar85._4_4_ = (fVar49 + fVar77) * fVar64;
          auVar85._12_4_ = (auVar84._4_4_ - auVar81._0_4_) * fVar64;
          auVar57._0_4_ = (fVar49 - fVar77) * fVar65;
          auVar57._4_4_ = (fVar74 - auVar84._8_4_) * fVar65;
          auVar57._8_4_ = (auVar84._4_4_ - auVar81._0_4_) * fVar65;
          auVar70._4_12_ = auVar76._4_12_;
          auVar70._0_4_ = SQRT(fVar66) * 0.5;
          auVar83._8_8_ = auVar82._8_8_;
          auVar83._4_4_ = SQRT(fVar73) * 0.5;
          auVar83._0_4_ = auVar82._0_4_;
          auVar85._8_4_ = SQRT(fVar68) * 0.5;
          auVar57._12_4_ = SQRT(fVar71) * 0.5;
          auVar69._12_4_ = -(uint)(fVar66 <= fVar73);
          auVar69._8_4_ = -(uint)(fVar66 <= fVar73);
          auVar69._4_4_ = -(uint)(fVar66 <= fVar73);
          auVar69._0_4_ = -(uint)(fVar66 <= fVar73);
          auVar70 = auVar70 ^ (auVar70 ^ auVar83) & auVar69;
          auVar3._4_4_ = uVar95;
          auVar3._0_4_ = uVar94;
          auVar3._8_4_ = uVar96;
          auVar3._12_4_ = uVar97;
          fVar67 = fVar79 - *(float *)((long)puVar30 + 0x24);
          fVar77 = 0.0 - *(float *)((long)puVar30 + 0x2c);
          auVar2._4_4_ = -(uint)((float)((uint)fVar68 ^ ((uint)fVar68 ^ (uint)fVar89) & ~uVar95) <=
                                fVar71);
          auVar2._0_4_ = -(uint)((float)((uint)fVar68 ^ ((uint)fVar68 ^ (uint)fVar72) & ~uVar94) <=
                                fVar71);
          auVar2._8_4_ = -(uint)((float)((uint)fVar68 ^ ((uint)fVar68 ^ (uint)fVar90) & ~uVar96) <=
                                fVar71);
          auVar2._12_4_ =
               -(uint)((float)((uint)fVar68 ^ ((uint)fVar68 ^ (uint)fVar91) & ~uVar97) <= fVar71);
          auVar57 = auVar57 ^ (auVar57 ^ auVar70 ^ (auVar70 ^ auVar85) & auVar3) & ~auVar2;
          fVar49 = (fVar88 - *(float *)(puVar30 + 4)) * (fVar88 - *(float *)(puVar30 + 4));
          fVar67 = fVar67 * fVar67;
          fVar74 = (fVar87 - *(float *)(puVar30 + 5)) * (fVar87 - *(float *)(puVar30 + 5));
          fVar77 = fVar77 * fVar77;
          dVar4 = (double)CONCAT44(fVar79,fVar88);
          auVar31._0_4_ = fVar49 + fVar67;
          auVar31._4_4_ = fVar74 + fVar77;
          auVar31._8_4_ = fVar49 + fVar67;
          auVar31._12_4_ = fVar74 + fVar77;
          auVar80 = NEON_ext(auVar31,auVar31,4,1);
          if (1.1920929e-07 <= auVar80._0_4_ + auVar80._4_4_) {
            if (puVar30[1] == 0) {
              uVar23 = puVar30[2];
              if (uVar23 != 0) {
                plVar24 = (long *)(uVar23 + 0x48);
                uVar94 = 0xffffffff;
                do {
                  uVar95 = 0xffffffff;
                  if (uVar94 == (*(uint *)(uVar23 + 0x50) &
                                ((int)*(uint *)(uVar23 + 0x50) >> 0x1f ^ 0xffffffffU)) - 1) break;
                  uVar94 = uVar94 + 1;
                  uVar95 = uVar94;
                } while ((*(byte *)((long)plVar24 +
                                   (ulong)(uVar94 & 0xffff) * 0x40 + *plVar24 + 0x1e) & 1) != 0);
                local_e0 = *(double *)PTR_DAT_047ddaf0;
                uStack_d8 = *(ulong *)(PTR_DAT_047ddaf0 + 8);
                dStack_98 = (double)(ulong)(uint)fVar87;
                local_d0 = *(undefined8 *)(PTR_DAT_047ddaf0 + 0x10);
                uStack_c8 = *(undefined8 *)(PTR_DAT_047ddaf0 + 0x18);
                local_a0 = dVar4;
                if (uVar95 != 0xffffffff) {
                  do {
                    local_f0 = CONCAT62(local_f0._2_6_,(short)uVar95);
                    FUN_029b3c2c(puVar30[2],&local_f0,1,&local_e0,&local_a0);
                    uVar94 = uVar95 + 1;
                    do {
                      uVar95 = uVar94;
                      if (*(int *)(uVar23 + 0x50) <= (int)uVar95) goto LAB_00d22744;
                      uVar94 = uVar95 + 1;
                    } while ((*(byte *)((long)plVar24 +
                                       (ulong)(uVar95 & 0xffff) * 0x40 + *plVar24 + 0x1e) & 1) != 0)
                    ;
                  } while (uVar95 + 1 != 0);
                }
              }
            }
            else {
              uStack_d8 = (ulong)(uint)fVar87;
              local_e0 = dVar4;
              FUN_029b3afc(puVar30[1],&local_e0,1);
            }
LAB_00d22744:
            puVar30[5] = (ulong)(uint)fVar87;
            puVar30[4] = (ulong)dVar4;
          }
          local_190 = auVar57._0_4_;
          fStack_18c = auVar57._4_4_;
          fStack_188 = auVar57._8_4_;
          fStack_184 = auVar57._12_4_;
          auVar32._0_4_ = local_190 * local_190 + fStack_18c * fStack_18c;
          auVar32._4_4_ = fStack_188 * fStack_188 + fStack_184 * fStack_184;
          auVar32._8_4_ = local_190 * local_190 + fStack_18c * fStack_18c;
          auVar32._12_4_ = fStack_188 * fStack_188 + fStack_184 * fStack_184;
          auVar80 = NEON_ext(auVar32,auVar32,4,1);
          fVar79 = (float)((ulong)uVar101 >> 0x20);
          auVar33._0_4_ = auVar80._0_4_ + auVar80._4_4_;
          auVar33._4_4_ = auVar80._8_4_ + auVar80._12_4_;
          auVar33._8_4_ = auVar80._0_4_ + auVar80._4_4_;
          auVar33._12_4_ = auVar80._8_4_ + auVar80._12_4_;
          if (((int)SQRT(auVar33._0_4_) + 0x800000U & 0x7f000000) == 0) {
            auVar39._8_8_ = _UNK_03cabe58;
            auVar39._0_8_ = _DAT_03cabe50;
          }
          else {
            auVar80 = NEON_frsqrte(auVar33,4);
            auVar58._0_4_ = auVar33._0_4_ * auVar80._0_4_;
            auVar58._4_4_ = auVar33._4_4_ * auVar80._4_4_;
            auVar58._8_4_ = auVar33._8_4_ * auVar80._8_4_;
            auVar58._12_4_ = auVar33._12_4_ * auVar80._12_4_;
            auVar92 = NEON_frsqrts(auVar80,auVar58,4);
            auVar50._0_4_ = auVar80._0_4_ * auVar92._0_4_;
            auVar50._4_4_ = auVar80._4_4_ * auVar92._4_4_;
            auVar50._8_4_ = auVar80._8_4_ * auVar92._8_4_;
            auVar50._12_4_ = auVar80._12_4_ * auVar92._12_4_;
            auVar59._0_4_ = auVar33._0_4_ * auVar50._0_4_;
            auVar59._4_4_ = auVar33._4_4_ * auVar50._4_4_;
            auVar59._8_4_ = auVar33._8_4_ * auVar50._8_4_;
            auVar59._12_4_ = auVar33._12_4_ * auVar50._12_4_;
            iVar35 = -(uint)(auVar33._0_4_ == 0.0);
            iVar42 = -(uint)(auVar33._4_4_ == 0.0);
            iVar44 = -(uint)(auVar33._8_4_ == 0.0);
            iVar47 = -(uint)(auVar33._12_4_ == 0.0);
            auVar38[0] = ~(byte)iVar35;
            auVar38[1] = ~(byte)((uint)iVar35 >> 8);
            auVar38[2] = ~(byte)((uint)iVar35 >> 0x10);
            auVar38[3] = ~(byte)((uint)iVar35 >> 0x18);
            auVar38[4] = ~(byte)iVar42;
            auVar38[5] = ~(byte)((uint)iVar42 >> 8);
            auVar38[6] = ~(byte)((uint)iVar42 >> 0x10);
            auVar38[7] = ~(byte)((uint)iVar42 >> 0x18);
            auVar38[8] = ~(byte)iVar44;
            auVar38[9] = ~(byte)((uint)iVar44 >> 8);
            auVar38[10] = ~(byte)((uint)iVar44 >> 0x10);
            auVar38[0xb] = ~(byte)((uint)iVar44 >> 0x18);
            auVar38[0xc] = ~(byte)iVar47;
            auVar38[0xd] = ~(byte)((uint)iVar47 >> 8);
            auVar38[0xe] = ~(byte)((uint)iVar47 >> 0x10);
            auVar38[0xf] = ~(byte)((uint)iVar47 >> 0x18);
            auVar80 = NEON_frsqrts(auVar50,auVar59,4);
            auVar51._0_4_ = local_190 * auVar50._0_4_ * auVar80._0_4_;
            auVar51._4_4_ = fStack_18c * auVar50._4_4_ * auVar80._4_4_;
            auVar51._8_4_ = fStack_188 * auVar50._8_4_ * auVar80._8_4_;
            auVar51._12_4_ = fStack_184 * auVar50._12_4_ * auVar80._12_4_;
            auVar60._8_8_ = _UNK_03cabe58;
            auVar60._0_8_ = _DAT_03cabe50;
            auVar39 = auVar60 ^ (auVar60 ^ auVar51) & auVar38;
          }
          fVar88 = auVar39._0_4_;
          fVar49 = auVar39._4_4_;
          fVar77 = fVar49 + fVar49;
          fVar67 = auVar39._8_4_;
          fVar78 = fVar67 + fVar67;
          fVar74 = auVar39._12_4_;
          local_a0 = (double)CONCAT44(local_a0._4_4_,0x3a83126f);
          fVar64 = (fVar88 + fVar88) * fVar88;
          fVar87 = (fVar88 + fVar88) * fVar74;
          fVar67 = 1.0 - fVar67 * fVar78;
          fStack_bc = fVar78 * fVar49 - fVar87;
          local_c0 = fVar78 * fVar88 + fVar77 * fVar74;
          auVar86._0_8_ = CONCAT44(fVar67 - fVar64,fVar77 * fVar88 - fVar78 * fVar74);
          auVar86._8_4_ = fVar78 * fVar49 + fVar87;
          auVar86._12_4_ = local_c0;
          local_b0 = CONCAT44(fVar61 * fVar98 + fVar52 * fVar99 + fVar41 * fVar100 + fVar7 * fVar79,
                              fVar55 * fVar98 + fVar48 * fVar99 + fVar34 * fVar100 + fVar6 * fVar79)
          ;
          auVar10._8_4_ = fVar62 * fVar98 + fVar53 * fVar99 + fVar43 * fVar100 + fVar8 * fVar79;
          auVar10._0_8_ = local_b0;
          auVar10._12_4_ = fVar63 * fVar98 + fVar54 * fVar99 + fVar46 * fVar100 + fVar9 * fVar79;
          uStack_d8 = CONCAT44(fStack_bc,fVar78 * fVar88 - fVar77 * fVar74);
          local_e0 = (double)CONCAT44(fVar77 * fVar88 + fVar78 * fVar74,fVar67 - fVar77 * fVar49);
          uStack_c8 = auVar86._8_8_;
          uStack_b8 = (ulong)(uint)((1.0 - fVar64) - fVar77 * fVar49);
          uStack_a8 = auVar10._8_8_;
          local_d0 = auVar86._0_8_;
          uVar23 = FUN_029b3e10(&local_e0,lVar28,&local_a0);
          if ((uVar23 & 1) == 0) {
            if ((param_5 & 1) == 0) {
              local_a0 = (double)(float)local_b0;
              dStack_98 = (double)local_b0._4_4_;
              uVar23 = *puVar30;
              local_90 = (double)(float)uStack_a8;
              dStack_88 = (double)uStack_a8._4_4_;
              puVar22 = &local_e0;
              plVar24 = (long *)(*(long *)(param_2 + 0x18) + 0x18);
              pcVar26 = *(code **)(*plVar24 + 0x88);
              pdVar25 = &local_a0;
            }
            else {
              if (param_1._0_4_ <= 1.0) {
                local_100[1] = 0.0;
                local_100[0] = 0.0;
                uStack_e8 = 0;
                local_f0 = 0;
              }
              else {
                uVar23 = *puVar30;
                lVar28 = 0;
                if (*(long *)(param_2 + 0x18) != 0) {
                  lVar28 = *(long *)(param_2 + 0x18) + 0x20;
                }
                FUN_022013ec(auStack_110,&local_e0);
                local_a0 = (double)(float)local_b0;
                dStack_98 = (double)local_b0._4_4_;
                local_90 = (double)(float)uStack_a8;
                dStack_88 = (double)uStack_a8._4_4_;
                auVar40._8_8_ = uVar45;
                FUN_02200b10(auVar40,lVar28,uVar23,&local_a0,auStack_110,&local_f0,local_100);
              }
              plVar24 = *(long **)(param_2 + 0x18);
              puVar22 = &local_f0;
              pdVar25 = local_100;
              uVar23 = *puVar30;
              pcVar26 = *(code **)(*plVar24 + 400);
            }
            (*pcVar26)(plVar24,uVar23,puVar22,pdVar25,0);
            uVar27 = 1;
          }
          if ((*(char *)(param_2 + 0x174) != '\0') && (0 < *(int *)(param_2 + 0x160))) {
            dStack_98 = 0.0;
            local_a0 = 0.0;
            uStack_e8 = 0;
            local_f0 = 0;
            (**(code **)(**(long **)(param_2 + 0x18) + 400))
                      (*(long **)(param_2 + 0x18),*puVar30,&local_a0,&local_f0,0);
          }
        }
      }
      puVar30 = puVar30 + 8;
    } while (puVar30 != puVar1);
  }
  return uVar27;
}


