/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d3c04; name: FUN_033d3c04
 */


void FUN_033d3c04(float param_1,undefined4 param_2,float param_3,float param_4,long *param_5,
                 uint param_6)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  float *pfVar4;
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
  float fVar15;
  float fVar16;
  
  fVar7 = 0.0;
  if (8 < param_6) {
    fVar9 = 0.0;
    fVar12 = 0.0;
    fVar5 = 0.0;
    fVar8 = 0.0;
    fVar6 = 0.0;
    goto LAB_033d42d8;
  }
  fVar6 = (float)NEON_fminnm(param_1 * 0.45,param_2);
  switch(param_6) {
  case 0:
    if (-37.0 <= param_3 * 0.025) {
      uVar3 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar7 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      fVar8 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar3 & 0xff800000);
    }
    else {
      fVar8 = 0.0;
    }
    param_1 = (fVar6 * 6.2831855) / param_1;
    fVar10 = sinf(param_1);
    fVar6 = cosf(param_1);
    fVar13 = fVar8 + -1.0;
    fVar9 = fVar8 + 1.0;
    fVar14 = fVar9 * fVar6;
    fVar7 = fVar8 * ((fVar13 - fVar14) + (fVar13 - fVar14));
    fVar10 = fVar10 * SQRT(fVar8) * 1.4142135;
    fVar12 = fVar9 - fVar13 * fVar6;
    fVar9 = fVar13 * fVar6 + fVar9;
    fVar5 = (fVar12 + fVar10) * fVar8;
    fVar8 = (fVar12 - fVar10) * fVar8;
    fVar12 = fVar9 + fVar10;
    goto LAB_033d41e0;
  case 1:
    param_1 = (fVar6 * 6.2831855) / param_1;
    fVar7 = cosf(param_1);
    uVar3 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
    fVar8 = (float)(uVar3 & 0x7fffff | 0x3f800000);
    fVar6 = 0.0;
    if (-37.0 <= param_3 * 0.025) {
      fVar6 = (fVar8 * (fVar8 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar3 & 0xff800000);
    }
    fVar9 = sinf(param_1);
    fVar9 = fVar9 / (param_4 + param_4);
    fVar7 = fVar7 * -2.0;
    fVar8 = fVar6 * fVar9;
    fVar9 = fVar9 / fVar6;
    fVar5 = fVar8 + 1.0;
    fVar8 = 1.0 - fVar8;
    fVar12 = fVar9 + 1.0;
    fVar9 = 1.0 - fVar9;
    fVar6 = fVar7;
    break;
  case 2:
    if (-37.0 <= param_3 * 0.025) {
      uVar3 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar7 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      fVar8 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar3 & 0xff800000);
    }
    else {
      fVar8 = 0.0;
    }
    param_1 = (fVar6 * 6.2831855) / param_1;
    fVar10 = sinf(param_1);
    fVar6 = cosf(param_1);
    fVar13 = fVar8 + -1.0;
    fVar9 = fVar8 + 1.0;
    fVar14 = fVar9 * fVar6;
    fVar7 = fVar8 * -2.0 * (fVar14 + fVar13);
    fVar10 = fVar10 * SQRT(fVar8) * 1.4142135;
    fVar12 = fVar13 * fVar6 + fVar9;
    fVar9 = fVar9 - fVar13 * fVar6;
    fVar5 = (fVar12 + fVar10) * fVar8;
    fVar8 = (fVar12 - fVar10) * fVar8;
    fVar12 = fVar9 + fVar10;
    goto LAB_033d42cc;
  case 3:
    fVar6 = tanf((fVar6 * 3.1415927) / param_1);
    fVar6 = 1.0 / fVar6;
    fVar8 = fVar6 * 1.4142135;
    fVar6 = fVar6 * fVar6;
    fVar9 = fVar6 + 1.0;
    fVar5 = 1.0 / (fVar9 + fVar8);
    fVar7 = fVar5 + fVar5;
    goto LAB_033d3e24;
  case 4:
    fVar6 = tanf((fVar6 * 3.1415927) / param_1);
    fVar8 = fVar6 * 1.4142135;
    fVar6 = fVar6 * fVar6;
    fVar9 = fVar6 + 1.0;
    fVar5 = 1.0 / (fVar9 + fVar8);
    fVar7 = fVar5 * -2.0;
LAB_033d3e24:
    fVar12 = 1.0;
    fVar9 = fVar5 * (fVar9 - fVar8);
    fVar8 = fVar5;
    fVar6 = fVar7 - fVar7 * fVar6;
    break;
  case 5:
    param_1 = (fVar6 * 6.2831855) / param_1;
    fVar6 = cosf(param_1);
    fVar5 = sinf(param_1);
    fVar5 = fVar5 / (param_4 + param_4);
    fVar12 = fVar5 + 1.0;
    fVar9 = 1.0 - fVar5;
    fVar8 = -fVar5;
    fVar6 = fVar6 * -2.0;
    break;
  case 6:
    param_1 = (fVar6 * 6.2831855) / param_1;
    fVar7 = cosf(param_1);
    fVar9 = sinf(param_1);
    fVar9 = fVar9 / (param_4 + param_4);
    fVar7 = fVar7 * -2.0;
    fVar12 = fVar9 + 1.0;
    fVar9 = 1.0 - fVar9;
    fVar5 = 1.0;
    fVar8 = 1.0;
    fVar6 = fVar7;
    break;
  case 7:
    if (-37.0 <= param_3 * 0.025) {
      uVar3 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar7 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      fVar8 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar3 & 0xff800000);
    }
    else {
      fVar8 = 0.0;
    }
    param_1 = (fVar6 * 6.2831855) / param_1;
    fVar7 = sinf(param_1);
    fVar6 = cosf(param_1);
    fVar13 = fVar8 + -1.0;
    fVar10 = (fVar7 * (SQRT(fVar8) + SQRT(fVar8))) / (param_4 + param_4);
    fVar9 = fVar8 + 1.0;
    fVar14 = fVar9 * fVar6;
    fVar11 = fVar9 - fVar13 * fVar6;
    fVar7 = fVar8 * ((fVar13 - fVar14) + (fVar13 - fVar14));
    fVar9 = fVar13 * fVar6 + fVar9;
    fVar12 = fVar10 + fVar9;
    fVar5 = (fVar10 + fVar11) * fVar8;
    fVar8 = (fVar11 - fVar10) * fVar8;
LAB_033d41e0:
    fVar6 = (fVar14 + fVar13) * -2.0;
LAB_033d42d4:
    fVar9 = fVar9 - fVar10;
    break;
  case 8:
    if (-37.0 <= param_3 * 0.025) {
      uVar3 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar7 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      fVar8 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar3 & 0xff800000);
    }
    else {
      fVar8 = 0.0;
    }
    param_1 = (fVar6 * 6.2831855) / param_1;
    fVar7 = sinf(param_1);
    fVar6 = cosf(param_1);
    fVar13 = fVar8 + -1.0;
    fVar10 = (fVar7 * (SQRT(fVar8) + SQRT(fVar8))) / (param_4 + param_4);
    fVar9 = fVar8 + 1.0;
    fVar14 = fVar9 * fVar6;
    fVar11 = fVar13 * fVar6 + fVar9;
    fVar9 = fVar9 - fVar13 * fVar6;
    fVar12 = fVar10 + fVar9;
    fVar5 = (fVar10 + fVar11) * fVar8;
    fVar7 = fVar8 * -2.0 * (fVar14 + fVar13);
    fVar8 = (fVar11 - fVar10) * fVar8;
LAB_033d42cc:
    fVar6 = (fVar13 - fVar14) + (fVar13 - fVar14);
    goto LAB_033d42d4;
  }
LAB_033d42d8:
  fVar12 = 1.0 / fVar12;
  fVar5 = fVar5 * fVar12;
  fVar7 = fVar7 * fVar12;
  fVar8 = fVar8 * fVar12;
  fVar10 = fVar6 * fVar12;
  fVar11 = fVar9 * fVar12;
  fVar6 = -(fVar6 * fVar12);
  fVar9 = -(fVar9 * fVar12);
  uVar3 = *(uint *)((long)param_5 + 0xc);
  if (((uVar3 & 1) != 0) && (pfVar4 = (float *)*param_5, pfVar4 != (float *)0x0)) {
    fVar13 = fVar8 * fVar6;
    fVar14 = fVar10 * fVar10;
    pfVar4[0x15] = fVar13;
    pfVar4[0x19] = fVar14 - fVar11;
    pfVar4[0x16] = fVar13 * fVar6 + fVar8 * fVar9;
    fVar15 = fVar8 - fVar10 * fVar7;
    fVar12 = fVar7 * fVar9;
    pfVar4[0x17] = fVar11 * -2.0 * fVar13 - fVar13 * fVar6 * fVar10;
    fVar13 = fVar11 * fVar10;
    *pfVar4 = fVar5;
    pfVar4[1] = fVar5;
    pfVar4[2] = fVar5;
    pfVar4[3] = fVar5;
    pfVar4[4] = 0.0;
    pfVar4[5] = 0.0;
    pfVar4[6] = 0.0;
    pfVar4[8] = 0.0;
    pfVar4[9] = 0.0;
    pfVar4[0xc] = 0.0;
    pfVar4[0x10] = fVar7;
    pfVar4[0x18] = fVar6;
    pfVar4[0x1a] = fVar14 * fVar6 + fVar10 * (fVar11 + fVar11);
    pfVar4[0x11] = fVar15;
    fVar15 = fVar12 - fVar10 * fVar15;
    pfVar4[0x12] = fVar15;
    fVar16 = fVar7 - fVar10 * fVar5;
    pfVar4[7] = fVar16;
    pfVar4[10] = fVar16;
    pfVar4[0xd] = fVar16;
    fVar16 = fVar8 - (fVar16 * fVar10 + fVar11 * fVar5);
    pfVar4[0xf] = (fVar12 + fVar13 * fVar5) - fVar10 * fVar16;
    pfVar4[0x13] = fVar8 * fVar9 - fVar10 * (fVar15 + fVar12);
    pfVar4[0xb] = fVar16;
    pfVar4[0xe] = fVar16;
    pfVar4[0x1e] = fVar13 * fVar6 + fVar11 * fVar11;
    pfVar4[0x14] = fVar8;
    pfVar4[0x1b] = -(fVar14 * fVar6 * fVar10) - (-(fVar11 * -3.0 * fVar14) - fVar11 * fVar11);
    pfVar4[0x1c] = fVar9;
    pfVar4[0x1d] = fVar13;
    pfVar4[0x1f] = fVar13 * fVar11 * -2.0 - fVar13 * fVar6 * fVar10;
    uVar3 = *(uint *)((long)param_5 + 0xc);
  }
  if (((uVar3 >> 1 & 1) != 0) && (*param_5 != 0)) {
    fVar12 = fVar7 - fVar10 * fVar5;
    puVar1 = (undefined4 *)(*param_5 + (ulong)((uVar3 & 1) << 5) * 4);
    *puVar1 = 0;
    puVar1[5] = fVar12;
    puVar1[7] = fVar12;
    fVar12 = fVar8 - fVar10 * fVar7;
    puVar1[9] = fVar12;
    puVar1[0xb] = fVar12;
    puVar1[0xd] = fVar8 * fVar6;
    puVar1[0xf] = fVar8 * fVar6;
    fVar12 = fVar10 * fVar10 - fVar11;
    puVar1[1] = fVar5;
    puVar1[2] = 0;
    puVar1[3] = fVar5;
    puVar1[4] = fVar5;
    puVar1[6] = fVar5;
    puVar1[8] = fVar7;
    puVar1[10] = fVar7;
    puVar1[0xc] = fVar8;
    puVar1[0xe] = fVar8;
    puVar1[0x10] = fVar6;
    puVar1[0x11] = fVar12;
    puVar1[0x12] = fVar6;
    puVar1[0x13] = fVar12;
    puVar1[0x14] = fVar9;
    puVar1[0x15] = fVar11 * fVar10;
    puVar1[0x16] = fVar9;
    puVar1[0x17] = fVar11 * fVar10;
    uVar3 = *(uint *)((long)param_5 + 0xc);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    lVar2 = 0;
    if ((uVar3 & 2) != 0) {
      lVar2 = 0x60;
    }
    if (*param_5 != 0) {
      pfVar4 = (float *)(*param_5 + (ulong)((uVar3 & 1) << 5) * 4 + lVar2);
      *pfVar4 = fVar5;
      pfVar4[1] = fVar7;
      pfVar4[2] = fVar8;
      pfVar4[3] = fVar6;
      pfVar4[4] = fVar9;
    }
  }
  return;
}


