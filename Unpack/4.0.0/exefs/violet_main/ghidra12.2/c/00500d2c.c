/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00500d2c; name: FUN_00500d2c
 */


uint FUN_00500d2c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  byte *__s2;
  byte *__s1;
  
  switch((uint)param_1[3]) {
  case 1:
    return (uint)((int)(uint)*param_1 < (int)(uint)*param_2);
  case 2:
    return (uint)((long)*param_1 < (long)*param_2);
  case 3:
    uVar6 = (uint)*param_1;
    uVar7 = (uint)*param_2;
    break;
  case 4:
    bVar5 = *param_2 <= *param_1;
    goto LAB_00500dc8;
  default:
    return 0;
  case 7:
    uVar6 = (uint)(byte)*param_1;
    uVar7 = (uint)(byte)*param_2;
    break;
  case 9:
    bVar3 = (byte)*param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = param_2[1];
    }
    bVar4 = (byte)*param_1;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = param_1[1];
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = (byte *)param_1[2];
      if ((bVar4 & 1) == 0) {
        __s1 = (byte *)((long)param_1 + 1);
      }
      __s2 = (byte *)param_2[2];
      if ((bVar3 & 1) == 0) {
        __s2 = (byte *)((long)param_2 + 1);
      }
      uVar6 = memcmp(__s1,__s2,__n);
      if (uVar6 != 0) goto LAB_00500e40;
    }
    uVar6 = 0;
    if (uVar2 < uVar1) {
      uVar6 = 0xffffffff;
    }
LAB_00500e40:
    return uVar6 >> 0x1f;
  }
  bVar5 = uVar7 <= uVar6;
LAB_00500dc8:
  return (uint)!bVar5;
}


