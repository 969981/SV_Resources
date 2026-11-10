/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e2194; name: FUN_011e2194
 */


undefined1 FUN_011e2194(void)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_011e2dd4();
  if (lVar2 == 0) {
    uVar1 = 6;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 4);
  }
  return uVar1;
}


