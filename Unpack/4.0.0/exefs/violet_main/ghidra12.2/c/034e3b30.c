/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e3b30; name: FUN_034e3b30
 */


void FUN_034e3b30(long param_1,int param_2,int param_3)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR_DAT_047e7050;
  pMVar1 = (MutexType *)(lVar6 + 0x68);
  nn::os::LockMutex(pMVar1);
  puVar2 = (undefined8 *)(lVar6 + 0x88);
  if (param_3 != 1) {
    puVar2 = (undefined8 *)(lVar6 + 0x98);
  }
  for (plVar5 = (long *)puVar2[1]; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    if ((int)plVar5[3] == param_2) goto LAB_034e3bf8;
  }
  plVar5 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x30);
  if (plVar5 == (long *)0x0) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = 0;
  *(int *)(plVar5 + 3) = param_2;
  plVar5[4] = 0;
  plVar5[5] = 0;
  if (puVar2[1] == 0) {
    *puVar2 = plVar5;
    puVar2[1] = plVar5;
    *plVar5 = 0;
  }
  else {
    *plVar5 = puVar2[1];
    puVar2[1] = plVar5;
  }
LAB_034e3bf8:
  nn::os::UnlockMutex(pMVar1);
  lVar6 = 0;
  plVar4 = plVar5 + 5;
  do {
    lVar3 = lVar6;
    lVar6 = *plVar4;
    plVar4 = (long *)(lVar6 + 8);
  } while (lVar6 != 0 && lVar6 != param_1);
  if (lVar6 != 0) {
    plVar4 = plVar5 + 5;
    if (plVar5[5] != lVar6) {
      plVar4 = (long *)(lVar3 + 8);
    }
    *plVar4 = *(long *)(lVar6 + 8);
    if (plVar5[4] == lVar6) {
      plVar5[4] = lVar3;
    }
  }
  return;
}


