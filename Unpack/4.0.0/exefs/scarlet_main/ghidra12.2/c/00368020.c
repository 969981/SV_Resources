/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00368020; name: FUN_00368020
 */


bool FUN_00368020(long *param_1,long *param_2)

{
  size_t sVar1;
  int iVar2;
  void *__s1;
  void *__s2;
  size_t __n;
  long lVar3;
  long lVar4;
  long local_50;
  ulong uStack_48;
  void *local_40;
  long lStack_38;
  long local_30;
  ulong uStack_28;
  void *local_20;
  long lStack_18;
  
  lVar3 = *param_1;
  if (((lVar3 == 0) || (lVar4 = *param_2, lVar4 == 0)) ||
     (*(uint *)(lVar3 + 8) != *(uint *)(lVar4 + 8))) {
    uStack_28 = param_1[1];
    local_30 = *param_1;
    lStack_18 = param_1[3];
    local_20 = (void *)param_1[2];
    uStack_48 = param_2[1];
    local_50 = *param_2;
    lStack_38 = param_2[3];
    local_40 = (void *)param_2[2];
    __n = uStack_28 & 0xff;
    if (local_30 != 0) {
      __n = uStack_28;
    }
    sVar1 = uStack_48 & 0xff;
    if (local_50 != 0) {
      sVar1 = uStack_48;
    }
    if (__n != sVar1) {
      return false;
    }
    if (local_30 == 0) {
      if ((uStack_28 & 0xff) == 0) {
        return true;
      }
      __s1 = (void *)(((ulong)&local_30 | 8) + 1);
    }
    else {
      if (uStack_28 == 0) {
        return true;
      }
      __s1 = local_20;
    }
    __s2 = local_40;
    if (local_50 == 0) {
      __s2 = (void *)(((ulong)&local_50 | 8) + 1);
    }
  }
  else {
    if (*(uint *)(lVar3 + 8) < 2) {
      return lVar3 == lVar4;
    }
    __n = param_1[1];
    if (__n != param_2[1]) {
      return false;
    }
    if (__n == 0) {
      return true;
    }
    __s1 = (void *)param_1[2];
    __s2 = (void *)param_2[2];
  }
  iVar2 = memcmp(__s1,__s2,__n);
  return iVar2 == 0;
}


