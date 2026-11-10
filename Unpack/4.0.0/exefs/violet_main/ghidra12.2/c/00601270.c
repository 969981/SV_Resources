/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00601270; name: FUN_00601270
 */


void FUN_00601270(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  byte *pbVar4;
  
  *param_1 = (long)(PTR_DAT_047cec70 + 0x10);
  puVar1 = PTR_DAT_047cba80;
  pbVar4 = (byte *)param_1[2];
  if (pbVar4 == PTR_DAT_047cba80 || pbVar4 == (byte *)0x0) {
    pbVar4 = (byte *)param_1[3];
    if (pbVar4 != PTR_DAT_047cba80 && pbVar4 != (byte *)0x0) {
LAB_006012f8:
      if ((*pbVar4 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar4 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar4);
      uVar2 = param_1[1];
      goto joined_r0x006012b8;
    }
  }
  else {
    if ((*pbVar4 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar4);
    pbVar4 = (byte *)param_1[3];
    if (pbVar4 != puVar1 && pbVar4 != (byte *)0x0) goto LAB_006012f8;
  }
  uVar2 = param_1[1];
joined_r0x006012b8:
  if ((((uVar2 & 1) == 0) || (plVar3 = (long *)(uVar2 & 0xfffffffffffffffe), *plVar3 != 0)) ||
     (plVar3 == (long *)0x0)) {
    return;
  }
  if ((*(byte *)(plVar3 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar3);
  return;
}


