/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0060ac80; name: FUN_0060ac80
 */


void FUN_0060ac80(undefined *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar2 = *(byte **)(param_1 + 0x40);
  if (pbVar2 == PTR_DAT_047cba80 || pbVar2 == (byte *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x48);
    if (pbVar2 == PTR_DAT_047cba80 || pbVar2 == (byte *)0x0) goto joined_r0x0060acc0;
  }
  else {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
    pbVar2 = *(byte **)(param_1 + 0x48);
    if (pbVar2 == puVar1 || pbVar2 == (byte *)0x0) goto joined_r0x0060acc0;
  }
  if ((*pbVar2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar2);
joined_r0x0060acc0:
  if (param_1 != PTR_DAT_047ced30) {
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 != 0) {
      FUN_0060c7e0(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      FUN_0060d08c(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0x60);
    if (lVar3 != 0) {
      FUN_00264004(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
      return;
    }
  }
  return;
}


