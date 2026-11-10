/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f91b58; name: FUN_00f91b58
 */


void FUN_00f91b58(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 6) < param_2) {
    plVar5 = param_1 + 3;
    lVar4 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,param_2 << 6,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xe8))();
    }
    lVar3 = lVar1 + (lVar4 - lVar3 >> 6) * 0x40;
    lVar4 = *param_1;
    lVar6 = param_1[1];
    lVar7 = lVar3;
    if (lVar6 == lVar4) {
      lVar6 = lVar4;
    }
    else {
      do {
        lVar7 = lVar7 + -0x40;
        lVar6 = lVar6 + -0x40;
        FUN_00f91e40(plVar5,lVar7,lVar6);
      } while (lVar4 != lVar6);
      lVar4 = *param_1;
      lVar6 = param_1[1];
    }
    *param_1 = lVar7;
    param_1[1] = lVar3;
    lVar3 = param_1[2];
    param_1[2] = lVar1 + param_2 * 0x40;
    while (lVar6 != lVar4) {
      lVar6 = lVar6 + -0x40;
      FUN_00f91cdc(lVar6);
    }
    if (lVar4 != 0) {
      plVar5 = (long *)*plVar5;
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00f91c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3 - lVar4,8);
        return;
      }
      FUN_00c48fe8(plVar5,lVar4,lVar3 - lVar4,8);
      return;
    }
  }
  return;
}


