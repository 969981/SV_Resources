/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01568494; name: FUN_01568494
 */


uint FUN_01568494(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_8;
  
  local_8 = 0;
  FUN_0111e634(param_1,param_2,&local_8,0);
  uVar1 = FUN_015684d0(param_1,&local_8);
  return uVar1 & 1;
}


