/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123aa70; name: FUN_0123aa70
 */


uint FUN_0123aa70(int param_1,char param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  
  if (param_1 == 0) {
    uVar2 = 2;
    if (param_3 != '\x01') {
      uVar2 = 1;
    }
    uVar3 = (uint)(param_3 == '\x01');
    if (param_3 == '\0') {
      uVar3 = uVar2;
    }
    return uVar3;
  }
  if (param_1 == 1) {
    bVar1 = param_2 - 1;
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcb28)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a374;
    }
    uVar2 = *puVar4;
    if (uVar2 == 5) {
      uVar2 = 0;
    }
    else {
      if ((int)uVar2 < 5) {
        cVar5 = (&DAT_03d6a455)[uVar2];
      }
      else {
        cVar5 = '\x02';
      }
      uVar2 = (uint)(cVar5 == param_3);
    }
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcb50)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a378;
    }
    uVar3 = *puVar4;
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar5 = (&DAT_03d6a455)[uVar3];
      }
      else {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        uVar2 = uVar2 + 1;
      }
    }
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcb78)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a37c;
    }
    uVar3 = *puVar4;
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar5 = (&DAT_03d6a455)[uVar3];
      }
      else {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        uVar2 = uVar2 + 1;
      }
    }
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcba0)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a380;
    }
    uVar3 = *puVar4;
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar5 = (&DAT_03d6a455)[uVar3];
      }
      else {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        uVar2 = uVar2 + 1;
      }
    }
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcbc8)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a384;
    }
    uVar3 = *puVar4;
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar5 = (&DAT_03d6a455)[uVar3];
      }
      else {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        uVar2 = uVar2 + 1;
      }
    }
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcbf0)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a388;
    }
    uVar3 = *puVar4;
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar5 = (&DAT_03d6a455)[uVar3];
      }
      else {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        uVar2 = uVar2 + 1;
      }
    }
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcc18)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a38c;
    }
    uVar3 = *puVar4;
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar5 = (&DAT_03d6a455)[uVar3];
      }
      else {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        uVar2 = uVar2 + 1;
      }
    }
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcc40)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a390;
    }
    uVar3 = *puVar4;
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar5 = (&DAT_03d6a455)[uVar3];
      }
      else {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        uVar2 = uVar2 + 1;
      }
    }
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcc68)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a394;
    }
    uVar3 = *puVar4;
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar5 = (&DAT_03d6a455)[uVar3];
      }
      else {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        uVar2 = uVar2 + 1;
      }
    }
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcc90)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a398;
    }
    uVar3 = *puVar4;
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar5 = (&DAT_03d6a455)[uVar3];
      }
      else {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        uVar2 = uVar2 + 1;
      }
    }
    if (bVar1 < 5) {
      puVar4 = (uint *)(&PTR_DAT_045fcb00)[(char)bVar1];
    }
    else {
      puVar4 = &DAT_03d6a39c;
    }
    uVar3 = *puVar4;
    if (uVar3 == 5) {
      return uVar2;
    }
    if ((int)uVar3 < 5) {
      cVar5 = (&DAT_03d6a455)[uVar3];
    }
    else {
      cVar5 = '\x02';
    }
    if (cVar5 == param_3) {
      uVar2 = uVar2 + 1;
    }
    return uVar2;
  }
  if (param_1 != 2) {
    return 0;
  }
  uVar2 = (uint)(param_3 == '\0');
  if (param_2 == '\0') {
    return uVar2 | (uint)(param_3 == '\x01') << 1 | (uint)(param_3 == '\x01') << 2;
  }
  uVar3 = (uint)(param_3 == '\0') << 1;
  if (param_2 == '\x01') {
    uVar2 = (uint)(param_3 == '\x01');
    uVar3 = uVar3 | uVar2;
    uVar2 = uVar2 | (uint)(param_3 == '\x01') << 2;
  }
  else {
    uVar3 = uVar3 | uVar2;
    if (param_2 != '\x02') {
      return (uVar2 | (uint)(param_3 == '\x01') << 1 | (uint)(param_3 == '\x01') << 2) + uVar3;
    }
    uVar2 = 6;
    if (param_3 != '\x01') {
      uVar2 = 0;
    }
  }
  return uVar2 + uVar3;
}


