/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0177f5b4; name: FUN_0177f5b4
 */


void FUN_0177f5b4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar3 = param_2[1];
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = param_3[1];
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar2 = uVar3 - 1 & uVar2;
  }
  else if (uVar3 <= uVar2) {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar2 / uVar3;
    }
    uVar2 = uVar2 - uVar6 * uVar3;
  }
  plVar5 = *(long **)(*param_2 + uVar2 * 8);
  for (plVar7 = (long *)*plVar5; plVar7 != param_3; plVar7 = (long *)*plVar7) {
    plVar5 = plVar7;
  }
  if (plVar5 != param_2 + 6) {
    uVar6 = plVar5[1];
    if (uVar4 < 2) {
      uVar6 = uVar6 & uVar3 - 1;
    }
    else if (uVar3 <= uVar6) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar1 * uVar3;
    }
    if (uVar6 == uVar2) goto LAB_0177f63c;
  }
  if (*param_3 != 0) {
    uVar6 = *(ulong *)(*param_3 + 8);
    if (uVar4 < 2) {
      uVar6 = uVar6 & uVar3 - 1;
    }
    else if (uVar3 <= uVar6) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar1 * uVar3;
    }
    if (uVar6 == uVar2) goto LAB_0177f63c;
  }
  *(undefined8 *)(*param_2 + uVar2 * 8) = 0;
LAB_0177f63c:
  if (*param_3 != 0) {
    uVar6 = *(ulong *)(*param_3 + 8);
    if (uVar4 < 2) {
      uVar6 = uVar6 & uVar3 - 1;
    }
    else if (uVar3 <= uVar6) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar4 * uVar3;
    }
    if (uVar6 != uVar2) {
      *(long **)(*param_2 + uVar6 * 8) = plVar5;
    }
  }
  *plVar5 = *param_3;
  *param_3 = 0;
  param_2[0xb] = param_2[0xb] + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = param_3;
  param_1[1] = param_2 + 7;
  return;
}


