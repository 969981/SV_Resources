/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006177d8; name: FUN_006177d8
 */


void FUN_006177d8(long *param_1)

{
  ulong *puVar1;
  byte *pbVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_047cee80 + 0x10);
  puVar1 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
  if ((param_1[1] & 1U) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  if (puVar1 == (ulong *)0x0) {
    pbVar2 = (byte *)param_1[2];
    if ((pbVar2 != PTR_DAT_047cba80) && (pbVar2 != (byte *)0x0)) {
      if ((*pbVar2 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar2);
    }
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      FUN_004eb088(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
      operator_delete(param_1);
      return;
    }
  }
  operator_delete(param_1);
  return;
}


