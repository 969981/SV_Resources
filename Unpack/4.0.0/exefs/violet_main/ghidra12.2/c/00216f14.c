/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00216f14; name: FUN_00216f14
 */


void FUN_00216f14(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = uVar1 & 1;
  puVar3 = (ulong *)(uVar1 & 0xfffffffffffffffe);
  if ((uVar1 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if ((puVar3 == (ulong *)0x0) && (plVar4 = *(long **)(param_1 + 0x10), plVar4 != (long *)0x0)) {
    *plVar4 = (long)(PTR_DAT_047cbe38 + 0x10);
    FUN_0021b5a0(plVar4);
    if (((plVar4[1] & 1U) != 0) &&
       ((plVar5 = (long *)(plVar4[1] & 0xfffffffffffffffe), *plVar5 == 0 && (plVar5 != (long *)0x0))
       )) {
      if ((*(byte *)(plVar5 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar5[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar4);
    uVar1 = *(ulong *)(param_1 + 8);
    uVar2 = uVar1 & 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (uVar2 != 0) {
    uVar1 = uVar1 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar1 + 8) & 1) != 0) {
      **(undefined1 **)(uVar1 + 0x18) = 0;
      *(undefined8 *)(uVar1 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar1 + 8) = 0;
  }
  return;
}


