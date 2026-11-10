/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0326f58c; name: FUN_0326f58c
 */


void FUN_0326f58c(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  MutexType *pMVar5;
  long *plVar6;
  void *__dest;
  void *__src;
  void *__src_00;
  long lVar7;
  undefined8 local_58;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e6108 + 0x10);
  param_1[1] = 0xffffffff;
  lVar7 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  plVar6 = param_1 + 6;
  *plVar6 = 0;
  param_1[4] = lVar7;
  param_1[5] = lVar2;
  param_1[7] = -0x8000000000000000;
  param_1[8] = 0;
  puVar4 = PTR_DAT_047d1a08;
  local_58 = 0x20;
  pMVar5 = (MutexType *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(pMVar5,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar5,true,0);
  param_1[9] = (long)pMVar5;
  __src = *(void **)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x38);
  lVar7 = param_1[7];
  iVar1 = (int)lVar7 + iVar3;
  if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x7fffffff) < iVar1) {
    FUN_0326fb2c(plVar6,PTR_PTR_047e61b0,(long)iVar1);
  }
  if (iVar3 != 0) {
    __dest = (void *)(*plVar6 + (long)(int)lVar7 * 0x40);
    lVar7 = (long)iVar3 * 0x40 + -0x40;
    __src_00 = __src;
    if (((uint)lVar7 >> 6 & 1) == 0) {
      memcpy(__dest,__src,0x40);
      __src_00 = (void *)((long)__src + 0x40);
      __dest = (void *)((long)__dest + 0x40);
    }
    if (lVar7 != 0) {
      do {
        memcpy(__dest,__src_00,0x40);
        memcpy((void *)((long)__dest + 0x40),(void *)((long)__src_00 + 0x40),0x40);
        __src_00 = (void *)((long)__src_00 + 0x80);
        __dest = (void *)((long)__dest + 0x80);
      } while (__src_00 != (void *)((long)__src + (long)iVar3 * 0x40));
    }
  }
  *(int *)(param_1 + 7) = iVar1;
  return;
}


