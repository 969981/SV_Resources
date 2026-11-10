/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6ba70; name: FUN_01e6ba70
 */


bool FUN_01e6ba70(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_01e6baa8();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0xf2) != '\0';
  }
  return bVar1;
}


