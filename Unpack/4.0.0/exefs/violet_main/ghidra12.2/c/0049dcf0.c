/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049dcf0; name: FUN_0049dcf0
 */


undefined8 FUN_0049dcf0(void *param_1)

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
        uVar5 = 0;
        if ((DAT_047f4478 <= param_1) && (param_1 < (void *)((long)DAT_047f4478 + 0xf0000U))) {
          nn::lmem::FreeToExpHeap(DAT_047f4470,param_1);
          uVar5 = 1;
        }
        goto LAB_0049dd64;
      }
    }
  }
  uVar5 = 0;
LAB_0049dd64:
  nn::os::UnlockMutex((MutexType *)&DAT_047f44a0);
  return uVar5;
}


