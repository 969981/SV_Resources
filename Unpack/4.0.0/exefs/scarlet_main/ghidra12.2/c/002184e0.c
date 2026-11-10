/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002184e0; name: FUN_002184e0
 */


void FUN_002184e0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  plVar2 = (long *)(uVar1 & 0xfffffffffffffffe);
  plVar5 = plVar2;
  if ((uVar1 & 1) != 0) {
    plVar5 = (long *)*plVar2;
  }
  if ((plVar5 == (long *)0x0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
    FUN_0021d964(lVar4);
    FUN_0049e790(PTR_LAB_047cba48,lVar4);
    uVar1 = *(ulong *)(param_1 + 8);
    plVar2 = (long *)(uVar1 & 0xfffffffffffffffe);
  }
  uVar3 = uVar1 & 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)*plVar2;
  }
  if ((plVar2 == (long *)0x0) && (plVar5 = *(long **)(param_1 + 0x18), plVar5 != (long *)0x0)) {
    *plVar5 = (long)(PTR_DAT_047cbe38 + 0x10);
    FUN_0021b5a0(plVar5);
    if (((plVar5[1] & 1U) != 0) &&
       ((plVar2 = (long *)(plVar5[1] & 0xfffffffffffffffe), *plVar2 == 0 && (plVar2 != (long *)0x0))
       )) {
      if ((*(byte *)(plVar2 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar2[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar2);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar5);
    uVar1 = *(ulong *)(param_1 + 8);
    uVar3 = uVar1 & 1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
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


