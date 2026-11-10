/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d2e20; name: FUN_019d2e20
 */


void FUN_019d2e20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  
LAB_019d2e48:
  puVar13 = param_2 + -2;
  puVar14 = param_1;
LAB_019d2e50:
  param_1 = puVar14;
  lVar9 = (long)param_2 - (long)param_1;
  uVar6 = lVar9 >> 4;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_019d2f60_caseD_0;
  case 2:
    if (*(float *)(param_2 + -1) < *(float *)(param_1 + 1)) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar12 = param_2[-1];
      *param_1 = *puVar13;
      param_1[1] = uVar12;
      *puVar13 = uVar2;
      param_2[-1] = uVar3;
      return;
    }
    return;
  case 3:
    FUN_021980a0(param_1,param_1 + 2,puVar13);
    return;
  case 4:
    FUN_02198180(param_1,param_1 + 2,param_1 + 4,puVar13);
    return;
  case 5:
    FUN_02198250(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar13);
    return;
  default:
    if (lVar9 < 0x1f0) {
      FUN_02198360(param_1,param_2);
      return;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    puVar14 = param_1 + ((long)uVar5 >> 1) * 2;
    if (lVar9 < 0x3e71) {
      iVar4 = FUN_021980a0(param_1,puVar14,puVar13);
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar9 = (uVar5 & 0x3ffffffffffffffc) * 4;
      iVar4 = FUN_02198250(param_1,(long)param_1 + lVar9,puVar14,(long)puVar14 + lVar9,puVar13);
    }
    fVar16 = *(float *)(param_1 + 1);
    if (*(float *)(puVar14 + 1) <= fVar16) break;
    puVar8 = puVar13;
    goto LAB_019d30a4;
  }
  puVar8 = param_2;
  while (puVar10 = puVar8, param_1 + 4 != puVar10) {
    puVar8 = puVar10 + -2;
    if (*(float *)(puVar10 + -3) < *(float *)(puVar14 + 1)) goto LAB_019d316c;
  }
  puVar8 = param_1 + 2;
  if (*(float *)(param_2 + -1) <= fVar16) {
    if (puVar8 == puVar13) {
      return;
    }
    puVar8 = param_1 + 4;
    while (*(float *)(puVar8 + -1) <= fVar16) {
      puVar8 = puVar8 + 2;
      if (param_2 == puVar8) {
        return;
      }
    }
    uVar2 = puVar8[-2];
    uVar3 = puVar8[-1];
    uVar12 = param_2[-1];
    puVar8[-2] = *puVar13;
    puVar8[-1] = uVar12;
    *puVar13 = uVar2;
    param_2[-1] = uVar3;
  }
  if (puVar8 == puVar13) {
    return;
  }
  puVar10 = puVar13;
  while( true ) {
    puVar14 = puVar8 + -2;
    do {
      puVar15 = puVar14;
      puVar14 = puVar15 + 2;
    } while (*(float *)(puVar15 + 3) <= *(float *)(param_1 + 1));
    puVar8 = puVar15 + 4;
    do {
      puVar11 = puVar10;
      puVar10 = puVar11 + -2;
    } while (*(float *)(param_1 + 1) < *(float *)(puVar11 + -1));
    if (puVar10 <= puVar14) break;
    uVar2 = *puVar14;
    uVar3 = puVar15[3];
    uVar12 = puVar11[-1];
    *puVar14 = *puVar10;
    puVar15[3] = uVar12;
    *puVar10 = uVar2;
    puVar11[-1] = uVar3;
  }
  goto LAB_019d2e50;
LAB_019d316c:
  uVar2 = *param_1;
  uVar3 = param_1[1];
  iVar4 = iVar4 + 1;
  puVar8 = puVar10 + -4;
  uVar12 = puVar10[-3];
  *param_1 = *puVar8;
  param_1[1] = uVar12;
  *puVar8 = uVar2;
  puVar10[-3] = uVar3;
LAB_019d30a4:
  puVar10 = param_1 + 2;
  puVar15 = puVar10;
  if (puVar10 < puVar8) {
    while( true ) {
      puVar10 = puVar15 + -2;
      do {
        puVar11 = puVar10;
        puVar10 = puVar11 + 2;
      } while (*(float *)(puVar11 + 3) < *(float *)(puVar14 + 1));
      puVar15 = puVar11 + 4;
      do {
        puVar7 = puVar8;
        puVar8 = puVar7 + -2;
      } while (*(float *)(puVar14 + 1) <= *(float *)(puVar7 + -1));
      if (puVar8 < puVar10) break;
      uVar2 = *puVar10;
      uVar3 = puVar11[3];
      iVar4 = iVar4 + 1;
      uVar12 = puVar7[-1];
      puVar1 = puVar8;
      if (puVar14 != puVar10) {
        puVar1 = puVar14;
      }
      *puVar10 = *puVar8;
      puVar11[3] = uVar12;
      *puVar8 = uVar2;
      puVar7[-1] = uVar3;
      puVar14 = puVar1;
    }
  }
  if ((puVar10 != puVar14) && (*(float *)(puVar14 + 1) < *(float *)(puVar10 + 1))) {
    uVar2 = *puVar10;
    uVar3 = puVar10[1];
    iVar4 = iVar4 + 1;
    uVar12 = puVar14[1];
    *puVar10 = *puVar14;
    puVar10[1] = uVar12;
    *puVar14 = uVar2;
    puVar14[1] = uVar3;
  }
  if (iVar4 == 0) {
    uVar6 = FUN_02198420(param_1,puVar10);
    uVar5 = FUN_02198420(puVar10 + 2,param_2);
    if ((uVar5 & 1) != 0) goto LAB_019d31f4;
    puVar14 = puVar10 + 2;
    if ((uVar6 & 1) != 0) goto LAB_019d2e50;
  }
  if ((long)param_2 - (long)puVar10 <= (long)puVar10 - (long)param_1) {
    FUN_019d2e20(puVar10 + 2,param_2);
    param_2 = puVar10;
    goto LAB_019d2e48;
  }
  FUN_019d2e20(param_1,puVar10);
  puVar14 = puVar10 + 2;
  goto LAB_019d2e50;
LAB_019d31f4:
  param_2 = puVar10;
  if ((uVar6 & 1) != 0) {
switchD_019d2f60_caseD_0:
    return;
  }
  goto LAB_019d2e48;
}


