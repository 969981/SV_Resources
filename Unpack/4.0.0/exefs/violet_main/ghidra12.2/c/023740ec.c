/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023740ec; name: FUN_023740ec
 */


void FUN_023740ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  
  pcVar6 = (code *)param_1[1];
  if (pcVar6 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar6)(param_1 + 4);
  }
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  param_1[8] = 0;
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  param_1[6] = uVar2;
  param_1[7] = uVar4;
  param_1[9] = 0;
  FUN_00c43ef0(param_1 + 8,param_2 + 4);
  param_1[10] = param_2[6];
  param_1[0xb] = param_2[7];
  param_1[0xc] = param_2[8];
  plVar5 = (long *)param_2[9];
  param_1[0xd] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  *param_1 = &LAB_02374968;
  param_1[1] = FUN_02374b38;
  param_1[2] = &LAB_0237a4b8;
  param_1[3] = &LAB_0237a534;
  return;
}


