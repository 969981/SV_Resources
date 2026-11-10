/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d1340; name: FUN_015d1340
 */


void FUN_015d1340(uint *param_1,uint *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  undefined8 extraout_x10;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  
LAB_015d1378:
  puVar25 = param_2 + -0xc;
  puVar24 = param_1;
LAB_015d1384:
  param_1 = puVar24;
  uVar10 = (long)param_2 - (long)param_1;
  switch(((long)uVar10 >> 4) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_015d18d8_caseD_0;
  case 2:
    if (*param_1 <= *puVar25) {
      return;
    }
    uVar16 = *(undefined8 *)param_1;
    uVar22 = *(undefined8 *)(param_1 + 2);
    uVar19 = *(undefined8 *)(param_1 + 4);
    uVar2 = *(undefined8 *)(param_1 + 6);
    cVar6 = (char)param_1[8];
    uVar17 = *(undefined8 *)(param_2 + -6);
    uVar18 = *(undefined8 *)(param_1 + 9);
    uVar21 = *(undefined8 *)puVar25;
    uVar20 = *(undefined8 *)(param_2 + -10);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_1 + 6) = uVar17;
    uVar3 = param_1[0xb];
    *(undefined8 *)param_1 = uVar21;
    *(undefined8 *)(param_1 + 2) = uVar20;
    if (cVar6 == '\0') {
      if ((char)param_2[-4] != '\0') {
        *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + -3);
        *(undefined1 *)(param_1 + 8) = 1;
      }
    }
    else if ((char)param_2[-4] == '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + -3);
    }
    *(char *)(param_1 + 0xb) = (char)param_2[-1];
    *(undefined8 *)(param_2 + -8) = uVar19;
    *(undefined8 *)(param_2 + -6) = uVar2;
    *(undefined8 *)puVar25 = uVar16;
    *(undefined8 *)(param_2 + -10) = uVar22;
    if ((char)param_2[-4] == '\0') {
      if (cVar6 != '\0') {
        *(undefined8 *)(param_2 + -3) = uVar18;
        *(undefined1 *)(param_2 + -4) = 1;
      }
    }
    else if (cVar6 == '\0') {
      *(undefined1 *)(param_2 + -4) = 0;
    }
    else {
      *(undefined8 *)(param_2 + -3) = uVar18;
    }
    *(char *)(param_2 + -1) = (char)uVar3;
    return;
  case 3:
    FUN_02ad12c0(param_1,param_1 + 0xc,puVar25,param_3);
    return;
  case 4:
    FUN_02ad1670(param_1,param_1 + 0xc,param_1 + 0x18,puVar25,param_3);
    return;
  case 5:
    FUN_02ad18f0(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,puVar25,param_3);
    return;
  default:
    if (0x14f < (long)uVar10) {
      puVar24 = param_1 + (uVar10 / 0x60) * 0xc;
      if ((long)uVar10 < 0xbb51) {
        iVar8 = FUN_02ad12c0(param_1,puVar24,puVar25,param_3);
      }
      else {
        lVar14 = (uVar10 / 0xc0) * 2 + uVar10 / 0xc0;
        iVar8 = FUN_02ad18f0(param_1,param_1 + lVar14 * 4,puVar24,puVar24 + lVar14 * 4,puVar25,
                             param_3);
      }
      uVar3 = *param_1;
      if (*puVar24 <= uVar3) break;
      puVar11 = puVar25;
      goto LAB_015d1558;
    }
    FUN_02ad12c0(param_1,param_1 + 0xc,param_1 + 0x18,param_3);
    if (param_1 + 0x24 == param_2) {
      return;
    }
    lVar14 = 0;
    uVar16 = extraout_x10;
    puVar24 = param_1 + 0x24;
    puVar25 = param_1 + 0x18;
    goto LAB_015d195c;
  }
  puVar13 = param_2 + -0x18;
  while (puVar11 = puVar13, param_1 != puVar11) {
    puVar13 = puVar11 + -0xc;
    if (*puVar11 < *puVar24) goto code_r0x015d1430;
  }
  puVar13 = param_1 + 0xc;
  if (*puVar25 <= uVar3) {
    if (puVar13 == puVar25) {
      return;
    }
    puVar13 = param_1 + 0x18;
    while (puVar13[-0xc] <= uVar3) {
      puVar13 = puVar13 + 0xc;
      if (param_2 == puVar13) {
        return;
      }
    }
    uVar16 = *(undefined8 *)(puVar13 + -0xc);
    uVar22 = *(undefined8 *)(puVar13 + -10);
    uVar19 = *(undefined8 *)(puVar13 + -8);
    uVar2 = *(undefined8 *)(puVar13 + -6);
    cVar6 = (char)puVar13[-4];
    uVar17 = *(undefined8 *)(param_2 + -6);
    uVar18 = *(undefined8 *)(puVar13 + -3);
    uVar21 = *(undefined8 *)puVar25;
    uVar20 = *(undefined8 *)(param_2 + -10);
    *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(puVar13 + -6) = uVar17;
    uVar3 = puVar13[-1];
    *(undefined8 *)(puVar13 + -0xc) = uVar21;
    *(undefined8 *)(puVar13 + -10) = uVar20;
    if (cVar6 == '\0') {
      if ((char)param_2[-4] != '\0') {
        *(undefined8 *)(puVar13 + -3) = *(undefined8 *)(param_2 + -3);
        *(undefined1 *)(puVar13 + -4) = 1;
      }
    }
    else if ((char)param_2[-4] == '\0') {
      *(undefined1 *)(puVar13 + -4) = 0;
    }
    else {
      *(undefined8 *)(puVar13 + -3) = *(undefined8 *)(param_2 + -3);
    }
    *(char *)(puVar13 + -1) = (char)param_2[-1];
    *(undefined8 *)(param_2 + -8) = uVar19;
    *(undefined8 *)(param_2 + -6) = uVar2;
    *(undefined8 *)puVar25 = uVar16;
    *(undefined8 *)(param_2 + -10) = uVar22;
    if ((char)param_2[-4] == '\0') {
      if (cVar6 != '\0') {
        *(undefined8 *)(param_2 + -3) = uVar18;
        *(undefined1 *)(param_2 + -4) = 1;
      }
    }
    else if (cVar6 == '\0') {
      *(undefined1 *)(param_2 + -4) = 0;
    }
    else {
      *(undefined8 *)(param_2 + -3) = uVar18;
    }
    *(char *)(param_2 + -1) = (char)uVar3;
  }
  if (puVar13 == puVar25) {
    return;
  }
  puVar11 = puVar25;
  while( true ) {
    do {
      puVar24 = puVar13;
      puVar13 = puVar24 + 0xc;
    } while (*puVar24 <= *param_1);
    do {
      puVar26 = puVar11;
      puVar11 = puVar26 + -0xc;
    } while (*param_1 < *puVar11);
    if (puVar11 <= puVar24) break;
    uVar16 = *(undefined8 *)puVar24;
    uVar22 = *(undefined8 *)(puVar24 + 2);
    uVar19 = *(undefined8 *)(puVar24 + 4);
    uVar2 = *(undefined8 *)(puVar24 + 6);
    cVar6 = (char)puVar24[8];
    uVar17 = *(undefined8 *)(puVar26 + -6);
    uVar18 = *(undefined8 *)(puVar24 + 9);
    uVar21 = *(undefined8 *)puVar11;
    uVar20 = *(undefined8 *)(puVar26 + -10);
    *(undefined8 *)(puVar24 + 4) = *(undefined8 *)(puVar26 + -8);
    *(undefined8 *)(puVar24 + 6) = uVar17;
    uVar3 = puVar24[0xb];
    *(undefined8 *)puVar24 = uVar21;
    *(undefined8 *)(puVar24 + 2) = uVar20;
    if (cVar6 == '\0') {
      if ((char)puVar26[-4] != '\0') {
        *(undefined8 *)(puVar24 + 9) = *(undefined8 *)(puVar26 + -3);
        *(undefined1 *)(puVar24 + 8) = 1;
      }
    }
    else if ((char)puVar26[-4] == '\0') {
      *(undefined1 *)(puVar24 + 8) = 0;
    }
    else {
      *(undefined8 *)(puVar24 + 9) = *(undefined8 *)(puVar26 + -3);
    }
    *(char *)(puVar24 + 0xb) = (char)puVar26[-1];
    *(undefined8 *)puVar11 = uVar16;
    *(undefined8 *)(puVar26 + -10) = uVar22;
    *(undefined8 *)(puVar26 + -8) = uVar19;
    *(undefined8 *)(puVar26 + -6) = uVar2;
    if ((char)puVar26[-4] == '\0') {
      if (cVar6 != '\0') {
        *(undefined8 *)(puVar26 + -3) = uVar18;
        *(undefined1 *)(puVar26 + -4) = 1;
      }
    }
    else if (cVar6 == '\0') {
      *(undefined1 *)(puVar26 + -4) = 0;
    }
    else {
      *(undefined8 *)(puVar26 + -3) = uVar18;
    }
    *(char *)(puVar26 + -1) = (char)uVar3;
  }
  goto LAB_015d1384;
code_r0x015d1430:
  uVar16 = *(undefined8 *)param_1;
  uVar22 = *(undefined8 *)(param_1 + 2);
  uVar19 = *(undefined8 *)(param_1 + 4);
  uVar2 = *(undefined8 *)(param_1 + 6);
  cVar6 = (char)param_1[8];
  uVar17 = *(undefined8 *)(param_1 + 9);
  uVar3 = param_1[0xb];
  uVar20 = *(undefined8 *)puVar11;
  uVar18 = *(undefined8 *)(puVar11 + 6);
  uVar21 = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar11 + 4);
  *(undefined8 *)(param_1 + 6) = uVar18;
  *(undefined8 *)param_1 = uVar20;
  *(undefined8 *)(param_1 + 2) = uVar21;
  if (cVar6 == '\0') {
    if ((char)puVar11[8] != '\0') {
      *(undefined8 *)(param_1 + 9) = *(undefined8 *)(puVar11 + 9);
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  else if ((char)puVar11[8] == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 9) = *(undefined8 *)(puVar11 + 9);
  }
  *(char *)(param_1 + 0xb) = (char)puVar11[0xb];
  *(undefined8 *)(puVar11 + 4) = uVar19;
  *(undefined8 *)(puVar11 + 6) = uVar2;
  *(undefined8 *)puVar11 = uVar16;
  *(undefined8 *)(puVar11 + 2) = uVar22;
  if ((char)puVar11[8] == '\0') {
    if (cVar6 != '\0') {
      *(undefined8 *)(puVar11 + 9) = uVar17;
      *(undefined1 *)(puVar11 + 8) = 1;
    }
  }
  else if (cVar6 == '\0') {
    *(undefined1 *)(puVar11 + 8) = 0;
  }
  else {
    *(undefined8 *)(puVar11 + 9) = uVar17;
  }
  iVar8 = iVar8 + 1;
  *(char *)(puVar11 + 0xb) = (char)uVar3;
LAB_015d1558:
  puVar13 = param_1 + 0xc;
  puVar26 = puVar13;
  if (puVar13 < puVar11) {
    while( true ) {
      puVar13 = puVar26 + -0xc;
      do {
        puVar15 = puVar13;
        puVar13 = puVar15 + 0xc;
      } while (*puVar13 < *puVar24);
      puVar26 = puVar15 + 0x18;
      do {
        puVar12 = puVar11;
        puVar11 = puVar12 + -0xc;
      } while (*puVar24 <= *puVar11);
      if (puVar11 < puVar13) break;
      uVar16 = *(undefined8 *)puVar13;
      uVar22 = *(undefined8 *)(puVar15 + 0xe);
      uVar19 = *(undefined8 *)(puVar15 + 0x10);
      uVar2 = *(undefined8 *)(puVar15 + 0x12);
      cVar6 = (char)puVar15[0x14];
      uVar17 = *(undefined8 *)(puVar12 + -6);
      uVar18 = *(undefined8 *)(puVar15 + 0x15);
      uVar21 = *(undefined8 *)puVar11;
      uVar20 = *(undefined8 *)(puVar12 + -10);
      *(undefined8 *)(puVar15 + 0x10) = *(undefined8 *)(puVar12 + -8);
      *(undefined8 *)(puVar15 + 0x12) = uVar17;
      uVar3 = puVar15[0x17];
      *(undefined8 *)puVar13 = uVar21;
      *(undefined8 *)(puVar15 + 0xe) = uVar20;
      if (cVar6 == '\0') {
        if ((char)puVar12[-4] != '\0') {
          *(undefined8 *)(puVar15 + 0x15) = *(undefined8 *)(puVar12 + -3);
          *(undefined1 *)(puVar15 + 0x14) = 1;
        }
      }
      else if ((char)puVar12[-4] == '\0') {
        *(undefined1 *)(puVar15 + 0x14) = 0;
      }
      else {
        *(undefined8 *)(puVar15 + 0x15) = *(undefined8 *)(puVar12 + -3);
      }
      *(char *)(puVar15 + 0x17) = (char)puVar12[-1];
      *(undefined8 *)puVar11 = uVar16;
      *(undefined8 *)(puVar12 + -10) = uVar22;
      *(undefined8 *)(puVar12 + -8) = uVar19;
      *(undefined8 *)(puVar12 + -6) = uVar2;
      if ((char)puVar12[-4] == '\0') {
        if (cVar6 != '\0') {
          *(undefined8 *)(puVar12 + -3) = uVar18;
          *(undefined1 *)(puVar12 + -4) = 1;
        }
      }
      else if (cVar6 == '\0') {
        *(undefined1 *)(puVar12 + -4) = 0;
      }
      else {
        *(undefined8 *)(puVar12 + -3) = uVar18;
      }
      *(char *)(puVar12 + -1) = (char)uVar3;
      iVar8 = iVar8 + 1;
      puVar15 = puVar11;
      if (puVar24 != puVar13) {
        puVar15 = puVar24;
      }
      puVar24 = puVar15;
    }
  }
  if ((puVar13 != puVar24) && (*puVar24 < *puVar13)) {
    uVar16 = *(undefined8 *)puVar13;
    uVar22 = *(undefined8 *)(puVar13 + 2);
    uVar19 = *(undefined8 *)(puVar13 + 4);
    uVar2 = *(undefined8 *)(puVar13 + 6);
    cVar6 = (char)puVar13[8];
    uVar17 = *(undefined8 *)(puVar24 + 6);
    uVar18 = *(undefined8 *)(puVar13 + 9);
    uVar21 = *(undefined8 *)puVar24;
    uVar20 = *(undefined8 *)(puVar24 + 2);
    *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar24 + 4);
    *(undefined8 *)(puVar13 + 6) = uVar17;
    uVar3 = puVar13[0xb];
    *(undefined8 *)puVar13 = uVar21;
    *(undefined8 *)(puVar13 + 2) = uVar20;
    if (cVar6 == '\0') {
      if ((char)puVar24[8] != '\0') {
        *(undefined8 *)(puVar13 + 9) = *(undefined8 *)(puVar24 + 9);
        *(undefined1 *)(puVar13 + 8) = 1;
      }
    }
    else if ((char)puVar24[8] == '\0') {
      *(undefined1 *)(puVar13 + 8) = 0;
    }
    else {
      *(undefined8 *)(puVar13 + 9) = *(undefined8 *)(puVar24 + 9);
    }
    *(char *)(puVar13 + 0xb) = (char)puVar24[0xb];
    *(undefined8 *)puVar24 = uVar16;
    *(undefined8 *)(puVar24 + 2) = uVar22;
    *(undefined8 *)(puVar24 + 4) = uVar19;
    *(undefined8 *)(puVar24 + 6) = uVar2;
    if ((char)puVar24[8] == '\0') {
      if (cVar6 != '\0') {
        *(undefined8 *)(puVar24 + 9) = uVar18;
        *(undefined1 *)(puVar24 + 8) = 1;
      }
    }
    else if (cVar6 == '\0') {
      *(undefined1 *)(puVar24 + 8) = 0;
    }
    else {
      *(undefined8 *)(puVar24 + 9) = uVar18;
    }
    iVar8 = iVar8 + 1;
    *(char *)(puVar24 + 0xb) = (char)uVar3;
  }
  if (iVar8 == 0) {
    uVar10 = FUN_02ad1c40(param_1,puVar13,param_3);
    uVar9 = FUN_02ad1c40(puVar13 + 0xc,param_2,param_3);
    if ((uVar9 & 1) != 0) goto LAB_015d18b8;
    puVar24 = puVar13 + 0xc;
    if ((uVar10 & 1) != 0) goto LAB_015d1384;
  }
  if (((long)param_2 - (long)puVar13 >> 4) * -0x5555555555555555 <=
      ((long)puVar13 - (long)param_1 >> 4) * -0x5555555555555555) {
    FUN_015d1340(puVar13 + 0xc,param_2,param_3);
    param_2 = puVar13;
    goto LAB_015d1378;
  }
  FUN_015d1340(param_1,puVar13,param_3);
  puVar24 = puVar13 + 0xc;
  goto LAB_015d1384;
LAB_015d18b8:
  param_2 = puVar13;
  if ((uVar10 & 1) != 0) {
    return;
  }
  goto LAB_015d1378;
LAB_015d195c:
  puVar13 = puVar24;
  uVar3 = *puVar13;
  if (uVar3 < *puVar25) {
    uVar19 = *(undefined8 *)(puVar13 + 1);
    uVar21 = *(undefined8 *)(puVar13 + 3);
    uVar22 = *(undefined8 *)(puVar13 + 5);
    uVar4 = puVar13[7];
    cVar6 = (char)puVar13[8];
    bVar1 = cVar6 != '\0';
    if (bVar1) {
      uVar16 = *(undefined8 *)(puVar13 + 9);
    }
    uVar7 = puVar13[0xb];
    lVar23 = lVar14;
    while( true ) {
      cVar5 = *(char *)((long)param_1 + lVar23 + 0x80);
      *(undefined8 *)((long)param_1 + lVar23 + 0x90) =
           *(undefined8 *)((long)param_1 + lVar23 + 0x60);
      *(undefined8 *)((long)param_1 + lVar23 + 0x98) =
           *(undefined8 *)((long)param_1 + lVar23 + 0x68);
      *(undefined8 *)((long)param_1 + lVar23 + 0xa0) =
           *(undefined8 *)((long)param_1 + lVar23 + 0x70);
      *(undefined8 *)((long)param_1 + lVar23 + 0xa8) =
           *(undefined8 *)((long)param_1 + lVar23 + 0x78);
      if (cVar6 == '\0') {
        if (cVar5 != '\0') {
          *(undefined8 *)((long)param_1 + lVar23 + 0xb4) =
               *(undefined8 *)((long)param_1 + lVar23 + 0x84);
          *(undefined1 *)((long)param_1 + lVar23 + 0xb0) = 1;
        }
      }
      else if (cVar5 == '\0') {
        *(undefined1 *)((long)param_1 + lVar23 + 0xb0) = 0;
      }
      else {
        *(undefined8 *)((long)param_1 + lVar23 + 0xb4) =
             *(undefined8 *)((long)param_1 + lVar23 + 0x84);
      }
      *(undefined1 *)((long)param_1 + lVar23 + 0xbc) =
           *(undefined1 *)((long)param_1 + lVar23 + 0x8c);
      if (lVar23 == -0x60) {
        puVar24 = param_1;
        goto LAB_015d1a28;
      }
      if (*(uint *)((long)param_1 + lVar23 + 0x30) <= uVar3) break;
      cVar6 = *(char *)((long)param_1 + lVar23 + 0x80);
      lVar23 = lVar23 + -0x30;
    }
    puVar24 = (uint *)((long)param_1 + lVar23 + 0x60);
LAB_015d1a28:
    *puVar24 = uVar3;
    *(undefined8 *)(puVar24 + 1) = uVar19;
    puVar24[7] = uVar4;
    *(undefined8 *)(puVar24 + 5) = uVar22;
    *(undefined8 *)(puVar24 + 3) = uVar21;
    if ((char)puVar24[8] == '\0') {
      if (bVar1) {
        *(undefined8 *)(puVar24 + 9) = uVar16;
        *(undefined1 *)(puVar24 + 8) = 1;
      }
    }
    else if (bVar1) {
      *(undefined8 *)(puVar24 + 9) = uVar16;
    }
    else {
      *(undefined1 *)(puVar24 + 8) = 0;
    }
    *(char *)(puVar24 + 0xb) = (char)uVar7;
  }
  lVar14 = lVar14 + 0x30;
  puVar24 = puVar13 + 0xc;
  puVar25 = puVar13;
  if (puVar13 + 0xc == param_2) {
switchD_015d18d8_caseD_0:
    return;
  }
  goto LAB_015d195c;
}


