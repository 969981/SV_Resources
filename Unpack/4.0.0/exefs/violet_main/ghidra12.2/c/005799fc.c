/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005799fc; name: FUN_005799fc
 */


void FUN_005799fc(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0)) {
      *plVar2 = (long)(PTR_DAT_047ce368 + 0x10);
      FUN_0057cb74(plVar2);
      if (((plVar2[1] & 1U) != 0) &&
         ((plVar3 = (long *)(plVar2[1] & 0xfffffffffffffffe), *plVar3 == 0 &&
          (plVar3 != (long *)0x0)))) {
        if ((*(byte *)(plVar3 + 1) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
        }
        FUN_0049e790(PTR_LAB_047cba48,plVar3);
      }
LAB_00579b24:
      FUN_0049e790(PTR_LAB_047cba48,plVar2);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
    break;
  case 2:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0)) {
      FUN_0057d750(plVar2);
      goto LAB_00579b24;
    }
    break;
  case 3:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0)) {
      FUN_0057dda4(plVar2);
      goto LAB_00579b24;
    }
    break;
  case 4:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0)) {
      FUN_0057e72c(plVar2);
      goto LAB_00579b24;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


