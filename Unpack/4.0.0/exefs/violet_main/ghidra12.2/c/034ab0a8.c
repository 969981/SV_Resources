/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ab0a8; name: FUN_034ab0a8
 */


int FUN_034ab0a8(long *param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar7 = PTR_DAT_047e6f28;
  pMVar1 = *(MutexType **)PTR_DAT_047e6f28;
  if ((*(uint *)((long)param_1 + 0xda) & 0x20000) != 0) {
    pMVar1 = *(MutexType **)PTR_DAT_047e6f28 + 0x38;
  }
  nn::os::LockMutex(pMVar1);
  iVar5 = *(int *)((long)param_1 + 0x1c) + -1;
  *(int *)((long)param_1 + 0x1c) = iVar5;
  if (iVar5 != 0) goto LAB_034ab3b8;
  uVar3 = *(uint *)(param_1 + 3);
  pMVar2 = *(MutexType **)puVar7;
  if ((*(uint *)((long)param_1 + 0xda) & 0x20000) != 0) {
    pMVar2 = *(MutexType **)puVar7 + 0x38;
  }
  nn::os::LockMutex(pMVar2);
  uVar4 = *(uint *)(pMVar2 + 0x28);
  if (uVar4 != 0) {
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar3 / uVar4;
    }
    plVar8 = (long *)(*(long *)(pMVar2 + 0x20) + (ulong)(uVar3 - uVar6 * uVar4) * 8);
    lVar9 = *plVar8;
    if (lVar9 != 0) {
      if (*(uint *)(lVar9 + 0x10) != uVar3) {
        do {
          lVar10 = lVar9;
          lVar9 = *(long *)(lVar10 + 8);
          if (lVar9 == 0) goto LAB_034ab170;
        } while (*(uint *)(lVar9 + 0x10) != uVar3);
        plVar8 = (long *)(lVar10 + 8);
      }
      *plVar8 = *(long *)(lVar9 + 8);
      *(int *)(pMVar2 + 0x30) = *(int *)(pMVar2 + 0x30) + -1;
    }
  }
LAB_034ab170:
  nn::os::UnlockMutex(pMVar2);
  (**(code **)(*param_1 + 0x20))(param_1);
  puVar7 = PTR_DAT_047e70c0;
  if (param_1[0x12] != 0) {
    lVar9 = param_1[0x13];
    if (((((lVar9 != 0) && (lVar10 = *(long *)(lVar9 + 0x90), lVar10 != 0)) &&
         (*(short *)(lVar10 + 0x90) < 1)) &&
        ((*(short *)(lVar10 + 0x94) < 1 && (*(short *)(lVar10 + 0x88) == 0)))) &&
       ((*(short *)(lVar10 + 0x8a) == 0 &&
        ((*(long *)(lVar10 + 0x10) == 0 && (*(int *)(lVar10 + 8) == 0)))))) {
      if ((*(byte *)(lVar10 + 0x98) >> 1 & 1) == 0) {
LAB_034ab24c:
        if (*(long *)(lVar9 + 0x98) != 0) {
          FUN_034ac158();
        }
        if (*(long *)(lVar9 + 0xa0) != 0) {
          FUN_034ac158();
        }
      }
      else {
        plVar8 = (long *)(PTR_DAT_047e70c0 + 0x10);
        lVar11 = 0;
        do {
          lVar12 = lVar11;
          lVar11 = *plVar8;
          plVar8 = (long *)(lVar11 + 0x50);
        } while (lVar11 != 0 && lVar9 != lVar11);
        if (lVar11 != 0) {
          plVar8 = (long *)(PTR_DAT_047e70c0 + 0x10);
          if (*(long *)(PTR_DAT_047e70c0 + 0x10) != lVar11) {
            plVar8 = (long *)(lVar12 + 0x50);
          }
          *plVar8 = *(long *)(lVar11 + 0x50);
          if (*(long *)(puVar7 + 8) == lVar11) {
            *(long *)(puVar7 + 8) = lVar12;
          }
          *(int *)puVar7 = *(int *)puVar7 + -1;
          lVar10 = *(long *)(lVar9 + 0x90);
        }
        if (lVar10 != 0) goto LAB_034ab24c;
      }
      FUN_034ac254(&DAT_048b0280,*(undefined8 *)(lVar9 + 0x90));
      *(undefined8 *)(lVar9 + 0x90) = 0;
    }
    puVar7 = PTR_DAT_047e70c0;
    lVar9 = param_1[0x14];
    if ((((lVar9 != 0) && (lVar10 = *(long *)(lVar9 + 0x90), lVar10 != 0)) &&
        (*(short *)(lVar10 + 0x90) < 1)) &&
       (((*(short *)(lVar10 + 0x94) < 1 && (*(short *)(lVar10 + 0x88) == 0)) &&
        ((*(short *)(lVar10 + 0x8a) == 0 &&
         ((*(long *)(lVar10 + 0x10) == 0 && (*(int *)(lVar10 + 8) == 0)))))))) {
      if ((*(byte *)(lVar10 + 0x98) >> 1 & 1) == 0) {
LAB_034ab334:
        if (*(long *)(lVar9 + 0x98) != 0) {
          FUN_034ac158();
        }
        if (*(long *)(lVar9 + 0xa0) != 0) {
          FUN_034ac158();
        }
      }
      else {
        plVar8 = (long *)(PTR_DAT_047e70c0 + 0x10);
        lVar11 = 0;
        do {
          lVar12 = lVar11;
          lVar11 = *plVar8;
          plVar8 = (long *)(lVar11 + 0x50);
        } while (lVar11 != 0 && lVar9 != lVar11);
        if (lVar11 != 0) {
          plVar8 = (long *)(PTR_DAT_047e70c0 + 0x10);
          if (*(long *)(PTR_DAT_047e70c0 + 0x10) != lVar11) {
            plVar8 = (long *)(lVar12 + 0x50);
          }
          *plVar8 = *(long *)(lVar11 + 0x50);
          if (*(long *)(puVar7 + 8) == lVar11) {
            *(long *)(puVar7 + 8) = lVar12;
          }
          *(int *)puVar7 = *(int *)puVar7 + -1;
          lVar10 = *(long *)(lVar9 + 0x90);
        }
        if (lVar10 != 0) goto LAB_034ab334;
      }
      FUN_034ac254(&DAT_048b0280,*(undefined8 *)(lVar9 + 0x90));
      *(undefined8 *)(lVar9 + 0x90) = 0;
    }
  }
  plVar8 = (long *)param_1[0x13];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x60))(plVar8,param_1);
  }
  plVar8 = (long *)param_1[0x14];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x60))(plVar8,param_1);
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2,param_1);
LAB_034ab3b8:
  nn::os::UnlockMutex(pMVar1);
  return iVar5;
}


