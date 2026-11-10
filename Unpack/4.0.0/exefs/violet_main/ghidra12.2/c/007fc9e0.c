/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fc9e0; name: FUN_007fc9e0
 */


void FUN_007fc9e0(void)

{
  undefined1 auStack_20 [16];
  
  if (DAT_047fb489 == '\x01') {
    if (DAT_047fb48a == '\x01') {
      FUN_007fca40(auStack_20);
    }
    FUN_0078a088(8);
    DAT_047fb489 = '\0';
    FUN_00794a5c(auStack_20,8);
  }
  return;
}


