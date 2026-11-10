/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271a0f8; name: FUN_0271a0f8
 */


void FUN_0271a0f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_0271953c(lVar1 + 0x98);
  if ((*(long *)(lVar1 + 0xa0) == 0) || ((*(byte *)(*(long *)(lVar1 + 0xa0) + 0x1e8) & 1) == 0)) {
    return;
  }
  FUN_02717a98(lVar1);
  FUN_00f9d430(lVar1,*(long *)(lVar1 + 0x60) + 0x210);
  return;
}


