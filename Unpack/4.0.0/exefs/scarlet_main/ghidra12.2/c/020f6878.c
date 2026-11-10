/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f6878; name: FUN_020f6878
 */


void FUN_020f6878(long param_1,uint param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint *puVar7;
  undefined8 uVar8;
  
  puVar7 = (uint *)(param_1 + 0xbbc0);
  if (param_4 == 1) {
    puVar7 = (uint *)(param_1 + 0xbbe8);
  }
  else if (param_4 == 2) {
    puVar7 = (uint *)(param_1 + 0xbbd4);
  }
  else if (param_4 != 3) {
    puVar7 = (uint *)0x0;
  }
  if (*puVar7 == 0) {
    uVar4 = 0;
  }
  else if (puVar7[1] == 0) {
    uVar4 = 1;
  }
  else if (puVar7[2] == 0) {
    uVar4 = 2;
  }
  else if (puVar7[3] == 0) {
    uVar4 = 3;
  }
  else {
    uVar3 = 4;
    if (puVar7[4] != 0) {
      uVar3 = 0xffffffff;
    }
    uVar4 = (ulong)uVar3;
  }
  uVar3 = param_2 & 0xffff;
  if (*puVar7 == (param_2 & 0xffff)) {
    uVar4 = 0;
  }
  else if (puVar7[1] == uVar3) {
    uVar4 = 1;
  }
  else if (puVar7[2] == uVar3) {
    uVar4 = 2;
  }
  else if (puVar7[3] == uVar3) {
    uVar4 = 3;
  }
  else {
    if (puVar7[4] != uVar3) {
      if ((int)uVar4 != -1) goto LAB_020f692c;
      FUN_018c66e4(param_1,param_4);
    }
    uVar4 = 4;
  }
LAB_020f692c:
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar8 = param_3[2];
  if (param_4 == 1) {
    *(uint *)(param_1 + uVar4 * 4 + 0xbbe8) = uVar3;
    lVar6 = 0xbcec;
  }
  else if (param_4 == 2) {
    *(uint *)(param_1 + uVar4 * 4 + 0xbbd4) = uVar3;
    lVar6 = 0xbc74;
  }
  else {
    if (param_4 != 3) {
      param_1 = 0;
      goto LAB_020f6994;
    }
    *(uint *)(param_1 + uVar4 * 4 + 0xbbc0) = uVar3;
    lVar6 = 0xbbfc;
  }
  param_1 = param_1 + lVar6;
LAB_020f6994:
  puVar5 = (undefined8 *)(param_1 + uVar4 * 0x18);
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar8;
  return;
}


