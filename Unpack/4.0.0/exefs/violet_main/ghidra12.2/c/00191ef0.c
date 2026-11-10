/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00191ef0; name: FUN_00191ef0
 */


void FUN_00191ef0(int *param_1,int param_2,long param_3,int param_4,long param_5,long param_6,
                 long param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  float fVar12;
  float fVar13;
  
  bVar1 = 0x10000 < param_3;
  bVar5 = param_6 != param_7;
  bVar4 = 0xffff < *(int *)(param_5 + 0x14) - 1U;
  iVar6 = param_4;
  if (param_4 < 3) {
    iVar6 = 2;
  }
  iVar6 = FUN_00152930(param_3,iVar6,param_5,0x10,0x14,0x11,0x18);
  param_1[0x15] = 10;
  fVar12 = 0.05;
  if (param_2 != 9) {
    fVar12 = 0.14;
  }
  param_1[0x11] = (int)fVar12;
  uVar2 = *(uint *)(param_5 + 0x18);
  if (uVar2 == 0) {
    fVar13 = 256.0;
  }
  else {
    fVar13 = (float)(int)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  }
  param_1[6] = 0x20000;
  param_1[0x11] = (int)(fVar12 * fVar13 * 0.00390625);
  *param_1 = param_2;
  param_1[1] = param_4;
  *(long *)(param_1 + 4) = param_5;
  uVar8 = FUN_001a3cc0();
  *(undefined8 *)(param_1 + 2) = uVar8;
  *(bool *)((long)param_1 + 0x51) = param_2 == 9 && 3 < param_4;
  param_1[0x12] = 0;
  puVar3 = PTR_DAT_047cb8d8;
  param_1[0x13] = 0;
  if (param_2 == 9) {
    param_1[0x12] = 1;
    if (5 < *(int *)puVar3) {
      iVar7 = 0xdf;
      if (param_4 < 5) {
        iVar7 = 0xcd;
      }
      goto LAB_00192058;
    }
  }
  else if (5 < *(int *)PTR_DAT_047cb8d8) {
    iVar7 = 0x80;
LAB_00192058:
    param_1[0x12] = iVar7;
  }
  uVar9 = 4;
  if ((((param_4 != 3 || (bVar1 || bVar5) && bVar4) && (param_4 + 2U < 6)) && (0x4000 < param_3)) &&
     (param_7 != 0)) {
    iVar7 = FUN_001846e0(param_7,param_3);
    uVar9 = 4;
    if (iVar7 != 0) {
      uVar9 = 6;
    }
  }
  if (2 < param_4) {
    if (param_4 == 5) {
      *(undefined1 **)(param_1 + 0x16) = &LAB_0018b780;
      *(undefined **)(param_1 + 0xe) = PTR_LAB_047cb8e8;
      param_1[0x10] = 4;
      *(undefined1 *)(param_1 + 0x14) = 0;
      return;
    }
    if (param_4 == 3) {
      iVar7 = iVar6;
      if (0x13 < iVar6) {
        iVar7 = 0x14;
      }
      if (0 < *(int *)(param_5 + 0x2c)) {
        iVar7 = iVar6;
      }
      if ((bVar1 || bVar5) && bVar4) {
        FUN_00167340(param_1,param_6,param_7,iVar7,param_8);
        pcVar10 = (code *)&LAB_0019acb0;
      }
      else {
        FUN_00199670();
        pcVar10 = (code *)&LAB_00199850;
      }
    }
    else {
      if (5 < param_4) {
        *(undefined1 **)(param_1 + 0x16) = &LAB_0018b780;
        param_1[0x10] = 4;
        *(undefined **)(param_1 + 0xe) = PTR_LAB_047cb8e0;
        *(undefined1 *)(param_1 + 0x14) = 1;
        return;
      }
      if ((bVar1 || bVar5) && bVar4) {
        FUN_0019e060(param_1,param_6,param_7,iVar6,param_8,uVar9);
        pcVar10 = FUN_0019e220;
      }
      else {
        FUN_0019c5c0();
        pcVar10 = (code *)&LAB_0019c960;
      }
    }
    *(code **)(param_1 + 0x16) = pcVar10;
    return;
  }
  iVar7 = iVar6;
  switch(param_4) {
  default:
    if (0xb < iVar6) {
      iVar7 = 0xc;
    }
    if (0 < *(int *)(param_5 + 0x2c)) {
      iVar7 = iVar6;
    }
    FUN_001661f0(param_1,param_6,param_7,iVar7,param_8);
    puVar11 = &LAB_00198ad0;
    break;
  case 1:
    if (0x10 < iVar6) {
      iVar7 = 0x11;
    }
    if (0 < *(int *)(param_5 + 0x2c)) {
      iVar7 = iVar6;
    }
    if (!bVar1 && !bVar5 || !bVar4) {
      FUN_001661f0(param_1,param_6,param_7,iVar7,param_8);
      puVar11 = &LAB_001943a0;
      break;
    }
LAB_001922f8:
    FUN_00165b50(param_1,param_6,param_7,iVar7,param_8);
    puVar11 = &LAB_00194fb0;
    break;
  case 2:
    if (0x12 < iVar6) {
      iVar7 = 0x13;
    }
    if (0 < *(int *)(param_5 + 0x2c)) {
      iVar7 = iVar6;
    }
    if ((bVar1 || bVar5) && bVar4) {
      FUN_00165b50(param_1,param_6,param_7,iVar7,param_8);
      puVar11 = &LAB_00193750;
    }
    else {
      FUN_001923a0();
      puVar11 = &LAB_00192580;
    }
    break;
  case -3:
    if (0xc < iVar6) {
      iVar7 = 0xd;
    }
    if (0 < *(int *)(param_5 + 0x2c)) {
      iVar7 = iVar6;
    }
    FUN_001661f0(param_1,param_6,param_7,iVar7,param_8);
    puVar11 = &LAB_00197f00;
    break;
  case -2:
    if (0xd < iVar6) {
      iVar7 = 0xe;
    }
    if (0 < *(int *)(param_5 + 0x2c)) {
      iVar7 = iVar6;
    }
    FUN_001661f0(param_1,param_6,param_7,iVar7,param_8);
    if ((param_2 == 9) || ((bVar1 || bVar5) && bVar4)) {
      puVar11 = &LAB_00197360;
    }
    else {
      puVar11 = &LAB_00196790;
    }
    break;
  case -1:
    if (0xf < iVar6) {
      iVar7 = 0x10;
    }
    if (0 < *(int *)(param_5 + 0x2c)) {
      iVar7 = iVar6;
    }
    if (!bVar1 && !bVar5 || !bVar4) {
      FUN_001661f0(param_1,param_6,param_7,iVar7,param_8);
      puVar11 = &LAB_00195bc0;
      break;
    }
    goto LAB_001922f8;
  }
  *(undefined1 **)(param_1 + 0x16) = puVar11;
  param_1[0x12] = param_1[0x12] & 0xfffffff3;
  return;
}


