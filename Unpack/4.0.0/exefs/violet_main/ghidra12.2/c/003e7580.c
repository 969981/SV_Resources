/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e7580; name: FUN_003e7580
 */


undefined8
FUN_003e7580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5,uint param_6,int param_7,uint param_8,uint param_9)

{
  ulong uVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;
  bool bVar6;
  size_t sVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int local_84;
  char local_7c [28];
  
  if ((param_9 >> 6 & 1) == 0) {
    bVar6 = (param_9 & 2) == 0;
    uVar9 = 0;
    if (bVar6) {
      uVar9 = (uint)((param_9 & 4) == 0);
    }
    local_84 = 0x2b;
    if (bVar6) {
      local_84 = (param_9 & 4) << 3;
    }
    bVar6 = (param_5 & 0x8000000000000000) != 0;
    if (bVar6) {
      uVar9 = 0;
      local_84 = 0x2d;
    }
    uVar15 = -param_5;
    if (!bVar6) {
      uVar15 = param_5;
    }
    param_5 = uVar15;
  }
  else {
    local_84 = 0;
    uVar9 = 1;
  }
  param_8 = param_8 & ((int)param_8 >> 0x1f ^ 0xffffffffU);
  pcVar12 = "0";
  if (param_6 != 8) {
    pcVar12 = "";
  }
  pcVar3 = "0x";
  if (param_6 != 0x10) {
    pcVar3 = pcVar12;
  }
  pcVar12 = "0123456789abcdef";
  if ((param_9 & 0x20) != 0) {
    pcVar12 = "0123456789ABCDEF";
  }
  uVar10 = (ulong)param_6;
  uVar15 = 0;
  do {
    uVar5 = 0;
    if (uVar10 != 0) {
      uVar5 = param_5 / uVar10;
    }
    uVar1 = uVar15 + 1;
    local_7c[uVar15] = pcVar12[param_5 - uVar5 * uVar10];
  } while ((uVar10 <= param_5) && (bVar6 = uVar15 < 0x19, param_5 = uVar5, uVar15 = uVar1, bVar6));
  pcVar12 = "";
  if ((param_9 & 8) != 0) {
    pcVar12 = pcVar3;
  }
  uVar11 = (uint)uVar1;
  uVar2 = uVar11 - 1;
  if (uVar11 != 0x1a) {
    uVar2 = uVar11;
  }
  uVar15 = (ulong)uVar2;
  uVar11 = uVar2;
  if ((int)uVar2 <= (int)param_8) {
    uVar11 = param_8;
  }
  local_7c[uVar15] = '\0';
  sVar7 = strlen(pcVar12);
  uVar11 = ((param_7 - (uVar9 ^ 1)) - uVar11) - (int)sVar7;
  uVar2 = param_8 - uVar2 & ((int)(param_8 - uVar2) >> 0x1f ^ 0xffffffffU);
  uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
  uVar14 = uVar11;
  if ((int)uVar11 <= (int)uVar2) {
    uVar14 = uVar2;
  }
  if ((param_9 & 0x10) != 0) {
    uVar11 = 0;
    uVar2 = uVar14;
  }
  uVar14 = -uVar11;
  if ((param_9 & 1) == 0) {
    uVar14 = uVar11;
  }
  if (0 < (int)uVar14) {
    iVar13 = uVar14 + 1;
    do {
      uVar8 = FUN_003e7440(param_1,param_2,param_3,param_4,0x20);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      iVar13 = iVar13 + -1;
    } while (1 < iVar13);
    uVar14 = 0;
  }
  if ((uVar9 == 0) &&
     (uVar8 = FUN_003e7440(param_1,param_2,param_3,param_4,local_84), (int)uVar8 == 0)) {
    return uVar8;
  }
  cVar4 = *pcVar12;
  while (cVar4 != '\0') {
    pcVar12 = pcVar12 + 1;
    uVar8 = FUN_003e7440(param_1,param_2,param_3,param_4,cVar4);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    cVar4 = *pcVar12;
  }
  if (0 < (int)uVar2) {
    iVar13 = uVar2 + 1;
    do {
      uVar8 = FUN_003e7440(param_1,param_2,param_3,param_4,0x30);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      iVar13 = iVar13 + -1;
    } while (1 < iVar13);
  }
  do {
    if ((int)uVar15 < 1) {
      if (-1 < (int)uVar14) {
        return 1;
      }
      do {
        uVar8 = FUN_003e7440(param_1,param_2,param_3,param_4,0x20);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        bVar6 = uVar14 != 0xffffffff;
        uVar14 = uVar14 + 1;
      } while (bVar6);
      return 1;
    }
    uVar8 = FUN_003e7440(param_1,param_2,param_3,param_4,local_7c[(int)uVar15 - 1]);
    uVar15 = uVar15 - 1;
  } while ((int)uVar8 != 0);
  return uVar8;
}


