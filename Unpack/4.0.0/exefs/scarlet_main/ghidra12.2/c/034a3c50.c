/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a3c50; name: FUN_034a3c50
 */


void FUN_034a3c50(long param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  
  puVar1 = (uint *)(param_1 + 699);
  if ((*puVar1 & 0x5000) != 0x4000) {
    return;
  }
  piVar7 = *(int **)(param_1 + 0x108);
  if ((piVar7 != (int *)0x0) && (*piVar7 == 2)) {
    iVar3 = *(int *)(*(long *)PTR_DAT_047e2fe8 + 0x78) - piVar7[0x16];
    uVar2 = piVar7[0x11] + iVar3;
    piVar7[0x11] = uVar2;
    piVar7[0x12] = piVar7[0x12] + iVar3;
    *piVar7 = 1;
    piVar7[0x15] = (int)((float)piVar7[0x14] * -(float)uVar2);
  }
  plVar8 = *(long **)(param_1 + 0x68);
  if (plVar8 != (long *)0x0) {
    while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
      *(int *)(plVar8[1] + 0x8c) = *(int *)(plVar8[1] + 0x8c) + -1;
    }
  }
  *puVar1 = *puVar1 & 0xffffbfff;
  puVar4 = PTR_DAT_047e71d0;
  puVar5 = *(undefined8 **)(PTR_DAT_047e71d0 + 0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x18);
    if (puVar5 == (undefined8 *)0x0) goto LAB_034a3d94;
    *puVar5 = *(undefined8 *)(puVar4 + 0x10);
    *(undefined8 **)(puVar4 + 0x10) = puVar5;
  }
  if (*(undefined8 **)(puVar4 + 8) == (undefined8 *)0x0) {
    *(undefined8 **)puVar4 = puVar5;
  }
  else {
    **(undefined8 **)(puVar4 + 8) = puVar5;
    puVar5 = *(undefined8 **)(puVar4 + 0x10);
  }
  *(undefined8 **)(puVar4 + 8) = puVar5;
  *(undefined8 *)(puVar4 + 0x10) = *puVar5;
  *puVar5 = 0;
  *(int *)(puVar4 + 0x24) = *(int *)(puVar4 + 0x24) + 1;
  lVar6 = *(long *)(puVar4 + 8);
  *(long *)(lVar6 + 8) = param_1;
  *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)PTR_DAT_047e6fe0;
  *(ushort *)(lVar6 + 0x14) = *(ushort *)(lVar6 + 0x14) & 0xfe00 | 3;
LAB_034a3d94:
  lVar6 = *(long *)(param_1 + 0x230);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x3c) == 1) {
      *(undefined4 *)(lVar6 + 0x3c) = 0;
    }
    else if (*(int *)(lVar6 + 0x3c) == 2) {
      *(undefined4 *)(lVar6 + 0x3c) = 3;
    }
  }
  return;
}


