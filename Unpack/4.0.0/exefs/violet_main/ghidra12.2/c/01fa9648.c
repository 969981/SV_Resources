/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa9648; name: FUN_01fa9648
 */


void FUN_01fa9648(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0xd0) = 1;
  FUN_01fabdfc(*(undefined8 *)(param_1 + 8));
  FUN_01fabe68(param_1 + 0x80);
  return;
}


