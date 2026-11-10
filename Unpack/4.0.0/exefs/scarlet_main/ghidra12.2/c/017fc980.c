/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017fc980; name: FUN_017fc980
 */


void FUN_017fc980(undefined8 *param_1,long param_2)

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
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_017fcf40(param_1 + 4,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[9] = 0;
  param_1[6] = uVar1;
  param_1[10] = 0;
  param_1[7] = uVar2;
  param_1[8] = uVar5;
  FUN_00c96b7c(param_1 + 9,param_2 + 0x28);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x38);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x40);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x48);
  plVar3 = *(long **)(param_2 + 0x50);
  param_1[0xe] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  param_1[0xf] = *(undefined8 *)(param_2 + 0x58);
  *param_1 = &LAB_00e9dfa8;
  param_1[1] = &LAB_0225fb5c;
  param_1[2] = &LAB_0225fc94;
  param_1[3] = &LAB_0225fd2c;
  return;
}


