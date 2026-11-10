/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c7240; name: FUN_034c7240
 */


void FUN_034c7240(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar2 = *(uint *)(param_2 + 0x38);
  if (uVar2 == 0) {
    return;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)param_3 / uVar2;
  }
  plVar11 = *(long **)(*(long *)(param_2 + 0x30) + (ulong)((uint)param_3 - uVar3 * uVar2) * 8);
  if (plVar11 == (long *)0x0) {
    return;
  }
  while (plVar11[1] != param_3) {
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return;
    }
  }
  lVar12 = plVar11[2];
  plVar10 = *(long **)(lVar12 + 0x30);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
    if (plVar10 == (long *)0x0) {
      return;
    }
    *plVar10 = (long)(PTR_DAT_047e6e40 + 0x10);
    plVar10[1] = 0;
    puVar5 = PTR_DAT_047e6958;
    lVar9 = *(long *)(PTR_DAT_047e6958 + 8);
    plVar10[2] = 0;
    plVar10[3] = lVar9;
    plVar1 = (long *)(puVar5 + 0x10);
    if (*(long *)(puVar5 + 0x10) != 0) {
      plVar1 = (long *)(lVar9 + 0x10);
    }
    *plVar1 = (long)plVar10;
    *(long **)(puVar5 + 8) = plVar10;
    *(int *)puVar5 = *(int *)puVar5 + 1;
    puVar5 = PTR_DAT_047e6e48;
    *(undefined2 *)(plVar10 + 0x1c) = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[0xc] = 0;
    plVar10[0xd] = 0;
    *plVar10 = (long)(puVar5 + 0x10);
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    *(long **)(lVar12 + 0x30) = plVar10;
    plVar10[1] = lVar12;
    iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(lVar12 + 0x78));
    if (iVar6 != 1) {
      (**(code **)*plVar10)(plVar10);
      (**(code **)(puVar4 + 0x30))(4,plVar10);
      *(undefined8 *)(lVar12 + 0x30) = 0;
      return;
    }
  }
  if (param_4 == -1) {
    uVar8 = FUN_03477304(plVar10);
    if ((int)plVar10[9] != 0) {
      lVar12 = plVar10[8];
      do {
        *(int *)(lVar12 + 0x10) = (int)param_1;
        lVar12 = lVar12 + 0x18;
      } while (lVar12 != plVar10[8] + (ulong)*(uint *)(plVar10 + 9) * 0x18);
    }
LAB_034c73ec:
    if ((uVar8 & 1) == 0) goto LAB_034c73f8;
  }
  else {
    FUN_034c70dc(param_2,param_4);
    uVar7 = FUN_03477304(plVar10);
    uVar8 = FUN_03476aac(param_1,plVar10 + 4,param_4,0);
    if ((uVar7 & 1) == 0) goto LAB_034c73ec;
  }
  FUN_03477638(plVar10);
LAB_034c73f8:
  lVar12 = *(long *)(plVar11[2] + 0x28);
  if (lVar12 == 0) {
    return;
  }
  *(byte *)(lVar12 + 0x54) = *(byte *)(lVar12 + 0x54) | 1;
  FUN_034c696c(lVar12 + 0x20,plVar10 + 0x18);
  return;
}


