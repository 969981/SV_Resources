/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02980d54; name: FUN_02980d54
 */


undefined1 FUN_02980d54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined2 local_18;
  
  local_18 = 0x104;
  local_20 = param_2;
  FUN_01461214();
  uVar1 = FUN_0297e238();
  FUN_0297e240(uVar1,local_28,&local_20);
  return local_28[0];
}


