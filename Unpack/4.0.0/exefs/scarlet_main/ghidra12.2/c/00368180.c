/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00368180; name: FUN_00368180
 */


int FUN_00368180(long *param_1,long *param_2)

{
  int iVar1;
  void *__s1;
  void *__s2;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar3 = (ulong *)(param_1 + 1);
  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar5 = (ulong)(byte)*puVar3;
    lVar6 = *param_2;
  }
  else {
    uVar5 = *puVar3;
    lVar6 = *param_2;
  }
  if (lVar6 == 0) {
    uVar2 = (uint)*(byte *)(param_2 + 1);
  }
  else {
    uVar2 = (uint)param_2[1];
  }
  iVar1 = (int)uVar5 - uVar2;
  if (iVar1 != 0) {
    return iVar1;
  }
  if (lVar4 == 0) {
    __s1 = (void *)((long)param_1 + 9);
  }
  else {
    __s1 = (void *)param_1[2];
  }
  if (lVar6 == 0) {
    __s2 = (void *)((long)param_2 + 9);
  }
  else {
    __s2 = (void *)param_2[2];
  }
  if (lVar4 == 0) {
    iVar1 = memcmp(__s1,__s2,uVar5 & 0xff);
    return iVar1;
  }
  iVar1 = memcmp(__s1,__s2,*puVar3);
  return iVar1;
}


