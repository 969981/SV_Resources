/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00288e1c; name: FUN_00288e1c
 */


void FUN_00288e1c(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *param_1;
  uVar8 = (param_3 - param_2 >> 4) * -0x3333333333333333;
  lVar5 = param_1[2];
  if ((ulong)((lVar5 - lVar7 >> 4) * -0x3333333333333333) < uVar8) {
    if (lVar7 != 0) {
      lVar5 = param_1[1];
      if (lVar5 == lVar7) {
        lVar5 = lVar7;
      }
      else {
        do {
          lVar5 = lVar5 + -0x50;
          FUN_00288048(lVar5);
        } while (lVar7 != lVar5);
        lVar5 = *param_1;
      }
      param_1[1] = lVar7;
      FUN_0049e790(PTR_LAB_047cba48,lVar5);
      lVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (uVar8 < 0x333333333333334) {
      uVar6 = (lVar5 >> 4) * -0x6666666666666666;
      if (uVar8 <= uVar6) {
        uVar8 = uVar6;
      }
      if (0x199999999999998 < (ulong)((lVar5 >> 4) * -0x3333333333333333)) {
        uVar8 = 0x333333333333333;
      }
      if (uVar8 < 0x333333333333334) {
        lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar8 * 0x50);
        param_1[2] = lVar7 + uVar8 * 0x50;
        *param_1 = lVar7;
        param_1[1] = lVar7;
        for (; param_2 != param_3; param_2 = param_2 + 0x50) {
                    /* try { // try from 0028902c to 00289037 has its CatchHandler @ 00289078 */
          FUN_002886bc(lVar7,param_2);
          lVar7 = lVar7 + 0x50;
        }
        param_1[1] = lVar7;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar6 = (param_1[1] - lVar7 >> 4) * -0x3333333333333333;
  lVar5 = param_2 + (param_1[1] - lVar7);
  lVar3 = lVar5;
  if (uVar8 <= uVar6) {
    lVar3 = param_3;
  }
  if (lVar3 != param_2) {
    lVar9 = 0;
    do {
      piVar1 = (int *)(param_2 + lVar9);
      iVar4 = *piVar1;
      piVar2 = (int *)(lVar7 + lVar9);
      *piVar2 = iVar4;
      if (iVar4 - 3U < 2) {
        FUN_001fcec0(piVar2 + 2,piVar1 + 2);
      }
      else if (iVar4 == 5) {
        if (piVar1 != piVar2) {
          FUN_00288848(piVar2 + 8,*(undefined8 *)(piVar1 + 8),piVar1 + 10);
        }
      }
      else if ((iVar4 == 6) && (piVar1 != piVar2)) {
        FUN_00288e1c(piVar2 + 0xe,*(undefined8 *)(piVar1 + 0xe),*(undefined8 *)(piVar1 + 0x10));
      }
      lVar9 = lVar9 + 0x50;
    } while (lVar3 - param_2 != lVar9);
    lVar7 = lVar7 + lVar9;
  }
  if (uVar8 <= uVar6) {
    FUN_00289080(param_1,lVar7);
    return;
  }
  lVar7 = param_1[1];
  while (lVar3 != param_3) {
                    /* try { // try from 00288f58 to 00288f63 has its CatchHandler @ 00289070 */
    FUN_002886bc(lVar7,lVar5);
    lVar7 = lVar7 + 0x50;
    lVar5 = lVar5 + 0x50;
    lVar3 = lVar5;
  }
  param_1[1] = lVar7;
  return;
}


