/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a76a4; name: FUN_024a76a4
 */


void FUN_024a76a4(long param_1,uint *param_2)

{
  uint *puVar1;
  uint *local_18;
  
  puVar1 = (uint *)(*(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0x100) * 0x18);
  local_18 = puVar1 + 2;
  FUN_024a7704(param_2,&local_18);
  *puVar1 = *param_2 ^ (int)*param_2 >> 0x1f;
  *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 1;
  return;
}


