/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124cde0; name: FUN_0124cde0
 */


undefined1 FUN_0124cde0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  byte local_17;
  
  local_17 = param_3 & 1;
  local_18 = 0;
  local_28[0] = 0;
  local_20 = param_2;
  FUN_01461214();
  uVar1 = FUN_0124ce24();
  FUN_01250a00(uVar1,local_28,&local_20);
  return local_28[0];
}


