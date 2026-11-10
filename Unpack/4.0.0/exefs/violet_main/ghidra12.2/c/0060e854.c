/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0060e854; name: FUN_0060e854
 */


void FUN_0060e854(undefined *param_1)

{
  undefined *puVar1;
  long *plVar2;
  byte *pbVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) goto joined_r0x0060e894;
  }
  else {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 == puVar1 || pbVar3 == (byte *)0x0) goto joined_r0x0060e894;
  }
  if ((*pbVar3 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar3);
joined_r0x0060e894:
  if ((param_1 == PTR_DAT_047cedf8) || (plVar2 = *(long **)(param_1 + 0x20), plVar2 == (long *)0x0))
  {
    return;
  }
  *plVar2 = (long)(PTR_DAT_047cee48 + 0x10);
  FUN_0060f774(plVar2);
  if (((plVar2[1] & 1U) != 0) &&
     ((plVar4 = (long *)(plVar2[1] & 0xfffffffffffffffe), *plVar4 == 0 && (plVar4 != (long *)0x0))))
  {
    if ((*(byte *)(plVar4 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar4[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar4);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar2);
  return;
}


