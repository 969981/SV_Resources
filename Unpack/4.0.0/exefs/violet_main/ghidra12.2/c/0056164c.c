/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056164c; name: FUN_0056164c
 */


bool FUN_0056164c(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_01f7038c();
  if ((*pbVar1 & 1) == 0) {
    if ((*pbVar1 & 0xfe) != 10) {
      return false;
    }
    pbVar1 = pbVar1 + 1;
  }
  else {
    if (*(long *)(pbVar1 + 8) != 5) {
      return false;
    }
    pbVar1 = *(byte **)(pbVar1 + 0x10);
  }
  return *(int *)pbVar1 == 0x74735f5f && pbVar1[4] == 0x75;
}


