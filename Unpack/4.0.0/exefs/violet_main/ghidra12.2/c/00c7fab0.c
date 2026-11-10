/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c7fab0; name: FUN_00c7fab0
 */


void FUN_00c7fab0(ulong param_1,ulong param_2)

{
  float *pfVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  
LAB_00c7fafc:
  uVar6 = param_2 - 0x38;
  uVar4 = param_1;
LAB_00c7fb0c:
  param_1 = uVar4;
  uVar4 = param_2 - param_1;
  switch(((long)uVar4 >> 3) * 0x6db6db6db6db6db7) {
  case 0:
  case 1:
    goto switchD_00c7fd74_caseD_0;
  case 2:
    if (*(float *)(param_1 + 0x34) < *(float *)(param_2 - 4)) {
      FUN_01e5ccf0(param_1,uVar6);
      return;
    }
    return;
  case 3:
    FUN_01e5cdf0(param_1,param_1 + 0x38,uVar6);
    return;
  case 4:
    FUN_01e5ceb0(param_1,param_1 + 0x38,param_1 + 0x70,uVar6);
    return;
  case 5:
    FUN_01e5cf60(param_1,param_1 + 0x38,param_1 + 0x70,param_1 + 0xa8,uVar6);
    return;
  default:
    if ((long)uVar4 < 0x188) {
      FUN_01e5d040(param_1,param_2);
      return;
    }
    uVar7 = param_1 + (uVar4 / 0x70) * 0x38;
    if ((long)uVar4 < 0xda89) {
      iVar3 = FUN_01e5cdf0(param_1,uVar7,uVar6);
    }
    else {
      lVar5 = (uVar4 / 0xe0) * 0x38;
      iVar3 = FUN_01e5cf60(param_1,param_1 + lVar5,uVar7,uVar7 + lVar5,uVar6);
    }
    fVar10 = *(float *)(param_1 + 0x34);
    fVar11 = *(float *)(param_1 + (uVar4 / 0x70) * 0x38 + 0x34);
    if (fVar10 <= fVar11) break;
    uVar9 = uVar6;
    goto LAB_00c7fb98;
  }
  uVar4 = param_2 - 0x70;
  while (uVar9 = uVar4, param_1 != uVar9) {
    uVar4 = uVar9 - 0x38;
    if (fVar11 < *(float *)(uVar9 + 0x34)) goto code_r0x00c7fc18;
  }
  uVar7 = param_1 + 0x38;
  if (fVar10 <= *(float *)(param_2 - 4)) {
    if (uVar7 == uVar6) {
      return;
    }
    uVar7 = param_1 + 0x70;
    while (fVar10 <= *(float *)(uVar7 - 4)) {
      uVar7 = uVar7 + 0x38;
      if (param_2 == uVar7) {
        return;
      }
    }
    FUN_01e5ccf0(uVar7 - 0x38,uVar6);
  }
  if (uVar7 == uVar6) {
    return;
  }
  uVar9 = uVar6;
  while( true ) {
    do {
      uVar4 = uVar7;
      uVar7 = uVar4 + 0x38;
    } while (*(float *)(param_1 + 0x34) <= *(float *)(uVar4 + 0x34));
    do {
      pfVar1 = (float *)(uVar9 - 4);
      uVar9 = uVar9 - 0x38;
    } while (*pfVar1 < *(float *)(param_1 + 0x34));
    if (uVar9 <= uVar4) break;
    FUN_01e5ccf0(uVar4,uVar9);
  }
  goto LAB_00c7fb0c;
code_r0x00c7fc18:
  FUN_01e5ccf0(param_1,uVar9);
  iVar3 = iVar3 + 1;
LAB_00c7fb98:
  uVar8 = param_1 + 0x38;
  if (uVar8 < uVar9) {
    while( true ) {
      uVar8 = uVar8 - 0x38;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 0x38;
      } while (*(float *)(uVar7 + 0x34) < *(float *)(uVar4 + 0x6c));
      do {
        pfVar1 = (float *)(uVar9 - 4);
        uVar9 = uVar9 - 0x38;
      } while (*pfVar1 <= *(float *)(uVar7 + 0x34));
      if (uVar9 < uVar8) break;
      FUN_01e5ccf0(uVar8,uVar9);
      iVar3 = iVar3 + 1;
      uVar2 = uVar9;
      if (uVar7 != uVar8) {
        uVar2 = uVar7;
      }
      uVar7 = uVar2;
      uVar8 = uVar4 + 0x70;
    }
  }
  if ((uVar8 != uVar7) && (*(float *)(uVar8 + 0x34) < *(float *)(uVar7 + 0x34))) {
    FUN_01e5ccf0(uVar8,uVar7);
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar7 = FUN_01e5d1b0(param_1,uVar8);
    uVar4 = FUN_01e5d1b0(uVar8 + 0x38,param_2);
    if ((uVar4 & 1) != 0) goto LAB_00c7fdd4;
    uVar4 = uVar8 + 0x38;
    if ((uVar7 & 1) != 0) goto LAB_00c7fb0c;
  }
  if (((long)(param_2 - uVar8) >> 3) * 0x6db6db6db6db6db7 <=
      ((long)(uVar8 - param_1) >> 3) * 0x6db6db6db6db6db7) {
    FUN_00c7fab0(uVar8 + 0x38,param_2);
    param_2 = uVar8;
    goto LAB_00c7fafc;
  }
  FUN_00c7fab0(param_1,uVar8);
  uVar4 = uVar8 + 0x38;
  goto LAB_00c7fb0c;
LAB_00c7fdd4:
  param_2 = uVar8;
  if ((uVar7 & 1) != 0) {
switchD_00c7fd74_caseD_0:
    return;
  }
  goto LAB_00c7fafc;
}


