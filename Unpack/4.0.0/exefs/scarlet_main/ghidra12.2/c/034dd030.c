/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034dd030; name: FUN_034dd030
 */


int FUN_034dd030(long param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  MutexType *pMVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  
  pMVar2 = (MutexType *)(param_1 + 0x68);
  nn::os::LockMutex(pMVar2);
  puVar10 = (undefined8 *)(param_1 + 0x88);
  if (param_2 != 1) {
    puVar10 = (undefined8 *)(param_1 + 0x98);
  }
  for (plVar7 = (long *)puVar10[1]; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    if ((int)plVar7[3] == param_3) goto LAB_034dd0f4;
  }
  plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x30);
  if (plVar7 == (long *)0x0) {
    nn::os::UnlockMutex(pMVar2);
    iVar3 = 0x34;
    if ((param_5 & 1) == 0) {
      iVar3 = 1;
    }
    return iVar3;
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  *(int *)(plVar7 + 3) = param_3;
  plVar7[4] = 0;
  plVar7[5] = 0;
  if (puVar10[1] == 0) {
    *puVar10 = plVar7;
    puVar10[1] = plVar7;
    *plVar7 = 0;
  }
  else {
    *plVar7 = puVar10[1];
    puVar10[1] = plVar7;
  }
LAB_034dd0f4:
  nn::os::UnlockMutex(pMVar2);
  piVar4 = (int *)plVar7[1];
  uVar9 = *(uint *)(plVar7 + 2);
  piVar13 = piVar4 + uVar9;
  piVar12 = piVar4;
  if ((uVar9 != 0) && (*piVar4 != param_4)) {
    lVar5 = (ulong)uVar9 * 4;
    piVar6 = piVar4;
    do {
      lVar5 = lVar5 + -4;
      if (lVar5 == 0) goto LAB_034dd178;
      piVar12 = piVar6 + 1;
      piVar1 = piVar6 + 1;
      piVar6 = piVar12;
    } while (*piVar1 != param_4);
  }
  if (piVar12 == piVar13) {
LAB_034dd178:
    if ((param_5 & 1) == 0) {
      return 1;
    }
    uVar11 = *(uint *)((long)plVar7 + 0x14);
    if (uVar11 <= uVar9) {
      iVar3 = uVar11 + (uVar11 >> 1);
      if (uVar11 == 0) {
        iVar3 = 1;
      }
      uVar11 = iVar3 + uVar11;
      piVar4 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar4,(ulong)uVar11 << 2);
      if (piVar4 == (int *)0x0) goto LAB_034dd1e0;
      plVar7[1] = (long)piVar4;
      *(uint *)((long)plVar7 + 0x14) = uVar11;
    }
    if (uVar9 < uVar11) {
      uVar9 = *(uint *)(plVar7 + 2);
      *(uint *)(plVar7 + 2) = uVar9 + 1;
      if (piVar4 != (int *)0x0) {
        piVar4[uVar9] = param_4;
      }
    }
  }
  else {
    if ((param_5 & 1) != 0) {
      return 1;
    }
    if (1 < uVar9) {
      *piVar12 = piVar13[-1];
      uVar9 = *(uint *)(plVar7 + 2);
    }
    *(uint *)(plVar7 + 2) = uVar9 - 1;
    piVar13 = piVar12;
  }
LAB_034dd1e0:
  puVar10 = (undefined8 *)plVar7[5];
  while( true ) {
    if (puVar10 == (undefined8 *)0x0) {
      return 1;
    }
    iVar3 = (**(code **)*puVar10)(puVar10,param_4,param_5 & 1);
    if (iVar3 != 1) break;
    puVar10 = (undefined8 *)puVar10[1];
  }
  if ((param_5 & 1) != 0) {
    for (puVar8 = (undefined8 *)plVar7[5]; puVar10 != puVar8; puVar8 = (undefined8 *)puVar8[1]) {
      (**(code **)*puVar8)(puVar8,param_4,0);
    }
  }
  uVar9 = *(uint *)(plVar7 + 2);
  if (1 < uVar9) {
    *piVar13 = *(int *)(plVar7[1] + (ulong)uVar9 * 4 + -4);
    uVar9 = *(uint *)(plVar7 + 2);
  }
  *(uint *)(plVar7 + 2) = uVar9 - 1;
  return iVar3;
}


