/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00568610; name: FUN_00568610
 */


void FUN_00568610(long *param_1,undefined8 param_2)

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
    FUN_0053dd58(uVar1,param_2);
    param_1[1] = uVar1 + 8;
  }
  else {
    lVar5 = (long)(uVar1 - *param_1) >> 3;
    uVar1 = lVar5 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1;
    uVar3 = lVar2 >> 2;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (0xffffffffffffffe < (ulong)(lVar2 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 << 3,8);
    }
    lVar6 = lVar2 + lVar5 * 8;
    FUN_0053dd58(lVar6,param_2);
    lVar4 = *param_1;
    lVar7 = param_1[1];
    lVar5 = lVar6 + 8;
    if (lVar7 == lVar4) {
      lVar7 = lVar4;
    }
    else {
      do {
        lVar6 = lVar6 + -8;
        lVar7 = lVar7 + -8;
        FUN_0053dd58(lVar6,lVar7);
      } while (lVar4 != lVar7);
      lVar4 = param_1[1];
      lVar7 = *param_1;
    }
    *param_1 = lVar6;
    param_1[1] = lVar5;
    lVar5 = param_1[2];
    param_1[2] = lVar2 + uVar1 * 8;
    while (lVar4 != lVar7) {
      lVar4 = lVar4 + -8;
      FUN_0053dd1c(lVar4);
    }
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00568748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,lVar5 - lVar7,8);
      return;
    }
  }
  return;
}


