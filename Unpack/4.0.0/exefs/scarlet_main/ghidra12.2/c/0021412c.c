/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021412c; name: FUN_0021412c
 */


void FUN_0021412c(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar1 != PTR_DAT_047cba80) {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar1 + 0x10) = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  plVar6 = plVar3;
  if ((uVar2 & 1) != 0) {
    plVar6 = (long *)*plVar3;
  }
  if ((plVar6 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
    FUN_0021d964(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar4 = uVar2 & 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)*plVar3;
  }
  if ((plVar3 == (long *)0x0) && (plVar6 = *(long **)(param_1 + 0x20), plVar6 != (long *)0x0)) {
    *plVar6 = (long)(PTR_DAT_047cbd38 + 0x10);
    if (*(int *)((long)plVar6 + 0x1c) != 0) {
      FUN_0021c298(plVar6);
    }
    if ((((plVar6[1] & 1U) != 0) &&
        (plVar3 = (long *)(plVar6[1] & 0xfffffffffffffffe), *plVar3 == 0)) &&
       (plVar3 != (long *)0x0)) {
      if ((*(byte *)(plVar3 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar3);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar6);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar4 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (uVar4 != 0) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) != 0) {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar2 + 8) = 0;
  }
  return;
}


