/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020df03c; name: FUN_020df03c
 */


bool FUN_020df03c(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x200) + 0x60) + 0x68))();
  return iVar1 == 1;
}


