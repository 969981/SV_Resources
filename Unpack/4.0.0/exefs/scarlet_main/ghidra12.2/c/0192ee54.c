/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192ee54; name: FUN_0192ee54
 */


void FUN_0192ee54(undefined4 *param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_4;
  lVar5 = param_4[2];
  lVar1 = lVar5 + 1;
  bVar2 = *(byte *)(lVar6 + lVar5);
  uVar4 = (ulong)bVar2;
  param_4[2] = lVar1;
  if (0x83 < uVar4) {
    uVar3 = 1;
    goto LAB_0192eebc;
  }
  switch(bVar2) {
  case 0x80:
    uVar4 = (ulong)*(byte *)(lVar6 + lVar1);
    lVar5 = lVar5 + 2;
    break;
  case 0x81:
    uVar4 = (ulong)*(ushort *)(lVar6 + lVar1);
    lVar5 = lVar5 + 3;
    break;
  case 0x82:
    uVar4 = (ulong)*(uint *)(lVar6 + lVar1);
    lVar5 = lVar5 + 5;
    break;
  case 0x83:
    uVar4 = *(ulong *)(lVar6 + lVar1);
    lVar5 = lVar5 + 9;
    break;
  default:
    goto switchD_0192eea4_default;
  }
  param_4[2] = lVar5;
switchD_0192eea4_default:
  if (uVar4 != 1) {
    uVar3 = 5;
LAB_0192eebc:
    *param_1 = uVar3;
    return;
  }
  lVar6 = *param_4;
  lVar5 = param_4[2];
  lVar1 = lVar5 + 1;
  bVar2 = *(byte *)(lVar6 + lVar5);
  uVar4 = (ulong)bVar2;
  param_4[2] = lVar1;
  if (0x83 < uVar4) {
    uVar3 = 1;
    goto LAB_0192ef20;
  }
  switch(bVar2) {
  case 0x80:
    uVar4 = (ulong)*(byte *)(lVar6 + lVar1);
    lVar5 = lVar5 + 2;
    break;
  case 0x81:
    uVar4 = (ulong)*(ushort *)(lVar6 + lVar1);
    lVar5 = lVar5 + 3;
    break;
  case 0x82:
    uVar4 = (ulong)*(uint *)(lVar6 + lVar1);
    lVar5 = lVar5 + 5;
    break;
  case 0x83:
    uVar4 = *(ulong *)(lVar6 + lVar1);
    lVar5 = lVar5 + 9;
    break;
  default:
    goto switchD_0192ef3c_default;
  }
  param_4[2] = lVar5;
switchD_0192ef3c_default:
  uVar3 = 0;
  *param_3 = uVar4;
LAB_0192ef20:
  *param_1 = uVar3;
  return;
}


