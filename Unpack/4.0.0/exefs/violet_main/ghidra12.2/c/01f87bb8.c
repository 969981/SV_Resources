/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f87bb8; name: FUN_01f87bb8
 */


void FUN_01f87bb8(long param_1,byte param_2)

{
  if (*(char *)(param_1 + 0xff) == '\0') {
    *(byte *)(param_1 + 0xfe) = param_2 & 1;
    *(undefined2 *)(param_1 + 0xfc) = 0x100;
  }
  return;
}


