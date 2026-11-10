/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029826b8; name: FUN_029826b8
 */


undefined4
FUN_029826b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_48 = param_2;
  uStack_40 = param_3;
  local_38 = param_5;
  uStack_30 = param_4;
  local_28 = param_6;
  local_18 = param_7;
  FUN_01461214();
  uVar1 = FUN_02982a74();
  FUN_016327c4(uVar1,local_50,&local_48);
  return local_50[0];
}


