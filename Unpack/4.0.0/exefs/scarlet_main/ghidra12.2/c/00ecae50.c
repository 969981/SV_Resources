/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ecae50; name: FUN_00ecae50
 */


void FUN_00ecae50(long *param_1,ulong param_2)

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
  if ((ulong)(param_1[2] - lVar3 >> 6) < param_2) {
    plVar6 = param_1 + 3;
    lVar5 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,param_2 << 6,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xe8))((long *)*plVar6);
    }
    lVar4 = *param_1;
    local_50 = param_1[1];
    lVar3 = lVar1 + (lVar5 - lVar3 >> 6) * 0x40;
    if (local_50 == lVar4) {
      local_38 = lVar3;
      lVar5 = lVar4;
    }
    else {
      local_38 = lVar3 + -0x40;
      FUN_00ecc73c(plVar6,local_38,local_50 + -0x40);
      if (local_50 + -0x40 != lVar4) {
        do {
          local_38 = local_38 + -0x40;
          FUN_00ecc73c(plVar6,local_38,local_50 + -0x80);
          local_50 = local_50 + -0x40;
        } while (lVar4 + 0x40 != local_50);
      }
      lVar4 = *param_1;
      lVar5 = param_1[1];
    }
    *param_1 = local_38;
    param_1[1] = lVar3;
    lVar3 = param_1[2];
    param_1[2] = lVar1 + param_2 * 0x40;
    if ((lVar5 != lVar4) && (FUN_00eccf20(lVar5 + -0x40), lVar5 + -0x40 != lVar4)) {
      do {
        FUN_00eccf20(lVar5 + -0x80);
        lVar5 = lVar5 + -0x40;
      } while (lVar4 + 0x40 != lVar5);
    }
    if (lVar4 != 0) {
      plVar6 = (long *)*plVar6;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00ecaf3c. Too many branches */
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


