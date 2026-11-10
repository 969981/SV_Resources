/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347a780; name: FUN_0347a780
 */


undefined8 FUN_0347a780(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  MutexType *pMVar8;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar1 = *(int *)(param_1 + 0xa8), *(int *)(param_1 + 0xa8) = iVar1 + 1, iVar1 == 0)) {
    lVar6 = *(long *)PTR_DAT_047e2fe8;
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(lVar6 + 0x78);
    FUN_03454134(lVar6,*(undefined4 *)(param_1 + 0x6c));
    puVar5 = PTR_DAT_047e6f28;
    uVar2 = *(uint *)(param_1 + 0x78);
    if (uVar2 != 0) {
      pMVar8 = *(MutexType **)PTR_DAT_047e6f28;
      nn::os::LockMutex(pMVar8);
      uVar3 = *(uint *)(pMVar8 + 0x28);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (lVar6 = *(long *)(*(long *)(pMVar8 + 0x20) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
          if (*(uint *)(lVar6 + 0x10) == uVar2) {
            *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar8);
            local_78 = *(undefined8 *)(param_1 + 0x50);
            local_70 = *(undefined4 *)(param_1 + 0x6c);
            local_64 = 0;
            local_58 = 0;
            local_5c = 0;
            local_80[0] = 1;
            local_60 = 0;
            plVar7 = (long *)(lVar6 + -8);
            local_6c = param_2;
            uStack_68 = param_3;
            (**(code **)(*plVar7 + 0x98))(plVar7,local_80);
            (**(code **)(*plVar7 + 0x30))(plVar7);
            goto LAB_0347a89c;
          }
        }
      }
      nn::os::UnlockMutex(pMVar8);
    }
LAB_0347a89c:
    uVar2 = *(uint *)(param_1 + 0x90);
    if (uVar2 != 0) {
      pMVar8 = *(MutexType **)puVar5;
      nn::os::LockMutex(pMVar8);
      uVar3 = *(uint *)(pMVar8 + 0x28);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (lVar6 = *(long *)(*(long *)(pMVar8 + 0x20) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
          if (*(uint *)(lVar6 + 0x10) == uVar2) {
            *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar8);
            local_78 = *(undefined8 *)(param_1 + 0x50);
            local_70 = *(undefined4 *)(param_1 + 0x6c);
            local_64 = 0;
            local_58 = 0;
            local_5c = 0;
            local_80[0] = 1;
            local_60 = 0;
            plVar7 = (long *)(lVar6 + -8);
            local_6c = param_2;
            uStack_68 = param_3;
            (**(code **)(*plVar7 + 0x98))(plVar7,local_80);
            (**(code **)(*plVar7 + 0x30))(plVar7);
            return 1;
          }
        }
      }
      nn::os::UnlockMutex(pMVar8);
    }
  }
  return 1;
}


