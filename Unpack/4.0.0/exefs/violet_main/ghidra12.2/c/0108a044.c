/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0108a044; name: FUN_0108a044
 */


void FUN_0108a044(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_38;
  
  plVar4 = param_1 + 3;
  lVar1 = FUN_029ec114(param_1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555 + 1);
  lVar7 = *param_1;
  lVar5 = param_1[1];
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,lVar1 * 0x30,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*plVar4 + 0xe8))();
    }
  }
  lVar6 = lVar2 + (lVar5 - lVar7 >> 4) * 0x10;
  FUN_010892bc(plVar4,lVar6,param_2);
  lVar5 = *param_1;
  local_38 = param_1[1];
  lVar7 = lVar6 + 0x30;
  if (local_38 == lVar5) {
    lVar8 = lVar5;
  }
  else {
    lVar6 = lVar6 + -0x30;
    FUN_010898f8(plVar4,lVar6,local_38 + -0x30);
    if (local_38 + -0x30 != lVar5) {
      do {
        lVar6 = lVar6 + -0x30;
        FUN_010898f8(plVar4,lVar6,local_38 + -0x60);
        local_38 = local_38 + -0x30;
      } while (lVar5 + 0x30 != local_38);
    }
    lVar5 = *param_1;
    lVar8 = param_1[1];
  }
  *param_1 = lVar6;
  param_1[1] = lVar7;
  lVar7 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 0x30;
  if (lVar8 != lVar5) {
    if (*(long **)(lVar8 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar8 + -0x10) + 0x20))();
    }
    if (lVar8 + -0x30 != lVar5) {
      do {
        if (*(long **)(lVar8 + -0x40) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + -0x40) + 0x20))();
        }
        lVar8 = lVar8 + -0x30;
      } while (lVar5 + 0x30 != lVar8);
    }
  }
  if (lVar5 == 0) {
    return;
  }
  plVar4 = (long *)*plVar4;
  uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar3 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0108a1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar7 - lVar5,8);
    return;
  }
  FUN_00c48fe8(plVar4,lVar5,lVar7 - lVar5,8);
  return;
}


