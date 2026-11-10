/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d3f90; name: FUN_019d3f90
 */


void FUN_019d3f90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar5 = (long *)param_2[3];
  param_1[3] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  uVar3 = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 4) = uVar3;
  param_1[5] = param_2[5];
  uVar6 = param_2[6];
  uVar4 = *(undefined1 *)(param_2 + 7);
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 7) = uVar4;
  param_1[6] = uVar6;
  uVar6 = param_2[8];
  param_2[8] = 0;
  param_1[8] = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 9);
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 9) = uVar3;
  uVar6 = param_2[0xd];
  uVar1 = param_2[0xe];
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  param_1[0xd] = uVar6;
  param_1[0xe] = uVar1;
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}


