/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b3448; name: FUN_034b3448
 */


void FUN_034b3448(long *param_1,uint param_2,long param_3)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long lStack_60;
  uint local_58;
  undefined4 uStack_54;
  
  puVar5 = PTR_DAT_047e2fd0;
  if ((*(int *)(param_3 + 0x28) != 0) || (*(int *)(param_3 + 0x30) != 0)) {
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
    return;
  }
  if (*(long *)(param_3 + 0x20) != 0) {
    *(undefined4 *)(param_3 + 0x28) = 0;
    (**(code **)(puVar5 + 0x30))(0);
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined4 *)(param_3 + 0x2c) = 0;
  }
  uVar14 = *(uint *)(param_3 + 0x68);
  if ((uVar14 >> 0x16 & 1) != 0) {
    lVar15 = *(long *)PTR_DAT_047e6988;
    nn::os::LockMutex((MutexType *)(lVar15 + 0x20));
    puVar7 = *(uint **)(lVar15 + 0x10);
    uVar14 = *(uint *)(lVar15 + 0x18);
    puVar11 = puVar7 + (ulong)uVar14 * 6;
    if ((uVar14 != 0) && (*puVar7 != param_2)) {
      lVar12 = (ulong)uVar14 * 0x18;
      do {
        lVar12 = lVar12 + -0x18;
        if (lVar12 == 0) {
          puVar7 = puVar11;
          break;
        }
        puVar1 = puVar7 + 6;
        puVar8 = puVar7 + 6;
        puVar7 = puVar1;
      } while (*puVar8 != param_2);
    }
    if (puVar11 != puVar7) {
      if (puVar7 < puVar11 + -6) {
        do {
          puVar8 = puVar7 + 6;
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar7 + 10);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 8);
          puVar7 = puVar8;
        } while (puVar8 < puVar11 + -6);
        uVar14 = *(uint *)(lVar15 + 0x18);
      }
      *(uint *)(lVar15 + 0x18) = uVar14 - 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
    uVar14 = *(uint *)(param_3 + 0x68);
  }
  pcVar2 = *(code **)(param_3 + 0x58);
  local_68 = *(undefined8 *)(param_3 + 0x60);
  lStack_60 = *(long *)(param_3 + 0x38);
  uStack_54 = *(undefined4 *)(param_3 + 0x34);
  uVar6 = *(uint *)(param_1 + 1);
  lVar15 = lStack_60;
  if (uVar6 != 0) {
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = param_2 / uVar6;
    }
    plVar10 = (long *)(*param_1 + (ulong)(param_2 - uVar4 * uVar6) * 8);
    lVar12 = *plVar10;
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x54) != param_2) {
        do {
          lVar9 = lVar12;
          lVar12 = *(long *)(lVar9 + 0x70);
          if (lVar12 == 0) goto LAB_034b35fc;
        } while (*(uint *)(lVar12 + 0x54) != param_2);
        plVar10 = (long *)(lVar9 + 0x70);
      }
      *plVar10 = *(long *)(lVar12 + 0x70);
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      lVar15 = *(long *)(param_3 + 0x38);
    }
  }
LAB_034b35fc:
  local_98 = 0;
  local_88 = 0;
  local_80 = 0xff;
  local_78 = 0xff;
  local_70 = 0;
  local_90 = *(undefined4 *)(param_3 + 0x54);
  uVar6 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
  if (uVar6 != 0) {
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = (uint)lVar15 / uVar6;
    }
    for (plVar10 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                             (ulong)((uint)lVar15 - uVar4 * uVar6) * 8); plVar10 != (long *)0x0;
        plVar10 = (long *)*plVar10) {
      if (plVar10[1] == lVar15) {
        if (plVar10[2] != 0) {
          local_98 = plVar10[2];
        }
        break;
      }
    }
  }
  local_58 = param_2;
  FUN_034c8be8(param_3,&local_98);
  piVar13 = *(int **)(param_3 + 0x40);
  if ((piVar13 != (int *)0x0) && (iVar3 = *piVar13, *piVar13 = iVar3 + -1, iVar3 + -1 == 0)) {
    uVar6 = piVar13[1];
    if (uVar6 != 0) {
      uVar16 = 0;
      plVar10 = (long *)(piVar13 + 4);
      do {
        if (*plVar10 != 0) {
          (**(code **)(puVar5 + 0x30))(0);
          uVar6 = piVar13[1];
        }
        uVar16 = uVar16 + 1;
        plVar10 = plVar10 + 4;
      } while (uVar16 < uVar6);
    }
    (**(code **)(puVar5 + 0x30))(0,piVar13);
  }
  (**(code **)(puVar5 + 0x30))(0,param_3);
  if ((uVar14 & 1) == 0) {
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  }
  else {
    nn::os::ClearEvent((EventType *)(param_1 + 7));
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
    (*pcVar2)(1,&local_68);
    nn::os::SignalEvent((EventType *)(param_1 + 7));
  }
  return;
}


