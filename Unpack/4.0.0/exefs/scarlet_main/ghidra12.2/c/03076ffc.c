/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03076ffc; name: FUN_03076ffc
 */


void FUN_03076ffc(long param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)&DAT_048731c0);
  nn::os::LockMutex((MutexType *)&DAT_048731e0);
  if (DAT_04873228 == DAT_0487322c) {
    nn::os::UnlockMutex((MutexType *)&DAT_048731e0);
  }
  else {
    DAT_04873230 = 1;
    nn::os::UnlockMutex((MutexType *)&DAT_048731e0);
    nn::os::AcquireSemaphore((SemaphoreType *)&DAT_04873200);
    DAT_04873230 = 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + (long)*param_2 * 4) == -1) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)*param_2 * 4) =
         *(undefined4 *)(param_1 + 0x40);
    iVar3 = *(int *)(param_1 + 0x40);
    lVar4 = (long)iVar3;
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) <= iVar3) {
      FUN_02eea048(param_1 + 0x38,PTR_PTR_047d1a50,lVar4 + 1);
      iVar3 = *(int *)(param_1 + 0x40);
    }
    *(undefined1 *)(*(long *)(param_1 + 0x38) + (long)iVar3) = 0xff;
    *(int *)(param_1 + 0x40) = (int)(lVar4 + 1);
  }
  if ((*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) &&
     (iVar3 = *param_2, iVar3 == *(int *)(param_1 + 0x70))) {
    iVar1 = *(int *)(param_1 + 0x30);
    lVar4 = (long)iVar1;
    lVar5 = (long)iVar3;
    if (iVar1 <= iVar3 + 1) {
      iVar1 = iVar3 + 1;
    }
    do {
      lVar5 = lVar5 + 1;
      if (lVar4 <= lVar5) {
        iVar3 = iVar1;
        break;
      }
      if (*(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x1c) + 0.001) {
        bVar2 = true;
      }
      else {
        bVar2 = *(int *)(*(long *)(param_1 + 0x28) + lVar5 * 4) != -1;
      }
      iVar3 = iVar3 + 1;
    } while (bVar2);
    *(int *)(param_1 + 0x70) = iVar3;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_048731c0);
  return;
}


