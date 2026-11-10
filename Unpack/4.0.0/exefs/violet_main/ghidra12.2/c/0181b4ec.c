/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181b4ec; name: FUN_0181b4ec
 */


undefined8 FUN_0181b4ec(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *local_38;
  long lStack_30;
  undefined1 local_28;
  
  uVar5 = *(ulong *)(param_1 + 0x80);
  if (uVar5 != 0) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      uVar6 = uVar5 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar5 <= uVar4) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar4 / uVar5;
        }
        uVar6 = uVar4 - uVar6 * uVar5;
      }
    }
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x78) + uVar6 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (local_38 = (long *)*puVar3, local_38 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (local_38[1] == uVar4) {
            if (local_38[2] == uVar4) goto LAB_0181b60c;
          }
          else if ((local_38[1] & uVar5 - 1) != uVar6) {
            return 0;
          }
          local_38 = (long *)*local_38;
          if (local_38 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar8 = local_38[1];
        if (uVar8 == uVar4) {
          if (local_38[2] == uVar4) goto LAB_0181b60c;
        }
        else {
          if (uVar5 <= uVar8) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar8 / uVar5;
            }
            uVar8 = uVar8 - uVar1 * uVar5;
          }
          if (uVar8 != uVar6) {
            return 0;
          }
        }
        local_38 = (long *)*local_38;
      } while (local_38 != (long *)0x0);
    }
  }
  return 0;
LAB_0181b60c:
  plVar7 = (long *)local_38[9];
  if (plVar7 != (long *)0x0) {
    do {
      puVar3 = (undefined8 *)plVar7[3];
      *puVar3 = 0;
      puVar3[1] = 0;
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
    uVar5 = *(ulong *)(param_1 + 0x80);
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar4 = local_38[1];
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  }
  if (uVar2 < 2) {
    uVar4 = uVar5 - 1 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar6 * uVar5;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x78) + uVar4 * 8);
  do {
    plVar10 = plVar7;
    plVar7 = (long *)*plVar10;
  } while ((long *)*plVar10 != local_38);
  if (plVar10 != (long *)(param_1 + 0xa8)) {
    uVar6 = plVar10[1];
    if (uVar2 < 2) {
      uVar6 = uVar6 & uVar5 - 1;
    }
    else if (uVar5 <= uVar6) {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar8 * uVar5;
    }
    if (uVar6 == uVar4) goto LAB_0181b6ec;
  }
  if (*local_38 != 0) {
    uVar6 = *(ulong *)(*local_38 + 8);
    if (uVar2 < 2) {
      uVar6 = uVar6 & uVar5 - 1;
    }
    else if (uVar5 <= uVar6) {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar8 * uVar5;
    }
    if (uVar6 == uVar4) goto LAB_0181b6ec;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x78) + uVar4 * 8) = 0;
LAB_0181b6ec:
  lVar9 = *local_38;
  if (lVar9 != 0) {
    uVar6 = *(ulong *)(lVar9 + 8);
    if (uVar2 < 2) {
      uVar6 = uVar6 & uVar5 - 1;
    }
    else if (uVar5 <= uVar6) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar2 * uVar5;
    }
    if (uVar6 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x78) + uVar6 * 8) = plVar10;
      lVar9 = *local_38;
    }
  }
  *plVar10 = lVar9;
  lStack_30 = param_1 + 0xb0;
  *local_38 = 0;
  *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + -1;
  local_28 = 1;
  FUN_015636a8(&local_38);
  return 1;
}


