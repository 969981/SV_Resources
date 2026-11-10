/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00606e5c; name: FUN_00606e5c
 */


void FUN_00606e5c(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x40);
  if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x48);
    if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) goto joined_r0x00606e9c;
  }
  else {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    pbVar3 = *(byte **)(param_1 + 0x48);
    if (pbVar3 == puVar1 || pbVar3 == (byte *)0x0) goto joined_r0x00606e9c;
  }
  if ((*pbVar3 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar3);
joined_r0x00606e9c:
  if ((param_1 == PTR_DAT_047cebf8) || (lVar2 = *(long *)(param_1 + 0x50), lVar2 == 0)) {
    return;
  }
  FUN_0060d08c(lVar2);
  FUN_0049e790(PTR_LAB_047cba48,lVar2);
  return;
}


