/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf885c; name: FUN_00bf885c
 */


void FUN_00bf885c(long *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x21;
  long lVar11;
  long unaff_x23;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      lVar11 = tpidr_el0;
      plVar5 = *(long **)(lVar11 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar4 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,0,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar3,0,8);
      }
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d == 0) {
    unaff_x21 = param_2 << 3;
    unaff_x23 = tpidr_el0;
    plVar5 = *(long **)(unaff_x23 + 0x30);
    if (plVar5 != (long *)0x0) goto LAB_00bf88a4;
    if ((DAT_04859438 & 1) == 0) goto LAB_00bf8c68;
  }
  else {
    FUN_00bf8850();
LAB_00bf8c68:
    iVar2 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar2 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  plVar5 = DAT_04859430;
  *(long **)(unaff_x23 + 0x30) = DAT_04859430;
LAB_00bf88a4:
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,unaff_x21,8);
  lVar11 = *param_1;
  *param_1 = lVar3;
  if (lVar11 != 0) {
    plVar5 = *(long **)(unaff_x23 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(unaff_x23 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar11,0,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar11,0,8);
    }
  }
  uVar1 = param_2 - 1;
  uVar4 = param_2;
  if (param_2 == 0 || uVar1 == 0) {
    uVar4 = 1;
  }
  uVar6 = uVar4 & 3;
  param_1[1] = param_2;
  if (uVar4 - 1 < 3) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      *(undefined8 *)(*param_1 + uVar7 * 8 + 8) = 0;
      *(undefined8 *)(*param_1 + uVar7 * 8 + 0x10) = 0;
      lVar3 = uVar7 * 8;
      uVar7 = uVar7 + 4;
      *(undefined8 *)(*param_1 + lVar3 + 0x18) = 0;
    } while ((uVar4 & 0xfffffffffffffffc) != uVar7);
  }
  if (uVar6 != 0) {
    lVar3 = uVar7 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar3) = 0;
      uVar6 = uVar6 - 1;
      lVar3 = lVar3 + 8;
    } while (uVar6 != 0);
  }
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    uVar4 = param_2 - (param_2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar6 = plVar5[1];
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar6 = uVar6 & uVar1;
    }
    else if (param_2 <= uVar6) {
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar6 / param_2;
      }
      uVar6 = uVar6 - uVar7 * param_2;
    }
    *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
    plVar8 = (long *)*plVar5;
    if (plVar8 != (long *)0x0) {
      if (uVar4 < 2) {
        do {
          uVar4 = plVar8[1] & uVar1;
          if (uVar4 == uVar6) {
            uVar4 = uVar6;
          }
          else {
            plVar9 = plVar8;
            if (*(long *)(*param_1 + uVar4 * 8) == 0) {
              *(long **)(*param_1 + uVar4 * 8) = plVar5;
            }
            else {
              do {
                plVar10 = plVar9;
                plVar9 = (long *)*plVar10;
                if (plVar9 == (long *)0x0) break;
              } while (plVar8[2] == plVar9[2]);
              *plVar5 = (long)plVar9;
              *plVar10 = **(long **)(*param_1 + uVar4 * 8);
              **(undefined8 **)(*param_1 + uVar4 * 8) = plVar8;
              plVar8 = plVar5;
              uVar4 = uVar6;
            }
          }
          plVar9 = (long *)*plVar8;
          plVar5 = plVar8;
          uVar6 = uVar4;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar8[1];
          if (param_2 <= uVar4) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar4 / param_2;
            }
            uVar4 = uVar4 - uVar1 * param_2;
          }
          if (uVar4 == uVar6) {
            uVar4 = uVar6;
          }
          else {
            plVar9 = plVar8;
            if (*(long *)(*param_1 + uVar4 * 8) == 0) {
              *(long **)(*param_1 + uVar4 * 8) = plVar5;
            }
            else {
              do {
                plVar10 = plVar9;
                plVar9 = (long *)*plVar10;
                if (plVar9 == (long *)0x0) break;
              } while (plVar8[2] == plVar9[2]);
              *plVar5 = (long)plVar9;
              *plVar10 = **(long **)(*param_1 + uVar4 * 8);
              **(undefined8 **)(*param_1 + uVar4 * 8) = plVar8;
              plVar8 = plVar5;
              uVar4 = uVar6;
            }
          }
          plVar9 = (long *)*plVar8;
          plVar5 = plVar8;
          uVar6 = uVar4;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}


