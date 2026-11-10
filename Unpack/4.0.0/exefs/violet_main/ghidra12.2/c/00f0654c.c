/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f0654c; name: FUN_00f0654c
 */


void FUN_00f0654c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1310));
  uVar2 = *(ulong *)(param_1 + 0x12b0);
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar10 = uVar2 - 1 & param_2;
    }
    else if (param_2 < uVar2) {
      uVar10 = param_2;
    }
    else {
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = param_2 / uVar2;
      }
      uVar10 = param_2 - uVar10 * uVar2;
    }
    lVar4 = *(long *)(param_1 + 0x12a8);
    puVar5 = *(undefined8 **)(lVar4 + uVar10 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar5, plVar12 != (long *)0x0)) {
      uVar6 = uVar2 - 1;
      if (uVar3 < 2) {
        do {
          if (plVar12[1] == param_2) {
            if (plVar12[2] == param_2) goto LAB_00f0660c;
          }
          else if ((plVar12[1] & uVar6) != uVar10) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar12[1];
          if (uVar11 == param_2) {
            if (plVar12[2] == param_2) goto LAB_00f0660c;
          }
          else {
            if (uVar2 <= uVar11) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar11 / uVar2;
              }
              uVar11 = uVar11 - uVar1 * uVar2;
            }
            if (uVar11 != uVar10) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  goto LAB_00f06718;
LAB_00f0660c:
  if (uVar3 < 2) {
    param_2 = uVar6 & param_2;
  }
  else if (uVar2 <= param_2) {
    uVar10 = 0;
    if (uVar2 != 0) {
      uVar10 = param_2 / uVar2;
    }
    param_2 = param_2 - uVar10 * uVar2;
  }
  plVar8 = *(long **)(lVar4 + param_2 * 8);
  plVar7 = (long *)*plVar8;
  if (plVar7 != plVar12) {
    plVar9 = (long *)*plVar7;
    plVar8 = plVar7;
    if (plVar9 != plVar12) {
      plVar7 = (long *)*plVar9;
      plVar8 = plVar9;
      if (plVar7 != plVar12) {
        plVar9 = (long *)*plVar7;
        plVar8 = plVar7;
        if (plVar9 != plVar12) {
          plVar8 = plVar9;
          for (plVar7 = (long *)*plVar9; plVar7 != plVar12; plVar7 = (long *)*plVar7) {
            plVar8 = plVar7;
          }
        }
      }
    }
  }
  if (plVar8 == (long *)(param_1 + 0x12d8)) {
LAB_00f0672c:
    if (*plVar12 != 0) {
      uVar10 = *(ulong *)(*plVar12 + 8);
      if (uVar3 < 2) {
        uVar10 = uVar10 & uVar6;
      }
      else if (uVar2 <= uVar10) {
        uVar11 = 0;
        if (uVar2 != 0) {
          uVar11 = uVar10 / uVar2;
        }
        uVar10 = uVar10 - uVar11 * uVar2;
      }
      if (uVar10 == param_2) goto LAB_00f066a4;
    }
    *(undefined8 *)(lVar4 + param_2 * 8) = 0;
  }
  else {
    uVar10 = plVar8[1];
    if (uVar3 < 2) {
      uVar10 = uVar10 & uVar6;
    }
    else if (uVar2 <= uVar10) {
      uVar11 = 0;
      if (uVar2 != 0) {
        uVar11 = uVar10 / uVar2;
      }
      uVar10 = uVar10 - uVar11 * uVar2;
    }
    if (uVar10 != param_2) goto LAB_00f0672c;
  }
LAB_00f066a4:
  lVar4 = *plVar12;
  if (lVar4 != 0) {
    uVar10 = *(ulong *)(lVar4 + 8);
    if (uVar3 < 2) {
      uVar10 = uVar10 & uVar6;
    }
    else if (uVar2 <= uVar10) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar10 / uVar2;
      }
      uVar10 = uVar10 - uVar3 * uVar2;
    }
    if (uVar10 != param_2) {
      *(long **)(*(long *)(param_1 + 0x12a8) + uVar10 * 8) = plVar8;
      lVar4 = *plVar12;
    }
  }
  *plVar8 = lVar4;
  *plVar12 = 0;
  *(long *)(param_1 + 0x1300) = *(long *)(param_1 + 0x1300) + -1;
  plVar8 = *(long **)(param_1 + 0x12e0);
  uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar12,0x30,0x10);
  }
  else {
    FUN_00c48fe8(plVar8,plVar12,0x30,0x10);
  }
LAB_00f06718:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1310));
  return;
}


