/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029806b0; name: FUN_029806b0
 */


undefined1
FUN_029806b0(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined8 *param_4,
            undefined1 param_5)

{
  undefined8 uVar1;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined1 local_28 [8];
  
  local_60 = 0;
  local_5c = 0;
  FUN_0189372c(&local_58);
  local_58 = *param_4;
  uStack_50 = param_4[1];
  local_60 = param_2;
  local_5c = param_3;
  local_48 = param_5;
  FUN_01461214(param_1);
  uVar1 = FUN_0298093c();
  FUN_0297e9e8(uVar1,local_28,&local_60);
  return local_28[0];
}


