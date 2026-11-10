/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057ccdc; name: FUN_0057ccdc
 */


void FUN_0057ccdc(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  plVar2 = (long *)(uVar1 & 0xfffffffffffffffe);
  plVar4 = plVar2;
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)*plVar2;
  }
  if ((plVar4 == (long *)0x0) && (plVar4 = *(long **)(param_1 + 0x10), plVar4 != (long *)0x0)) {
    *plVar4 = (long)(PTR_DAT_047ce280 + 0x10);
    FUN_005771d4(plVar4);
    if (((plVar4[1] & 1U) != 0) &&
       ((plVar2 = (long *)(plVar4[1] & 0xfffffffffffffffe), *plVar2 == 0 && (plVar2 != (long *)0x0))
       )) {
      if ((*(byte *)(plVar2 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar2[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar2);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar4);
    uVar1 = *(ulong *)(param_1 + 8);
    plVar2 = (long *)(uVar1 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar4 = plVar2;
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)*plVar2;
  }
  if ((plVar4 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
    FUN_00534a90(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar1 = *(ulong *)(param_1 + 8);
    plVar2 = (long *)(uVar1 & 0xfffffffffffffffe);
  }
  uVar3 = uVar1 & 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)*plVar2;
  }
  if ((plVar2 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x20), lVar5 != 0)) {
    FUN_0057f010(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar1 = *(ulong *)(param_1 + 8);
    uVar3 = uVar1 & 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (uVar3 != 0) {
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


