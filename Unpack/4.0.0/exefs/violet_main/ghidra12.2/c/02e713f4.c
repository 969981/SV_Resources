/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e713f4; name: FUN_02e713f4
 */


void FUN_02e713f4(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *__src;
  undefined *puVar3;
  void *__dest;
  MutexType *pMVar4;
  long lVar5;
  MutexType *pMVar6;
  long *plVar7;
  undefined8 local_28;
  
  plVar7 = (long *)(param_1 + 8);
  *plVar7 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar3 = PTR_DAT_047d1a08;
  local_28 = 0x100;
  __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
  __src = (void *)0x0;
  if (*plVar7 != 0) {
    __src = (void *)(*plVar7 + (long)plVar7);
  }
  memcpy(__dest,__src,(long)*(int *)(param_1 + 0x10) << 7);
  if (*(int *)(param_1 + 0x14) < 0) {
    lVar5 = 0;
    if (*plVar7 != 0) {
      lVar5 = *plVar7 + (long)plVar7;
    }
    (**(code **)(puVar3 + 8))(0,lVar5,0);
  }
  lVar5 = 0;
  if (__dest != (void *)0x0) {
    lVar5 = (long)__dest - (long)plVar7;
  }
  *(long *)(param_1 + 8) = lVar5;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)(param_1 + 0x14) = 0x80000002;
  puVar2 = (undefined8 *)(lVar5 + (long)plVar7);
  *(undefined2 *)(puVar2 + 0xe) = 0;
  puVar2[1] = 0x7f7fffee7f7fffee;
  *puVar2 = 0x7f7fffee7f7fffee;
  puVar2[3] = 0xff7fffeeff7fffee;
  puVar2[2] = 0xff7fffeeff7fffee;
  puVar2[5] = 0x7f7fffee7f7fffee;
  puVar2[4] = 0x7f7fffee7f7fffee;
  puVar2[7] = 0xff7fffeeff7fffee;
  puVar2[6] = 0xff7fffeeff7fffee;
  puVar2[9] = 0x7f7fffee7f7fffee;
  puVar2[8] = 0x7f7fffee7f7fffee;
  puVar2[0xb] = 0xff7fffeeff7fffee;
  puVar2[10] = 0xff7fffeeff7fffee;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  lVar5 = *(long *)(param_1 + 8);
  *(undefined2 *)((long)plVar7 + lVar5 + 0xf0) = 0;
  *(undefined8 *)((long)plVar7 + lVar5 + 0x88) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 0x80) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 0x98) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 0x90) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 0xe0) = 0;
  *(undefined8 *)((long)plVar7 + lVar5 + 0xe8) = 0;
  *(undefined8 *)((long)plVar7 + lVar5 + 0xa8) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 0xa0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 0xb8) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 0xb0) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 200) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 0xc0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 0xd8) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar7 + lVar5 + 0xd0) = 0xff7fffeeff7fffee;
  *(undefined1 *)(param_1 + 0x18) = 1;
  puVar1 = PTR_DAT_047d1a40 + 0x10;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x1888) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined4 *)(param_1 + 0x19d0) = 0;
  *(undefined **)(param_1 + 0x28) = puVar1;
  *(long *)(param_1 + 0x1970) = param_1 + 0x1980;
  *(long *)(param_1 + 0x19c8) = param_1 + 0x19d8;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x8000000000000000;
  *(long *)(param_1 + 0x18a0) = param_1 + 0x18b0;
  *(undefined8 *)(param_1 + 0x18a8) = 0x8000001000000000;
  *(undefined8 *)(param_1 + 0x1978) = 0x8000001000000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x19d4) = 0x80000020;
  *(undefined1 *)(param_1 + 0x1ad8) = 0;
  *(undefined8 *)(param_1 + 0x1ae0) = 0;
  *(undefined1 *)(param_1 + 0x1af0) = 0;
  *(undefined4 *)(param_1 + 0x1af4) = 0;
  *(undefined2 *)(param_1 + 0x1af8) = 0x101;
  *(undefined8 *)(param_1 + 0x1c08) = 0;
  local_28 = 0x20;
  pMVar4 = (MutexType *)(**(code **)puVar3)(0,&local_28,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(pMVar4,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar4,true,0);
  pMVar6 = *(MutexType **)(param_1 + 0x1c08);
  *(MutexType **)(param_1 + 0x1c08) = pMVar4;
  if (pMVar6 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar6);
    (**(code **)(puVar3 + 8))(0,pMVar6,0);
  }
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


