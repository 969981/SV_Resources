/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f2e644; name: FUN_00f2e644
 */


void FUN_00f2e644(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  lVar6 = param_1[1];
  if ((ulong)((param_1[2] - lVar6 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    lVar6 = lVar6 - *param_1 >> 3;
    uVar7 = param_1[4];
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar1 = lVar6 * 0x6db6db6db6db6db7 + param_2;
    if (uVar7 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * -0x2492492492492492;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    plVar8 = param_1 + 3;
    if (uVar7 >> 1 <= (ulong)(lVar3 * 0x6db6db6db6db6db7)) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar1 * 0x38,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xe8))();
      }
    }
    lVar6 = lVar3 + lVar6 * 8;
    FUN_00f2e9d4(plVar8,lVar6);
    if ((((param_2 != 1) && (FUN_00f2e9d4(plVar8,lVar6 + 0x38), param_2 != 2)) &&
        (FUN_00f2e9d4(plVar8,lVar6 + 0x70), param_2 != 3)) &&
       (FUN_00f2e9d4(plVar8,lVar6 + 0xa8), param_2 != 4)) {
      lVar4 = lVar6 + 0xe0;
      lVar11 = param_2 * 0x38 + -0xe0;
      do {
        FUN_00f2e9d4(plVar8,lVar4);
        lVar4 = lVar4 + 0x38;
        lVar11 = lVar11 + -0x38;
      } while (lVar11 != 0);
    }
    lVar4 = lVar6 + param_2 * 0x38;
    plVar9 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
    if (plVar10 == plVar9) {
      plVar10 = plVar9;
    }
    else {
      lVar6 = lVar6 + -0x38;
      FUN_00f2f2e4(plVar8,lVar6,plVar10 + -7);
      if (plVar10 + -7 != plVar9) {
        do {
          lVar6 = lVar6 + -0x38;
          FUN_00f2f2e4(plVar8,lVar6,plVar10 + -0xe);
          plVar10 = plVar10 + -7;
        } while (plVar9 + 7 != plVar10);
      }
      plVar9 = (long *)*param_1;
      plVar10 = (long *)param_1[1];
    }
    lVar11 = param_1[2];
    param_1[2] = lVar3 + uVar1 * 0x38;
    *param_1 = lVar6;
    param_1[1] = lVar4;
    while (plVar2 = plVar10, plVar2 != plVar9) {
      plVar10 = plVar2 + -7;
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        lVar3 = plVar2[-6];
        if (lVar3 == lVar6) {
          lVar3 = lVar6;
        }
        else {
          do {
            lVar3 = lVar3 + -0x40;
            FUN_00faeeac(lVar3);
          } while (lVar6 != lVar3);
          lVar3 = *plVar10;
        }
        plVar2[-6] = lVar6;
        lVar6 = plVar2[-5];
        plVar2 = (long *)plVar2[-4];
        uVar7 = (**(code **)(*plVar2 + 0xf8))(plVar2);
        if (((uVar7 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar3,lVar6 - lVar3,8);
        }
        else {
          FUN_00c48fe8(plVar2,lVar3,lVar6 - lVar3,8);
        }
      }
    }
    if (plVar9 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00f2e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,lVar11 - (long)plVar9,8);
        return;
      }
      FUN_00c48fe8(plVar8,plVar9,lVar11 - (long)plVar9,8);
      return;
    }
  }
  else {
    lVar3 = lVar6;
    if (param_2 != 0) {
      lVar3 = lVar6 + param_2 * 0x38;
      lVar4 = param_2 * 0x38;
      do {
        FUN_00f2e9d4(param_1 + 3,lVar6);
        lVar6 = lVar6 + 0x38;
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
    }
    param_1[1] = lVar3;
  }
  return;
}


