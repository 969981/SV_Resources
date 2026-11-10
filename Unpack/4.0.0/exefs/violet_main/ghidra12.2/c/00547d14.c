/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00547d14; name: FUN_00547d14
 */


void FUN_00547d14(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_0054f480(uVar1,param_2);
    param_1[1] = uVar1 + 0x28;
  }
  else {
    lVar4 = (long)(uVar1 - *param_1) >> 3;
    uVar1 = lVar4 * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar3 = lVar2 * -0x6666666666666666;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0x333333333333332 < (ulong)(lVar2 * -0x3333333333333333)) {
      uVar1 = 0x666666666666666;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x28,8);
    }
    lVar6 = lVar2 + lVar4 * 8;
    FUN_0054f480(lVar6,param_2);
    lVar5 = *param_1;
    lVar7 = param_1[1];
    lVar4 = lVar6 + 0x28;
    if (lVar7 == lVar5) {
      lVar7 = lVar5;
    }
    else {
      do {
        lVar6 = lVar6 + -0x28;
        lVar7 = lVar7 + -0x28;
        FUN_0054f480(lVar6,lVar7);
      } while (lVar5 != lVar7);
      lVar5 = param_1[1];
      lVar7 = *param_1;
    }
    *param_1 = lVar6;
    param_1[1] = lVar4;
    lVar4 = param_1[2];
    param_1[2] = lVar2 + uVar1 * 0x28;
    while (lVar5 != lVar7) {
      lVar5 = lVar5 + -0x28;
      FUN_00573390(lVar5);
    }
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00547e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,lVar4 - lVar7,8);
      return;
    }
  }
  return;
}


