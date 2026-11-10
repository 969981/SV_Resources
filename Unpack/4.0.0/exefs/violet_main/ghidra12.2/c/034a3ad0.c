/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a3ad0; name: FUN_034a3ad0
 */


void FUN_034a3ad0(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  
  uVar2 = *(uint *)(param_1 + 699);
  if ((uVar2 & 0x5000) != 0) {
    return;
  }
  *(uint *)(param_1 + 699) = uVar2 | 0x4000;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  puVar3 = PTR_DAT_047e71d0;
  if ((param_2 & 1) == 0) {
    puVar4 = *(undefined8 **)(PTR_DAT_047e71d0 + 0x10);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x18);
      if (puVar4 == (undefined8 *)0x0) goto LAB_034a3ba8;
      *puVar4 = *(undefined8 *)(puVar3 + 0x10);
      *(undefined8 **)(puVar3 + 0x10) = puVar4;
    }
    if (*(undefined8 **)(puVar3 + 8) == (undefined8 *)0x0) {
      *(undefined8 **)puVar3 = puVar4;
    }
    else {
      **(undefined8 **)(puVar3 + 8) = puVar4;
      puVar4 = *(undefined8 **)(puVar3 + 0x10);
    }
    *(undefined8 **)(puVar3 + 8) = puVar4;
    *(undefined8 *)(puVar3 + 0x10) = *puVar4;
    *puVar4 = 0;
    *(int *)(puVar3 + 0x24) = *(int *)(puVar3 + 0x24) + 1;
    lVar5 = *(long *)(puVar3 + 8);
    *(long *)(lVar5 + 8) = param_1;
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)PTR_DAT_047e6fe0;
    *(ushort *)(lVar5 + 0x14) = *(ushort *)(lVar5 + 0x14) & 0xfe00 | 2;
  }
LAB_034a3ba8:
  lVar5 = *(long *)(param_1 + 0x230);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x3c) == 3) {
      uVar8 = 2;
    }
    else {
      if (*(int *)(lVar5 + 0x3c) != 0) goto LAB_034a3bd0;
      uVar8 = 1;
    }
    *(undefined4 *)(lVar5 + 0x3c) = uVar8;
  }
LAB_034a3bd0:
  piVar6 = *(int **)(param_1 + 0x108);
  if ((piVar6 != (int *)0x0) && (*piVar6 == 1)) {
    piVar6[0x16] = *(int *)(*(long *)PTR_DAT_047e2fe8 + 0x78);
    *piVar6 = 2;
  }
  plVar7 = *(long **)(param_1 + 0x68);
  if (plVar7 != (long *)0x0) {
    while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
      lVar5 = plVar7[1];
      iVar1 = *(int *)(lVar5 + 0x8c) + 1;
      *(int *)(lVar5 + 0x8c) = iVar1;
      if (((*(int *)(lVar5 + 0x7c) != 3) && (*(int *)(lVar5 + 0x84) <= iVar1)) &&
         (*(long *)(lVar5 + 0x60) != 0)) {
        *(undefined4 *)(lVar5 + 0x80) = *(undefined4 *)(*(long *)(lVar5 + 0x60) + 0xc);
        *(undefined8 *)(lVar5 + 0x60) = 0;
      }
    }
  }
  return;
}


