/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029838b8; name: FUN_029838b8
 */


undefined4 FUN_029838b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined2 local_18;
  
  local_18 = 0x103;
  local_20 = param_2;
  FUN_01461214();
  uVar1 = FUN_029838f4();
  FUN_0123ecdc(uVar1,local_28,&local_20);
  return local_28[0];
}


