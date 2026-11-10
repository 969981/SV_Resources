/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d022f0; name: FUN_01d022f0
 */


void FUN_01d022f0(undefined8 param_1,byte *param_2)

{
  byte *local_20;
  ulong uStack_18;
  
  uStack_18 = *(ulong *)(param_2 + 8);
  local_20 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_20 = param_2 + 1;
    uStack_18 = (ulong)(*param_2 >> 1);
  }
  FUN_01d023d0(param_1,&local_20);
  return;
}


