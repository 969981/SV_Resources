/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068a668; name: FUN_0068a668
 */


void FUN_0068a668(undefined *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1 != PTR_DAT_047cf548) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      FUN_00689c58(lVar1);
      FUN_0049e790(PTR_LAB_047cba48,lVar1);
    }
    plVar2 = *(long **)(param_1 + 0x48);
    if (plVar2 != (long *)0x0) {
      *plVar2 = (long)(PTR_DAT_047cf588 + 0x10);
      if (*(int *)((long)plVar2 + 0x1c) != 0) {
        FUN_0068640c(plVar2);
      }
      if ((((plVar2[1] & 1U) != 0) &&
          (plVar3 = (long *)(plVar2[1] & 0xfffffffffffffffe), *plVar3 == 0)) &&
         (plVar3 != (long *)0x0)) {
        if ((*(byte *)(plVar3 + 1) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
        }
        FUN_0049e790(PTR_LAB_047cba48,plVar3);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar2);
    }
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      FUN_00536704(lVar1);
      FUN_0049e790(PTR_LAB_047cba48,lVar1);
    }
    lVar1 = *(long *)(param_1 + 0x58);
    if (lVar1 != 0) {
      FUN_0068c1f8(lVar1);
      FUN_0049e790(PTR_LAB_047cba48,lVar1);
    }
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 != 0) {
      FUN_0068c1f8(lVar1);
      FUN_0049e790(PTR_LAB_047cba48,lVar1);
      return;
    }
  }
  return;
}


