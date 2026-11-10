/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01616a90; name: FUN_01616a90
 */


void FUN_01616a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = &PTR_LAB_0457f478;
  param_1[1] = param_2;
  FUN_00daf940(param_1 + 2,param_3);
  param_1[0xb] = 0x7ffffffffffffff;
  param_1[0xc] = 0;
  param_1[0x10] = param_2;
  param_1[0x11] = 0x7ffffffffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x18] = 0x1fffffffffffffff;
  param_1[0x19] = 0;
  param_1[0x21] = 0x1fffffffffffffff;
  param_1[0x22] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = param_2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = param_2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_2;
  param_1[0x29] = 0x666666666666666;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2c),true,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x30),true,0);
  *(undefined4 *)(param_1 + 0x35) = 100;
  lVar4 = param_1[0x25];
  param_1[0x34] = 0;
  if ((ulong)((param_1[0x27] - lVar4 >> 3) * -0x3333333333333333) < 2) {
    lVar5 = param_1[0x26];
    puVar1 = param_1 + 0x28;
    lVar2 = (**(code **)(*(long *)param_1[0x28] + 0x10))((long *)param_1[0x28],0x50,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xe8))();
    }
    lVar8 = lVar2 + (lVar5 - lVar4 >> 3) * 8;
    lVar4 = param_1[0x25];
    lVar5 = param_1[0x26];
    if (lVar5 == lVar4) {
      lVar7 = lVar8;
      lVar5 = lVar4;
    }
    else {
      lVar7 = lVar8 + -0x28;
      FUN_01616d48(puVar1,lVar7,lVar5 + -0x28);
      if (lVar5 + -0x28 != lVar4) {
        do {
          lVar7 = lVar7 + -0x28;
          FUN_01616d48(puVar1,lVar7,lVar5 + -0x50);
          lVar5 = lVar5 + -0x28;
        } while (lVar4 + 0x28 != lVar5);
      }
      lVar4 = param_1[0x25];
      lVar5 = param_1[0x26];
    }
    param_1[0x25] = lVar7;
    param_1[0x26] = lVar8;
    lVar8 = param_1[0x27];
    param_1[0x27] = lVar2 + 0x50;
    if (lVar5 != lVar4) {
      if (*(long **)(lVar5 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + -0x10) + 0x20))();
      }
      if (lVar5 + -0x28 != lVar4) {
        do {
          if (*(long **)(lVar5 + -0x38) != (long *)0x0) {
            (**(code **)(**(long **)(lVar5 + -0x38) + 0x20))();
          }
          lVar5 = lVar5 + -0x28;
        } while (lVar4 + 0x28 != lVar5);
      }
    }
    if (lVar4 != 0) {
      plVar6 = (long *)*puVar1;
      uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01616cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar8 - lVar4,8);
        return;
      }
      FUN_00c48fe8(plVar6,lVar4,lVar8 - lVar4,8);
      return;
    }
  }
  return;
}


