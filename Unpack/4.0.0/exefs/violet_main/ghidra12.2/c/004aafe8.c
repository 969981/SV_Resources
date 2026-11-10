/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004aafe8; name: FUN_004aafe8
 */


bool FUN_004aafe8(undefined8 param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *__s1;
  ulong __n;
  ulong uVar6;
  byte *__s2;
  byte *pbVar7;
  ulong uVar8;
  
  pbVar7 = *(byte **)(param_2 + 8);
  __n = *(ulong *)(pbVar7 + 8);
  bVar2 = *pbVar7;
  bVar3 = *param_3;
  uVar6 = (ulong)(bVar2 >> 1);
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = __n;
  }
  if ((bVar3 & 1) == 0) {
    uVar8 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar8 = *(ulong *)(param_3 + 8);
  }
  if (uVar1 < uVar8) {
    return false;
  }
  __s2 = *(byte **)(param_3 + 0x10);
  if ((bVar3 & 1) == 0) {
    __s2 = param_3 + 1;
  }
  if ((bVar2 & 1) == 0) {
    if (uVar8 == 0xffffffffffffffff) {
LAB_004ab0f4:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    if (uVar8 <= uVar6) {
      uVar6 = uVar8;
    }
    __s1 = pbVar7 + 1;
    __n = uVar6;
  }
  else {
    if (uVar8 == 0xffffffffffffffff) goto LAB_004ab0f4;
    __s1 = *(byte **)(pbVar7 + 0x10);
    if (uVar8 <= __n) {
      __n = uVar8;
    }
  }
  if (__n == 0) {
    if (uVar8 != 0) {
      return false;
    }
  }
  else {
    iVar5 = memcmp(__s1,__s2,__n);
    if (__n < uVar8) {
      return false;
    }
    if (iVar5 != 0) {
      return false;
    }
  }
  if ((bVar3 & 1) == 0) {
    uVar6 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_3 + 8);
  }
  if (uVar1 == uVar6) {
    bVar4 = true;
  }
  else {
    if ((bVar2 & 1) == 0) {
      pbVar7 = pbVar7 + 1;
    }
    else {
      pbVar7 = *(byte **)(pbVar7 + 0x10);
    }
    bVar4 = pbVar7[uVar6] == 0x2e;
  }
  return bVar4;
}


