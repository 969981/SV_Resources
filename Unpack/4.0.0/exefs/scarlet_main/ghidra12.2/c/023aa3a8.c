/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023aa3a8; name: FUN_023aa3a8
 */


void FUN_023aa3a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  pcVar4 = (code *)param_1[1];
  if (pcVar4 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar4)(param_1 + 4);
  }
  uVar5 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  param_1[6] = param_2[2];
  param_1[7] = uVar2;
  param_1[4] = uVar5;
  param_1[5] = uVar1;
  uVar5 = param_2[4];
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = uVar5;
  FUN_00c43ef0(param_1 + 9,param_2 + 5);
  param_1[0xb] = param_2[7];
  param_1[0xc] = param_2[8];
  param_1[0xd] = param_2[9];
  plVar3 = (long *)param_2[10];
  param_1[0xe] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  *param_1 = &LAB_023aa71c;
  param_1[1] = FUN_023aa8ec;
  param_1[2] = FUN_023aaa0c;
  param_1[3] = FUN_023aaa90;
  return;
}


