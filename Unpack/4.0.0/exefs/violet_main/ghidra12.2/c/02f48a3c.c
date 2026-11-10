/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f48a3c; name: FUN_02f48a3c
 */


void FUN_02f48a3c(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  MutexType *pMVar5;
  
  *param_1 = (long)&PTR_LAB_0460fb58;
  FUN_02f48b88();
  pMVar5 = (MutexType *)param_1[9];
  if (pMVar5 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar5);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,pMVar5,0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 3);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) << 3);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  if (0 < (int)*(uint *)((long)param_1 + 0x24)) {
    lVar3 = 0;
    lVar4 = (ulong)*(uint *)((long)param_1 + 0x24) + 1;
    do {
      if (*(long *)(param_1[3] + lVar3) != -1) {
        *(undefined8 *)(param_1[3] + lVar3) = 0xffffffffffffffff;
      }
      lVar4 = lVar4 + -1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 != 0);
  }
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(long)*(int *)((long)param_1 + 0x24) * 0x10 + 0x10);
  }
  puVar2 = PTR_DAT_047d1a00;
  param_1[3] = 0;
  param_1[4] = -0x100000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


