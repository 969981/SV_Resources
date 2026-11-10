/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159a7d0; name: FUN_0159a7d0
 */


void FUN_0159a7d0(long param_1)

{
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_0159a808(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  FUN_00db2500(param_1 + 0x10);
  return;
}


