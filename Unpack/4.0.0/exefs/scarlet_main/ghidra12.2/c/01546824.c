/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01546824; name: FUN_01546824
 */


void FUN_01546824(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 4) * -0x2c8590b21642c859) < 0x80) {
    plVar5 = param_1 + 3;
    lVar4 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,0xb800,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xe8))();
    }
    lVar7 = lVar1 + (lVar4 - lVar3 >> 4) * 0x10;
    lVar3 = *param_1;
    lVar4 = param_1[1];
    if (lVar4 == lVar3) {
      lVar6 = lVar7;
    }
    else {
      lVar6 = lVar7 + -0x170;
      FUN_01547480(plVar5,lVar6,lVar4 + -0x170);
      if (lVar4 + -0x170 != lVar3) {
        do {
          lVar6 = lVar6 + -0x170;
          FUN_01547480(plVar5,lVar6,lVar4 + -0x2e0);
          lVar4 = lVar4 + -0x170;
        } while (lVar3 + 0x170 != lVar4);
      }
      lVar3 = *param_1;
    }
    lVar4 = param_1[2];
    *param_1 = lVar6;
    param_1[1] = lVar7;
    param_1[2] = lVar1 + 0xb800;
    if (lVar3 != 0) {
      plVar5 = (long *)*plVar5;
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01546930. Too many branches */
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


