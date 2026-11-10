/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb931c; name: FUN_01eb931c
 */


void FUN_01eb931c(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_3;
  lVar4 = param_3[2];
  lVar5 = lVar4 + 1;
  bVar1 = *(byte *)(lVar6 + lVar4);
  uVar3 = (ulong)bVar1;
  param_3[2] = lVar5;
  if (0x83 < uVar3) {
    uVar2 = 1;
    goto LAB_01eb9354;
  }
  switch(bVar1) {
  case 0x80:
    uVar3 = (ulong)*(byte *)(lVar6 + lVar5);
    lVar4 = lVar4 + 2;
    break;
  case 0x81:
    uVar3 = (ulong)*(ushort *)(lVar6 + lVar5);
    lVar4 = lVar4 + 3;
    break;
  case 0x82:
    uVar3 = (ulong)*(uint *)(lVar6 + lVar5);
    lVar4 = lVar4 + 5;
    break;
  case 0x83:
    uVar3 = *(ulong *)(lVar6 + lVar5);
    lVar4 = lVar4 + 9;
    break;
  default:
    goto switchD_01eb9370_default;
  }
  param_3[2] = lVar4;
switchD_01eb9370_default:
  if (uVar3 == 1) {
    lVar5 = param_3[2];
    bVar1 = *(byte *)(*param_3 + lVar5);
    param_3[2] = lVar5 + 1;
    if (((bVar1 == 0x84) || (-1 < (char)bVar1)) || (0xbf < bVar1)) {
      if (bVar1 == 0x84) {
        bVar1 = *(byte *)(*param_3 + lVar5 + 1);
        param_3[2] = lVar5 + 2;
      }
      uVar2 = 0;
      *param_2 = bVar1;
    }
    else {
      uVar2 = 1;
    }
    *param_1 = uVar2;
    return;
  }
  uVar2 = 5;
LAB_01eb9354:
  *param_1 = uVar2;
  return;
}


