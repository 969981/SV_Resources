/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c966c; name: FUN_001c966c
 */


void FUN_001c966c(long *param_1)

{
  if ((*(byte *)(*param_1 + 0xf47) & 1) == 0) {
    FUN_001c78f4();
    return;
  }
  FUN_001ca258();
  return;
}


