/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068d554; name: FUN_0068d554
 */


void FUN_0068d554(long param_1)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (pbVar2 != PTR_DAT_047cba80) {
    if ((*pbVar2 & 1) == 0) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar2 + 0x10) = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
    }
  }
  uVar3 = *(ulong *)(param_1 + 8);
  plVar4 = (long *)(uVar3 & 0xfffffffffffffffe);
  plVar1 = plVar4;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)*plVar4;
  }
  if ((plVar1 == (long *)0x0) && (lVar6 = *(long *)(param_1 + 0x18), lVar6 != 0)) {
    FUN_0026a1cc(lVar6);
    FUN_0049e790(PTR_LAB_047cba48,lVar6);
    uVar3 = *(ulong *)(param_1 + 8);
    plVar4 = (long *)(uVar3 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar1 = plVar4;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)*plVar4;
  }
  if ((plVar1 == (long *)0x0) && (lVar6 = *(long *)(param_1 + 0x20), lVar6 != 0)) {
    FUN_00513c68(lVar6);
    FUN_0049e790(PTR_LAB_047cba48,lVar6);
    uVar3 = *(ulong *)(param_1 + 8);
    plVar4 = (long *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = uVar3 & 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)*plVar4;
  }
  if ((plVar4 == (long *)0x0) && (lVar6 = *(long *)(param_1 + 0x28), lVar6 != 0)) {
    FUN_00513c68(lVar6);
    FUN_0049e790(PTR_LAB_047cba48,lVar6);
    uVar3 = *(ulong *)(param_1 + 8);
    uVar5 = uVar3 & 1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (uVar5 != 0) {
    uVar3 = uVar3 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar3 + 8) & 1) != 0) {
      **(undefined1 **)(uVar3 + 0x18) = 0;
      *(undefined8 *)(uVar3 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar3 + 8) = 0;
  }
  return;
}


