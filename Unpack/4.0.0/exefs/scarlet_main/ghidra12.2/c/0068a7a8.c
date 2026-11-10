/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068a7a8; name: FUN_0068a7a8
 */


void FUN_0068a7a8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_047cba80;
  uVar2 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    plVar3 = *(long **)(param_1 + 0x20);
    do {
      plVar3 = plVar3 + 1;
      lVar7 = *plVar3;
      pbVar9 = *(byte **)(lVar7 + 0x10);
      if (pbVar9 == puVar1) {
LAB_0068a808:
        *(undefined1 *)(lVar7 + 0x18) = 0;
        uVar8 = *(ulong *)(lVar7 + 8);
      }
      else {
        if ((*pbVar9 & 1) == 0) {
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          goto LAB_0068a808;
        }
        **(undefined1 **)(pbVar9 + 0x10) = 0;
        pbVar9[8] = 0;
        pbVar9[9] = 0;
        pbVar9[10] = 0;
        pbVar9[0xb] = 0;
        pbVar9[0xc] = 0;
        pbVar9[0xd] = 0;
        pbVar9[0xe] = 0;
        pbVar9[0xf] = 0;
        *(undefined1 *)(lVar7 + 0x18) = 0;
        uVar8 = *(ulong *)(lVar7 + 8);
      }
      if ((uVar8 & 1) != 0) {
        uVar8 = uVar8 & 0xfffffffffffffffe;
        if ((*(byte *)(uVar8 + 8) & 1) == 0) {
          *(undefined2 *)(uVar8 + 8) = 0;
        }
        else {
          **(undefined1 **)(uVar8 + 0x18) = 0;
          *(undefined8 *)(uVar8 + 0x10) = 0;
        }
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar1 = PTR_LAB_047cba48;
  uVar2 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    plVar3 = *(long **)(param_1 + 0x38);
    do {
      plVar3 = plVar3 + 1;
      lVar7 = *plVar3;
      uVar8 = *(ulong *)(lVar7 + 8);
      uVar4 = uVar8 & 1;
      puVar6 = (ulong *)(uVar8 & 0xfffffffffffffffe);
      if ((uVar8 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      if ((puVar6 == (ulong *)0x0) && (lVar10 = *(long *)(lVar7 + 0x10), lVar10 != 0)) {
        FUN_006896fc(lVar10);
        FUN_0049e790(puVar1,lVar10);
        uVar8 = *(ulong *)(lVar7 + 8);
        uVar4 = uVar8 & 1;
      }
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      if (uVar4 != 0) {
        uVar8 = uVar8 & 0xfffffffffffffffe;
        if ((*(byte *)(uVar8 + 8) & 1) == 0) {
          *(undefined2 *)(uVar8 + 8) = 0;
        }
        else {
          **(undefined1 **)(uVar8 + 0x18) = 0;
          *(undefined8 *)(uVar8 + 0x10) = 0;
        }
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  plVar5 = (long *)(uVar2 & 0xfffffffffffffffe);
  plVar3 = plVar5;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)*plVar5;
  }
  if ((plVar3 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x40), lVar7 != 0)) {
    FUN_00689c58(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar3 = plVar5;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)*plVar5;
  }
  if ((plVar3 == (long *)0x0) && (plVar3 = *(long **)(param_1 + 0x48), plVar3 != (long *)0x0)) {
    *plVar3 = (long)(PTR_DAT_047cf588 + 0x10);
    if (*(int *)((long)plVar3 + 0x1c) != 0) {
      FUN_0068640c(plVar3);
    }
    if ((((plVar3[1] & 1U) != 0) &&
        (plVar5 = (long *)(plVar3[1] & 0xfffffffffffffffe), *plVar5 == 0)) &&
       (plVar5 != (long *)0x0)) {
      if ((*(byte *)(plVar5 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar5[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar3);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar3 = plVar5;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)*plVar5;
  }
  if ((plVar3 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x50), lVar7 != 0)) {
    FUN_00536704(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  plVar3 = plVar5;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)*plVar5;
  }
  if ((plVar3 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x58), lVar7 != 0)) {
    FUN_0068c1f8(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar8 = uVar2 & 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((uVar2 & 1) != 0) {
    plVar5 = (long *)*plVar5;
  }
  if ((plVar5 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x60), lVar7 != 0)) {
    FUN_0068c1f8(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar8 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (uVar8 != 0) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) == 0) {
      *(undefined2 *)(uVar2 + 8) = 0;
    }
    else {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
    }
  }
  return;
}


