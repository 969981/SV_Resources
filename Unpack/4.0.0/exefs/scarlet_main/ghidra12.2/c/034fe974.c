/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fe974; name: FUN_034fe974
 */


undefined8 FUN_034fe974(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  plVar7 = *(long **)(param_1 + 8);
  if ((*(ushort *)(plVar7 + 0x33) & 1) == 0) {
    (**(code **)(*plVar7 + 0x58))(plVar7,0);
  }
  else if ((*(ushort *)(plVar7 + 0x33) >> 4 & 1) != 0) {
    (**(code **)(*plVar7 + 0x60))();
  }
  lVar9 = *(long *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (((((*(byte *)(lVar9 + 0xee) & 1) == 0) && (*(int *)(lVar9 + 0xcc) == 0)) &&
      (*(int *)(lVar9 + 0xd0) == 0)) &&
     ((*(int *)(lVar9 + 0xd4) == 0 && (*(int *)(lVar9 + 0xd8) == 0)))) {
    if (*(long **)(lVar9 + 0x178) == (long *)0x0) {
      return 0;
    }
    lVar10 = *(long *)(*(long *)(lVar9 + 0x10) + 0x58);
    if ((lVar10 == 0) ||
       (((*(char *)(lVar10 + 0xc6) == '\0' ||
         ((uVar8 = (**(code **)(**(long **)(lVar9 + 0x178) + 0x30))(), (uVar8 & 1) == 0 &&
          ((*(float *)(lVar10 + 100) <= 0.0 || (*(int *)(lVar10 + 0x60) == 0)))))) &&
        (*(int *)(lVar10 + 0x38) == 0)))) {
      return 0;
    }
  }
  FUN_0346fd6c(*(undefined8 *)(param_1 + 8),param_1 + 0x30);
  iVar6 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x170) + 0x88))();
  puVar5 = PTR_DAT_047e6f28;
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar7 = *(long **)(param_1 + 0x30);
    if (iVar6 == 10) {
      do {
        if ((*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x78) != *plVar7) ||
           ((int)plVar7[2] == 2)) {
          lVar9 = *(long *)puVar5;
          pMVar1 = (MutexType *)(lVar9 + 0x38);
          uVar2 = *(uint *)(plVar7 + 1);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(lVar9 + 0x60);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (lVar9 = *(long *)(*(long *)(lVar9 + 0x58) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
                lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
              if (*(uint *)(lVar9 + 0x10) == uVar2) {
                plVar11 = (long *)(lVar9 + -8);
                *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar1);
                uVar8 = FUN_03471aac(plVar11);
                if ((uVar8 & 1) != 0) {
                  FUN_034edc5c(plVar11,plVar7,param_1);
                }
                (**(code **)(*plVar11 + 0x30))(plVar11);
                goto LAB_034fea98;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
        }
LAB_034fea98:
        plVar7 = plVar7 + 4;
      } while (plVar7 != (long *)(*(long *)(param_1 + 0x30) +
                                 (ulong)*(uint *)(param_1 + 0x38) * 0x20));
    }
    else {
      do {
        lVar9 = *(long *)puVar5;
        pMVar1 = (MutexType *)(lVar9 + 0x38);
        uVar2 = *(uint *)(plVar7 + 1);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(lVar9 + 0x60);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (lVar9 = *(long *)(*(long *)(lVar9 + 0x58) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
              lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
            if (*(uint *)(lVar9 + 0x10) == uVar2) {
              plVar11 = (long *)(lVar9 + -8);
              *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              uVar8 = FUN_03471aac(plVar11);
              if ((uVar8 & 1) != 0) {
                FUN_034edc5c(plVar11,plVar7,param_1);
              }
              (**(code **)(*plVar11 + 0x30))(plVar11);
              goto LAB_034feb48;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
LAB_034feb48:
        plVar7 = plVar7 + 4;
      } while (plVar7 != (long *)(*(long *)(param_1 + 0x30) +
                                 (ulong)*(uint *)(param_1 + 0x38) * 0x20));
    }
  }
  return 1;
}


