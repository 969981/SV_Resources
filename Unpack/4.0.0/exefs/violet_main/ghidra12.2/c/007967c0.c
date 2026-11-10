/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007967c0; name: FUN_007967c0
 */


bool FUN_007967c0(long param_1)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_1 + 8),&DAT_03d0b5ef,0x10);
  return iVar1 != 0;
}


