/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02100060; name: FUN_02100060
 */


void FUN_02100060(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
LAB_02100088:
  puVar14 = param_2 + -2;
  puVar15 = param_1;
LAB_02100090:
  param_1 = puVar15;
  lVar10 = (long)param_2 - (long)param_1;
  uVar7 = lVar10 >> 4;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_02100314_caseD_0;
  case 2:
    if (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)param_2 - 4)) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar13 = param_2[-1];
      *param_1 = *puVar14;
      param_1[1] = uVar13;
      *puVar14 = uVar2;
      param_2[-1] = uVar3;
      return;
    }
    return;
  case 3:
    FUN_021012d0(param_1,param_1 + 2,puVar14);
    return;
  case 4:
    FUN_021013b0(param_1,param_1 + 2,param_1 + 4,puVar14);
    return;
  case 5:
    FUN_02101480(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar14);
    return;
  default:
    if (lVar10 < 0x1f0) {
      FUN_02101590(param_1,param_2);
      return;
    }
    uVar6 = uVar7;
    if ((long)uVar7 < 0) {
      uVar6 = uVar7 + 1;
    }
    puVar15 = param_1 + ((long)uVar6 >> 1) * 2;
    if (lVar10 < 0x3e71) {
      iVar5 = FUN_021012d0(param_1,puVar15,puVar14);
    }
    else {
      uVar6 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar6 = uVar7;
      }
      lVar10 = (uVar6 & 0x3ffffffffffffffc) * 4;
      iVar5 = FUN_02101480(param_1,(long)param_1 + lVar10,puVar15,(long)puVar15 + lVar10,puVar14);
    }
    uVar4 = *(uint *)((long)param_1 + 0xc);
    if (uVar4 <= *(uint *)((long)puVar15 + 0xc)) break;
    puVar9 = puVar14;
    goto LAB_02100118;
  }
  puVar9 = param_2;
  while (puVar11 = puVar9, param_1 + 4 != puVar11) {
    puVar9 = puVar11 + -2;
    if (*(uint *)((long)puVar15 + 0xc) < *(uint *)((long)puVar11 - 0x14)) goto code_r0x021001a0;
  }
  puVar9 = param_1 + 2;
  if (uVar4 <= *(uint *)((long)param_2 - 4)) {
    if (puVar9 == puVar14) {
      return;
    }
    puVar9 = param_1 + 4;
    while (uVar4 <= *(uint *)((long)puVar9 - 4)) {
      puVar9 = puVar9 + 2;
      if (param_2 == puVar9) {
        return;
      }
    }
    uVar2 = puVar9[-2];
    uVar3 = puVar9[-1];
    uVar13 = param_2[-1];
    puVar9[-2] = *puVar14;
    puVar9[-1] = uVar13;
    *puVar14 = uVar2;
    param_2[-1] = uVar3;
  }
  if (puVar9 == puVar14) {
    return;
  }
  puVar11 = puVar14;
  while( true ) {
    puVar15 = puVar9 + -2;
    do {
      puVar16 = puVar15;
      puVar15 = puVar16 + 2;
    } while (*(uint *)((long)param_1 + 0xc) <= *(uint *)((long)puVar16 + 0x1c));
    puVar9 = puVar16 + 4;
    do {
      puVar12 = puVar11;
      puVar11 = puVar12 + -2;
    } while (*(uint *)((long)puVar12 - 4) < *(uint *)((long)param_1 + 0xc));
    if (puVar11 <= puVar15) break;
    uVar2 = *puVar15;
    uVar3 = puVar16[3];
    uVar13 = puVar12[-1];
    *puVar15 = *puVar11;
    puVar16[3] = uVar13;
    *puVar11 = uVar2;
    puVar12[-1] = uVar3;
  }
  goto LAB_02100090;
code_r0x021001a0:
  uVar2 = *param_1;
  uVar3 = param_1[1];
  iVar5 = iVar5 + 1;
  puVar9 = puVar11 + -4;
  uVar13 = puVar11[-3];
  *param_1 = *puVar9;
  param_1[1] = uVar13;
  *puVar9 = uVar2;
  puVar11[-3] = uVar3;
LAB_02100118:
  puVar11 = param_1 + 2;
  puVar16 = puVar11;
  if (puVar11 < puVar9) {
    while( true ) {
      puVar11 = puVar16 + -2;
      do {
        puVar12 = puVar11;
        puVar11 = puVar12 + 2;
      } while (*(uint *)((long)puVar15 + 0xc) < *(uint *)((long)puVar12 + 0x1c));
      puVar16 = puVar12 + 4;
      do {
        puVar8 = puVar9;
        puVar9 = puVar8 + -2;
      } while (*(uint *)((long)puVar8 + -4) <= *(uint *)((long)puVar15 + 0xc));
      if (puVar9 < puVar11) break;
      uVar2 = *puVar11;
      uVar3 = puVar12[3];
      iVar5 = iVar5 + 1;
      uVar13 = puVar8[-1];
      puVar1 = puVar9;
      if (puVar15 != puVar11) {
        puVar1 = puVar15;
      }
      *puVar11 = *puVar9;
      puVar12[3] = uVar13;
      *puVar9 = uVar2;
      puVar8[-1] = uVar3;
      puVar15 = puVar1;
    }
  }
  if ((puVar11 != puVar15) && (*(uint *)((long)puVar11 + 0xc) < *(uint *)((long)puVar15 + 0xc))) {
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    iVar5 = iVar5 + 1;
    uVar13 = puVar15[1];
    *puVar11 = *puVar15;
    puVar11[1] = uVar13;
    *puVar15 = uVar2;
    puVar15[1] = uVar3;
  }
  if (iVar5 == 0) {
    uVar7 = FUN_02101660(param_1,puVar11);
    uVar6 = FUN_02101660(puVar11 + 2,param_2);
    if ((uVar6 & 1) != 0) goto LAB_0210036c;
    puVar15 = puVar11 + 2;
    if ((uVar7 & 1) != 0) goto LAB_02100090;
  }
  if ((long)param_2 - (long)puVar11 <= (long)puVar11 - (long)param_1) {
    FUN_02100060(puVar11 + 2,param_2);
    param_2 = puVar11;
    goto LAB_02100088;
  }
  FUN_02100060(param_1,puVar11);
  puVar15 = puVar11 + 2;
  goto LAB_02100090;
LAB_0210036c:
  param_2 = puVar11;
  if ((uVar7 & 1) != 0) {
switchD_02100314_caseD_0:
    return;
  }
  goto LAB_02100088;
}


