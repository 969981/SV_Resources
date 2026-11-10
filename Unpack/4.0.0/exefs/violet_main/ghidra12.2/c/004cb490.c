/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004cb490; name: FUN_004cb490
 */


void FUN_004cb490(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0xb0);
  if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0xb8);
    if (pbVar3 != PTR_DAT_047cba80 && pbVar3 != (byte *)0x0) {
LAB_004cb50c:
      if ((*pbVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar3);
      pbVar3 = *(byte **)(param_1 + 0xc0);
      goto joined_r0x004cb4cc;
    }
  }
  else {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    pbVar3 = *(byte **)(param_1 + 0xb8);
    if (pbVar3 != puVar1 && pbVar3 != (byte *)0x0) goto LAB_004cb50c;
  }
  pbVar3 = *(byte **)(param_1 + 0xc0);
joined_r0x004cb4cc:
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  if (param_1 != PTR_DAT_047cd878) {
    plVar4 = *(long **)(param_1 + 200);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)(PTR_DAT_047cd9d8 + 0x10);
                    /* try { // try from 004cb594 to 004cb5a3 has its CatchHandler @ 004cb5f8 */
      FUN_004db11c(plVar4);
      FUN_004ca714(plVar4 + 1);
      FUN_004d2ad4(plVar4 + 6);
      FUN_005212b0(plVar4 + 2);
      FUN_0049e790(PTR_LAB_047cba48,plVar4);
    }
    lVar2 = *(long *)(param_1 + 0xd0);
    if (lVar2 != 0) {
      FUN_004e4590(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
      return;
    }
  }
  return;
}


