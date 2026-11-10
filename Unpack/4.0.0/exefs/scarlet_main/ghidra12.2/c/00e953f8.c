/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e953f8; name: FUN_00e953f8
 */


void FUN_00e953f8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    plVar3 = (long *)*param_2;
    FUN_00dad2bc(param_2 + 0x20);
    FUN_00dad2bc(param_2 + 0xb);
    if ((long *)param_2[10] != (long *)0x0) {
      (**(code **)(*(long *)param_2[10] + 0x20))();
    }
    if ((long *)param_2[5] != (long *)0x0) {
      (**(code **)(*(long *)param_2[5] + 0x20))();
    }
    plVar4 = *(long **)(param_1 + 0x38);
    uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x1a8,8);
    }
    else {
      FUN_00c48fe8(plVar4,param_2,0x1a8,8);
    }
    if (plVar3 != (long *)0x0) {
      plVar4 = (long *)*plVar3;
      FUN_00dad2bc(plVar3 + 0x20);
      FUN_00dad2bc(plVar3 + 0xb);
      if ((long *)plVar3[10] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[10] + 0x20))();
      }
      if ((long *)plVar3[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[5] + 0x20))();
      }
      plVar5 = *(long **)(param_1 + 0x38);
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar3,0x1a8,8);
      }
      else {
        FUN_00c48fe8(plVar5,plVar3,0x1a8,8);
      }
      while (plVar4 != (long *)0x0) {
        plVar3 = (long *)*plVar4;
        FUN_00dad2bc(plVar4 + 0x20);
        FUN_00dad2bc(plVar4 + 0xb);
        if ((long *)plVar4[10] != (long *)0x0) {
          (**(code **)(*(long *)plVar4[10] + 0x20))();
        }
        if ((long *)plVar4[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar4[5] + 0x20))();
        }
        plVar5 = *(long **)(param_1 + 0x38);
        uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,0x1a8,8);
          plVar4 = plVar3;
        }
        else {
          FUN_00c48fe8(plVar5,plVar4,0x1a8,8);
          plVar4 = plVar3;
        }
      }
    }
  }
  return;
}


