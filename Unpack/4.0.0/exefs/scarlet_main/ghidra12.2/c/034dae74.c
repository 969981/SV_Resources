/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034dae74; name: FUN_034dae74
 */


undefined8 FUN_034dae74(long param_1,uint param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  
  lVar6 = *(long *)PTR_DAT_047e6f28;
  nn::os::LockMutex((MutexType *)(lVar6 + 0x70));
  uVar8 = *(uint *)(lVar6 + 0x98);
  if (uVar8 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = param_2 / uVar8;
    }
    for (plVar7 = *(long **)(*(long *)(lVar6 + 0x90) + (ulong)(param_2 - uVar9 * uVar8) * 8);
        plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
      if (*(uint *)(plVar7 + 2) == param_2) {
        *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
        break;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x70));
  piVar3 = *(int **)(param_1 + 0x28);
  uVar8 = *(uint *)(param_1 + 0x30);
  if ((uVar8 == 0) || (*piVar3 == param_3)) {
    piVar4 = piVar3;
  }
  else {
    lVar6 = (ulong)uVar8 * 0x10;
    piVar5 = piVar3;
    do {
      lVar6 = lVar6 + -0x10;
      if (lVar6 == 0) goto LAB_034db014;
      piVar4 = piVar5 + 4;
      piVar1 = piVar5 + 4;
      piVar5 = piVar4;
    } while (*piVar1 != param_3);
  }
  if (piVar4 != piVar3 + (ulong)uVar8 * 4) {
    if (plVar7 == *(long **)(piVar4 + 2)) {
      if (plVar7 == (long *)0x0) {
        return 1;
      }
      (**(code **)(*plVar7 + 0x18))(plVar7);
      return 1;
    }
    (*(long **)(piVar4 + 2))[4] = 0;
    (**(code **)(**(long **)(piVar4 + 2) + 0x18))();
    piVar4 = *(int **)(param_1 + 0x28);
    uVar8 = *(uint *)(param_1 + 0x30);
    piVar3 = piVar4 + (ulong)uVar8 * 4;
    if ((uVar8 != 0) && (*piVar4 != param_3)) {
      lVar6 = (ulong)uVar8 * 0x10;
      do {
        lVar6 = lVar6 + -0x10;
        if (lVar6 == 0) {
          piVar4 = piVar3;
          break;
        }
        piVar1 = piVar4 + 4;
        piVar5 = piVar4 + 4;
        piVar4 = piVar1;
      } while (*piVar5 != param_3);
    }
    if (piVar3 != piVar4) {
      if (piVar4 < piVar3 + -4) {
        do {
          piVar5 = piVar4 + 4;
          *(undefined8 *)piVar4 = *(undefined8 *)piVar5;
          *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar4 + 6);
          piVar4 = piVar5;
        } while (piVar5 < piVar3 + -4);
        uVar8 = *(uint *)(param_1 + 0x30);
      }
      uVar8 = uVar8 - 1;
      *(uint *)(param_1 + 0x30) = uVar8;
    }
  }
LAB_034db014:
  if (plVar7 == (long *)0x0) {
    return 0x10;
  }
  piVar4 = *(int **)(param_1 + 0x28);
  piVar3 = piVar4;
  if ((uVar8 != 0) && (*piVar4 != param_3)) {
    lVar6 = (ulong)uVar8 * 0x10;
    piVar5 = piVar4;
    do {
      lVar6 = lVar6 + -0x10;
      if (lVar6 == 0) goto LAB_034db09c;
      piVar3 = piVar5 + 4;
      piVar1 = piVar5 + 4;
      piVar5 = piVar3;
    } while (*piVar1 != param_3);
  }
  if (piVar3 != piVar4 + (ulong)uVar8 * 4) {
LAB_034db07c:
    *(long **)(piVar3 + 2) = plVar7;
    plVar7[4] = *(long *)(param_1 + 0x18);
    if ((param_4 & 1) != 0) {
      FUN_034da454(*(undefined8 *)(param_1 + 0x18));
    }
    return 1;
  }
LAB_034db09c:
  uVar9 = *(uint *)(param_1 + 0x34);
  if (uVar9 <= uVar8) {
    iVar2 = uVar9 + (uVar9 >> 1);
    if (uVar9 == 0) {
      iVar2 = 1;
    }
    uVar9 = iVar2 + uVar9;
    piVar4 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar4,(ulong)uVar9 << 4);
    if (piVar4 == (int *)0x0) goto LAB_034db104;
    *(int **)(param_1 + 0x28) = piVar4;
    *(uint *)(param_1 + 0x34) = uVar9;
  }
  if (uVar8 < uVar9) {
    uVar8 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar8 + 1;
    if (piVar4 != (int *)0x0) {
      piVar3 = piVar4 + (ulong)uVar8 * 4;
      *piVar3 = param_3;
      goto LAB_034db07c;
    }
  }
LAB_034db104:
  (**(code **)(*plVar7 + 0x18))(plVar7);
  return 0x34;
}


