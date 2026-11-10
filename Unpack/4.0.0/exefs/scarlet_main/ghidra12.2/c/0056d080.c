/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056d080; name: FUN_0056d080
 */


void FUN_0056d080(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    FUN_0056d2cc(uVar3,param_2,param_3);
    param_1[1] = uVar3 + 0x28;
  }
  else {
    lVar7 = (long)(uVar3 - *param_1) >> 3;
    uVar3 = lVar7 * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * -0x6666666666666666;
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar3 = 0x666666666666666;
    }
    if (uVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar3 * 0x28,8);
    }
    lVar9 = lVar4 + lVar7 * 8;
    FUN_0056d2cc(lVar9,param_2,param_3);
    lVar11 = *param_1;
    lVar10 = param_1[1];
    lVar7 = lVar9 + 0x28;
    if (lVar10 == lVar11) {
      lVar10 = lVar11;
    }
    else {
      lVar1 = 0;
      do {
        while( true ) {
          lVar5 = lVar1;
          lVar1 = lVar10 + lVar5;
          uVar12 = *(undefined8 *)(lVar1 + -0x28);
          lVar2 = lVar9 + lVar5;
          *(undefined8 *)(lVar2 + -0x20) = *(undefined8 *)(lVar1 + -0x20);
          *(undefined8 *)(lVar2 + -0x28) = uVar12;
          uVar12 = *(undefined8 *)(lVar1 + -0x18);
          *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar1 + -0x10);
          *(undefined8 *)(lVar2 + -0x18) = uVar12;
          lVar8 = *(long *)(lVar1 + -8);
          *(long *)(lVar2 + -8) = lVar8;
          if (lVar8 != 0) break;
          *(long *)(lVar2 + -0x20) = lVar2 + -0x18;
          lVar1 = lVar5 + -0x28;
          if (lVar11 - lVar10 == lVar5 + -0x28) goto LAB_0056d1d0;
        }
        *(long *)(*(long *)(lVar2 + -0x18) + 0x10) = lVar2 + -0x18;
        *(undefined8 *)(lVar1 + -0x18) = 0;
        *(undefined8 **)(lVar1 + -0x20) = (undefined8 *)(lVar1 + -0x18);
        *(undefined8 *)(lVar1 + -8) = 0;
        lVar1 = lVar5 + -0x28;
      } while (lVar11 - lVar10 != lVar5 + -0x28);
LAB_0056d1d0:
      lVar11 = param_1[1];
      lVar9 = lVar9 + lVar5 + -0x28;
      lVar10 = *param_1;
    }
    *param_1 = lVar9;
    param_1[1] = lVar7;
    lVar7 = param_1[2];
    param_1[2] = lVar4 + uVar3 * 0x28;
    for (; lVar11 != lVar10; lVar11 = lVar11 + -0x28) {
      FUN_01f6f680(lVar11 + -0x20,*(undefined8 *)(lVar11 + -0x18));
    }
    if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0056d238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar10,lVar7 - lVar10,8);
      return;
    }
  }
  return;
}


