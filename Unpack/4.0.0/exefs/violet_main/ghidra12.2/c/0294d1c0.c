/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294d1c0; name: FUN_0294d1c0
 */


void FUN_0294d1c0(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_28 [4];
  uint local_24;
  
  local_24 = FUN_0293d5f0();
  local_24 = local_24 & 0xffff;
  local_28[0] = param_2;
  FUN_0293fd90(param_1,local_28);
  FUN_0293d600(param_1);
  return;
}


