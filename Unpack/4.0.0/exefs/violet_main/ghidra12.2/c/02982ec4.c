/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02982ec4; name: FUN_02982ec4
 */


undefined2 FUN_02982ec4(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined2 local_28 [4];
  undefined8 local_20;
  byte local_18;
  
  local_18 = param_3 & 1;
  local_20 = param_2;
  FUN_01461214();
  uVar1 = FUN_029420c4();
  FUN_029420cc(uVar1,local_28,&local_20);
  return local_28[0];
}


