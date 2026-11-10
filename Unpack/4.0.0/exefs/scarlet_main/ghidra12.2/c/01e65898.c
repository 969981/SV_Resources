/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e65898; name: FUN_01e65898
 */


void FUN_01e65898(undefined4 *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_3;
  lVar5 = param_3[2];
  lVar1 = lVar5 + 1;
  bVar2 = *(byte *)(lVar6 + lVar5);
  uVar3 = (ulong)bVar2;
  param_3[2] = lVar1;
  if (0x83 < uVar3) {
    uVar4 = 1;
    goto LAB_01e658c8;
  }
  switch(bVar2) {
  case 0x80:
    uVar3 = (ulong)*(byte *)(lVar6 + lVar1);
    lVar5 = lVar5 + 2;
    break;
  case 0x81:
    uVar3 = (ulong)*(ushort *)(lVar6 + lVar1);
    lVar5 = lVar5 + 3;
    break;
  case 0x82:
    uVar3 = (ulong)*(uint *)(lVar6 + lVar1);
    lVar5 = lVar5 + 5;
    break;
  case 0x83:
    uVar3 = *(ulong *)(lVar6 + lVar1);
    lVar5 = lVar5 + 9;
    break;
  default:
    goto switchD_01e658e4_default;
  }
  param_3[2] = lVar5;
switchD_01e658e4_default:
  uVar4 = 0;
  *param_2 = uVar3;
LAB_01e658c8:
  *param_1 = uVar4;
  return;
}


