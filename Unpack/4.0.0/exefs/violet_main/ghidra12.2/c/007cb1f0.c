/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cb1f0; name: FUN_007cb1f0
 */


void FUN_007cb1f0(void)

{
  undefined1 auStack_30 [16];
  
  if (DAT_047fb1f1 == '\x01') {
    if (DAT_047fb1f2 == '\x01') {
      FUN_007cb250(auStack_30);
    }
    FUN_0078a088(0x11);
    DAT_047fb1f1 = '\0';
    FUN_00794a5c(auStack_30,0x11);
  }
  return;
}


