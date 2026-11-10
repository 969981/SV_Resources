/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e710f4; name: FUN_02e710f4
 */


void FUN_02e710f4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  MutexType *pMVar5;
  
  puVar2 = PTR_DAT_047d1a08;
  pMVar5 = *(MutexType **)(param_1 + 0x1c08);
  if (pMVar5 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar5);
    (**(code **)(puVar2 + 8))(0,pMVar5,0);
  }
  *(undefined4 *)(param_1 + 0x19d0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x19d4)) && (*(long *)(param_1 + 0x19c8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x19c8),(ulong)*(uint *)(param_1 + 0x19d4) << 3)
    ;
  }
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined4 *)(param_1 + 0x19d4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1978) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x197c)) && (*(long *)(param_1 + 0x1970) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x1970),(ulong)*(uint *)(param_1 + 0x197c) << 2)
    ;
  }
  *(undefined8 *)(param_1 + 0x1970) = 0;
  *(undefined4 *)(param_1 + 0x197c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18a8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x18ac)) && (*(long *)(param_1 + 0x18a0) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x18a0),(ulong)*(uint *)(param_1 + 0x18ac) * 0xc
              );
  }
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  *(undefined4 *)(param_1 + 0x18ac) = 0x80000000;
  puVar3 = PTR_DAT_047d1a40;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x28) = puVar3 + 0x10;
  if ((-1 < (int)*(uint *)(param_1 + 0x6c)) && (*(long *)(param_1 + 0x60) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x60),(ulong)*(uint *)(param_1 + 0x6c) << 5);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x5c)) && (*(long *)(param_1 + 0x50) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x50),(ulong)*(uint *)(param_1 + 0x5c) << 4);
  }
  lVar4 = *(long *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (-1 < *(int *)(param_1 + 0x14)) {
    return;
  }
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + param_1 + 8;
  }
                    /* WARNING: Could not recover jumptable at 0x02e71278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar2 + 8))(0,lVar1,0);
  return;
}


