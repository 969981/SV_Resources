/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085cd70; name: FUN_0085cd70
 */


void FUN_0085cd70(long param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  byte bVar25;
  byte bVar27;
  undefined1 auVar24 [16];
  int iVar30;
  uint uVar31;
  float fVar32;
  undefined8 uVar33;
  int iVar40;
  int iVar41;
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  float fVar42;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  float fVar43;
  float fVar44;
  float fVar56;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  long *local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  if (*(char *)(param_1 + 0x1fe) != '\0') {
    return;
  }
  local_90 = 0;
  local_88._0_4_ = 0;
  local_88._4_4_ = 0x80000000;
  local_a0 = 0;
  uStack_98 = 0xffffffff00000000;
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  if (*(int *)(param_1 + 0x78) == 0) goto LAB_0085d088;
  if (*(int *)(param_1 + 0x78) < 1) {
    plVar10 = *(long **)(param_1 + 0x70);
    local_88._0_4_ = 0;
  }
  else {
    FUN_0085d8bc(&local_90,PTR_PTR_047d1a50);
    plVar10 = *(long **)(param_1 + 0x70);
  }
  for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    plVar8 = (long *)(local_90 + (long)(int)local_88 * 0x10);
    *plVar8 = (long)plVar10;
    fVar43 = *(float *)(param_1 + 0x150);
    fVar66 = *(float *)(param_1 + 0x154);
    fVar67 = *(float *)(param_1 + 0x158);
    fVar32 = *(float *)(param_1 + 0x15c);
    auVar35 = NEON_scvtf(*(undefined1 (*) [16])(plVar10[2] + 0x20),4);
    fVar44 = *(float *)(param_1 + 0x130);
    fVar42 = *(float *)(param_1 + 0x134);
    fVar56 = *(float *)(param_1 + 0x138);
    fVar3 = *(float *)(param_1 + 0x13c);
    auVar36 = NEON_scvtf(*(undefined1 (*) [16])(plVar10[3] + 0x20),4);
    auVar23 = NEON_scvtf(*(undefined1 (*) [16])(plVar10[4] + 0x20),4);
    fVar20 = fVar44 + fVar43 * auVar35._0_4_;
    fVar26 = fVar42 + fVar66 * auVar35._4_4_;
    fVar28 = fVar56 + fVar67 * auVar35._8_4_;
    fVar29 = fVar3 + fVar32 * 0.0;
    auVar61._0_4_ = (fVar44 + fVar43 * auVar36._0_4_) - fVar20;
    auVar61._4_4_ = (fVar42 + fVar66 * auVar36._4_4_) - fVar26;
    auVar61._8_4_ = (fVar56 + fVar67 * auVar36._8_4_) - fVar28;
    auVar61._12_4_ = (fVar3 + fVar32 * 0.0) - fVar29;
    auVar35._0_4_ = (fVar44 + fVar43 * auVar23._0_4_) - fVar20;
    auVar35._4_4_ = (fVar42 + fVar66 * auVar23._4_4_) - fVar26;
    auVar35._8_4_ = (fVar56 + fVar67 * auVar23._8_4_) - fVar28;
    auVar35._12_4_ = (fVar3 + fVar32 * 0.0) - fVar29;
    auVar23 = NEON_ext(auVar61,auVar61,4,1);
    auVar50 = NEON_ext(auVar35,auVar35,4,1);
    auVar36._0_4_ = auVar61._0_4_ * auVar50._0_4_ - auVar35._0_4_ * auVar23._0_4_;
    auVar36._4_4_ = auVar61._4_4_ * auVar50._4_4_ - auVar35._4_4_ * auVar23._4_4_;
    auVar36._8_4_ = auVar61._8_4_ * auVar35._0_4_ - auVar35._8_4_ * auVar61._0_4_;
    auVar36._12_4_ = auVar61._12_4_ * auVar35._4_4_ - auVar35._12_4_ * auVar61._4_4_;
    auVar35 = NEON_ext(auVar36,auVar36,4,1);
    *(float *)(plVar8 + 1) =
         SQRT(auVar35._0_4_ * auVar35._0_4_ + auVar35._4_4_ * auVar35._4_4_ +
              auVar36._0_4_ * auVar36._0_4_);
    local_88._0_4_ = (int)local_88 + 1;
  }
  if (1 < (int)local_88) {
    FUN_0085d9d0(local_90,0,(int)local_88 + -1);
  }
  FUN_031c5614(&local_a0,PTR_PTR_047d1a50,*(undefined4 *)(param_1 + 0x78));
  iVar30 = *(int *)(param_1 + 0x78);
  if ((int)(local_a8._4_4_ & 0x7fffffff) < iVar30) {
    FUN_02e8df28(&local_b0,PTR_PTR_047d1a50,(long)iVar30);
    if ((int)local_a8 == iVar30) goto LAB_0085cf18;
LAB_0085cf44:
    local_a8 = CONCAT44(local_a8._4_4_,iVar30);
    plVar10 = *(long **)(param_1 + 0x70);
    puVar5 = PTR_PTR_047d1a50;
  }
  else {
    if ((int)local_a8 != iVar30) goto LAB_0085cf44;
LAB_0085cf18:
    plVar10 = *(long **)(param_1 + 0x70);
    puVar5 = PTR_PTR_047d1a50;
  }
  PTR_PTR_047d1a50 = puVar5;
  if (plVar10 != (long *)0x0) {
    uVar68 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    uVar69 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
    lVar17 = 0;
    do {
      local_c0 = plVar10;
      local_78 = lVar17;
      FUN_031c5350(&local_a0,puVar5,&local_c0,&local_78);
      fVar43 = *(float *)(param_1 + 0x130);
      fVar66 = *(float *)(param_1 + 0x134);
      fVar67 = *(float *)(param_1 + 0x138);
      fVar32 = *(float *)(param_1 + 0x13c);
      auVar35 = NEON_scvtf(*(undefined1 (*) [16])(plVar10[2] + 0x20),4);
      auVar36 = NEON_scvtf(*(undefined1 (*) [16])(plVar10[3] + 0x20),4);
      auVar61 = NEON_scvtf(*(undefined1 (*) [16])(plVar10[4] + 0x20),4);
      fVar44 = *(float *)(param_1 + 0x150);
      fVar42 = *(float *)(param_1 + 0x154);
      fVar56 = *(float *)(param_1 + 0x158);
      fVar3 = *(float *)(param_1 + 0x15c);
      fVar20 = fVar43 + fVar44 * auVar35._0_4_;
      fVar26 = fVar66 + fVar42 * auVar35._4_4_;
      fVar28 = fVar67 + fVar56 * auVar35._8_4_;
      fVar29 = fVar32 + fVar3 * 0.0;
      auVar47._0_4_ = (fVar43 + fVar44 * auVar36._0_4_) - fVar20;
      auVar47._4_4_ = (fVar66 + fVar42 * auVar36._4_4_) - fVar26;
      auVar47._8_4_ = (fVar67 + fVar56 * auVar36._8_4_) - fVar28;
      auVar47._12_4_ = (fVar32 + fVar3 * 0.0) - fVar29;
      auVar35 = NEON_ext(auVar47,auVar47,4,1);
      auVar23._0_4_ = (fVar43 + fVar44 * auVar61._0_4_) - fVar20;
      auVar23._4_4_ = (fVar66 + fVar42 * auVar61._4_4_) - fVar26;
      auVar23._8_4_ = (fVar67 + fVar56 * auVar61._8_4_) - fVar28;
      auVar23._12_4_ = (fVar32 + fVar3 * 0.0) - fVar29;
      auVar36 = NEON_ext(auVar23,auVar23,4,1);
      auVar48._0_4_ = auVar47._0_4_ * auVar36._0_4_ - auVar23._0_4_ * auVar35._0_4_;
      auVar48._4_4_ = auVar47._4_4_ * auVar36._4_4_ - auVar23._4_4_ * auVar35._4_4_;
      auVar48._8_4_ = auVar47._8_4_ * auVar23._0_4_ - auVar23._8_4_ * auVar47._0_4_;
      auVar48._12_4_ = auVar47._12_4_ * auVar23._4_4_ - auVar23._12_4_ * auVar47._4_4_;
      auVar35 = NEON_ext(auVar48,auVar48,4,1);
      fVar43 = auVar35._0_4_;
      fVar66 = auVar35._4_4_;
      auVar50._0_8_ = auVar35._0_8_;
      auVar50._8_4_ = auVar48._0_4_;
      auVar50._12_4_ = 0;
      fVar67 = fVar43 * fVar43 + fVar66 * fVar66 + auVar48._0_4_ * auVar48._0_4_;
      fVar32 = fVar43 * fVar43 + fVar66 * fVar66 + auVar48._0_4_ * auVar48._0_4_;
      uVar31 = (uint)(0.0 < fVar32);
      uVar33 = uVar68;
      if (fVar67 != 0.0) {
        uVar33 = CONCAT44((float)((ulong)uVar69 >> 0x20) / SQRT(fVar32),(float)uVar69 / SQRT(fVar67)
                         );
      }
      auVar49._0_4_ = (int)((uint)(0.0 < fVar67) * -0x80000000) >> 0x1f;
      auVar49._4_4_ = (int)(uVar31 * -0x80000000) >> 0x1f;
      auVar49._8_4_ = (int)((uint)(0.0 < fVar67) * -0x80000000) >> 0x1f;
      auVar49._12_4_ = (int)(uVar31 * -0x80000000) >> 0x1f;
      auVar57._0_4_ = fVar43 * (float)uVar33;
      fVar43 = (float)((ulong)uVar33 >> 0x20);
      auVar57._4_4_ = fVar66 * fVar43;
      auVar57._8_4_ = auVar48._0_4_ * (float)uVar33;
      auVar57._12_4_ = fVar43 * 0.0;
      auVar50 = auVar50 ^ (auVar50 ^ auVar57) & auVar49;
      auVar51._0_12_ = auVar50._0_12_;
      auVar51._12_4_ = -(fVar20 * auVar50._0_4_ + fVar26 * auVar50._4_4_ + fVar28 * auVar50._8_4_);
      puVar1 = (undefined8 *)(local_b0 + lVar17 * 0x10);
      puVar1[1] = auVar51._8_8_;
      *puVar1 = auVar50._0_8_;
      *(undefined4 *)(plVar10 + 0xb) = 0xffffffff;
      *(int *)((long)plVar10 + 100) = (int)lVar17;
      plVar10 = (long *)*plVar10;
      lVar17 = lVar17 + 1;
    } while (plVar10 != (long *)0x0);
  }
LAB_0085d088:
  plVar10 = *(long **)(param_1 + 0x58);
  if (plVar10 != (long *)0x0) {
    iVar30 = 0;
    do {
      *(int *)((long)plVar10 + 0x34) = iVar30;
      plVar10 = (long *)*plVar10;
      iVar30 = iVar30 + 1;
    } while (plVar10 != (long *)0x0);
  }
  iVar30 = *(int *)(param_1 + 0x1f0);
  plVar10 = (long *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = 0;
  puVar5 = PTR_DAT_047d19b0;
  if (iVar30 == 1) {
    auVar35 = NEON_scvtf(*(undefined1 (*) [16])(*(long **)(param_1 + 0x58) + 4),4);
    plVar8 = *(long **)(param_1 + 0x58);
    do {
      plVar12 = plVar8;
      plVar8 = (long *)*plVar12;
    } while (plVar8 != (long *)0x0);
    fVar32 = *(float *)(param_1 + 0x130) + *(float *)(param_1 + 0x150) * auVar35._0_4_;
    fVar44 = *(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x154) * auVar35._4_4_;
    auVar59._0_8_ = CONCAT44(fVar44,fVar32);
    auVar59._8_4_ = *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x158) * auVar35._8_4_;
    auVar62._12_4_ = *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x15c) * 0.0;
    auVar62._0_12_ = auVar59;
    auVar35 = NEON_scvtf(*(undefined1 (*) [16])(plVar12 + 4),4);
    fVar43 = *(float *)(param_1 + 0x130) + *(float *)(param_1 + 0x150) * auVar35._0_4_;
    fVar66 = *(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x154) * auVar35._4_4_;
    fVar67 = *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x158) * auVar35._8_4_;
    fVar32 = fVar43 - fVar32;
    fVar44 = fVar66 - fVar44;
    fVar42 = fVar67 - auVar59._8_4_;
    fVar56 = fVar32 * fVar32 + fVar44 * fVar44 + fVar42 * fVar42;
    if (fVar56 == 0.0) {
      auVar46 = SUB1612(ZEXT816(0),0);
    }
    else {
      fVar56 = SQRT(fVar56);
      auVar46._0_4_ = fVar32 / fVar56;
      auVar46._4_4_ = fVar44 / SQRT(fVar32 * fVar32 + fVar44 * fVar44 + fVar42 * fVar42);
      auVar46._8_4_ = fVar42 / fVar56;
    }
    auVar52._12_4_ = -(fVar43 * auVar46._0_4_ + fVar66 * auVar46._4_4_ + fVar67 * auVar46._8_4_);
    auVar52._0_12_ = auVar46;
    if ((*(uint *)(param_1 + 0x9c) & 0x7fffffff) == 0) {
      FUN_02e9b11c(plVar10,PTR_PTR_047d1a50,1);
      auVar52._8_8_ = auVar52._8_8_;
      auVar52._0_8_ = auVar46._0_8_;
      auVar4._8_8_ = auVar62._8_8_;
      auVar4._0_8_ = auVar59._0_8_;
      auVar59 = auVar4._0_12_;
      lVar17 = (long)*(int *)(param_1 + 0x98);
    }
    else {
      lVar17 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x90) + lVar17 * 0x10);
    puVar1[1] = auVar52._8_8_;
    *puVar1 = auVar52._0_8_;
    auVar53._0_8_ = CONCAT44(-auVar52._4_4_,-auVar52._0_4_);
    auVar53._8_4_ = -auVar52._8_4_;
    auVar53._12_4_ =
         -(auVar59._8_4_ * auVar53._8_4_ +
          auVar59._0_4_ * -auVar52._0_4_ + auVar59._4_4_ * -auVar52._4_4_);
    lVar17 = 1;
    *(undefined4 *)(param_1 + 0x98) = 1;
    if ((*(uint *)(param_1 + 0x9c) & 0x7ffffffe) == 0) {
      FUN_02e9b11c(plVar10,PTR_PTR_047d1a50,2);
      auVar53._8_8_ = auVar53._8_8_;
      lVar17 = (long)*(int *)(param_1 + 0x98);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x90) + lVar17 * 0x10);
    puVar1[1] = auVar53._8_8_;
    *puVar1 = auVar53._0_8_;
    *(undefined4 *)(param_1 + 0x98) = 2;
  }
  else if (iVar30 == 2) {
    auVar65 = *(undefined1 (*) [16])(param_1 + 0xc0);
    if (auVar65._12_4_ == *(float *)(PTR_DAT_047d19b0 + 0x240)) {
      plVar8 = *(long **)(param_1 + 0x58);
      auVar63 = ZEXT816(0);
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      if (plVar8 != (long *)0x0) {
        auVar35 = *(undefined1 (*) [16])(param_1 + 0x130);
        plVar12 = plVar8;
        auVar36 = ZEXT816(0);
        do {
          auVar23 = NEON_scvtf(*(undefined1 (*) [16])(plVar12 + 4),4);
          auVar63._0_8_ =
               CONCAT44(auVar36._4_4_ + auVar35._4_4_ + *(float *)(param_1 + 0x154) * auVar23._4_4_,
                        auVar36._0_4_ + auVar35._0_4_ + *(float *)(param_1 + 0x150) * auVar23._0_4_)
          ;
          auVar63._8_4_ =
               auVar36._8_4_ + auVar35._8_4_ + *(float *)(param_1 + 0x158) * auVar23._8_4_;
          auVar63._12_4_ = auVar36._12_4_ + auVar35._12_4_ + *(float *)(param_1 + 0x15c) * 0.0;
          *(long *)(param_1 + 200) = auVar63._8_8_;
          *(undefined8 *)(param_1 + 0xc0) = auVar63._0_8_;
          plVar12 = (long *)*plVar12;
          auVar36 = auVar63;
        } while (plVar12 != (long *)0x0);
      }
      auVar60 = auVar63._0_12_;
      iVar30 = *(int *)(param_1 + 0x60);
      if (iVar30 != 0) {
        uVar68 = NEON_scvtf(CONCAT44(iVar30,iVar30),4);
        fVar43 = (float)*(undefined8 *)(puVar5 + 0x60) / (float)uVar68;
        fVar66 = (float)((ulong)*(undefined8 *)(puVar5 + 0x60) >> 0x20) /
                 (float)((ulong)uVar68 >> 0x20);
        auVar60._0_8_ = CONCAT44(auVar63._4_4_ * fVar66,auVar63._0_4_ * fVar43);
        auVar60._8_4_ = auVar63._8_4_ * fVar43;
        auVar64._12_4_ = auVar63._12_4_ * fVar66;
        auVar64._0_12_ = auVar60;
        *(long *)(param_1 + 200) = auVar64._8_8_;
        *(undefined8 *)(param_1 + 0xc0) = auVar60._0_8_;
      }
      auVar65._12_4_ = 0;
      auVar65._0_12_ = auVar60;
      *(ulong *)(param_1 + 200) = (ulong)auVar60._8_4_;
      *(long *)(param_1 + 0xc0) = auVar60._0_8_;
      puVar6 = PTR_PTR_047d1a50;
    }
    else {
      plVar8 = *(long **)(param_1 + 0x58);
      puVar6 = PTR_PTR_047d1a50;
    }
    PTR_PTR_047d1a50 = puVar6;
    if (plVar8 != (long *)0x0) {
      plVar12 = plVar8;
      do {
        plVar15 = plVar12;
        plVar12 = (long *)*plVar15;
      } while (plVar12 != (long *)0x0);
      if (plVar8 != (long *)0x0) {
        uVar68 = *(undefined8 *)(puVar5 + 0x50);
        uVar69 = *(undefined8 *)(puVar5 + 0x60);
        iVar30 = 0;
        while( true ) {
          iVar40 = iVar30 + 1;
          auVar35 = *(undefined1 (*) [16])(param_1 + 0x150);
          auVar23 = NEON_scvtf(*(undefined1 (*) [16])(plVar15 + 4),4);
          auVar36 = *(undefined1 (*) [16])(param_1 + 0x130);
          fVar43 = auVar36._0_4_ + auVar35._0_4_ * auVar23._0_4_;
          fVar66 = auVar36._4_4_ + auVar35._4_4_ * auVar23._4_4_;
          fVar67 = auVar36._8_4_ + auVar35._8_4_ * auVar23._8_4_;
          auVar23 = NEON_scvtf(*(undefined1 (*) [16])(plVar8 + 4),4);
          auVar58._0_8_ =
               CONCAT44((auVar36._4_4_ + auVar35._4_4_ * auVar23._4_4_) - fVar66,
                        (auVar36._0_4_ + auVar35._0_4_ * auVar23._0_4_) - fVar43);
          auVar58._8_4_ = (auVar36._8_4_ + auVar35._8_4_ * auVar23._8_4_) - fVar67;
          auVar58._12_4_ =
               (auVar36._12_4_ + auVar35._12_4_ * 0.0) - (auVar36._12_4_ + auVar35._12_4_ * 0.0);
          if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar30) {
            FUN_02e8df28(plVar10,puVar6,(long)iVar40);
            auVar58._8_8_ = auVar58._8_8_;
            iVar30 = *(int *)(param_1 + 0x98);
          }
          auVar35 = *(undefined1 (*) [16])(param_1 + 0x120);
          auVar36 = NEON_ext(auVar35,auVar35,8,1);
          uVar33 = NEON_ext(auVar35._0_8_,auVar36._0_8_,4,1);
          auVar36 = NEON_ext(auVar58,auVar58,4,1);
          lVar17 = *(long *)(param_1 + 0x90);
          *(int *)(param_1 + 0x98) = iVar40;
          auVar37._0_4_ = auVar36._0_4_ * auVar35._0_4_ - auVar58._0_4_ * (float)uVar33;
          auVar37._4_4_ =
               auVar36._4_4_ * auVar35._4_4_ - auVar58._4_4_ * (float)((ulong)uVar33 >> 0x20);
          auVar37._8_4_ = auVar58._0_4_ * auVar35._8_4_ - auVar58._8_4_ * auVar35._0_4_;
          auVar37._12_4_ = auVar58._4_4_ * auVar35._12_4_ - auVar58._12_4_ * auVar35._4_4_;
          auVar35 = NEON_ext(auVar37,auVar37,4,1);
          fVar32 = auVar35._0_4_;
          fVar42 = auVar35._4_4_;
          auVar39._8_4_ = auVar37._0_4_;
          auVar39._0_8_ = auVar35._0_8_;
          auVar39._12_4_ = 0;
          fVar44 = fVar32 * fVar32 + fVar42 * fVar42 + auVar37._0_4_ * auVar37._0_4_;
          fVar56 = fVar32 * fVar32 + fVar42 * fVar42 + auVar37._0_4_ * auVar37._0_4_;
          uVar31 = (uint)(0.0 < fVar56);
          puVar1 = (undefined8 *)(lVar17 + (long)iVar30 * 0x10);
          puVar1[1] = (ulong)(uint)auVar37._0_4_;
          *puVar1 = auVar35._0_8_;
          uVar33 = uVar68;
          if (fVar44 != 0.0) {
            uVar33 = CONCAT44((float)((ulong)uVar69 >> 0x20) / SQRT(fVar56),
                              (float)uVar69 / SQRT(fVar44));
          }
          auVar38._0_4_ = (int)((uint)(0.0 < fVar44) * -0x80000000) >> 0x1f;
          auVar38._4_4_ = (int)(uVar31 * -0x80000000) >> 0x1f;
          auVar38._8_4_ = (int)((uint)(0.0 < fVar44) * -0x80000000) >> 0x1f;
          auVar38._12_4_ = (int)(uVar31 * -0x80000000) >> 0x1f;
          auVar54._0_4_ = fVar32 * (float)uVar33;
          fVar32 = (float)((ulong)uVar33 >> 0x20);
          auVar54._4_4_ = fVar42 * fVar32;
          auVar54._8_4_ = auVar37._0_4_ * (float)uVar33;
          auVar54._12_4_ = fVar32 * 0.0;
          auVar39 = auVar39 ^ (auVar39 ^ auVar54) & auVar38;
          fVar66 = -(fVar43 * auVar39._0_4_ + fVar66 * auVar39._4_4_ + fVar67 * auVar39._8_4_);
          auVar55._0_4_ = auVar65._0_4_ * auVar39._0_4_;
          auVar55._4_4_ = auVar65._4_4_ * auVar39._4_4_;
          auVar55._8_4_ = auVar65._8_4_ * auVar39._8_4_;
          auVar55._12_4_ = auVar65._12_4_ * fVar66;
          auVar35 = NEON_ext(auVar55,auVar55,8,1);
          fVar43 = auVar35._0_4_ + fVar66;
          bVar25 = (byte)(-(uint)(0.0 <= auVar55._0_4_ + auVar55._4_4_ + fVar43) >> 0x18);
          bVar27 = (byte)(-(uint)(0.0 <= auVar55._0_4_ + auVar55._4_4_ + fVar43) >> 0x18);
          uVar14 = CONCAT17(bVar27,(uint7)(bVar25 & 0x80) << 0x18) & 0x80ffffffffffffff;
          auVar24._0_8_ =
               CONCAT17((byte)(uVar14 >> 0x38) ^ auVar39[7],
                        CONCAT16(auVar39[6],
                                 CONCAT15(auVar39[5],
                                          CONCAT14(auVar39[4],
                                                   CONCAT13((byte)(uVar14 >> 0x18) ^ auVar39[3],
                                                            auVar39._0_3_)))));
          auVar24[8] = auVar39[8];
          auVar24[9] = auVar39[9];
          auVar24[10] = auVar39[10];
          auVar24[0xb] = bVar25 & 0x80 ^ auVar39[0xb];
          auVar24[0xc] = SUB41(fVar66,0);
          auVar24[0xd] = (char)((uint)fVar66 >> 8);
          auVar24[0xe] = (char)((uint)fVar66 >> 0x10);
          auVar24[0xf] = bVar27 & 0x80 ^ (byte)((uint)fVar66 >> 0x18);
          puVar1 = (undefined8 *)(lVar17 + (long)iVar30 * 0x10);
          puVar1[1] = auVar24._8_8_;
          *puVar1 = auVar24._0_8_;
          if ((long *)*plVar8 == (long *)0x0) break;
          iVar30 = *(int *)(param_1 + 0x98);
          plVar15 = plVar8;
          plVar8 = (long *)*plVar8;
        }
      }
    }
  }
  else if (iVar30 == 3) {
    local_c0 = (long *)0x0;
    local_b8._0_4_ = 0;
    local_b8._4_4_ = 0x80000000;
    if ((int)local_88 < 1) {
      local_b8 = -0x8000000000000000;
    }
    else {
      uVar68 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
      lVar17 = 0;
      do {
        lVar19 = *(long *)(local_90 + lVar17 * 0x10);
        if (*(int *)(lVar19 + 0x58) == -1) {
          local_80 = 0xffffffffffffffff;
          local_78 = lVar19;
          plVar8 = (long *)FUN_031c5430(&local_a0,&local_78,&local_80);
          pfVar2 = (float *)(local_b0 + ((*plVar8 << 0x20) >> 0x1c));
          *(undefined4 *)(lVar19 + 0x58) = *(undefined4 *)(param_1 + 0x98);
          iVar30 = *(int *)(param_1 + 0x98);
          lVar13 = (long)iVar30;
          if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar30) {
            FUN_02e9b11c(plVar10,PTR_PTR_047d1a50,lVar13 + 1);
            iVar30 = *(int *)(param_1 + 0x98);
          }
          uVar31 = local_b8._4_4_;
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x90) + (long)iVar30 * 0x10);
          uVar69 = *(undefined8 *)(pfVar2 + 2);
          iVar30 = 0;
          *puVar1 = *(undefined8 *)pfVar2;
          puVar1[1] = uVar69;
          *(int *)(param_1 + 0x98) = (int)(lVar13 + 1);
          local_b8 = (ulong)local_b8._4_4_ << 0x20;
          uVar14 = *(ulong *)(lVar19 + 0x28);
          if ((uVar31 & 0x7fffffff) == 0) {
            FUN_0085dad4(&local_c0,PTR_PTR_047d1a50,1);
            iVar30 = (int)local_b8;
          }
          uVar16 = local_b8;
          local_c0[(long)iVar30 * 2] = uVar14 & 0xfffffffffffffffc;
          (local_c0 + (long)iVar30 * 2)[1] = uVar14 & 3;
          local_b8._0_4_ = 1;
          uVar14 = *(ulong *)(lVar19 + 0x30);
          iVar30 = 1;
          if ((uVar16 & 0x7ffffffe00000000) == 0) {
            FUN_0085dad4(&local_c0,PTR_PTR_047d1a50,2);
            iVar30 = (uint)local_b8;
          }
          local_c0[(long)iVar30 * 2] = uVar14 & 0xfffffffffffffffc;
          (local_c0 + (long)iVar30 * 2)[1] = uVar14 & 3;
          local_b8._0_4_ = 2;
          uVar14 = *(ulong *)(lVar19 + 0x38);
          iVar30 = 2;
          if ((local_b8._4_4_ & 0x7fffffff) < 3) {
            FUN_0085dad4(&local_c0,PTR_PTR_047d1a50,3);
            iVar30 = (uint)local_b8;
          }
          local_c0[(long)iVar30 * 2] = uVar14 & 0xfffffffffffffffc;
          (local_c0 + (long)iVar30 * 2)[1] = uVar14 & 3;
          uVar14 = 3;
          do {
            uVar14 = (long)(int)uVar14 - 1;
            lVar18 = local_c0[uVar14 * 2];
            lVar13 = (local_c0 + uVar14 * 2)[1];
            local_b8._0_4_ = (uint)uVar14;
            if (*(int *)(lVar18 + 0x58) == -1) {
              local_80 = 0xffffffffffffffff;
              local_78 = lVar18;
              puVar9 = (ulong *)FUN_031c5430(&local_a0,&local_78,&local_80);
              auVar35 = *(undefined1 (*) [16])
                         (local_b0 +
                         (-(*puVar9 >> 0x1f & 1) & 0xfffffff000000000 | (*puVar9 & 0xffffffff) << 4)
                         );
              auVar36 = **(undefined1 (**) [16])PTR_PTR_047d1bb0;
              iVar30 = CONCAT13(auVar36[3] & auVar35[3],
                                CONCAT12(auVar36[2] & auVar35[2],
                                         CONCAT11(auVar36[1] & auVar35[1],auVar36[0] & auVar35[0])))
              ;
              auVar45._0_8_ =
                   CONCAT17(auVar36[7] & auVar35[7],
                            CONCAT16(auVar36[6] & auVar35[6],
                                     CONCAT15(auVar36[5] & auVar35[5],
                                              CONCAT14(auVar36[4] & auVar35[4],iVar30))));
              auVar45[8] = auVar36[8] & auVar35[8];
              auVar45[9] = auVar36[9] & auVar35[9];
              auVar45[10] = auVar36[10] & auVar35[10];
              auVar45[0xb] = auVar36[0xb] & auVar35[0xb];
              iVar30 = -(uint)(iVar30 == auVar36._0_4_);
              iVar40 = -(uint)((int)((ulong)auVar45._0_8_ >> 0x20) == auVar36._4_4_);
              iVar41 = -(uint)(auVar45._8_4_ == auVar36._8_4_);
              uVar31 = CONCAT13(~(byte)((uint)iVar30 >> 0x18),
                                CONCAT12(~(byte)((uint)iVar30 >> 0x10),
                                         CONCAT11(~(byte)((uint)iVar30 >> 8),~(byte)iVar30)));
              auVar34._0_8_ =
                   CONCAT17(~(byte)((uint)iVar40 >> 0x18),
                            CONCAT16(~(byte)((uint)iVar40 >> 0x10),
                                     CONCAT15(~(byte)((uint)iVar40 >> 8),
                                              CONCAT14(~(byte)iVar40,uVar31))));
              auVar34[8] = ~(byte)iVar41;
              auVar34[9] = ~(byte)((uint)iVar41 >> 8);
              auVar34[10] = ~(byte)((uint)iVar41 >> 0x10);
              auVar34[0xb] = ~(byte)((uint)iVar41 >> 0x18);
              fVar43 = auVar35._0_4_;
              fVar66 = auVar35._4_4_;
              fVar67 = auVar35._8_4_;
              fVar32 = ABS((fVar67 * fVar67 + fVar43 * fVar43 + fVar66 * fVar66) - (float)uVar68);
              bVar7 = false;
              if (((uVar31 & (uint)((ulong)auVar34._0_8_ >> 0x20) & auVar34._8_4_) != 0) &&
                 (bVar7 = false, !NAN(fVar32))) {
                bVar7 = fVar32 < 0.0001;
              }
              if ((!bVar7) ||
                 (auVar21._0_4_ = *pfVar2 * fVar43, auVar21._4_4_ = pfVar2[1] * fVar66,
                 auVar21._8_4_ = pfVar2[2] * fVar67, auVar21._12_4_ = pfVar2[3] * auVar35._12_4_,
                 auVar35 = NEON_ext(auVar21,auVar21,8,1),
                 *(float *)(param_1 + 4) <= auVar21._0_4_ + auVar21._4_4_ + auVar35._0_4_)) {
                *(undefined4 *)(lVar18 + 0x58) = *(undefined4 *)(lVar19 + 0x58);
                uVar31 = (int)lVar13 << 1;
                uVar14 = *(ulong *)(lVar18 + (ulong)(9U >> (ulong)(uVar31 & 0x1f) & 3) * 8 + 0x28);
                lVar13 = (long)(int)(uint)local_b8;
                uVar16 = lVar13 + 1;
                if ((int)(local_b8._4_4_ & 0x7fffffff) <= (int)(uint)local_b8) {
                  FUN_0085dad4(&local_c0,PTR_PTR_047d1a50,uVar16);
                }
                local_c0[(long)(int)(uint)local_b8 * 2] = uVar14 & 0xfffffffffffffffc;
                (local_c0 + (long)(int)(uint)local_b8 * 2)[1] = uVar14 & 3;
                uVar14 = lVar13 + 2;
                local_b8._0_4_ = (uint)uVar16;
                uVar11 = *(ulong *)(lVar18 + (ulong)(0x12U >> (ulong)(uVar31 & 0x1f) & 3) * 8 + 0x28
                                   );
                if ((int)(local_b8._4_4_ & 0x7fffffff) <= (int)(uint)local_b8) {
                  FUN_0085dad4(&local_c0,PTR_PTR_047d1a50,uVar14);
                  uVar16 = (ulong)(uint)local_b8;
                }
                local_c0[(long)(int)uVar16 * 2] = uVar11 & 0xfffffffffffffffc;
                (local_c0 + (long)(int)uVar16 * 2)[1] = uVar11 & 3;
                local_b8._0_4_ = (uint)uVar14;
              }
              else {
                uVar14 = (ulong)(uint)local_b8;
              }
            }
          } while ((int)uVar14 != 0);
        }
        uVar31 = local_b8._4_4_;
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)local_88);
      uVar14 = (ulong)local_b8._4_4_;
      local_b8 = (ulong)local_b8._4_4_ << 0x20;
      if ((-1 < (int)uVar31) && (local_c0 != (long *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_c0,uVar14 << 4);
      }
    }
  }
  if ((*(char *)(param_1 + 0xe) != '\0') &&
     (plVar8 = *(long **)(param_1 + 0x58), plVar8 != (long *)0x0)) {
    iVar30 = *(int *)(param_1 + 0x98);
    do {
      if (0 < iVar30) {
        lVar17 = 0;
        do {
          auVar35 = *(undefined1 (*) [16])(*plVar10 + lVar17 * 0x10);
          fVar43 = auVar35._12_4_ +
                   auVar35._0_4_ * *(float *)(plVar8 + 2) +
                   auVar35._4_4_ * *(float *)((long)plVar8 + 0x14) +
                   auVar35._8_4_ * *(float *)(plVar8 + 3);
          if (0.0 < fVar43) {
            auVar22._0_12_ = auVar35._0_12_;
            auVar22._12_4_ = auVar35._12_4_ - fVar43;
            puVar1 = (undefined8 *)(*plVar10 + lVar17 * 0x10);
            puVar1[1] = auVar22._8_8_;
            *puVar1 = auVar35._0_8_;
            iVar30 = *(int *)(param_1 + 0x98);
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < iVar30);
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  if ((*(int *)(param_1 + 0x98) != 0) &&
     (*(int *)(param_1 + 0x98) < (int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff))) {
    FUN_0085dc44(PTR_PTR_047d1a50,plVar10,0);
  }
  lVar17 = local_a8;
  *(undefined1 *)(param_1 + 0x1fe) = 1;
  uVar14 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar17) && (local_b0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_b0,uVar14 << 4);
  }
  puVar5 = PTR_PTR_047d1a50;
  FUN_031c5580(&local_a0,PTR_PTR_047d1a50);
  FUN_031c534c(&local_a0);
  uVar31 = local_88._4_4_;
  uVar14 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < (int)uVar31) && (local_90 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_90,uVar14 << 4);
  }
  return;
}


