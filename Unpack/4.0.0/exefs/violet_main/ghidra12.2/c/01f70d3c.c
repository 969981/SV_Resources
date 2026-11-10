/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f70d3c; name: FUN_01f70d3c
 */


void FUN_01f70d3c(long param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 != 0) {
    for (plVar1 = *(long **)(param_1 + 0x98); plVar1 != *(long **)(param_1 + 0xa0);
        plVar1 = plVar1 + 1) {
      if (*plVar1 == param_2) {
        FUN_027bdb24((long *)(param_1 + 0x98),plVar1);
        return;
      }
    }
  }
  return;
}


