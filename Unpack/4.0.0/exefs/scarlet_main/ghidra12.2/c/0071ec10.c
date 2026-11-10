/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071ec10; name: FUN_0071ec10
 */


void FUN_0071ec10(long *param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  
  *param_1 = (long)(PTR_DAT_047d02f8 + 0x10);
  puVar1 = PTR_DAT_047cba80;
  puVar2 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
  if ((param_1[1] & 1U) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 == (ulong *)0x0) {
    pbVar3 = (byte *)param_1[2];
    if ((pbVar3 != PTR_DAT_047cba80) && (pbVar3 != (byte *)0x0)) {
      if ((*pbVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    }
    pbVar3 = (byte *)param_1[3];
    if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
      if ((*pbVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar3);
      return;
    }
  }
  return;
}


