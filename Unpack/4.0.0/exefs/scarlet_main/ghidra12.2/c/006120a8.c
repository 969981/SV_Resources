/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006120a8; name: FUN_006120a8
 */


void FUN_006120a8(undefined *param_1)

{
  byte *pbVar1;
  long lVar2;
  
  pbVar1 = *(byte **)(param_1 + 0x28);
  if (pbVar1 != PTR_DAT_047cba80 && pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar1 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar1);
  }
  if (param_1 != PTR_DAT_047ceda8) {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      FUN_00613648(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
      FUN_004eb088(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) {
      FUN_00513c68(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 != 0) {
      FUN_004eb088(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
      return;
    }
  }
  return;
}


