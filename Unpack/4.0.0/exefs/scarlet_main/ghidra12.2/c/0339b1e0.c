/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0339b1e0; name: FUN_0339b1e0
 */


void FUN_0339b1e0(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  void *__dest;
  int iVar5;
  char *__s;
  void *local_38;
  
  iVar5 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if ((int)(*(uint *)(param_1 + 0xc) & 0x7fffffff) < iVar5) {
    FUN_031b108c(param_1,PTR_PTR_047d1a50,((long)param_3 - (long)param_2) * 0x20000000 >> 0x20);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  uVar2 = iVar5 + 1;
  uVar1 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) + (long)(int)uVar2;
  if (((((uint)((long)iVar3 << 1) < (uint)uVar1 && -2 < iVar5) && uVar1 >> 0x20 == 0) &&
      (-1 < iVar3)) && (((long)iVar3 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(param_1 + 0x10);
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    __s = (char *)*param_2;
    sVar4 = strlen(__s);
    sVar4 = (size_t)((int)sVar4 + 1);
    __dest = (void *)(**(code **)(*param_4 + 0x18))(param_4,sVar4);
    memcpy(__dest,__s,sVar4);
    local_38 = __dest;
    FUN_033a5208(param_1,&local_38);
  }
  return;
}


