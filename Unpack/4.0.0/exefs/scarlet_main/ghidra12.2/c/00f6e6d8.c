/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6e6d8; name: FUN_00f6e6d8
 */


void FUN_00f6e6d8(undefined4 *param_1,byte *param_2,long *param_3)

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
    goto LAB_00f6e738;
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
    goto switchD_00f6e720_default;
  }
  param_3[2] = lVar4;
switchD_00f6e720_default:
  if (uVar3 != 2) {
    uVar2 = 5;
LAB_00f6e738:
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
    lVar5 = param_3[2];
    bVar1 = *(byte *)(*param_3 + lVar5);
    param_3[2] = lVar5 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(*param_3 + lVar5 + 1);
        param_3[2] = lVar5 + 2;
      }
      uVar2 = 0;
      param_2[1] = bVar1;
      goto LAB_00f6e7b8;
    }
  }
  uVar2 = 1;
LAB_00f6e7b8:
  *param_1 = uVar2;
  return;
}


