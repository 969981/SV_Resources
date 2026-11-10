/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298b67c; name: FUN_0298b67c
 */


void FUN_0298b67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_02943244(param_2,2,0x82);
  uVar1 = (**(code **)(*param_4 + 0x98))(param_4);
  FUN_0294325c(param_2,uVar1);
  uVar2 = FUN_01246e90(param_1);
  FUN_02934c3c(uVar2,param_2,param_3,param_4,param_5);
  return;
}


