/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014d4bf4; name: FUN_014d4bf4
 */


void FUN_014d4bf4(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[1] == plVar7) {
    plVar6 = plVar7;
  }
  else {
    plVar6 = (long *)param_1[1];
    do {
      plVar8 = plVar6 + -8;
      lVar5 = *plVar8;
      if (lVar5 != 0) {
        lVar4 = plVar6[-6];
        plVar1 = (long *)plVar6[-5];
        plVar6[-7] = lVar5;
        uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if ((uVar2 & 1) != 0) {
          lVar3 = FUN_00c4e600();
          if (0 < *(int *)(lVar3 + 0x12c8)) {
            FUN_00c48fe8(plVar1,lVar5,lVar4 - lVar5,1);
            goto LAB_014d4c40;
          }
        }
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,1);
      }
LAB_014d4c40:
      plVar6 = plVar8;
    } while (plVar7 != plVar8);
    plVar6 = (long *)*param_1;
  }
  lVar5 = param_1[2];
  plVar8 = (long *)param_1[3];
  param_1[1] = plVar7;
  uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if ((uVar2 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar8,plVar6,lVar5 - (long)plVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x014d4cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,lVar5 - (long)plVar6,8);
  return;
}


