/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033a33c; name: FUN_0033a33c
 */


void FUN_0033a33c(long param_1,long param_2)

{
  if ((*(long *)(param_1 + 8) != 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


