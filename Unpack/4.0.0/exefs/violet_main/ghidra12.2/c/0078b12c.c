/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078b12c; name: FUN_0078b12c
 */


bool FUN_0078b12c(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = memcmp((void *)(param_1 + 8),&DAT_03d0abac,0x10);
  bVar1 = false;
  if (iVar2 != 0) {
    bVar1 = *(short *)(param_1 + 0x18) != 0;
  }
  return bVar1;
}


