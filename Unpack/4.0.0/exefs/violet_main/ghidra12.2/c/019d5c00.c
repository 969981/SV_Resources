/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d5c00; name: FUN_019d5c00
 */


void FUN_019d5c00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  
LAB_019d5c28:
  puVar5 = param_2 + -4;
  puVar6 = param_1;
LAB_019d5c34:
  param_1 = puVar6;
  lVar4 = (long)param_2 - (long)param_1;
  uVar3 = lVar4 >> 5;
  switch(uVar3) {
  case 0:
  case 1:
    goto switchD_019d5f54_caseD_0;
  case 2:
    if (*(float *)((long)param_1 + 4) < *(float *)((long)param_2 - 0x1c)) {
      FUN_019d6070(param_1,puVar5);
      return;
    }
    return;
  case 3:
    FUN_019d6650(param_1,param_1 + 4,puVar5);
    return;
  case 4:
    FUN_019d65a0(param_1,param_1 + 4,param_1 + 8,puVar5);
    return;
  case 5:
    FUN_019d61f0(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,puVar5);
    return;
  default:
    if (lVar4 < 0xe0) {
      FUN_019d6710(param_1,param_2);
      return;
    }
    uVar2 = uVar3;
    if ((long)uVar3 < 0) {
      uVar2 = uVar3 + 1;
    }
    puVar6 = param_1 + (uVar2 & 0xffffffffffffffe) * 2;
    if (lVar4 < 0x7ce1) {
      iVar1 = FUN_019d6650(param_1,puVar6,puVar5);
    }
    else {
      uVar2 = uVar3 + 3;
      if (-1 < (long)uVar3) {
        uVar2 = uVar3;
      }
      iVar1 = FUN_019d61f0(param_1,param_1 + (uVar2 & 0x1ffffffffffffffc),puVar6,
                           puVar6 + (uVar2 & 0x1ffffffffffffffc),puVar5);
    }
    fVar11 = (float)((ulong)*param_1 >> 0x20);
    fVar12 = (float)((ulong)*puVar6 >> 0x20);
    if (fVar11 <= fVar12) break;
    puVar7 = puVar5;
    goto LAB_019d5c9c;
  }
  puVar9 = param_2 + -8;
  while (puVar7 = puVar9, param_1 != puVar7) {
    puVar9 = puVar7 + -4;
    if (fVar12 < (float)((ulong)*puVar7 >> 0x20)) goto code_r0x019d5e98;
  }
  puVar9 = param_1 + 4;
  if (fVar11 <= *(float *)((long)param_2 - 0x1c)) {
    if (puVar9 == puVar5) {
      return;
    }
    puVar9 = param_1 + 8;
    while (fVar11 <= *(float *)((long)puVar9 - 0x1c)) {
      puVar9 = puVar9 + 4;
      if (param_2 == puVar9) {
        return;
      }
    }
    FUN_019d6070(puVar9 + -4,puVar5);
  }
  if (puVar9 == puVar5) {
    return;
  }
  puVar7 = puVar5;
  while( true ) {
    fVar11 = (float)((ulong)*param_1 >> 0x20);
    do {
      puVar6 = puVar9;
      puVar9 = puVar6 + 4;
    } while (fVar11 <= (float)((ulong)*puVar6 >> 0x20));
    do {
      puVar7 = puVar7 + -4;
    } while ((float)((ulong)*puVar7 >> 0x20) < fVar11);
    if (puVar7 <= puVar6) break;
    FUN_019d6070(puVar6,puVar7);
  }
  goto LAB_019d5c34;
code_r0x019d5e98:
  FUN_019d6070(param_1,puVar7);
  iVar1 = iVar1 + 1;
LAB_019d5c9c:
  puVar9 = param_1 + 4;
  if (puVar9 < puVar7) {
    while( true ) {
      fVar11 = (float)((ulong)*puVar6 >> 0x20);
      if ((float)((ulong)*puVar9 >> 0x20) <= fVar11) {
        puVar8 = puVar9 + 4;
      }
      else if (*(float *)((long)puVar9 + 0x24) <= fVar11) {
        puVar8 = puVar9 + 8;
        puVar9 = puVar9 + 4;
      }
      else {
        puVar8 = puVar9 + 0xc;
        if (fVar11 < *(float *)((long)puVar9 + 0x44)) {
          do {
            puVar9 = puVar8;
            puVar8 = puVar9 + 4;
          } while (fVar11 < (float)((ulong)*puVar9 >> 0x20));
        }
        else {
          puVar9 = puVar9 + 8;
        }
      }
      puVar10 = puVar7 + -4;
      if (((((float)((ulong)*puVar10 >> 0x20) <= fVar11) &&
           (puVar10 = puVar7 + -8, (float)((ulong)*puVar10 >> 0x20) <= fVar11)) &&
          (puVar10 = puVar7 + -0xc, (float)((ulong)*puVar10 >> 0x20) <= fVar11)) &&
         (puVar10 = puVar7 + -0x10, (float)((ulong)*puVar10 >> 0x20) <= fVar11)) {
        puVar7 = puVar7 + -0x14;
        do {
          puVar10 = puVar7;
          puVar7 = puVar10 + -4;
        } while ((float)((ulong)*puVar10 >> 0x20) <= fVar11);
      }
      if (puVar10 < puVar9) break;
      FUN_019d6070(puVar9,puVar10);
      iVar1 = iVar1 + 1;
      puVar7 = puVar10;
      if (puVar6 != puVar9) {
        puVar7 = puVar6;
      }
      puVar6 = puVar7;
      puVar9 = puVar8;
      puVar7 = puVar10;
    }
  }
  if ((puVar9 != puVar6) && (*(float *)((long)puVar9 + 4) < *(float *)((long)puVar6 + 4))) {
    FUN_019d6070(puVar9,puVar6);
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 0) {
    uVar3 = FUN_019d62d0(param_1,puVar9);
    uVar2 = FUN_019d62d0(puVar9 + 4,param_2);
    if ((uVar2 & 1) != 0) goto LAB_019d5ee4;
    puVar6 = puVar9 + 4;
    if ((uVar3 & 1) != 0) goto LAB_019d5c34;
  }
  if ((long)param_2 - (long)puVar9 <= (long)puVar9 - (long)param_1) {
    FUN_019d5c00(puVar9 + 4,param_2);
    param_2 = puVar9;
    goto LAB_019d5c28;
  }
  FUN_019d5c00(param_1,puVar9);
  puVar6 = puVar9 + 4;
  goto LAB_019d5c34;
LAB_019d5ee4:
  param_2 = puVar9;
  if ((uVar3 & 1) != 0) {
switchD_019d5f54_caseD_0:
    return;
  }
  goto LAB_019d5c28;
}


