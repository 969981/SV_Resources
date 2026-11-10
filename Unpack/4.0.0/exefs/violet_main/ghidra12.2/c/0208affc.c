/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0208affc; name: FUN_0208affc
 */


void FUN_0208affc(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x78) + 0x544) = 1;
  }
  return;
}


