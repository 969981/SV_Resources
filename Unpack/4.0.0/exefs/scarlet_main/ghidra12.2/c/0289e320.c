/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289e320; name: FUN_0289e320
 */


void FUN_0289e320(undefined4 *param_1,undefined4 *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = *param_3;
  lVar6 = param_3[2];
  lVar3 = lVar6 + 1;
  bVar1 = *(byte *)(lVar2 + lVar6);
  uVar5 = (ulong)bVar1;
  param_3[2] = lVar3;
  if (0x83 < uVar5) {
    uVar4 = 1;
    goto LAB_0289e370;
  }
  switch(bVar1) {
  case 0x80:
    uVar5 = (ulong)*(byte *)(lVar2 + lVar3);
    lVar3 = lVar6 + 2;
    break;
  case 0x81:
    uVar5 = (ulong)*(ushort *)(lVar2 + lVar3);
    lVar3 = lVar6 + 3;
    break;
  case 0x82:
    uVar5 = (ulong)*(uint *)(lVar2 + lVar3);
    lVar3 = lVar6 + 5;
    break;
  case 0x83:
    uVar5 = *(ulong *)(lVar2 + lVar3);
    lVar3 = lVar6 + 9;
    break;
  default:
    goto switchD_0289e38c_default;
  }
  param_3[2] = lVar3;
switchD_0289e38c_default:
  if (uVar5 == 4) {
    *param_2 = *(undefined4 *)(lVar2 + lVar3);
    uVar4 = 0;
    param_3[2] = param_3[2] + 4;
  }
  else {
    uVar4 = 4;
  }
LAB_0289e370:
  *param_1 = uVar4;
  return;
}


