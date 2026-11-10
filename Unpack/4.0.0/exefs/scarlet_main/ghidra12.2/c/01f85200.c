/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f85200; name: FUN_01f85200
 */


undefined8 * FUN_01f85200(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  
  param_1[1] = param_2[1];
  uVar4 = *param_2;
  param_1[2] = param_2[2];
  *param_1 = uVar4;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  plVar6 = (long *)param_2[6];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar3 = (long *)param_1[6];
  param_1[6] = plVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  plVar6 = (long *)param_2[10];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar3 = (long *)param_1[10];
  param_1[10] = plVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  pcVar5 = (code *)param_1[0xd];
  if (pcVar5 != (code *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (*pcVar5)(param_1 + 0x10);
  }
  if ((code *)param_2[0xe] != (code *)0x0) {
    (*(code *)param_2[0xe])(param_2 + 0x10,param_1 + 0x10);
    uVar4 = param_2[0xf];
    param_1[0xd] = param_2[0xd];
    param_1[0xf] = uVar4;
    uVar4 = param_2[0xc];
    param_1[0xe] = param_2[0xe];
    param_1[0xc] = uVar4;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  FUN_00d0a71c(param_1 + 0x1d,param_2 + 0x1d);
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  plVar6 = (long *)param_2[0x22];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar3 = (long *)param_1[0x22];
  param_1[0x22] = plVar6;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  uVar2 = *(undefined2 *)(param_2 + 0x26);
  param_1[0x25] = param_2[0x25];
  uVar4 = param_2[0x24];
  *(undefined2 *)(param_1 + 0x26) = uVar2;
  param_1[0x24] = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined2 *)((long)param_1 + 0x144) = *(undefined2 *)((long)param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return param_1;
}


