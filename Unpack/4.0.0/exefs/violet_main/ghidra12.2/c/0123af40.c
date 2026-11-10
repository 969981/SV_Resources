/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123af40; name: FUN_0123af40
 */


undefined4 FUN_0123af40(int param_1,byte param_2,byte param_3,byte param_4)

{
  char unaff_1000010d;
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  uint *puVar4;
  
  if (1 < param_3) {
    return 10;
  }
  if (5 < param_4) {
    return 10;
  }
  if ((param_1 == 2) || (param_1 == 0)) {
    bVar1 = 0;
  }
  else {
    if (param_1 == 1) {
      if ((byte)(param_2 - 1) < 5) {
        puVar4 = (uint *)(&PTR_DAT_045fcb28)[(char)(param_2 - 1)];
      }
      else {
        puVar4 = &DAT_03d6a374;
      }
      if ((int)*puVar4 < 5) {
        bVar1 = (&DAT_03d6a455)[*puVar4];
        goto LAB_0123af68;
      }
    }
    bVar1 = 2;
  }
LAB_0123af68:
  if (bVar1 == param_3) {
    bVar1 = unaff_1000010d != '\0';
    if (param_4 == 0) {
      return 0;
    }
  }
  else {
    bVar1 = false;
  }
  if (param_1 == 2) {
    bVar3 = (param_2 == 0) << 1;
  }
  else if (param_1 == 0) {
    bVar3 = 1;
  }
  else {
    if (param_1 == 1) {
      if ((byte)(param_2 - 1) < 5) {
        puVar4 = (uint *)(&PTR_DAT_045fcb50)[(char)(param_2 - 1)];
      }
      else {
        puVar4 = &DAT_03d6a378;
      }
      if ((int)*puVar4 < 5) {
        bVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_0123af9c;
      }
    }
    bVar3 = 2;
  }
LAB_0123af9c:
  if (bVar3 == param_3) {
    if (bVar1 == param_4) {
      return 1;
    }
    bVar1 = bVar1 + 1;
  }
  if (param_1 == 2) {
    bVar3 = (param_2 < 2) << 1;
  }
  else {
    if (param_1 == 1) {
      if ((byte)(param_2 - 1) < 5) {
        puVar4 = (uint *)(&PTR_DAT_045fcb78)[(char)(param_2 - 1)];
      }
      else {
        puVar4 = &DAT_03d6a37c;
      }
      if ((int)*puVar4 < 5) {
        bVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_0123afd4;
      }
    }
    bVar3 = 2;
  }
LAB_0123afd4:
  if (bVar3 == param_3) {
    if (bVar1 == param_4) {
      return 2;
    }
    bVar1 = bVar1 + 1;
  }
  if (param_1 == 2) {
    bVar3 = (param_2 < 3) << 1;
  }
  else {
    if (param_1 == 1) {
      if ((byte)(param_2 - 1) < 5) {
        puVar4 = (uint *)(&PTR_DAT_045fcba0)[(char)(param_2 - 1)];
      }
      else {
        puVar4 = &DAT_03d6a380;
      }
      if ((int)*puVar4 < 5) {
        bVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_0123b008;
      }
    }
    bVar3 = 2;
  }
LAB_0123b008:
  if (bVar3 == param_3) {
    if (bVar1 == param_4) {
      return 3;
    }
    bVar1 = bVar1 + 1;
  }
  if (param_1 == 2) {
    bVar3 = 1;
  }
  else {
    if (param_1 == 1) {
      if ((byte)(param_2 - 1) < 5) {
        puVar4 = (uint *)(&PTR_DAT_045fcbc8)[(char)(param_2 - 1)];
      }
      else {
        puVar4 = &DAT_03d6a384;
      }
      if ((int)*puVar4 < 5) {
        bVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_0123b030;
      }
    }
    bVar3 = 2;
  }
LAB_0123b030:
  if (bVar3 == param_3) {
    if (bVar1 == param_4) {
      return 4;
    }
    bVar1 = bVar1 + 1;
  }
  if (param_1 == 2) {
    bVar3 = 1;
  }
  else {
    if (param_1 == 1) {
      if ((byte)(param_2 - 1) < 5) {
        puVar4 = (uint *)(&PTR_DAT_045fcbf0)[(char)(param_2 - 1)];
      }
      else {
        puVar4 = &DAT_03d6a388;
      }
      if ((int)*puVar4 < 5) {
        bVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_0123b094;
      }
    }
    bVar3 = 2;
  }
LAB_0123b094:
  if (bVar3 == param_3) {
    if (bVar1 == param_4) {
      return 5;
    }
    bVar1 = bVar1 + 1;
  }
  if (param_1 == 2) {
    bVar3 = 1;
  }
  else {
    if (param_1 == 1) {
      if ((byte)(param_2 - 1) < 5) {
        puVar4 = (uint *)(&PTR_DAT_045fcc18)[(char)(param_2 - 1)];
      }
      else {
        puVar4 = &DAT_03d6a38c;
      }
      if ((int)*puVar4 < 5) {
        bVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_0123b0cc;
      }
    }
    bVar3 = 2;
  }
LAB_0123b0cc:
  if (bVar3 == param_3) {
    if (bVar1 == param_4) {
      return 6;
    }
    bVar1 = bVar1 + 1;
  }
  if (param_1 == 2) {
    bVar3 = 1;
  }
  else {
    if (param_1 == 1) {
      if ((byte)(param_2 - 1) < 5) {
        puVar4 = (uint *)(&PTR_DAT_045fcc40)[(char)(param_2 - 1)];
      }
      else {
        puVar4 = &DAT_03d6a390;
      }
      if ((int)*puVar4 < 5) {
        bVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_0123b130;
      }
    }
    bVar3 = 2;
  }
LAB_0123b130:
  if (bVar3 == param_3) {
    if (bVar1 == param_4) {
      return 7;
    }
    bVar1 = bVar1 + 1;
  }
  if (param_1 == 2) {
    bVar3 = 1;
  }
  else {
    if (param_1 == 1) {
      if ((byte)(param_2 - 1) < 5) {
        puVar4 = (uint *)(&PTR_DAT_045fcc68)[(char)(param_2 - 1)];
      }
      else {
        puVar4 = &DAT_03d6a394;
      }
      if ((int)*puVar4 < 5) {
        bVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_0123b18c;
      }
    }
    bVar3 = 2;
  }
LAB_0123b18c:
  if (bVar3 == param_3) {
    if (bVar1 == param_4) {
      return 8;
    }
    bVar1 = bVar1 + 1;
  }
  if (param_1 == 2) {
    bVar3 = 1;
  }
  else {
    if (param_1 == 1) {
      if ((byte)(param_2 - 1) < 5) {
        puVar4 = (uint *)(&PTR_DAT_045fcc90)[(char)(param_2 - 1)];
      }
      else {
        puVar4 = &DAT_03d6a398;
      }
      if ((int)*puVar4 < 5) {
        bVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_0123b20c;
      }
    }
    bVar3 = 2;
  }
LAB_0123b20c:
  uVar2 = 9;
  if (bVar3 != param_3 || bVar1 != param_4) {
    uVar2 = 10;
  }
  return uVar2;
}


