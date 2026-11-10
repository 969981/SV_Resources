/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b8bd8; name: FUN_029b8bd8
 */


void FUN_029b8bd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar2 = (long *)param_2[3];
  param_1[3] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  FUN_029b8c44(param_1 + 4,param_2 + 4);
  uVar1 = param_2[0xb];
  uVar3 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  param_1[0xb] = uVar1;
  return;
}


