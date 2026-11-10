/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029819e0; name: FUN_029819e0
 */


void FUN_029819e0(long param_1,long *param_2,long *param_3,undefined2 *param_4,undefined4 param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = (**(code **)(*param_2 + 0x108))(param_2);
  uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
  FUN_014fce2c(uVar4,param_2,uVar1,1,5,uVar3);
  FUN_029819c0(*(undefined8 *)(param_1 + 0x20),uVar2,param_5,*param_4);
  FUN_02981b98(*(undefined8 *)(param_1 + 0x20),uVar2);
  FUN_0292f4d4(*(undefined8 *)(param_1 + 0x38),param_3,param_2);
  return;
}


