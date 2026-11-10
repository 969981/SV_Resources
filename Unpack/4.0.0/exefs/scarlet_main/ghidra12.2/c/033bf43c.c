/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033bf43c; name: FUN_033bf43c
 */


void FUN_033bf43c(undefined4 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = *(double *)(param_1 + 0x10);
  dVar1 = exp2(ABS(dVar6) * 0.16609640474436813);
  dVar2 = tan(*(double *)(param_1 + 0xc) * 3.141592653589793);
  switch(*param_1) {
  case 0:
    dVar4 = dVar2 / *(double *)(param_1 + 0xe);
    dVar2 = dVar2 * dVar2;
    dVar1 = dVar2 + 1.0;
    dVar6 = 1.0 / (dVar4 + dVar1);
    dVar3 = dVar6 * dVar2;
    *(double *)(param_1 + 2) = dVar3;
    *(double *)(param_1 + 4) = dVar3 + dVar3;
    *(double *)(param_1 + 6) = dVar3;
    *(double *)(param_1 + 8) = dVar6 * (dVar2 * 2.0 + -2.0);
    break;
  case 1:
    dVar4 = dVar2 / *(double *)(param_1 + 0xe);
    dVar1 = dVar2 * dVar2 + 1.0;
    dVar6 = 1.0 / (dVar4 + dVar1);
    *(double *)(param_1 + 2) = dVar6;
    *(double *)(param_1 + 4) = dVar6 * -2.0;
    *(double *)(param_1 + 6) = dVar6;
    *(double *)(param_1 + 8) = dVar6 * (dVar2 * dVar2 * 2.0 + -2.0);
    break;
  case 2:
    dVar4 = dVar2 / *(double *)(param_1 + 0xe);
    dVar1 = dVar2 * dVar2 + 1.0;
    dVar6 = 1.0 / (dVar4 + dVar1);
    *(undefined8 *)(param_1 + 4) = 0;
    dVar2 = dVar6 * (dVar2 * dVar2 * 2.0 + -2.0);
    *(double *)(param_1 + 2) = dVar6 * dVar4;
    *(double *)(param_1 + 6) = -(dVar6 * dVar4);
    goto LAB_033bf5b4;
  case 3:
    dVar4 = dVar2 / *(double *)(param_1 + 0xe);
    dVar1 = dVar2 * dVar2 + 1.0;
    dVar6 = 1.0 / (dVar4 + dVar1);
    dVar2 = dVar6 * (dVar2 * dVar2 * 2.0 + -2.0);
    *(double *)(param_1 + 2) = dVar6 * dVar1;
    *(double *)(param_1 + 4) = dVar2;
    *(double *)(param_1 + 6) = dVar6 * dVar1;
LAB_033bf5b4:
    *(double *)(param_1 + 8) = dVar2;
    break;
  case 4:
    dVar4 = *(double *)(param_1 + 0xe);
    if (0.0 <= dVar6) {
      dVar5 = dVar2 * dVar2 + 1.0;
      dVar1 = (dVar1 * dVar2) / dVar4;
      dVar6 = 1.0 / (dVar2 / dVar4 + dVar5);
      dVar3 = dVar6 * (dVar2 * dVar2 * 2.0 + -2.0);
      *(double *)(param_1 + 6) = dVar6 * (dVar5 - dVar1);
      *(double *)(param_1 + 8) = dVar3;
      dVar4 = dVar5 - dVar2 / dVar4;
      *(double *)(param_1 + 2) = dVar6 * (dVar1 + dVar5);
      *(double *)(param_1 + 4) = dVar3;
LAB_033bf784:
      dVar6 = dVar6 * dVar4;
      goto LAB_033bf5c0;
    }
    dVar5 = (dVar1 * dVar2) / dVar4;
    dVar1 = dVar2 * dVar2 + 1.0;
    dVar6 = 1.0 / (dVar5 + dVar1);
    dVar3 = dVar6 * (dVar2 * dVar2 * 2.0 + -2.0);
    *(double *)(param_1 + 2) = dVar6 * (dVar2 / dVar4 + dVar1);
    *(double *)(param_1 + 4) = dVar3;
    *(double *)(param_1 + 6) = dVar6 * (dVar1 - dVar2 / dVar4);
    *(double *)(param_1 + 8) = dVar3;
    dVar1 = dVar1 - dVar5;
    goto LAB_033bf5bc;
  case 5:
    if (dVar6 < 0.0) {
      dVar3 = dVar2 * dVar2;
      dVar5 = dVar3 * dVar1 + 1.0;
      dVar6 = SQRT(dVar1 + dVar1) * dVar2;
      dVar4 = dVar5 - dVar6;
      dVar6 = 1.0 / (dVar6 + dVar5);
      *(double *)(param_1 + 2) = dVar6 * (dVar2 * 1.4142135623730951 + 1.0 + dVar3);
      *(double *)(param_1 + 4) = dVar6 * (dVar3 * 2.0 + -2.0);
      *(double *)(param_1 + 6) = dVar6 * ((1.0 - dVar2 * 1.4142135623730951) + dVar3);
      *(double *)(param_1 + 8) = dVar6 * (dVar3 * dVar1 * 2.0 + -2.0);
      goto LAB_033bf784;
    }
    dVar3 = dVar2 * dVar2;
    dVar5 = dVar3 * dVar1 + 1.0;
    dVar4 = SQRT(dVar1 + dVar1) * dVar2;
    dVar6 = 1.0 / (dVar2 * 1.4142135623730951 + 1.0 + dVar3);
    *(double *)(param_1 + 2) = (dVar4 + dVar5) * dVar6;
    *(double *)(param_1 + 4) = (dVar3 * dVar1 * 2.0 + -2.0) * dVar6;
    *(double *)(param_1 + 6) = (dVar5 - dVar4) * dVar6;
    *(double *)(param_1 + 8) = dVar6 * (dVar3 * 2.0 + -2.0);
    dVar6 = dVar6 * ((1.0 - dVar2 * 1.4142135623730951) + dVar3);
    goto LAB_033bf5c0;
  case 6:
    if (0.0 <= dVar6) {
      dVar3 = dVar2 * dVar2;
      dVar4 = SQRT(dVar1 + dVar1) * dVar2;
      dVar6 = 1.0 / (dVar2 * 1.4142135623730951 + 1.0 + dVar3);
      *(double *)(param_1 + 2) = (dVar4 + dVar3 + dVar1) * dVar6;
      *(double *)(param_1 + 4) = (dVar3 - dVar1) * (dVar6 + dVar6);
      *(double *)(param_1 + 6) = ((dVar3 + dVar1) - dVar4) * dVar6;
      *(double *)(param_1 + 8) = dVar6 * (dVar3 * 2.0 + -2.0);
      dVar3 = (1.0 - dVar2 * 1.4142135623730951) + dVar3;
    }
    else {
      dVar4 = dVar2 * dVar2;
      dVar3 = SQRT(dVar1 + dVar1) * dVar2;
      dVar6 = 1.0 / (dVar3 + dVar4 + dVar1);
      *(double *)(param_1 + 2) = dVar6 * (dVar2 * 1.4142135623730951 + 1.0 + dVar4);
      *(double *)(param_1 + 4) = dVar6 * (dVar4 * 2.0 + -2.0);
      *(double *)(param_1 + 6) = dVar6 * ((1.0 - dVar2 * 1.4142135623730951) + dVar4);
      *(double *)(param_1 + 8) = (dVar4 - dVar1) * (dVar6 + dVar6);
      dVar3 = (dVar4 + dVar1) - dVar3;
    }
    dVar6 = dVar6 * dVar3;
    goto LAB_033bf5c0;
  default:
    goto switchD_033bf4b8_default;
  }
  dVar1 = dVar1 - dVar4;
LAB_033bf5bc:
  dVar6 = dVar6 * dVar1;
LAB_033bf5c0:
  *(double *)(param_1 + 10) = dVar6;
switchD_033bf4b8_default:
  return;
}


