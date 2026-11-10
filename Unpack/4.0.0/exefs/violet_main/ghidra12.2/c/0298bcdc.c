/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298bcdc; name: FUN_0298bcdc
 */


void FUN_0298bcdc(undefined8 param_1,long *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01243584();
  FUN_0124ade8(uVar2,param_2,100);
  uVar2 = FUN_01243584(param_1);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_02982914(uVar2,uVar1,0x2f5,*param_3);
  return;
}


