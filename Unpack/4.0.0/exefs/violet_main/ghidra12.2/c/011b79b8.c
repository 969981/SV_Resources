/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b79b8; name: FUN_011b79b8
 */


undefined8 FUN_011b79b8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_011b7194();
  if (lVar1 == 0) {
    uVar2 = 0xe8cd8d64013d532;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}


