/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ea62c; name: FUN_034ea62c
 */


void FUN_034ea62c(float param_1,float param_2,float param_3,int *param_4,uint param_5,void *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_b0;
  float local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  
  local_a0 = &local_b0 + (ulong)(param_5 << 1) * -3;
  fVar15 = param_1 * param_1 + param_2 * param_2 + param_3 * param_3;
  auVar20._4_4_ = fVar15;
  auVar20._0_4_ = fVar15;
  auVar20._8_4_ = fVar15;
  auVar20._12_4_ = fVar15;
  NEON_frsqrte(auVar20,4);
  local_98 = (ulong)(param_5 << 1);
  if (param_1 == 0.0) {
    if (param_2 <= 0.0) {
      if (param_2 == 0.0) {
        fVar15 = 0.0;
        if ((int)param_1 < 0) {
          fVar15 = 3.1415927;
        }
        goto LAB_034ea790;
      }
      fVar15 = -1.5707964;
    }
    else {
      fVar15 = 1.5707964;
    }
  }
  else {
    fVar16 = param_2 / param_1;
    fVar21 = fVar16 / (fVar16 * fVar16 + 0.28);
    fVar15 = 1.5707964 - fVar21;
    if (param_2 < 0.0) {
      fVar15 = -1.5707964 - fVar21;
    }
    fVar17 = fVar16 / (fVar16 * fVar16 * 0.28 + 1.0);
    fVar21 = fVar17 + 3.1415927;
    if (param_2 < 0.0) {
      fVar21 = fVar17 + -3.1415927;
    }
    if (param_1 < 0.0) {
      fVar17 = fVar21;
    }
    if (ABS(fVar16) < 1.0) {
      fVar15 = fVar17;
    }
  }
LAB_034ea790:
  if (fVar15 <= 3.1415927) {
    if (-3.1415927 <= fVar15) goto LAB_034ea854;
    fVar16 = 6.2831855;
  }
  else {
    fVar16 = -6.2831855;
  }
  fVar15 = fVar15 + fVar16;
LAB_034ea854:
  local_90 = param_1;
  fStack_8c = param_2;
  local_88 = param_3;
  FUN_034e92f8(fVar15,param_4,&local_90,&local_a0);
  if (param_5 != 0) {
    memset(param_6,0,(ulong)param_5 << 2);
  }
  puVar4 = local_a0;
  uVar5 = local_98._4_4_;
  if (local_98._4_4_ != 0) {
    uVar11 = 0;
    do {
      uVar11 = uVar11 & 0xffff;
      puVar9 = (uint *)(puVar4 + uVar11 * 3);
      uVar3 = *param_4 - 1;
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      uVar10 = uVar2;
      if (((uVar1 == uVar3) || (uVar10 = uVar1, uVar2 == uVar3)) ||
         (*(uint *)(puVar4 + uVar11 * 3 + 1) == uVar3)) {
        if (*(uint *)(puVar4 + uVar11 * 3 + 1) != uVar3) {
          uVar2 = *(uint *)(puVar4 + uVar11 * 3 + 1);
        }
        uVar12 = (ulong)uVar2;
        pfVar14 = (float *)(*(long *)(param_4 + 0x12) + (ulong)uVar10 * 0xc);
        pfVar13 = (float *)(*(long *)(param_4 + 0x12) + uVar12 * 0xc);
        fVar21 = *pfVar13;
        fVar17 = pfVar13[1];
        fVar15 = *pfVar14;
        fVar16 = pfVar14[1];
        fVar22 = fVar17 * fVar15 - fVar21 * fVar16;
        bVar6 = false;
        bVar7 = true;
        bVar8 = false;
        if (fVar22 < 1e-38) {
          bVar6 = false;
          bVar7 = false;
          bVar8 = true;
          if (!NAN(fVar22)) {
            bVar6 = fVar22 < -1e-38;
            bVar7 = fVar22 == -1e-38;
            bVar8 = false;
          }
        }
        fVar18 = 0.0;
        fVar23 = 0.0;
        if (bVar7 || bVar6 != bVar8) {
          fVar23 = (1.0 / fVar22) * param_2;
          fVar22 = (1.0 / fVar22) * param_1;
          fVar18 = fVar22 * fVar17 - fVar23 * fVar21;
          fVar23 = fVar23 * fVar15 - fVar22 * fVar16;
          bVar6 = true;
          bVar7 = false;
          if (-1e-05 <= fVar18) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(fVar23)) {
              bVar6 = fVar23 < -1e-05;
              bVar7 = false;
            }
          }
          if (bVar6 != bVar7) goto LAB_034eaa1c;
        }
        auVar19._0_4_ = fVar23 * fVar23 + fVar18 * fVar18;
        if (1.1920929e-07 <= auVar19._0_4_) {
          auVar19._4_4_ = auVar19._0_4_;
          auVar19._8_4_ = auVar19._0_4_;
          auVar19._12_4_ = auVar19._0_4_;
          auVar20 = NEON_frecpe(auVar19,4);
          *(float *)((long)param_6 + (ulong)uVar10 * 4) =
               *(float *)((long)param_6 + (ulong)uVar10 * 4) + fVar18 * fVar18 * auVar20._0_4_;
          *(float *)((long)param_6 + uVar12 * 4) =
               *(float *)((long)param_6 + uVar12 * 4) + fVar23 * fVar23 * auVar20._0_4_;
        }
      }
      else {
        local_b0 = CONCAT44(fStack_8c,local_90);
        local_a8 = local_88;
        FUN_034ea488(param_4,puVar9,&local_b0,param_6);
      }
LAB_034eaa1c:
      uVar2 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar2;
    } while ((uVar2 & 0xffff) < uVar5);
  }
  return;
}


