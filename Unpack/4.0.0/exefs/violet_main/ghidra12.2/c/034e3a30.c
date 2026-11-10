/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e3a30; name: FUN_034e3a30
 */


undefined8 FUN_034e3a30(long param_1,int param_2,int param_3)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_047e7050;
  pMVar1 = (MutexType *)(lVar5 + 0x68);
  nn::os::LockMutex(pMVar1);
  puVar2 = (undefined8 *)(lVar5 + 0x88);
  if (param_3 != 1) {
    puVar2 = (undefined8 *)(lVar5 + 0x98);
  }
  for (plVar4 = (long *)puVar2[1]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if ((int)plVar4[3] == param_2) goto LAB_034e3af0;
  }
  plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x30);
  if (plVar4 == (long *)0x0) {
    nn::os::UnlockMutex(pMVar1);
    uVar3 = 2;
  }
  else {
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    *(int *)(plVar4 + 3) = param_2;
    plVar4[4] = 0;
    plVar4[5] = 0;
    if (puVar2[1] == 0) {
      *puVar2 = plVar4;
      puVar2[1] = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = puVar2[1];
      puVar2[1] = plVar4;
    }
LAB_034e3af0:
    nn::os::UnlockMutex(pMVar1);
    if (plVar4[5] == 0) {
      plVar4[4] = param_1;
      plVar4[5] = param_1;
      uVar3 = 1;
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      uVar3 = 1;
      *(long *)(param_1 + 8) = plVar4[5];
      plVar4[5] = param_1;
    }
  }
  return uVar3;
}


