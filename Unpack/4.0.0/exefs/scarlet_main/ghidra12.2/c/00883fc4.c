/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00883fc4; name: FUN_00883fc4
 */


void FUN_00883fc4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar4 = PTR_DAT_047d1ee0;
  puVar3 = PTR_DAT_047d1ec8;
  puVar2 = PTR_DAT_047d1ec0;
  do {
    nn::os::WaitTimerEvent((TimerEventType *)puVar4);
    nn::os::LockMutex((MutexType *)puVar2);
    iVar1 = *(int *)(puVar3 + 0x10);
    if (iVar1 == 0) {
      nn::os::UnlockMutex((MutexType *)PTR_DAT_047d1ec0);
      return;
    }
    uVar5 = 0;
    do {
      FUN_00883e88(*(undefined8 *)(*(long *)(puVar3 + 8) + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(puVar3 + 0x10));
    nn::os::UnlockMutex((MutexType *)puVar2);
  } while (iVar1 != 0);
  return;
}


