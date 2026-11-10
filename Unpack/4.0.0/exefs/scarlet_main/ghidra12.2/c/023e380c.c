/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023e380c; name: FUN_023e380c
 */


void FUN_023e380c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_00c43ef0(param_1 + 4,param_2);
  param_1[6] = *(undefined8 *)(param_2 + 0x10);
  param_1[7] = *(undefined8 *)(param_2 + 0x18);
  param_1[8] = *(undefined8 *)(param_2 + 0x20);
  plVar1 = *(long **)(param_2 + 0x28);
  param_1[9] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *param_1 = &LAB_023e3b64;
  param_1[1] = FUN_023e3dfc;
  param_1[2] = FUN_023e3f1c;
  param_1[3] = FUN_023e3f84;
  return;
}


