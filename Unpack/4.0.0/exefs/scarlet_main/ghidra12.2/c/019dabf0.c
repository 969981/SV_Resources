/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019dabf0; name: FUN_019dabf0
 */


void FUN_019dabf0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)param_1[7];
  *param_1 = &PTR_LAB_045fca68;
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)param_1[8];
    plVar3 = (long *)*plVar4;
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,0x20,4);
    }
    else {
      FUN_00c48fe8(plVar5,plVar4,0x20,4);
    }
    while (plVar3 != (long *)0x0) {
      plVar4 = (long *)param_1[8];
      plVar5 = (long *)*plVar3;
      uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,0x20,4);
        plVar3 = plVar5;
      }
      else {
        FUN_00c48fe8(plVar4,plVar3,0x20,4);
        plVar3 = plVar5;
      }
    }
  }
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_019dad18(param_1 + 2);
  return;
}


