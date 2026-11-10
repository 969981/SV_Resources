/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0060ea14; name: FUN_0060ea14
 */


void FUN_0060ea14(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (pbVar3 != PTR_DAT_047cba80) {
    if ((*pbVar3 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3 = *(byte **)(param_1 + 0x18);
      goto joined_r0x0060ea48;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  pbVar3 = *(byte **)(param_1 + 0x18);
joined_r0x0060ea48:
  if (pbVar3 != puVar1) {
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  uVar4 = uVar2 & 1;
  puVar5 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  if ((puVar5 == (ulong *)0x0) && (plVar6 = *(long **)(param_1 + 0x20), plVar6 != (long *)0x0)) {
    *plVar6 = (long)(PTR_DAT_047cee48 + 0x10);
    FUN_0060f774(plVar6);
    if (((plVar6[1] & 1U) != 0) &&
       ((plVar7 = (long *)(plVar6[1] & 0xfffffffffffffffe), *plVar7 == 0 && (plVar7 != (long *)0x0))
       )) {
      if ((*(byte *)(plVar7 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar7[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar7);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar6);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar4 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (uVar4 != 0) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) != 0) {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar2 + 8) = 0;
  }
  return;
}


