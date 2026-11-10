/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0021d9d0; name: FUN_0021d9d0
 */


void FUN_0021d9d0(undefined *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (pbVar2 == PTR_DAT_047cba80 || pbVar2 == (byte *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (pbVar2 == PTR_DAT_047cba80 || pbVar2 == (byte *)0x0) goto joined_r0x0021da10;
  }
  else {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
    pbVar2 = *(byte **)(param_1 + 0x18);
    if (pbVar2 == puVar1 || pbVar2 == (byte *)0x0) goto joined_r0x0021da10;
  }
  if ((*pbVar2 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar2);
joined_r0x0021da10:
  if (param_1 != PTR_DAT_047cbd28) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      FUN_00513c68(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      FUN_00513c68(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
      return;
    }
  }
  return;
}


