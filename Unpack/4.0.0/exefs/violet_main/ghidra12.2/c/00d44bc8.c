/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d44bc8; name: FUN_00d44bc8
 */


void FUN_00d44bc8(undefined1 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  switch(*param_1) {
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
    puVar5 = *(undefined8 **)(param_1 + 8);
    if (puVar5 == (undefined8 *)0x0) goto switchD_00d44c0c_default;
    break;
  case 3:
  case 7:
    puVar5 = *(undefined8 **)(param_1 + 8);
    if (puVar5 == (undefined8 *)0x0) goto switchD_00d44c0c_default;
    *puVar5 = &PTR_LAB_045a0398;
    if ((long *)puVar5[1] != (long *)0x0) {
      (**(code **)(*(long *)puVar5[1] + 0x20))();
    }
    break;
  case 8:
    puVar5 = *(undefined8 **)(param_1 + 8);
    if (puVar5 == (undefined8 *)0x0) goto switchD_00d44c0c_default;
    puVar9 = (undefined8 *)*puVar5;
    if (puVar9 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)puVar5[1];
      if (puVar6 == puVar9) {
        puVar5[1] = puVar9;
      }
      else {
        FUN_00d44bc8(puVar6 + -2);
        if (((puVar6 + -2 != puVar9) && (FUN_00d44bc8(puVar6 + -4), puVar6 + -4 != puVar9)) &&
           (FUN_00d44bc8(puVar6 + -6), puVar6 + -6 != puVar9)) {
          do {
            FUN_00d44bc8(puVar6 + -8);
            puVar6 = puVar6 + -2;
          } while (puVar9 + 6 != puVar6);
        }
        puVar5[1] = puVar9;
        puVar9 = (undefined8 *)*puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) break;
      }
LAB_00d44d78:
      lVar3 = tpidr_el0;
      plVar7 = *(long **)(lVar3 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar9,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,puVar9,0,8);
      }
    }
    break;
  case 9:
    puVar5 = *(undefined8 **)(param_1 + 8);
    if (puVar5 == (undefined8 *)0x0) goto switchD_00d44c0c_default;
    puVar6 = (undefined8 *)*puVar5;
    if (puVar6 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)puVar5[1];
      if (puVar9 == puVar6) {
        puVar9 = puVar6;
      }
      else {
        lVar3 = tpidr_el0;
        do {
          puVar9 = puVar9 + -1;
          puVar10 = (undefined8 *)*puVar9;
          *puVar9 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            FUN_00d44bc8(puVar10 + 2);
            *puVar10 = &PTR_LAB_045a0398;
            if ((long *)puVar10[1] != (long *)0x0) {
              (**(code **)(*(long *)puVar10[1] + 0x20))();
            }
            plVar7 = *(long **)(lVar3 + 0x30);
            if (plVar7 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar7 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
            if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
              (**(code **)(*plVar7 + 0x18))(plVar7,puVar10,0,8);
            }
            else {
              FUN_00c48fe8(plVar7,puVar10,0,8);
            }
          }
        } while (puVar6 != puVar9);
        puVar9 = (undefined8 *)*puVar5;
      }
      puVar5[1] = puVar6;
      if (puVar9 != (undefined8 *)0x0) goto LAB_00d44d78;
    }
    break;
  case 10:
    puVar5 = *(undefined8 **)(param_1 + 8);
    if (puVar5 == (undefined8 *)0x0) goto switchD_00d44c0c_default;
    puVar6 = (undefined8 *)puVar5[1];
    puVar5[1] = 0;
    lVar3 = tpidr_el0;
    if (puVar6 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar6;
      if (puVar9 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)puVar6[1];
        if (puVar10 == puVar9) {
          puVar10 = puVar9;
        }
        else {
          do {
            puVar10 = puVar10 + -1;
            puVar8 = (undefined8 *)*puVar10;
            *puVar10 = 0;
            if (puVar8 != (undefined8 *)0x0) {
              FUN_00d44bc8(puVar8 + 2);
              *puVar8 = &PTR_LAB_045a0398;
              if ((long *)puVar8[1] != (long *)0x0) {
                (**(code **)(*(long *)puVar8[1] + 0x20))();
              }
              plVar7 = *(long **)(lVar3 + 0x30);
              if (plVar7 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar7 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
              if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,0,8);
              }
              else {
                FUN_00c48fe8(plVar7,puVar8,0,8);
              }
            }
          } while (puVar9 != puVar10);
          puVar10 = (undefined8 *)*puVar6;
        }
        puVar6[1] = puVar9;
        if (puVar10 != (undefined8 *)0x0) {
          plVar7 = *(long **)(lVar3 + 0x30);
          if (plVar7 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar7 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,puVar10,0,8);
          }
          else {
            FUN_00c48fe8(plVar7,puVar10,0,8);
          }
        }
      }
      plVar7 = *(long **)(lVar3 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,puVar6,0,8);
      }
    }
    puVar6 = (undefined8 *)*puVar5;
    *puVar5 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_LAB_045a0398;
      if ((long *)puVar6[1] != (long *)0x0) {
        (**(code **)(*(long *)puVar6[1] + 0x20))();
      }
      plVar7 = *(long **)(lVar3 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,puVar6,0,8);
      }
    }
    plVar7 = *(long **)(lVar3 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    goto LAB_00d44c34;
  default:
    goto switchD_00d44c0c_default;
  }
  lVar3 = tpidr_el0;
  plVar7 = *(long **)(lVar3 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
LAB_00d44c34:
  uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar5,0,8);
  }
  else {
    FUN_00c48fe8(plVar7,puVar5,0,8);
  }
switchD_00d44c0c_default:
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0;
  return;
}


