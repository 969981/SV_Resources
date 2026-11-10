/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f0008; name: FUN_008f0008
 */


long FUN_008f0008(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  lVar1 = 0;
  if ((uVar2 & 1) != 0) {
    lVar1 = 0xc;
  }
  if ((uVar2 & 2) != 0) {
    lVar1 = lVar1 + 0xc;
  }
  if ((uVar2 & 4) != 0) {
    lVar1 = lVar1 + 8;
  }
  return lVar1;
}


