/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01effa90; name: FUN_01effa90
 */


void FUN_01effa90(void)

{
  long lVar1;
  
  lVar1 = FUN_017ca36c();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x3c) = 1;
    *(undefined4 *)(lVar1 + 0x38) = 1;
  }
  return;
}


