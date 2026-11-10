/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033483e4; name: FUN_033483e4
 */


undefined8 FUN_033483e4(long param_1,code *param_2,long param_3)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined **local_a0;
  char local_98;
  long local_90;
  MutexType *local_88;
  undefined4 local_7c;
  undefined **local_78;
  char local_70;
  long local_68;
  MutexType *local_60;
  undefined4 local_58;
  
  lVar2 = DAT_0488d7a8;
  local_60 = (MutexType *)(DAT_0488d7a8 + 0x18);
  local_68 = DAT_0488d7a8;
  nn::os::LockMutex(local_60);
  pMVar1 = (MutexType *)(lVar2 + 0x38);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(lVar2 + 0x80) == *(int *)(lVar2 + 0x84)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    *(undefined1 *)(lVar2 + 0x88) = 1;
    nn::os::UnlockMutex(pMVar1);
    nn::os::AcquireSemaphore((SemaphoreType *)(lVar2 + 0x58));
    *(undefined1 *)(lVar2 + 0x88) = 0;
  }
  local_78 = &PTR_LAB_047acc38;
  local_58 = 0;
  local_70 = '\0';
  (*param_2)(&local_78);
  local_7c = local_58;
  lVar3 = FUN_0334b080((long *)(param_1 + 0x148),&local_7c);
  lVar2 = DAT_0488d7a8;
  if (lVar3 == 0) {
    uVar5 = 0;
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(lVar3 + 4);
    uVar5 = ((int)lVar3 - (int)*(undefined8 *)(param_1 + 0x158)) * 0x20000000;
  }
  uVar9 = 0x80040200;
  uVar6 = uVar6 | uVar5;
  if (-1 < (int)uVar6) {
    lVar3 = *(long *)(param_1 + 0x148);
    puVar11 = (uint *)(lVar3 + (long)(int)uVar6 * 0x18 + 0x10);
    uVar5 = *puVar11;
    if (0 < (int)uVar5) {
      puVar10 = (undefined8 *)(lVar3 + (long)(int)uVar6 * 0x18 + 8);
      puVar7 = (undefined8 *)*puVar10;
      lVar3 = 0;
      puVar8 = puVar7;
      do {
        if ((code *)*puVar8 == param_2) {
          if ((int)lVar3 == 0) {
            if (param_3 == 0) {
              local_98 = '\x01';
              local_88 = (MutexType *)(DAT_0488d7a8 + 0x18);
              local_90 = DAT_0488d7a8;
              nn::os::LockMutex(local_88);
              pMVar1 = (MutexType *)(lVar2 + 0x38);
              nn::os::LockMutex(pMVar1);
              if (*(int *)(lVar2 + 0x80) == *(int *)(lVar2 + 0x84)) {
                nn::os::UnlockMutex(pMVar1);
              }
              else {
                *(undefined1 *)(lVar2 + 0x88) = 1;
                nn::os::UnlockMutex(pMVar1);
                nn::os::AcquireSemaphore((SemaphoreType *)(lVar2 + 0x58));
                *(undefined1 *)(lVar2 + 0x88) = 0;
              }
              pMVar1 = (MutexType *)(lVar2 + 0x188);
              local_a0 = &PTR_FUN_047acb10;
              nn::os::LockMutex(pMVar1);
              if (*(int *)(lVar2 + 0x1b0) != 0) {
                lVar3 = (long)*(int *)(lVar2 + 0x1b0) << 4;
                plVar4 = *(long **)(lVar2 + 0x1a8);
                do {
                  if (*plVar4 != 0) {
                    nn::os::UnlockMutex(pMVar1);
                    /* WARNING: Subroutine does not return */
                    FUN_032270d0(0x8f7923a4,
                                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
                                 ,0x329,
                                 "Patches are being unloaded while a loader is still active. All loaders must be destroyed before unloading patches"
                                );
                  }
                  lVar3 = lVar3 + -0x10;
                  plVar4 = plVar4 + 2;
                } while (lVar3 != 0);
              }
              nn::os::UnlockMutex(pMVar1);
              (*param_2)(&local_a0);
              local_a0 = (undefined **)&DAT_047acac0;
              if (((local_98 != '\0') && (*(int *)(local_90 + 0xb0) == 0)) &&
                 (*(int *)(local_90 + 0xa0) != 0)) {
                FUN_033431ec();
              }
              if (local_88 != (MutexType *)0x0) {
                nn::os::UnlockMutex(local_88);
              }
            }
            else {
              (*param_2)(param_3);
            }
            uVar6 = *puVar11;
            uVar5 = (uint)((long)(int)uVar6 + -1);
            *puVar11 = uVar5;
            if ((uVar5 != 0) &&
               (*(undefined8 *)*puVar10 = ((undefined8 *)*puVar10)[(long)(int)uVar6 + -1],
               lVar2 = DAT_0488d7a8, 0 < (int)*puVar11)) {
              local_98 = '\x01';
              local_88 = (MutexType *)(DAT_0488d7a8 + 0x18);
              local_90 = DAT_0488d7a8;
              nn::os::LockMutex(local_88);
              pMVar1 = (MutexType *)(lVar2 + 0x38);
              nn::os::LockMutex(pMVar1);
              if (*(int *)(lVar2 + 0x80) == *(int *)(lVar2 + 0x84)) {
                nn::os::UnlockMutex(pMVar1);
              }
              else {
                *(undefined1 *)(lVar2 + 0x88) = 1;
                nn::os::UnlockMutex(pMVar1);
                nn::os::AcquireSemaphore((SemaphoreType *)(lVar2 + 0x58));
                *(undefined1 *)(lVar2 + 0x88) = 0;
              }
              local_a0 = &PTR_LAB_047acae8;
              (**(code **)*puVar10)(&local_a0);
              local_a0 = (undefined **)&DAT_047acac0;
              if (((local_98 != '\0') && (*(int *)(local_90 + 0xb0) == 0)) &&
                 (*(int *)(local_90 + 0xa0) != 0)) {
                FUN_033431ec();
              }
              if (local_88 != (MutexType *)0x0) {
                nn::os::UnlockMutex(local_88);
              }
            }
LAB_033486e8:
            uVar9 = 0;
            break;
          }
          *puVar11 = uVar5 - 1;
          if (uVar5 + (int)lVar3 == 1) goto LAB_033486e8;
          uVar9 = 0;
          *puVar8 = puVar7[(int)(uVar5 - 1)];
          break;
        }
        lVar3 = lVar3 + -1;
        puVar8 = puVar8 + 1;
      } while ((ulong)uVar5 + lVar3 != 0);
    }
  }
  local_78 = (undefined **)&DAT_047acac0;
  if (((local_70 != '\0') && (*(int *)(local_68 + 0xb0) == 0)) && (*(int *)(local_68 + 0xa0) != 0))
  {
    FUN_033431ec();
  }
  if (local_60 != (MutexType *)0x0) {
    nn::os::UnlockMutex(local_60);
  }
  return uVar9;
}


