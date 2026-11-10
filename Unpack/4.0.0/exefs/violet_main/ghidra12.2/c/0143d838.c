/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143d838; name: FUN_0143d838
 */


void FUN_0143d838(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = param_1[1];
  plVar5 = param_1 + 3;
  if (uVar1 < (ulong)param_1[2]) {
    FUN_0143da0c(plVar5,uVar1,param_2);
    param_1[1] = uVar1 + 0x40;
  }
  else {
    uVar4 = param_1[4];
    lVar8 = (long)(uVar1 - *param_1) >> 6;
    uVar1 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar4) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1;
    uVar3 = lVar2 >> 5;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (uVar4 >> 1 <= (ulong)(lVar2 >> 6)) {
      uVar1 = uVar4;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar1 << 6,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar5 + 0xe8))();
      }
    }
    lVar9 = lVar2 + lVar8 * 0x40;
    FUN_0143da0c(plVar5,lVar9,param_2);
    lVar7 = *param_1;
    lVar6 = param_1[1];
    lVar8 = lVar9 + 0x40;
    if (lVar6 == lVar7) {
      lVar6 = lVar7;
    }
    else {
      do {
        lVar9 = lVar9 + -0x40;
        lVar6 = lVar6 + -0x40;
        FUN_0143da0c(plVar5,lVar9,lVar6);
      } while (lVar7 != lVar6);
      lVar7 = *param_1;
      lVar6 = param_1[1];
    }
    *param_1 = lVar9;
    param_1[1] = lVar8;
    lVar8 = param_1[2];
    param_1[2] = lVar2 + uVar1 * 0x40;
    while (lVar6 != lVar7) {
      lVar6 = lVar6 + -0x40;
      FUN_00faeeac(lVar6);
    }
    if (lVar7 != 0) {
      plVar5 = (long *)*plVar5;
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,lVar8 - lVar7,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar7,lVar8 - lVar7,8);
      }
    }
  }
  return;
}


