/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f69100; name: FUN_01f69100
 */


void FUN_01f69100(undefined4 *param_1,void *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = *param_3;
  lVar6 = param_3[2];
  cVar2 = *(char *)(lVar5 + lVar6);
  param_3[2] = lVar6 + 1;
  if (cVar2 != -0x44) {
LAB_01f69158:
    uVar4 = 1;
    goto LAB_01f6915c;
  }
  bVar3 = *(byte *)(lVar5 + lVar6 + 1);
  lVar1 = lVar6 + 2;
  param_3[2] = lVar1;
  if (0x83 < bVar3) goto LAB_01f69158;
  switch(bVar3) {
  case 0x80:
    param_3[2] = lVar6 + 3;
    goto switchD_01f69180_default;
  case 0x81:
    uVar7 = (ulong)*(ushort *)(lVar5 + lVar1);
    lVar6 = lVar6 + 4;
    break;
  case 0x82:
    uVar7 = (ulong)*(uint *)(lVar5 + lVar1);
    lVar6 = lVar6 + 6;
    break;
  case 0x83:
    uVar7 = *(ulong *)(lVar5 + lVar1);
    lVar6 = lVar6 + 10;
    break;
  default:
    goto switchD_01f69180_default;
  }
  param_3[2] = lVar6;
  if (uVar7 == 0x9f6) {
    memcpy(param_2,(void *)(lVar5 + lVar6),0x9f6);
    uVar4 = 0;
    param_3[2] = param_3[2] + 0x9f6;
  }
  else {
switchD_01f69180_default:
    uVar4 = 4;
  }
LAB_01f6915c:
  *param_1 = uVar4;
  return;
}


