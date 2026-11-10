/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03002b34; name: FUN_03002b34
 */


void FUN_03002b34(undefined4 *param_1,uint param_2)

{
  undefined *puVar1;
  MutexType *pMVar2;
  code *pcVar3;
  ulong uVar4;
  MutexType *pMVar5;
  undefined8 local_28;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  puVar1 = PTR_DAT_047d1a08;
  local_28 = 0x20;
  pMVar2 = (MutexType *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
  pcVar3 = *(code **)(puVar1 + 0x10);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(pMVar2,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar2,true,0);
  pMVar5 = *(MutexType **)(param_1 + 2);
  *(MutexType **)(param_1 + 2) = pMVar2;
  if (pMVar5 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar5);
    (**(code **)(puVar1 + 8))(0,pMVar5,0);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  if ((int)param_2 < 1) {
    uVar4 = 0;
  }
  else {
    FUN_03002c40(param_1 + 6,param_2);
    uVar4 = (ulong)(uint)param_1[8];
  }
  if ((uint)uVar4 != param_2) {
    uVar4 = (ulong)param_2;
    param_1[8] = param_2;
  }
  param_1[4] = param_2 - 1;
  memset(*(void **)(param_1 + 6),0xff,-(uVar4 >> 0x1f) & 0xffffffc000000000 | uVar4 << 6);
  *param_1 = 1;
  return;
}


