/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02981aa8; name: FUN_02981aa8
 */


void FUN_02981aa8(long param_1,long *param_2,long *param_3,undefined2 *param_4,undefined4 param_5,
                 undefined4 param_6,undefined2 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
  FUN_014fce2c(uVar2,param_2,param_7,1,5,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_029819c0(uVar2,uVar1,param_5,*param_4);
  FUN_02981be0(param_1,param_2,param_6);
  return;
}


