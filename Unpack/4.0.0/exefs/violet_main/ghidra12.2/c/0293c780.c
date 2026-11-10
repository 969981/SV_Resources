/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293c780; name: FUN_0293c780
 */


undefined8 FUN_0293c780(long param_1)

{
  if (*(char *)(param_1 + 0x42) == '\0') {
    *(undefined1 *)(param_1 + 0x42) = 1;
    return 1;
  }
  return 0;
}


