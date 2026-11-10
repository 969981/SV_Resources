/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01551c3c; name: FUN_01551c3c
 */


void FUN_01551c3c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  uVar5 = param_1[1];
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar3 = param_2[1];
  uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar6 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar8 * uVar5;
  }
  plVar7 = *(long **)(*param_1 + uVar3 * 8);
  for (plVar9 = (long *)*plVar7; plVar9 != param_2; plVar9 = (long *)*plVar9) {
    plVar7 = plVar9;
  }
  if (plVar7 != param_1 + 6) {
    uVar8 = plVar7[1];
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 == uVar3) goto LAB_01551cc4;
  }
  if (*param_2 != 0) {
    uVar8 = *(ulong *)(*param_2 + 8);
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 == uVar3) goto LAB_01551cc4;
  }
  *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
LAB_01551cc4:
  if (*param_2 != 0) {
    uVar8 = *(ulong *)(*param_2 + 8);
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_1 + uVar8 * 8) = plVar7;
    }
  }
  *plVar7 = *param_2;
  *param_2 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  if (param_2 == (long *)0x0) {
    return;
  }
  pcVar4 = (code *)param_2[7];
  if (pcVar4 != (code *)0x0) {
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    (*pcVar4)(param_2 + 10);
  }
  if ((long *)param_2[5] != (long *)0x0) {
    (**(code **)(*(long *)param_2[5] + 0x20))();
  }
  plVar7 = (long *)param_1[7];
  uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar6 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01551d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,param_2,0xb0,0x10);
    return;
  }
  FUN_00c48fe8(plVar7,param_2,0xb0,0x10);
  return;
}


