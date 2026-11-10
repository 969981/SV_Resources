/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347ada4; name: FUN_0347ada4
 */


void FUN_0347ada4(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_3 == 0) || (*(long *)(param_1 + 0x50) == param_3)) {
    if (param_2 == 2) {
      if ((*(int *)(param_1 + 0xa8) != 0) &&
         (iVar2 = *(int *)(param_1 + 0xa8) + -1, *(int *)(param_1 + 0xa8) = iVar2, iVar2 == 0)) {
        if (*(int *)(param_1 + 0x48) != 1) {
          FUN_03479e70(param_1,0,4);
        }
        nn::os::LockMutex((MutexType *)(param_1 + 0x28));
        iVar2 = *(int *)(param_1 + 0xac);
        iVar1 = *(int *)(*(long *)PTR_DAT_047e2fe8 + 0x78);
        *(undefined4 *)(param_1 + 0xac) = 0;
        *(int *)(param_1 + 0xb0) = (iVar1 - iVar2) + *(int *)(param_1 + 0xb0);
LAB_0347adf4:
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
        return;
      }
    }
    else if (param_2 == 1) {
      if ((*(int *)(param_1 + 0x48) != 0) &&
         (iVar2 = *(int *)(param_1 + 0xa8), *(int *)(param_1 + 0xa8) = iVar2 + 1, iVar2 == 0)) {
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(*(long *)PTR_DAT_047e2fe8 + 0x78);
      }
    }
    else if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      nn::os::LockMutex((MutexType *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      goto LAB_0347adf4;
    }
  }
  return;
}


