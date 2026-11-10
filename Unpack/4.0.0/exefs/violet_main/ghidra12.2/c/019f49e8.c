/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019f49e8; name: FUN_019f49e8
 */


void FUN_019f49e8(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *param_3;
  lVar5 = param_3[2];
  lVar6 = lVar5 + 1;
  bVar1 = *(byte *)(lVar7 + lVar5);
  uVar4 = (ulong)bVar1;
  param_3[2] = lVar6;
  if (0x83 < uVar4) {
    uVar3 = 1;
    goto LAB_019f4a48;
  }
  switch(bVar1) {
  case 0x80:
    uVar4 = (ulong)*(byte *)(lVar7 + lVar6);
    lVar5 = lVar5 + 2;
    break;
  case 0x81:
    uVar4 = (ulong)*(ushort *)(lVar7 + lVar6);
    lVar5 = lVar5 + 3;
    break;
  case 0x82:
    uVar4 = (ulong)*(uint *)(lVar7 + lVar6);
    lVar5 = lVar5 + 5;
    break;
  case 0x83:
    uVar4 = *(ulong *)(lVar7 + lVar6);
    lVar5 = lVar5 + 9;
    break;
  default:
    goto switchD_019f4a30_default;
  }
  param_3[2] = lVar5;
switchD_019f4a30_default:
  if (uVar4 == 2) {
    lVar6 = param_3[2];
    bVar1 = *(byte *)(*param_3 + lVar6);
    param_3[2] = lVar6 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(*param_3 + lVar6 + 1);
        param_3[2] = lVar6 + 2;
      }
      *param_2 = bVar1;
      cVar2 = *(char *)(*param_3 + param_3[2]);
      param_3[2] = param_3[2] + 1;
      if (cVar2 == -0x44) {
        FUN_019721b4(param_2 + 1);
        return;
      }
    }
    *param_1 = 1;
    return;
  }
  uVar3 = 5;
LAB_019f4a48:
  *param_1 = uVar3;
  return;
}


