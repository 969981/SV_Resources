/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02006f7c; name: FUN_02006f7c
 */


void FUN_02006f7c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_02008170();
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  *(char *)(param_1 + 0x24) = (char)iVar1;
  return;
}


