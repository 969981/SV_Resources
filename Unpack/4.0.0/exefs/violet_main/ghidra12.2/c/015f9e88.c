/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f9e88; name: FUN_015f9e88
 */


byte * FUN_015f9e88(undefined4 *param_1,byte *param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong __n;
  
  cVar1 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar1 != -0x43) {
    *param_1 = 1;
    return param_2;
  }
  pbVar3 = (byte *)0xbd;
  lVar7 = *param_3;
  lVar6 = param_3[2];
  lVar5 = lVar6 + 1;
  bVar2 = *(byte *)(lVar7 + lVar6);
  __n = (ulong)bVar2;
  param_3[2] = lVar5;
  if (0x83 < __n) {
    uVar4 = 1;
    goto LAB_015f9f54;
  }
  switch(bVar2) {
  case 0x80:
    __n = (ulong)*(byte *)(lVar7 + lVar5);
    lVar5 = lVar6 + 2;
    break;
  case 0x81:
    __n = (ulong)*(ushort *)(lVar7 + lVar5);
    lVar5 = lVar6 + 3;
    break;
  case 0x82:
    __n = (ulong)*(uint *)(lVar7 + lVar5);
    lVar5 = lVar6 + 5;
    break;
  case 0x83:
    __n = *(ulong *)(lVar7 + lVar5);
    lVar5 = lVar6 + 9;
    break;
  default:
    goto switchD_015f9f7c_default;
  }
  param_3[2] = lVar5;
switchD_015f9f7c_default:
  if ((ulong)(param_3[1] - lVar5) < __n) {
    uVar4 = 0xc;
  }
  else {
    std::string::resize((ulong)param_2,(char)__n);
    if ((*param_2 & 1) == 0) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
    }
    pbVar3 = memcpy(param_2,(void *)(*param_3 + param_3[2]),__n);
    uVar4 = 0;
    param_3[2] = param_3[2] + __n;
  }
LAB_015f9f54:
  *param_1 = uVar4;
  return pbVar3;
}


