/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03348014; name: FUN_03348014
 */


undefined8 FUN_03348014(long param_1,code *param_2,long param_3)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined **local_a8;
  undefined8 local_a0;
  long local_98;
  MutexType *local_90;
  undefined **local_88;
  char local_80;
  long local_78;
  MutexType *local_70;
  undefined4 local_68;
  undefined4 local_44;
  
  lVar4 = DAT_0488d7a8;
  local_70 = (MutexType *)(DAT_0488d7a8 + 0x18);
  local_78 = DAT_0488d7a8;
  nn::os::LockMutex(local_70);
  pMVar1 = (MutexType *)(lVar4 + 0x38);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(lVar4 + 0x80) == *(int *)(lVar4 + 0x84)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    *(undefined1 *)(lVar4 + 0x88) = 1;
    nn::os::UnlockMutex(pMVar1);
    nn::os::AcquireSemaphore((SemaphoreType *)(lVar4 + 0x58));
    *(undefined1 *)(lVar4 + 0x88) = 0;
  }
  local_88 = &PTR_LAB_047acc38;
  local_68 = 0;
  local_80 = '\0';
  (*param_2)(&local_88);
  local_44 = local_68;
  local_a8 = (undefined **)0x0;
  local_a0 = 0x8000000000000000;
  iVar2 = FUN_0334822c(param_1 + 0x148,&local_44,&local_a8);
  lVar4 = DAT_0488d7a8;
  lVar8 = *(long *)(param_1 + 0x148);
  lVar6 = lVar8 + (long)iVar2 * 0x18;
  piVar7 = (int *)(lVar6 + 0x10);
  plVar5 = (long *)(lVar6 + 8);
  if (*piVar7 == 0) {
    if (param_3 == 0) {
      local_a0 = CONCAT71(local_a0._1_7_,1);
      local_90 = (MutexType *)(DAT_0488d7a8 + 0x18);
      local_98 = DAT_0488d7a8;
      nn::os::LockMutex(local_90);
      pMVar1 = (MutexType *)(lVar4 + 0x38);
      nn::os::LockMutex(pMVar1);
      if (*(int *)(lVar4 + 0x80) == *(int *)(lVar4 + 0x84)) {
        nn::os::UnlockMutex(pMVar1);
      }
      else {
        *(undefined1 *)(lVar4 + 0x88) = 1;
        nn::os::UnlockMutex(pMVar1);
        nn::os::AcquireSemaphore((SemaphoreType *)(lVar4 + 0x58));
        *(undefined1 *)(lVar4 + 0x88) = 0;
      }
      local_a8 = &PTR_LAB_047acae8;
      (*param_2)(&local_a8);
      local_a8 = (undefined **)&DAT_047acac0;
      if ((((char)local_a0 != '\0') && (*(int *)(local_98 + 0xb0) == 0)) &&
         (*(int *)(local_98 + 0xa0) != 0)) {
        FUN_033431ec();
      }
      if (local_90 != (MutexType *)0x0) {
        nn::os::UnlockMutex(local_90);
      }
    }
    else {
      (*param_2)(param_3);
    }
  }
  iVar3 = *piVar7;
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)(lVar8 + (long)iVar2 * 0x18 + 0x14) & 0x7fffffff) <= iVar3) {
    FUN_0334af6c(plVar5,lVar4 + 1);
    iVar3 = *piVar7;
  }
  *(code **)(*plVar5 + (long)iVar3 * 8) = param_2;
  *piVar7 = (int)(lVar4 + 1);
  local_88 = (undefined **)&DAT_047acac0;
  if (((local_80 != '\0') && (*(int *)(local_78 + 0xb0) == 0)) && (*(int *)(local_78 + 0xa0) != 0))
  {
    FUN_033431ec();
  }
  if (local_70 != (MutexType *)0x0) {
    nn::os::UnlockMutex(local_70);
  }
  return 0;
}


