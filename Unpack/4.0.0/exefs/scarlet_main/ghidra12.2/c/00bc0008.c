/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc0008; name: FUN_00bc0008
 */


void FUN_00bc0008(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  long *plVar10;
  
  *param_1 = &PTR_FUN_0455a900;
  pbVar8 = (byte *)param_1[3];
  if (pbVar8 != *(byte **)PTR_DAT_047dabb0 && pbVar8 != (byte *)0x0) {
    lVar7 = tpidr_el0;
    if (((*pbVar8 & 1) != 0) && (lVar5 = *(long *)(pbVar8 + 0x10), lVar5 != 0)) {
      plVar9 = *(long **)(lVar7 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar5,0,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar5,0,8);
      }
    }
    plVar9 = *(long **)(lVar7 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar2 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,pbVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,pbVar8,0,8);
    }
  }
  param_1[3] = 0;
  if ((DAT_0483a770 != param_1) && ((long *)param_1[0x16] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  puVar3 = (uint *)param_1[0x1c];
  if ((puVar3 != (uint *)0x0) && (param_1[0x1a] == 0)) {
    uVar2 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      lVar7 = tpidr_el0;
      do {
        puVar3 = puVar3 + 2;
        pbVar8 = *(byte **)puVar3;
        if (pbVar8 != (byte *)0x0) {
          if (((*pbVar8 & 1) != 0) && (lVar5 = *(long *)(pbVar8 + 0x10), lVar5 != 0)) {
            plVar9 = *(long **)(lVar7 + 0x30);
            if (plVar9 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar9 = DAT_04859430;
              *(long **)(lVar7 + 0x30) = DAT_04859430;
            }
            uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
            if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
              (**(code **)(*plVar9 + 0x18))(plVar9,lVar5,0,8);
            }
            else {
              FUN_00c48fe8(plVar9,lVar5,0,8);
            }
          }
          plVar9 = *(long **)(lVar7 + 0x30);
          if (plVar9 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar9 = DAT_04859430;
            *(long **)(lVar7 + 0x30) = DAT_04859430;
          }
          uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,pbVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar9,pbVar8,0,8);
          }
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      puVar3 = (uint *)param_1[0x1c];
      if (puVar3 == (uint *)0x0) goto LAB_00bc02a0;
    }
    operator_delete__(puVar3);
  }
LAB_00bc02a0:
  puVar3 = (uint *)param_1[0x19];
  param_1[0x1c] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[0x17] == 0)) {
    uVar2 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      puVar3 = (uint *)param_1[0x19];
      if (puVar3 == (uint *)0x0) goto LAB_00bc02f0;
    }
    operator_delete__(puVar3);
  }
LAB_00bc02f0:
  puVar3 = (uint *)param_1[0x15];
  param_1[0x19] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[0x13] == 0)) {
    uVar2 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      puVar3 = (uint *)param_1[0x15];
      if (puVar3 == (uint *)0x0) goto LAB_00bc0340;
    }
    operator_delete__(puVar3);
  }
LAB_00bc0340:
  puVar3 = (uint *)param_1[0x12];
  param_1[0x15] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[0x10] == 0)) {
    uVar2 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      puVar3 = (uint *)param_1[0x12];
      if (puVar3 == (uint *)0x0) goto LAB_00bc0390;
    }
    operator_delete__(puVar3);
  }
LAB_00bc0390:
  puVar3 = (uint *)param_1[0xf];
  param_1[0x12] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[0xd] == 0)) {
    uVar2 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      puVar3 = (uint *)param_1[0xf];
      if (puVar3 == (uint *)0x0) goto LAB_00bc03e0;
    }
    operator_delete__(puVar3);
  }
LAB_00bc03e0:
  puVar3 = (uint *)param_1[0xc];
  param_1[0xf] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[10] == 0)) {
    uVar2 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      puVar3 = (uint *)param_1[0xc];
      if (puVar3 == (uint *)0x0) goto LAB_00bc0430;
    }
    operator_delete__(puVar3);
  }
LAB_00bc0430:
  puVar3 = (uint *)param_1[9];
  param_1[0xc] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[7] == 0)) {
    uVar2 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      puVar3 = (uint *)param_1[9];
      if (puVar3 == (uint *)0x0) goto LAB_00bc0480;
    }
    operator_delete__(puVar3);
  }
LAB_00bc0480:
  puVar3 = (uint *)param_1[6];
  param_1[9] = 0;
  if ((puVar3 != (uint *)0x0) && (param_1[4] == 0)) {
    uVar2 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      puVar3 = (uint *)param_1[6];
      if (puVar3 == (uint *)0x0) goto LAB_00bc04d0;
    }
    operator_delete__(puVar3);
  }
LAB_00bc04d0:
  param_1[6] = 0;
  if ((((param_1[1] & 1) != 0) &&
      (plVar9 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar9 != (long *)0x0)) &&
     (plVar9[1] == 0)) {
    if (*plVar9 != 0) {
      FUN_00bfee44(plVar9);
    }
    lVar7 = tpidr_el0;
    plVar10 = *(long **)(lVar7 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar2 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,plVar9,0,8);
    }
  }
  param_1[1] = 0;
  return;
}


