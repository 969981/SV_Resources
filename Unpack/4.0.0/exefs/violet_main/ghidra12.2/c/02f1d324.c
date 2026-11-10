/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1d324; name: FUN_02f1d324
 */


void FUN_02f1d324(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  MutexType *pMVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_047d1a08;
  pMVar4 = *(MutexType **)(param_1 + 0x340);
  if (pMVar4 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar4);
    (**(code **)(puVar2 + 8))(0,pMVar4,0);
  }
  puVar3 = PTR_PTR_047d1a50;
  lVar5 = 0x300;
  do {
    lVar1 = param_1 + lVar5;
    *(undefined4 *)(lVar1 + 0x30) = 0;
    if ((-1 < (int)*(uint *)(lVar1 + 0x34)) && (*(long *)(lVar1 + 0x28) != 0)) {
      (**(code **)(*(long *)puVar3 + 0x20))
                (puVar3,*(long *)(lVar1 + 0x28),(ulong)*(uint *)(lVar1 + 0x34) << 2);
    }
    lVar5 = lVar5 + -0x18;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined4 *)(lVar1 + 0x34) = 0x80000000;
  } while (lVar5 != 0);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(puVar2 + 8))(0,*(long *)(param_1 + 0x20),0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*(long *)(param_1 + 0x10) != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,*(long *)(param_1 + 0x10),(ulong)*(uint *)(param_1 + 0x1c) << 7);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  return;
}


