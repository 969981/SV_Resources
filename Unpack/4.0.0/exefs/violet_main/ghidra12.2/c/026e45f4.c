/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026e45f4; name: FUN_026e45f4
 */


void FUN_026e45f4(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_026d5d80();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  return;
}


