/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0113987c; name: FUN_0113987c
 */


void FUN_0113987c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *param_2;
  param_1[5] = 0;
  *param_1 = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((code *)param_2[5] != (code *)0x0) {
    (*(code *)param_2[5])(param_2 + 6,param_1 + 6);
    uVar2 = param_2[2];
    uVar7 = param_2[3];
    param_1[5] = param_2[5];
    uVar8 = param_2[4];
    param_1[3] = uVar7;
    param_1[4] = uVar8;
    param_1[2] = uVar2;
    pcVar5 = (code *)param_2[3];
    if (pcVar5 != (code *)0x0) {
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      (*pcVar5)(param_2 + 6);
    }
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  if ((code *)param_2[0x15] != (code *)0x0) {
    (*(code *)param_2[0x15])(param_2 + 0x16,param_1 + 0x16);
    uVar2 = param_2[0x12];
    uVar7 = param_2[0x13];
    param_1[0x15] = param_2[0x15];
    uVar8 = param_2[0x14];
    param_1[0x13] = uVar7;
    param_1[0x14] = uVar8;
    param_1[0x12] = uVar2;
    pcVar5 = (code *)param_2[0x13];
    if (pcVar5 != (code *)0x0) {
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      (*pcVar5)(param_2 + 0x16);
    }
  }
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  uVar2 = param_2[0x25];
  param_2[0x25] = 0;
  param_1[0x25] = uVar2;
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  uVar2 = param_2[0x29];
  param_2[0x29] = 0;
  param_1[0x29] = uVar2;
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  uVar2 = param_2[0x2b];
  param_2[0x2b] = 0;
  param_1[0x2b] = uVar2;
  memcpy(param_1 + 0x2c,param_2 + 0x2c,0x28);
  param_2[0x2c] = 0;
  memcpy(param_1 + 0x31,param_2 + 0x31,0x28);
  lVar3 = param_2[0x36];
  param_1[0x36] = lVar3;
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  if (lVar3 != 0) {
    uVar6 = param_1[0x2c];
    uVar4 = *(ulong *)(param_1[0x31] + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & uVar4;
    }
    else if (uVar6 <= uVar4) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar1 * uVar6;
    }
    *(undefined8 **)(param_1[0x2b] + uVar4 * 8) = param_1 + 0x31;
    param_2[0x31] = 0;
    param_2[0x36] = 0;
  }
  param_1[0x38] = param_2[0x38];
  return;
}


