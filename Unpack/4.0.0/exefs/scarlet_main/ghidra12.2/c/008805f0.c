/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008805f0; name: FUN_008805f0
 */


undefined8 FUN_008805f0(float param_1,float param_2,float param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = cosf(param_1 * 6.2831855);
  fVar2 = sinf(param_1 * 6.2831855);
  if (0xb < param_5 - 1U) {
    return 0x80260202;
  }
  fVar10 = fVar2 / (param_3 + param_3);
  switch(param_5) {
  case 1:
    fVar2 = 1.0 - fVar1;
    fVar4 = fVar2;
    goto LAB_0088084c;
  case 2:
    fVar2 = -(fVar1 + 1.0);
    fVar4 = fVar1 + 1.0;
    goto LAB_0088084c;
  case 3:
    fVar4 = exp2f(param_2 * 0.1660964);
    fVar4 = SQRT(fVar4);
    fVar9 = fVar10;
    if (fVar4 != 0.0) {
      fVar9 = fVar10 / fVar4;
    }
    fVar4 = fVar10 * fVar4;
    fVar7 = fVar1 * -2.0;
    fVar5 = fVar9 + 1.0;
    fVar10 = fVar4 + 1.0;
    fVar4 = 1.0 - fVar4;
    fVar9 = 1.0 - fVar9;
    fVar2 = fVar7;
    break;
  case 4:
    fVar3 = exp2f(param_2 * 0.0830482);
    fVar8 = fVar2 * 1.4142135 * SQRT(fVar3);
    fVar2 = fVar3 + 1.0;
    fVar6 = fVar3 + -1.0;
    fVar7 = fVar6 - fVar2 * fVar1;
    fVar4 = fVar6 * fVar1 + fVar2;
    fVar9 = fVar2 - fVar6 * fVar1;
    fVar7 = fVar7 + fVar7;
    fVar10 = (fVar4 + fVar8) * fVar3;
    fVar4 = (fVar4 - fVar8) * fVar3;
    fVar5 = fVar9 + fVar8;
    fVar9 = fVar9 - fVar8;
    fVar2 = fVar3 * -2.0 * (fVar2 * fVar1 + fVar6);
    break;
  case 5:
    fVar3 = exp2f(param_2 * 0.0830482);
    fVar8 = fVar2 * 1.4142135 * SQRT(fVar3);
    fVar7 = fVar3 + 1.0;
    fVar6 = fVar3 + -1.0;
    fVar4 = fVar7 - fVar6 * fVar1;
    fVar9 = fVar6 * fVar1 + fVar7;
    fVar10 = (fVar4 + fVar8) * fVar3;
    fVar2 = fVar6 - fVar7 * fVar1;
    fVar4 = (fVar4 - fVar8) * fVar3;
    fVar5 = fVar9 + fVar8;
    fVar9 = fVar9 - fVar8;
    fVar7 = (fVar7 * fVar1 + fVar6) * -2.0;
    fVar2 = fVar3 * (fVar2 + fVar2);
    break;
  case 6:
    fVar7 = exp2f(param_1 * -9.064714);
    fVar5 = 1.0;
    fVar10 = 1.0 - fVar7;
    fVar7 = -fVar7;
    fVar4 = 0.0;
    fVar9 = 0.0;
    fVar2 = 0.0;
    break;
  case 7:
    fVar1 = exp2f(param_1 * -9.064714);
    fVar5 = 1.0;
    fVar7 = -fVar1;
    fVar10 = (fVar1 + 1.0) * 0.5;
    fVar4 = 0.0;
    fVar9 = 0.0;
    fVar2 = (fVar1 + 1.0) * -0.5;
    break;
  case 8:
    fVar4 = exp2f(param_2 * 0.1660964);
    fVar4 = SQRT(fVar4);
    fVar10 = fVar2 * 0.5;
    fVar9 = fVar10;
    if (fVar4 != 0.0) {
      fVar9 = fVar10 / fVar4;
    }
    fVar10 = fVar4 * fVar10;
    fVar7 = fVar1 * -2.0;
    fVar4 = fVar2 * -0.5 * fVar4;
    fVar5 = fVar9 + 1.0;
    fVar9 = 1.0 - fVar9;
    fVar2 = 0.0;
    break;
  case 9:
    fVar4 = -fVar10;
    fVar5 = fVar10 + 1.0;
    fVar7 = fVar1 * -2.0;
    fVar9 = 1.0 - fVar10;
    fVar2 = 0.0;
    break;
  case 10:
    fVar7 = fVar1 * -2.0;
    fVar4 = 1.0;
    fVar5 = fVar10 + 1.0;
    fVar9 = 1.0 - fVar10;
    fVar10 = 1.0;
    fVar2 = fVar7;
    break;
  case 0xb:
    fVar9 = 1.0 - fVar10;
    fVar5 = fVar10 + 1.0;
    fVar7 = fVar1 * -2.0;
    fVar10 = fVar9;
    fVar4 = fVar5;
    fVar2 = fVar7;
    break;
  case 0xc:
    fVar2 = 1.0;
    if (0.7 < param_3) {
      fVar2 = SQRT(0.7 / param_3);
    }
    fVar2 = fVar2 - fVar2 * fVar1;
    fVar4 = fVar2;
LAB_0088084c:
    fVar5 = fVar10 + 1.0;
    fVar9 = 1.0 - fVar10;
    fVar7 = fVar1 * -2.0;
    fVar10 = fVar4 * 0.5;
    fVar4 = fVar4 * 0.5;
  }
  *param_4 = fVar5;
  param_4[1] = fVar7;
  param_4[2] = fVar9;
  param_4[3] = fVar10;
  param_4[4] = fVar2;
  param_4[5] = fVar4;
  return 0;
}


