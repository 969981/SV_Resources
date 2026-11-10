/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bf1b4; name: FUN_027bf1b4
 */


void FUN_027bf1b4(long param_1)

{
  ThreadType *pTVar1;
  ThreadType *pTVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xc0))) {
    FUN_006c5a1c(*(undefined8 *)(param_1 + 0x88));
    pTVar2 = *(ThreadType **)(param_1 + 0xa0);
    for (pTVar1 = *(ThreadType **)(param_1 + 0x98); pTVar1 != pTVar2; pTVar1 = pTVar1 + 0x1c0) {
      nn::os::WaitThread(pTVar1);
      nn::os::DestroyThread(pTVar1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0xb8);
    puVar3 = *(undefined8 **)(param_1 + 0xc0);
    if (puVar5 != puVar3) {
      do {
        puVar4 = puVar5 + 1;
        (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
                  (*(long **)(param_1 + 0x80),*puVar5,*(undefined8 *)(param_1 + 0x10),0x1000);
        puVar5 = puVar4;
      } while (puVar3 != puVar4);
      puVar5 = *(undefined8 **)(param_1 + 0xb8);
    }
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 **)(param_1 + 0xc0) = puVar5;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
  return;
}


