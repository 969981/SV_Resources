/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352754c; name: FUN_0352754c
 */


void FUN_0352754c(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x98); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if ((long *)plVar1[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[1] + 0x80))();
    }
  }
  return;
}


