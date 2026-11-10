/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00609eb8; name: FUN_00609eb8
 */


void FUN_00609eb8(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) goto joined_r0x00609ef8;
  }
  else {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 == puVar1 || pbVar3 == (byte *)0x0) goto joined_r0x00609ef8;
  }
  if ((*pbVar3 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar3);
joined_r0x00609ef8:
  if ((param_1 == PTR_DAT_047cec18) || (lVar2 = *(long *)(param_1 + 0x20), lVar2 == 0)) {
    return;
  }
  FUN_00513c68(lVar2);
  FUN_0049e790(PTR_LAB_047cba48,lVar2);
  return;
}


