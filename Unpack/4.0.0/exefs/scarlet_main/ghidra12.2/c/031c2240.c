/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c2240; name: FUN_031c2240
 */


void FUN_031c2240(long param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_3 == 0) {
    return;
  }
  uVar5 = (ulong)param_3;
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  puVar1 = PTR_PTR_047d1a50;
  if (0 < (int)param_3) {
    do {
      lVar2 = *param_2;
      if (lVar2 != 0) {
        iVar3 = *(int *)(param_1 + 0x50);
        lVar4 = (long)iVar3;
        if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) <= iVar3) {
          FUN_031c25b4(param_1 + 0x48,puVar1,lVar4 + 1);
          iVar3 = *(int *)(param_1 + 0x50);
          lVar2 = *param_2;
        }
        *(long *)(*(long *)(param_1 + 0x48) + (long)iVar3 * 8) = lVar2;
        *(int *)(param_1 + 0x50) = (int)(lVar4 + 1);
      }
      uVar5 = uVar5 - 1;
      param_2 = param_2 + 1;
    } while (uVar5 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


