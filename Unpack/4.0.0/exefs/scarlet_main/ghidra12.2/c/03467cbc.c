/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03467cbc; name: FUN_03467cbc
 */


int FUN_03467cbc(long param_1,void *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  char *__s;
  MutexType *pMVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a8 [72];
  
  puVar4 = PTR_DAT_047e6f28;
  lVar13 = *(long *)(param_3 + 0x18);
  if (lVar13 != 0) {
    do {
      if (*(short *)(lVar13 + 0x34) == 0x2103) {
        lVar12 = *(long *)puVar4;
        pMVar9 = (MutexType *)(lVar12 + 0xa8);
        uVar1 = *(uint *)(lVar13 + 0x30);
        nn::os::LockMutex(pMVar9);
        uVar2 = *(uint *)(lVar12 + 0xd0);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          plVar8 = *(long **)(*(long *)(lVar12 + 200) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          if (plVar8 != (long *)0x0) {
            while (*(uint *)(plVar8 + 2) != uVar1) {
              plVar8 = (long *)plVar8[1];
              if (plVar8 == (long *)0x0) goto LAB_03467f1c;
            }
            *(int *)((long)plVar8 + 0x14) = *(int *)((long)plVar8 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar9);
            iVar6 = FUN_03467cbc(param_1,param_2,plVar8);
            (**(code **)(*plVar8 + 0x18))(plVar8);
            if (iVar6 == 1) goto LAB_03467f0c;
            goto LAB_03467f8c;
          }
        }
LAB_03467f1c:
        nn::os::UnlockMutex(pMVar9);
        iVar6 = 2;
        goto LAB_03467f8c;
      }
      if (*(short *)(lVar13 + 0x34) == 0x403) {
        uVar1 = *(uint *)(lVar13 + 0x38);
        *(uint *)((long)param_2 + 4) = uVar1;
        uVar2 = *(uint *)(param_1 + 0xd0);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (plVar8 = *(long **)(*(long *)(param_1 + 200) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
              plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (*(uint *)(plVar8 + 1) == uVar1) {
              __s = (char *)plVar8[2];
              if (*(char *)((long)param_2 + 0x10) != '\0') {
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*(undefined8 *)((long)param_2 + 8));
              }
              *(undefined8 *)((long)param_2 + 8) = 0;
              *(undefined1 *)((long)param_2 + 0x10) = 0;
              sVar7 = strlen(__s);
              if ((((sVar7 < 5) || (__s[sVar7 - 4] != '.')) || (__s[sVar7 - 3] != 'b')) ||
                 ((__s[sVar7 - 2] != 'n' || (__s[sVar7 - 1] != 'k')))) {
                FUN_034601fc((undefined8 *)((long)param_2 + 8),__s,&DAT_03ca3297);
              }
              else {
                *(char **)((long)param_2 + 8) = __s;
                *(undefined1 *)((long)param_2 + 0x10) = 0;
              }
              break;
            }
          }
        }
        memcpy(auStack_a8,param_2,0x48);
        iVar6 = FUN_03468198(param_1,auStack_a8,2,0,0);
        if (iVar6 != 1) goto LAB_03467f8c;
        pMVar9 = *(MutexType **)puVar4;
        uVar1 = *(uint *)(lVar13 + 0x30);
        nn::os::LockMutex(pMVar9);
        uVar2 = *(uint *)(pMVar9 + 0x28);
        if (uVar2 == 0) {
LAB_03467f2c:
          nn::os::UnlockMutex(pMVar9);
          iVar6 = 2;
        }
        else {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          lVar12 = *(long *)(*(long *)(pMVar9 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          while( true ) {
            if (lVar12 == 0) goto LAB_03467f2c;
            if (*(uint *)(lVar12 + 0x10) == uVar1) break;
            lVar12 = *(long *)(lVar12 + 8);
          }
          *(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar9);
          plVar8 = (long *)(lVar12 + -8);
          iVar6 = (**(code **)(*plVar8 + 0x138))(plVar8);
          if (iVar6 == 1) goto LAB_03467f0c;
          (**(code **)(*plVar8 + 0x30))(plVar8);
        }
        uVar1 = *(uint *)(lVar13 + 0x38);
        nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
        uVar2 = *(uint *)(param_1 + 0xb0);
        if (uVar2 == 0) goto LAB_03467f80;
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        puVar10 = *(uint **)(*(long *)(param_1 + 0xa8) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
        goto joined_r0x03467f60;
      }
LAB_03467f0c:
      lVar13 = *(long *)(lVar13 + 0x18);
    } while (lVar13 != 0);
  }
  return 1;
joined_r0x03467f60:
  if (puVar10 == (uint *)0x0) goto LAB_03467f80;
  if ((*puVar10 == uVar1) && (*(long *)(puVar10 + 2) == 0)) {
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
    FUN_034607d0(puVar10,0);
    goto LAB_03467f8c;
  }
  puVar10 = *(uint **)(puVar10 + 4);
  goto joined_r0x03467f60;
LAB_03467f80:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
LAB_03467f8c:
  puVar5 = PTR_DAT_047e70e0;
  lVar12 = *(long *)(param_3 + 0x18);
  do {
    if (lVar12 == lVar13) {
      return iVar6;
    }
    if (*(short *)(lVar12 + 0x34) == 0x2103) {
      lVar11 = *(long *)puVar4;
      pMVar9 = (MutexType *)(lVar11 + 0xa8);
      uVar1 = *(uint *)(lVar12 + 0x30);
      nn::os::LockMutex(pMVar9);
      uVar2 = *(uint *)(lVar11 + 0xd0);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        for (plVar8 = *(long **)(*(long *)(lVar11 + 200) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
            plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
          if (*(uint *)(plVar8 + 2) == uVar1) {
            *(int *)((long)plVar8 + 0x14) = *(int *)((long)plVar8 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar9);
            FUN_034683a8(param_1,plVar8);
            (**(code **)(*plVar8 + 0x18))(plVar8);
            goto LAB_03468094;
          }
        }
      }
LAB_03468090:
      nn::os::UnlockMutex(pMVar9);
    }
    else if (*(short *)(lVar12 + 0x34) == 0x403) {
      pMVar9 = *(MutexType **)puVar4;
      uVar1 = *(uint *)(lVar12 + 0x30);
      nn::os::LockMutex(pMVar9);
      uVar2 = *(uint *)(pMVar9 + 0x28);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        for (lVar11 = *(long *)(*(long *)(pMVar9 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
            lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
          if (*(uint *)(lVar11 + 0x10) == uVar1) {
            *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar9);
            plVar8 = (long *)(lVar11 + -8);
            (**(code **)(*plVar8 + 0x140))(plVar8);
            (**(code **)(*plVar8 + 0x30))(plVar8);
            (**(code **)(*plVar8 + 0x30))(plVar8);
            goto LAB_03467ffc;
          }
        }
      }
      nn::os::UnlockMutex(pMVar9);
LAB_03467ffc:
      uVar1 = *(uint *)(lVar12 + 0x38);
      nn::os::LockMutex((MutexType *)puVar5);
      uVar2 = *(uint *)(param_1 + 0xb0);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        for (puVar10 = *(uint **)(*(long *)(param_1 + 0xa8) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
            puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 4)) {
          if ((*puVar10 == uVar1) && (*(long *)(puVar10 + 2) == 0)) {
            nn::os::UnlockMutex((MutexType *)puVar5);
            FUN_034607d0(puVar10,0);
            goto LAB_03468094;
          }
        }
      }
      pMVar9 = (MutexType *)puVar5;
      goto LAB_03468090;
    }
LAB_03468094:
    lVar12 = *(long *)(lVar12 + 0x18);
  } while( true );
}


