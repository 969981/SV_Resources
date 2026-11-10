/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cd18c; name: FUN_034cd18c
 */


void FUN_034cd18c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_034cbc38(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x58),param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


