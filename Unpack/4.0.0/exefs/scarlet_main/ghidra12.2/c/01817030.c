/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01817030; name: FUN_01817030
 */


void FUN_01817030(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  
LAB_01817068:
  puVar14 = param_2 + -3;
  puVar15 = param_1;
LAB_01817074:
  while( true ) {
    param_1 = puVar15;
    uVar6 = (long)param_2 - (long)param_1;
    uVar10 = ((long)uVar6 >> 3) * -0x5555555555555555;
    if (uVar10 < 2) {
      return;
    }
    switch(uVar10) {
    case 2:
      if (*(float *)(param_2 + -2) < *(float *)(param_1 + 1)) {
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar13 = param_1[2];
        uVar4 = param_2[-1];
        uVar12 = *puVar14;
        param_1[1] = param_2[-2];
        param_1[2] = uVar4;
        *param_1 = uVar12;
        param_2[-2] = uVar3;
        param_2[-1] = uVar13;
        *puVar14 = uVar2;
        return;
      }
      return;
    case 3:
      FUN_01817c10(param_1,param_1 + 3,puVar14);
      return;
    case 4:
      FUN_01817e70(param_1,param_1 + 3,param_1 + 6,puVar14);
      return;
    case 5:
      FUN_01817f80(param_1,param_1 + 3,param_1 + 6,param_1 + 9,puVar14);
      return;
    }
    if ((long)uVar6 < 0x2e8) {
      FUN_01817b20(param_1,param_2);
      return;
    }
    puVar15 = param_1 + (uVar6 / 0x30) * 3;
    if ((long)uVar6 < 0x5da9) {
      iVar5 = FUN_01817c10(param_1,puVar15,puVar14);
    }
    else {
      lVar1 = (uVar6 / 0x60) * 2 + uVar6 / 0x60;
      iVar5 = FUN_01817f80(param_1,param_1 + lVar1,puVar15,puVar15 + lVar1,puVar14);
    }
    fVar17 = *(float *)(param_1 + 1);
    if (fVar17 < *(float *)(param_1 + (uVar6 / 0x30) * 3 + 1)) break;
    puVar9 = param_2 + -6;
    while (puVar7 = puVar9, param_1 != puVar7) {
      puVar9 = puVar7 + -3;
      if (*(float *)(puVar7 + 1) < *(float *)(param_1 + (uVar6 / 0x30) * 3 + 1))
      goto code_r0x0181733c;
    }
    puVar9 = param_1 + 3;
    if (*(float *)(param_2 + -2) <= fVar17) {
      if (puVar9 == puVar14) {
        return;
      }
      puVar9 = param_1 + 6;
      while (*(float *)(puVar9 + -2) <= fVar17) {
        puVar9 = puVar9 + 3;
        if (param_2 == puVar9) {
          return;
        }
      }
      uVar2 = puVar9[-3];
      uVar3 = puVar9[-2];
      uVar13 = puVar9[-1];
      uVar4 = param_2[-1];
      uVar12 = *puVar14;
      puVar9[-2] = param_2[-2];
      puVar9[-1] = uVar4;
      puVar9[-3] = uVar12;
      param_2[-2] = uVar3;
      param_2[-1] = uVar13;
      *puVar14 = uVar2;
    }
    if (puVar9 == puVar14) {
      return;
    }
    puVar7 = puVar14;
    while( true ) {
      puVar15 = puVar9 + -3;
      do {
        puVar16 = puVar15;
        puVar15 = puVar16 + 3;
      } while (*(float *)(puVar16 + 4) <= *(float *)(param_1 + 1));
      puVar9 = puVar16 + 6;
      do {
        puVar11 = puVar7;
        puVar7 = puVar11 + -3;
      } while (*(float *)(param_1 + 1) < *(float *)(puVar11 + -2));
      if (puVar7 <= puVar15) break;
      uVar2 = *puVar15;
      uVar3 = puVar16[4];
      uVar13 = puVar16[5];
      uVar4 = puVar11[-1];
      uVar12 = *puVar7;
      puVar16[4] = puVar11[-2];
      puVar16[5] = uVar4;
      *puVar15 = uVar12;
      puVar11[-2] = uVar3;
      puVar11[-1] = uVar13;
      *puVar7 = uVar2;
    }
  }
  puVar7 = puVar14;
  goto LAB_01817310;
code_r0x0181733c:
  uVar2 = *param_1;
  uVar4 = param_1[1];
  iVar5 = iVar5 + 1;
  uVar13 = param_1[2];
  uVar3 = puVar7[1];
  uVar12 = puVar7[2];
  *param_1 = *puVar7;
  param_1[1] = uVar3;
  param_1[2] = uVar12;
  *puVar7 = uVar2;
  puVar7[1] = uVar4;
  puVar7[2] = uVar13;
LAB_01817310:
  puVar9 = param_1 + 3;
  puVar16 = puVar9;
  if (puVar9 < puVar7) {
    while( true ) {
      puVar9 = puVar16 + -3;
      do {
        puVar11 = puVar9;
        puVar9 = puVar11 + 3;
      } while (*(float *)(puVar11 + 4) < *(float *)(puVar15 + 1));
      puVar16 = puVar11 + 6;
      do {
        puVar8 = puVar7;
        puVar7 = puVar8 + -3;
      } while (*(float *)(puVar15 + 1) <= *(float *)(puVar8 + -2));
      if (puVar7 < puVar9) break;
      uVar2 = *puVar9;
      uVar3 = puVar11[4];
      uVar13 = puVar11[5];
      uVar4 = puVar8[-1];
      uVar12 = *puVar7;
      puVar11[4] = puVar8[-2];
      puVar11[5] = uVar4;
      *puVar9 = uVar12;
      puVar8[-2] = uVar3;
      puVar8[-1] = uVar13;
      *puVar7 = uVar2;
      iVar5 = iVar5 + 1;
      puVar11 = puVar7;
      if (puVar15 != puVar9) {
        puVar11 = puVar15;
      }
      puVar15 = puVar11;
    }
  }
  if ((puVar9 != puVar15) && (*(float *)(puVar15 + 1) < *(float *)(puVar9 + 1))) {
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    iVar5 = iVar5 + 1;
    uVar13 = puVar9[2];
    uVar4 = puVar15[2];
    uVar12 = *puVar15;
    puVar9[1] = puVar15[1];
    puVar9[2] = uVar4;
    *puVar9 = uVar12;
    puVar15[1] = uVar3;
    puVar15[2] = uVar13;
    *puVar15 = uVar2;
  }
  if (iVar5 == 0) {
    uVar6 = FUN_02195eb0(param_1,puVar9);
    uVar10 = FUN_02195eb0(puVar9 + 3,param_2);
    if ((uVar10 & 1) != 0) goto LAB_018174b8;
    puVar15 = puVar9 + 3;
    if ((uVar6 & 1) != 0) goto LAB_01817074;
  }
  if (((long)param_2 - (long)puVar9 >> 3) * -0x5555555555555555 <=
      ((long)puVar9 - (long)param_1 >> 3) * -0x5555555555555555) {
    FUN_01817030(puVar9 + 3,param_2);
    param_2 = puVar9;
    goto LAB_01817068;
  }
  FUN_01817030(param_1,puVar9);
  puVar15 = puVar9 + 3;
  goto LAB_01817074;
LAB_018174b8:
  param_2 = puVar9;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_01817068;
}


