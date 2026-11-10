/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ad938; name: FUN_029ad938
 */


void FUN_029ad938(long param_1)

{
  if (*(char *)(param_1 + 600) != '\0') {
    FUN_029ad980(param_1 + 0x128);
    if (*(char *)(param_1 + 0x259) != '\0') {
      FUN_029ad9dc(param_1 + 0x128);
      return;
    }
  }
  return;
}


