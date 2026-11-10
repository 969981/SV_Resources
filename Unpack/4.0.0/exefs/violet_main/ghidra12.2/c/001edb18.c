/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001edb18; name: FUN_001edb18
 */


long FUN_001edb18(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_001f9090();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0xe4) >> 1 & 1) != 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(int *)(lVar1 + 0xdc) != 5) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


