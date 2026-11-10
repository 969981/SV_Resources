/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c6b68; name: FUN_033c6b68
 */


void FUN_033c6b68(float param_1,undefined4 param_2,float param_3,float param_4,float *param_5,
                 uint param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar7 = 0.0;
  if (8 < param_6) {
    fVar5 = 0.0;
    fVar4 = 0.0;
    fVar6 = 0.0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    goto LAB_033c722c;
  }
  fVar3 = (float)NEON_fminnm(param_1 * 0.45,param_2);
  switch(param_6) {
  case 0:
    if (-37.0 <= param_3 * 0.025) {
      uVar1 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar7 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar7 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar1 & 0xff800000);
    }
    else {
      fVar7 = 0.0;
    }
    param_1 = (fVar3 * 6.2831855) / param_1;
    fVar4 = sinf(param_1);
    fVar6 = cosf(param_1);
    fVar5 = fVar7 + 1.0;
    fVar9 = fVar7 + -1.0;
    fVar4 = fVar4 * SQRT(fVar7) * 1.4142135;
    fVar10 = fVar5 * fVar6;
    fVar2 = fVar5 - fVar9 * fVar6;
    fVar3 = (fVar2 + fVar4) * fVar7;
    fVar2 = (fVar2 - fVar4) * fVar7;
    fVar7 = fVar7 * ((fVar9 - fVar10) + (fVar9 - fVar10));
    fVar5 = fVar9 * fVar6 + fVar5;
    fVar6 = fVar5 + fVar4;
    goto LAB_033c7138;
  case 1:
    param_1 = (fVar3 * 6.2831855) / param_1;
    fVar4 = cosf(param_1);
    uVar1 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
    fVar7 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    fVar3 = 0.0;
    if (-37.0 <= param_3 * 0.025) {
      fVar3 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar1 & 0xff800000);
    }
    fVar5 = sinf(param_1);
    fVar5 = fVar5 / (param_4 + param_4);
    fVar2 = fVar3 * fVar5;
    fVar5 = fVar5 / fVar3;
    fVar4 = fVar4 * -2.0;
    fVar3 = fVar2 + 1.0;
    fVar2 = 1.0 - fVar2;
    fVar6 = fVar5 + 1.0;
    fVar5 = 1.0 - fVar5;
    fVar7 = fVar4;
    break;
  case 2:
    if (-37.0 <= param_3 * 0.025) {
      uVar1 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar7 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar2 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar1 & 0xff800000);
    }
    else {
      fVar2 = 0.0;
    }
    param_1 = (fVar3 * 6.2831855) / param_1;
    fVar4 = sinf(param_1);
    fVar7 = cosf(param_1);
    fVar5 = fVar2 + 1.0;
    fVar8 = fVar2 + -1.0;
    fVar4 = fVar4 * SQRT(fVar2) * 1.4142135;
    fVar9 = fVar5 * fVar7;
    fVar10 = fVar8 * fVar7 + fVar5;
    fVar5 = fVar5 - fVar8 * fVar7;
    fVar6 = fVar5 + fVar4;
    fVar3 = (fVar10 + fVar4) * fVar2;
    fVar7 = fVar2 * -2.0 * (fVar9 + fVar8);
    fVar2 = (fVar10 - fVar4) * fVar2;
    goto LAB_033c7220;
  case 3:
    fVar3 = tanf((fVar3 * 3.1415927) / param_1);
    fVar3 = 1.0 / fVar3;
    fVar4 = fVar3 * fVar3;
    fVar3 = fVar3 * 1.4142135;
    fVar5 = fVar4 + 1.0;
    fVar2 = 1.0 / (fVar5 + fVar3);
    fVar7 = fVar2 + fVar2;
    goto LAB_033c6d88;
  case 4:
    fVar3 = tanf((fVar3 * 3.1415927) / param_1);
    fVar4 = fVar3 * fVar3;
    fVar5 = fVar4 + 1.0;
    fVar3 = fVar3 * 1.4142135;
    fVar2 = 1.0 / (fVar5 + fVar3);
    fVar7 = fVar2 * -2.0;
LAB_033c6d88:
    fVar6 = 1.0;
    fVar4 = fVar7 - fVar7 * fVar4;
    fVar5 = fVar2 * (fVar5 - fVar3);
    fVar3 = fVar2;
    break;
  case 5:
    param_1 = (fVar3 * 6.2831855) / param_1;
    fVar4 = cosf(param_1);
    fVar3 = sinf(param_1);
    fVar3 = fVar3 / (param_4 + param_4);
    fVar2 = -fVar3;
    fVar6 = fVar3 + 1.0;
    fVar4 = fVar4 * -2.0;
    fVar5 = 1.0 - fVar3;
    break;
  case 6:
    param_1 = (fVar3 * 6.2831855) / param_1;
    fVar4 = cosf(param_1);
    fVar5 = sinf(param_1);
    fVar5 = fVar5 / (param_4 + param_4);
    fVar4 = fVar4 * -2.0;
    fVar6 = fVar5 + 1.0;
    fVar2 = 1.0;
    fVar5 = 1.0 - fVar5;
    fVar3 = 1.0;
    fVar7 = fVar4;
    break;
  case 7:
    if (-37.0 <= param_3 * 0.025) {
      uVar1 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar7 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar2 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar1 & 0xff800000);
    }
    else {
      fVar2 = 0.0;
    }
    param_1 = (fVar3 * 6.2831855) / param_1;
    fVar3 = sinf(param_1);
    fVar6 = cosf(param_1);
    fVar9 = fVar2 + -1.0;
    fVar5 = fVar2 + 1.0;
    fVar10 = fVar5 * fVar6;
    fVar7 = fVar2 * ((fVar9 - fVar10) + (fVar9 - fVar10));
    fVar4 = (fVar3 * (SQRT(fVar2) + SQRT(fVar2))) / (param_4 + param_4);
    fVar8 = fVar5 - fVar9 * fVar6;
    fVar5 = fVar9 * fVar6 + fVar5;
    fVar6 = fVar4 + fVar5;
    fVar3 = (fVar4 + fVar8) * fVar2;
    fVar2 = (fVar8 - fVar4) * fVar2;
LAB_033c7138:
    fVar5 = fVar5 - fVar4;
    fVar4 = (fVar10 + fVar9) * -2.0;
    break;
  case 8:
    if (-37.0 <= param_3 * 0.025) {
      uVar1 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar7 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar2 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar1 & 0xff800000);
    }
    else {
      fVar2 = 0.0;
    }
    param_1 = (fVar3 * 6.2831855) / param_1;
    fVar7 = sinf(param_1);
    fVar3 = cosf(param_1);
    fVar8 = fVar2 + -1.0;
    fVar4 = (fVar7 * (SQRT(fVar2) + SQRT(fVar2))) / (param_4 + param_4);
    fVar5 = fVar2 + 1.0;
    fVar9 = fVar5 * fVar3;
    fVar6 = fVar8 * fVar3 + fVar5;
    fVar7 = fVar2 * -2.0 * (fVar9 + fVar8);
    fVar5 = fVar5 - fVar8 * fVar3;
    fVar3 = (fVar4 + fVar6) * fVar2;
    fVar2 = (fVar6 - fVar4) * fVar2;
    fVar6 = fVar4 + fVar5;
LAB_033c7220:
    fVar5 = fVar5 - fVar4;
    fVar4 = (fVar8 - fVar9) + (fVar8 - fVar9);
  }
LAB_033c722c:
  fVar6 = 1.0 / fVar6;
  fVar9 = fVar4 * fVar6;
  fVar2 = fVar2 * fVar6;
  fVar10 = fVar5 * fVar6;
  fVar4 = -(fVar4 * fVar6);
  fVar13 = fVar9 * fVar9;
  fVar5 = -(fVar5 * fVar6);
  fVar12 = fVar2 * fVar4;
  fVar3 = fVar3 * fVar6;
  fVar7 = fVar7 * fVar6;
  param_5[0x18] = fVar4;
  param_5[0x1c] = fVar5;
  fVar6 = fVar7 * fVar5;
  param_5[0x10] = fVar7;
  *param_5 = fVar3;
  param_5[1] = fVar3;
  param_5[2] = fVar3;
  param_5[3] = fVar3;
  param_5[0x19] = fVar13 - fVar10;
  param_5[0x16] = fVar12 * fVar4 + fVar2 * fVar5;
  param_5[0x15] = fVar12;
  fVar14 = fVar7 - fVar9 * fVar3;
  fVar8 = fVar2 - fVar9 * fVar7;
  param_5[7] = fVar14;
  param_5[10] = fVar14;
  param_5[0xd] = fVar14;
  fVar11 = fVar10 * fVar9;
  param_5[0x14] = fVar2;
  fVar7 = fVar2 - (fVar14 * fVar9 + fVar10 * fVar3);
  param_5[0x11] = fVar8;
  fVar8 = fVar6 - fVar9 * fVar8;
  param_5[0x12] = fVar8;
  param_5[0xe] = fVar7;
  param_5[0xb] = fVar7;
  param_5[0x1a] = fVar13 * fVar4 + fVar9 * (fVar10 + fVar10);
  param_5[0x1d] = fVar11;
  param_5[0x17] = fVar12 * fVar10 * -2.0 - fVar12 * fVar4 * fVar9;
  param_5[0x1e] = fVar11 * fVar4 + fVar10 * fVar10;
  param_5[0xf] = (fVar6 + fVar11 * fVar3) - fVar9 * fVar7;
  param_5[4] = 0.0;
  param_5[5] = 0.0;
  param_5[6] = 0.0;
  param_5[8] = 0.0;
  param_5[9] = 0.0;
  param_5[0xc] = 0.0;
  param_5[0x1b] = -(fVar13 * fVar4 * fVar9) - (-(fVar10 * -3.0 * fVar13) - fVar10 * fVar10);
  param_5[0x13] = fVar2 * fVar5 - fVar9 * (fVar8 + fVar6);
  param_5[0x1f] = fVar11 * fVar10 * -2.0 - fVar11 * fVar4 * fVar9;
  return;
}


