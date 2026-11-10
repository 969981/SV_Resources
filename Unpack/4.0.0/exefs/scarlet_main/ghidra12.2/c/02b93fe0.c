/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b93fe0; name: FUN_02b93fe0
 */


void FUN_02b93fe0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  param_2[2] = param_1[2];
  memcpy(param_2 + 3,param_1 + 3,0x28);
  uVar2 = param_1[8];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = uVar2;
  FUN_00c43ef0(param_2 + 9,param_1 + 9);
  param_2[0xb] = param_1[0xb];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = param_1[0xd];
  plVar1 = (long *)param_1[0xe];
  param_2[0xe] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  uVar2 = param_1[0x10];
  param_2[0xf] = param_1[0xf];
  param_2[0x10] = uVar2;
  return;
}


