/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085e90c; name: FUN_0085e90c
 */


void FUN_0085e90c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = param_1 + 6;
  *param_1 = (long)(PTR_DAT_047d1ba0 + 0x10);
  puVar5 = PTR_PTR_047d1a50;
  puVar4 = PTR_DAT_047d1a08;
  plVar9 = param_1 + 7;
  plVar7 = (long *)*plVar9;
  while (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    plVar2 = (long *)plVar7[1];
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar2;
    }
    plVar1 = plVar9;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2;
    }
    *plVar1 = lVar6;
    *(int *)(param_1 + 8) = (int)param_1[8] + -1;
    lVar6 = plVar7[0xe];
    iVar3 = *(int *)(lVar6 + 0x1018) + -1;
    *(int *)(lVar6 + 0x1018) = iVar3;
    if (iVar3 == 0) {
      plVar7 = plVar8;
      if (*(long *)(lVar6 + 0x1008) != 0) {
        plVar7 = (long *)(*(long *)(lVar6 + 0x1008) + 0x1010);
      }
      *plVar7 = *(long *)(lVar6 + 0x1010);
      if (*(long *)(lVar6 + 0x1010) != 0) {
        *(undefined8 *)(*(long *)(lVar6 + 0x1010) + 0x1008) = *(undefined8 *)(lVar6 + 0x1008);
      }
      (**(code **)(puVar4 + 8))(puVar5[8],lVar6,0);
    }
    plVar7 = (long *)*plVar9;
  }
  lVar6 = *plVar8;
  while (lVar6 != 0) {
    plVar7 = plVar8;
    if (*(long *)(lVar6 + 0x1008) != 0) {
      plVar7 = (long *)(*(long *)(lVar6 + 0x1008) + 0x1010);
    }
    *plVar7 = *(long *)(lVar6 + 0x1010);
    if (*(long *)(lVar6 + 0x1010) != 0) {
      *(undefined8 *)(*(long *)(lVar6 + 0x1010) + 0x1008) = *(undefined8 *)(lVar6 + 0x1008);
    }
    (**(code **)(puVar4 + 8))(puVar5[8],lVar6,0);
    lVar6 = *plVar8;
  }
  plVar9 = param_1 + 4;
  plVar8 = param_1 + 3;
  plVar7 = (long *)*plVar9;
  while (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    plVar2 = (long *)plVar7[1];
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar2;
    }
    plVar1 = plVar9;
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2;
    }
    *plVar1 = lVar6;
    *(int *)(param_1 + 5) = (int)param_1[5] + -1;
    lVar6 = plVar7[8];
    iVar3 = *(int *)(lVar6 + 0xa18) + -1;
    *(int *)(lVar6 + 0xa18) = iVar3;
    if (iVar3 == 0) {
      plVar7 = plVar8;
      if (*(long *)(lVar6 + 0xa08) != 0) {
        plVar7 = (long *)(*(long *)(lVar6 + 0xa08) + 0xa10);
      }
      *plVar7 = *(long *)(lVar6 + 0xa10);
      if (*(long *)(lVar6 + 0xa10) != 0) {
        *(undefined8 *)(*(long *)(lVar6 + 0xa10) + 0xa08) = *(undefined8 *)(lVar6 + 0xa08);
      }
      (**(code **)(puVar4 + 8))(puVar5[8],lVar6,0);
    }
    plVar7 = (long *)*plVar9;
  }
  while (lVar6 = *plVar8, lVar6 != 0) {
    plVar7 = plVar8;
    if (*(long *)(lVar6 + 0xa08) != 0) {
      plVar7 = (long *)(*(long *)(lVar6 + 0xa08) + 0xa10);
    }
    *plVar7 = *(long *)(lVar6 + 0xa10);
    if (*(long *)(lVar6 + 0xa10) != 0) {
      *(undefined8 *)(*(long *)(lVar6 + 0xa10) + 0xa08) = *(undefined8 *)(lVar6 + 0xa08);
    }
    (**(code **)(puVar4 + 8))(puVar5[8],lVar6,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


