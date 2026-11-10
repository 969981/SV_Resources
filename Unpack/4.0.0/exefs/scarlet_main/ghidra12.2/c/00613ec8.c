/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00613ec8; name: FUN_00613ec8
 */


void FUN_00613ec8(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (pbVar2 == PTR_DAT_047cba80 || pbVar2 == (byte *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
LAB_00613f44:
      if ((*pbVar2 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar2);
      pbVar2 = *(byte **)(param_1 + 0x20);
      goto joined_r0x00613f04;
    }
  }
  else {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (pbVar2 != puVar1 && pbVar2 != (byte *)0x0) goto LAB_00613f44;
  }
  pbVar2 = *(byte **)(param_1 + 0x20);
joined_r0x00613f04:
  if ((pbVar2 == puVar1) || (pbVar2 == (byte *)0x0)) {
    return;
  }
  if ((*pbVar2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  return;
}


