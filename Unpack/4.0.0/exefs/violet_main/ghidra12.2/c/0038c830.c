/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c830; name: FUN_0038c830
 */


ulong FUN_0038c830(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_2 & param_2 - 1) == 0) {
    lVar1 = 0;
    if ((param_2 + 7 + param_1 == 0) || (lVar1 = (*(code *)PTR_malloc_044971d8)(), lVar1 != 0)) {
      uVar2 = param_2 + 7 + lVar1 & -param_2;
      *(long *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


