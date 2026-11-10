/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec84c0; name: FUN_01ec84c0
 */


void FUN_01ec84c0(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int local_18 [2];
  
  lVar5 = *param_3;
  lVar3 = param_3[2];
  lVar4 = lVar3 + 1;
  bVar1 = *(byte *)(lVar5 + lVar3);
  uVar2 = (ulong)bVar1;
  param_3[2] = lVar4;
  if (uVar2 < 0x84) {
    switch(bVar1) {
    case 0x80:
      uVar2 = (ulong)*(byte *)(lVar5 + lVar4);
      lVar3 = lVar3 + 2;
      break;
    case 0x81:
      uVar2 = (ulong)*(ushort *)(lVar5 + lVar4);
      lVar3 = lVar3 + 3;
      break;
    case 0x82:
      uVar2 = (ulong)*(uint *)(lVar5 + lVar4);
      lVar3 = lVar3 + 5;
      break;
    case 0x83:
      uVar2 = *(ulong *)(lVar5 + lVar4);
      lVar3 = lVar3 + 9;
      break;
    default:
      goto switchD_01ec8558_default;
    }
    param_3[2] = lVar3;
switchD_01ec8558_default:
    if (uVar2 != 4) {
      local_18[0] = 5;
      goto LAB_01ec8530;
    }
    FUN_01ec8660(local_18,param_2,param_3);
    if (local_18[0] != 0) goto LAB_01ec8530;
    lVar4 = param_3[2];
    bVar1 = *(byte *)(*param_3 + lVar4);
    param_3[2] = lVar4 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(*param_3 + lVar4 + 1);
        param_3[2] = lVar4 + 2;
      }
      *(byte *)(param_2 + 4) = bVar1;
      lVar5 = *param_3;
      lVar3 = param_3[2];
      lVar4 = lVar3 + 1;
      bVar1 = *(byte *)(lVar5 + lVar3);
      param_3[2] = lVar4;
      if ((ulong)bVar1 < 0x84) {
        switch(bVar1) {
        case 0x80:
          uVar2 = (ulong)*(byte *)(lVar5 + lVar4);
          lVar3 = lVar3 + 2;
          break;
        case 0x81:
          uVar2 = (ulong)*(ushort *)(lVar5 + lVar4);
          lVar3 = lVar3 + 3;
          break;
        case 0x82:
          uVar2 = (ulong)*(uint *)(lVar5 + lVar4);
          lVar3 = lVar3 + 5;
          break;
        case 0x83:
          uVar2 = *(ulong *)(lVar5 + lVar4);
          lVar3 = lVar3 + 9;
          break;
        default:
          local_18[0] = 0;
          *(ulong *)(param_2 + 8) = (ulong)bVar1;
          goto LAB_01ec8530;
        }
        local_18[0] = 0;
        param_3[2] = lVar3;
        *(ulong *)(param_2 + 8) = uVar2;
        goto LAB_01ec8530;
      }
    }
  }
  local_18[0] = 1;
LAB_01ec8530:
  *param_1 = local_18[0];
  return;
}


