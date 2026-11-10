/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02280f00; name: FUN_02280f00
 */


void FUN_02280f00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar3;
  uVar3 = param_1[2];
  param_2[4] = 0;
  param_2[2] = uVar3;
  param_2[3] = 0;
  FUN_0227e4cc(param_2 + 3,param_1 + 3);
  uVar3 = param_1[5];
  uVar1 = param_1[6];
  uVar4 = param_1[7];
  param_2[8] = 0;
  param_2[5] = uVar3;
  param_2[9] = 0;
  param_2[6] = uVar1;
  param_2[7] = uVar4;
  FUN_00c96b7c(param_2 + 8,param_1 + 8);
  param_2[10] = param_1[10];
  param_2[0xb] = param_1[0xb];
  param_2[0xc] = param_1[0xc];
  plVar2 = (long *)param_1[0xd];
  param_2[0xd] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_2[0xe] = param_1[0xe];
  *(undefined4 *)(param_2 + 0xf) = *(undefined4 *)(param_1 + 0xf);
  return;
}


