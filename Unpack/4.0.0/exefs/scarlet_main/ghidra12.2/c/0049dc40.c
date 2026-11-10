/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049dc40; name: FUN_0049dc40
 */


undefined8 FUN_0049dc40(ulong param_1)

{
  ThreadType *pTVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
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
        uVar5 = nn::lmem::AllocateFromExpHeap(DAT_047f4470,param_1);
        goto LAB_0049dcb4;
      }
    }
  }
  uVar5 = 0;
LAB_0049dcb4:
  nn::os::UnlockMutex((MutexType *)&DAT_047f44a0);
  return uVar5;
}


