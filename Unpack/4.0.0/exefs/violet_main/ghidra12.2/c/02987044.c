/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02987044; name: FUN_02987044
 */


undefined4 FUN_02987044(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined4 local_20 [2];
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  local_15 = 1;
  local_18 = param_2;
  local_17 = param_3;
  local_16 = param_4;
  FUN_01461214();
  uVar1 = FUN_01248260();
  FUN_012482a0(uVar1,local_20,&local_18);
  return local_20[0];
}


