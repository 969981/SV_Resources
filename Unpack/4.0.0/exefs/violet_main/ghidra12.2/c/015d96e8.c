/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d96e8; name: FUN_015d96e8
 */


bool FUN_015d96e8(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x30);
  if (iVar1 == 0) {
    return true;
  }
  return iVar1 == 1;
}


