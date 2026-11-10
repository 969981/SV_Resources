/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00babd3c; name: FUN_00babd3c
 */


void FUN_00babd3c(long *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x21;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x23;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      lVar8 = tpidr_el0;
      plVar5 = *(long **)(lVar8 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar4 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
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
    if (plVar5 != (long *)0x0) goto LAB_00babd88;
    if ((DAT_04859438 & 1) == 0) goto LAB_00bac150;
  }
  else {
    FUN_01f6e360();
LAB_00bac150:
    iVar2 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar2 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  plVar5 = DAT_04859430;
  *(long **)(unaff_x23 + 0x30) = DAT_04859430;
LAB_00babd88:
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,unaff_x21,8);
  lVar8 = *param_1;
  *param_1 = lVar3;
  if (lVar8 != 0) {
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
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar8,0,8);
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
  puVar9 = (undefined8 *)param_1[2];
  if (puVar9 != (undefined8 *)0x0) {
    uVar4 = param_2 - (param_2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar6 = puVar9[1];
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
    puVar10 = (undefined8 *)*puVar9;
    if (puVar10 != (undefined8 *)0x0) {
      if (uVar4 < 2) {
        do {
          uVar4 = puVar10[1] & uVar1;
          if (uVar4 == uVar6) {
            uVar4 = uVar6;
          }
          else {
            puVar11 = puVar10;
            if (*(long *)(*param_1 + uVar4 * 8) == 0) {
              *(undefined8 **)(*param_1 + uVar4 * 8) = puVar9;
            }
            else {
              do {
                puVar12 = puVar11;
                puVar11 = (undefined8 *)*puVar12;
                if (puVar11 == (undefined8 *)0x0) break;
                iVar2 = strcmp((char *)puVar10[2],(char *)puVar11[2]);
              } while (iVar2 == 0);
              *puVar9 = puVar11;
              *puVar12 = **(undefined8 **)(*param_1 + uVar4 * 8);
              **(undefined8 **)(*param_1 + uVar4 * 8) = puVar10;
              puVar10 = puVar9;
              uVar4 = uVar6;
            }
          }
          puVar11 = (undefined8 *)*puVar10;
          puVar9 = puVar10;
          uVar6 = uVar4;
          puVar10 = puVar11;
        } while (puVar11 != (undefined8 *)0x0);
      }
      else {
        do {
          uVar4 = puVar10[1];
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
            puVar11 = puVar10;
            if (*(long *)(*param_1 + uVar4 * 8) == 0) {
              *(undefined8 **)(*param_1 + uVar4 * 8) = puVar9;
            }
            else {
              do {
                puVar12 = puVar11;
                puVar11 = (undefined8 *)*puVar12;
                if (puVar11 == (undefined8 *)0x0) break;
                iVar2 = strcmp((char *)puVar10[2],(char *)puVar11[2]);
              } while (iVar2 == 0);
              *puVar9 = puVar11;
              *puVar12 = **(undefined8 **)(*param_1 + uVar4 * 8);
              **(undefined8 **)(*param_1 + uVar4 * 8) = puVar10;
              puVar10 = puVar9;
              uVar4 = uVar6;
            }
          }
          puVar11 = (undefined8 *)*puVar10;
          puVar9 = puVar10;
          uVar6 = uVar4;
          puVar10 = puVar11;
        } while (puVar11 != (undefined8 *)0x0);
      }
    }
  }
  return;
}


