/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347a974; name: FUN_0347a974
 */


undefined8 FUN_0347a974(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  MutexType *pMVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  
  if ((*(int *)(param_1 + 0xa8) != 0) &&
     (iVar5 = *(int *)(param_1 + 0xa8) + -1, *(int *)(param_1 + 0xa8) = iVar5, iVar5 == 0)) {
    if (*(int *)(param_1 + 0x48) != 1) {
      FUN_03479e70(param_1,param_2,param_3);
    }
    puVar7 = PTR_DAT_047e2fe8;
    lVar11 = *(long *)PTR_DAT_047e2fe8;
    iVar5 = *(int *)(param_1 + 0x6c);
    puVar14 = *(undefined8 **)(lVar11 + 0x50);
    if (puVar14 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
      do {
        lVar9 = puVar14[2];
        if (*(int *)(lVar9 + 0x30) == iVar5) {
          if (*(int *)(lVar9 + 0x34) != 0) {
            *(int *)(lVar9 + 0x34) = *(int *)(lVar9 + 0x34) + -1;
            goto LAB_0347aa10;
          }
          FUN_03455744(lVar11);
          puVar10 = (undefined8 *)*puVar14;
          puVar1 = (undefined8 *)(lVar11 + 0x50);
          if (*(undefined8 **)(lVar11 + 0x50) != puVar14) {
            puVar1 = puVar15;
          }
          *puVar1 = puVar10;
          if (*(undefined8 **)(lVar11 + 0x58) == puVar14) {
            *(undefined8 **)(lVar11 + 0x58) = puVar15;
          }
          *puVar14 = *(undefined8 *)(lVar11 + 0x60);
          *(undefined8 **)(lVar11 + 0x60) = puVar14;
          *(int *)(lVar11 + 0x74) = *(int *)(lVar11 + 0x74) + -1;
        }
        else {
LAB_0347aa10:
          puVar10 = (undefined8 *)*puVar14;
          puVar15 = puVar14;
        }
        puVar14 = puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
    puVar8 = PTR_DAT_047e6f28;
    uVar2 = *(uint *)(param_1 + 0x78);
    if (uVar2 != 0) {
      pMVar13 = *(MutexType **)PTR_DAT_047e6f28;
      nn::os::LockMutex(pMVar13);
      uVar3 = *(uint *)(pMVar13 + 0x28);
      if (uVar3 != 0) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar2 / uVar3;
        }
        for (lVar11 = *(long *)(*(long *)(pMVar13 + 0x20) + (ulong)(uVar2 - uVar6 * uVar3) * 8);
            lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
          if (*(uint *)(lVar11 + 0x10) == uVar2) {
            *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar13);
            local_88 = *(undefined8 *)(param_1 + 0x50);
            local_80 = *(undefined4 *)(param_1 + 0x6c);
            local_74 = 0;
            local_68 = 0;
            local_6c = 0;
            local_90[0] = 2;
            local_70 = 0;
            plVar12 = (long *)(lVar11 + -8);
            local_7c = param_2;
            uStack_78 = param_3;
            (**(code **)(*plVar12 + 0x98))(plVar12,local_90);
            (**(code **)(*plVar12 + 0x30))(plVar12);
            goto LAB_0347ab2c;
          }
        }
      }
      nn::os::UnlockMutex(pMVar13);
    }
LAB_0347ab2c:
    uVar2 = *(uint *)(param_1 + 0x90);
    if (uVar2 != 0) {
      pMVar13 = *(MutexType **)puVar8;
      nn::os::LockMutex(pMVar13);
      uVar3 = *(uint *)(pMVar13 + 0x28);
      if (uVar3 != 0) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar2 / uVar3;
        }
        for (lVar11 = *(long *)(*(long *)(pMVar13 + 0x20) + (ulong)(uVar2 - uVar6 * uVar3) * 8);
            lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
          if (*(uint *)(lVar11 + 0x10) == uVar2) {
            *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar13);
            local_88 = *(undefined8 *)(param_1 + 0x50);
            local_80 = *(undefined4 *)(param_1 + 0x6c);
            local_74 = 0;
            local_68 = 0;
            local_6c = 0;
            local_90[0] = 2;
            local_70 = 0;
            plVar12 = (long *)(lVar11 + -8);
            local_7c = param_2;
            uStack_78 = param_3;
            (**(code **)(*plVar12 + 0x98))(plVar12,local_90);
            (**(code **)(*plVar12 + 0x30))(plVar12);
            goto LAB_0347abe4;
          }
        }
      }
      nn::os::UnlockMutex(pMVar13);
    }
LAB_0347abe4:
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    iVar4 = *(int *)(*(long *)puVar7 + 0x78);
    iVar5 = *(int *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(int *)(param_1 + 0xb0) = (iVar4 - iVar5) + *(int *)(param_1 + 0xb0);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  return 1;
}


