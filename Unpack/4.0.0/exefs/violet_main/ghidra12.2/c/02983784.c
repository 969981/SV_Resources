/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02983784; name: FUN_02983784
 */


undefined1 FUN_02983784(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined4 local_20 [2];
  undefined8 local_18;
  
  local_20[0] = param_2;
  local_18 = param_3;
  FUN_01461214();
  uVar1 = FUN_0146121c();
  FUN_01461224(uVar1,local_28,local_20);
  return local_28[0];
}


