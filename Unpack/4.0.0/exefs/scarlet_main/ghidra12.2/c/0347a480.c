/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347a480; name: FUN_0347a480
 */


undefined8 FUN_0347a480(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  MutexType *pMVar7;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  puVar4 = PTR_DAT_047e2fe8;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_03453e68(*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x6c));
  puVar4 = PTR_DAT_047e6f28;
  if ((param_2 == 0) && (uVar1 = *(uint *)(param_1 + 0x90), uVar1 != 0)) {
    pMVar7 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar7);
    uVar2 = *(uint *)(pMVar7 + 0x28);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar5 = *(long *)(*(long *)(pMVar7 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        if (*(uint *)(lVar5 + 0x10) == uVar1) {
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar7);
          local_78 = *(undefined8 *)(param_1 + 0x50);
          local_70 = *(undefined4 *)(param_1 + 0x6c);
          local_64 = 0;
          local_58 = 0;
          local_5c = 0;
          local_80[0] = 0;
          local_60 = 0;
          plVar6 = (long *)(lVar5 + -8);
          local_6c = param_3;
          uStack_68 = param_4;
          (**(code **)(*plVar6 + 0x98))(plVar6,local_80);
          (**(code **)(*plVar6 + 0x30))(plVar6);
          goto LAB_0347a588;
        }
      }
    }
    nn::os::UnlockMutex(pMVar7);
LAB_0347a588:
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 != 0) {
    pMVar7 = *(MutexType **)puVar4;
    nn::os::LockMutex(pMVar7);
    uVar2 = *(uint *)(pMVar7 + 0x28);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar5 = *(long *)(*(long *)(pMVar7 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        if (*(uint *)(lVar5 + 0x10) == uVar1) {
          plVar6 = (long *)(lVar5 + -8);
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar7);
          if (param_2 == 0) {
            local_64 = 0;
            local_58 = 0;
            local_5c = 0;
            local_80[0] = 0;
            local_60 = 0;
            local_78 = *(undefined8 *)(param_1 + 0x50);
            local_70 = *(undefined4 *)(param_1 + 0x6c);
            local_6c = param_3;
            uStack_68 = param_4;
            (**(code **)(*plVar6 + 0x98))(plVar6,local_80);
          }
          else {
            (**(code **)(*plVar6 + 0xb8))(plVar6,*(undefined8 *)(param_1 + 0x50),plVar6);
          }
          (**(code **)(*plVar6 + 0x30))(plVar6);
          return 1;
        }
      }
    }
    nn::os::UnlockMutex(pMVar7);
  }
  return 1;
}


