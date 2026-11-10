/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00808300; name: FUN_00808300
 */


void FUN_00808300(void)

{
  undefined1 auStack_30 [16];
  
  if (DAT_047fb4c0 == '\x01') {
    if (DAT_047fb4c1 == '\x01') {
      FUN_00808360(auStack_30);
    }
    FUN_0078a088(9);
    DAT_047fb4c0 = '\0';
    FUN_00794a5c(auStack_30,9);
  }
  return;
}


