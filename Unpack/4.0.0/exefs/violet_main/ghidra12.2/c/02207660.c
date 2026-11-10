/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02207660; name: FUN_02207660
 */


void FUN_02207660(undefined8 *param_1,long param_2)

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
  FUN_02206abc(param_1 + 4,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[9] = 0;
  param_1[6] = uVar1;
  param_1[10] = 0;
  param_1[7] = uVar2;
  param_1[8] = uVar5;
  FUN_00c43ef0(param_1 + 9,param_2 + 0x28);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x38);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x40);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x48);
  plVar3 = *(long **)(param_2 + 0x50);
  param_1[0xe] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  param_1[0xf] = *(undefined8 *)(param_2 + 0x58);
  *param_1 = &LAB_02207b10;
  param_1[1] = &LAB_02207b30;
  param_1[2] = FUN_02207ebc;
  param_1[3] = FUN_02207f54;
  return;
}


