/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0061761c; name: FUN_0061761c
 */


void FUN_0061761c(long *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  
  *param_1 = (long)(PTR_DAT_047cee78 + 0x10);
  uVar1 = param_1[1];
  if (((uVar1 & 1) != 0) &&
     (plVar4 = (long *)(uVar1 & 0xfffffffffffffffe), *plVar4 == 0 && plVar4 != (long *)0x0)) {
    if ((*(byte *)(plVar4 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar4[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar4);
    uVar1 = param_1[1];
  }
  *param_1 = (long)(PTR_DAT_047cee80 + 0x10);
  puVar2 = (ulong *)(uVar1 & 0xfffffffffffffffe);
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 == (ulong *)0x0) {
    pbVar5 = (byte *)param_1[2];
    if ((pbVar5 != PTR_DAT_047cba80) && (pbVar5 != (byte *)0x0)) {
      if ((*pbVar5 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar5 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar5);
    }
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      FUN_004eb088(lVar3);
      FUN_0049e790(PTR_LAB_047cba48,lVar3);
      return;
    }
  }
  return;
}


