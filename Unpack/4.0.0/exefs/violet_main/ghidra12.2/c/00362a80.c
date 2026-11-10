/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00362a80; name: FUN_00362a80
 */


void FUN_00362a80(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (((DAT_047ef870 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_047ef870), iVar3 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_047ef888,false,0);
    FUN_00100190(PTR__Mutex_047cc198,&DAT_047ef888,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_047ef870);
  }
  if (((DAT_047ef878 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_047ef878), iVar3 != 0)) {
    DAT_047ef880 = 0;
    __cxa_guard_release(&DAT_047ef878);
  }
  nn::os::LockMutex((MutexType *)&DAT_047ef888);
  iVar3 = DAT_047ef868 + 1;
  uVar2 = DAT_047ef868 & 0xff;
  DAT_047ef868 = iVar3;
  if (uVar2 == 0xff) {
    lVar4 = nn::os::GetSystemTick();
    uVar5 = nn::os::ConvertToTimeSpan(lVar4 - DAT_047ef880);
    uVar1 = ((long)uVar5 >> 0x20) * 0xd7b634db + ((uVar5 & 0xffffffff) * 0xd7b634db >> 0x20);
    if (((long)(((long)uVar5 >> 0x20) * 0x431bde82 + ((long)uVar1 >> 0x20) +
               ((uVar5 & 0xffffffff) * 0x431bde82 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x12) -
        ((long)uVar5 >> 0x3f) < 100) {
      nn::os::UnlockMutex((MutexType *)&DAT_047ef888);
      *(int *)PTR_DAT_047cced0 = *(int *)PTR_DAT_047cced0 + 1;
      nn::os::SleepThread(20000000);
      goto LAB_00362b94;
    }
  }
  else if (uVar2 == 0) {
    DAT_047ef880 = nn::os::GetSystemTick();
  }
  nn::os::UnlockMutex((MutexType *)&DAT_047ef888);
  if (param_3 == 0) {
    nn::os::YieldThread();
  }
LAB_00362b94:
  nnsocketPoll(param_1,param_2,param_3);
  return;
}


