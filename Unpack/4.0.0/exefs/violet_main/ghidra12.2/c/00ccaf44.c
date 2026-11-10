/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccaf44; name: FUN_00ccaf44
 */


void FUN_00ccaf44(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = *(long *)(param_2 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[6] = 0;
  param_1[7] = lVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0xfffffffffffffff;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_00ccb1b0(param_1 + 0xe);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  memset(param_1 + 0x12,0,0x44);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x1e));
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x1f));
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x20),false,0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x26,0,1);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[1] = *(long *)(param_2 + 0x30);
  return;
}


