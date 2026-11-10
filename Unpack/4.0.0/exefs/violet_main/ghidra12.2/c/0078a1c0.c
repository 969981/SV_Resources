/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078a1c0; name: FUN_0078a1c0
 */


void FUN_0078a1c0(long *param_1,long param_2)

{
  *param_1 = (long)(PTR_DAT_047d08c0 + 0x10);
  memcpy(param_1 + 1,(void *)(param_2 + 8),0x10);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0x18);
  return;
}


