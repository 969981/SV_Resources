/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197226c; name: FUN_0197226c
 */


void FUN_0197226c(undefined4 *param_1,void *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *param_3;
  lVar6 = param_3[2];
  lVar1 = lVar6 + 1;
  bVar2 = *(byte *)(lVar4 + lVar6);
  param_3[2] = lVar1;
  if (0x83 < bVar2) {
    uVar3 = 1;
    goto LAB_019722a8;
  }
  switch(bVar2) {
  case 0x80:
    uVar5 = (ulong)*(byte *)(lVar4 + lVar1);
    lVar6 = lVar6 + 2;
    break;
  case 0x81:
    uVar5 = (ulong)*(ushort *)(lVar4 + lVar1);
    lVar6 = lVar6 + 3;
    break;
  case 0x82:
    uVar5 = (ulong)*(uint *)(lVar4 + lVar1);
    lVar6 = lVar6 + 5;
    break;
  case 0x83:
    uVar5 = *(ulong *)(lVar4 + lVar1);
    lVar6 = lVar6 + 9;
    break;
  default:
    goto switchD_019722d0_default;
  }
  param_3[2] = lVar6;
  if (uVar5 == 0x80) {
    memcpy(param_2,(void *)(lVar4 + lVar6),0x80);
    uVar3 = 0;
    param_3[2] = param_3[2] + 0x80;
  }
  else {
switchD_019722d0_default:
    uVar3 = 4;
  }
LAB_019722a8:
  *param_1 = uVar3;
  return;
}


