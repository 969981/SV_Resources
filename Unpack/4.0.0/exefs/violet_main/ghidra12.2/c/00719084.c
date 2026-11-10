/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00719084; name: FUN_00719084
 */


void FUN_00719084(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 != PTR_DAT_047cba80 && pbVar3 != (byte *)0x0) {
LAB_00719100:
      if ((*pbVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar3);
      pbVar3 = *(byte **)(param_1 + 0x20);
      goto joined_r0x007190c0;
    }
  }
  else {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    pbVar3 = *(byte **)(param_1 + 0x18);
    if (pbVar3 != puVar1 && pbVar3 != (byte *)0x0) goto LAB_00719100;
  }
  pbVar3 = *(byte **)(param_1 + 0x20);
joined_r0x007190c0:
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  pbVar3 = *(byte **)(param_1 + 0x30);
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  pbVar3 = *(byte **)(param_1 + 0x38);
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  pbVar3 = *(byte **)(param_1 + 0x40);
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  pbVar3 = *(byte **)(param_1 + 0x48);
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  pbVar3 = *(byte **)(param_1 + 0x50);
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  pbVar3 = *(byte **)(param_1 + 0x58);
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  pbVar3 = *(byte **)(param_1 + 0x60);
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  if (param_1 != PTR_DAT_047d00b8) {
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)(PTR_DAT_047d02c8 + 0x10);
      if ((((plVar4[1] & 1U) != 0) &&
          (plVar5 = (long *)(plVar4[1] & 0xfffffffffffffffe), *plVar5 == 0)) &&
         (plVar5 != (long *)0x0)) {
        if ((*(byte *)(plVar5 + 1) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,plVar5[3]);
        }
        FUN_0049e790(PTR_LAB_047cba48,plVar5);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar4);
    }
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 != 0) {
      FUN_00513c68(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
      return;
    }
  }
  return;
}


