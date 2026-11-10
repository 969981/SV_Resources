/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029810e4; name: FUN_029810e4
 */


undefined2
FUN_029810e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined2 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined2 local_40 [4];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = param_4;
  uStack_30 = param_5;
  local_28 = param_6;
  local_26 = param_7;
  local_25 = param_8;
  local_20 = param_2;
  uStack_18 = param_3;
  FUN_01461214();
  uVar1 = FUN_02981300();
  FUN_02981308(uVar1,local_40,&local_38);
  return local_40[0];
}


