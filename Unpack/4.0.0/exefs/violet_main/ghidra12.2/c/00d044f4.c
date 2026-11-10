/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d044f4; name: FUN_00d044f4
 */


void FUN_00d044f4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar11 = 0;
    if (uVar2 != 0) {
      uVar11 = uVar4 / uVar2;
    }
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar9 = uVar2 - 1 & uVar4;
    }
    else {
      uVar9 = uVar4;
      if (uVar2 <= uVar4) {
        uVar9 = uVar4 - uVar11 * uVar2;
      }
    }
    lVar5 = *param_1;
    puVar6 = *(undefined8 **)(lVar5 + uVar9 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar6, plVar13 != (long *)0x0)) {
      uVar7 = uVar2 - 1;
      if (uVar3 < 2) {
        do {
          if (plVar13[1] == uVar4) {
            if (plVar13[2] == uVar4) goto LAB_00d045f8;
          }
          else if ((plVar13[1] & uVar7) != uVar9) {
            return;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar13[1];
          if (uVar12 == uVar4) {
            if (plVar13[2] == uVar4) goto LAB_00d045f8;
          }
          else {
            if (uVar2 <= uVar12) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar12 / uVar2;
              }
              uVar12 = uVar12 - uVar1 * uVar2;
            }
            if (uVar12 != uVar9) {
              return;
            }
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  return;
LAB_00d045f8:
  if (uVar3 < 2) {
    uVar4 = uVar4 & uVar7;
  }
  else if (uVar2 <= uVar4) {
    uVar4 = uVar4 - uVar11 * uVar2;
  }
  plVar8 = *(long **)(lVar5 + uVar4 * 8);
  for (plVar10 = (long *)*plVar8; plVar10 != plVar13; plVar10 = (long *)*plVar10) {
    plVar8 = plVar10;
  }
  if (plVar8 != param_1 + 6) {
    uVar11 = plVar8[1];
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar7;
    }
    else if (uVar2 <= uVar11) {
      uVar9 = 0;
      if (uVar2 != 0) {
        uVar9 = uVar11 / uVar2;
      }
      uVar11 = uVar11 - uVar9 * uVar2;
    }
    if (uVar11 == uVar4) goto LAB_00d0467c;
  }
  if (*plVar13 != 0) {
    uVar11 = *(ulong *)(*plVar13 + 8);
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar7;
    }
    else if (uVar2 <= uVar11) {
      uVar9 = 0;
      if (uVar2 != 0) {
        uVar9 = uVar11 / uVar2;
      }
      uVar11 = uVar11 - uVar9 * uVar2;
    }
    if (uVar11 == uVar4) goto LAB_00d0467c;
  }
  *(undefined8 *)(lVar5 + uVar4 * 8) = 0;
LAB_00d0467c:
  lVar5 = *plVar13;
  if (lVar5 != 0) {
    uVar11 = *(ulong *)(lVar5 + 8);
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar7;
    }
    else if (uVar2 <= uVar11) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar11 / uVar2;
      }
      uVar11 = uVar11 - uVar3 * uVar2;
    }
    if (uVar11 != uVar4) {
      *(long **)(*param_1 + uVar11 * 8) = plVar8;
      lVar5 = *plVar13;
    }
  }
  *plVar8 = lVar5;
  *plVar13 = 0;
  plVar8 = (long *)param_1[7];
  param_1[0xb] = param_1[0xb] + -1;
  uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d04700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar13,0x20,8);
    return;
  }
  FUN_00c48fe8(plVar8,plVar13,0x20,8);
  return;
}


