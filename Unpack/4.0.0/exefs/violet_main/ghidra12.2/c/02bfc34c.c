/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bfc34c; name: FUN_02bfc34c
 */


void FUN_02bfc34c(long *param_1)

{
  if (*(long *)(*param_1 + 0x40) != 0) {
    FUN_01e83db8();
  }
  if (*(long *)(param_1[1] + 0x40) == 0) {
    return;
  }
  FUN_01e83db8();
  return;
}


