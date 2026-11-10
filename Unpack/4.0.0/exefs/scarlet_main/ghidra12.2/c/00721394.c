/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00721394; name: FUN_00721394
 */


void FUN_00721394(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) goto joined_r0x007213d4;
  }
  else {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 == puVar1 || pbVar3 == (byte *)0x0) goto joined_r0x007213d4;
  }
  if ((*pbVar3 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar3);
joined_r0x007213d4:
  if ((param_1 == PTR_DAT_047d0318) || (lVar2 = *(long *)(param_1 + 0x20), lVar2 == 0)) {
    return;
  }
  FUN_0071b8ec(lVar2);
  FUN_0049e790(PTR_LAB_047cba48,lVar2);
  return;
}


