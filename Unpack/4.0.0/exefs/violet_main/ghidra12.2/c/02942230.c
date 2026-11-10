/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02942230; name: FUN_02942230
 */


undefined1 FUN_02942230(long param_1,undefined4 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_18 [8];
  
  local_20 = param_2;
  local_1c = param_3;
  uVar1 = FUN_02942268(*(undefined8 *)(param_1 + 0x28));
  FUN_02942270(uVar1,local_18,&local_20);
  return local_18[0];
}


