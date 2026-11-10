/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298ba20; name: FUN_0298ba20
 */


void FUN_0298ba20(long param_1,long *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = (**(code **)(*param_2 + 0x238))(param_2,7);
  FUN_0124ade8(param_1,param_2,0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0167ebc0(uVar4,0xcb,uVar2,0x70,uVar3,uVar1,0xffff0000);
  return;
}


