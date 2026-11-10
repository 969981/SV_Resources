/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00696bf8; name: FUN_00696bf8
 */


void FUN_00696bf8(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 != (ulong *)0x0) || (plVar3 = *(long **)(param_1 + 0x10), plVar3 == (long *)0x0))
    break;
    FUN_0069897c(plVar3);
    goto LAB_00696dbc;
  case 2:
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 == (ulong *)0x0) && (plVar3 = *(long **)(param_1 + 0x10), plVar3 != (long *)0x0)) {
      FUN_006992d4(plVar3);
      goto LAB_00696dbc;
    }
    break;
  case 3:
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 != (ulong *)0x0) || (plVar3 = *(long **)(param_1 + 0x10), plVar3 == (long *)0x0))
    break;
    *plVar3 = (long)(PTR_DAT_047cf7a0 + 0x10);
    FUN_0069bf10(plVar3);
    uVar1 = plVar3[1];
    goto joined_r0x00696d08;
  case 4:
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 == (ulong *)0x0) && (plVar3 = *(long **)(param_1 + 0x10), plVar3 != (long *)0x0)) {
      FUN_0069c968(plVar3);
      goto LAB_00696dbc;
    }
    break;
  case 5:
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 != (ulong *)0x0) || (plVar3 = *(long **)(param_1 + 0x10), plVar3 == (long *)0x0))
    break;
    *plVar3 = (long)(PTR_DAT_047cf788 + 0x10);
    FUN_0069cf30(plVar3);
    uVar1 = plVar3[1];
joined_r0x00696d08:
    if ((((uVar1 & 1) != 0) && (plVar4 = (long *)(uVar1 & 0xfffffffffffffffe), *plVar4 == 0)) &&
       (plVar4 != (long *)0x0)) {
      if ((*(byte *)(plVar4 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar4[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar4);
    }
LAB_00696dbc:
    FUN_0049e790(PTR_LAB_047cba48,plVar3);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  case 6:
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 == (ulong *)0x0) && (plVar3 = *(long **)(param_1 + 0x10), plVar3 != (long *)0x0)) {
      FUN_00699ccc(plVar3);
      goto LAB_00696dbc;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


