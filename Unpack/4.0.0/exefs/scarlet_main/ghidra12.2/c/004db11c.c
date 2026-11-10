/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004db11c; name: FUN_004db11c
 */


void FUN_004db11c(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar2 = *(byte **)(param_1 + 0x48);
  if (pbVar2 == PTR_DAT_047cba80 || pbVar2 == (byte *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x50);
    if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
LAB_004db198:
      if ((*pbVar2 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar2);
      pbVar2 = *(byte **)(param_1 + 0x58);
      goto joined_r0x004db158;
    }
  }
  else {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
    pbVar2 = *(byte **)(param_1 + 0x50);
    if (pbVar2 != puVar1 && pbVar2 != (byte *)0x0) goto LAB_004db198;
  }
  pbVar2 = *(byte **)(param_1 + 0x58);
joined_r0x004db158:
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x60);
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x68);
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x70);
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x78);
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x80);
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x88);
  if ((pbVar2 != puVar1) && (pbVar2 != (byte *)0x0)) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x90);
  if ((pbVar2 == puVar1) || (pbVar2 == (byte *)0x0)) {
    return;
  }
  if ((*pbVar2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  return;
}


