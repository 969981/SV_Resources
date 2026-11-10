/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bb9a58; name: FUN_00bb9a58
 */


void FUN_00bb9a58(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  
  *param_1 = &PTR_FUN_0455a690;
  puVar1 = PTR_DAT_047dabb0;
  pbVar9 = *(byte **)PTR_DAT_047dabb0;
  pbVar10 = (byte *)param_1[3];
  if (pbVar10 != pbVar9 && pbVar10 != (byte *)0x0) {
    lVar8 = tpidr_el0;
    if (((*pbVar10 & 1) != 0) && (lVar6 = *(long *)(pbVar10 + 0x10), lVar6 != 0)) {
      plVar11 = *(long **)(lVar8 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar3 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,lVar6,0,8);
      }
    }
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,pbVar10,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,pbVar10,0,8);
    }
    pbVar9 = *(byte **)puVar1;
  }
  pbVar10 = (byte *)param_1[4];
  param_1[3] = 0;
  if (pbVar10 != pbVar9 && pbVar10 != (byte *)0x0) {
    if (((*pbVar10 & 1) != 0) && (lVar8 = *(long *)(pbVar10 + 0x10), lVar8 != 0)) {
      lVar6 = tpidr_el0;
      plVar11 = *(long **)(lVar6 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,lVar8,0,8);
      }
    }
    lVar8 = tpidr_el0;
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,pbVar10,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,pbVar10,0,8);
    }
    pbVar9 = *(byte **)puVar1;
  }
  pbVar10 = (byte *)param_1[0x1a];
  param_1[4] = 0;
  if (pbVar10 != pbVar9 && pbVar10 != (byte *)0x0) {
    if (((*pbVar10 & 1) != 0) && (lVar8 = *(long *)(pbVar10 + 0x10), lVar8 != 0)) {
      lVar6 = tpidr_el0;
      plVar11 = *(long **)(lVar6 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,lVar8,0,8);
      }
    }
    lVar8 = tpidr_el0;
    plVar11 = *(long **)(lVar8 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,pbVar10,0,8);
    }
    else {
      FUN_00c48fe8(plVar11,pbVar10,0,8);
    }
  }
  param_1[0x1a] = 0;
  if (DAT_0483a758 != param_1) {
    if ((long *)param_1[0x18] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x18] + 8))();
    }
    if ((long *)param_1[0x19] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x19] + 8))();
    }
  }
  puVar4 = (uint *)param_1[0x17];
  if ((puVar4 != (uint *)0x0) && (param_1[0x15] == 0)) {
    uVar3 = (ulong)*puVar4;
    if (0 < (int)*puVar4) {
      do {
        puVar4 = puVar4 + 2;
        if (*(long **)puVar4 != (long *)0x0) {
          (**(code **)(**(long **)puVar4 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar4 = (uint *)param_1[0x17];
      if (puVar4 == (uint *)0x0) goto LAB_00bb9c54;
    }
    operator_delete__(puVar4);
  }
LAB_00bb9c54:
  puVar4 = (uint *)param_1[0x14];
  param_1[0x17] = 0;
  if ((puVar4 != (uint *)0x0) && (param_1[0x12] == 0)) {
    uVar3 = (ulong)*puVar4;
    if (0 < (int)*puVar4) {
      do {
        puVar4 = puVar4 + 2;
        if (*(long **)puVar4 != (long *)0x0) {
          (**(code **)(**(long **)puVar4 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar4 = (uint *)param_1[0x14];
      if (puVar4 == (uint *)0x0) goto LAB_00bb9ca4;
    }
    operator_delete__(puVar4);
  }
LAB_00bb9ca4:
  puVar4 = (uint *)param_1[0x11];
  param_1[0x14] = 0;
  if ((puVar4 != (uint *)0x0) && (param_1[0xf] == 0)) {
    uVar3 = (ulong)*puVar4;
    if (0 < (int)*puVar4) {
      do {
        puVar4 = puVar4 + 2;
        if (*(long **)puVar4 != (long *)0x0) {
          (**(code **)(**(long **)puVar4 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar4 = (uint *)param_1[0x11];
      if (puVar4 == (uint *)0x0) goto LAB_00bb9cf4;
    }
    operator_delete__(puVar4);
  }
LAB_00bb9cf4:
  puVar4 = (uint *)param_1[0xe];
  param_1[0x11] = 0;
  if ((puVar4 != (uint *)0x0) && (param_1[0xc] == 0)) {
    uVar3 = (ulong)*puVar4;
    if (0 < (int)*puVar4) {
      do {
        puVar4 = puVar4 + 2;
        if (*(long **)puVar4 != (long *)0x0) {
          (**(code **)(**(long **)puVar4 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar4 = (uint *)param_1[0xe];
      if (puVar4 == (uint *)0x0) goto LAB_00bb9d44;
    }
    operator_delete__(puVar4);
  }
LAB_00bb9d44:
  plVar11 = (long *)param_1[0xb];
  param_1[0xe] = 0;
  if ((plVar11 != (long *)0x0) && (*plVar11 == 0)) {
    operator_delete__(plVar11);
  }
  plVar11 = (long *)param_1[9];
  if ((plVar11 != (long *)0x0) && (*plVar11 == 0)) {
    operator_delete__(plVar11);
  }
  puVar4 = (uint *)param_1[7];
  if ((puVar4 != (uint *)0x0) && (param_1[5] == 0)) {
    uVar3 = (ulong)*puVar4;
    if (0 < (int)*puVar4) {
      lVar8 = tpidr_el0;
      do {
        puVar4 = puVar4 + 2;
        pbVar9 = *(byte **)puVar4;
        if (pbVar9 != (byte *)0x0) {
          if (((*pbVar9 & 1) != 0) && (lVar6 = *(long *)(pbVar9 + 0x10), lVar6 != 0)) {
            plVar11 = *(long **)(lVar8 + 0x30);
            if (plVar11 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar11 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
            if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
              (**(code **)(*plVar11 + 0x18))(plVar11,lVar6,0,8);
            }
            else {
              FUN_00c48fe8(plVar11,lVar6,0,8);
            }
          }
          plVar11 = *(long **)(lVar8 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar8 + 0x30) = DAT_04859430;
          }
          uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
          if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,pbVar9,0,8);
          }
          else {
            FUN_00c48fe8(plVar11,pbVar9,0,8);
          }
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar4 = (uint *)param_1[7];
      if (puVar4 == (uint *)0x0) goto LAB_00bb9f44;
    }
    operator_delete__(puVar4);
  }
LAB_00bb9f44:
  param_1[7] = 0;
  if ((((param_1[1] & 1) != 0) &&
      (plVar11 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar11 != (long *)0x0)) &&
     (plVar11[1] == 0)) {
    if (*plVar11 != 0) {
      FUN_00bfee44(plVar11);
    }
    lVar8 = tpidr_el0;
    plVar12 = *(long **)(lVar8 + 0x30);
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar11,0,8);
    }
    else {
      FUN_00c48fe8(plVar12,plVar11,0,8);
    }
  }
  param_1[1] = 0;
  return;
}


