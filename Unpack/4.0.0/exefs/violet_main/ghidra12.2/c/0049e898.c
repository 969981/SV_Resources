/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049e898; name: FUN_0049e898
 */


void FUN_0049e898(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  byte *pbVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_047cd6f0 + 0x10);
  puVar1 = PTR_DAT_047cba80;
  pbVar5 = (byte *)param_1[2];
  if (pbVar5 == PTR_DAT_047cba80 || pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)param_1[3];
    if (pbVar5 != PTR_DAT_047cba80 && pbVar5 != (byte *)0x0) {
LAB_0049e920:
      if ((*pbVar5 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar5 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar5);
      uVar3 = param_1[1];
      goto joined_r0x0049e8e0;
    }
  }
  else {
    if ((*pbVar5 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar5 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar5);
    pbVar5 = (byte *)param_1[3];
    if (pbVar5 != puVar1 && pbVar5 != (byte *)0x0) goto LAB_0049e920;
  }
  uVar3 = param_1[1];
joined_r0x0049e8e0:
  if ((((uVar3 & 1) == 0) || (plVar4 = (long *)(uVar3 & 0xfffffffffffffffe), *plVar4 != 0)) ||
     (plVar4 == (long *)0x0)) {
    return;
  }
  plVar6 = plVar4 + 1;
  lVar2 = *plVar6;
  if (lVar2 != plVar4[2]) {
                    /* try { // try from 0049e980 to 0049e987 has its CatchHandler @ 0049e9b8 */
    FUN_00514600(plVar6);
    lVar2 = *plVar6;
  }
  if (lVar2 != 0) {
    plVar4[2] = lVar2;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar4);
  return;
}


