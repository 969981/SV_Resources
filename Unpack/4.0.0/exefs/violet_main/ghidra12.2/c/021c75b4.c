/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021c75b4; name: FUN_021c75b4
 */


void FUN_021c75b4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar5 = (code *)param_1[1];
  if (pcVar5 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar5)(param_1 + 4);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_021c5634(param_1 + 4,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  param_1[7] = *(undefined8 *)(param_2 + 0x18);
  param_1[8] = uVar7;
  param_1[6] = uVar6;
  puVar3 = PTR_LAB_047dd7d8;
  puVar2 = PTR_LAB_047dd7d0;
  param_1[9] = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  puVar1 = PTR_LAB_047dd7c8;
  param_1[10] = uVar6;
  puVar4 = PTR_LAB_047dd7e0;
  *param_1 = puVar2;
  param_1[1] = puVar3;
  param_1[2] = puVar1;
  param_1[3] = puVar4;
  return;
}


