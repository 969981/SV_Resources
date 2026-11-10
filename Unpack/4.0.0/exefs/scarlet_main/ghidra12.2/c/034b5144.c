/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b5144; name: FUN_034b5144
 */


void FUN_034b5144(long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  uVar2 = *(uint *)(param_3 + 1);
  uVar3 = (ulong)uVar2;
  if (uVar2 == 0) {
    return;
  }
  puVar5 = (undefined8 *)*param_3;
  if ((long *)*puVar5 != param_2) {
    lVar7 = uVar3 * 8;
    puVar8 = puVar5;
    do {
      lVar7 = lVar7 + -8;
      puVar8 = puVar8 + 1;
      if (lVar7 == 0) {
        return;
      }
    } while ((long *)*puVar8 != param_2);
  }
  iVar6 = 0;
  while( true ) {
    iVar1 = iVar6 + ((uint)uVar3 >> 1);
    plVar9 = (long *)puVar5[iVar1];
    if (plVar9 == param_2) break;
    if (((int)plVar9[9] < (int)param_2[9]) ||
       ((plVar9 < param_2 && ((int)plVar9[9] == (int)param_2[9])))) {
      iVar6 = iVar1 + 1;
      uVar3 = (ulong)((uint)uVar3 - 1);
    }
    uVar3 = uVar3 >> 1;
    if ((int)uVar3 == 0) goto LAB_034b5220;
  }
  if (puVar5 + iVar1 < puVar5 + ((ulong)uVar2 - 1)) {
    puVar8 = puVar5 + iVar1;
    do {
      puVar4 = puVar8 + 1;
      *puVar8 = *puVar4;
      puVar8 = puVar4;
    } while (puVar4 < puVar5 + ((ulong)uVar2 - 1));
    uVar2 = *(uint *)(param_3 + 1);
  }
  *(uint *)(param_3 + 1) = uVar2 - 1;
LAB_034b5220:
  puVar5 = (undefined8 *)FUN_03499160(param_4,param_2);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = param_2;
  }
  iVar6 = (int)param_2[9];
  if (param_1 + 0x48 == param_4) {
    if (iVar6 - 4U < 2) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)*param_2 + 0x10);
    }
    else {
      if (iVar6 != 2) {
        return;
      }
      plVar9 = (long *)0x0;
      if (*param_2 != 0) {
        plVar9 = (long *)(*param_2 + -0x38);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar9 + 0x28);
    }
  }
  else if (iVar6 - 4U < 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)*param_2 + 0x18);
  }
  else {
    if (iVar6 != 2) {
      return;
    }
    plVar9 = (long *)0x0;
    if (*param_2 != 0) {
      plVar9 = (long *)(*param_2 + -0x38);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar9 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x034b52cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


