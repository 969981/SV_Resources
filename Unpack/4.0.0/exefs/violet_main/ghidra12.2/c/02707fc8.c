/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02707fc8; name: FUN_02707fc8
 */


void FUN_02707fc8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar4 = param_2[1];
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = param_3[1];
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar3 = uVar4 - 1 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar7 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 6) {
    uVar7 = plVar6[1];
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar4 - 1;
    }
    else if (uVar4 <= uVar7) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar7 / uVar4;
      }
      uVar7 = uVar7 - uVar1 * uVar4;
    }
    if (uVar7 == uVar3) goto LAB_02708090;
  }
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar4 - 1;
    }
    else if (uVar4 <= uVar7) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar7 / uVar4;
      }
      uVar7 = uVar7 - uVar1 * uVar4;
    }
    if (uVar7 == uVar3) goto LAB_02708090;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_02708090:
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar4 - 1;
    }
    else if (uVar4 <= uVar7) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar7 / uVar4;
      }
      uVar7 = uVar7 - uVar5 * uVar4;
    }
    if (uVar7 != uVar3) {
      *(long **)(*param_2 + uVar7 * 8) = plVar6;
    }
  }
  *plVar6 = *param_3;
  *param_3 = 0;
  param_2[0xb] = param_2[0xb] + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = param_3;
  param_1[1] = param_2 + 7;
  return;
}


