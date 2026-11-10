/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024114d4; name: FUN_024114d4
 */


void FUN_024114d4(undefined8 *param_1,undefined8 *param_2)

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
  *param_1 = &LAB_02411848;
  param_1[1] = FUN_02411a18;
  param_1[2] = &LAB_0241675c;
  param_1[3] = &LAB_024167e0;
  return;
}


