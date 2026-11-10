/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00373bd0; name: FUN_00373bd0
 */


void FUN_00373bd0(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    plVar5 = *(long **)(param_1 + 0xb0);
    uVar2 = param_2;
    if (4 < param_2) {
      uVar2 = FUN_00350fb0(param_2,param_2);
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar2);
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))();
    plVar5 = *(long **)(param_1 + 0x98);
    plVar1 = *(long **)(param_1 + 0xa0);
    if (plVar5 != plVar1) {
      if (param_2 < 5) {
        do {
          (**(code **)(**(long **)(*plVar5 + 0x38) + 0x18))(*(long **)(*plVar5 + 0x38),param_2);
          plVar4 = plVar5 + 1;
          (**(code **)(**(long **)(*plVar5 + 0x38) + 0x10))();
          plVar5 = plVar4;
        } while (plVar1 != plVar4);
      }
      else {
        do {
          plVar4 = *(long **)(*plVar5 + 0x38);
          uVar3 = FUN_00350fb0(param_2);
          (**(code **)(*plVar4 + 0x18))(plVar4,uVar3);
          plVar4 = plVar5 + 1;
          (**(code **)(**(long **)(*plVar5 + 0x38) + 0x10))();
          plVar5 = plVar4;
        } while (plVar1 != plVar4);
      }
    }
  }
  if (param_2 < 5) {
    return;
  }
  FUN_00350fd0(param_2);
  return;
}


