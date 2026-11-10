/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00796a24; name: FUN_00796a24
 */


bool FUN_00796a24(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = memcmp((void *)(param_1 + 8),&DAT_03d0b5ef,0x10);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = memcmp((void *)(param_1 + 8),&DAT_03d0b5ff,8);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


