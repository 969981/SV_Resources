/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00edda0c; name: FUN_00edda0c
 */


void FUN_00edda0c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long local_50;
  
  plVar7 = param_1 + 3;
  lVar1 = FUN_0271644c(param_1,(param_1[1] - *param_1 >> 6) + 1);
  lVar6 = *param_1;
  lVar4 = param_1[1];
  lVar2 = 0;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar1 << 6,8), lVar2 == 0)) {
    (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
  }
  lVar4 = lVar2 + (lVar4 - lVar6 >> 6) * 0x40;
  FUN_00ecc73c(plVar7,lVar4,param_2);
  lVar5 = *param_1;
  local_50 = param_1[1];
  lVar6 = lVar4 + 0x40;
  if (local_50 == lVar5) {
    lVar8 = lVar5;
  }
  else {
    lVar4 = lVar4 + -0x40;
    FUN_00ecc73c(plVar7,lVar4,local_50 + -0x40);
    if (local_50 + -0x40 != lVar5) {
      do {
        lVar4 = lVar4 + -0x40;
        FUN_00ecc73c(plVar7,lVar4,local_50 + -0x80);
        local_50 = local_50 + -0x40;
      } while (lVar5 + 0x40 != local_50);
    }
    lVar5 = *param_1;
    lVar8 = param_1[1];
  }
  *param_1 = lVar4;
  param_1[1] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 0x40;
  if ((lVar8 != lVar5) && (FUN_00eccf20(lVar8 + -0x40), lVar8 + -0x40 != lVar5)) {
    do {
      FUN_00eccf20(lVar8 + -0x80);
      lVar8 = lVar8 + -0x40;
    } while (lVar5 + 0x40 != lVar8);
  }
  if (lVar5 == 0) {
    return;
  }
  plVar7 = (long *)*plVar7;
  uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00eddb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar6 - lVar5,8);
    return;
  }
  FUN_00c48fe8(plVar7,lVar5,lVar6 - lVar5,8);
  return;
}


