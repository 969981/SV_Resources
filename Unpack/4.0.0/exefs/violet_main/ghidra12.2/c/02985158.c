/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02985158; name: FUN_02985158
 */


void FUN_02985158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,uint param_6,char param_7)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20;
  uint local_1c;
  undefined1 local_18;
  undefined1 local_17;
  
  local_1c = param_6 & 0xffff;
  local_18 = param_7 != '\0';
  local_17 = 1;
  local_38 = param_2;
  uStack_30 = param_3;
  local_28 = param_4;
  local_20 = param_5;
  FUN_01461214();
  uVar1 = FUN_02981b90();
  FUN_017d9cec(uVar1,auStack_40,&local_38);
  return;
}


