/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cbd48c; name: FUN_00cbd48c
 */


void FUN_00cbd48c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_50;
  long local_38;
  
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 3) < param_2) {
    plVar6 = param_1 + 3;
    lVar5 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,param_2 << 3,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xe8))((long *)*plVar6);
    }
    lVar4 = *param_1;
    local_50 = param_1[1];
    lVar3 = lVar1 + (lVar5 - lVar3 >> 3) * 8;
    if (local_50 == lVar4) {
      local_38 = lVar3;
    }
    else {
      local_38 = lVar3 + -8;
      FUN_00cbd638(plVar6,local_38,local_50 + -8);
      if (local_50 + -8 != lVar4) {
        do {
          local_38 = local_38 + -8;
          FUN_00cbd638(plVar6,local_38,local_50 + -0x10);
          local_50 = local_50 + -8;
        } while (lVar4 + 8 != local_50);
      }
      lVar4 = *param_1;
    }
    *param_1 = local_38;
    param_1[1] = lVar3;
    lVar3 = param_1[2];
    param_1[2] = lVar1 + param_2 * 8;
    if (lVar4 != 0) {
      plVar6 = (long *)*plVar6;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00cbd5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar3 - lVar4,8);
        return;
      }
      FUN_00c48fe8(plVar6,lVar4,lVar3 - lVar4,8);
      return;
    }
  }
  return;
}


