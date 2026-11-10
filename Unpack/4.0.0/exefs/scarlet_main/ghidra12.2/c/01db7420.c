/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01db7420; name: FUN_01db7420
 */


void FUN_01db7420(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  param_2 = (long *)*param_2;
  *param_1 = (long)param_2;
  if (param_2 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*param_2 + 0x18))();
    plVar5 = (long *)*param_1;
  }
  plVar2 = (long *)PTR_DAT_047d8b70;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 6;
  }
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 7;
  }
  lVar3 = *plVar1;
  if (plVar5 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar5[8];
  }
  param_1[1] = *plVar2;
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  param_1[4] = 0;
  if (plVar5 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    plVar2 = (long *)param_1[4];
    param_1[4] = (long)plVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 5) = param_3;
  FUN_00d0c0a4(param_1);
  return;
}


