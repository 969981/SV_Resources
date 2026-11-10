/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00578bac; name: FUN_00578bac
 */


void FUN_00578bac(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (plVar2 = *(long **)(param_1 + 0x18), plVar2 != (long *)0x0)) {
      FUN_00582970(plVar2);
LAB_00578c78:
      FUN_0049e790(PTR_LAB_047cba48,plVar2);
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x24) == 2) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (plVar2 = *(long **)(param_1 + 0x18), plVar2 != (long *)0x0)) {
      *plVar2 = (long)(PTR_DAT_047ce2a8 + 0x10);
      if (((plVar2[1] & 1U) != 0) &&
         ((plVar3 = (long *)(plVar2[1] & 0xfffffffffffffffe), *plVar3 == 0 &&
          (plVar3 != (long *)0x0)))) {
        if ((*(byte *)(plVar3 + 1) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
        }
        FUN_0049e790(PTR_LAB_047cba48,plVar3);
      }
      FUN_005322a4(plVar2 + 2);
      goto LAB_00578c78;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


