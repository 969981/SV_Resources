/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bd4b4; name: FUN_019bd4b4
 */


void FUN_019bd4b4(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = *param_3;
  lVar6 = param_3[2];
  lVar4 = lVar6 + 1;
  bVar1 = *(byte *)(lVar3 + lVar6);
  uVar5 = (ulong)bVar1;
  param_3[2] = lVar4;
  if (uVar5 < 0x84) {
    switch(bVar1) {
    case 0x80:
      uVar5 = (ulong)*(byte *)(lVar3 + lVar4);
      lVar4 = lVar6 + 2;
      break;
    case 0x81:
      uVar5 = (ulong)*(ushort *)(lVar3 + lVar4);
      lVar4 = lVar6 + 3;
      break;
    case 0x82:
      uVar5 = (ulong)*(uint *)(lVar3 + lVar4);
      lVar4 = lVar6 + 5;
      break;
    case 0x83:
      uVar5 = *(ulong *)(lVar3 + lVar4);
      lVar4 = lVar6 + 9;
      break;
    default:
      goto switchD_019bd520_default;
    }
    param_3[2] = lVar4;
switchD_019bd520_default:
    if (uVar5 != 1) {
      uVar2 = 5;
      goto LAB_019bd504;
    }
    bVar1 = *(byte *)(lVar3 + lVar4);
    param_3[2] = lVar4 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(lVar3 + lVar4 + 1);
        param_3[2] = lVar4 + 2;
      }
      uVar2 = 0;
      *param_2 = bVar1;
      goto LAB_019bd504;
    }
  }
  uVar2 = 1;
LAB_019bd504:
  *param_1 = uVar2;
  return;
}


