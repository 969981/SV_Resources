/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00872498; name: FUN_00872498
 */


int FUN_00872498(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x28);
  iVar1 = iVar2 + 2;
  if (-1 < iVar2 + 1) {
    iVar1 = iVar2 + 1;
  }
  return iVar1 >> 1;
}


