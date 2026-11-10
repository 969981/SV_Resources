/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0057bdc0; name: FUN_0057bdc0
 */


void FUN_0057bdc0(long param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 != (ulong *)0x0) || (plVar4 = *(long **)(param_1 + 0x10), plVar4 == (long *)0x0))
    goto LAB_0057be98;
    *plVar4 = (long)(PTR_DAT_047ce278 + 0x10);
    uVar3 = plVar4[1];
  }
  else {
    if (iVar1 == 2) {
      puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      if ((puVar2 != (ulong *)0x0) || (plVar4 = *(long **)(param_1 + 0x10), plVar4 == (long *)0x0))
      goto LAB_0057be98;
      FUN_0057b630(plVar4);
      goto LAB_0057bed8;
    }
    if (iVar1 != 1) {
LAB_0057be98:
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 != (ulong *)0x0) || (plVar4 = *(long **)(param_1 + 0x10), plVar4 == (long *)0x0))
    goto LAB_0057be98;
    *plVar4 = (long)(PTR_DAT_047ce380 + 0x10);
    uVar3 = plVar4[1];
  }
  if ((((uVar3 & 1) != 0) && (plVar5 = (long *)(uVar3 & 0xfffffffffffffffe), *plVar5 == 0)) &&
     (plVar5 != (long *)0x0)) {
    if ((*(byte *)(plVar5 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar5[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar5);
  }
LAB_0057bed8:
  FUN_0049e790(PTR_LAB_047cba48,plVar4);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


