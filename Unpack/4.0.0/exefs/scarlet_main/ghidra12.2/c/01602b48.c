/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01602b48; name: FUN_01602b48
 */


void FUN_01602b48(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x38);
    plVar3 = (long *)*param_2;
    uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar4,param_2,0x38,8);
    }
    while (plVar3 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x38);
      plVar5 = (long *)*plVar3;
      uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,0x38,8);
        plVar3 = plVar5;
      }
      else {
        FUN_00c48fe8(plVar4,plVar3,0x38,8);
        plVar3 = plVar5;
      }
    }
  }
  return;
}


