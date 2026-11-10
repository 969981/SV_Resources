/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e9b74; name: FUN_034e9b74
 */


void FUN_034e9b74(int *param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (param_3 != 0) {
    lVar1 = 0;
    lVar3 = 4;
    fVar6 = 1.5707964;
    do {
      fVar11 = *(float *)(param_2 + lVar1 + 4);
      fVar13 = *(float *)(param_2 + lVar1 + 8);
      fVar8 = fVar11;
      if (fVar11 < -3.1415927) {
        fVar8 = fVar11 + 6.2831855;
      }
      if (3.1415927 < fVar11) {
        fVar8 = fVar11 + -6.2831855;
      }
      fVar11 = fVar13;
      if (fVar13 < -1.5707964) {
        fVar11 = fVar13 + 3.1415927;
      }
      if (1.5707964 < fVar13) {
        fVar11 = fVar13 + -3.1415927;
      }
      pfVar4 = (float *)(*(long *)(param_1 + 0x12) + lVar1);
      fVar13 = -4.712389;
      if (fVar11 <= 1.5707964) {
        fVar13 = fVar6;
      }
      fVar13 = fVar13 + fVar11;
      fVar14 = fVar13 * 1.2732395 - fVar13 * 0.4052847 * ABS(fVar13);
      fVar13 = -4.712389;
      if (fVar8 <= 1.5707964) {
        fVar13 = fVar6;
      }
      fVar13 = fVar13 + fVar8;
      fVar10 = fVar13 * 1.2732395 - fVar13 * 0.4052847 * ABS(fVar13);
      fVar14 = fVar14 + (ABS(fVar14) * fVar14 - fVar14) * 0.225;
      fVar13 = fVar8 * 1.2732395 - fVar8 * 0.4052847 * ABS(fVar8);
      *pfVar4 = fVar14 * (fVar10 + (ABS(fVar10) * fVar10 - fVar10) * 0.225);
      pfVar4[1] = fVar14 * (fVar13 + (ABS(fVar13) * fVar13 - fVar13) * 0.225);
      fVar13 = fVar11 * 1.2732395 - fVar11 * 0.4052847 * ABS(fVar11);
      pfVar4[2] = fVar13 + (ABS(fVar13) * fVar13 - fVar13) * 0.225;
      lVar5 = *(long *)(param_1 + 0x14);
      ((float *)(lVar5 + lVar3))[-1] = fVar8;
      *(float *)(lVar5 + lVar3) = fVar11;
      pfVar4 = (float *)(*(long *)(param_1 + 0x12) + lVar1);
      fVar11 = *pfVar4;
      fVar8 = pfVar4[1];
      fVar13 = pfVar4[2];
      lVar5 = *(long *)(param_1 + 0x16);
      auVar9._0_4_ = fVar11 * fVar11 + fVar13 * fVar13 + fVar8 * fVar8;
      auVar9._4_4_ = auVar9._0_4_;
      auVar9._8_4_ = auVar9._0_4_;
      auVar9._12_4_ = auVar9._0_4_;
      auVar9 = NEON_frsqrte(auVar9,4);
      if (fVar11 == 0.0) {
        if (fVar13 <= 0.0) {
          if (fVar13 == 0.0) {
            fVar14 = 0.0;
            if ((int)-fVar11 < 0) {
              fVar14 = 3.1415927;
            }
          }
          else {
            fVar14 = -1.5707964;
          }
        }
        else {
          fVar14 = fVar6;
        }
      }
      else {
        fVar10 = fVar13 / -fVar11;
        fVar15 = fVar10 / (fVar10 * fVar10 + 0.28);
        fVar14 = 1.5707964 - fVar15;
        if (fVar13 < 0.0) {
          fVar14 = -1.5707964 - fVar15;
        }
        fVar15 = fVar10 / (fVar10 * fVar10 * 0.28 + 1.0);
        fVar12 = fVar15 + 3.1415927;
        if (fVar13 < 0.0) {
          fVar12 = fVar15 + -3.1415927;
        }
        if (0.0 < fVar11) {
          fVar15 = fVar12;
        }
        if (ABS(fVar10) < 1.0) {
          fVar14 = fVar15;
        }
      }
      fVar11 = auVar9._0_4_ * -fVar8;
      fVar13 = ABS(fVar11);
      fVar10 = fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * 84.31466 + -242.71996) + 262.81305)
                                  + -131.11235) + 29.66154) + -1.4518384;
      fVar8 = fVar13 * fVar10 + 0.0328437;
      if (fVar11 < 0.0) {
        fVar8 = -(fVar10 * fVar13) - 0.0328437;
      }
      pfVar4 = (float *)(lVar5 + lVar3);
      pfVar4[-1] = fVar14;
      *pfVar4 = fVar8;
      fVar11 = -6.2831855;
      if ((3.1415927 < fVar14) || (fVar11 = 6.2831855, fVar14 < -3.1415927)) {
        pfVar4[-1] = fVar14 + fVar11;
      }
      if (fVar8 <= 1.5707964) {
        if (fVar8 < -1.5707964) {
          fVar11 = 3.1415927;
          goto LAB_034e9ed4;
        }
      }
      else {
        fVar11 = -3.1415927;
LAB_034e9ed4:
        *(float *)(lVar5 + lVar3) = fVar8 + fVar11;
      }
      lVar1 = lVar1 + 0xc;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_3 * 0xc != lVar1);
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x12) + (ulong)(*param_1 - 1) * 0xc);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0xbf800000;
  *(undefined8 *)(*(long *)(param_1 + 0x14) + (ulong)(*param_1 - 1) * 8) = 0xbfc90fdb00000000;
  pfVar4 = (float *)(*(long *)(param_1 + 0x12) + (ulong)(*param_1 - 1) * 0xc);
  fVar8 = *pfVar4;
  fVar6 = pfVar4[1];
  fVar11 = pfVar4[2];
  auVar7._0_4_ = fVar8 * fVar8 + fVar11 * fVar11 + fVar6 * fVar6;
  auVar7._4_4_ = auVar7._0_4_;
  auVar7._8_4_ = auVar7._0_4_;
  auVar7._12_4_ = auVar7._0_4_;
  auVar9 = NEON_frsqrte(auVar7,4);
  if (fVar8 == 0.0) {
    fVar13 = 0.0;
    if ((int)-fVar8 < 0) {
      fVar13 = 3.1415927;
    }
    fVar8 = -1.5707964;
    if (fVar11 == 0.0) {
      fVar8 = fVar13;
    }
    fVar13 = 1.5707964;
    if (fVar11 <= 0.0) {
      fVar13 = fVar8;
    }
  }
  else {
    fVar14 = fVar11 / -fVar8;
    fVar10 = fVar14 / (fVar14 * fVar14 + 0.28);
    fVar13 = 1.5707964 - fVar10;
    if (fVar11 < 0.0) {
      fVar13 = -1.5707964 - fVar10;
    }
    fVar10 = fVar14 / (fVar14 * fVar14 * 0.28 + 1.0);
    fVar15 = fVar10 + 3.1415927;
    if (fVar11 < 0.0) {
      fVar15 = fVar10 + -3.1415927;
    }
    if (0.0 < fVar8) {
      fVar10 = fVar15;
    }
    if (ABS(fVar14) < 1.0) {
      fVar13 = fVar10;
    }
  }
  fVar8 = auVar9._0_4_ * -fVar6;
  fVar11 = ABS(fVar8);
  fVar14 = fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * 84.31466 + -242.71996) + 262.81305) +
                              -131.11235) + 29.66154) + -1.4518384;
  fVar6 = fVar11 * fVar14 + 0.0328437;
  if (fVar8 < 0.0) {
    fVar6 = -(fVar14 * fVar11) - 0.0328437;
  }
  pfVar4 = (float *)(*(long *)(param_1 + 0x16) + (ulong)(*param_1 - 1) * 8);
  *pfVar4 = fVar13;
  pfVar4[1] = fVar6;
  if (fVar13 <= 3.1415927) {
    if (fVar13 < -3.1415927) {
      fVar8 = 6.2831855;
      goto LAB_034ea108;
    }
  }
  else {
    fVar8 = -6.2831855;
LAB_034ea108:
    *pfVar4 = fVar13 + fVar8;
  }
  if (fVar6 <= 1.5707964) {
    if (-1.5707964 <= fVar6) goto LAB_034ea15c;
    fVar8 = 3.1415927;
  }
  else {
    fVar8 = -3.1415927;
  }
  pfVar4[1] = fVar6 + fVar8;
LAB_034ea15c:
  FUN_034e8e50(param_1,*(undefined8 *)(param_1 + 0x14),0,0,param_1 + 2,param_1 + 10);
  FUN_034e8e50(param_1,*(undefined8 *)(param_1 + 0x16),param_1 + 2,param_1 + 10,param_1 + 6,
               param_1 + 0xe);
  return;
}


