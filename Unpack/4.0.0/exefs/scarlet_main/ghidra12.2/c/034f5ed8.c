/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f5ed8; name: FUN_034f5ed8
 */


void FUN_034f5ed8(float param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_2 + 0x6e) == '\0') {
    fVar4 = *(float *)(param_2 + 0x68);
  }
  else {
    fVar5 = *(float *)(param_2 + 100);
    fVar4 = exp2f(param_1 * 0.00083333335);
    fVar4 = fVar5 * fVar4 * 65536.0 + 0.5;
    iVar2 = (int)fVar4;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    *(float *)(param_2 + 0x68) = param_1;
    if (2.1474836e+09 <= fVar4) {
      iVar2 = 0x7fffffff;
    }
    *(int *)(param_2 + 0x34) = iVar2;
    *(int *)(param_2 + 0x38) = iVar2;
    *(undefined4 *)(param_2 + 0x3c) = 0x400;
    *(undefined1 *)(param_2 + 0x6e) = 0;
    fVar4 = param_1;
  }
  if (fVar4 == param_1) {
    iVar2 = *(int *)(param_2 + 0x38);
    goto LAB_034f6020;
  }
  if (*(int *)(param_2 + 0x60) == 2) {
    iVar1 = (*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34)) * *(int *)(param_2 + 0x3c);
    iVar2 = iVar1 + 0x3ff;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    iVar2 = *(int *)(param_2 + 0x34) + (iVar2 >> 10);
    *(int *)(param_2 + 0x34) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    else {
      if (-1 < iVar2) goto LAB_034f5fc4;
      uVar3 = 0x7fffffff;
    }
    *(undefined4 *)(param_2 + 0x34) = uVar3;
  }
LAB_034f5fc4:
  fVar5 = *(float *)(param_2 + 100);
  *(undefined4 *)(param_2 + 0x3c) = 0;
  fVar4 = exp2f(param_1 * 0.00083333335);
  fVar4 = fVar5 * fVar4 * 65536.0 + 0.5;
  iVar2 = (int)fVar4;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  if (2.1474836e+09 <= fVar4) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_2 + 0x38) = iVar2;
  *(float *)(param_2 + 0x68) = param_1;
  if ((param_3 & 1) == 0) {
    *(int *)(param_2 + 0x34) = iVar2;
  }
LAB_034f6020:
  if (*(int *)(param_2 + 0x34) == iVar2) {
    if (iVar2 == 0x10000) {
      *(undefined4 *)(param_2 + 0x60) = 0;
      return;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  *(undefined4 *)(param_2 + 0x60) = uVar3;
  return;
}


