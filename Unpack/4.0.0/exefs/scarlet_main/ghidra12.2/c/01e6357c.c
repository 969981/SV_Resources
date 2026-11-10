/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6357c; name: FUN_01e6357c
 */


void FUN_01e6357c(int *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int local_18 [2];
  
  FUN_01e63650(local_18);
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
    *(ulong *)(param_2 + 0x20) = (ulong)bVar2;
    goto LAB_01e635ec;
  }
  param_3[2] = lVar3;
  *(ulong *)(param_2 + 0x20) = uVar5;
LAB_01e635ec:
  *param_1 = 0;
  return;
}


