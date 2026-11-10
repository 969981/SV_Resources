/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c2178; name: FUN_031c2178
 */


void FUN_031c2178(long *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  if (param_3 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  if ((int)param_1[10] < (int)param_3) {
    iVar1 = (param_3 - (int)param_1[10]) * 0xfc0;
    iVar3 = (int)param_1[8] * 0xfc0;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_031c1ee4(param_1,iVar3);
  }
  if (0 < (int)param_3) {
    iVar3 = (int)param_1[10];
    uVar2 = (ulong)param_3;
    do {
      uVar2 = uVar2 - 1;
      *param_2 = *(undefined8 *)(param_1[9] + (long)(iVar3 + -1) * 8);
      iVar3 = (int)param_1[10] + -1;
      *(int *)(param_1 + 10) = iVar3;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  iVar3 = *(int *)((long)param_1 + 0x5c);
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (iVar3 <= iVar1) {
    iVar3 = iVar1;
  }
  *(int *)((long)param_1 + 0x5c) = iVar3;
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return;
}


