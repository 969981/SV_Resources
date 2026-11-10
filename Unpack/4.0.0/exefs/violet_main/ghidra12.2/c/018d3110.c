/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d3110; name: FUN_018d3110
 */


void FUN_018d3110(long param_1,undefined8 param_2,undefined2 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  undefined2 local_18;
  byte local_16;
  
  local_16 = param_4 & 1;
  local_20 = param_2;
  local_18 = param_3;
  uVar1 = FUN_018d314c(*(undefined8 *)(param_1 + 0x78));
  FUN_018d3154(uVar1,auStack_28,&local_20);
  return;
}


