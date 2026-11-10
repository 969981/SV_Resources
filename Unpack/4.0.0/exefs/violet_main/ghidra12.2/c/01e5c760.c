/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5c760; name: FUN_01e5c760
 */


void FUN_01e5c760(ulong param_1,ulong param_2)

{
  float *pfVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  
LAB_01e5c788:
  uVar7 = param_2 - 0x40;
  uVar5 = param_1;
LAB_01e5c794:
  param_1 = uVar5;
  lVar6 = param_2 - param_1;
  uVar5 = lVar6 >> 6;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_01e5c9d8_caseD_0;
  case 2:
    if (*(float *)(param_1 + 0x38) < *(float *)(param_2 - 8)) {
      FUN_01e5d3f0(param_1,uVar7);
      return;
    }
    return;
  case 3:
    FUN_01e5d520(param_1,param_1 + 0x40,uVar7);
    return;
  case 4:
    FUN_01e5d5e0(param_1,param_1 + 0x40,param_1 + 0x80,uVar7);
    return;
  case 5:
    FUN_01e5d690(param_1,param_1 + 0x40,param_1 + 0x80,param_1 + 0xc0,uVar7);
    return;
  default:
    if (lVar6 < 0x1c0) {
      FUN_01e5d770(param_1,param_2);
      return;
    }
    uVar4 = uVar5;
    if ((long)uVar5 < 0) {
      uVar4 = uVar5 + 1;
    }
    uVar4 = param_1 + ((long)uVar4 >> 1) * 0x40;
    if (lVar6 < 0xf9c1) {
      iVar3 = FUN_01e5d520(param_1,uVar4,uVar7);
    }
    else {
      uVar9 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar9 = uVar5;
      }
      lVar6 = (uVar9 & 0xffffffffffffffc) * 0x10;
      iVar3 = FUN_01e5d690(param_1,param_1 + lVar6,uVar4,uVar4 + lVar6,uVar7);
    }
    fVar10 = *(float *)(param_1 + 0x38);
    if (fVar10 <= *(float *)(uVar4 + 0x38)) break;
    uVar9 = uVar7;
    goto LAB_01e5c820;
  }
  uVar5 = param_2 - 0x80;
  while (uVar9 = uVar5, param_1 != uVar9) {
    uVar5 = uVar9 - 0x40;
    if (*(float *)(uVar4 + 0x38) < *(float *)(uVar9 + 0x38)) goto code_r0x01e5c898;
  }
  uVar4 = param_1 + 0x40;
  if (fVar10 <= *(float *)(param_2 - 8)) {
    if (uVar4 == uVar7) {
      return;
    }
    uVar4 = param_1 + 0x80;
    while (fVar10 <= *(float *)(uVar4 - 8)) {
      uVar4 = uVar4 + 0x40;
      if (param_2 == uVar4) {
        return;
      }
    }
    FUN_01e5d3f0(uVar4 - 0x40,uVar7);
  }
  if (uVar4 == uVar7) {
    return;
  }
  uVar9 = uVar7;
  while( true ) {
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 0x40;
    } while (*(float *)(param_1 + 0x38) <= *(float *)(uVar5 + 0x38));
    do {
      pfVar1 = (float *)(uVar9 - 8);
      uVar9 = uVar9 - 0x40;
    } while (*pfVar1 < *(float *)(param_1 + 0x38));
    if (uVar9 <= uVar5) break;
    FUN_01e5d3f0(uVar5,uVar9);
  }
  goto LAB_01e5c794;
code_r0x01e5c898:
  FUN_01e5d3f0(param_1,uVar9);
  iVar3 = iVar3 + 1;
LAB_01e5c820:
  uVar8 = param_1 + 0x40;
  uVar5 = uVar8;
  if (uVar8 < uVar9) {
    while( true ) {
      uVar8 = uVar5 - 0x40;
      do {
        uVar5 = uVar8;
        uVar8 = uVar5 + 0x40;
      } while (*(float *)(uVar4 + 0x38) < *(float *)(uVar5 + 0x78));
      uVar5 = uVar5 + 0x80;
      do {
        pfVar1 = (float *)(uVar9 - 8);
        uVar9 = uVar9 - 0x40;
      } while (*pfVar1 <= *(float *)(uVar4 + 0x38));
      if (uVar9 < uVar8) break;
      FUN_01e5d3f0(uVar8,uVar9);
      iVar3 = iVar3 + 1;
      uVar2 = uVar9;
      if (uVar4 != uVar8) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    }
  }
  if ((uVar8 != uVar4) && (*(float *)(uVar8 + 0x38) < *(float *)(uVar4 + 0x38))) {
    FUN_01e5d3f0(uVar8,uVar4);
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar4 = FUN_01e5d9c0(param_1,uVar8);
    uVar5 = FUN_01e5d9c0(uVar8 + 0x40,param_2);
    if ((uVar5 & 1) != 0) goto LAB_01e5ca30;
    uVar5 = uVar8 + 0x40;
    if ((uVar4 & 1) != 0) goto LAB_01e5c794;
  }
  if ((long)(param_2 - uVar8) <= (long)(uVar8 - param_1)) {
    FUN_01e5c760(uVar8 + 0x40,param_2);
    param_2 = uVar8;
    goto LAB_01e5c788;
  }
  FUN_01e5c760(param_1,uVar8);
  uVar5 = uVar8 + 0x40;
  goto LAB_01e5c794;
LAB_01e5ca30:
  param_2 = uVar8;
  if ((uVar4 & 1) != 0) {
switchD_01e5c9d8_caseD_0:
    return;
  }
  goto LAB_01e5c788;
}


