/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00861a24; name: FUN_00861a24
 */


void FUN_00861a24(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  
  puVar1 = (undefined8 *)(param_1 + 0x50);
  plVar2 = (long *)(param_1 + 0x58);
  iVar6 = *(int *)(param_2[2] + 0x30) + -1;
  *(int *)(param_2[2] + 0x30) = iVar6;
  if (iVar6 == 0) {
    plVar8 = (long *)param_2[2];
    lVar7 = *plVar8;
    plVar5 = (long *)plVar8[1];
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar5;
    }
    plVar3 = plVar2;
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5;
    }
    *plVar3 = lVar7;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    lVar7 = plVar8[8];
    iVar6 = *(int *)(lVar7 + 0xa18) + -1;
    *(int *)(lVar7 + 0xa18) = iVar6;
    if (iVar6 == 0) {
      puVar4 = puVar1;
      if (*(long *)(lVar7 + 0xa08) != 0) {
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0xa08) + 0xa10);
      }
      *puVar4 = *(undefined8 *)(lVar7 + 0xa10);
      if (*(long *)(lVar7 + 0xa10) != 0) {
        *(undefined8 *)(*(long *)(lVar7 + 0xa10) + 0xa08) = *(undefined8 *)(lVar7 + 0xa08);
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    }
  }
  iVar6 = *(int *)(param_2[3] + 0x30) + -1;
  *(int *)(param_2[3] + 0x30) = iVar6;
  if (iVar6 == 0) {
    plVar8 = (long *)param_2[3];
    lVar7 = *plVar8;
    plVar5 = (long *)plVar8[1];
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar5;
    }
    plVar3 = plVar2;
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5;
    }
    *plVar3 = lVar7;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    lVar7 = plVar8[8];
    iVar6 = *(int *)(lVar7 + 0xa18) + -1;
    *(int *)(lVar7 + 0xa18) = iVar6;
    if (iVar6 == 0) {
      puVar4 = puVar1;
      if (*(long *)(lVar7 + 0xa08) != 0) {
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0xa08) + 0xa10);
      }
      *puVar4 = *(undefined8 *)(lVar7 + 0xa10);
      if (*(long *)(lVar7 + 0xa10) != 0) {
        *(undefined8 *)(*(long *)(lVar7 + 0xa10) + 0xa08) = *(undefined8 *)(lVar7 + 0xa08);
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    }
  }
  iVar6 = *(int *)(param_2[4] + 0x30) + -1;
  *(int *)(param_2[4] + 0x30) = iVar6;
  if (iVar6 == 0) {
    plVar8 = (long *)param_2[4];
    lVar7 = *plVar8;
    plVar5 = (long *)plVar8[1];
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar5;
    }
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5;
    }
    *plVar2 = lVar7;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    lVar7 = plVar8[8];
    iVar6 = *(int *)(lVar7 + 0xa18) + -1;
    *(int *)(lVar7 + 0xa18) = iVar6;
    if (iVar6 == 0) {
      if (*(long *)(lVar7 + 0xa08) != 0) {
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 0xa08) + 0xa10);
      }
      *puVar1 = *(undefined8 *)(lVar7 + 0xa10);
      if (*(long *)(lVar7 + 0xa10) != 0) {
        *(undefined8 *)(*(long *)(lVar7 + 0xa10) + 0xa08) = *(undefined8 *)(lVar7 + 0xa08);
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
      lVar7 = *param_2;
      plVar2 = (long *)param_2[1];
      goto joined_r0x00861bc8;
    }
  }
  lVar7 = *param_2;
  plVar2 = (long *)param_2[1];
joined_r0x00861bc8:
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar2;
  }
  plVar5 = (long *)(param_1 + 0x70);
  if (plVar2 != (long *)0x0) {
    plVar5 = plVar2;
  }
  *plVar5 = lVar7;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
  lVar7 = param_2[0xe];
  iVar6 = *(int *)(lVar7 + 0x1018) + -1;
  *(int *)(lVar7 + 0x1018) = iVar6;
  if (iVar6 != 0) {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x68);
  if (*(long *)(lVar7 + 0x1008) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x1008) + 0x1010);
  }
  *puVar1 = *(undefined8 *)(lVar7 + 0x1010);
  if (*(long *)(lVar7 + 0x1010) != 0) {
    *(undefined8 *)(*(long *)(lVar7 + 0x1010) + 0x1008) = *(undefined8 *)(lVar7 + 0x1008);
  }
                    /* WARNING: Could not recover jumptable at 0x00861c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
  return;
}


