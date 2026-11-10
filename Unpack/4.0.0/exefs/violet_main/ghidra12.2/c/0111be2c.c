/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111be2c; name: FUN_0111be2c
 */


void FUN_0111be2c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long local_38;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 3) * -0x3333333333333333) < param_2) {
    plVar5 = param_1 + 3;
    lVar4 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,param_2 * 0x28,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xe8))();
    }
    lVar4 = lVar1 + (lVar4 - lVar3 >> 3) * 8;
    lVar3 = *param_1;
    local_38 = param_1[1];
    if (local_38 == lVar3) {
      lVar6 = lVar4;
      lVar7 = lVar3;
    }
    else {
      lVar6 = lVar4 + -0x28;
      FUN_0111c5a8(plVar5,lVar6,local_38 + -0x28);
      if (local_38 + -0x28 != lVar3) {
        do {
          lVar6 = lVar6 + -0x28;
          FUN_0111c5a8(plVar5,lVar6,local_38 + -0x50);
          local_38 = local_38 + -0x28;
        } while (lVar3 + 0x28 != local_38);
      }
      lVar3 = *param_1;
      lVar7 = param_1[1];
    }
    *param_1 = lVar6;
    param_1[1] = lVar4;
    lVar4 = param_1[2];
    param_1[2] = lVar1 + param_2 * 0x28;
    if (lVar7 != lVar3) {
      if (*(long **)(lVar7 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + -0x10) + 0x20))();
      }
      if (lVar7 + -0x28 != lVar3) {
        do {
          if (*(long **)(lVar7 + -0x38) != (long *)0x0) {
            (**(code **)(**(long **)(lVar7 + -0x38) + 0x20))();
          }
          lVar7 = lVar7 + -0x28;
        } while (lVar3 + 0x28 != lVar7);
      }
    }
    if (lVar3 != 0) {
      plVar5 = (long *)*plVar5;
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0111bf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar4 - lVar3,8);
        return;
      }
      FUN_00c48fe8(plVar5,lVar3,lVar4 - lVar3,8);
      return;
    }
  }
  return;
}


