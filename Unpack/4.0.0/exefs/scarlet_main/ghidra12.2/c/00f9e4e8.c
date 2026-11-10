/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f9e4e8; name: FUN_00f9e4e8
 */


void FUN_00f9e4e8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = param_1[1];
  if ((ulong)((param_1[2] - lVar4 >> 5) * -0x5555555555555555) < param_2) {
    lVar4 = lVar4 - *param_1 >> 5;
    uVar5 = param_1[4];
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = lVar4 * -0x5555555555555555 + param_2;
    if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    plVar6 = param_1 + 3;
    if (uVar5 >> 1 <= (ulong)(lVar2 * -0x5555555555555555)) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar1 * 0x60,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xe8))();
      }
    }
    lVar4 = lVar2 + lVar4 * 0x20;
    FUN_00f9e840(plVar6,lVar4);
    if (((((param_2 != 1) && (FUN_00f9e840(plVar6,lVar4 + 0x60), param_2 != 2)) &&
         (FUN_00f9e840(plVar6,lVar4 + 0xc0), param_2 != 3)) &&
        ((FUN_00f9e840(plVar6,lVar4 + 0x120), param_2 != 4 &&
         (FUN_00f9e840(plVar6,lVar4 + 0x180), param_2 != 5)))) &&
       ((FUN_00f9e840(plVar6,lVar4 + 0x1e0), param_2 != 6 &&
        (FUN_00f9e840(plVar6,lVar4 + 0x240), param_2 != 7)))) {
      lVar7 = lVar4 + 0x2a0;
      lVar8 = param_2 * 0x60 + -0x2a0;
      do {
        FUN_00f9e840(plVar6,lVar7);
        lVar7 = lVar7 + 0x60;
        lVar8 = lVar8 + -0x60;
      } while (lVar8 != 0);
    }
    lVar9 = lVar4 + param_2 * 0x60;
    lVar7 = *param_1;
    lVar8 = param_1[1];
    if (lVar8 == lVar7) {
      lVar8 = lVar7;
    }
    else {
      do {
        lVar4 = lVar4 + -0x60;
        lVar8 = lVar8 + -0x60;
        FUN_00fa29fc(plVar6,lVar4,lVar8);
      } while (lVar7 != lVar8);
      lVar7 = *param_1;
      lVar8 = param_1[1];
    }
    *param_1 = lVar4;
    param_1[1] = lVar9;
    lVar4 = param_1[2];
    param_1[2] = lVar2 + uVar1 * 0x60;
    if (lVar8 != lVar7) {
      FUN_00fa2714(lVar8 + -0x40);
      if (*(long **)(lVar8 + -0x48) != (long *)0x0) {
        (**(code **)(**(long **)(lVar8 + -0x48) + 0x20))();
      }
      if (lVar8 + -0x60 != lVar7) {
        do {
          FUN_00fa2714(lVar8 + -0xa0);
          if (*(long **)(lVar8 + -0xa8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar8 + -0xa8) + 0x20))();
          }
          lVar8 = lVar8 + -0x60;
        } while (lVar7 + 0x60 != lVar8);
      }
    }
    if (lVar7 != 0) {
      plVar6 = (long *)*plVar6;
      uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar5 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00f9e798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar4 - lVar7,8);
        return;
      }
      FUN_00c48fe8(plVar6,lVar7,lVar4 - lVar7,8);
      return;
    }
  }
  else {
    lVar2 = lVar4;
    if (param_2 != 0) {
      lVar2 = lVar4 + param_2 * 0x60;
      lVar7 = param_2 * 0x60;
      do {
        FUN_00f9e840(param_1 + 3,lVar4);
        lVar4 = lVar4 + 0x60;
        lVar7 = lVar7 + -0x60;
      } while (lVar7 != 0);
    }
    param_1[1] = lVar2;
  }
  return;
}


