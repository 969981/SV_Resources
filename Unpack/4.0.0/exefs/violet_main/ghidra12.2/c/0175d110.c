/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175d110; name: FUN_0175d110
 */


void FUN_0175d110(void *param_1,void *param_2,long param_3)

{
  memcpy(param_1,param_2,0x28);
  *(long *)((long)param_1 + 0x18) = *(long *)((long)param_1 + 0x18) + param_3;
  return;
}


