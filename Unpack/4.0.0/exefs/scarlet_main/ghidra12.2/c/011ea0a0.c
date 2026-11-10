/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011ea0a0; name: FUN_011ea0a0
 */


void FUN_011ea0a0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar2 = param_2[4];
  param_2[4] = 0;
  param_1[4] = uVar2;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar2 = param_2[8];
  param_2[8] = 0;
  param_1[8] = uVar2;
  memcpy(param_1 + 10,param_2 + 10,0x30);
  uVar2 = param_2[0x10];
  param_2[0x10] = 0;
  param_1[0x10] = uVar2;
  memcpy(param_1 + 0x11,param_2 + 0x11,0x28);
  param_2[0x11] = 0;
  memcpy(param_1 + 0x16,param_2 + 0x16,0x28);
  lVar3 = param_2[0x1b];
  param_1[0x1b] = lVar3;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  if (lVar3 != 0) {
    uVar5 = param_1[0x11];
    uVar4 = *(ulong *)(param_1[0x16] + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(undefined8 **)(param_1[0x10] + uVar4 * 8) = param_1 + 0x16;
    param_2[0x16] = 0;
    param_2[0x1b] = 0;
  }
  uVar2 = param_2[0x1d];
  param_2[0x1d] = 0;
  param_1[0x1d] = uVar2;
  memcpy(param_1 + 0x1e,param_2 + 0x1e,0x28);
  param_2[0x1e] = 0;
  memcpy(param_1 + 0x23,param_2 + 0x23,0x28);
  lVar3 = param_2[0x28];
  param_1[0x28] = lVar3;
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  if (lVar3 != 0) {
    uVar5 = param_1[0x1e];
    uVar4 = *(ulong *)(param_1[0x23] + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(undefined8 **)(param_1[0x1d] + uVar4 * 8) = param_1 + 0x23;
    param_2[0x23] = 0;
    param_2[0x28] = 0;
  }
  uVar2 = param_2[0x2a];
  param_2[0x2a] = 0;
  param_1[0x2a] = uVar2;
  memcpy(param_1 + 0x2b,param_2 + 0x2b,0x28);
  param_2[0x2b] = 0;
  memcpy(param_1 + 0x30,param_2 + 0x30,0x28);
  lVar3 = param_2[0x35];
  param_1[0x35] = lVar3;
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  if (lVar3 != 0) {
    uVar5 = param_1[0x2b];
    uVar4 = *(ulong *)(param_1[0x30] + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(undefined8 **)(param_1[0x2a] + uVar4 * 8) = param_1 + 0x30;
    param_2[0x30] = 0;
    param_2[0x35] = 0;
  }
  *(undefined2 *)(param_1 + 0x37) = *(undefined2 *)(param_2 + 0x37);
  return;
}


