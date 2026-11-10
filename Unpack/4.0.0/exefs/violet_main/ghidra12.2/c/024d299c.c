/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024d299c; name: FUN_024d299c
 */


void FUN_024d299c(float param_1,void *param_2,void *param_3)

{
  memcpy(param_2,param_3,0x24);
  *(float *)((long)param_2 + 0x30) = ABS(param_1);
  return;
}


