/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02762de4; name: FUN_02762de4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02762de4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined *puVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  ulong uVar23;
  float *pfVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
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
  float fVar62;
  float fVar64;
  undefined8 uVar63;
  float fVar65;
  float fVar67;
  float fVar68;
  undefined8 uVar66;
  float fVar77;
  undefined1 auVar69 [16];
  float fVar78;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar92;
  float fVar93;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar117;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  if (((*(int *)(param_1 + 0x130) == 4) && (lVar25 = *(long *)(param_1 + 0x138), lVar25 != 0)) &&
     (DAT_0485a120 == '\0')) {
    bVar20 = *(char *)(param_1 + 0x145) != '\0';
    lVar29 = *(long *)(param_1 + 0x120);
    if (lVar29 == 0) {
      bVar21 = false;
    }
    else {
      bVar21 = *(char *)(lVar29 + 0x211) != '\0';
      if (*(char *)(param_1 + 0x145) == '\0') {
        bVar20 = *(char *)(lVar29 + 0x212) != '\0';
      }
      else {
        bVar20 = true;
      }
      if (*(char *)(lVar29 + 0x210) == '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x140) != -1) {
        uVar23 = FUN_00cabc60(param_1);
        if ((uVar23 & 1) != 0) {
          return;
        }
        lVar25 = *(long *)(param_1 + 0x138);
      }
      lVar28 = *(long *)(lVar25 + 0x70);
      if (lVar28 != lVar25 + 0x68) {
        uVar3 = *(undefined1 *)(lVar29 + 0x213);
        do {
          *(undefined1 *)(*(long *)(lVar28 + 0x10) + 0x249) = uVar3;
          lVar28 = *(long *)(lVar28 + 8);
        } while (lVar28 != lVar25 + 0x68);
      }
    }
    pfVar24 = (float *)(**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0x68))();
    puVar19 = PTR_DAT_047dced0;
    lVar25 = *(long *)(param_1 + 0x138) + 0x68;
    lVar29 = *(long *)(*(long *)(param_1 + 0x138) + 0x70);
    fStack_70 = (float)_DAT_03cab3a0;
    fStack_6c = (float)((ulong)_DAT_03cab3a0 >> 0x20);
    fStack_68 = (float)_UNK_03cab3a8;
    fStack_64 = (float)((ulong)_UNK_03cab3a8 >> 0x20);
    local_90 = (float)_DAT_03cac210;
    fStack_8c = (float)((ulong)_DAT_03cac210 >> 0x20);
    fStack_88 = (float)_UNK_03cac218;
    fStack_84 = (float)((ulong)_UNK_03cac218 >> 0x20);
    local_a0 = (float)_DAT_03cabb00;
    fStack_9c = (float)((ulong)_DAT_03cabb00 >> 0x20);
    fStack_98 = (float)_UNK_03cabb08;
    fStack_94 = (float)((ulong)_UNK_03cabb08 >> 0x20);
    if (bVar20) {
      if (lVar25 != lVar29) {
        if (bVar21) {
          auVar56 = NEON_fmov(0x3f800000,4);
          auVar57 = NEON_fmov(0x40800000,4);
          do {
            lVar28 = *(long *)(lVar29 + 0x10);
            if (*(char *)(lVar28 + 0x24a) == '\0') {
              fVar86 = pfVar24[8];
              fVar92 = pfVar24[9];
              fVar93 = pfVar24[10];
              fVar67 = pfVar24[0xb] * pfVar24[0xb];
              auVar49._0_4_ = fVar86 * fVar86 + fVar92 * fVar92;
              auVar49._4_4_ = fVar93 * fVar93 + fVar67;
              auVar49._8_4_ = fVar86 * fVar86 + fVar92 * fVar92;
              auVar49._12_4_ = fVar93 * fVar93 + fVar67;
              fVar67 = *pfVar24;
              fVar62 = pfVar24[1];
              fVar64 = pfVar24[2];
              fVar65 = pfVar24[3];
              fVar77 = (float)*(undefined8 *)(pfVar24 + 4);
              fVar78 = (float)((ulong)*(undefined8 *)(pfVar24 + 4) >> 0x20);
              fVar117 = (float)*(undefined8 *)(pfVar24 + 6);
              fVar68 = (float)((ulong)*(undefined8 *)(pfVar24 + 6) >> 0x20);
              auVar80 = NEON_ext(auVar49,auVar49,4,1);
              auVar50._0_4_ = fVar77 * fVar77 + fVar78 * fVar78;
              auVar50._4_4_ = fVar117 * fVar117 + fVar68 * fVar68;
              auVar50._8_4_ = fVar77 * fVar77 + fVar78 * fVar78;
              auVar50._12_4_ = fVar117 * fVar117 + fVar68 * fVar68;
              auVar51._0_4_ = fVar67 * fVar67 + fVar62 * fVar62;
              auVar51._4_4_ = fVar64 * fVar64 + fVar65 * fVar65;
              auVar51._8_4_ = fVar67 * fVar67 + fVar62 * fVar62;
              auVar51._12_4_ = fVar64 * fVar64 + fVar65 * fVar65;
              auVar95 = NEON_ext(auVar50,auVar50,4,1);
              auVar87 = NEON_ext(auVar51,auVar51,4,1);
              fVar85 = SQRT(auVar80._0_4_ + auVar80._4_4_);
              fVar79 = SQRT(auVar87._0_4_ + auVar87._4_4_);
              fVar100 = *(float *)(lVar28 + 0xd0);
              fVar115 = *(float *)(lVar28 + 0xd8);
              fVar94 = SQRT(auVar95._0_4_ + auVar95._4_4_);
              *(ulong *)(lVar28 + 0xd8) = (ulong)(uint)fVar85;
              *(ulong *)(lVar28 + 0xd0) = CONCAT44(fVar94,fVar79);
              if (*(char *)(lVar28 + 0x248) == '\0') {
                fVar100 = fVar79 - fVar100;
                fVar114 = fVar94 - *(float *)(lVar28 + 0xd4);
                fVar115 = fVar85 - fVar115;
                fVar116 = 0.0 - *(float *)(lVar28 + 0xdc);
                fVar100 = fVar100 * fVar100;
                fVar114 = fVar114 * fVar114;
                fVar115 = fVar115 * fVar115;
                fVar116 = fVar116 * fVar116;
                auVar52._0_4_ = fVar100 + fVar114;
                auVar52._4_4_ = fVar115 + fVar116;
                auVar52._8_4_ = fVar100 + fVar114;
                auVar52._12_4_ = fVar115 + fVar116;
                auVar101 = NEON_ext(auVar52,auVar52,4,1);
                fVar100 = auVar101._0_4_ + auVar101._4_4_;
                bVar20 = fVar100 <= 1.1920929e-07;
                *(bool *)(lVar28 + 0x248) = 1.1920929e-07 < fVar100;
              }
              else {
                bVar20 = false;
              }
              auVar111._0_4_ = fVar67 / fVar79;
              auVar111._4_4_ = fVar62 / SQRT(auVar87._8_4_ + auVar87._12_4_);
              auVar111._8_4_ = fVar64 / SQRT(auVar87._0_4_ + auVar87._4_4_);
              auVar111._12_4_ = fVar65 / SQRT(auVar87._8_4_ + auVar87._12_4_);
              auVar101 = NEON_ext(auVar111,auVar111,8,1);
              auVar84._0_4_ = fVar77 / fVar94;
              auVar84._4_4_ = fVar78 / SQRT(auVar95._8_4_ + auVar95._12_4_);
              auVar84._8_4_ = fVar117 / SQRT(auVar95._0_4_ + auVar95._4_4_);
              auVar84._12_4_ = fVar68 / SQRT(auVar95._8_4_ + auVar95._12_4_);
              auVar87 = NEON_ext(auVar84,auVar84,8,1);
              fVar67 = auVar87._0_4_;
              fVar86 = fVar86 / fVar85;
              fVar92 = fVar92 / SQRT(auVar80._8_4_ + auVar80._12_4_);
              fVar93 = fVar93 / SQRT(auVar80._0_4_ + auVar80._4_4_);
              fVar62 = auVar56._0_4_ + fStack_70 * auVar111._0_4_ + local_90 * auVar84._4_4_ +
                       local_a0 * fVar93;
              fVar64 = auVar56._4_4_ + fStack_6c * auVar111._0_4_ + fStack_8c * auVar84._4_4_ +
                       fStack_9c * fVar93;
              fVar65 = auVar56._8_4_ + fStack_68 * auVar111._0_4_ + fStack_88 * auVar84._4_4_ +
                       fStack_98 * fVar93;
              fVar93 = auVar56._12_4_ + fStack_64 * auVar111._0_4_ + fStack_84 * auVar84._4_4_ +
                       fStack_94 * fVar93;
              local_b0 = auVar57._0_4_;
              fStack_ac = auVar57._4_4_;
              fStack_a8 = auVar57._8_4_;
              fStack_a4 = auVar57._12_4_;
              auVar75._0_4_ = SQRT(fVar62) * 0.5 * local_b0;
              auVar75._4_4_ = SQRT(fVar64) * 0.5 * fStack_ac;
              auVar75._8_4_ = SQRT(fVar65) * 0.5 * fStack_a8;
              auVar75._12_4_ = SQRT(fVar93) * 0.5 * fStack_a4;
              auVar80 = NEON_frecpe(auVar75,4);
              auVar87 = NEON_frecps(auVar80,auVar75,4);
              auVar99._0_4_ = auVar80._0_4_ * auVar87._0_4_;
              auVar99._4_4_ = auVar80._4_4_ * auVar87._4_4_;
              auVar99._8_4_ = auVar80._8_4_ * auVar87._8_4_;
              auVar99._12_4_ = auVar80._12_4_ * auVar87._12_4_;
              auVar80 = NEON_frecps(auVar99,auVar75,4);
              fVar117 = auVar101._0_4_ + fVar86;
              auVar18._8_4_ = fVar67 + -fVar92;
              auVar18._4_4_ = fVar117;
              fVar100 = auVar99._0_4_ * auVar80._0_4_;
              fVar115 = auVar99._4_4_ * auVar80._4_4_;
              fVar77 = auVar99._8_4_ * auVar80._8_4_;
              fVar78 = auVar99._12_4_ * auVar80._12_4_;
              fVar68 = (float)((uint)fVar62 ^
                              ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64));
              fVar79 = (float)((uint)fVar62 ^
                              ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64));
              fVar85 = (float)((uint)fVar62 ^
                              ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64));
              fVar94 = (float)((uint)fVar62 ^
                              ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64));
              auVar18._0_4_ = (auVar111._4_4_ + auVar84._0_4_) * fVar100;
              auVar112._0_8_ = auVar18._0_8_ << 0x20;
              auVar112._8_4_ = fVar117 * fVar100;
              auVar112._12_4_ = (fVar67 + -fVar92) * fVar100;
              auVar113._4_12_ = auVar112._4_12_;
              auVar113._0_4_ = SQRT(fVar62) * 0.5;
              auVar91._0_4_ = (auVar101._0_4_ + fVar86) * fVar77;
              auVar91._4_4_ = (fVar67 + fVar92) * fVar77;
              auVar91._12_4_ = (auVar111._4_4_ - auVar84._0_4_) * fVar77;
              auVar76._0_4_ = (fVar67 - fVar92) * fVar78;
              auVar76._4_4_ = (fVar86 - auVar111._8_4_) * fVar78;
              auVar76._8_4_ = (auVar111._4_4_ - auVar84._0_4_) * fVar78;
              auVar6._4_4_ = SQRT(fVar64) * 0.5;
              auVar6._0_4_ = (auVar111._4_4_ + auVar84._0_4_) * fVar115;
              auVar6._8_4_ = (fVar67 + fVar92) * fVar115;
              auVar6._12_4_ = (fVar86 + -auVar111._8_4_) * fVar115;
              auVar12._4_4_ = -(uint)(fVar62 <= fVar64);
              auVar12._0_4_ = -(uint)(fVar62 <= fVar64);
              auVar12._8_4_ = -(uint)(fVar62 <= fVar64);
              auVar12._12_4_ = -(uint)(fVar62 <= fVar64);
              auVar91._8_4_ = SQRT(fVar65) * 0.5;
              auVar76._12_4_ = SQRT(fVar93) * 0.5;
              auVar7._4_4_ = -(uint)(fVar79 <= fVar65);
              auVar7._0_4_ = -(uint)(fVar68 <= fVar65);
              auVar7._8_4_ = -(uint)(fVar85 <= fVar65);
              auVar7._12_4_ = -(uint)(fVar94 <= fVar65);
              auVar91 = auVar91 ^ (auVar91 ^ auVar113 ^ (auVar113 ^ auVar6) & auVar12) & ~auVar7;
              auVar61._4_4_ =
                   -(uint)((float)((uint)fVar79 ^
                                  ((uint)fVar79 ^ (uint)fVar65) & -(uint)(fVar79 <= fVar65)) <=
                          fVar93);
              auVar61._0_4_ =
                   -(uint)((float)((uint)fVar68 ^
                                  ((uint)fVar68 ^ (uint)fVar65) & -(uint)(fVar68 <= fVar65)) <=
                          fVar93);
              auVar61._12_4_ =
                   -(uint)((float)((uint)fVar94 ^
                                  ((uint)fVar94 ^ (uint)fVar65) & -(uint)(fVar94 <= fVar65)) <=
                          fVar93);
              auVar61._8_4_ =
                   -(uint)((float)((uint)fVar85 ^
                                  ((uint)fVar85 ^ (uint)fVar65) & -(uint)(fVar85 <= fVar65)) <=
                          fVar93);
              auVar91 = auVar91 ^ (auVar91 ^ auVar76) & auVar61;
              uVar66 = *(undefined8 *)(lVar28 + 0xe8);
              uVar63 = *(undefined8 *)(lVar28 + 0xe0);
              auVar80 = *(undefined1 (*) [16])(lVar28 + 0xf0);
              *(long *)(lVar28 + 0xe8) = auVar91._8_8_;
              *(long *)(lVar28 + 0xe0) = auVar91._0_8_;
              auVar87 = *(undefined1 (*) [16])(pfVar24 + 0xc);
              auVar95 = NEON_ext(auVar87,auVar87,8,1);
              *(ulong *)(lVar28 + 0xf8) = (ulong)(uint)auVar95._0_4_;
              *(long *)(lVar28 + 0xf0) = auVar87._0_8_;
              if (bVar20) {
                fVar86 = auVar87._0_4_ - auVar80._0_4_;
                fVar92 = auVar87._4_4_ - auVar80._4_4_;
                fVar93 = auVar95._0_4_ - auVar80._8_4_;
                fVar67 = 0.0 - auVar80._12_4_;
                fVar86 = fVar86 * fVar86;
                fVar92 = fVar92 * fVar92;
                fVar93 = fVar93 * fVar93;
                fVar67 = fVar67 * fVar67;
                auVar53._0_4_ = fVar86 + fVar92;
                auVar53._4_4_ = fVar93 + fVar67;
                auVar53._8_4_ = fVar86 + fVar92;
                auVar53._12_4_ = fVar93 + fVar67;
                auVar80 = NEON_ext(auVar53,auVar53,4,1);
                fVar86 = auVar80._0_4_ + auVar80._4_4_;
                *(bool *)(lVar28 + 0x248) = 1.1920929e-07 < fVar86;
                if (fVar86 <= 1.1920929e-07) {
                  fVar86 = (float)uVar63;
                  fVar62 = auVar91._0_4_ - fVar86;
                  fVar92 = (float)((ulong)uVar63 >> 0x20);
                  fVar64 = auVar91._4_4_ - fVar92;
                  fVar93 = (float)uVar66;
                  fVar65 = auVar91._8_4_ - fVar93;
                  fVar67 = (float)((ulong)uVar66 >> 0x20);
                  fVar100 = auVar91._12_4_ - fVar67;
                  fVar86 = fVar86 + auVar91._0_4_;
                  fVar92 = fVar92 + auVar91._4_4_;
                  fVar93 = fVar93 + auVar91._8_4_;
                  fVar67 = fVar67 + auVar91._12_4_;
                  fVar62 = fVar62 * fVar62;
                  fVar64 = fVar64 * fVar64;
                  fVar65 = fVar65 * fVar65;
                  fVar100 = fVar100 * fVar100;
                  fVar86 = fVar86 * fVar86;
                  fVar92 = fVar92 * fVar92;
                  fVar93 = fVar93 * fVar93;
                  fVar67 = fVar67 * fVar67;
                  auVar54._0_4_ = fVar62 + fVar64;
                  auVar54._4_4_ = fVar65 + fVar100;
                  auVar54._8_4_ = fVar62 + fVar64;
                  auVar54._12_4_ = fVar65 + fVar100;
                  auVar55._0_4_ = fVar86 + fVar92;
                  auVar55._4_4_ = fVar93 + fVar67;
                  auVar55._8_4_ = fVar86 + fVar92;
                  auVar55._12_4_ = fVar93 + fVar67;
                  auVar87 = NEON_ext(auVar54,auVar54,4,1);
                  auVar80 = NEON_ext(auVar55,auVar55,4,1);
                  *(bool *)(lVar28 + 0x248) =
                       1.1920929e-07 < auVar87._0_4_ + auVar87._4_4_ &&
                       1.1920929e-07 < auVar80._0_4_ + auVar80._4_4_;
                }
              }
              if (((*(char *)(param_1 + 0x146) != '\0') && (*(char *)(lVar28 + 0x240) != '\0')) &&
                 (*(char *)(lVar28 + 0x241) != '\0')) {
                FUN_00c4bccc();
              }
            }
            lVar29 = *(long *)(lVar29 + 8);
          } while (lVar25 != lVar29);
        }
        else {
          auVar56 = NEON_fmov(0x3f800000,4);
          auVar57 = NEON_fmov(0x40800000,4);
          do {
            lVar28 = *(long *)(lVar29 + 0x10);
            if (*(char *)(lVar28 + 0x24a) == '\0') {
              fVar86 = pfVar24[8];
              fVar92 = pfVar24[9];
              fVar93 = pfVar24[10];
              fVar67 = pfVar24[0xb] * pfVar24[0xb];
              auVar31._0_4_ = fVar86 * fVar86 + fVar92 * fVar92;
              auVar31._4_4_ = fVar93 * fVar93 + fVar67;
              auVar31._8_4_ = fVar86 * fVar86 + fVar92 * fVar92;
              auVar31._12_4_ = fVar93 * fVar93 + fVar67;
              fVar67 = *pfVar24;
              fVar62 = pfVar24[1];
              fVar64 = pfVar24[2];
              fVar65 = pfVar24[3];
              fVar77 = (float)*(undefined8 *)(pfVar24 + 4);
              fVar78 = (float)((ulong)*(undefined8 *)(pfVar24 + 4) >> 0x20);
              fVar117 = (float)*(undefined8 *)(pfVar24 + 6);
              fVar68 = (float)((ulong)*(undefined8 *)(pfVar24 + 6) >> 0x20);
              auVar80 = NEON_ext(auVar31,auVar31,4,1);
              auVar32._0_4_ = fVar77 * fVar77 + fVar78 * fVar78;
              auVar32._4_4_ = fVar117 * fVar117 + fVar68 * fVar68;
              auVar32._8_4_ = fVar77 * fVar77 + fVar78 * fVar78;
              auVar32._12_4_ = fVar117 * fVar117 + fVar68 * fVar68;
              auVar33._0_4_ = fVar67 * fVar67 + fVar62 * fVar62;
              auVar33._4_4_ = fVar64 * fVar64 + fVar65 * fVar65;
              auVar33._8_4_ = fVar67 * fVar67 + fVar62 * fVar62;
              auVar33._12_4_ = fVar64 * fVar64 + fVar65 * fVar65;
              auVar95 = NEON_ext(auVar32,auVar32,4,1);
              auVar87 = NEON_ext(auVar33,auVar33,4,1);
              fVar85 = SQRT(auVar80._0_4_ + auVar80._4_4_);
              fVar79 = SQRT(auVar87._0_4_ + auVar87._4_4_);
              fVar100 = *(float *)(lVar28 + 0xd0);
              fVar115 = *(float *)(lVar28 + 0xd8);
              fVar94 = SQRT(auVar95._0_4_ + auVar95._4_4_);
              *(ulong *)(lVar28 + 0xd8) = (ulong)(uint)fVar85;
              *(ulong *)(lVar28 + 0xd0) = CONCAT44(fVar94,fVar79);
              if (*(char *)(lVar28 + 0x248) == '\0') {
                fVar100 = fVar79 - fVar100;
                fVar114 = fVar94 - *(float *)(lVar28 + 0xd4);
                fVar115 = fVar85 - fVar115;
                fVar116 = 0.0 - *(float *)(lVar28 + 0xdc);
                fVar100 = fVar100 * fVar100;
                fVar114 = fVar114 * fVar114;
                fVar115 = fVar115 * fVar115;
                fVar116 = fVar116 * fVar116;
                auVar34._0_4_ = fVar100 + fVar114;
                auVar34._4_4_ = fVar115 + fVar116;
                auVar34._8_4_ = fVar100 + fVar114;
                auVar34._12_4_ = fVar115 + fVar116;
                auVar101 = NEON_ext(auVar34,auVar34,4,1);
                fVar100 = auVar101._0_4_ + auVar101._4_4_;
                bVar20 = fVar100 <= 1.1920929e-07;
                *(bool *)(lVar28 + 0x248) = 1.1920929e-07 < fVar100;
              }
              else {
                bVar20 = false;
              }
              auVar102._0_4_ = fVar67 / fVar79;
              auVar102._4_4_ = fVar62 / SQRT(auVar87._8_4_ + auVar87._12_4_);
              auVar102._8_4_ = fVar64 / SQRT(auVar87._0_4_ + auVar87._4_4_);
              auVar102._12_4_ = fVar65 / SQRT(auVar87._8_4_ + auVar87._12_4_);
              auVar101 = NEON_ext(auVar102,auVar102,8,1);
              auVar81._0_4_ = fVar77 / fVar94;
              auVar81._4_4_ = fVar78 / SQRT(auVar95._8_4_ + auVar95._12_4_);
              auVar81._8_4_ = fVar117 / SQRT(auVar95._0_4_ + auVar95._4_4_);
              auVar81._12_4_ = fVar68 / SQRT(auVar95._8_4_ + auVar95._12_4_);
              auVar87 = NEON_ext(auVar81,auVar81,8,1);
              fVar67 = auVar87._0_4_;
              fVar86 = fVar86 / fVar85;
              fVar92 = fVar92 / SQRT(auVar80._8_4_ + auVar80._12_4_);
              fVar93 = fVar93 / SQRT(auVar80._0_4_ + auVar80._4_4_);
              fVar62 = auVar56._0_4_ + fStack_70 * auVar102._0_4_ + local_90 * auVar81._4_4_ +
                       local_a0 * fVar93;
              fVar64 = auVar56._4_4_ + fStack_6c * auVar102._0_4_ + fStack_8c * auVar81._4_4_ +
                       fStack_9c * fVar93;
              fVar65 = auVar56._8_4_ + fStack_68 * auVar102._0_4_ + fStack_88 * auVar81._4_4_ +
                       fStack_98 * fVar93;
              fVar93 = auVar56._12_4_ + fStack_64 * auVar102._0_4_ + fStack_84 * auVar81._4_4_ +
                       fStack_94 * fVar93;
              local_b0 = auVar57._0_4_;
              fStack_ac = auVar57._4_4_;
              fStack_a8 = auVar57._8_4_;
              fStack_a4 = auVar57._12_4_;
              auVar69._0_4_ = SQRT(fVar62) * 0.5 * local_b0;
              auVar69._4_4_ = SQRT(fVar64) * 0.5 * fStack_ac;
              auVar69._8_4_ = SQRT(fVar65) * 0.5 * fStack_a8;
              auVar69._12_4_ = SQRT(fVar93) * 0.5 * fStack_a4;
              auVar80 = NEON_frecpe(auVar69,4);
              auVar87 = NEON_frecps(auVar80,auVar69,4);
              auVar96._0_4_ = auVar80._0_4_ * auVar87._0_4_;
              auVar96._4_4_ = auVar80._4_4_ * auVar87._4_4_;
              auVar96._8_4_ = auVar80._8_4_ * auVar87._8_4_;
              auVar96._12_4_ = auVar80._12_4_ * auVar87._12_4_;
              auVar80 = NEON_frecps(auVar96,auVar69,4);
              fVar117 = auVar101._0_4_ + fVar86;
              auVar15._8_4_ = fVar67 + -fVar92;
              auVar15._4_4_ = fVar117;
              fVar100 = auVar96._0_4_ * auVar80._0_4_;
              fVar115 = auVar96._4_4_ * auVar80._4_4_;
              fVar77 = auVar96._8_4_ * auVar80._8_4_;
              fVar78 = auVar96._12_4_ * auVar80._12_4_;
              fVar68 = (float)((uint)fVar62 ^
                              ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64));
              fVar79 = (float)((uint)fVar62 ^
                              ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64));
              fVar85 = (float)((uint)fVar62 ^
                              ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64));
              fVar94 = (float)((uint)fVar62 ^
                              ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64));
              auVar15._0_4_ = (auVar102._4_4_ + auVar81._0_4_) * fVar100;
              auVar103._0_8_ = auVar15._0_8_ << 0x20;
              auVar103._8_4_ = fVar117 * fVar100;
              auVar103._12_4_ = (fVar67 + -fVar92) * fVar100;
              auVar104._4_12_ = auVar103._4_12_;
              auVar104._0_4_ = SQRT(fVar62) * 0.5;
              auVar88._0_4_ = (auVar101._0_4_ + fVar86) * fVar77;
              auVar88._4_4_ = (fVar67 + fVar92) * fVar77;
              auVar88._12_4_ = (auVar102._4_4_ - auVar81._0_4_) * fVar77;
              auVar70._0_4_ = (fVar67 - fVar92) * fVar78;
              auVar70._4_4_ = (fVar86 - auVar102._8_4_) * fVar78;
              auVar70._8_4_ = (auVar102._4_4_ - auVar81._0_4_) * fVar78;
              auVar4._4_4_ = SQRT(fVar64) * 0.5;
              auVar4._0_4_ = (auVar102._4_4_ + auVar81._0_4_) * fVar115;
              auVar4._8_4_ = (fVar67 + fVar92) * fVar115;
              auVar4._12_4_ = (fVar86 + -auVar102._8_4_) * fVar115;
              auVar11._4_4_ = -(uint)(fVar62 <= fVar64);
              auVar11._0_4_ = -(uint)(fVar62 <= fVar64);
              auVar11._8_4_ = -(uint)(fVar62 <= fVar64);
              auVar11._12_4_ = -(uint)(fVar62 <= fVar64);
              auVar88._8_4_ = SQRT(fVar65) * 0.5;
              auVar70._12_4_ = SQRT(fVar93) * 0.5;
              auVar5._4_4_ = -(uint)(fVar79 <= fVar65);
              auVar5._0_4_ = -(uint)(fVar68 <= fVar65);
              auVar5._8_4_ = -(uint)(fVar85 <= fVar65);
              auVar5._12_4_ = -(uint)(fVar94 <= fVar65);
              auVar88 = auVar88 ^ (auVar88 ^ auVar104 ^ (auVar104 ^ auVar4) & auVar11) & ~auVar5;
              auVar58._4_4_ =
                   -(uint)((float)((uint)fVar79 ^
                                  ((uint)fVar79 ^ (uint)fVar65) & -(uint)(fVar79 <= fVar65)) <=
                          fVar93);
              auVar58._0_4_ =
                   -(uint)((float)((uint)fVar68 ^
                                  ((uint)fVar68 ^ (uint)fVar65) & -(uint)(fVar68 <= fVar65)) <=
                          fVar93);
              auVar58._12_4_ =
                   -(uint)((float)((uint)fVar94 ^
                                  ((uint)fVar94 ^ (uint)fVar65) & -(uint)(fVar94 <= fVar65)) <=
                          fVar93);
              auVar58._8_4_ =
                   -(uint)((float)((uint)fVar85 ^
                                  ((uint)fVar85 ^ (uint)fVar65) & -(uint)(fVar85 <= fVar65)) <=
                          fVar93);
              auVar88 = auVar88 ^ (auVar88 ^ auVar70) & auVar58;
              uVar66 = *(undefined8 *)(lVar28 + 0xe8);
              uVar63 = *(undefined8 *)(lVar28 + 0xe0);
              auVar80 = *(undefined1 (*) [16])(lVar28 + 0xf0);
              *(long *)(lVar28 + 0xe8) = auVar88._8_8_;
              *(long *)(lVar28 + 0xe0) = auVar88._0_8_;
              auVar87 = *(undefined1 (*) [16])(pfVar24 + 0xc);
              auVar95 = NEON_ext(auVar87,auVar87,8,1);
              *(ulong *)(lVar28 + 0xf8) = (ulong)(uint)auVar95._0_4_;
              *(long *)(lVar28 + 0xf0) = auVar87._0_8_;
              if (bVar20) {
                fVar86 = auVar87._0_4_ - auVar80._0_4_;
                fVar92 = auVar87._4_4_ - auVar80._4_4_;
                fVar93 = auVar95._0_4_ - auVar80._8_4_;
                fVar67 = 0.0 - auVar80._12_4_;
                fVar86 = fVar86 * fVar86;
                fVar92 = fVar92 * fVar92;
                fVar93 = fVar93 * fVar93;
                fVar67 = fVar67 * fVar67;
                auVar35._0_4_ = fVar86 + fVar92;
                auVar35._4_4_ = fVar93 + fVar67;
                auVar35._8_4_ = fVar86 + fVar92;
                auVar35._12_4_ = fVar93 + fVar67;
                auVar80 = NEON_ext(auVar35,auVar35,4,1);
                fVar86 = auVar80._0_4_ + auVar80._4_4_;
                *(bool *)(lVar28 + 0x248) = 1.1920929e-07 < fVar86;
                if (fVar86 <= 1.1920929e-07) {
                  fVar86 = (float)uVar63;
                  fVar62 = auVar88._0_4_ - fVar86;
                  fVar92 = (float)((ulong)uVar63 >> 0x20);
                  fVar64 = auVar88._4_4_ - fVar92;
                  fVar93 = (float)uVar66;
                  fVar65 = auVar88._8_4_ - fVar93;
                  fVar67 = (float)((ulong)uVar66 >> 0x20);
                  fVar100 = auVar88._12_4_ - fVar67;
                  fVar86 = fVar86 + auVar88._0_4_;
                  fVar92 = fVar92 + auVar88._4_4_;
                  fVar93 = fVar93 + auVar88._8_4_;
                  fVar67 = fVar67 + auVar88._12_4_;
                  fVar62 = fVar62 * fVar62;
                  fVar64 = fVar64 * fVar64;
                  fVar65 = fVar65 * fVar65;
                  fVar100 = fVar100 * fVar100;
                  fVar86 = fVar86 * fVar86;
                  fVar92 = fVar92 * fVar92;
                  fVar93 = fVar93 * fVar93;
                  fVar67 = fVar67 * fVar67;
                  auVar36._0_4_ = fVar62 + fVar64;
                  auVar36._4_4_ = fVar65 + fVar100;
                  auVar36._8_4_ = fVar62 + fVar64;
                  auVar36._12_4_ = fVar65 + fVar100;
                  auVar37._0_4_ = fVar86 + fVar92;
                  auVar37._4_4_ = fVar93 + fVar67;
                  auVar37._8_4_ = fVar86 + fVar92;
                  auVar37._12_4_ = fVar93 + fVar67;
                  auVar87 = NEON_ext(auVar36,auVar36,4,1);
                  auVar80 = NEON_ext(auVar37,auVar37,4,1);
                  *(bool *)(lVar28 + 0x248) =
                       1.1920929e-07 < auVar87._0_4_ + auVar87._4_4_ &&
                       1.1920929e-07 < auVar80._0_4_ + auVar80._4_4_;
                }
              }
              if (((*(char *)(param_1 + 0x146) != '\0') && (*(char *)(lVar28 + 0x240) != '\0')) &&
                 (*(char *)(lVar28 + 0x241) != '\0')) {
                iVar22 = FUN_00c4b2f8(lVar28);
                FUN_00c4b548(lVar28,iVar22 != 0);
                plVar30 = *(long **)(lVar28 + 0x50);
                plVar1 = *(long **)(lVar28 + 0x58);
                *(undefined4 *)(lVar28 + 0x158) = 0;
                for (; plVar30 != plVar1; plVar30 = plVar30 + 1) {
                  plVar27 = *(long **)(*plVar30 + 0x30);
                  plVar2 = *(long **)(*plVar30 + 0x38);
                  if (plVar27 != plVar2) {
                    do {
                      plVar26 = plVar27 + 1;
                      if (((uint)*(undefined8 *)puVar19 & (*(uint *)(*plVar27 + 0x108) ^ 0xffffffff)
                          & 7) == 0) {
                        FUN_00c4ccf8();
                        break;
                      }
                      plVar27 = plVar26;
                    } while (plVar2 != plVar26);
                  }
                }
                *(undefined1 *)(lVar28 + 0x24a) = 1;
              }
            }
            else if (((*(char *)(param_1 + 0x146) != '\0') && (*(char *)(lVar28 + 0x240) != '\0'))
                    && (*(char *)(lVar28 + 0x241) != '\0')) {
              plVar1 = *(long **)(lVar28 + 0x58);
              for (plVar30 = *(long **)(lVar28 + 0x50); plVar30 != plVar1; plVar30 = plVar30 + 1) {
                plVar27 = *(long **)(*plVar30 + 0x30);
                plVar2 = *(long **)(*plVar30 + 0x38);
                if (plVar27 != plVar2) {
                  do {
                    plVar26 = plVar27 + 1;
                    if (((uint)*(undefined8 *)puVar19 & (*(uint *)(*plVar27 + 0x108) ^ 0xffffffff) &
                        7) == 0) {
                      FUN_00c4ccf8();
                      break;
                    }
                    plVar27 = plVar26;
                  } while (plVar2 != plVar26);
                }
              }
            }
            lVar29 = *(long *)(lVar29 + 8);
          } while (lVar25 != lVar29);
        }
      }
    }
    else if (lVar25 != lVar29) {
      if (bVar21) {
        auVar56 = NEON_fmov(0x3f800000,4);
        auVar57 = NEON_fmov(0x40800000,4);
        do {
          fVar86 = pfVar24[8];
          fVar92 = pfVar24[9];
          fVar93 = pfVar24[10];
          fVar67 = pfVar24[0xb] * pfVar24[0xb];
          auVar80._0_4_ = fVar86 * fVar86 + fVar92 * fVar92;
          auVar80._4_4_ = fVar93 * fVar93 + fVar67;
          auVar80._8_4_ = fVar86 * fVar86 + fVar92 * fVar92;
          auVar80._12_4_ = fVar93 * fVar93 + fVar67;
          fVar67 = *pfVar24;
          fVar62 = pfVar24[1];
          fVar64 = pfVar24[2];
          fVar65 = pfVar24[3];
          fVar77 = (float)*(undefined8 *)(pfVar24 + 4);
          fVar78 = (float)((ulong)*(undefined8 *)(pfVar24 + 4) >> 0x20);
          fVar117 = (float)*(undefined8 *)(pfVar24 + 6);
          fVar68 = (float)((ulong)*(undefined8 *)(pfVar24 + 6) >> 0x20);
          auVar80 = NEON_ext(auVar80,auVar80,4,1);
          lVar28 = *(long *)(lVar29 + 0x10);
          auVar87._0_4_ = fVar77 * fVar77 + fVar78 * fVar78;
          auVar87._4_4_ = fVar117 * fVar117 + fVar68 * fVar68;
          auVar87._8_4_ = fVar77 * fVar77 + fVar78 * fVar78;
          auVar87._12_4_ = fVar117 * fVar117 + fVar68 * fVar68;
          auVar95._0_4_ = fVar67 * fVar67 + fVar62 * fVar62;
          auVar95._4_4_ = fVar64 * fVar64 + fVar65 * fVar65;
          auVar95._8_4_ = fVar67 * fVar67 + fVar62 * fVar62;
          auVar95._12_4_ = fVar64 * fVar64 + fVar65 * fVar65;
          auVar101 = NEON_ext(auVar87,auVar87,4,1);
          auVar87 = NEON_ext(auVar95,auVar95,4,1);
          fVar85 = SQRT(auVar80._0_4_ + auVar80._4_4_);
          fVar79 = SQRT(auVar87._0_4_ + auVar87._4_4_);
          fVar100 = *(float *)(lVar28 + 0xd0);
          fVar115 = *(float *)(lVar28 + 0xd8);
          fVar94 = SQRT(auVar101._0_4_ + auVar101._4_4_);
          *(ulong *)(lVar28 + 0xd8) = (ulong)(uint)fVar85;
          *(ulong *)(lVar28 + 0xd0) = CONCAT44(fVar94,fVar79);
          if (*(char *)(lVar28 + 0x248) == '\0') {
            fVar100 = fVar79 - fVar100;
            fVar114 = fVar94 - *(float *)(lVar28 + 0xd4);
            fVar115 = fVar85 - fVar115;
            fVar116 = 0.0 - *(float *)(lVar28 + 0xdc);
            fVar100 = fVar100 * fVar100;
            fVar114 = fVar114 * fVar114;
            fVar115 = fVar115 * fVar115;
            fVar116 = fVar116 * fVar116;
            auVar45._0_4_ = fVar100 + fVar114;
            auVar45._4_4_ = fVar115 + fVar116;
            auVar45._8_4_ = fVar100 + fVar114;
            auVar45._12_4_ = fVar115 + fVar116;
            auVar95 = NEON_ext(auVar45,auVar45,4,1);
            fVar100 = auVar95._0_4_ + auVar95._4_4_;
            bVar20 = fVar100 <= 1.1920929e-07;
            *(bool *)(lVar28 + 0x248) = 1.1920929e-07 < fVar100;
          }
          else {
            bVar20 = false;
          }
          auVar108._0_4_ = fVar67 / fVar79;
          auVar108._4_4_ = fVar62 / SQRT(auVar87._8_4_ + auVar87._12_4_);
          auVar108._8_4_ = fVar64 / SQRT(auVar87._0_4_ + auVar87._4_4_);
          auVar108._12_4_ = fVar65 / SQRT(auVar87._8_4_ + auVar87._12_4_);
          auVar95 = NEON_ext(auVar108,auVar108,8,1);
          auVar83._0_4_ = fVar77 / fVar94;
          auVar83._4_4_ = fVar78 / SQRT(auVar101._8_4_ + auVar101._12_4_);
          auVar83._8_4_ = fVar117 / SQRT(auVar101._0_4_ + auVar101._4_4_);
          auVar83._12_4_ = fVar68 / SQRT(auVar101._8_4_ + auVar101._12_4_);
          auVar87 = NEON_ext(auVar83,auVar83,8,1);
          fVar67 = auVar87._0_4_;
          fVar86 = fVar86 / fVar85;
          fVar92 = fVar92 / SQRT(auVar80._8_4_ + auVar80._12_4_);
          fVar93 = fVar93 / SQRT(auVar80._0_4_ + auVar80._4_4_);
          fVar62 = auVar56._0_4_ + fStack_70 * auVar108._0_4_ + local_90 * auVar83._4_4_ +
                   local_a0 * fVar93;
          fVar64 = auVar56._4_4_ + fStack_6c * auVar108._0_4_ + fStack_8c * auVar83._4_4_ +
                   fStack_9c * fVar93;
          fVar65 = auVar56._8_4_ + fStack_68 * auVar108._0_4_ + fStack_88 * auVar83._4_4_ +
                   fStack_98 * fVar93;
          fVar93 = auVar56._12_4_ + fStack_64 * auVar108._0_4_ + fStack_84 * auVar83._4_4_ +
                   fStack_94 * fVar93;
          local_b0 = auVar57._0_4_;
          fStack_ac = auVar57._4_4_;
          fStack_a8 = auVar57._8_4_;
          fStack_a4 = auVar57._12_4_;
          auVar73._0_4_ = SQRT(fVar62) * 0.5 * local_b0;
          auVar73._4_4_ = SQRT(fVar64) * 0.5 * fStack_ac;
          auVar73._8_4_ = SQRT(fVar65) * 0.5 * fStack_a8;
          auVar73._12_4_ = SQRT(fVar93) * 0.5 * fStack_a4;
          auVar80 = NEON_frecpe(auVar73,4);
          auVar87 = NEON_frecps(auVar80,auVar73,4);
          auVar98._0_4_ = auVar80._0_4_ * auVar87._0_4_;
          auVar98._4_4_ = auVar80._4_4_ * auVar87._4_4_;
          auVar98._8_4_ = auVar80._8_4_ * auVar87._8_4_;
          auVar98._12_4_ = auVar80._12_4_ * auVar87._12_4_;
          auVar80 = NEON_frecps(auVar98,auVar73,4);
          fVar117 = auVar95._0_4_ + fVar86;
          auVar17._8_4_ = fVar67 + -fVar92;
          auVar17._4_4_ = fVar117;
          fVar100 = auVar98._0_4_ * auVar80._0_4_;
          fVar115 = auVar98._4_4_ * auVar80._4_4_;
          fVar77 = auVar98._8_4_ * auVar80._8_4_;
          fVar78 = auVar98._12_4_ * auVar80._12_4_;
          fVar68 = (float)((uint)fVar62 ^ ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64))
          ;
          fVar79 = (float)((uint)fVar62 ^ ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64))
          ;
          fVar85 = (float)((uint)fVar62 ^ ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64))
          ;
          fVar94 = (float)((uint)fVar62 ^ ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64))
          ;
          auVar17._0_4_ = (auVar108._4_4_ + auVar83._0_4_) * fVar100;
          auVar109._0_8_ = auVar17._0_8_ << 0x20;
          auVar109._8_4_ = fVar117 * fVar100;
          auVar109._12_4_ = (fVar67 + -fVar92) * fVar100;
          auVar110._4_12_ = auVar109._4_12_;
          auVar110._0_4_ = SQRT(fVar62) * 0.5;
          auVar90._0_4_ = (auVar95._0_4_ + fVar86) * fVar77;
          auVar90._4_4_ = (fVar67 + fVar92) * fVar77;
          auVar90._12_4_ = (auVar108._4_4_ - auVar83._0_4_) * fVar77;
          auVar74._0_4_ = (fVar67 - fVar92) * fVar78;
          auVar74._4_4_ = (fVar86 - auVar108._8_4_) * fVar78;
          auVar74._8_4_ = (auVar108._4_4_ - auVar83._0_4_) * fVar78;
          auVar101._4_4_ = SQRT(fVar64) * 0.5;
          auVar101._0_4_ = (auVar108._4_4_ + auVar83._0_4_) * fVar115;
          auVar101._8_4_ = (fVar67 + fVar92) * fVar115;
          auVar101._12_4_ = (fVar86 + -auVar108._8_4_) * fVar115;
          auVar14._4_4_ = -(uint)(fVar62 <= fVar64);
          auVar14._0_4_ = -(uint)(fVar62 <= fVar64);
          auVar14._8_4_ = -(uint)(fVar62 <= fVar64);
          auVar14._12_4_ = -(uint)(fVar62 <= fVar64);
          auVar90._8_4_ = SQRT(fVar65) * 0.5;
          auVar74._12_4_ = SQRT(fVar93) * 0.5;
          auVar10._4_4_ = -(uint)(fVar79 <= fVar65);
          auVar10._0_4_ = -(uint)(fVar68 <= fVar65);
          auVar10._8_4_ = -(uint)(fVar85 <= fVar65);
          auVar10._12_4_ = -(uint)(fVar94 <= fVar65);
          auVar90 = auVar90 ^ (auVar90 ^ auVar110 ^ (auVar110 ^ auVar101) & auVar14) & ~auVar10;
          auVar60._4_4_ =
               -(uint)((float)((uint)fVar79 ^
                              ((uint)fVar79 ^ (uint)fVar65) & -(uint)(fVar79 <= fVar65)) <= fVar93);
          auVar60._0_4_ =
               -(uint)((float)((uint)fVar68 ^
                              ((uint)fVar68 ^ (uint)fVar65) & -(uint)(fVar68 <= fVar65)) <= fVar93);
          auVar60._12_4_ =
               -(uint)((float)((uint)fVar94 ^
                              ((uint)fVar94 ^ (uint)fVar65) & -(uint)(fVar94 <= fVar65)) <= fVar93);
          auVar60._8_4_ =
               -(uint)((float)((uint)fVar85 ^
                              ((uint)fVar85 ^ (uint)fVar65) & -(uint)(fVar85 <= fVar65)) <= fVar93);
          auVar90 = auVar90 ^ (auVar90 ^ auVar74) & auVar60;
          uVar66 = *(undefined8 *)(lVar28 + 0xe8);
          uVar63 = *(undefined8 *)(lVar28 + 0xe0);
          auVar80 = *(undefined1 (*) [16])(lVar28 + 0xf0);
          *(long *)(lVar28 + 0xe8) = auVar90._8_8_;
          *(long *)(lVar28 + 0xe0) = auVar90._0_8_;
          auVar87 = *(undefined1 (*) [16])(pfVar24 + 0xc);
          auVar95 = NEON_ext(auVar87,auVar87,8,1);
          *(ulong *)(lVar28 + 0xf8) = (ulong)(uint)auVar95._0_4_;
          *(long *)(lVar28 + 0xf0) = auVar87._0_8_;
          if (bVar20) {
            fVar86 = auVar87._0_4_ - auVar80._0_4_;
            fVar92 = auVar87._4_4_ - auVar80._4_4_;
            fVar93 = auVar95._0_4_ - auVar80._8_4_;
            fVar67 = 0.0 - auVar80._12_4_;
            fVar86 = fVar86 * fVar86;
            fVar92 = fVar92 * fVar92;
            fVar93 = fVar93 * fVar93;
            fVar67 = fVar67 * fVar67;
            auVar46._0_4_ = fVar86 + fVar92;
            auVar46._4_4_ = fVar93 + fVar67;
            auVar46._8_4_ = fVar86 + fVar92;
            auVar46._12_4_ = fVar93 + fVar67;
            auVar80 = NEON_ext(auVar46,auVar46,4,1);
            fVar86 = auVar80._0_4_ + auVar80._4_4_;
            *(bool *)(lVar28 + 0x248) = 1.1920929e-07 < fVar86;
            if (fVar86 <= 1.1920929e-07) {
              fVar86 = (float)uVar63;
              fVar62 = auVar90._0_4_ - fVar86;
              fVar92 = (float)((ulong)uVar63 >> 0x20);
              fVar64 = auVar90._4_4_ - fVar92;
              fVar93 = (float)uVar66;
              fVar65 = auVar90._8_4_ - fVar93;
              fVar67 = (float)((ulong)uVar66 >> 0x20);
              fVar100 = auVar90._12_4_ - fVar67;
              fVar86 = fVar86 + auVar90._0_4_;
              fVar92 = fVar92 + auVar90._4_4_;
              fVar93 = fVar93 + auVar90._8_4_;
              fVar67 = fVar67 + auVar90._12_4_;
              fVar62 = fVar62 * fVar62;
              fVar64 = fVar64 * fVar64;
              fVar65 = fVar65 * fVar65;
              fVar100 = fVar100 * fVar100;
              fVar86 = fVar86 * fVar86;
              fVar92 = fVar92 * fVar92;
              fVar93 = fVar93 * fVar93;
              fVar67 = fVar67 * fVar67;
              auVar47._0_4_ = fVar62 + fVar64;
              auVar47._4_4_ = fVar65 + fVar100;
              auVar47._8_4_ = fVar62 + fVar64;
              auVar47._12_4_ = fVar65 + fVar100;
              auVar48._0_4_ = fVar86 + fVar92;
              auVar48._4_4_ = fVar93 + fVar67;
              auVar48._8_4_ = fVar86 + fVar92;
              auVar48._12_4_ = fVar93 + fVar67;
              auVar87 = NEON_ext(auVar47,auVar47,4,1);
              auVar80 = NEON_ext(auVar48,auVar48,4,1);
              *(bool *)(lVar28 + 0x248) =
                   1.1920929e-07 < auVar87._0_4_ + auVar87._4_4_ &&
                   1.1920929e-07 < auVar80._0_4_ + auVar80._4_4_;
            }
          }
          if (((*(char *)(param_1 + 0x146) != '\0') && (*(char *)(lVar28 + 0x240) != '\0')) &&
             (*(char *)(lVar28 + 0x241) != '\0')) {
            FUN_00c4bccc();
          }
          lVar29 = *(long *)(lVar29 + 8);
        } while (lVar25 != lVar29);
      }
      else {
        auVar56 = NEON_fmov(0x3f800000,4);
        auVar57 = NEON_fmov(0x40800000,4);
        do {
          fVar86 = pfVar24[8];
          fVar92 = pfVar24[9];
          fVar93 = pfVar24[10];
          fVar67 = pfVar24[0xb] * pfVar24[0xb];
          auVar38._0_4_ = fVar86 * fVar86 + fVar92 * fVar92;
          auVar38._4_4_ = fVar93 * fVar93 + fVar67;
          auVar38._8_4_ = fVar86 * fVar86 + fVar92 * fVar92;
          auVar38._12_4_ = fVar93 * fVar93 + fVar67;
          fVar67 = *pfVar24;
          fVar62 = pfVar24[1];
          fVar64 = pfVar24[2];
          fVar65 = pfVar24[3];
          fVar77 = (float)*(undefined8 *)(pfVar24 + 4);
          fVar78 = (float)((ulong)*(undefined8 *)(pfVar24 + 4) >> 0x20);
          fVar117 = (float)*(undefined8 *)(pfVar24 + 6);
          fVar68 = (float)((ulong)*(undefined8 *)(pfVar24 + 6) >> 0x20);
          auVar80 = NEON_ext(auVar38,auVar38,4,1);
          lVar28 = *(long *)(lVar29 + 0x10);
          auVar39._0_4_ = fVar77 * fVar77 + fVar78 * fVar78;
          auVar39._4_4_ = fVar117 * fVar117 + fVar68 * fVar68;
          auVar39._8_4_ = fVar77 * fVar77 + fVar78 * fVar78;
          auVar39._12_4_ = fVar117 * fVar117 + fVar68 * fVar68;
          auVar40._0_4_ = fVar67 * fVar67 + fVar62 * fVar62;
          auVar40._4_4_ = fVar64 * fVar64 + fVar65 * fVar65;
          auVar40._8_4_ = fVar67 * fVar67 + fVar62 * fVar62;
          auVar40._12_4_ = fVar64 * fVar64 + fVar65 * fVar65;
          auVar95 = NEON_ext(auVar39,auVar39,4,1);
          auVar87 = NEON_ext(auVar40,auVar40,4,1);
          fVar85 = SQRT(auVar80._0_4_ + auVar80._4_4_);
          fVar79 = SQRT(auVar87._0_4_ + auVar87._4_4_);
          fVar100 = *(float *)(lVar28 + 0xd0);
          fVar115 = *(float *)(lVar28 + 0xd8);
          fVar94 = SQRT(auVar95._0_4_ + auVar95._4_4_);
          *(ulong *)(lVar28 + 0xd8) = (ulong)(uint)fVar85;
          *(ulong *)(lVar28 + 0xd0) = CONCAT44(fVar94,fVar79);
          if (*(char *)(lVar28 + 0x248) == '\0') {
            fVar100 = fVar79 - fVar100;
            fVar114 = fVar94 - *(float *)(lVar28 + 0xd4);
            fVar115 = fVar85 - fVar115;
            fVar116 = 0.0 - *(float *)(lVar28 + 0xdc);
            fVar100 = fVar100 * fVar100;
            fVar114 = fVar114 * fVar114;
            fVar115 = fVar115 * fVar115;
            fVar116 = fVar116 * fVar116;
            auVar41._0_4_ = fVar100 + fVar114;
            auVar41._4_4_ = fVar115 + fVar116;
            auVar41._8_4_ = fVar100 + fVar114;
            auVar41._12_4_ = fVar115 + fVar116;
            auVar101 = NEON_ext(auVar41,auVar41,4,1);
            fVar100 = auVar101._0_4_ + auVar101._4_4_;
            bVar20 = fVar100 <= 1.1920929e-07;
            *(bool *)(lVar28 + 0x248) = 1.1920929e-07 < fVar100;
          }
          else {
            bVar20 = false;
          }
          auVar105._0_4_ = fVar67 / fVar79;
          auVar105._4_4_ = fVar62 / SQRT(auVar87._8_4_ + auVar87._12_4_);
          auVar105._8_4_ = fVar64 / SQRT(auVar87._0_4_ + auVar87._4_4_);
          auVar105._12_4_ = fVar65 / SQRT(auVar87._8_4_ + auVar87._12_4_);
          auVar101 = NEON_ext(auVar105,auVar105,8,1);
          auVar82._0_4_ = fVar77 / fVar94;
          auVar82._4_4_ = fVar78 / SQRT(auVar95._8_4_ + auVar95._12_4_);
          auVar82._8_4_ = fVar117 / SQRT(auVar95._0_4_ + auVar95._4_4_);
          auVar82._12_4_ = fVar68 / SQRT(auVar95._8_4_ + auVar95._12_4_);
          auVar87 = NEON_ext(auVar82,auVar82,8,1);
          fVar67 = auVar87._0_4_;
          fVar86 = fVar86 / fVar85;
          fVar92 = fVar92 / SQRT(auVar80._8_4_ + auVar80._12_4_);
          fVar93 = fVar93 / SQRT(auVar80._0_4_ + auVar80._4_4_);
          fVar62 = auVar56._0_4_ + fStack_70 * auVar105._0_4_ + local_90 * auVar82._4_4_ +
                   local_a0 * fVar93;
          fVar64 = auVar56._4_4_ + fStack_6c * auVar105._0_4_ + fStack_8c * auVar82._4_4_ +
                   fStack_9c * fVar93;
          fVar65 = auVar56._8_4_ + fStack_68 * auVar105._0_4_ + fStack_88 * auVar82._4_4_ +
                   fStack_98 * fVar93;
          fVar93 = auVar56._12_4_ + fStack_64 * auVar105._0_4_ + fStack_84 * auVar82._4_4_ +
                   fStack_94 * fVar93;
          local_b0 = auVar57._0_4_;
          fStack_ac = auVar57._4_4_;
          fStack_a8 = auVar57._8_4_;
          fStack_a4 = auVar57._12_4_;
          auVar71._0_4_ = SQRT(fVar62) * 0.5 * local_b0;
          auVar71._4_4_ = SQRT(fVar64) * 0.5 * fStack_ac;
          auVar71._8_4_ = SQRT(fVar65) * 0.5 * fStack_a8;
          auVar71._12_4_ = SQRT(fVar93) * 0.5 * fStack_a4;
          auVar80 = NEON_frecpe(auVar71,4);
          auVar87 = NEON_frecps(auVar80,auVar71,4);
          auVar97._0_4_ = auVar80._0_4_ * auVar87._0_4_;
          auVar97._4_4_ = auVar80._4_4_ * auVar87._4_4_;
          auVar97._8_4_ = auVar80._8_4_ * auVar87._8_4_;
          auVar97._12_4_ = auVar80._12_4_ * auVar87._12_4_;
          auVar80 = NEON_frecps(auVar97,auVar71,4);
          fVar117 = auVar101._0_4_ + fVar86;
          auVar16._8_4_ = fVar67 + -fVar92;
          auVar16._4_4_ = fVar117;
          fVar100 = auVar97._0_4_ * auVar80._0_4_;
          fVar115 = auVar97._4_4_ * auVar80._4_4_;
          fVar77 = auVar97._8_4_ * auVar80._8_4_;
          fVar78 = auVar97._12_4_ * auVar80._12_4_;
          fVar68 = (float)((uint)fVar62 ^ ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64))
          ;
          fVar79 = (float)((uint)fVar62 ^ ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64))
          ;
          fVar85 = (float)((uint)fVar62 ^ ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64))
          ;
          fVar94 = (float)((uint)fVar62 ^ ((uint)fVar62 ^ (uint)fVar64) & -(uint)(fVar62 <= fVar64))
          ;
          auVar16._0_4_ = (auVar105._4_4_ + auVar82._0_4_) * fVar100;
          auVar106._0_8_ = auVar16._0_8_ << 0x20;
          auVar106._8_4_ = fVar117 * fVar100;
          auVar106._12_4_ = (fVar67 + -fVar92) * fVar100;
          auVar107._4_12_ = auVar106._4_12_;
          auVar107._0_4_ = SQRT(fVar62) * 0.5;
          auVar89._0_4_ = (auVar101._0_4_ + fVar86) * fVar77;
          auVar89._4_4_ = (fVar67 + fVar92) * fVar77;
          auVar89._12_4_ = (auVar105._4_4_ - auVar82._0_4_) * fVar77;
          auVar72._0_4_ = (fVar67 - fVar92) * fVar78;
          auVar72._4_4_ = (fVar86 - auVar105._8_4_) * fVar78;
          auVar72._8_4_ = (auVar105._4_4_ - auVar82._0_4_) * fVar78;
          auVar8._4_4_ = SQRT(fVar64) * 0.5;
          auVar8._0_4_ = (auVar105._4_4_ + auVar82._0_4_) * fVar115;
          auVar8._8_4_ = (fVar67 + fVar92) * fVar115;
          auVar8._12_4_ = (fVar86 + -auVar105._8_4_) * fVar115;
          auVar13._4_4_ = -(uint)(fVar62 <= fVar64);
          auVar13._0_4_ = -(uint)(fVar62 <= fVar64);
          auVar13._8_4_ = -(uint)(fVar62 <= fVar64);
          auVar13._12_4_ = -(uint)(fVar62 <= fVar64);
          auVar89._8_4_ = SQRT(fVar65) * 0.5;
          auVar72._12_4_ = SQRT(fVar93) * 0.5;
          auVar9._4_4_ = -(uint)(fVar79 <= fVar65);
          auVar9._0_4_ = -(uint)(fVar68 <= fVar65);
          auVar9._8_4_ = -(uint)(fVar85 <= fVar65);
          auVar9._12_4_ = -(uint)(fVar94 <= fVar65);
          auVar89 = auVar89 ^ (auVar89 ^ auVar107 ^ (auVar107 ^ auVar8) & auVar13) & ~auVar9;
          auVar59._4_4_ =
               -(uint)((float)((uint)fVar79 ^
                              ((uint)fVar79 ^ (uint)fVar65) & -(uint)(fVar79 <= fVar65)) <= fVar93);
          auVar59._0_4_ =
               -(uint)((float)((uint)fVar68 ^
                              ((uint)fVar68 ^ (uint)fVar65) & -(uint)(fVar68 <= fVar65)) <= fVar93);
          auVar59._12_4_ =
               -(uint)((float)((uint)fVar94 ^
                              ((uint)fVar94 ^ (uint)fVar65) & -(uint)(fVar94 <= fVar65)) <= fVar93);
          auVar59._8_4_ =
               -(uint)((float)((uint)fVar85 ^
                              ((uint)fVar85 ^ (uint)fVar65) & -(uint)(fVar85 <= fVar65)) <= fVar93);
          auVar89 = auVar89 ^ (auVar89 ^ auVar72) & auVar59;
          uVar66 = *(undefined8 *)(lVar28 + 0xe8);
          uVar63 = *(undefined8 *)(lVar28 + 0xe0);
          auVar80 = *(undefined1 (*) [16])(lVar28 + 0xf0);
          *(long *)(lVar28 + 0xe8) = auVar89._8_8_;
          *(long *)(lVar28 + 0xe0) = auVar89._0_8_;
          auVar87 = *(undefined1 (*) [16])(pfVar24 + 0xc);
          auVar95 = NEON_ext(auVar87,auVar87,8,1);
          *(ulong *)(lVar28 + 0xf8) = (ulong)(uint)auVar95._0_4_;
          *(long *)(lVar28 + 0xf0) = auVar87._0_8_;
          if (bVar20) {
            fVar86 = auVar87._0_4_ - auVar80._0_4_;
            fVar92 = auVar87._4_4_ - auVar80._4_4_;
            fVar93 = auVar95._0_4_ - auVar80._8_4_;
            fVar67 = 0.0 - auVar80._12_4_;
            fVar86 = fVar86 * fVar86;
            fVar92 = fVar92 * fVar92;
            fVar93 = fVar93 * fVar93;
            fVar67 = fVar67 * fVar67;
            auVar42._0_4_ = fVar86 + fVar92;
            auVar42._4_4_ = fVar93 + fVar67;
            auVar42._8_4_ = fVar86 + fVar92;
            auVar42._12_4_ = fVar93 + fVar67;
            auVar80 = NEON_ext(auVar42,auVar42,4,1);
            fVar86 = auVar80._0_4_ + auVar80._4_4_;
            *(bool *)(lVar28 + 0x248) = 1.1920929e-07 < fVar86;
            if (fVar86 <= 1.1920929e-07) {
              fVar86 = (float)uVar63;
              fVar62 = auVar89._0_4_ - fVar86;
              fVar92 = (float)((ulong)uVar63 >> 0x20);
              fVar64 = auVar89._4_4_ - fVar92;
              fVar93 = (float)uVar66;
              fVar65 = auVar89._8_4_ - fVar93;
              fVar67 = (float)((ulong)uVar66 >> 0x20);
              fVar100 = auVar89._12_4_ - fVar67;
              fVar86 = fVar86 + auVar89._0_4_;
              fVar92 = fVar92 + auVar89._4_4_;
              fVar93 = fVar93 + auVar89._8_4_;
              fVar67 = fVar67 + auVar89._12_4_;
              fVar62 = fVar62 * fVar62;
              fVar64 = fVar64 * fVar64;
              fVar65 = fVar65 * fVar65;
              fVar100 = fVar100 * fVar100;
              fVar86 = fVar86 * fVar86;
              fVar92 = fVar92 * fVar92;
              fVar93 = fVar93 * fVar93;
              fVar67 = fVar67 * fVar67;
              auVar43._0_4_ = fVar62 + fVar64;
              auVar43._4_4_ = fVar65 + fVar100;
              auVar43._8_4_ = fVar62 + fVar64;
              auVar43._12_4_ = fVar65 + fVar100;
              auVar44._0_4_ = fVar86 + fVar92;
              auVar44._4_4_ = fVar93 + fVar67;
              auVar44._8_4_ = fVar86 + fVar92;
              auVar44._12_4_ = fVar93 + fVar67;
              auVar87 = NEON_ext(auVar43,auVar43,4,1);
              auVar80 = NEON_ext(auVar44,auVar44,4,1);
              *(bool *)(lVar28 + 0x248) =
                   1.1920929e-07 < auVar87._0_4_ + auVar87._4_4_ &&
                   1.1920929e-07 < auVar80._0_4_ + auVar80._4_4_;
            }
          }
          if (((*(char *)(param_1 + 0x146) != '\0') && (*(char *)(lVar28 + 0x240) != '\0')) &&
             (*(char *)(lVar28 + 0x241) != '\0')) {
            iVar22 = FUN_00c4b2f8(lVar28);
            FUN_00c4b548(lVar28,iVar22 != 0);
            *(undefined4 *)(lVar28 + 0x158) = 0;
            plVar1 = *(long **)(lVar28 + 0x58);
            for (plVar30 = *(long **)(lVar28 + 0x50); plVar30 != plVar1; plVar30 = plVar30 + 1) {
              plVar27 = *(long **)(*plVar30 + 0x30);
              plVar2 = *(long **)(*plVar30 + 0x38);
              if (plVar27 != plVar2) {
                do {
                  plVar26 = plVar27 + 1;
                  if (((uint)*(undefined8 *)puVar19 & (*(uint *)(*plVar27 + 0x108) ^ 0xffffffff) & 7
                      ) == 0) {
                    FUN_00c4ccf8();
                    break;
                  }
                  plVar27 = plVar26;
                } while (plVar2 != plVar26);
              }
            }
          }
          lVar29 = *(long *)(lVar29 + 8);
        } while (lVar25 != lVar29);
      }
    }
  }
  return;
}


