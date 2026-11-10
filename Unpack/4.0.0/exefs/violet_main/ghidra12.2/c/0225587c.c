/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0225587c; name: FUN_0225587c
 */


int FUN_0225587c(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x110) != 0) {
    iVar1 = *(ushort *)(param_1 + 0x110) - 1;
  }
  return iVar1;
}


