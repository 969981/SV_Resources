/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01496e8c; name: FUN_01496e8c
 */


undefined8 FUN_01496e8c(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 0x3a1) = 1;
  if (*(long *)(param_1 + 0x130) != 0) {
    if (((*PTR_DAT_047d92e0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d92e0), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d94d8,PTR_DAT_047d92e8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d92e0);
    }
    lVar3 = *(long *)PTR_DAT_047d92e8;
    *(long *)PTR_DAT_047d92f0 = lVar3;
    pMVar1 = (MutexType *)(*(long *)(lVar3 + 0x28) + 0x150);
    nn::os::LockMutex(pMVar1);
    lVar3 = *(long *)(param_1 + 0x130);
    if (*(char *)(lVar3 + 0xf8) == '\0') {
      lVar5 = *(long *)(lVar3 + 0x100);
      *(undefined1 *)(lVar3 + 0xf8) = 1;
      if (lVar5 != 0) {
        *(undefined4 *)(lVar3 + 0x10c) = *(undefined4 *)(lVar5 + 0x68);
        iVar2 = *(int *)(lVar5 + 0x68);
        lVar4 = (long)iVar2;
        if ((int)(*(uint *)(lVar5 + 0x6c) & 0x7fffffff) <= iVar2) {
          FUN_01496fa4(lVar5 + 0x60,PTR_PTR_047d1a50,lVar4 + 1);
          iVar2 = *(int *)(lVar5 + 0x68);
        }
        *(long *)(*(long *)(lVar5 + 0x60) + (long)iVar2 * 8) = lVar3;
        *(int *)(lVar5 + 0x68) = (int)(lVar4 + 1);
      }
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return 1;
}


