/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00617730; name: FUN_00617730
 */


void FUN_00617730(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  byte *pbVar3;
  
  *param_1 = (long)(PTR_DAT_047cee80 + 0x10);
  puVar1 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
  if ((param_1[1] & 1U) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  if (puVar1 == (ulong *)0x0) {
    pbVar3 = (byte *)param_1[2];
    if ((pbVar3 != PTR_DAT_047cba80) && (pbVar3 != (byte *)0x0)) {
      if ((*pbVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    }
    lVar2 = param_1[3];
    if (lVar2 != 0) {
      FUN_004eb088(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
      return;
    }
  }
  return;
}


