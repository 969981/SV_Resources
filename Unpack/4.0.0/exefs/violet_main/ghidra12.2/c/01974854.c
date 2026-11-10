/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01974854; name: FUN_01974854
 */


undefined1 FUN_01974854(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  undefined1 local_18;
  undefined1 local_17;
  
  local_18 = param_2;
  local_17 = param_3;
  FUN_01461214();
  uVar1 = FUN_01249f88();
  FUN_01249f90(uVar1,local_20,&local_18);
  return local_20[0];
}


