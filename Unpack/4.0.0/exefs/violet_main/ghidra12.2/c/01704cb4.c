/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01704cb4; name: FUN_01704cb4
 */


void FUN_01704cb4(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x30) + 0x2b0) == '\0') {
    return;
  }
  FUN_014e799c(*(long *)(param_1 + 0x30),0xffffffff);
  FUN_01704cf8(*(undefined8 *)(param_1 + 0x30),2);
  return;
}


