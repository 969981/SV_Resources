/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013ec3a4; name: FUN_013ec3a4
 */


void FUN_013ec3a4(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_2 != (long *)0x0) {
    plVar4 = (long *)*param_2;
    lVar5 = param_2[3];
    if (lVar5 != 0) {
      lVar1 = param_2[5];
      plVar6 = (long *)param_2[6];
      param_2[4] = lVar5;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar1 - lVar5,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar5,lVar1 - lVar5,8);
      }
    }
    plVar6 = *(long **)(param_1 + 0x38);
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,param_2,0x50,8);
    }
    else {
      FUN_00c48fe8(plVar6,param_2,0x50,8);
    }
    while (plVar4 != (long *)0x0) {
      plVar6 = (long *)*plVar4;
      lVar5 = plVar4[3];
      if (lVar5 != 0) {
        lVar1 = plVar4[5];
        plVar7 = (long *)plVar4[6];
        plVar4[4] = lVar5;
        uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar1 - lVar5,8);
        }
        else {
          FUN_00c48fe8(plVar7,lVar5,lVar1 - lVar5,8);
        }
      }
      plVar7 = *(long **)(param_1 + 0x38);
      uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,plVar4,0x50,8);
        plVar4 = plVar6;
      }
      else {
        FUN_00c48fe8(plVar7,plVar4,0x50,8);
        plVar4 = plVar6;
      }
    }
  }
  return;
}


