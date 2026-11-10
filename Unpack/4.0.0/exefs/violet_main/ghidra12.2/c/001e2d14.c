/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e2d14; name: FUN_001e2d14
 */


undefined4 FUN_001e2d14(long *param_1,uint param_2,long *param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  long lVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined *puVar16;
  char *pcVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 auStack_60 [8];
  long local_58;
  undefined1 auStack_38 [8];
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (param_3 == (long *)0x0) {
    return 2;
  }
  *param_3 = 0;
  if (9 < param_2) {
    return 9;
  }
  uVar21 = param_4 >> 6 & 1;
  switch(param_2) {
  case 0:
    puVar22 = (undefined1 *)param_1[3];
    puVar19 = (undefined1 *)param_1[5];
    if ((*param_1 == 0) || (iVar10 = FUN_001e0990(&DAT_03c9cc09), iVar10 == 0)) {
      if (param_1[4] == 0) {
        return 0xe;
      }
      puVar20 = (undefined1 *)*param_1;
      if (puVar20 == (undefined1 *)0x0) {
        if ((param_4 >> 2 & 1) == 0) {
          return 10;
        }
        puVar20 = &DAT_03bdfd99;
      }
      lVar13 = FUN_001e5320(puVar20);
      if (((param_4 & 1) == 0) || (puVar19 != (undefined1 *)0x0)) {
        if ((puVar19 == (undefined1 *)0x0) || (lVar13 == 0)) {
          if (lVar13 == 0) goto LAB_001e3034;
        }
        else if (*(long *)(lVar13 + 0x78) == param_1[10] && (param_4 & 2) != 0) {
          puVar19 = (undefined1 *)0x0;
        }
LAB_001e3020:
        puVar1 = (undefined1 *)0x0;
        if ((*(byte *)(lVar13 + 0x85) & 4) != 0) {
          puVar1 = puVar22;
        }
        puVar22 = puVar1;
      }
      else {
        if (lVar13 != 0) {
          puVar19 = auStack_38;
          FUN_001ce394(auStack_38,7,&DAT_03be62d5,*(undefined8 *)(lVar13 + 0x78));
          goto LAB_001e3020;
        }
        puVar19 = (undefined1 *)0x0;
      }
LAB_001e3034:
      puVar8 = (undefined1 *)param_1[1];
      puVar9 = (undefined1 *)param_1[2];
      puVar14 = &DAT_03c886bc;
      puVar1 = &DAT_03c886bc;
      if (puVar8 != (undefined1 *)0x0) {
        puVar1 = puVar8;
      }
      pcVar12 = (char *)param_1[6];
      puVar2 = &DAT_03c886bc;
      if (puVar9 != (undefined1 *)0x0) {
        puVar2 = &DAT_03c9c9c5;
      }
      puVar3 = &DAT_03c886bc;
      if (puVar9 != (undefined1 *)0x0) {
        puVar3 = puVar9;
      }
      puVar4 = &DAT_03c886bc;
      if (puVar22 != (undefined1 *)0x0) {
        puVar4 = &DAT_03c2b013;
      }
      puVar5 = &DAT_03c886bc;
      if (puVar22 != (undefined1 *)0x0) {
        puVar5 = puVar22;
      }
      puVar6 = &DAT_03c886bc;
      if (puVar22 != (undefined1 *)0x0 ||
          (puVar8 != (undefined1 *)0x0 || puVar9 != (undefined1 *)0x0)) {
        puVar6 = &DAT_03c32450;
      }
      puVar22 = &DAT_03c886bc;
      if (puVar19 != (undefined1 *)0x0) {
        puVar22 = &DAT_03c9c9c5;
      }
      puVar8 = &DAT_03c886bc;
      if (puVar19 != (undefined1 *)0x0) {
        puVar8 = puVar19;
      }
      pcVar15 = "/";
      if (pcVar12 != (char *)0x0) {
        puVar14 = &DAT_03c886bc;
        if (*pcVar12 != '/') {
          puVar14 = &DAT_03bdfb3b;
        }
        pcVar15 = pcVar12;
      }
      pcVar12 = (char *)param_1[7];
      if (pcVar12 == (char *)0x0) {
        puVar16 = &DAT_03c886bc;
        pcVar17 = "";
      }
      else {
        puVar16 = &DAT_03c886bc;
        if (*pcVar12 != '\0') {
          puVar16 = &DAT_03c1ceec;
        }
        pcVar17 = "";
        if (*pcVar12 != '\0') {
          pcVar17 = pcVar12;
        }
      }
      puVar19 = (undefined1 *)param_1[8];
      puVar7 = &DAT_03c886bc;
      if (puVar19 != (undefined1 *)0x0) {
        puVar7 = &DAT_03be6449;
      }
      puVar9 = &DAT_03c886bc;
      if (puVar19 != (undefined1 *)0x0) {
        puVar9 = puVar19;
      }
      local_58 = FUN_001ce400("%s://%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",puVar20,puVar1,puVar2,puVar3,
                              puVar4,puVar5,puVar6,param_1[4],puVar22,puVar8,puVar14,pcVar15,puVar16
                              ,pcVar17,puVar7,puVar9);
    }
    else {
      puVar19 = (undefined1 *)param_1[8];
      puVar14 = &DAT_03c886bc;
      if (puVar19 != (undefined1 *)0x0) {
        puVar14 = &DAT_03be6449;
      }
      puVar22 = &DAT_03c886bc;
      if (puVar19 != (undefined1 *)0x0) {
        puVar22 = puVar19;
      }
      local_58 = FUN_001ce400("file://%s%s%s",param_1[6],puVar14,puVar22);
    }
    if (local_58 == 0) goto LAB_001e313c;
    goto LAB_001e3130;
  case 1:
    uVar21 = 0;
    uVar18 = 0;
    uVar11 = 10;
    break;
  case 2:
    uVar18 = 0;
    param_1 = param_1 + 1;
    uVar11 = 0xb;
    break;
  case 3:
    uVar18 = 0;
    param_1 = param_1 + 2;
    uVar11 = 0xc;
    break;
  case 4:
    uVar18 = 0;
    param_1 = param_1 + 3;
    uVar11 = 0xd;
    break;
  case 5:
    uVar18 = 0;
    param_1 = param_1 + 4;
    uVar11 = 0xe;
    break;
  case 6:
    puVar19 = (undefined1 *)param_1[5];
    if ((((param_4 & 1) == 0) || (puVar19 != (undefined1 *)0x0)) || (*param_1 == 0)) {
      if (puVar19 == (undefined1 *)0x0) {
        return 0xf;
      }
      if ((*param_1 != 0) && (lVar13 = FUN_001e5320(), lVar13 != 0)) {
        uVar21 = 0;
        if (((param_4 >> 1 & 1) != 0) && (*(long *)(lVar13 + 0x78) == param_1[10])) {
          return 0xf;
        }
        goto LAB_001e2f50;
      }
    }
    else {
      lVar13 = FUN_001e5320();
      if (lVar13 == 0) {
        return 0xf;
      }
      puVar19 = auStack_38;
      FUN_001ce394(auStack_38,7,&DAT_03be62d5,*(undefined8 *)(lVar13 + 0x78));
    }
    uVar21 = 0;
    goto LAB_001e2f50;
  case 7:
    puVar19 = (undefined1 *)param_1[6];
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = (undefined1 *)FUN_001ec328(&DAT_03bdfb3b);
      param_1[6] = (long)puVar19;
      if (puVar19 == (undefined1 *)0x0) goto LAB_001e313c;
    }
LAB_001e2f50:
    lVar13 = FUN_001ec328(puVar19);
    *param_3 = lVar13;
    if (lVar13 == 0) {
      return 7;
    }
    if (uVar21 == 0) {
      return 0;
    }
    goto LAB_001e2f74;
  case 8:
    param_1 = param_1 + 7;
    uVar11 = 0x10;
    uVar18 = uVar21;
    break;
  case 9:
    param_1 = param_1 + 8;
    uVar11 = 0x11;
    uVar18 = 0;
  }
  if (*param_1 != 0) {
    pcVar12 = (char *)FUN_001ec328(*param_1);
    *param_3 = (long)pcVar12;
    if (pcVar12 == (char *)0x0) {
LAB_001e313c:
      uVar11 = 7;
    }
    else {
      if (uVar18 != 0) {
        do {
          if (*pcVar12 == '+') {
            *pcVar12 = ' ';
          }
          else if (*pcVar12 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while( true );
      }
      if (uVar21 == 0) {
        uVar11 = 0;
      }
      else {
        lVar13 = *param_3;
LAB_001e2f74:
        iVar10 = FUN_001e4544(0,lVar13,0,&local_58,auStack_60,1);
        FUN_001ec308(*param_3);
        if (iVar10 == 0) {
LAB_001e3130:
          uVar11 = 0;
          *param_3 = local_58;
        }
        else {
          *param_3 = 0;
          uVar11 = 6;
        }
      }
    }
  }
  return uVar11;
}


