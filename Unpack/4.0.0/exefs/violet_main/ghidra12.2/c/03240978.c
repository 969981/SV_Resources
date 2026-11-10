/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03240978; name: FUN_03240978
 */


undefined8
FUN_03240978(long *param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 local_28;
  
  (**(code **)(*param_1 + 0x18))(param_1,&local_28,1,8);
  (**(code **)(*param_1 + 0x28))(param_1,local_28,param_2,param_5);
  if (param_3 != 1) {
    (**(code **)(*param_1 + 0x38))(param_1,local_28,param_3,param_4);
  }
  (**(code **)(*param_1 + 0x50))(param_1,&local_28,1,1,8);
  return local_28;
}


