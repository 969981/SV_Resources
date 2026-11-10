/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d5204; name: FUN_021d5204
 */


uint FUN_021d5204(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_18 [8];
  
  lVar2 = FUN_00efcb90(param_1 + 0x108,auStack_18);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_021d5124();
  }
  return uVar1 & 1;
}


