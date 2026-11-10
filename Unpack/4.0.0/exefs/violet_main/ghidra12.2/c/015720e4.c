/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015720e4; name: FUN_015720e4
 */


void FUN_015720e4(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x21;
  long lVar11;
  long unaff_x23;
  
  if (param_2 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      lVar11 = tpidr_el0;
      plVar6 = *(long **)(lVar11 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar5 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,0,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar4,0,8);
      }
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d == 0) {
    unaff_x21 = param_2 << 3;
    unaff_x23 = tpidr_el0;
    plVar6 = *(long **)(unaff_x23 + 0x30);
    if (plVar6 != (long *)0x0) goto LAB_0157212c;
    if ((DAT_04859438 & 1) == 0) goto LAB_01572488;
  }
  else {
    FUN_028b9b50();
LAB_01572488:
    iVar3 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar3 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  plVar6 = DAT_04859430;
  *(long **)(unaff_x23 + 0x30) = DAT_04859430;
LAB_0157212c:
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,unaff_x21,8);
  lVar11 = *param_1;
  *param_1 = lVar4;
  if (lVar11 != 0) {
    plVar6 = *(long **)(unaff_x23 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(unaff_x23 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar11,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar11,0,8);
    }
  }
  uVar1 = param_2 - 1;
  uVar5 = param_2;
  if (param_2 == 0 || uVar1 == 0) {
    uVar5 = 1;
  }
  param_1[1] = param_2;
  *(undefined8 *)*param_1 = 0;
  if ((((1 < param_2) && (*(undefined8 *)(*param_1 + 8) = 0, uVar5 != 2)) &&
      (*(undefined8 *)(*param_1 + 0x10) = 0, uVar5 != 3)) &&
     (((*(undefined8 *)(*param_1 + 0x18) = 0, uVar5 != 4 &&
       (*(undefined8 *)(*param_1 + 0x20) = 0, uVar5 != 5)) &&
      ((*(undefined8 *)(*param_1 + 0x28) = 0, uVar5 != 6 &&
       (*(undefined8 *)(*param_1 + 0x30) = 0, uVar5 != 7)))))) {
    uVar7 = 7;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  plVar6 = (long *)param_1[2];
  if (plVar6 != (long *)0x0) {
    uVar5 = param_2 - (param_2 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar7 = plVar6[1];
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar1;
    }
    else if (param_2 <= uVar7) {
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar7 / param_2;
      }
      uVar7 = uVar7 - uVar2 * param_2;
    }
    *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
    plVar8 = (long *)*plVar6;
    if (plVar8 != (long *)0x0) {
      if (uVar5 < 2) {
        do {
          uVar5 = plVar8[1] & uVar1;
          if (uVar5 != uVar7) {
            plVar9 = plVar8;
            if (*(long *)(*param_1 + uVar5 * 8) == 0) {
              *(long **)(*param_1 + uVar5 * 8) = plVar6;
              uVar7 = uVar5;
            }
            else {
              do {
                plVar10 = plVar9;
                plVar9 = (long *)*plVar10;
                if (plVar9 == (long *)0x0) break;
              } while (plVar8[2] == plVar9[2]);
              *plVar6 = (long)plVar9;
              *plVar10 = **(long **)(*param_1 + uVar5 * 8);
              **(undefined8 **)(*param_1 + uVar5 * 8) = plVar8;
              plVar8 = plVar6;
            }
          }
          plVar9 = (long *)*plVar8;
          plVar6 = plVar8;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar8[1];
          if (param_2 <= uVar5) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar1 * param_2;
          }
          if (uVar5 != uVar7) {
            plVar9 = plVar8;
            if (*(long *)(*param_1 + uVar5 * 8) == 0) {
              *(long **)(*param_1 + uVar5 * 8) = plVar6;
              uVar7 = uVar5;
            }
            else {
              do {
                plVar10 = plVar9;
                plVar9 = (long *)*plVar10;
                if (plVar9 == (long *)0x0) break;
              } while (plVar8[2] == plVar9[2]);
              *plVar6 = (long)plVar9;
              *plVar10 = **(long **)(*param_1 + uVar5 * 8);
              **(undefined8 **)(*param_1 + uVar5 * 8) = plVar8;
              plVar8 = plVar6;
            }
          }
          plVar9 = (long *)*plVar8;
          plVar6 = plVar8;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}


