/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ce688; name: FUN_031ce688
 */


void FUN_031ce688(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)param_1[3];
  while (plVar1 != (long *)0x0) {
    param_1[0xc] = param_1[0xc] - plVar1[3];
    param_1[0xd] = param_1[0xd] - plVar1[3];
    lVar5 = *plVar1;
    plVar2 = (long *)param_1[10];
    if (param_1[0xb] == 0) {
      lVar4 = *plVar2;
      uVar3 = param_1[5];
    }
    else {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar1[1],param_1[5]);
      plVar2 = (long *)param_1[0xb];
      uVar3 = 0x20;
      lVar4 = *plVar2;
    }
    (**(code **)(lVar4 + 0x20))(plVar2,plVar1,uVar3);
    plVar1 = (long *)lVar5;
  }
  param_1[3] = 0;
  plVar1 = (long *)param_1[4];
  while (plVar1 != (long *)0x0) {
    param_1[0xc] = param_1[0xc] - plVar1[3];
    param_1[0xd] = param_1[0xd] - plVar1[3];
    lVar5 = *plVar1;
    plVar2 = (long *)param_1[10];
    if (param_1[0xb] == 0) {
      lVar4 = *plVar2;
      uVar3 = param_1[5];
    }
    else {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar1[1],param_1[5]);
      plVar2 = (long *)param_1[0xb];
      uVar3 = 0x20;
      lVar4 = *plVar2;
    }
    (**(code **)(lVar4 + 0x20))(plVar2,plVar1,uVar3);
    plVar1 = (long *)lVar5;
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}


