/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03349ec0; name: FUN_03349ec0
 */


uint * FUN_03349ec0(long *param_1,ulong *param_2)

{
  uint *puVar1;
  byte *__s2;
  uint uVar2;
  int iVar3;
  char *__s1;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  
  __s2 = (byte *)(*param_2 & 0xfffffffffffffffe);
  if (__s2 == (byte *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*__s2;
    uVar6 = 0x811c9dc5;
    if (*__s2 != 0) {
      pbVar4 = __s2;
      do {
        pbVar4 = pbVar4 + 1;
        uVar6 = (uVar6 ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar4;
      } while (uVar5 != 0);
    }
  }
  uVar2 = *(uint *)(param_1 + 3);
  uVar8 = (ulong)(uVar2 & uVar6);
  lVar7 = param_1[2];
  uVar5 = *(uint *)(lVar7 + uVar8 * 8 + 4);
  if (-1 < (int)uVar5) {
    do {
      puVar1 = (uint *)(lVar7 + uVar8 * 8);
      if (*puVar1 == uVar6) {
        __s1 = (char *)(*(ulong *)(*param_1 + (ulong)uVar5 * 0x18) & 0xfffffffffffffffe);
        if ((__s2 == (byte *)0x0) || (__s1 == (char *)0x0)) {
          iVar3 = -(uint)(__s2 != (byte *)0x0);
          if (__s1 != (char *)0x0) goto LAB_03349f8c;
        }
        else {
          iVar3 = strcmp(__s1,(char *)__s2);
        }
        if (iVar3 == 0) {
          return puVar1;
        }
      }
LAB_03349f8c:
      uVar8 = uVar8 + 1 & (long)(int)uVar2;
      uVar5 = *(uint *)(lVar7 + uVar8 * 8 + 4);
    } while (-1 < (int)uVar5);
  }
  return (uint *)0x0;
}


