/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294325c; name: FUN_0294325c
 */


void FUN_0294325c(long param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 2);
  uVar2 = uVar1 >> 7 & 0x7f;
  if (uVar2 < 8) {
    *(ushort *)(param_1 + 2) = uVar1 + 0x80 & 0x3f80 | uVar1 & 0xc07f;
    *(undefined4 *)(param_1 + (ulong)uVar2 * 4 + 4) = param_2;
  }
  return;
}


