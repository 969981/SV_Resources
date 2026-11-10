/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0326f9f0; name: FUN_0326f9f0
 */


void FUN_0326f9f0(long *param_1)

{
  undefined *puVar1;
  MutexType *pMVar2;
  long *plVar3;
  
  pMVar2 = (MutexType *)param_1[9];
  *param_1 = (long)(PTR_DAT_047e6108 + 0x10);
  puVar1 = PTR_DAT_047d1a08;
  if (pMVar2 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar2);
    (**(code **)(puVar1 + 8))(0,pMVar2,0);
    param_1[9] = 0;
  }
  plVar3 = (long *)param_1[8];
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*plVar3,(ulong)*(uint *)((long)plVar3 + 0xc) << 4);
    }
    *plVar3 = 0;
    *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
    (**(code **)(puVar1 + 8))(0,plVar3,0);
    param_1[8] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047e61b0 + 0x20))
              (PTR_PTR_047e61b0,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 6);
  }
  param_1[6] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


