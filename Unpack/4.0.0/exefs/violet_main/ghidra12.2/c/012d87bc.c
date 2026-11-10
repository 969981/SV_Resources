/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d87bc; name: FUN_012d87bc
 */


void FUN_012d87bc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = param_1[1];
  if ((ulong)((param_1[2] - lVar5 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    lVar5 = lVar5 - *param_1 >> 3;
    uVar6 = param_1[4];
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = lVar5 * 0x6db6db6db6db6db7 + param_2;
    if (uVar6 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * -0x2492492492492492;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    plVar7 = param_1 + 3;
    if (uVar6 >> 1 <= (ulong)(lVar2 * 0x6db6db6db6db6db7)) {
      uVar1 = uVar6;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar1 * 0x38,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar7 + 0xe8))();
      }
    }
    lVar5 = lVar2 + lVar5 * 8;
    FUN_012d8a7c(plVar7,lVar5);
    if ((param_2 != 1) && (FUN_012d8a7c(plVar7,lVar5 + 0x38), param_2 != 2)) {
      lVar8 = lVar5 + 0x70;
      lVar9 = param_2 * 0x38 + -0x70;
      do {
        FUN_012d8a7c(plVar7,lVar8);
        lVar8 = lVar8 + 0x38;
        lVar9 = lVar9 + -0x38;
      } while (lVar9 != 0);
    }
    lVar3 = lVar5 + param_2 * 0x38;
    lVar8 = *param_1;
    lVar9 = param_1[1];
    if (lVar9 == lVar8) {
      lVar9 = lVar8;
    }
    else {
      do {
        lVar5 = lVar5 + -0x38;
        lVar9 = lVar9 + -0x38;
        FUN_012fe5dc(plVar7,lVar5,lVar9);
      } while (lVar8 != lVar9);
      lVar8 = *param_1;
      lVar9 = param_1[1];
    }
    *param_1 = lVar5;
    param_1[1] = lVar3;
    lVar5 = param_1[2];
    param_1[2] = lVar2 + uVar1 * 0x38;
    if ((lVar9 != lVar8) && (FUN_012d97a0(lVar9 + -0x38), lVar9 + -0x38 != lVar8)) {
      do {
        FUN_012d97a0(lVar9 + -0x70);
        lVar9 = lVar9 + -0x38;
      } while (lVar8 + 0x38 != lVar9);
    }
    if (lVar8 != 0) {
      plVar7 = (long *)*plVar7;
      uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar6 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x012d89f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar5 - lVar8,8);
        return;
      }
      FUN_00c48fe8(plVar7,lVar8,lVar5 - lVar8,8);
      return;
    }
  }
  else {
    lVar2 = lVar5;
    if (param_2 != 0) {
      lVar2 = lVar5 + param_2 * 0x38;
      lVar8 = param_2 * 0x38;
      do {
        FUN_012d8a7c(param_1 + 3,lVar5);
        lVar5 = lVar5 + 0x38;
        lVar8 = lVar8 + -0x38;
      } while (lVar8 != 0);
    }
    param_1[1] = lVar2;
  }
  return;
}


