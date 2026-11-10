/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167a974; name: FUN_0167a974
 */


undefined1
FUN_0167a974(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_14 = 1;
  local_18 = *param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  local_20 = param_5;
  FUN_01461214();
  uVar1 = FUN_014808b4();
  FUN_014808bc(uVar1,local_38,&local_30);
  return local_38[0];
}


