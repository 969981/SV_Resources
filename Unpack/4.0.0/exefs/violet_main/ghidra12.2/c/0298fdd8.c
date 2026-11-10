/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298fdd8; name: FUN_0298fdd8
 */


void FUN_0298fdd8(long param_1)

{
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_0185d10c(&local_8);
  *(undefined1 *)(param_1 + 0xe6) = 0;
  return;
}


