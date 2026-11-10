/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02984e8c; name: FUN_02984e8c
 */


void FUN_02984e8c(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01243584();
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01636f5c(uVar2,uVar1,param_2,0xff);
  return;
}


