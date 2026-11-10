/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111c03c; name: FUN_0111c03c
 */


void FUN_0111c03c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 4) * 0x2e8ba2e8ba2e8ba3) < param_2) {
    plVar6 = param_1 + 3;
    lVar5 = param_1[1];
    lVar1 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,param_2 * 0xb0,0x10);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar6 + 0xe8))();
    }
    lVar8 = lVar1 + (lVar5 - lVar3 >> 4) * 0x10;
    lVar3 = *param_1;
    lVar5 = param_1[1];
    if (lVar5 == lVar3) {
      lVar7 = lVar8;
      lVar5 = lVar3;
    }
    else {
      lVar7 = lVar8 + -0xb0;
      FUN_013f166c(plVar6,lVar7,lVar5 + -0xb0);
      if (lVar5 + -0xb0 != lVar3) {
        do {
          lVar7 = lVar7 + -0xb0;
          FUN_013f166c(plVar6,lVar7,lVar5 + -0x160);
          lVar5 = lVar5 + -0xb0;
        } while (lVar3 + 0xb0 != lVar5);
      }
      lVar3 = *param_1;
      lVar5 = param_1[1];
    }
    *param_1 = lVar7;
    param_1[1] = lVar8;
    lVar8 = param_1[2];
    param_1[2] = lVar1 + param_2 * 0xb0;
    if (lVar5 != lVar3) {
      pcVar4 = *(code **)(lVar5 + -0x78);
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x70) = 0;
        *(undefined8 *)(lVar5 + -0x68) = 0;
        *(undefined8 *)(lVar5 + -0x80) = 0;
        *(undefined8 *)(lVar5 + -0x78) = 0;
        (*pcVar4)(lVar5 + -0x60);
      }
      if (*(long **)(lVar5 + -0x98) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + -0x98) + 0x20))();
      }
      if (lVar5 + -0xb0 != lVar3) {
        do {
          pcVar4 = *(code **)(lVar5 + -0x128);
          if (pcVar4 != (code *)0x0) {
            *(undefined8 *)(lVar5 + -0x120) = 0;
            *(undefined8 *)(lVar5 + -0x118) = 0;
            *(undefined8 *)(lVar5 + -0x130) = 0;
            *(undefined8 *)(lVar5 + -0x128) = 0;
            (*pcVar4)(lVar5 + -0x110);
          }
          if (*(long **)(lVar5 + -0x148) != (long *)0x0) {
            (**(code **)(**(long **)(lVar5 + -0x148) + 0x20))();
          }
          lVar5 = lVar5 + -0xb0;
        } while (lVar3 + 0xb0 != lVar5);
      }
    }
    if (lVar3 != 0) {
      plVar6 = (long *)*plVar6;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0111c1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar8 - lVar3,0x10);
        return;
      }
      FUN_00c48fe8(plVar6,lVar3,lVar8 - lVar3,0x10);
      return;
    }
  }
  return;
}


