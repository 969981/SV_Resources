/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079f978; name: FUN_0079f978
 */


void FUN_0079f978(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_70 [20];
  char local_5c;
  int local_58;
  int iStack_54;
  long local_48;
  long local_40;
  short local_38;
  
  FUN_007a3ae8(auStack_70,*param_2,*(undefined4 *)((long)param_2 + 0xc),param_1);
  uVar3 = FUN_007a3cd4(auStack_70);
  if ((((uVar3 & 1) != 0) && (*(int *)((long)param_2 + 0xc) == iStack_54 + local_58)) &&
     (local_5c == 'A')) {
    pMVar1 = (MutexType *)(param_1 + 0x1f8);
    nn::os::LockMutex(pMVar1);
    if (*(long *)(param_1 + 0x218) == 0) {
      nn::os::UnlockMutex(pMVar1);
      if (local_48 != 0) {
        return;
      }
    }
    else {
      lVar4 = FUN_027e983c();
      nn::os::UnlockMutex(pMVar1);
      if (local_48 != lVar4) {
        return;
      }
    }
    uVar3 = FUN_00796784(param_1 + 0xb8);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00796784(param_1 + 0x98);
      if ((((uVar3 & 1) != 0) &&
          (uVar3 = FUN_007967e8(param_1 + 0x98,param_1 + 0xb8), (uVar3 & 1) != 0)) &&
         ((lVar4 = FUN_007ec50c(param_1), lVar4 != local_40 ||
          (sVar2 = FUN_007ec514(param_1), local_38 != sVar2)))) {
        nn::os::LockMutex((MutexType *)(param_1 + 0xf8));
        (**(code **)(**(long **)(param_1 + 0x118) + 0x10))();
        FUN_007a8258(*(undefined8 *)(param_1 + 0x118),2);
        local_78 = 0;
        local_80 = 0x40;
        (**(code **)(**(long **)(param_1 + 0x118) + 0x40))(*(long **)(param_1 + 0x118),&local_80);
        *(undefined1 *)(param_1 + 0x24b) = 1;
        if (*(int *)(param_1 + 0x288) != 0) {
          *(undefined4 *)(param_1 + 0x288) = 0;
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 0xf8));
      }
    }
  }
  return;
}


