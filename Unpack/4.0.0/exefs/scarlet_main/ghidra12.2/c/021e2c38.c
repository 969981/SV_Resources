/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e2c38; name: FUN_021e2c38
 */


void FUN_021e2c38(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  lVar7 = param_1[1];
  lVar4 = lVar6;
  if (lVar7 != lVar6) {
    FUN_00d42924(lVar7 + -0x38);
    lVar4 = *(long *)(lVar7 + -0x70);
    if (lVar4 != 0) {
      plVar1 = *(long **)(lVar7 + -0x58);
      *(long *)(lVar7 + -0x68) = lVar4;
      lVar5 = *(long *)(lVar7 + -0x60) - lVar4;
      uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,0x10);
      }
      else {
        FUN_00c48fe8(plVar1,lVar4,lVar5,0x10);
      }
    }
    if (lVar7 + -0x78 != lVar6) {
      do {
        FUN_00d42924(lVar7 + -0xb0);
        lVar4 = *(long *)(lVar7 + -0xe8);
        if (lVar4 != 0) {
          plVar1 = *(long **)(lVar7 + -0xd0);
          *(long *)(lVar7 + -0xe0) = lVar4;
          lVar5 = *(long *)(lVar7 + -0xd8) - lVar4;
          uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
          if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,0x10);
          }
          else {
            FUN_00c48fe8(plVar1,lVar4,lVar5,0x10);
          }
        }
        lVar7 = lVar7 + -0x78;
      } while (lVar6 + 0x78 != lVar7);
    }
    lVar4 = *param_1;
  }
  lVar7 = param_1[2];
  plVar1 = (long *)param_1[3];
  param_1[1] = lVar6;
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x021e2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar7 - lVar4,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar4,lVar7 - lVar4,8);
  return;
}


