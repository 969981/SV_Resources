/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03488c60; name: FUN_03488c60
 */


void FUN_03488c60(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  MutexType *pMVar9;
  long *plVar10;
  int *piVar11;
  
  piVar6 = *(int **)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((uVar2 == 0) || (*piVar6 == param_2)) {
    piVar11 = piVar6;
  }
  else {
    lVar7 = (ulong)uVar2 * 0x48;
    piVar8 = piVar6;
    do {
      lVar7 = lVar7 + -0x48;
      if (lVar7 == 0) {
        return;
      }
      piVar11 = piVar8 + 0x12;
      piVar1 = piVar8 + 0x12;
      piVar8 = piVar11;
    } while (*piVar1 != param_2);
  }
  if ((piVar11 == piVar6 + (ulong)uVar2 * 0x12) || (*(long *)(piVar11 + 4) != 0)) {
    return;
  }
  pMVar9 = *(MutexType **)PTR_DAT_047e6f28;
  uVar2 = piVar11[2];
  nn::os::LockMutex(pMVar9);
  uVar3 = *(uint *)(pMVar9 + 0x28);
  if (uVar3 != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
    for (lVar7 = *(long *)(*(long *)(pMVar9 + 0x20) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
        lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
      if (*(uint *)(lVar7 + 0x10) == uVar2) {
        plVar10 = (long *)(lVar7 + -8);
        *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar9);
        if (((*(long *)(param_1 + 0x30) != 0) && (*(long *)(lVar7 + 0x90) != 0)) &&
           (*(long *)(lVar7 + 0x90) == *(long *)(param_1 + 0x30))) {
          *(long **)(piVar11 + 4) = plVar10;
          iVar5 = FUN_034a946c(plVar10,param_1);
          if (iVar5 != 1) {
            piVar11[4] = 0;
            piVar11[5] = 0;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x03488da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x30))(plVar10);
        return;
      }
    }
  }
  nn::os::UnlockMutex(pMVar9);
  return;
}


