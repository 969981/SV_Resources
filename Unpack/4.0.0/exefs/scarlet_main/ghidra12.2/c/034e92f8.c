/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e92f8; name: FUN_034e92f8
 */


void FUN_034e92f8(float param_1,float param_2,long param_3,float *param_4,long *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_2 <= 0.0) {
    uVar2 = *(uint *)(param_3 + 0x30);
    if (uVar2 != 0) {
      puVar4 = *(undefined8 **)(param_3 + 0x28);
      puVar3 = puVar4;
      do {
        fVar6 = *(float *)((long)puVar4 + 0xc) - param_1;
        if (fVar6 * fVar6 + (*(float *)(puVar4 + 2) - param_2) * (*(float *)(puVar4 + 2) - param_2)
            <= *(float *)((long)puVar4 + 0x14)) {
          puVar3 = (undefined8 *)(*param_5 + (ulong)*(uint *)((long)param_5 + 0xc) * 0x18);
          *(uint *)((long)param_5 + 0xc) = *(uint *)((long)param_5 + 0xc) + 1;
          uVar1 = *(undefined4 *)(puVar4 + 1);
          *puVar3 = *puVar4;
          *(undefined4 *)(puVar3 + 1) = uVar1;
          puVar3 = *(undefined8 **)(param_3 + 0x28);
          uVar2 = *(uint *)(param_3 + 0x30);
        }
        puVar4 = puVar4 + 3;
      } while (puVar4 != puVar3 + (ulong)uVar2 * 3);
    }
    fVar6 = *param_4;
    fVar7 = param_4[1];
    fVar10 = param_4[2];
    auVar9._0_4_ = fVar6 * fVar6 + fVar10 * fVar10 + fVar7 * fVar7;
    auVar9._4_4_ = auVar9._0_4_;
    auVar9._8_4_ = auVar9._0_4_;
    auVar9._12_4_ = auVar9._0_4_;
    auVar9 = NEON_frsqrte(auVar9,4);
    if (fVar6 == 0.0) {
      fVar5 = 0.0;
      if ((int)-fVar6 < 0) {
        fVar5 = 3.1415927;
      }
      fVar6 = -1.5707964;
      if (fVar10 == 0.0) {
        fVar6 = fVar5;
      }
      fVar5 = 1.5707964;
      if (fVar10 <= 0.0) {
        fVar5 = fVar6;
      }
    }
    else {
      fVar12 = fVar10 / -fVar6;
      fVar13 = fVar12 / (fVar12 * fVar12 + 0.28);
      fVar5 = 1.5707964 - fVar13;
      if (fVar10 < 0.0) {
        fVar5 = -1.5707964 - fVar13;
      }
      fVar13 = fVar12 / (fVar12 * fVar12 * 0.28 + 1.0);
      fVar11 = fVar13 + 3.1415927;
      if (fVar10 < 0.0) {
        fVar11 = fVar13 + -3.1415927;
      }
      if (0.0 < fVar6) {
        fVar13 = fVar11;
      }
      if (ABS(fVar12) < 1.0) {
        fVar5 = fVar13;
      }
    }
    fVar7 = auVar9._0_4_ * -fVar7;
    fVar10 = ABS(fVar7);
    fVar12 = fVar10 * (fVar10 * (fVar10 * (fVar10 * (fVar10 * 84.31466 + -242.71996) + 262.81305) +
                                -131.11235) + 29.66154) + -1.4518384;
    fVar6 = fVar10 * fVar12 + 0.0328437;
    if (fVar7 < 0.0) {
      fVar6 = -(fVar12 * fVar10) - 0.0328437;
    }
    if (fVar5 <= 3.1415927) {
      if (fVar5 < -3.1415927) {
        fVar7 = 6.2831855;
        goto LAB_034e9828;
      }
    }
    else {
      fVar7 = -6.2831855;
LAB_034e9828:
      fVar5 = fVar5 + fVar7;
    }
    if (fVar6 <= 1.5707964) {
      if (-1.5707964 <= fVar6) goto LAB_034e9874;
      fVar7 = 3.1415927;
    }
    else {
      fVar7 = -3.1415927;
    }
    fVar6 = fVar6 + fVar7;
LAB_034e9874:
    uVar2 = *(uint *)(param_3 + 0x40);
    if (uVar2 == 0) {
      return;
    }
    puVar4 = *(undefined8 **)(param_3 + 0x38);
    puVar3 = puVar4;
    do {
      fVar7 = *(float *)((long)puVar4 + 0xc) - fVar5;
      if (fVar7 * fVar7 + (*(float *)(puVar4 + 2) - fVar6) * (*(float *)(puVar4 + 2) - fVar6) <=
          *(float *)((long)puVar4 + 0x14)) {
        puVar3 = (undefined8 *)(*param_5 + (ulong)*(uint *)((long)param_5 + 0xc) * 0x18);
        *(uint *)((long)param_5 + 0xc) = *(uint *)((long)param_5 + 0xc) + 1;
        uVar1 = *(undefined4 *)(puVar4 + 1);
        *puVar3 = *puVar4;
        *(undefined4 *)(puVar3 + 1) = uVar1;
        puVar3 = *(undefined8 **)(param_3 + 0x38);
        uVar2 = *(uint *)(param_3 + 0x40);
      }
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar3 + (ulong)uVar2 * 3);
    return;
  }
  uVar2 = *(uint *)(param_3 + 0x10);
  if (uVar2 != 0) {
    puVar4 = *(undefined8 **)(param_3 + 8);
    puVar3 = puVar4;
    do {
      fVar6 = *(float *)((long)puVar4 + 0xc) - param_1;
      if (fVar6 * fVar6 + (*(float *)(puVar4 + 2) - param_2) * (*(float *)(puVar4 + 2) - param_2) <=
          *(float *)((long)puVar4 + 0x14)) {
        puVar3 = (undefined8 *)(*param_5 + (ulong)*(uint *)((long)param_5 + 0xc) * 0x18);
        *(uint *)((long)param_5 + 0xc) = *(uint *)((long)param_5 + 0xc) + 1;
        uVar1 = *(undefined4 *)(puVar4 + 1);
        *puVar3 = *puVar4;
        *(undefined4 *)(puVar3 + 1) = uVar1;
        puVar3 = *(undefined8 **)(param_3 + 8);
        uVar2 = *(uint *)(param_3 + 0x10);
      }
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar3 + (ulong)uVar2 * 3);
  }
  fVar6 = *param_4;
  fVar7 = param_4[1];
  fVar10 = param_4[2];
  auVar8._0_4_ = fVar6 * fVar6 + fVar10 * fVar10 + fVar7 * fVar7;
  auVar8._4_4_ = auVar8._0_4_;
  auVar8._8_4_ = auVar8._0_4_;
  auVar8._12_4_ = auVar8._0_4_;
  auVar9 = NEON_frsqrte(auVar8,4);
  if (fVar6 == 0.0) {
    fVar5 = 0.0;
    if ((int)-fVar6 < 0) {
      fVar5 = 3.1415927;
    }
    fVar6 = -1.5707964;
    if (fVar10 == 0.0) {
      fVar6 = fVar5;
    }
    fVar5 = 1.5707964;
    if (fVar10 <= 0.0) {
      fVar5 = fVar6;
    }
  }
  else {
    fVar12 = fVar10 / -fVar6;
    fVar13 = fVar12 / (fVar12 * fVar12 + 0.28);
    fVar5 = 1.5707964 - fVar13;
    if (fVar10 < 0.0) {
      fVar5 = -1.5707964 - fVar13;
    }
    fVar13 = fVar12 / (fVar12 * fVar12 * 0.28 + 1.0);
    fVar11 = fVar13 + 3.1415927;
    if (fVar10 < 0.0) {
      fVar11 = fVar13 + -3.1415927;
    }
    if (0.0 < fVar6) {
      fVar13 = fVar11;
    }
    if (ABS(fVar12) < 1.0) {
      fVar5 = fVar13;
    }
  }
  fVar7 = auVar9._0_4_ * -fVar7;
  fVar10 = ABS(fVar7);
  fVar12 = fVar10 * (fVar10 * (fVar10 * (fVar10 * (fVar10 * 84.31466 + -242.71996) + 262.81305) +
                              -131.11235) + 29.66154) + -1.4518384;
  fVar6 = fVar10 * fVar12 + 0.0328437;
  if (fVar7 < 0.0) {
    fVar6 = -(fVar12 * fVar10) - 0.0328437;
  }
  if (fVar5 <= 3.1415927) {
    if (fVar5 < -3.1415927) {
      fVar7 = 6.2831855;
      goto LAB_034e966c;
    }
  }
  else {
    fVar7 = -6.2831855;
LAB_034e966c:
    fVar5 = fVar5 + fVar7;
  }
  if (fVar6 <= 1.5707964) {
    if (-1.5707964 <= fVar6) goto LAB_034e96b8;
    fVar7 = 3.1415927;
  }
  else {
    fVar7 = -3.1415927;
  }
  fVar6 = fVar6 + fVar7;
LAB_034e96b8:
  uVar2 = *(uint *)(param_3 + 0x20);
  if (uVar2 != 0) {
    puVar4 = *(undefined8 **)(param_3 + 0x18);
    puVar3 = puVar4;
    do {
      fVar7 = *(float *)((long)puVar4 + 0xc) - fVar5;
      if (fVar7 * fVar7 + (*(float *)(puVar4 + 2) - fVar6) * (*(float *)(puVar4 + 2) - fVar6) <=
          *(float *)((long)puVar4 + 0x14)) {
        puVar3 = (undefined8 *)(*param_5 + (ulong)*(uint *)((long)param_5 + 0xc) * 0x18);
        *(uint *)((long)param_5 + 0xc) = *(uint *)((long)param_5 + 0xc) + 1;
        uVar1 = *(undefined4 *)(puVar4 + 1);
        *puVar3 = *puVar4;
        *(undefined4 *)(puVar3 + 1) = uVar1;
        puVar3 = *(undefined8 **)(param_3 + 0x18);
        uVar2 = *(uint *)(param_3 + 0x20);
      }
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar3 + (ulong)uVar2 * 3);
  }
  return;
}


