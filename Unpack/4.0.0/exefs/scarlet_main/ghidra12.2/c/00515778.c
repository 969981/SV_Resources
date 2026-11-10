/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00515778; name: FUN_00515778
 */


byte * FUN_00515778(long param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  byte *__dest;
  byte *pbVar7;
  size_t __n;
  
  pbVar4 = *(byte **)(param_1 + 8);
  if ((*pbVar4 & 1) == 0) {
    bVar1 = *pbVar4 >> 1;
    uVar6 = (uint)bVar1;
    if (bVar1 < 0x80) {
LAB_005157d0:
      __dest = param_2 + 1;
      *param_2 = (byte)uVar6;
      bVar1 = *pbVar4;
      goto joined_r0x005157d8;
    }
  }
  else {
    uVar6 = (uint)*(undefined8 *)(pbVar4 + 8);
    if (uVar6 < 0x80) goto LAB_005157d0;
  }
  *param_2 = (byte)uVar6 | 0x80;
  if (uVar6 >> 0xe == 0) {
    param_2[1] = (byte)(uVar6 >> 7);
    __dest = param_2 + 2;
    bVar1 = *pbVar4;
  }
  else {
    __dest = param_2 + 2;
    uVar6 = uVar6 >> 7;
    do {
      pbVar7 = __dest;
      uVar2 = uVar6 >> 7;
      pbVar7[-1] = (byte)uVar6 | 0x80;
      __dest = pbVar7 + 1;
      uVar3 = uVar6 >> 0xe;
      uVar6 = uVar2;
    } while (uVar3 != 0);
    *pbVar7 = (byte)uVar2;
    bVar1 = *pbVar4;
  }
joined_r0x005157d8:
  if ((bVar1 & 1) == 0) {
    pbVar4 = pbVar4 + 1;
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(pbVar4 + 8);
    pbVar4 = *(byte **)(pbVar4 + 0x10);
  }
  __n = (size_t)(int)uVar5;
  if (*param_3 - (long)__dest < (long)__n) {
    pbVar4 = (byte *)FUN_0052c7dc(param_3,pbVar4,uVar5 & 0xffffffff,__dest);
    return pbVar4;
  }
  memcpy(__dest,pbVar4,__n);
  return __dest + __n;
}


