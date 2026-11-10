/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a3454; name: FUN_034a3454
 */


undefined8 FUN_034a3454(undefined8 *param_1,int *param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined4 uVar10;
  
  if (*param_2 != 0) {
    *(undefined4 *)(param_1 + 0x4d) = 0;
    FUN_034a3728(param_1,1,0x1000000,*(undefined8 *)param_2,param_2[2]);
  }
  puVar3 = PTR_DAT_047e71d0;
  if (((param_3 & 1) == 0) && ((*(byte *)((long)param_1 + 0x2ba) & 7) != 1)) {
    puVar5 = *(undefined8 **)(PTR_DAT_047e71d0 + 0x10);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x18);
      if (puVar5 == (undefined8 *)0x0) {
        return 2;
      }
      *puVar5 = *(undefined8 *)(puVar3 + 0x10);
      *(undefined8 **)(puVar3 + 0x10) = puVar5;
    }
    if (*(undefined8 **)(puVar3 + 8) == (undefined8 *)0x0) {
      *(undefined8 **)puVar3 = puVar5;
    }
    else {
      **(undefined8 **)(puVar3 + 8) = puVar5;
      puVar5 = *(undefined8 **)(puVar3 + 0x10);
    }
    *(undefined8 **)(puVar3 + 8) = puVar5;
    *(undefined8 *)(puVar3 + 0x10) = *puVar5;
    puVar4 = PTR_DAT_047e6fe0;
    *puVar5 = 0;
    *(int *)(puVar3 + 0x24) = *(int *)(puVar3 + 0x24) + 1;
    lVar7 = *(long *)(puVar3 + 8);
    *(undefined8 **)(lVar7 + 8) = param_1;
    *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)puVar4;
    puVar3 = PTR_DAT_047e7030;
    *(ushort *)(lVar7 + 0x14) = *(ushort *)(lVar7 + 0x14) & 0xfe00;
    *puVar3 = 1;
    goto LAB_034a36cc;
  }
  *(uint *)((long)param_1 + 699) = *(uint *)((long)param_1 + 699) | 0x4000;
  iVar1 = *(int *)((long)param_1 + 0x2d4);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  *(int *)((long)param_1 + 0x2d4) = iVar1;
  puVar3 = PTR_DAT_047e71d0;
  puVar5 = *(undefined8 **)(PTR_DAT_047e71d0 + 0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)(puVar3 + 0x10);
      *(undefined8 **)(puVar3 + 0x10) = puVar5;
      goto LAB_034a3500;
    }
    bVar2 = false;
    uVar6 = 2;
  }
  else {
LAB_034a3500:
    if (*(undefined8 **)(puVar3 + 8) == (undefined8 *)0x0) {
      *(undefined8 **)puVar3 = puVar5;
    }
    else {
      **(undefined8 **)(puVar3 + 8) = puVar5;
      puVar5 = *(undefined8 **)(puVar3 + 0x10);
    }
    *(undefined8 **)(puVar3 + 8) = puVar5;
    *(undefined8 *)(puVar3 + 0x10) = *puVar5;
    *puVar5 = 0;
    lVar7 = *(long *)(puVar3 + 8);
    *(int *)(puVar3 + 0x24) = *(int *)(puVar3 + 0x24) + 1;
    puVar3 = PTR_DAT_047e6fe0;
    *(undefined8 **)(lVar7 + 8) = param_1;
    *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)puVar3;
    puVar3 = PTR_DAT_047e7030;
    *(ushort *)(lVar7 + 0x14) = *(ushort *)(lVar7 + 0x14) & 0xfe00 | 1;
    bVar2 = true;
    uVar6 = 1;
    *puVar3 = 1;
  }
  lVar7 = param_1[0x46];
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x3c) == 3) {
      uVar10 = 2;
    }
    else {
      if (*(int *)(lVar7 + 0x3c) != 0) goto LAB_034a35e4;
      uVar10 = 1;
    }
    *(undefined4 *)(lVar7 + 0x3c) = uVar10;
  }
LAB_034a35e4:
  piVar8 = (int *)param_1[0x21];
  if ((piVar8 != (int *)0x0) && (*piVar8 == 1)) {
    piVar8[0x16] = *(int *)(*(long *)PTR_DAT_047e2fe8 + 0x78);
    *piVar8 = 2;
  }
  plVar9 = (long *)param_1[0xd];
  if (plVar9 != (long *)0x0) {
    while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
      lVar7 = plVar9[1];
      iVar1 = *(int *)(lVar7 + 0x8c) + 1;
      *(int *)(lVar7 + 0x8c) = iVar1;
      if (((*(int *)(lVar7 + 0x7c) != 3) && (*(int *)(lVar7 + 0x84) <= iVar1)) &&
         (*(long *)(lVar7 + 0x60) != 0)) {
        *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(*(long *)(lVar7 + 0x60) + 0xc);
        *(undefined8 *)(lVar7 + 0x60) = 0;
      }
    }
  }
  if (!bVar2) {
    return uVar6;
  }
LAB_034a36cc:
  if ((*(byte *)((long)param_1 + 0x2ba) & 7) == 2) {
    (**(code **)*param_1)(param_1,0,0);
  }
  if ((param_4 & 1) != 0) {
    *(int *)PTR_DAT_047e6fe0 = *(int *)PTR_DAT_047e6fe0 + 1;
  }
  return 1;
}


