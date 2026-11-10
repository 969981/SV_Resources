/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ed9b4; name: FUN_001ed9b4
 */


void * FUN_001ed9b4(void *param_1,void *param_2,size_t param_3)

{
  if (param_3 != 0) {
    memcpy(param_1,param_2,param_3);
    param_1 = (void *)((long)param_1 + param_3);
  }
  return param_1;
}


