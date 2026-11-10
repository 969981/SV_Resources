/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb949c; name: FUN_01eb949c
 */


void * FUN_01eb949c(undefined4 *param_1,void *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  void *pvVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  cVar2 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar2 != -0x44) {
    *param_1 = 1;
    return param_2;
  }
  pvVar4 = (void *)0xbc;
  lVar6 = *param_3;
  lVar7 = param_3[2];
  lVar1 = lVar7 + 1;
  bVar3 = *(byte *)(lVar6 + lVar7);
  param_3[2] = lVar1;
  if (0x83 < bVar3) {
    uVar5 = 1;
    goto LAB_01eb9510;
  }
  switch(bVar3) {
  case 0x80:
    param_3[2] = lVar7 + 2;
    goto switchD_01eb9538_default;
  case 0x81:
    uVar8 = (ulong)*(ushort *)(lVar6 + lVar1);
    lVar7 = lVar7 + 3;
    break;
  case 0x82:
    uVar8 = (ulong)*(uint *)(lVar6 + lVar1);
    lVar7 = lVar7 + 5;
    break;
  case 0x83:
    uVar8 = *(ulong *)(lVar6 + lVar1);
    lVar7 = lVar7 + 9;
    break;
  default:
    goto switchD_01eb9538_default;
  }
  param_3[2] = lVar7;
  if (uVar8 == 0x158) {
    pvVar4 = memcpy(param_2,(void *)(lVar6 + lVar7),0x158);
    uVar5 = 0;
    param_3[2] = param_3[2] + 0x158;
  }
  else {
switchD_01eb9538_default:
    uVar5 = 4;
  }
LAB_01eb9510:
  *param_1 = uVar5;
  return pvVar4;
}


