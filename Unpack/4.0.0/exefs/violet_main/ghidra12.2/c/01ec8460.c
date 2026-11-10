/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec8460; name: FUN_01ec8460
 */


void FUN_01ec8460(undefined4 *param_1,ushort *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_3;
  lVar5 = param_3[2];
  lVar1 = lVar5 + 1;
  bVar2 = *(byte *)(lVar6 + lVar5);
  uVar3 = (ushort)bVar2;
  param_3[2] = lVar1;
  if (0x81 < bVar2) {
    uVar4 = 1;
    goto LAB_01ec8494;
  }
  if (bVar2 == 0x80) {
    uVar3 = (ushort)*(byte *)(lVar6 + lVar1);
    lVar5 = lVar5 + 2;
LAB_01ec84a4:
    param_3[2] = lVar5;
  }
  else if (bVar2 == 0x81) {
    uVar3 = *(ushort *)(lVar6 + lVar1);
    lVar5 = lVar5 + 3;
    goto LAB_01ec84a4;
  }
  uVar4 = 0;
  *param_2 = uVar3;
LAB_01ec8494:
  *param_1 = uVar4;
  return;
}


