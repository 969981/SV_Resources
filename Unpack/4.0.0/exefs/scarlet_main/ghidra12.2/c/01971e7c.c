/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01971e7c; name: FUN_01971e7c
 */


void FUN_01971e7c(int *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int local_18 [2];
  
  lVar7 = *param_3;
  lVar6 = param_3[2];
  lVar1 = lVar6 + 1;
  bVar2 = *(byte *)(lVar7 + lVar6);
  uVar5 = (ulong)bVar2;
  param_3[2] = lVar1;
  if (0x83 < uVar5) {
    iVar4 = 1;
    goto LAB_01971edc;
  }
  switch(bVar2) {
  case 0x80:
    uVar5 = (ulong)*(byte *)(lVar7 + lVar1);
    lVar6 = lVar6 + 2;
    break;
  case 0x81:
    uVar5 = (ulong)*(ushort *)(lVar7 + lVar1);
    lVar6 = lVar6 + 3;
    break;
  case 0x82:
    uVar5 = (ulong)*(uint *)(lVar7 + lVar1);
    lVar6 = lVar6 + 5;
    break;
  case 0x83:
    uVar5 = *(ulong *)(lVar7 + lVar1);
    lVar6 = lVar6 + 9;
    break;
  default:
    goto switchD_01971ec4_default;
  }
  param_3[2] = lVar6;
switchD_01971ec4_default:
  if (uVar5 != 6) {
    iVar4 = 5;
LAB_01971edc:
    *param_1 = iVar4;
    return;
  }
  FUN_01971fb8(local_18);
  if (local_18[0] != 0) {
    *param_1 = local_18[0];
    return;
  }
  lVar7 = *param_3;
  lVar6 = param_3[2];
  lVar1 = lVar6 + 1;
  bVar2 = *(byte *)(lVar7 + lVar6);
  param_3[2] = lVar1;
  if (0x81 < bVar2) {
    *param_1 = 1;
    return;
  }
  if (bVar2 == 0x80) {
    uVar3 = (ushort)*(byte *)(lVar7 + lVar1);
    lVar6 = lVar6 + 2;
  }
  else {
    if (bVar2 != 0x81) {
      *(ushort *)(param_2 + 0x8c) = (ushort)bVar2;
      goto LAB_01971f6c;
    }
    uVar3 = *(ushort *)(lVar7 + lVar1);
    lVar6 = lVar6 + 3;
  }
  param_3[2] = lVar6;
  *(ushort *)(param_2 + 0x8c) = uVar3;
LAB_01971f6c:
  *param_1 = 0;
  return;
}


