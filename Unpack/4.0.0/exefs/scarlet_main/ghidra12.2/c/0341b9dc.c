/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341b9dc; name: FUN_0341b9dc
 */


bool FUN_0341b9dc(long param_1,long param_2)

{
  float *pfVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined1 auStack_1a0 [192];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  float *local_c0;
  float *pfStack_b8;
  int local_a8;
  byte local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_24;
  
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 == 0) {
    bVar3 = true;
  }
  else {
    pfVar10 = *(float **)(lVar6 + 0x18);
    pfVar1 = pfVar10 + 0x14;
    if (*(char *)(lVar6 + 0x48) != '\0') {
      pfVar1 = pfVar10 + 0xe;
    }
    pfVar9 = *(float **)(param_1 + 0x18);
    uVar7 = (ulong)(uint)pfVar1[2];
    if (pfVar1[2] != 0.0) {
      plVar8 = *(long **)pfVar1;
      do {
        if ((float *)*plVar8 == pfVar9) goto LAB_0341ba44;
        uVar7 = uVar7 - 1;
        plVar8 = plVar8 + 2;
      } while (uVar7 != 0);
    }
    plVar8 = (long *)0x0;
LAB_0341ba44:
    if ((char)plVar8[1] == '\0') {
      auVar18 = NEON_fmov(0x3f800000,4);
      fVar11 = pfVar10[0x1e] * 0.5;
      fVar16 = *pfVar10 + pfVar10[3] * fVar11;
      fVar13 = pfVar10[1] + fVar11 * pfVar10[4];
      fVar11 = pfVar10[2] + fVar11 * pfVar10[5];
      fVar15 = pfVar9[0x1e] * 0.5;
      uVar19 = auVar18._12_4_;
      uVar17 = CONCAT44((pfVar9[4] * fVar15 - fVar13) + pfVar9[1],
                        (fVar15 * pfVar9[3] - fVar16) + *pfVar9);
      fVar15 = (pfVar9[5] * fVar15 - fVar11) + pfVar9[2];
      memset(auStack_1a0,0,0xc0);
      puVar2 = PTR_DAT_047e6db0;
      auVar14._8_4_ = fVar15;
      auVar14._0_8_ = uVar17;
      auVar14._12_4_ = 0;
      local_e0 = CONCAT44(fVar13,fVar16);
      auVar12._8_4_ = fVar11;
      auVar12._0_8_ = local_e0;
      auVar12._12_4_ = uVar19;
      uStack_d8 = auVar12._8_8_;
      uStack_c8 = (ulong)(uint)fVar15;
      local_a8 = 0;
      local_80 = 0;
      bVar4 = 0;
      if (*(long *)(param_2 + 8) != 0) {
        uStack_d0 = uVar17;
        local_c0 = pfVar9;
        pfStack_b8 = pfVar10;
        if ((*PTR_DAT_047e6da8 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_047e6da8);
          auVar14._12_4_ = 0;
          auVar12._4_4_ = fVar13;
          auVar12._0_4_ = fVar16;
          if (iVar5 != 0) {
            *(long *)(puVar2 + 8) = auVar18._8_8_;
            *(long *)puVar2 = auVar18._0_8_;
            __cxa_guard_release(PTR_DAT_047e6da8);
            auVar14._12_4_ = 0;
          }
        }
        uStack_68 = auVar12._8_8_;
        local_70 = auVar12._0_8_;
        uStack_58 = auVar14._8_8_;
        uStack_60 = auVar14._0_8_;
        auVar12 = NEON_frecpe(auVar14,4);
        auVar14 = NEON_frecps(auVar14,auVar12,4);
        local_24 = 0;
        auVar18._0_8_ =
             CONCAT44(auVar12._4_4_ * (float)((ulong)*(undefined8 *)puVar2 >> 0x20) * auVar14._4_4_,
                      auVar12._0_4_ * (float)*(undefined8 *)puVar2 * auVar14._0_4_);
        auVar18._8_4_ = auVar12._8_4_ * (float)*(undefined8 *)(puVar2 + 8) * auVar14._8_4_;
        auVar18._12_4_ =
             auVar12._12_4_ * (float)((ulong)*(undefined8 *)(puVar2 + 8) >> 0x20) * auVar14._12_4_;
        uStack_48 = auVar18._8_8_;
        local_50 = auVar18._0_8_;
        FUN_0341d17c(param_2,*(undefined8 *)(param_2 + 8),&local_70,&local_24,auStack_1a0,1);
        if (local_a8 == 0) {
          bVar4 = local_80;
        }
        else {
          bVar4 = FUN_0341d62c(auStack_1a0);
          bVar4 = bVar4 & 1 | local_80 != 0;
        }
      }
      *(undefined1 *)(plVar8 + 1) = 1;
      *(byte *)((long)plVar8 + 9) = bVar4 ^ 1;
    }
    bVar3 = *(char *)((long)plVar8 + 9) != '\0';
  }
  return bVar3;
}


