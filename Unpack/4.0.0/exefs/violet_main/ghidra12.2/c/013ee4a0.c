/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013ee4a0; name: FUN_013ee4a0
 */


undefined8 FUN_013ee4a0(float param_1,long param_2,int param_3,undefined4 param_4)

{
  long *plVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  plVar1 = *(long **)(*(long *)(param_2 + 0x200) + 0x60);
  (**(code **)(*plVar1 + 0xd8))(plVar1,param_3,(int)(param_1 * 1000.0),param_4);
  return 1;
}


