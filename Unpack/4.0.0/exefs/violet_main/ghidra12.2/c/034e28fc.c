/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e28fc; name: FUN_034e28fc
 */


int FUN_034e28fc(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  MutexType *pMVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar4 = PTR_DAT_047e6f28;
  if (*(int *)(param_1 + 0x10) != 0) {
    for (plVar9 = *(long **)(param_1 + 0x28); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (*(int *)(plVar9 + 1) == param_2) {
        if ((param_3 & 1) == 0) {
          if (*(int *)(plVar9 + 4) == 0) {
            return 1;
          }
          puVar10 = (uint *)plVar9[3];
          do {
            pMVar6 = *(MutexType **)puVar4;
            uVar1 = *puVar10;
            nn::os::LockMutex(pMVar6);
            uVar2 = *(uint *)(pMVar6 + 0x28);
            if (uVar2 != 0) {
              uVar3 = 0;
              if (uVar2 != 0) {
                uVar3 = uVar1 / uVar2;
              }
              for (lVar7 = *(long *)(*(long *)(pMVar6 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
                  lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
                if (*(uint *)(lVar7 + 0x10) == uVar1) {
                  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
                  nn::os::UnlockMutex(pMVar6);
                  plVar8 = (long *)(lVar7 + -8);
                  (**(code **)(*plVar8 + 0x140))(plVar8);
                  (**(code **)(*plVar8 + 0x30))(plVar8);
                  (**(code **)(*plVar8 + 0x30))(plVar8);
                  goto LAB_034e2a58;
                }
              }
            }
            nn::os::UnlockMutex(pMVar6);
LAB_034e2a58:
            puVar10 = puVar10 + 1;
            if (puVar10 == (uint *)(plVar9[3] + (ulong)*(uint *)(plVar9 + 4) * 4)) {
              return 1;
            }
          } while( true );
        }
        if (*(int *)(plVar9 + 4) == 0) {
          return 1;
        }
        puVar10 = (uint *)plVar9[3];
        goto LAB_034e2970;
      }
    }
  }
  return 1;
LAB_034e2970:
  pMVar6 = *(MutexType **)puVar4;
  uVar1 = *puVar10;
  nn::os::LockMutex(pMVar6);
  uVar2 = *(uint *)(pMVar6 + 0x28);
  if (uVar2 == 0) {
LAB_034e2abc:
    nn::os::UnlockMutex(pMVar6);
    iVar5 = 2;
LAB_034e2ac8:
    puVar11 = (uint *)plVar9[3];
    do {
      if (puVar11 == puVar10) {
        return iVar5;
      }
      pMVar6 = *(MutexType **)puVar4;
      uVar1 = *puVar11;
      nn::os::LockMutex(pMVar6);
      uVar2 = *(uint *)(pMVar6 + 0x28);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        for (lVar7 = *(long *)(*(long *)(pMVar6 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
            lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
          if (*(uint *)(lVar7 + 0x10) == uVar1) {
            *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar6);
            plVar9 = (long *)(lVar7 + -8);
            (**(code **)(*plVar9 + 0x140))(plVar9);
            (**(code **)(*plVar9 + 0x30))(plVar9);
            (**(code **)(*plVar9 + 0x30))(plVar9);
            goto LAB_034e2b1c;
          }
        }
      }
      nn::os::UnlockMutex(pMVar6);
LAB_034e2b1c:
      puVar11 = puVar11 + 1;
    } while( true );
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  lVar7 = *(long *)(*(long *)(pMVar6 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
  while( true ) {
    if (lVar7 == 0) goto LAB_034e2abc;
    if (*(uint *)(lVar7 + 0x10) == uVar1) break;
    lVar7 = *(long *)(lVar7 + 8);
  }
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  nn::os::UnlockMutex(pMVar6);
  plVar8 = (long *)(lVar7 + -8);
  iVar5 = (**(code **)(*plVar8 + 0x138))(plVar8);
  if (iVar5 != 1) {
    (**(code **)(*plVar8 + 0x30))(plVar8);
    goto LAB_034e2ac8;
  }
  puVar10 = puVar10 + 1;
  if (puVar10 == (uint *)(plVar9[3] + (ulong)*(uint *)(plVar9 + 4) * 4)) {
    return 1;
  }
  goto LAB_034e2970;
}


