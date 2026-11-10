/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049ddc0; name: FUN_0049ddc0
 */


void * FUN_0049ddc0(void *param_1,ulong param_2)

{
  ThreadType *pTVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *__dest;
  
  nn::os::LockMutex((MutexType *)&DAT_047f44a0);
  if (DAT_047f4470 != (HeapHead *)0x0) {
    pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
    uVar2 = nn::os::GetThreadId(pTVar1);
    if (DAT_047f4490 != (undefined8 *)0x0) {
      puVar4 = &DAT_047f4490;
      puVar3 = DAT_047f4490;
      do {
        if ((ulong)puVar3[4] >= uVar2) {
          puVar4 = puVar3;
        }
        puVar3 = (undefined8 *)puVar3[(ulong)puVar3[4] < uVar2];
      } while (puVar3 != (undefined8 *)0x0);
      if (((undefined8 **)puVar4 != &DAT_047f4490) && ((ulong)puVar4[4] <= uVar2)) {
        __dest = (void *)0x0;
        if ((param_1 < DAT_047f4478) || ((void *)((long)DAT_047f4478 + 0xf0000U) <= param_1))
        goto LAB_0049dec0;
        nn::os::LockMutex((MutexType *)&DAT_047f44a0);
        if (DAT_047f4470 != (HeapHead *)0x0) {
          pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
          uVar2 = nn::os::GetThreadId(pTVar1);
          if (DAT_047f4490 != (undefined8 *)0x0) {
            puVar4 = &DAT_047f4490;
            puVar3 = DAT_047f4490;
            do {
              if ((ulong)puVar3[4] >= uVar2) {
                puVar4 = puVar3;
              }
              puVar3 = (undefined8 *)puVar3[(ulong)puVar3[4] < uVar2];
            } while (puVar3 != (undefined8 *)0x0);
            if (((undefined8 **)puVar4 != &DAT_047f4490) && ((ulong)puVar4[4] <= uVar2)) {
              __dest = (void *)nn::lmem::AllocateFromExpHeap(DAT_047f4470,param_2);
              nn::os::UnlockMutex((MutexType *)&DAT_047f44a0);
              if (__dest != (void *)0x0) {
                memcpy(__dest,param_1,param_2);
                FUN_0049dcf0(param_1);
              }
              goto LAB_0049dec0;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)&DAT_047f44a0);
      }
    }
  }
  __dest = (void *)0x0;
LAB_0049dec0:
  nn::os::UnlockMutex((MutexType *)&DAT_047f44a0);
  return __dest;
}


