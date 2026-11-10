/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029856b0; name: FUN_029856b0
 */


void FUN_029856b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined1 *puStack_30;
  undefined1 local_28;
  undefined1 local_1c [4];
  undefined8 local_18;
  
  local_38 = &local_18;
  local_40 = 1;
  puStack_30 = local_1c;
  local_28 = 0;
  local_50 = param_2;
  uStack_48 = param_4;
  local_1c[0] = param_5;
  local_18 = param_3;
  FUN_01461214();
  uVar1 = FUN_02985710();
  FUN_02985718(uVar1,auStack_58,&local_50);
  return;
}


