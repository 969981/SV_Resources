/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a36a1c; name: FUN_01a36a1c
 */


void FUN_01a36a1c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_2 != (undefined8 *)0x0) {
    plVar4 = *(long **)(param_1 + 0x38);
    puVar3 = (undefined8 *)*param_2;
    uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar4,param_2,0x38,8);
    }
    if (puVar3 != (undefined8 *)0x0) {
      plVar5 = *(long **)(param_1 + 0x38);
      plVar4 = (long *)*puVar3;
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,puVar3,0x38,8);
      }
      else {
        FUN_00c48fe8(plVar5,puVar3,0x38,8);
      }
      if (plVar4 != (long *)0x0) {
        plVar6 = *(long **)(param_1 + 0x38);
        plVar5 = (long *)*plVar4;
        uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0x38,8);
        }
        else {
          FUN_00c48fe8(plVar6,plVar4,0x38,8);
        }
        while (plVar5 != (long *)0x0) {
          plVar4 = *(long **)(param_1 + 0x38);
          plVar6 = (long *)*plVar5;
          uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
          if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
            (**(code **)(*plVar4 + 0x18))(plVar4,plVar5,0x38,8);
            plVar5 = plVar6;
          }
          else {
            FUN_00c48fe8(plVar4,plVar5,0x38,8);
            plVar5 = plVar6;
          }
        }
      }
    }
  }
  return;
}


