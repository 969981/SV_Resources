/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d39874; name: FUN_00d39874
 */


undefined8 FUN_00d39874(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *local_38;
  long *plStack_30;
  undefined1 local_28;
  
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
    lVar7 = *param_1;
    puVar5 = *(undefined8 **)(lVar7 + uVar9 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (local_38 = (long *)*puVar5, local_38 != (long *)0x0)) {
      uVar6 = uVar2 - 1;
      if (uVar3 < 2) {
        do {
          if (local_38[1] == uVar4) {
            if (local_38[2] == uVar4) goto LAB_00d39914;
          }
          else if ((local_38[1] & uVar6) != uVar9) {
            return 0;
          }
          local_38 = (long *)*local_38;
          if (local_38 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar12 = local_38[1];
        if (uVar12 == uVar4) {
          if (local_38[2] == uVar4) goto LAB_00d39914;
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
            return 0;
          }
        }
        local_38 = (long *)*local_38;
      } while (local_38 != (long *)0x0);
    }
  }
  return 0;
LAB_00d39914:
  if (uVar3 < 2) {
    uVar4 = uVar4 & uVar6;
  }
  else if (uVar2 <= uVar4) {
    uVar4 = uVar4 - uVar11 * uVar2;
  }
  plVar8 = *(long **)(lVar7 + uVar4 * 8);
  for (plVar10 = (long *)*plVar8; plVar10 != local_38; plVar10 = (long *)*plVar10) {
    plVar8 = plVar10;
  }
  if (plVar8 != param_1 + 6) {
    uVar11 = plVar8[1];
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar6;
    }
    else if (uVar2 <= uVar11) {
      uVar9 = 0;
      if (uVar2 != 0) {
        uVar9 = uVar11 / uVar2;
      }
      uVar11 = uVar11 - uVar9 * uVar2;
    }
    if (uVar11 == uVar4) goto LAB_00d39998;
  }
  if (*local_38 != 0) {
    uVar11 = *(ulong *)(*local_38 + 8);
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar6;
    }
    else if (uVar2 <= uVar11) {
      uVar9 = 0;
      if (uVar2 != 0) {
        uVar9 = uVar11 / uVar2;
      }
      uVar11 = uVar11 - uVar9 * uVar2;
    }
    if (uVar11 == uVar4) goto LAB_00d39998;
  }
  *(undefined8 *)(lVar7 + uVar4 * 8) = 0;
LAB_00d39998:
  lVar7 = *local_38;
  if (lVar7 != 0) {
    uVar11 = *(ulong *)(lVar7 + 8);
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar6;
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
      lVar7 = *local_38;
    }
  }
  *plVar8 = lVar7;
  plStack_30 = param_1 + 7;
  *local_38 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  local_28 = 1;
  FUN_00d579a4(&local_38);
  return 1;
}


