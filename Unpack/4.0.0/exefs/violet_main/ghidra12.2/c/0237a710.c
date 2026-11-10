/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0237a710; name: FUN_0237a710
 */


void FUN_0237a710(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar2 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  param_2[2] = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  uVar1 = param_1[5];
  uVar4 = param_1[6];
  param_2[7] = 0;
  param_2[5] = uVar1;
  param_2[6] = uVar4;
  param_2[8] = 0;
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  FUN_00c43ef0(param_2 + 7,param_1 + 7);
  param_2[9] = param_1[9];
  param_2[10] = param_1[10];
  param_2[0xb] = param_1[0xb];
  plVar5 = (long *)param_1[0xc];
  param_2[0xc] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  uVar2 = param_1[0xe];
  param_2[0xd] = param_1[0xd];
  param_2[0xe] = uVar2;
  return;
}


