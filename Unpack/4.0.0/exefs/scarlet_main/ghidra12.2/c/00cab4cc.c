/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cab4cc; name: FUN_00cab4cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cab4cc(long param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined *puVar13;
  int iVar14;
  ulong uVar15;
  float *pfVar16;
  char cVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar41;
  undefined8 uVar40;
  float fVar42;
  float fVar44;
  float fVar45;
  undefined8 uVar43;
  float fVar50;
  undefined1 auVar46 [16];
  float fVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar61;
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar78;
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
  
  if (*(int *)(param_1 + 0x130) != 4) {
    return;
  }
  lVar21 = *(long *)(param_1 + 0x120);
  if (lVar21 == 0) {
    cVar17 = '\0';
    if (DAT_0485a120 != '\0') {
      return;
    }
  }
  else {
    if (DAT_0485a120 != '\0' || *(char *)(lVar21 + 0x211) != '\0') {
      return;
    }
    if (*(char *)(lVar21 + 0x210) == '\0') {
      return;
    }
    lVar22 = *(long *)(param_1 + 0x138) + 0x68;
    lVar20 = *(long *)(*(long *)(param_1 + 0x138) + 0x70);
    if (lVar20 != lVar22) {
      uVar4 = *(undefined1 *)(lVar21 + 0x213);
      do {
        *(undefined1 *)(*(long *)(lVar20 + 0x10) + 0x249) = uVar4;
        lVar20 = *(long *)(lVar20 + 8);
      } while (lVar20 != lVar22);
    }
    uVar15 = FUN_00cabc60(param_1);
    if ((uVar15 & 1) != 0) {
      return;
    }
    cVar17 = *(char *)(lVar21 + 0x212);
  }
  cVar5 = *(char *)(param_1 + 0x145);
  pfVar16 = (float *)(**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0x68))();
  puVar13 = PTR_DAT_047dced0;
  lVar21 = *(long *)(param_1 + 0x138) + 0x68;
  lVar22 = *(long *)(*(long *)(param_1 + 0x138) + 0x70);
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
  if (cVar17 == '\0' && cVar5 == '\0') {
    if (lVar21 != lVar22) {
      auVar35 = NEON_fmov(0x3f800000,4);
      auVar36 = NEON_fmov(0x40800000,4);
      do {
        fVar57 = pfVar16[8];
        fVar61 = pfVar16[9];
        fVar62 = pfVar16[10];
        fVar44 = pfVar16[0xb] * pfVar16[0xb];
        auVar24._0_4_ = fVar57 * fVar57 + fVar61 * fVar61;
        auVar24._4_4_ = fVar62 * fVar62 + fVar44;
        auVar24._8_4_ = fVar57 * fVar57 + fVar61 * fVar61;
        auVar24._12_4_ = fVar62 * fVar62 + fVar44;
        fVar44 = *pfVar16;
        fVar39 = pfVar16[1];
        fVar41 = pfVar16[2];
        fVar42 = pfVar16[3];
        fVar50 = (float)*(undefined8 *)(pfVar16 + 4);
        fVar51 = (float)((ulong)*(undefined8 *)(pfVar16 + 4) >> 0x20);
        fVar78 = (float)*(undefined8 *)(pfVar16 + 6);
        fVar45 = (float)((ulong)*(undefined8 *)(pfVar16 + 6) >> 0x20);
        auVar53 = NEON_ext(auVar24,auVar24,4,1);
        lVar20 = *(long *)(lVar22 + 0x10);
        auVar25._0_4_ = fVar50 * fVar50 + fVar51 * fVar51;
        auVar25._4_4_ = fVar78 * fVar78 + fVar45 * fVar45;
        auVar25._8_4_ = fVar50 * fVar50 + fVar51 * fVar51;
        auVar25._12_4_ = fVar78 * fVar78 + fVar45 * fVar45;
        auVar26._0_4_ = fVar44 * fVar44 + fVar39 * fVar39;
        auVar26._4_4_ = fVar41 * fVar41 + fVar42 * fVar42;
        auVar26._8_4_ = fVar44 * fVar44 + fVar39 * fVar39;
        auVar26._12_4_ = fVar41 * fVar41 + fVar42 * fVar42;
        auVar64 = NEON_ext(auVar25,auVar25,4,1);
        auVar58 = NEON_ext(auVar26,auVar26,4,1);
        fVar56 = SQRT(auVar53._0_4_ + auVar53._4_4_);
        fVar52 = SQRT(auVar58._0_4_ + auVar58._4_4_);
        fVar67 = *(float *)(lVar20 + 0xd0);
        fVar76 = *(float *)(lVar20 + 0xd8);
        fVar63 = SQRT(auVar64._0_4_ + auVar64._4_4_);
        *(ulong *)(lVar20 + 0xd8) = (ulong)(uint)fVar56;
        *(ulong *)(lVar20 + 0xd0) = CONCAT44(fVar63,fVar52);
        if (*(char *)(lVar20 + 0x248) == '\0') {
          fVar67 = fVar52 - fVar67;
          fVar75 = fVar63 - *(float *)(lVar20 + 0xd4);
          fVar76 = fVar56 - fVar76;
          fVar77 = 0.0 - *(float *)(lVar20 + 0xdc);
          fVar67 = fVar67 * fVar67;
          fVar75 = fVar75 * fVar75;
          fVar76 = fVar76 * fVar76;
          fVar77 = fVar77 * fVar77;
          auVar27._0_4_ = fVar67 + fVar75;
          auVar27._4_4_ = fVar76 + fVar77;
          auVar27._8_4_ = fVar67 + fVar75;
          auVar27._12_4_ = fVar76 + fVar77;
          auVar68 = NEON_ext(auVar27,auVar27,4,1);
          fVar67 = auVar68._0_4_ + auVar68._4_4_;
          bVar1 = fVar67 <= 1.1920929e-07;
          *(bool *)(lVar20 + 0x248) = 1.1920929e-07 < fVar67;
        }
        else {
          bVar1 = false;
        }
        auVar69._0_4_ = fVar44 / fVar52;
        auVar69._4_4_ = fVar39 / SQRT(auVar58._8_4_ + auVar58._12_4_);
        auVar69._8_4_ = fVar41 / SQRT(auVar58._0_4_ + auVar58._4_4_);
        auVar69._12_4_ = fVar42 / SQRT(auVar58._8_4_ + auVar58._12_4_);
        auVar68 = NEON_ext(auVar69,auVar69,8,1);
        auVar54._0_4_ = fVar50 / fVar63;
        auVar54._4_4_ = fVar51 / SQRT(auVar64._8_4_ + auVar64._12_4_);
        auVar54._8_4_ = fVar78 / SQRT(auVar64._0_4_ + auVar64._4_4_);
        auVar54._12_4_ = fVar45 / SQRT(auVar64._8_4_ + auVar64._12_4_);
        auVar58 = NEON_ext(auVar54,auVar54,8,1);
        fVar44 = auVar58._0_4_;
        fVar57 = fVar57 / fVar56;
        fVar61 = fVar61 / SQRT(auVar53._8_4_ + auVar53._12_4_);
        fVar62 = fVar62 / SQRT(auVar53._0_4_ + auVar53._4_4_);
        fVar39 = auVar35._0_4_ + fStack_70 * auVar69._0_4_ + local_90 * auVar54._4_4_ +
                 local_a0 * fVar62;
        fVar41 = auVar35._4_4_ + fStack_6c * auVar69._0_4_ + fStack_8c * auVar54._4_4_ +
                 fStack_9c * fVar62;
        fVar42 = auVar35._8_4_ + fStack_68 * auVar69._0_4_ + fStack_88 * auVar54._4_4_ +
                 fStack_98 * fVar62;
        fVar62 = auVar35._12_4_ + fStack_64 * auVar69._0_4_ + fStack_84 * auVar54._4_4_ +
                 fStack_94 * fVar62;
        local_b0 = auVar36._0_4_;
        fStack_ac = auVar36._4_4_;
        fStack_a8 = auVar36._8_4_;
        fStack_a4 = auVar36._12_4_;
        auVar46._0_4_ = SQRT(fVar39) * 0.5 * local_b0;
        auVar46._4_4_ = SQRT(fVar41) * 0.5 * fStack_ac;
        auVar46._8_4_ = SQRT(fVar42) * 0.5 * fStack_a8;
        auVar46._12_4_ = SQRT(fVar62) * 0.5 * fStack_a4;
        auVar53 = NEON_frecpe(auVar46,4);
        auVar58 = NEON_frecps(auVar53,auVar46,4);
        auVar65._0_4_ = auVar53._0_4_ * auVar58._0_4_;
        auVar65._4_4_ = auVar53._4_4_ * auVar58._4_4_;
        auVar65._8_4_ = auVar53._8_4_ * auVar58._8_4_;
        auVar65._12_4_ = auVar53._12_4_ * auVar58._12_4_;
        auVar53 = NEON_frecps(auVar65,auVar46,4);
        fVar78 = auVar68._0_4_ + fVar57;
        auVar11._8_4_ = fVar44 + -fVar61;
        auVar11._4_4_ = fVar78;
        fVar67 = auVar65._0_4_ * auVar53._0_4_;
        fVar76 = auVar65._4_4_ * auVar53._4_4_;
        fVar50 = auVar65._8_4_ * auVar53._8_4_;
        fVar51 = auVar65._12_4_ * auVar53._12_4_;
        fVar45 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar41) & -(uint)(fVar39 <= fVar41));
        fVar52 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar41) & -(uint)(fVar39 <= fVar41));
        fVar56 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar41) & -(uint)(fVar39 <= fVar41));
        fVar63 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar41) & -(uint)(fVar39 <= fVar41));
        auVar11._0_4_ = (auVar69._4_4_ + auVar54._0_4_) * fVar67;
        auVar70._0_8_ = auVar11._0_8_ << 0x20;
        auVar70._8_4_ = fVar78 * fVar67;
        auVar70._12_4_ = (fVar44 + -fVar61) * fVar67;
        auVar71._4_12_ = auVar70._4_12_;
        auVar71._0_4_ = SQRT(fVar39) * 0.5;
        auVar59._0_4_ = (auVar68._0_4_ + fVar57) * fVar50;
        auVar59._4_4_ = (fVar44 + fVar61) * fVar50;
        auVar59._12_4_ = (auVar69._4_4_ - auVar54._0_4_) * fVar50;
        auVar47._0_4_ = (fVar44 - fVar61) * fVar51;
        auVar47._4_4_ = (fVar57 - auVar69._8_4_) * fVar51;
        auVar47._8_4_ = (auVar69._4_4_ - auVar54._0_4_) * fVar51;
        auVar6._4_4_ = SQRT(fVar41) * 0.5;
        auVar6._0_4_ = (auVar69._4_4_ + auVar54._0_4_) * fVar76;
        auVar6._8_4_ = (fVar44 + fVar61) * fVar76;
        auVar6._12_4_ = (fVar57 + -auVar69._8_4_) * fVar76;
        auVar9._4_4_ = -(uint)(fVar39 <= fVar41);
        auVar9._0_4_ = -(uint)(fVar39 <= fVar41);
        auVar9._8_4_ = -(uint)(fVar39 <= fVar41);
        auVar9._12_4_ = -(uint)(fVar39 <= fVar41);
        auVar59._8_4_ = SQRT(fVar42) * 0.5;
        auVar47._12_4_ = SQRT(fVar62) * 0.5;
        auVar7._4_4_ = -(uint)(fVar52 <= fVar42);
        auVar7._0_4_ = -(uint)(fVar45 <= fVar42);
        auVar7._8_4_ = -(uint)(fVar56 <= fVar42);
        auVar7._12_4_ = -(uint)(fVar63 <= fVar42);
        auVar59 = auVar59 ^ (auVar59 ^ auVar71 ^ (auVar71 ^ auVar6) & auVar9) & ~auVar7;
        auVar37._4_4_ =
             -(uint)((float)((uint)fVar52 ^
                            ((uint)fVar52 ^ (uint)fVar42) & -(uint)(fVar52 <= fVar42)) <= fVar62);
        auVar37._0_4_ =
             -(uint)((float)((uint)fVar45 ^
                            ((uint)fVar45 ^ (uint)fVar42) & -(uint)(fVar45 <= fVar42)) <= fVar62);
        auVar37._12_4_ =
             -(uint)((float)((uint)fVar63 ^
                            ((uint)fVar63 ^ (uint)fVar42) & -(uint)(fVar63 <= fVar42)) <= fVar62);
        auVar37._8_4_ =
             -(uint)((float)((uint)fVar56 ^
                            ((uint)fVar56 ^ (uint)fVar42) & -(uint)(fVar56 <= fVar42)) <= fVar62);
        auVar59 = auVar59 ^ (auVar59 ^ auVar47) & auVar37;
        uVar43 = *(undefined8 *)(lVar20 + 0xe8);
        uVar40 = *(undefined8 *)(lVar20 + 0xe0);
        auVar53 = *(undefined1 (*) [16])(lVar20 + 0xf0);
        *(long *)(lVar20 + 0xe8) = auVar59._8_8_;
        *(long *)(lVar20 + 0xe0) = auVar59._0_8_;
        auVar58 = *(undefined1 (*) [16])(pfVar16 + 0xc);
        auVar64 = NEON_ext(auVar58,auVar58,8,1);
        *(ulong *)(lVar20 + 0xf8) = (ulong)(uint)auVar64._0_4_;
        *(long *)(lVar20 + 0xf0) = auVar58._0_8_;
        if (bVar1) {
          fVar57 = auVar58._0_4_ - auVar53._0_4_;
          fVar61 = auVar58._4_4_ - auVar53._4_4_;
          fVar62 = auVar64._0_4_ - auVar53._8_4_;
          fVar44 = 0.0 - auVar53._12_4_;
          fVar57 = fVar57 * fVar57;
          fVar61 = fVar61 * fVar61;
          fVar62 = fVar62 * fVar62;
          fVar44 = fVar44 * fVar44;
          auVar28._0_4_ = fVar57 + fVar61;
          auVar28._4_4_ = fVar62 + fVar44;
          auVar28._8_4_ = fVar57 + fVar61;
          auVar28._12_4_ = fVar62 + fVar44;
          auVar53 = NEON_ext(auVar28,auVar28,4,1);
          fVar57 = auVar53._0_4_ + auVar53._4_4_;
          *(bool *)(lVar20 + 0x248) = 1.1920929e-07 < fVar57;
          if (fVar57 <= 1.1920929e-07) {
            fVar57 = (float)uVar40;
            fVar39 = auVar59._0_4_ - fVar57;
            fVar61 = (float)((ulong)uVar40 >> 0x20);
            fVar41 = auVar59._4_4_ - fVar61;
            fVar62 = (float)uVar43;
            fVar42 = auVar59._8_4_ - fVar62;
            fVar44 = (float)((ulong)uVar43 >> 0x20);
            fVar67 = auVar59._12_4_ - fVar44;
            fVar57 = fVar57 + auVar59._0_4_;
            fVar61 = fVar61 + auVar59._4_4_;
            fVar62 = fVar62 + auVar59._8_4_;
            fVar44 = fVar44 + auVar59._12_4_;
            fVar39 = fVar39 * fVar39;
            fVar41 = fVar41 * fVar41;
            fVar42 = fVar42 * fVar42;
            fVar67 = fVar67 * fVar67;
            fVar57 = fVar57 * fVar57;
            fVar61 = fVar61 * fVar61;
            fVar62 = fVar62 * fVar62;
            fVar44 = fVar44 * fVar44;
            auVar29._0_4_ = fVar39 + fVar41;
            auVar29._4_4_ = fVar42 + fVar67;
            auVar29._8_4_ = fVar39 + fVar41;
            auVar29._12_4_ = fVar42 + fVar67;
            auVar30._0_4_ = fVar57 + fVar61;
            auVar30._4_4_ = fVar62 + fVar44;
            auVar30._8_4_ = fVar57 + fVar61;
            auVar30._12_4_ = fVar62 + fVar44;
            auVar58 = NEON_ext(auVar29,auVar29,4,1);
            auVar53 = NEON_ext(auVar30,auVar30,4,1);
            *(bool *)(lVar20 + 0x248) =
                 1.1920929e-07 < auVar58._0_4_ + auVar58._4_4_ &&
                 1.1920929e-07 < auVar53._0_4_ + auVar53._4_4_;
          }
        }
        if (((*(char *)(param_1 + 0x146) != '\0') && (*(char *)(lVar20 + 0x240) != '\0')) &&
           (*(char *)(lVar20 + 0x241) != '\0')) {
          iVar14 = FUN_00c4b2f8(lVar20);
          FUN_00c4b548(lVar20,iVar14 != 0);
          *(undefined4 *)(lVar20 + 0x158) = 0;
          plVar2 = *(long **)(lVar20 + 0x58);
          for (plVar23 = *(long **)(lVar20 + 0x50); plVar23 != plVar2; plVar23 = plVar23 + 1) {
            plVar19 = *(long **)(*plVar23 + 0x30);
            plVar3 = *(long **)(*plVar23 + 0x38);
            if (plVar19 != plVar3) {
              do {
                plVar18 = plVar19 + 1;
                if (((uint)*(undefined8 *)puVar13 & (*(uint *)(*plVar19 + 0x108) ^ 0xffffffff) & 7)
                    == 0) {
                  FUN_00c4ccf8();
                  break;
                }
                plVar19 = plVar18;
              } while (plVar3 != plVar18);
            }
          }
        }
        lVar22 = *(long *)(lVar22 + 8);
      } while (lVar21 != lVar22);
    }
  }
  else if (lVar21 != lVar22) {
    auVar35 = NEON_fmov(0x3f800000,4);
    auVar36 = NEON_fmov(0x40800000,4);
    do {
      lVar20 = *(long *)(lVar22 + 0x10);
      if (*(char *)(lVar20 + 0x24a) == '\0') {
        fVar57 = pfVar16[8];
        fVar61 = pfVar16[9];
        fVar62 = pfVar16[10];
        fVar44 = pfVar16[0xb] * pfVar16[0xb];
        auVar53._0_4_ = fVar57 * fVar57 + fVar61 * fVar61;
        auVar53._4_4_ = fVar62 * fVar62 + fVar44;
        auVar53._8_4_ = fVar57 * fVar57 + fVar61 * fVar61;
        auVar53._12_4_ = fVar62 * fVar62 + fVar44;
        fVar44 = *pfVar16;
        fVar39 = pfVar16[1];
        fVar41 = pfVar16[2];
        fVar42 = pfVar16[3];
        fVar50 = (float)*(undefined8 *)(pfVar16 + 4);
        fVar51 = (float)((ulong)*(undefined8 *)(pfVar16 + 4) >> 0x20);
        fVar78 = (float)*(undefined8 *)(pfVar16 + 6);
        fVar45 = (float)((ulong)*(undefined8 *)(pfVar16 + 6) >> 0x20);
        auVar53 = NEON_ext(auVar53,auVar53,4,1);
        auVar58._0_4_ = fVar50 * fVar50 + fVar51 * fVar51;
        auVar58._4_4_ = fVar78 * fVar78 + fVar45 * fVar45;
        auVar58._8_4_ = fVar50 * fVar50 + fVar51 * fVar51;
        auVar58._12_4_ = fVar78 * fVar78 + fVar45 * fVar45;
        auVar64._0_4_ = fVar44 * fVar44 + fVar39 * fVar39;
        auVar64._4_4_ = fVar41 * fVar41 + fVar42 * fVar42;
        auVar64._8_4_ = fVar44 * fVar44 + fVar39 * fVar39;
        auVar64._12_4_ = fVar41 * fVar41 + fVar42 * fVar42;
        auVar68 = NEON_ext(auVar58,auVar58,4,1);
        auVar58 = NEON_ext(auVar64,auVar64,4,1);
        fVar56 = SQRT(auVar53._0_4_ + auVar53._4_4_);
        fVar52 = SQRT(auVar58._0_4_ + auVar58._4_4_);
        fVar67 = *(float *)(lVar20 + 0xd0);
        fVar76 = *(float *)(lVar20 + 0xd8);
        fVar63 = SQRT(auVar68._0_4_ + auVar68._4_4_);
        *(ulong *)(lVar20 + 0xd8) = (ulong)(uint)fVar56;
        *(ulong *)(lVar20 + 0xd0) = CONCAT44(fVar63,fVar52);
        if (*(char *)(lVar20 + 0x248) == '\0') {
          fVar67 = fVar52 - fVar67;
          fVar75 = fVar63 - *(float *)(lVar20 + 0xd4);
          fVar76 = fVar56 - fVar76;
          fVar77 = 0.0 - *(float *)(lVar20 + 0xdc);
          fVar67 = fVar67 * fVar67;
          fVar75 = fVar75 * fVar75;
          fVar76 = fVar76 * fVar76;
          fVar77 = fVar77 * fVar77;
          auVar31._0_4_ = fVar67 + fVar75;
          auVar31._4_4_ = fVar76 + fVar77;
          auVar31._8_4_ = fVar67 + fVar75;
          auVar31._12_4_ = fVar76 + fVar77;
          auVar64 = NEON_ext(auVar31,auVar31,4,1);
          fVar67 = auVar64._0_4_ + auVar64._4_4_;
          bVar1 = fVar67 <= 1.1920929e-07;
          *(bool *)(lVar20 + 0x248) = 1.1920929e-07 < fVar67;
        }
        else {
          bVar1 = false;
        }
        auVar72._0_4_ = fVar44 / fVar52;
        auVar72._4_4_ = fVar39 / SQRT(auVar58._8_4_ + auVar58._12_4_);
        auVar72._8_4_ = fVar41 / SQRT(auVar58._0_4_ + auVar58._4_4_);
        auVar72._12_4_ = fVar42 / SQRT(auVar58._8_4_ + auVar58._12_4_);
        auVar64 = NEON_ext(auVar72,auVar72,8,1);
        auVar55._0_4_ = fVar50 / fVar63;
        auVar55._4_4_ = fVar51 / SQRT(auVar68._8_4_ + auVar68._12_4_);
        auVar55._8_4_ = fVar78 / SQRT(auVar68._0_4_ + auVar68._4_4_);
        auVar55._12_4_ = fVar45 / SQRT(auVar68._8_4_ + auVar68._12_4_);
        auVar58 = NEON_ext(auVar55,auVar55,8,1);
        fVar44 = auVar58._0_4_;
        fVar57 = fVar57 / fVar56;
        fVar61 = fVar61 / SQRT(auVar53._8_4_ + auVar53._12_4_);
        fVar62 = fVar62 / SQRT(auVar53._0_4_ + auVar53._4_4_);
        fVar39 = auVar35._0_4_ + fStack_70 * auVar72._0_4_ + local_90 * auVar55._4_4_ +
                 local_a0 * fVar62;
        fVar41 = auVar35._4_4_ + fStack_6c * auVar72._0_4_ + fStack_8c * auVar55._4_4_ +
                 fStack_9c * fVar62;
        fVar42 = auVar35._8_4_ + fStack_68 * auVar72._0_4_ + fStack_88 * auVar55._4_4_ +
                 fStack_98 * fVar62;
        fVar62 = auVar35._12_4_ + fStack_64 * auVar72._0_4_ + fStack_84 * auVar55._4_4_ +
                 fStack_94 * fVar62;
        local_b0 = auVar36._0_4_;
        fStack_ac = auVar36._4_4_;
        fStack_a8 = auVar36._8_4_;
        fStack_a4 = auVar36._12_4_;
        auVar48._0_4_ = SQRT(fVar39) * 0.5 * local_b0;
        auVar48._4_4_ = SQRT(fVar41) * 0.5 * fStack_ac;
        auVar48._8_4_ = SQRT(fVar42) * 0.5 * fStack_a8;
        auVar48._12_4_ = SQRT(fVar62) * 0.5 * fStack_a4;
        auVar53 = NEON_frecpe(auVar48,4);
        auVar58 = NEON_frecps(auVar53,auVar48,4);
        auVar66._0_4_ = auVar53._0_4_ * auVar58._0_4_;
        auVar66._4_4_ = auVar53._4_4_ * auVar58._4_4_;
        auVar66._8_4_ = auVar53._8_4_ * auVar58._8_4_;
        auVar66._12_4_ = auVar53._12_4_ * auVar58._12_4_;
        auVar53 = NEON_frecps(auVar66,auVar48,4);
        fVar78 = auVar64._0_4_ + fVar57;
        auVar12._8_4_ = fVar44 + -fVar61;
        auVar12._4_4_ = fVar78;
        fVar67 = auVar66._0_4_ * auVar53._0_4_;
        fVar76 = auVar66._4_4_ * auVar53._4_4_;
        fVar50 = auVar66._8_4_ * auVar53._8_4_;
        fVar51 = auVar66._12_4_ * auVar53._12_4_;
        fVar45 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar41) & -(uint)(fVar39 <= fVar41));
        fVar52 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar41) & -(uint)(fVar39 <= fVar41));
        fVar56 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar41) & -(uint)(fVar39 <= fVar41));
        fVar63 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar41) & -(uint)(fVar39 <= fVar41));
        auVar12._0_4_ = (auVar72._4_4_ + auVar55._0_4_) * fVar67;
        auVar73._0_8_ = auVar12._0_8_ << 0x20;
        auVar73._8_4_ = fVar78 * fVar67;
        auVar73._12_4_ = (fVar44 + -fVar61) * fVar67;
        auVar74._4_12_ = auVar73._4_12_;
        auVar74._0_4_ = SQRT(fVar39) * 0.5;
        auVar60._0_4_ = (auVar64._0_4_ + fVar57) * fVar50;
        auVar60._4_4_ = (fVar44 + fVar61) * fVar50;
        auVar60._12_4_ = (auVar72._4_4_ - auVar55._0_4_) * fVar50;
        auVar49._0_4_ = (fVar44 - fVar61) * fVar51;
        auVar49._4_4_ = (fVar57 - auVar72._8_4_) * fVar51;
        auVar49._8_4_ = (auVar72._4_4_ - auVar55._0_4_) * fVar51;
        auVar68._4_4_ = SQRT(fVar41) * 0.5;
        auVar68._0_4_ = (auVar72._4_4_ + auVar55._0_4_) * fVar76;
        auVar68._8_4_ = (fVar44 + fVar61) * fVar76;
        auVar68._12_4_ = (fVar57 + -auVar72._8_4_) * fVar76;
        auVar10._4_4_ = -(uint)(fVar39 <= fVar41);
        auVar10._0_4_ = -(uint)(fVar39 <= fVar41);
        auVar10._8_4_ = -(uint)(fVar39 <= fVar41);
        auVar10._12_4_ = -(uint)(fVar39 <= fVar41);
        auVar60._8_4_ = SQRT(fVar42) * 0.5;
        auVar49._12_4_ = SQRT(fVar62) * 0.5;
        auVar8._4_4_ = -(uint)(fVar52 <= fVar42);
        auVar8._0_4_ = -(uint)(fVar45 <= fVar42);
        auVar8._8_4_ = -(uint)(fVar56 <= fVar42);
        auVar8._12_4_ = -(uint)(fVar63 <= fVar42);
        auVar60 = auVar60 ^ (auVar60 ^ auVar74 ^ (auVar74 ^ auVar68) & auVar10) & ~auVar8;
        auVar38._4_4_ =
             -(uint)((float)((uint)fVar52 ^
                            ((uint)fVar52 ^ (uint)fVar42) & -(uint)(fVar52 <= fVar42)) <= fVar62);
        auVar38._0_4_ =
             -(uint)((float)((uint)fVar45 ^
                            ((uint)fVar45 ^ (uint)fVar42) & -(uint)(fVar45 <= fVar42)) <= fVar62);
        auVar38._12_4_ =
             -(uint)((float)((uint)fVar63 ^
                            ((uint)fVar63 ^ (uint)fVar42) & -(uint)(fVar63 <= fVar42)) <= fVar62);
        auVar38._8_4_ =
             -(uint)((float)((uint)fVar56 ^
                            ((uint)fVar56 ^ (uint)fVar42) & -(uint)(fVar56 <= fVar42)) <= fVar62);
        auVar60 = auVar60 ^ (auVar60 ^ auVar49) & auVar38;
        uVar43 = *(undefined8 *)(lVar20 + 0xe8);
        uVar40 = *(undefined8 *)(lVar20 + 0xe0);
        auVar53 = *(undefined1 (*) [16])(lVar20 + 0xf0);
        *(long *)(lVar20 + 0xe8) = auVar60._8_8_;
        *(long *)(lVar20 + 0xe0) = auVar60._0_8_;
        auVar58 = *(undefined1 (*) [16])(pfVar16 + 0xc);
        auVar64 = NEON_ext(auVar58,auVar58,8,1);
        *(ulong *)(lVar20 + 0xf8) = (ulong)(uint)auVar64._0_4_;
        *(long *)(lVar20 + 0xf0) = auVar58._0_8_;
        if (bVar1) {
          fVar57 = auVar58._0_4_ - auVar53._0_4_;
          fVar61 = auVar58._4_4_ - auVar53._4_4_;
          fVar62 = auVar64._0_4_ - auVar53._8_4_;
          fVar44 = 0.0 - auVar53._12_4_;
          fVar57 = fVar57 * fVar57;
          fVar61 = fVar61 * fVar61;
          fVar62 = fVar62 * fVar62;
          fVar44 = fVar44 * fVar44;
          auVar32._0_4_ = fVar57 + fVar61;
          auVar32._4_4_ = fVar62 + fVar44;
          auVar32._8_4_ = fVar57 + fVar61;
          auVar32._12_4_ = fVar62 + fVar44;
          auVar53 = NEON_ext(auVar32,auVar32,4,1);
          fVar57 = auVar53._0_4_ + auVar53._4_4_;
          *(bool *)(lVar20 + 0x248) = 1.1920929e-07 < fVar57;
          if (fVar57 <= 1.1920929e-07) {
            fVar57 = (float)uVar40;
            fVar39 = auVar60._0_4_ - fVar57;
            fVar61 = (float)((ulong)uVar40 >> 0x20);
            fVar41 = auVar60._4_4_ - fVar61;
            fVar62 = (float)uVar43;
            fVar42 = auVar60._8_4_ - fVar62;
            fVar44 = (float)((ulong)uVar43 >> 0x20);
            fVar67 = auVar60._12_4_ - fVar44;
            fVar57 = fVar57 + auVar60._0_4_;
            fVar61 = fVar61 + auVar60._4_4_;
            fVar62 = fVar62 + auVar60._8_4_;
            fVar44 = fVar44 + auVar60._12_4_;
            fVar39 = fVar39 * fVar39;
            fVar41 = fVar41 * fVar41;
            fVar42 = fVar42 * fVar42;
            fVar67 = fVar67 * fVar67;
            fVar57 = fVar57 * fVar57;
            fVar61 = fVar61 * fVar61;
            fVar62 = fVar62 * fVar62;
            fVar44 = fVar44 * fVar44;
            auVar33._0_4_ = fVar39 + fVar41;
            auVar33._4_4_ = fVar42 + fVar67;
            auVar33._8_4_ = fVar39 + fVar41;
            auVar33._12_4_ = fVar42 + fVar67;
            auVar34._0_4_ = fVar57 + fVar61;
            auVar34._4_4_ = fVar62 + fVar44;
            auVar34._8_4_ = fVar57 + fVar61;
            auVar34._12_4_ = fVar62 + fVar44;
            auVar58 = NEON_ext(auVar33,auVar33,4,1);
            auVar53 = NEON_ext(auVar34,auVar34,4,1);
            *(bool *)(lVar20 + 0x248) =
                 1.1920929e-07 < auVar58._0_4_ + auVar58._4_4_ &&
                 1.1920929e-07 < auVar53._0_4_ + auVar53._4_4_;
          }
        }
        if (((*(char *)(param_1 + 0x146) != '\0') && (*(char *)(lVar20 + 0x240) != '\0')) &&
           (*(char *)(lVar20 + 0x241) != '\0')) {
          iVar14 = FUN_00c4b2f8(lVar20);
          FUN_00c4b548(lVar20,iVar14 != 0);
          plVar23 = *(long **)(lVar20 + 0x50);
          plVar2 = *(long **)(lVar20 + 0x58);
          *(undefined4 *)(lVar20 + 0x158) = 0;
          for (; plVar23 != plVar2; plVar23 = plVar23 + 1) {
            plVar19 = *(long **)(*plVar23 + 0x30);
            plVar3 = *(long **)(*plVar23 + 0x38);
            if (plVar19 != plVar3) {
              do {
                plVar18 = plVar19 + 1;
                if (((uint)*(undefined8 *)puVar13 & (*(uint *)(*plVar19 + 0x108) ^ 0xffffffff) & 7)
                    == 0) {
                  FUN_00c4ccf8();
                  break;
                }
                plVar19 = plVar18;
              } while (plVar3 != plVar18);
            }
          }
          *(undefined1 *)(lVar20 + 0x24a) = 1;
        }
      }
      else if (((*(char *)(param_1 + 0x146) != '\0') && (*(char *)(lVar20 + 0x240) != '\0')) &&
              (*(char *)(lVar20 + 0x241) != '\0')) {
        plVar2 = *(long **)(lVar20 + 0x58);
        for (plVar23 = *(long **)(lVar20 + 0x50); plVar23 != plVar2; plVar23 = plVar23 + 1) {
          plVar19 = *(long **)(*plVar23 + 0x30);
          plVar3 = *(long **)(*plVar23 + 0x38);
          if (plVar19 != plVar3) {
            do {
              plVar18 = plVar19 + 1;
              if (((uint)*(undefined8 *)puVar13 & (*(uint *)(*plVar19 + 0x108) ^ 0xffffffff) & 7) ==
                  0) {
                FUN_00c4ccf8();
                break;
              }
              plVar19 = plVar18;
            } while (plVar3 != plVar18);
          }
        }
      }
      lVar22 = *(long *)(lVar22 + 8);
    } while (lVar21 != lVar22);
  }
  return;
}


