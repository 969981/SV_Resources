/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0069cf30; name: FUN_0069cf30
 */


void FUN_0069cf30(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (pbVar2 == PTR_DAT_047cba80 || pbVar2 == (byte *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
LAB_0069cfac:
      if ((*pbVar2 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar2);
      pbVar2 = *(byte **)(param_1 + 0x20);
      goto joined_r0x0069cf6c;
    }
  }
  else {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (pbVar2 != puVar1 && pbVar2 != (byte *)0x0) goto LAB_0069cfac;
  }
  pbVar2 = *(byte **)(param_1 + 0x20);
joined_r0x0069cf6c:
  if ((pbVar2 == puVar1) || (pbVar2 == (byte *)0x0)) {
    return;
  }
  if ((*pbVar2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  return;
}


