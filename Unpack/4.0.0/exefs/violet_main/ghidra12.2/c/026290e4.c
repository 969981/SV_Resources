/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026290e4; name: FUN_026290e4
 */


void FUN_026290e4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_02263160(param_1 + 4,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  param_1[10] = 0;
  param_1[7] = uVar1;
  param_1[8] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = 0;
  FUN_00d334b4(param_1 + 9,param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  param_1[0xb] = uVar3;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  FUN_00c96b7c(param_1 + 0xc,param_2 + 0x40);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = &LAB_02629384;
  param_1[1] = &LAB_02629394;
  param_1[2] = &LAB_026293bc;
  param_1[3] = &LAB_026294e0;
  return;
}


