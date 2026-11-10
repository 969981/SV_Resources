/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c6f0; name: FUN_0038c6f0
 */


void FUN_0038c6f0(long *param_1)

{
  if (((*param_1 == 0) || (param_1[2] == 0)) || (param_1[3] == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1[1] == 0) {
    param_1[1] = (long)&LAB_0038c740;
  }
  PTR_FUN_044971e0 = (undefined *)param_1[1];
  PTR_malloc_044971d8 = (undefined *)*param_1;
  PTR_free_044971f0 = (undefined *)param_1[3];
  PTR_realloc_044971e8 = (undefined *)param_1[2];
  return;
}


