/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298189c; name: FUN_0298189c
 */


void FUN_0298189c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined4 param_6,byte param_7)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  byte local_17;
  
  local_17 = param_7 & 1;
  local_18 = 0;
  local_38 = param_2;
  uStack_30 = param_3;
  local_28 = param_4;
  local_20 = param_5;
  local_1c = param_6;
  FUN_01461214();
  uVar1 = FUN_02981b90();
  FUN_017d9cec(uVar1,auStack_40,&local_38);
  return;
}


