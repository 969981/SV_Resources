/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033aedc0; name: FUN_033aedc0
 */


undefined4 FUN_033aedc0(undefined8 param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_4 + 0x18))(param_4,param_3);
  uVar1 = FUN_033ae86c(param_1,param_3,uVar1,param_2,param_4);
  return uVar1;
}


