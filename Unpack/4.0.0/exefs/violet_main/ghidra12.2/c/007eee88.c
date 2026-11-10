/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007eee88; name: FUN_007eee88
 */


void FUN_007eee88(void *param_1,long param_2,uint param_3,uint param_4)

{
  if (0x5a0 - param_4 < param_3) {
    return;
  }
  memcpy(param_1,(void *)(param_2 + (ulong)param_4),(ulong)param_3);
  return;
}


