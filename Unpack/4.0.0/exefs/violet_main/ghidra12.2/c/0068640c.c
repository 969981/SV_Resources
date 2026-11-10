/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068640c; name: FUN_0068640c
 */


void FUN_0068640c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  uint *puVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 3) {
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    if ((puVar5 != (ulong *)0x0) || (plVar6 = *(long **)(param_1 + 0x10), plVar6 == (long *)0x0))
    goto LAB_006865b8;
    FUN_0068870c(plVar6);
  }
  else if (iVar2 == 2) {
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    if ((puVar5 != (ulong *)0x0) || (plVar6 = *(long **)(param_1 + 0x10), plVar6 == (long *)0x0))
    goto LAB_006865b8;
    FUN_00687cfc(plVar6);
  }
  else {
    if (iVar2 != 1) goto LAB_006865b8;
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    if ((puVar5 != (ulong *)0x0) || (plVar6 = *(long **)(param_1 + 0x10), plVar6 == (long *)0x0))
    goto LAB_006865b8;
    *plVar6 = (long)(PTR_DAT_047cf5a0 + 0x10);
    if (((plVar6[1] & 1U) != 0) &&
       ((plVar7 = (long *)(plVar6[1] & 0xfffffffffffffffe), *plVar7 == 0 && (plVar7 != (long *)0x0))
       )) {
      if ((*(byte *)(plVar7 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar7[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar7);
    }
    puVar3 = PTR_LAB_047cba48;
    puVar4 = (uint *)plVar6[4];
    if ((puVar4 != (uint *)0x0) && (plVar6[2] == 0)) {
      uVar9 = (ulong)*puVar4;
      if (0 < (int)*puVar4) {
        puVar1 = PTR_DAT_047cf588 + 0x10;
        do {
          puVar4 = puVar4 + 2;
          plVar7 = *(long **)puVar4;
          if (plVar7 != (long *)0x0) {
            *plVar7 = (long)puVar1;
            if (*(int *)((long)plVar7 + 0x1c) != 0) {
              FUN_0068640c(plVar7);
            }
            if (((plVar7[1] & 1U) != 0) &&
               (plVar8 = (long *)(plVar7[1] & 0xfffffffffffffffe),
               *plVar8 == 0 && plVar8 != (long *)0x0)) {
              if ((*(byte *)(plVar8 + 1) & 1) != 0) {
                FUN_0049e790(puVar3,plVar8[3]);
              }
              FUN_0049e790(puVar3,plVar8);
            }
            FUN_0049e790(puVar3,plVar7);
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        puVar4 = (uint *)plVar6[4];
      }
      FUN_0049e700(puVar4);
    }
    plVar6[4] = 0;
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar6);
LAB_006865b8:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


