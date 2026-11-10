/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03340498; name: FUN_03340498
 */


void FUN_03340498(long *param_1,ulong *param_2,undefined4 *param_3)

{
  ulong *puVar1;
  int iVar2;
  char *__s;
  undefined *puVar3;
  uint uVar4;
  size_t sVar5;
  void *__dest;
  long lVar6;
  
  uVar4 = FUN_03341604();
  if (*(uint *)(param_1 + 1) == uVar4) {
    iVar2 = uVar4 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar4) {
      FUN_0334108c(param_1,PTR_PTR_047d1a50,(long)iVar2);
      uVar4 = *(uint *)(param_1 + 1);
    }
    lVar6 = *param_1;
    puVar1 = (ulong *)(lVar6 + (long)(int)uVar4 * 0x10);
    *puVar1 = 0;
    puVar3 = PTR_PTR_047d1a50;
    __s = (char *)(*param_2 & 0xfffffffffffffffe);
    if (__s != (char *)0x0) {
      sVar5 = strlen(__s);
      sVar5 = (size_t)((int)sVar5 + 1);
      __dest = (void *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,sVar5);
      memcpy(__dest,__s,sVar5);
      *puVar1 = (ulong)__dest | 1;
    }
    *(undefined4 *)(lVar6 + (long)(int)uVar4 * 0x10 + 8) = *param_3;
    *(int *)(param_1 + 1) = iVar2;
  }
  else {
    *(undefined4 *)(*param_1 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8) = *param_3;
  }
  return;
}


