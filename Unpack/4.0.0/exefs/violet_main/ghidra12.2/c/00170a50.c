/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00170a50; name: FUN_00170a50
 */


void FUN_00170a50(long param_1,void *param_2)

{
  size_t __n;
  
  __n = (*(long *)(param_1 + 0x80) + (long)*(int *)(param_1 + 0x78)) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(*(void **)(param_1 + 8),param_2,__n);
    *(size_t *)(param_1 + 8) = *(long *)(param_1 + 8) + __n;
  }
  return;
}


