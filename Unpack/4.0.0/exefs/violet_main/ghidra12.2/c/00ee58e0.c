/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee58e0; name: FUN_00ee58e0
 */


void FUN_00ee58e0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  plVar4 = param_1 + 3;
  lVar1 = FUN_0271649c(param_1,(param_1[1] - *param_1 >> 6) + 1);
  lVar8 = *param_1;
  lVar7 = param_1[1];
  lVar2 = 0;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,lVar1 << 6,8), lVar2 == 0)) {
    (**(code **)(*(long *)*plVar4 + 0xe8))((long *)*plVar4);
  }
  lVar7 = lVar2 + (lVar7 - lVar8 >> 6) * 0x40;
  FUN_00f91e40(plVar4,lVar7,param_2);
  lVar6 = *param_1;
  lVar5 = param_1[1];
  lVar8 = lVar7 + 0x40;
  if (lVar5 == lVar6) {
    lVar5 = lVar6;
  }
  else {
    do {
      lVar7 = lVar7 + -0x40;
      lVar5 = lVar5 + -0x40;
      FUN_00f91e40(plVar4,lVar7,lVar5);
    } while (lVar6 != lVar5);
    lVar6 = *param_1;
    lVar5 = param_1[1];
  }
  *param_1 = lVar7;
  param_1[1] = lVar8;
  lVar8 = param_1[2];
  param_1[2] = lVar2 + lVar1 * 0x40;
  while (lVar5 != lVar6) {
    lVar5 = lVar5 + -0x40;
    FUN_00f91cdc(lVar5);
  }
  if (lVar6 == 0) {
    return;
  }
  plVar4 = (long *)*plVar4;
  uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar3 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00ee5a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,lVar8 - lVar6,8);
    return;
  }
  FUN_00c48fe8(plVar4,lVar6,lVar8 - lVar6,8);
  return;
}


