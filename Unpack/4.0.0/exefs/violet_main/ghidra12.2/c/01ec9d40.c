/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec9d40; name: FUN_01ec9d40
 */


void FUN_01ec9d40(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  
  lVar7 = *param_3;
  lVar4 = param_3[2];
  lVar5 = lVar4 + 1;
  bVar1 = *(byte *)(lVar7 + lVar4);
  uVar3 = (ulong)bVar1;
  param_3[2] = lVar5;
  if (0x83 < uVar3) {
    uVar2 = 1;
    goto LAB_01ec9d78;
  }
  switch(bVar1) {
  case 0x80:
    uVar3 = (ulong)*(byte *)(lVar7 + lVar5);
    lVar4 = lVar4 + 2;
    break;
  case 0x81:
    uVar3 = (ulong)*(ushort *)(lVar7 + lVar5);
    lVar4 = lVar4 + 3;
    break;
  case 0x82:
    uVar3 = (ulong)*(uint *)(lVar7 + lVar5);
    lVar4 = lVar4 + 5;
    break;
  case 0x83:
    uVar3 = *(ulong *)(lVar7 + lVar5);
    lVar4 = lVar4 + 9;
    break;
  default:
    goto switchD_01ec9d94_default;
  }
  param_3[2] = lVar4;
switchD_01ec9d94_default:
  if (uVar3 != 2) {
    uVar2 = 5;
LAB_01ec9d78:
    *param_1 = uVar2;
    return;
  }
  lVar5 = param_3[2];
  bVar1 = *(byte *)(*param_3 + lVar5);
  param_3[2] = lVar5 + 1;
  if (bVar1 < 0x81) {
    if (bVar1 == 0x80) {
      bVar1 = *(byte *)(*param_3 + lVar5 + 1);
      param_3[2] = lVar5 + 2;
    }
    *param_2 = bVar1;
    lVar7 = *param_3;
    lVar4 = param_3[2];
    lVar5 = lVar4 + 1;
    bVar1 = *(byte *)(lVar7 + lVar4);
    param_3[2] = lVar5;
    if (bVar1 < 0x82) {
      if (bVar1 == 0x80) {
        uVar6 = (ushort)*(byte *)(lVar7 + lVar5);
        lVar4 = lVar4 + 2;
      }
      else {
        if (bVar1 != 0x81) {
          uVar2 = 0;
          *(ushort *)(param_2 + 2) = (ushort)bVar1;
          goto LAB_01ec9e34;
        }
        uVar6 = *(ushort *)(lVar7 + lVar5);
        lVar4 = lVar4 + 3;
      }
      uVar2 = 0;
      param_3[2] = lVar4;
      *(ushort *)(param_2 + 2) = uVar6;
      goto LAB_01ec9e34;
    }
  }
  uVar2 = 1;
LAB_01ec9e34:
  *param_1 = uVar2;
  return;
}


