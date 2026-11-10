/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01021c94; name: FUN_01021c94
 */


long FUN_01021c94(long param_1,uint param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong extraout_x11;
  long lVar8;
  long *extraout_x12;
  ulong uVar9;
  ulong extraout_x13;
  ulong uVar10;
  undefined1 auVar11 [12];
  
  uVar3 = *(ulong *)(param_1 + 0x148);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar5 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar4 = (ulong)param_2;
    iVar2 = (int)uVar3;
    if (uVar5 < 2) {
      uVar9 = (ulong)(iVar2 - 1U & param_2);
    }
    else {
      uVar9 = uVar4;
      if (uVar3 <= uVar4) {
        uVar9 = 0;
        if (uVar3 != 0) {
          uVar9 = uVar4 / uVar3;
        }
        uVar9 = uVar4 - uVar9 * uVar3;
      }
    }
    lVar8 = *(long *)(param_1 + 0x140);
    plVar6 = *(long **)(lVar8 + uVar9 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      uVar7 = uVar3 - 1;
      if (uVar5 < 2) {
        do {
          if (plVar6[1] == uVar4) {
            if (*(uint *)(plVar6 + 2) == param_2) goto LAB_01021d24;
          }
          else if ((plVar6[1] & uVar7) != uVar9) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
          param_1 = 0;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar10 = plVar6[1];
        if (uVar10 == uVar4) {
          if (*(uint *)(plVar6 + 2) == param_2) goto LAB_01021d24;
        }
        else {
          if (uVar3 <= uVar10) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar10 / uVar3;
            }
            uVar10 = uVar10 - uVar1 * uVar3;
          }
          if (uVar10 != uVar9) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
        param_1 = 0;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
LAB_01021d24:
  if (uVar5 < 2) {
    uVar9 = (ulong)(iVar2 - 1U & param_2);
  }
  else {
    uVar9 = uVar4;
    if (uVar3 <= uVar4) {
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar9 = uVar4 / uVar3;
      }
      uVar9 = uVar4 - uVar9 * uVar3;
    }
  }
  plVar6 = *(long **)(lVar8 + uVar9 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    if (uVar5 < 2) {
      do {
        if (plVar6[1] == uVar4) {
          if (*(uint *)(plVar6 + 2) == param_2) goto LAB_01021d68;
        }
        else if ((plVar6[1] & uVar7) != uVar9) break;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        uVar10 = plVar6[1];
        if (uVar10 == uVar4) {
          if (*(uint *)(plVar6 + 2) == param_2) goto LAB_01021d68;
        }
        else {
          if (uVar3 <= uVar10) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar10 / uVar3;
            }
            uVar10 = uVar10 - uVar1 * uVar3;
          }
          if (uVar10 != uVar9) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  goto LAB_01021ef4;
LAB_01021d68:
  if (plVar6[3] == 0) {
    return 0;
  }
  if (uVar5 < 2) {
    uVar9 = (ulong)(iVar2 - 1U & param_2);
  }
  else {
    uVar9 = uVar4;
    if (uVar3 <= uVar4) {
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar9 = uVar4 / uVar3;
      }
      uVar9 = uVar4 - uVar9 * uVar3;
    }
  }
  plVar6 = *(long **)(lVar8 + uVar9 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    if (uVar5 < 2) goto LAB_01021ef8;
    do {
      uVar5 = plVar6[1];
      if (uVar5 == uVar4) {
        if (*(uint *)(plVar6 + 2) == param_2) {
LAB_01021db4:
          return plVar6[3];
        }
      }
      else {
        if (uVar3 <= uVar5) {
          uVar7 = 0;
          if (uVar3 != 0) {
            uVar7 = uVar5 / uVar3;
          }
          uVar5 = uVar5 - uVar7 * uVar3;
        }
        if (uVar5 != uVar9) break;
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
LAB_01021ef4:
  do {
    auVar11 = FUN_02979490(param_1);
    param_2 = auVar11._8_4_;
    param_1 = auVar11._0_8_;
    uVar4 = extraout_x8;
    uVar7 = extraout_x11;
    plVar6 = extraout_x12;
    uVar9 = extraout_x13;
LAB_01021ef8:
    do {
      if (plVar6[1] == uVar4) {
        if (*(uint *)(plVar6 + 2) == param_2) goto LAB_01021db4;
      }
      else if ((plVar6[1] & uVar7) != uVar9) break;
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  } while( true );
}


