/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034952fc; name: FUN_034952fc
 */


void FUN_034952fc(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  uint uVar6;
  float __x;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar12 = param_4[4];
  fVar11 = *param_4;
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  __x = param_4[3];
  fVar7 = param_4[5];
  lVar5 = *(long *)(param_4 + 6);
  if ((uint)fVar7 < 6) {
    pfVar1 = param_5 + param_6;
    fVar8 = (param_1 - param_2) / (float)param_6;
    switch(fVar7) {
    case 0.0:
      if (param_6 != 0) {
        fVar15 = 1.0 / fVar12;
        do {
          uVar6 = (uint)((1.5707964 - __x) * fVar15);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          for (; param_5 < pfVar2; param_5 = param_5 + 1) {
            __x = __x + fVar12;
            fVar13 = __x * __x;
            param_2 = param_2 + fVar8;
            *param_5 = ((fVar13 * (fVar13 * (fVar13 * -0.00018363654 + 0.008306325) + -0.16664828) +
                        0.9999966) * __x * 0.5 + 0.5) * param_2;
          }
          uVar6 = (uint)((3.1415927 - __x) * fVar15);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          for (; param_5 < pfVar2; param_5 = param_5 + 1) {
            __x = __x + fVar12;
            fVar13 = 3.1415927 - __x;
            fVar14 = fVar13 * fVar13;
            param_2 = param_2 + fVar8;
            *param_5 = ((fVar14 * (fVar14 * (fVar14 * -0.00018363654 + 0.008306325) + -0.16664828) +
                        0.9999966) * fVar13 * 0.5 + 0.5) * param_2;
          }
          uVar6 = (uint)((4.712389 - __x) * fVar15);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          for (; param_5 < pfVar2; param_5 = param_5 + 1) {
            __x = __x + fVar12;
            fVar13 = __x + -3.1415927;
            fVar14 = fVar13 * fVar13;
            param_2 = param_2 + fVar8;
            *param_5 = ((fVar14 * (fVar14 * (fVar14 * 0.00018363654 + -0.008306325) + 0.16664828) +
                        -0.9999966) * fVar13 * 0.5 + 0.5) * param_2;
          }
          uVar6 = (uint)((6.2831855 - __x) * fVar15);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          for (; param_5 < pfVar2; param_5 = param_5 + 1) {
            __x = __x + fVar12;
            fVar13 = 6.2831855 - __x;
            fVar14 = fVar13 * fVar13;
            param_2 = param_2 + fVar8;
            *param_5 = ((fVar14 * (fVar14 * (fVar14 * 0.00018363654 + -0.008306325) + 0.16664828) +
                        -0.9999966) * fVar13 * 0.5 + 0.5) * param_2;
          }
          if (6.2831855 <= __x) {
            __x = __x + -6.2831855;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 1.4013e-45:
      if (param_6 != 0) {
        fVar15 = 1.0 / fVar12;
        do {
          uVar6 = (uint)((0.5 - __x) * fVar15);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          for (; param_5 < pfVar2; param_5 = param_5 + 1) {
            __x = __x + fVar12;
            fVar11 = (fVar9 + fVar9) * __x - fVar11 * fVar10;
            param_2 = param_2 + fVar8;
            *param_5 = fVar11 * param_2;
          }
          uVar6 = (uint)(fVar15 - fVar15 * __x);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          for (; param_5 < pfVar2; param_5 = param_5 + 1) {
            __x = __x + fVar12;
            fVar11 = (2.0 - __x * 2.0) * fVar9 - fVar11 * fVar10;
            param_2 = param_2 + fVar8;
            *param_5 = fVar11 * param_2;
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 2.8026e-45:
      if (param_6 != 0) {
        fVar15 = 1.0 / fVar12;
        do {
          uVar6 = (uint)((param_3 - __x) * fVar15);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          for (; param_5 < pfVar2; param_5 = param_5 + 1) {
            param_2 = param_2 + fVar8;
            fVar11 = param_2 * fVar9 - fVar11 * fVar10;
            __x = __x + fVar12;
            *param_5 = fVar11;
          }
          uVar6 = (uint)(fVar15 - fVar15 * __x);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          for (; param_5 < pfVar2; param_5 = param_5 + 1) {
            fVar11 = fVar11 * -fVar10;
            param_2 = param_2 + fVar8;
            __x = __x + fVar12;
            *param_5 = fVar11;
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 4.2039e-45:
      if (param_6 != 0) {
        do {
          uVar6 = (uint)(1.0 / fVar12 - (1.0 / fVar12) * __x);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          for (; param_5 < pfVar2; param_5 = param_5 + 1) {
            param_2 = param_2 + fVar8;
            __x = __x + fVar12;
            fVar11 = param_2 * fVar9 * __x - fVar11 * fVar10;
            *param_5 = fVar11;
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 5.60519e-45:
      if (param_6 != 0) {
        do {
          uVar6 = (uint)(1.0 / fVar12 - (1.0 / fVar12) * __x);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          for (; param_5 < pfVar2; param_5 = param_5 + 1) {
            param_2 = param_2 + fVar8;
            __x = __x + fVar12;
            fVar11 = param_2 * fVar9 * (1.0 - __x) - fVar11 * fVar10;
            *param_5 = fVar11;
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 7.00649e-45:
      if (param_6 != 0) {
        do {
          uVar6 = (uint)(1.0 / fVar12 - (1.0 / fVar12) * __x);
          uVar3 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar3 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            pfVar4 = param_5;
            do {
              param_2 = param_2 + fVar8;
              fVar11 = fVar9 * 4.656613e-10 * (float)(uint)((ulong)lVar5 >> 0x21) * param_2 -
                       fVar11 * fVar10;
              __x = __x + fVar12;
              param_5 = pfVar4 + 1;
              *pfVar4 = fVar11;
              pfVar4 = param_5;
            } while (param_5 < pfVar2);
          }
          if (1.0 <= __x) {
            lVar5 = lVar5 * 0x5851f42d4c957f2d + 1;
            __x = __x + -1.0;
          }
        } while (param_5 < pfVar1);
      }
    }
  }
  if (fVar12 != 0.0) {
    *param_4 = fVar11;
    param_4[1] = fVar9;
    param_4[2] = fVar10;
    param_4[3] = __x;
    param_4[4] = fVar12;
    param_4[5] = fVar7;
    *(long *)(param_4 + 6) = lVar5;
    if (fVar7 != 7.00649e-45) {
      if (fVar7 == 0.0) {
        fVar7 = 6.2831855;
      }
      else {
        fVar7 = 1.0;
      }
      fVar7 = fmodf(__x,fVar7);
      param_4[3] = fVar7;
    }
  }
  return;
}


