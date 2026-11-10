/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c7f0; name: FUN_0038c7f0
 */


long FUN_0038c7f0(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return 0;
  }
  lVar1 = (*(code *)PTR_realloc_044971e8)();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar1;
}


