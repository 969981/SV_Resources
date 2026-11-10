/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01913890; name: FUN_01913890
 */


void FUN_01913890(void)

{
  undefined1 auStack_30 [16];
  
  if (DAT_047fb1f4 == '\x01') {
    if (DAT_047fb1f5 == '\x01') {
      FUN_018fdfc0(auStack_30);
    }
    FUN_0078a088(0x12);
    DAT_047fb1f4 = '\0';
    FUN_00794a5c(auStack_30,0x12);
  }
  return;
}


