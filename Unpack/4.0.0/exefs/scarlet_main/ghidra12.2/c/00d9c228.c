/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d9c228; name: FUN_00d9c228
 */


uint FUN_00d9c228(int param_1,byte param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  
  cVar1 = FUN_00d9c750();
  if (param_3 == '\0') {
    return 0;
  }
  if ((param_1 == 2) || (param_1 == 0)) {
    cVar3 = '\0';
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
        cVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_00d9c25c;
      }
    }
    cVar3 = '\x02';
  }
LAB_00d9c25c:
  uVar2 = (uint)(cVar3 == cVar1);
  if (param_3 == '\x01') {
    return uVar2;
  }
  if (param_1 == 2) {
    cVar3 = (param_2 == 0) << 1;
  }
  else if (param_1 == 0) {
    cVar3 = '\x01';
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
        cVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_00d9c284;
      }
    }
    cVar3 = '\x02';
  }
LAB_00d9c284:
  if (cVar3 == cVar1) {
    uVar2 = uVar2 + 1;
  }
  if (param_3 == '\x02') {
    return uVar2;
  }
  if (param_1 == 2) {
    cVar3 = (param_2 < 2) << 1;
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
        cVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_00d9c2b0;
      }
    }
    cVar3 = '\x02';
  }
LAB_00d9c2b0:
  if (cVar3 == cVar1) {
    uVar2 = uVar2 + 1;
  }
  if (param_3 == '\x03') {
    return uVar2;
  }
  if (param_1 == 2) {
    cVar3 = (param_2 < 3) << 1;
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
        cVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_00d9c2dc;
      }
    }
    cVar3 = '\x02';
  }
LAB_00d9c2dc:
  if (cVar3 == cVar1) {
    uVar2 = uVar2 + 1;
  }
  if (param_3 == '\x04') {
    return uVar2;
  }
  if (param_1 == 2) {
    cVar3 = '\x01';
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
        cVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_00d9c2fc;
      }
    }
    cVar3 = '\x02';
  }
LAB_00d9c2fc:
  if (cVar3 == cVar1) {
    uVar2 = uVar2 + 1;
  }
  if (param_3 == '\x05') {
    return uVar2;
  }
  if (param_1 == 2) {
    cVar3 = '\x01';
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
        cVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_00d9c31c;
      }
    }
    cVar3 = '\x02';
  }
LAB_00d9c31c:
  if (cVar3 == cVar1) {
    uVar2 = uVar2 + 1;
  }
  if (param_3 == '\x06') {
    return uVar2;
  }
  if (param_1 == 2) {
    cVar3 = '\x01';
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
        cVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_00d9c33c;
      }
    }
    cVar3 = '\x02';
  }
LAB_00d9c33c:
  if (cVar3 == cVar1) {
    uVar2 = uVar2 + 1;
  }
  if (param_3 == '\a') {
    return uVar2;
  }
  if (param_1 == 2) {
    cVar3 = '\x01';
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
        cVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_00d9c35c;
      }
    }
    cVar3 = '\x02';
  }
LAB_00d9c35c:
  if (cVar3 == cVar1) {
    uVar2 = uVar2 + 1;
  }
  if (param_3 == '\b') {
    return uVar2;
  }
  if (param_1 == 2) {
    cVar3 = '\x01';
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
        cVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_00d9c37c;
      }
    }
    cVar3 = '\x02';
  }
LAB_00d9c37c:
  if (cVar3 == cVar1) {
    uVar2 = uVar2 + 1;
  }
  if (param_3 == '\t') {
    return uVar2;
  }
  if (param_1 == 2) {
    cVar3 = '\x01';
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
        cVar3 = (&DAT_03d6a455)[*puVar4];
        goto LAB_00d9c39c;
      }
    }
    cVar3 = '\x02';
  }
LAB_00d9c39c:
  if (cVar3 == cVar1) {
    uVar2 = uVar2 + 1;
  }
  if (param_3 != '\n') {
    uVar2 = 6;
  }
  return uVar2;
}


