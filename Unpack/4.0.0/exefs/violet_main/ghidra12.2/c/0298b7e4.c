/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298b7e4; name: FUN_0298b7e4
 */


undefined1 FUN_0298b7e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_44 [36];
  
  local_50 = 0;
  local_48 = 0;
  FUN_01246154(auStack_44);
  local_50 = param_2;
  FUN_01461214(param_1);
  uVar1 = FUN_029424b4();
  FUN_029424bc(uVar1,local_58,&local_50);
  return local_58[0];
}


