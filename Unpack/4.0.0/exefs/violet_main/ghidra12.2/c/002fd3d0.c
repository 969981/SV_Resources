/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fd3d0; name: FUN_002fd3d0
 */


void FUN_002fd3d0(void *param_1)

{
  if (*(void **)((long)param_1 + 0x20) != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x20));
  }
  if (*(void **)((long)param_1 + 0x48) != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x48));
  }
  free(*(void **)((long)param_1 + 0x70));
  free(param_1);
  return;
}


