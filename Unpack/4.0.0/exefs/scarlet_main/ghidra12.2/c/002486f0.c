/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002486f0; name: FUN_002486f0
 */


undefined8 FUN_002486f0(long param_1)

{
  long *plVar1;
  MutexType *pMVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 200);
  FUN_00247510(plVar1,2);
  FUN_00247a08(*(undefined8 *)(param_1 + 200));
  FUN_00248b48();
  lVar3 = *(long *)(param_1 + 200);
  if (*(int *)(lVar3 + 0x200) == 3) {
    FUN_027bf034(lVar3 + 0x938);
    lVar3 = *plVar1;
  }
  FUN_027bf1b4(lVar3 + 0x430);
  FUN_027bf1b4(lVar3 + 0x570);
  lVar3 = *(long *)(*plVar1 + 0x858);
  pMVar2 = (MutexType *)(lVar3 + 0x38);
  nn::os::LockMutex(pMVar2);
  nn::os::SignalEvent((EventType *)(lVar3 + 0x10));
  nn::os::UnlockMutex(pMVar2);
  return 1;
}


