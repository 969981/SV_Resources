/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034cce5c; name: FUN_034cce5c
 */


long * FUN_034cce5c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  int *piVar5;
  long lVar6;
  
  if (DAT_048b0460 == '\0') {
    return (long *)0x0;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if ((*(long *)(lVar3 + 0x70) != 0) &&
     (*(int *)(*(long *)(param_1 + 0x170) + 0x18) == *(int *)(*(long *)(lVar3 + 0x70) + 0x28))) {
    plVar2 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x10);
    if (plVar2 != (long *)0x0) {
      ppuVar4 = &PTR_FUN_047c51e0;
      goto LAB_034ccf98;
    }
    lVar3 = *(long *)(param_1 + 0x10);
  }
  lVar3 = *(long *)(lVar3 + 0x58);
  if (lVar3 != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x170) + 0x18);
    if (*(uint *)(lVar3 + 0x38) != 0) {
      lVar6 = (ulong)*(uint *)(lVar3 + 0x38) << 2;
      piVar5 = *(int **)(lVar3 + 0x30);
      do {
        if (*piVar5 == iVar1) goto LAB_034ccf24;
        lVar6 = lVar6 + -4;
        piVar5 = piVar5 + 1;
      } while (lVar6 != 0);
    }
    if (*(uint *)(lVar3 + 0x28) != 0) {
      lVar6 = (ulong)*(uint *)(lVar3 + 0x28) << 3;
      piVar5 = *(int **)(lVar3 + 0x20);
      do {
        if (*piVar5 == iVar1) goto LAB_034ccf24;
        lVar6 = lVar6 + -8;
        piVar5 = piVar5 + 2;
      } while (lVar6 != 0);
    }
  }
LAB_034ccf50:
  if ((*(byte *)(param_1 + 0x110) >> 3 & 1) == 0) {
    return (long *)0x0;
  }
  if ((*(ushort *)(param_1 + 0x13c) & 7) == 2) {
    return (long *)0x0;
  }
  plVar2 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x20);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  ppuVar4 = &PTR_FUN_047c52a0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined8 *)((long)plVar2 + 0x17) = 0;
LAB_034ccf98:
  *plVar2 = (long)ppuVar4;
  plVar2[1] = 0;
  iVar1 = (**(code **)*plVar2)(plVar2,param_1);
  if (iVar1 == 1) {
    return plVar2;
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar2);
  return (long *)0x0;
LAB_034ccf24:
  plVar2 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x10);
  if (plVar2 != (long *)0x0) {
    ppuVar4 = &PTR_FUN_047c5240;
    goto LAB_034ccf98;
  }
  goto LAB_034ccf50;
}


