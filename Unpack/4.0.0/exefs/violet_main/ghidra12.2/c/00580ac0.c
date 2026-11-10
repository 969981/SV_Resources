/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00580ac0; name: FUN_00580ac0
 */


void FUN_00580ac0(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0)) {
      FUN_00581d64(plVar2);
LAB_00580bb4:
      FUN_0049e790(PTR_LAB_047cba48,plVar2);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0)) {
      *plVar2 = (long)(PTR_DAT_047ce350 + 0x10);
      if ((plVar2 != (long *)PTR_DAT_047ce348) && (lVar3 = plVar2[2], lVar3 != 0)) {
        FUN_00578044(lVar3);
        FUN_0049e790(PTR_LAB_047cba48,lVar3);
      }
      if ((((plVar2[1] & 1U) != 0) &&
          (plVar4 = (long *)(plVar2[1] & 0xfffffffffffffffe), *plVar4 == 0)) &&
         (plVar4 != (long *)0x0)) {
        if ((*(byte *)(plVar4 + 1) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,plVar4[3]);
        }
        FUN_0049e790(PTR_LAB_047cba48,plVar4);
      }
      goto LAB_00580bb4;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


