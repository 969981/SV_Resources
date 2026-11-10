/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078a324; name: FUN_0078a324
 */


bool FUN_0078a324(long param_1)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_1 + 8),&DAT_03d0abac,0x10);
  return iVar1 != 0;
}


