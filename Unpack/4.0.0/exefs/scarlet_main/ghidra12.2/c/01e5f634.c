/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5f634; name: FUN_01e5f634
 */


void FUN_01e5f634(undefined8 *param_1,long param_2)

{
  char *__s;
  size_t sVar1;
  void *__dest;
  ulong __n;
  long *plVar2;
  undefined8 local_70;
  long *local_68;
  ulong uStack_60;
  undefined8 local_58;
  
  __s = (char *)FUN_01e5f910();
  if (__s == (char *)0x0) {
    __n = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    sVar1 = strlen(__s);
    plVar2 = *(long **)(param_2 + 0x40);
    __n = sVar1 + 1;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,__n & 0xffffffff,8);
    local_58 = 8;
    local_68 = plVar2;
    uStack_60 = __n & 0xffffffff;
    memcpy(__dest,__s,__n);
    *param_1 = __dest;
    param_1[1] = local_68;
    local_70 = 0;
    param_1[2] = uStack_60;
    param_1[3] = local_58;
    FUN_01e5f508(&local_70);
  }
  *(int *)(param_1 + 4) = (int)__n;
  return;
}


