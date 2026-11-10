/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b17170; name: FUN_00b17170
 */


void FUN_00b17170(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int local_50 [2];
  int local_48 [2];
  int local_40 [2];
  int local_38 [2];
  int local_18 [2];
  
  lVar4 = *param_3;
  lVar7 = param_3[2];
  lVar5 = lVar7 + 1;
  bVar1 = *(byte *)(lVar4 + lVar7);
  uVar6 = (ulong)bVar1;
  param_3[2] = lVar5;
  if (0x83 < uVar6) {
    iVar3 = 1;
    goto LAB_00b173fc;
  }
  switch(bVar1) {
  case 0x80:
    uVar6 = (ulong)*(byte *)(lVar4 + lVar5);
    lVar5 = lVar7 + 2;
    break;
  case 0x81:
    uVar6 = (ulong)*(ushort *)(lVar4 + lVar5);
    lVar5 = lVar7 + 3;
    break;
  case 0x82:
    uVar6 = (ulong)*(uint *)(lVar4 + lVar5);
    lVar5 = lVar7 + 5;
    break;
  case 0x83:
    uVar6 = *(ulong *)(lVar4 + lVar5);
    lVar5 = lVar7 + 9;
    break;
  default:
    goto switchD_00b171cc_default;
  }
  param_3[2] = lVar5;
switchD_00b171cc_default:
  if (uVar6 != 0xb) {
    iVar3 = 5;
LAB_00b173fc:
    *param_1 = iVar3;
    return;
  }
  bVar1 = *(byte *)(lVar4 + lVar5);
  param_3[2] = lVar5 + 1;
  if (1 < bVar1) {
LAB_00b17404:
    iVar3 = 1;
    goto LAB_00b17434;
  }
  *(bool *)param_2 = bVar1 != 0;
  cVar2 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar2 != -0x47) goto LAB_00b17404;
  FUN_00b17518(local_18,param_2 + 4,param_3);
  iVar3 = local_18[0];
  if (local_18[0] != 0) goto LAB_00b17434;
  cVar2 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar2 != -0x47) {
    iVar3 = 1;
    goto LAB_00b17434;
  }
  FUN_00b17518(local_38,param_2 + 0x50,param_3);
  iVar3 = local_38[0];
  if (local_38[0] != 0) goto LAB_00b17434;
  cVar2 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar2 != -0x47) {
    iVar3 = 1;
    goto LAB_00b17434;
  }
  FUN_00b17518(local_40,param_2 + 0x9c,param_3);
  iVar3 = local_40[0];
  if (local_40[0] != 0) goto LAB_00b17434;
  lVar5 = *param_3;
  lVar4 = param_3[2];
  cVar2 = *(char *)(lVar5 + lVar4);
  param_3[2] = lVar4 + 1;
  if (cVar2 == -0x44) {
    bVar1 = *(byte *)(lVar5 + lVar4 + 1);
    uVar6 = (ulong)bVar1;
    lVar7 = lVar4 + 2;
    param_3[2] = lVar7;
    if (0x83 < uVar6) goto LAB_00b17468;
    switch(bVar1) {
    case 0x80:
      uVar6 = (ulong)*(byte *)(lVar5 + lVar7);
      lVar7 = lVar4 + 3;
      break;
    case 0x81:
      uVar6 = (ulong)*(ushort *)(lVar5 + lVar7);
      lVar7 = lVar4 + 4;
      break;
    case 0x82:
      uVar6 = (ulong)*(uint *)(lVar5 + lVar7);
      lVar7 = lVar4 + 6;
      break;
    case 0x83:
      uVar6 = *(ulong *)(lVar5 + lVar7);
      lVar7 = lVar4 + 10;
      break;
    default:
      goto switchD_00b172f0_default;
    }
    param_3[2] = lVar7;
switchD_00b172f0_default:
    if (uVar6 != 1) {
      iVar3 = 4;
      goto LAB_00b17434;
    }
    *(undefined1 *)(param_2 + 0xe8) = *(undefined1 *)(lVar5 + lVar7);
    lVar4 = param_3[2];
    lVar5 = lVar4 + 1;
    param_3[2] = lVar5;
    cVar2 = *(char *)(*param_3 + lVar5);
    param_3[2] = lVar4 + 2;
    if (cVar2 == -0x47) {
      FUN_00b17518(local_48,param_2 + 0xec,param_3);
      iVar3 = local_48[0];
      if (local_48[0] == 0) {
        cVar2 = *(char *)(*param_3 + param_3[2]);
        param_3[2] = param_3[2] + 1;
        if (cVar2 == -0x47) {
          FUN_00b17518(local_50,param_2 + 0x138,param_3);
          iVar3 = local_50[0];
          if (local_50[0] == 0) {
            lVar5 = param_3[2];
            bVar1 = *(byte *)(*param_3 + lVar5);
            param_3[2] = lVar5 + 1;
            if (((bVar1 == 0x84) || (-1 < (char)bVar1)) || (0xbf < bVar1)) {
              if (bVar1 == 0x84) {
                bVar1 = *(byte *)(*param_3 + lVar5 + 1);
                param_3[2] = lVar5 + 2;
              }
              *(byte *)(param_2 + 0x184) = bVar1;
              lVar5 = param_3[2];
              bVar1 = *(byte *)(*param_3 + lVar5);
              param_3[2] = lVar5 + 1;
              if (((bVar1 == 0x84) || (-1 < (char)bVar1)) || (0xbf < bVar1)) {
                if (bVar1 == 0x84) {
                  bVar1 = *(byte *)(*param_3 + lVar5 + 1);
                  param_3[2] = lVar5 + 2;
                }
                *(byte *)(param_2 + 0x185) = bVar1;
                FUN_019aed00(local_18,param_2 + 0x188,param_3);
                iVar3 = local_18[0];
                if (local_18[0] == 0) {
                  FUN_019aed00(param_1,param_2 + 0x18c,param_3);
                  return;
                }
                goto LAB_00b17434;
              }
            }
            iVar3 = 1;
          }
        }
        else {
          iVar3 = 1;
        }
      }
      goto LAB_00b17434;
    }
  }
LAB_00b17468:
  iVar3 = 1;
LAB_00b17434:
  *param_1 = iVar3;
  return;
}


