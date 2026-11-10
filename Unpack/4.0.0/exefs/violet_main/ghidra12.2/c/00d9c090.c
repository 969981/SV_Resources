/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d9c090; name: FUN_00d9c090
 */


int FUN_00d9c090(long param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x36c);
  bVar3 = 0;
  if (2 < uVar2) {
    bVar3 = 5;
  }
  if (bVar3 == param_2) {
    if ((param_3 & 0xff) == 0) {
      return 0;
    }
    param_3 = param_3 - 1;
  }
  uVar1 = (uint)param_2;
  uVar6 = 5;
  uVar5 = (uint)*(byte *)(*(long *)(param_1 + 8) + 0x370);
  if (uVar2 == 2) {
    uVar6 = 5;
    if (uVar5 != 0) {
      uVar6 = 2;
    }
  }
  else if ((uVar2 == 0) || (uVar2 == 1)) {
    uVar6 = 1;
  }
  if (uVar6 == uVar1) {
    if ((param_3 & 0xff) == 0) {
      return 1;
    }
    param_3 = param_3 - 1;
  }
  uVar6 = 5;
  if (uVar2 == 2) {
    uVar6 = 5;
    if (1 < uVar5) {
      uVar6 = 3;
    }
  }
  else if (uVar2 == 1) {
    if (uVar5 - 1 < 5) {
      uVar6 = *(uint *)(&DAT_03d69d34 + (long)(char)(uVar5 - 1) * 4);
    }
    else {
      uVar6 = 0;
    }
  }
  if (uVar6 == uVar1) {
    if ((param_3 & 0xff) == 0) {
      return 2;
    }
    param_3 = param_3 - 1;
  }
  if (uVar2 == 2) {
    uVar6 = 4;
    if (uVar5 < 3) {
      uVar6 = 5;
    }
  }
  else {
    uVar6 = 5;
    if (uVar2 == 1) {
      if (uVar5 - 1 < 5) {
        uVar6 = *(uint *)(&DAT_03d69d48 + (long)(char)(uVar5 - 1) * 4);
      }
      else {
        uVar6 = 1;
      }
    }
  }
  if (uVar6 == uVar1) {
    if ((param_3 & 0xff) == 0) {
      return 3;
    }
    param_3 = param_3 - 1;
  }
  uVar6 = 5;
  if (uVar2 == 2) {
    uVar6 = 1;
  }
  if (uVar6 == uVar1) {
    if ((param_3 & 0xff) < 4) {
      return param_3 + 4;
    }
    if ((param_3 & 0xff) == 4) {
      return 8;
    }
    param_3 = param_3 - 5;
  }
  iVar4 = 9;
  if ((param_3 & 0xff) != 0 || uVar6 != uVar1) {
    iVar4 = 10;
  }
  return iVar4;
}


