/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b17518; name: FUN_00b17518
 */


void FUN_00b17518(int *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int local_38 [2];
  int local_18 [2];
  
  lVar5 = *param_3;
  lVar8 = param_3[2];
  lVar6 = lVar8 + 1;
  bVar2 = *(byte *)(lVar5 + lVar8);
  uVar7 = (ulong)bVar2;
  param_3[2] = lVar6;
  if (0x83 < uVar7) {
    iVar4 = 1;
    goto LAB_00b175c4;
  }
  switch(bVar2) {
  case 0x80:
    uVar7 = (ulong)*(byte *)(lVar5 + lVar6);
    lVar6 = lVar8 + 2;
    break;
  case 0x81:
    uVar7 = (ulong)*(ushort *)(lVar5 + lVar6);
    lVar6 = lVar8 + 3;
    break;
  case 0x82:
    uVar7 = (ulong)*(uint *)(lVar5 + lVar6);
    lVar6 = lVar8 + 5;
    break;
  case 0x83:
    uVar7 = *(ulong *)(lVar5 + lVar6);
    lVar6 = lVar8 + 9;
    break;
  default:
    goto switchD_00b17574_default;
  }
  param_3[2] = lVar6;
switchD_00b17574_default:
  if (uVar7 == 4) {
    bVar2 = *(byte *)(lVar5 + lVar6);
    param_3[2] = lVar6 + 1;
    if ((((bVar2 & 0xfe) == 0x84) || (-1 < (char)bVar2)) || (0xbf < bVar2)) {
      FUN_01e94e08(local_18,bVar2,param_2,param_3);
      if (local_18[0] == 0) {
        lVar6 = param_3[2];
        cVar3 = *(char *)(*param_3 + lVar6);
        param_3[2] = lVar6 + 1;
        if (cVar3 == -0x78) {
          uVar1 = *(undefined4 *)(*param_3 + lVar6 + 1);
          param_3[2] = lVar6 + 5;
          *(undefined4 *)(param_2 + 4) = uVar1;
          FUN_01e643c8(local_38,param_2 + 8,param_3);
          local_18[0] = local_38[0];
          if (local_38[0] == 0) {
            FUN_01e643c8(param_1,param_2 + 0xc,param_3);
            return;
          }
        }
        else {
          local_18[0] = 1;
        }
      }
    }
    else {
      local_18[0] = 1;
    }
    *param_1 = local_18[0];
    return;
  }
  iVar4 = 5;
LAB_00b175c4:
  *param_1 = iVar4;
  return;
}


