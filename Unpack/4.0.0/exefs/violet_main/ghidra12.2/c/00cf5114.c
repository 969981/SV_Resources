/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf5114; name: FUN_00cf5114
 */


void FUN_00cf5114(undefined2 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = FUN_00cf44ec(param_2);
  uVar4 = FUN_00cf41a0(param_2);
  uVar2 = FUN_0196f860(uVar3,uVar4,param_3);
  *param_1 = uVar2;
  uVar2 = FUN_00cf51a8(uVar3,uVar4,param_3);
  param_1[1] = uVar2;
  uVar2 = FUN_0196f824(uVar3,uVar4,param_3);
  param_1[2] = uVar2;
  uVar1 = FUN_00cf51e4(uVar3,uVar4,param_3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  return;
}


