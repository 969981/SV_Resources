/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b0120; name: FUN_003b0120
 */


undefined8 FUN_003b0120(void)

{
  uint uVar1;
  
  uVar1 = FUN_003ac530();
  if ((uVar1 & 0xff) < 0xc) {
    return (&DAT_047f1668)[uVar1 & 0xff];
  }
  return 0;
}


