/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03240e4c; name: FUN_03240e4c
 */


void FUN_03240e4c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  MutexType *pMVar1;
  undefined8 local_38;
  
  if ((param_5 & 1) == 0) {
    nn::os::AllocateTlsSlot((TlsSlot *)&DAT_048857a8,(_func_void_ulong *)&LAB_03241150);
  }
  local_38 = 0x20;
  pMVar1 = (MutexType *)(**(code **)(*param_1 + 0x10))(param_1,&local_38);
  nn::os::InitializeMutex(pMVar1,true,0);
  local_38 = 0x10;
  DAT_048857c0 = pMVar1;
  DAT_048857c8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,&local_38);
  *DAT_048857c8 = 0;
  DAT_048857c8[1] = 0;
  local_38 = 0x10;
  DAT_04885800 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,&local_38);
  *DAT_04885800 = &LAB_03240e20;
  DAT_04885800[1] = 0;
  DAT_048857d8 = param_1;
  DAT_048857e0 = param_2;
  DAT_048857e8 = param_3;
  DAT_048857f0 = param_4;
  DAT_048857f8 = nn::os::GetSystemTick();
  DAT_048857d0 = &DAT_04885810;
  DAT_048857b0 = 1;
  DAT_048857b8 = FUN_00e5d3b4();
  return;
}


