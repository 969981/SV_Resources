/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00500c20; name: FUN_00500c20
 */


bool FUN_00500c20(uint *param_1,uint *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  byte *__s1;
  byte *__s2;
  
  bVar4 = false;
  switch(param_1[6]) {
  case 1:
  case 3:
    uVar6 = *param_1;
    uVar7 = *param_2;
    goto LAB_00500c78;
  case 2:
  case 4:
    bVar4 = *(long *)param_1 == *(long *)param_2;
    break;
  case 7:
    uVar6 = (uint)(byte)*param_1;
    uVar7 = (uint)(byte)*param_2;
LAB_00500c78:
    bVar4 = uVar6 == uVar7;
    break;
  case 9:
    bVar2 = (byte)*param_1;
    uVar8 = (ulong)(bVar2 >> 1);
    __n = uVar8;
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 2);
    }
    bVar3 = (byte)*param_2;
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 2);
    }
    if (__n != sVar1) {
      return false;
    }
    __s1 = *(byte **)(param_1 + 4);
    if ((bVar2 & 1) == 0) {
      __s1 = (byte *)((long)param_1 + 1);
    }
    __s2 = *(byte **)(param_2 + 4);
    if ((bVar3 & 1) == 0) {
      __s2 = (byte *)((long)param_2 + 1);
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return true;
      }
      do {
        param_1 = (uint *)((long)param_1 + 1);
        if (*(byte *)param_1 != *__s2) {
          return false;
        }
        uVar8 = uVar8 - 1;
        __s2 = __s2 + 1;
      } while (uVar8 != 0);
      return true;
    }
    if (__n == 0) {
      return true;
    }
    iVar5 = memcmp(__s1,__s2,__n);
    bVar4 = iVar5 == 0;
  }
  return bVar4;
}


