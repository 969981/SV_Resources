/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037ad30; name: FUN_0037ad30
 */


undefined8 FUN_0037ad30(long *param_1,long *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar5;
  byte *pbVar4;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  pbVar5 = (byte *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pbVar5 = (byte *)param_1[2];
  }
  uVar2 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar2 = param_1[1];
  }
  pbVar4 = pbVar5;
  if (uVar2 != 0) {
    uVar3 = uVar2;
    while (*pbVar4 == 0x20) {
      pbVar4 = pbVar4 + 1;
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        return 0;
      }
    }
  }
  pbVar1 = pbVar5 + uVar2;
  if (pbVar4 == pbVar1) {
    return 0;
  }
  uVar9 = (uint)*pbVar4;
  if (9 < *pbVar4 - 0x30) {
    return 0;
  }
  lVar6 = 0;
  do {
    if ((99999999 < lVar6) && ((lVar6 != 100000000 || (uVar9 - 0x30 != 0)))) {
      *param_2 = 0x7fffffffffffffff;
      return 1;
    }
    if (pbVar5 + (uVar2 - 1) == pbVar4) {
      return 0;
    }
    lVar6 = (ulong)(uVar9 - 0x30) + lVar6 * 10;
    uVar9 = (uint)pbVar4[1];
    pbVar4 = pbVar4 + 1;
  } while (uVar9 - 0x30 < 10);
  if (pbVar4 == pbVar1) {
    return 0;
  }
  while (*pbVar4 == 0x20) {
    pbVar4 = pbVar4 + 1;
    if (pbVar1 == pbVar4) {
      return 0;
    }
  }
  switch(*pbVar4) {
  case 0x48:
    lVar7 = 3600000;
    break;
  default:
    return 0;
  case 0x4d:
    lVar7 = 60000;
    break;
  case 0x53:
    lVar7 = 1000;
    break;
  case 0x6d:
    goto switchD_0037ae60_caseD_6d;
  case 0x6e:
    lVar7 = lVar6 / 1000000;
    lVar8 = 1000000;
    goto LAB_0037af08;
  case 0x75:
    lVar7 = lVar6 / 1000;
    lVar8 = 1000;
LAB_0037af08:
    if (lVar6 != lVar7 * lVar8) {
      lVar7 = lVar7 + 1;
    }
    *param_2 = lVar7;
    goto joined_r0x0037af20;
  }
  lVar6 = lVar6 * lVar7;
switchD_0037ae60_caseD_6d:
  *param_2 = lVar6;
joined_r0x0037af20:
  if (pbVar1 + -1 == pbVar4) {
    return 1;
  }
  pbVar5 = pbVar4 + 1;
  do {
    pbVar4 = pbVar5 + 1;
    if (*pbVar5 != 0x20) {
      return 0;
    }
    pbVar5 = pbVar4;
  } while (pbVar1 != pbVar4);
  return 1;
}


