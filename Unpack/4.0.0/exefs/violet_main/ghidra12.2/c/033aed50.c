/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033aed50; name: FUN_033aed50
 */


undefined4 FUN_033aed50(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x28))(param_3,uVar1);
  uVar1 = FUN_033ae86c(param_1,param_2,uVar1,0,param_3);
  return uVar1;
}


