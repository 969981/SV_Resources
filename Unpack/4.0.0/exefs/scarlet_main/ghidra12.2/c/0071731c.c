/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071731c; name: FUN_0071731c
 */


void FUN_0071731c(undefined *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (pbVar2 == PTR_DAT_047cba80 || pbVar2 == (byte *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (pbVar2 == PTR_DAT_047cba80 || pbVar2 == (byte *)0x0) goto joined_r0x0071735c;
  }
  else {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (pbVar2 == puVar1 || pbVar2 == (byte *)0x0) goto joined_r0x0071735c;
  }
  if ((*pbVar2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar2);
joined_r0x0071735c:
  if ((param_1 != PTR_DAT_047d01f8) && (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)) {
    FUN_00513c68(lVar3);
    FUN_0049e790(PTR_LAB_047cba48,lVar3);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  FUN_00717084(param_1);
  return;
}


