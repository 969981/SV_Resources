/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c7d63c; name: FUN_02c7d63c
 */


void FUN_02c7d63c(long param_1,undefined1 param_2)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined1 *)(param_1 + 0x1e) = param_2;
  return;
}


