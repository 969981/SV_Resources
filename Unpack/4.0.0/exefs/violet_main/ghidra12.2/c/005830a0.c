/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005830a0; name: FUN_005830a0
 */


void FUN_005830a0(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar1 != PTR_DAT_047cba80) {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar1 + 0x10) = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  uVar3 = uVar2 & 1;
  puVar4 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) != 0) {
    puVar4 = (ulong *)*puVar4;
  }
  if ((puVar4 == (ulong *)0x0) && (plVar5 = *(long **)(param_1 + 0x18), plVar5 != (long *)0x0)) {
    *plVar5 = (long)(PTR_DAT_047ce280 + 0x10);
    FUN_005771d4(plVar5);
    if (((plVar5[1] & 1U) != 0) &&
       ((plVar6 = (long *)(plVar5[1] & 0xfffffffffffffffe), *plVar6 == 0 && (plVar6 != (long *)0x0))
       )) {
      if ((*(byte *)(plVar6 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar6[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar6);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar3 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (uVar3 != 0) {
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


