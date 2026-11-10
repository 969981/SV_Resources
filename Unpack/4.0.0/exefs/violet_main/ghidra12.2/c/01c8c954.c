/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c8c954; name: FUN_01c8c954
 */


void FUN_01c8c954(long param_1)

{
  FUN_01c8cfcc(param_1 + 0x60);
  if (*(char *)(param_1 + 0x58) != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  FUN_0186e214(param_1 + 0x50);
  return;
}


