/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e63650; name: FUN_01e63650
 */


void FUN_01e63650(int *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int local_18 [2];
  
  FUN_01e63724(local_18);
  if (local_18[0] != 0) {
    *param_1 = local_18[0];
    return;
  }
  lVar4 = *param_3;
  lVar3 = param_3[2];
  lVar1 = lVar3 + 1;
  bVar2 = *(byte *)(lVar4 + lVar3);
  param_3[2] = lVar1;
  if (0x83 < (ulong)bVar2) {
    *param_1 = 1;
    return;
  }
  switch(bVar2) {
  case 0x80:
    uVar5 = (ulong)*(byte *)(lVar4 + lVar1);
    lVar3 = lVar3 + 2;
    break;
  case 0x81:
    uVar5 = (ulong)*(ushort *)(lVar4 + lVar1);
    lVar3 = lVar3 + 3;
    break;
  case 0x82:
    uVar5 = (ulong)*(uint *)(lVar4 + lVar1);
    lVar3 = lVar3 + 5;
    break;
  case 0x83:
    uVar5 = *(ulong *)(lVar4 + lVar1);
    lVar3 = lVar3 + 9;
    break;
  default:
    *(ulong *)(param_2 + 0x18) = (ulong)bVar2;
    goto LAB_01e636c0;
  }
  param_3[2] = lVar3;
  *(ulong *)(param_2 + 0x18) = uVar5;
LAB_01e636c0:
  *param_1 = 0;
  return;
}


