/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a60dc; name: FUN_029a60dc
 */


uint FUN_029a60dc(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  
  local_24 = 0;
  local_2c = 0;
  local_1c = 4;
  local_30 = param_1;
  uStack_20 = param_3;
  uVar1 = FUN_0159c22c(param_2,&local_30,0);
  return uVar1 & 1;
}


