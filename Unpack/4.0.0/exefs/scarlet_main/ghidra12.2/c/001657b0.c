/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001657b0; name: FUN_001657b0
 */


void FUN_001657b0(undefined4 *param_1,undefined4 param_2,long param_3,int param_4,long param_5,
                 undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  float fVar9;
  
  iVar3 = param_4;
  if (param_4 < 3) {
    iVar3 = 2;
  }
  iVar2 = FUN_00152930(param_3,iVar3,param_5,0x10,0x14,0x11,0x18);
  *param_1 = param_2;
  param_1[1] = param_4;
  param_1[0x15] = 6;
  uVar4 = FUN_001a3cc0();
  *(undefined8 *)(param_1 + 2) = uVar4;
  fVar9 = 0.01;
  iVar3 = *(int *)PTR_DAT_047cb8d8;
  param_1[0x11] = 0x3c23d70a;
  uVar6 = *(uint *)(param_5 + 0x18);
  if (uVar6 != 0) {
    fVar9 = (float)(int)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) * 0.00390625 * 0.01;
  }
  param_1[0x11] = fVar9;
  param_1[6] = 0x20000;
  *(long *)(param_1 + 4) = param_5;
  *(bool *)((long)param_1 + 0x51) = 2 < param_4;
  *(undefined8 *)(param_1 + 0x12) = 0;
  if ((2 < iVar3) && (param_1[0x12] = 1, 5 < iVar3)) {
    uVar5 = 0xff;
    if (param_4 < 7) {
      uVar5 = 0xdf;
    }
    param_1[0x12] = uVar5;
    if (4 < param_4) {
      param_1[0x13] = 4;
    }
  }
  if (*(int *)(param_5 + 0x10) == 1) {
    FUN_001c33a0(param_1);
  }
  uVar5 = 4;
  if (((param_4 + 2U < 6) && (0x10000 < param_3)) && (param_7 != 0)) {
    iVar3 = FUN_001846e0(param_7,param_3);
    uVar5 = 4;
    if (iVar3 != 0) {
      uVar5 = 6;
    }
  }
  puVar1 = PTR_LAB_047cb8e0;
  if (param_4 < 0) {
    if (param_4 == -2) {
      iVar3 = iVar2;
      if (0xd < iVar2) {
        iVar3 = 0xe;
      }
      if (0 < *(int *)(param_5 + 0x2c)) {
        iVar3 = iVar2;
      }
      FUN_001661f0(param_1,param_6,param_7,iVar3,param_8,uVar5);
      puVar7 = (undefined1 *)0x166390;
    }
    else if (param_4 == -1) {
      iVar3 = iVar2;
      if (0xf < iVar2) {
        iVar3 = 0x10;
      }
      if (0 < *(int *)(param_5 + 0x2c)) {
        iVar3 = iVar2;
      }
      FUN_00165b50(param_1,param_6,param_7,iVar3,param_8);
      puVar7 = (undefined1 *)0x165cf0;
    }
    else {
      iVar3 = iVar2;
      if (0xb < iVar2) {
        iVar3 = 0xc;
      }
      if (0 < *(int *)(param_5 + 0x2c)) {
        iVar3 = iVar2;
      }
      FUN_001661f0(param_1,param_6,param_7,iVar3,param_8,uVar5);
      puVar7 = &LAB_00166880;
    }
LAB_00165a4c:
    *(undefined1 **)(param_1 + 0x16) = puVar7;
    uVar6 = param_1[0x12];
    uVar8 = 0xffffffe9;
  }
  else {
    if (param_4 < 2) {
      iVar3 = iVar2;
      if (0x12 < iVar2) {
        iVar3 = 0x13;
      }
      if (0 < *(int *)(param_5 + 0x2c)) {
        iVar3 = iVar2;
      }
      FUN_00165b50(param_1,param_6,param_7,iVar3,param_8);
      puVar7 = &LAB_00166cf0;
      goto LAB_00165a4c;
    }
    if (param_4 == 3) {
      FUN_001683c0(param_1,param_6,param_7,iVar2,param_8);
      puVar7 = &LAB_001685a0;
    }
    else {
      if (param_4 != 2) {
        if (5 < param_4) {
          *(undefined1 **)(param_1 + 0x16) = &LAB_001692c0;
          param_1[0x10] = 4;
          *(undefined1 *)(param_1 + 0x14) = 1;
          *(undefined **)(param_1 + 0xe) = puVar1;
          return;
        }
        if (param_4 == 5) {
          *(undefined1 **)(param_1 + 0x16) = &LAB_001692c0;
          *(undefined **)(param_1 + 0xe) = PTR_LAB_047cb8e8;
          param_1[0x10] = 4;
          *(undefined1 *)(param_1 + 0x14) = 0;
          return;
        }
        FUN_0016cb80(param_1,param_6,param_7,iVar2,param_8,0);
        *(undefined1 **)(param_1 + 0x16) = &LAB_0016cd60;
        uVar6 = param_1[0x12] & 0xfffffffd;
        goto LAB_00165a8c;
      }
      FUN_00167340(param_1,param_6,param_7,iVar2,param_8);
      puVar7 = &LAB_00167520;
    }
    *(undefined1 **)(param_1 + 0x16) = puVar7;
    uVar6 = param_1[0x12];
    uVar8 = 0xffffffed;
  }
  uVar6 = uVar6 & uVar8;
LAB_00165a8c:
  param_1[0x12] = uVar6;
  return;
}


