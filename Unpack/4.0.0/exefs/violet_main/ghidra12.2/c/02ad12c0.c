/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ad12c0; name: FUN_02ad12c0
 */


undefined8 FUN_02ad12c0(uint *param_1,uint *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  undefined8 uVar11;
  
  uVar8 = *param_2;
  if (*param_1 <= uVar8) {
    if (uVar8 <= *param_3) {
      return 0;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar5 = *(undefined8 *)(param_2 + 6);
    cVar9 = (char)param_2[8];
    uVar6 = *(undefined8 *)(param_3 + 6);
    uVar11 = *(undefined8 *)(param_2 + 9);
    uVar3 = *(undefined8 *)param_3;
    uVar7 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_2 + 6) = uVar6;
    uVar8 = param_2[0xb];
    *(undefined8 *)param_2 = uVar3;
    *(undefined8 *)(param_2 + 2) = uVar7;
    if (cVar9 == '\0') {
      if ((char)param_3[8] != '\0') {
        *(undefined8 *)(param_2 + 9) = *(undefined8 *)(param_3 + 9);
        *(undefined1 *)(param_2 + 8) = 1;
      }
    }
    else if ((char)param_3[8] == '\0') {
      *(undefined1 *)(param_2 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_2 + 9) = *(undefined8 *)(param_3 + 9);
    }
    *(char *)(param_2 + 0xb) = (char)param_3[0xb];
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 2) = uVar4;
    *(undefined8 *)(param_3 + 4) = uVar2;
    *(undefined8 *)(param_3 + 6) = uVar5;
    if ((char)param_3[8] == '\0') {
      if (cVar9 != '\0') {
        *(undefined8 *)(param_3 + 9) = uVar11;
        *(undefined1 *)(param_3 + 8) = 1;
      }
    }
    else if (cVar9 == '\0') {
      *(undefined1 *)(param_3 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_3 + 9) = uVar11;
    }
    *(char *)(param_3 + 0xb) = (char)uVar8;
    if (*param_1 <= *param_2) {
      return 1;
    }
    uVar1 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar2 = *(undefined8 *)(param_1 + 4);
    uVar5 = *(undefined8 *)(param_1 + 6);
    cVar9 = (char)param_1[8];
    uVar6 = *(undefined8 *)(param_2 + 6);
    uVar11 = *(undefined8 *)(param_1 + 9);
    uVar3 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = uVar6;
    uVar8 = param_1[0xb];
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar7;
    if (cVar9 == '\0') {
      if ((char)param_2[8] != '\0') {
        *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 9);
        *(undefined1 *)(param_1 + 8) = 1;
      }
    }
    else if ((char)param_2[8] == '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 9);
    }
    *(char *)(param_1 + 0xb) = (char)param_2[0xb];
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 2) = uVar4;
    *(undefined8 *)(param_2 + 4) = uVar2;
    *(undefined8 *)(param_2 + 6) = uVar5;
    if ((char)param_2[8] == '\0') {
      if (cVar9 != '\0') {
        *(undefined8 *)(param_2 + 9) = uVar11;
        *(undefined1 *)(param_2 + 8) = 1;
      }
    }
    else if (cVar9 == '\0') {
      *(undefined1 *)(param_2 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_2 + 9) = uVar11;
    }
    *(char *)(param_2 + 0xb) = (char)uVar8;
    return 2;
  }
  if (*param_3 < uVar8) {
    uVar1 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar2 = *(undefined8 *)(param_1 + 4);
    uVar5 = *(undefined8 *)(param_1 + 6);
    cVar9 = (char)param_1[8];
    uVar6 = *(undefined8 *)(param_3 + 6);
    uVar11 = *(undefined8 *)(param_1 + 9);
    uVar3 = *(undefined8 *)param_3;
    uVar7 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 6) = uVar6;
    uVar8 = param_1[0xb];
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar7;
    if (cVar9 == '\0') {
      if ((char)param_3[8] != '\0') {
        *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_3 + 9);
        *(undefined1 *)(param_1 + 8) = 1;
      }
    }
    else if ((char)param_3[8] == '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_3 + 9);
    }
    *(char *)(param_1 + 0xb) = (char)param_3[0xb];
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 2) = uVar4;
    *(undefined8 *)(param_3 + 4) = uVar2;
    *(undefined8 *)(param_3 + 6) = uVar5;
    if ((char)param_3[8] == '\0') {
      if (cVar9 != '\0') {
        *(undefined8 *)(param_3 + 9) = uVar11;
        *(undefined1 *)(param_3 + 8) = 1;
      }
    }
    else if (cVar9 == '\0') {
      *(undefined1 *)(param_3 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_3 + 9) = uVar11;
    }
    *(char *)(param_3 + 0xb) = (char)uVar8;
    return 1;
  }
  uVar1 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar5 = *(undefined8 *)(param_1 + 6);
  cVar9 = (char)param_1[8];
  uVar6 = *(undefined8 *)(param_2 + 6);
  uVar11 = *(undefined8 *)(param_1 + 9);
  uVar3 = *(undefined8 *)param_2;
  uVar7 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar6;
  uVar8 = param_1[0xb];
  *(undefined8 *)param_1 = uVar3;
  *(undefined8 *)(param_1 + 2) = uVar7;
  if (cVar9 == '\0') {
    if ((char)param_2[8] != '\0') {
      *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 9);
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  else if ((char)param_2[8] == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 9);
  }
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  *(undefined8 *)param_2 = uVar1;
  *(undefined8 *)(param_2 + 2) = uVar4;
  *(undefined8 *)(param_2 + 4) = uVar2;
  *(undefined8 *)(param_2 + 6) = uVar5;
  if ((char)param_2[8] == '\0') {
    bVar10 = true;
    if (cVar9 == '\0') goto LAB_02ad14d4;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else if (cVar9 == '\0') {
    *(undefined1 *)(param_2 + 8) = 0;
    bVar10 = true;
    goto LAB_02ad14d4;
  }
  bVar10 = false;
  *(undefined8 *)(param_2 + 9) = uVar11;
LAB_02ad14d4:
  *(char *)(param_2 + 0xb) = (char)uVar8;
  if (*param_2 <= *param_3) {
    return 1;
  }
  uVar1 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar5 = *(undefined8 *)(param_2 + 6);
  uVar11 = *(undefined8 *)(param_2 + 9);
  uVar6 = *(undefined8 *)(param_3 + 6);
  uVar3 = *(undefined8 *)param_3;
  uVar7 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 6) = uVar6;
  *(undefined8 *)param_2 = uVar3;
  *(undefined8 *)(param_2 + 2) = uVar7;
  if (bVar10) {
    if ((char)param_3[8] != '\0') {
      *(undefined8 *)(param_2 + 9) = *(undefined8 *)(param_3 + 9);
      *(undefined1 *)(param_2 + 8) = 1;
    }
  }
  else if ((char)param_3[8] == '\0') {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else {
    *(undefined8 *)(param_2 + 9) = *(undefined8 *)(param_3 + 9);
  }
  *(char *)(param_2 + 0xb) = (char)param_3[0xb];
  *(undefined8 *)param_3 = uVar1;
  *(undefined8 *)(param_3 + 2) = uVar4;
  *(undefined8 *)(param_3 + 4) = uVar2;
  *(undefined8 *)(param_3 + 6) = uVar5;
  if ((char)param_3[8] == '\0') {
    if (!bVar10) {
      *(undefined8 *)(param_3 + 9) = uVar11;
      *(undefined1 *)(param_3 + 8) = 1;
    }
  }
  else if (bVar10) {
    *(undefined1 *)(param_3 + 8) = 0;
  }
  else {
    *(undefined8 *)(param_3 + 9) = uVar11;
  }
  *(char *)(param_3 + 0xb) = (char)uVar8;
  return 2;
}


