/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085c61c; name: FUN_0085c61c
 */


void FUN_0085c61c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  puVar6 = PTR_PTR_047d1a50;
  puVar5 = PTR_DAT_047d1a08;
  plVar9 = (long *)(param_1 + 0x20);
  plVar8 = (long *)*plVar9;
  if (plVar8 != (long *)0x0) {
    do {
      lVar7 = *plVar8;
      plVar3 = (long *)plVar8[1];
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar3;
      }
      plVar1 = plVar9;
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3;
      }
      *plVar1 = lVar7;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      lVar7 = plVar8[8];
      iVar4 = *(int *)(lVar7 + 0xa18) + -1;
      *(int *)(lVar7 + 0xa18) = iVar4;
      if (iVar4 == 0) {
        puVar2 = (undefined8 *)(param_1 + 0x18);
        if (*(long *)(lVar7 + 0xa08) != 0) {
          puVar2 = (undefined8 *)(*(long *)(lVar7 + 0xa08) + 0xa10);
        }
        *puVar2 = *(undefined8 *)(lVar7 + 0xa10);
        if (*(long *)(lVar7 + 0xa10) != 0) {
          *(undefined8 *)(*(long *)(lVar7 + 0xa10) + 0xa08) = *(undefined8 *)(lVar7 + 0xa08);
        }
        (**(code **)(puVar5 + 8))(puVar6[8],lVar7,0);
      }
      plVar8 = (long *)*plVar9;
    } while (plVar8 != (long *)0x0);
  }
  plVar9 = (long *)(param_1 + 0x38);
  plVar8 = (long *)*plVar9;
  if (plVar8 != (long *)0x0) {
    do {
      lVar7 = *plVar8;
      plVar3 = (long *)plVar8[1];
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar3;
      }
      plVar1 = plVar9;
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3;
      }
      *plVar1 = lVar7;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      lVar7 = plVar8[0xe];
      iVar4 = *(int *)(lVar7 + 0x1018) + -1;
      *(int *)(lVar7 + 0x1018) = iVar4;
      if (iVar4 == 0) {
        puVar2 = (undefined8 *)(param_1 + 0x30);
        if (*(long *)(lVar7 + 0x1008) != 0) {
          puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x1008) + 0x1010);
        }
        *puVar2 = *(undefined8 *)(lVar7 + 0x1010);
        if (*(long *)(lVar7 + 0x1010) != 0) {
          *(undefined8 *)(*(long *)(lVar7 + 0x1010) + 0x1008) = *(undefined8 *)(lVar7 + 0x1008);
        }
        (**(code **)(puVar5 + 8))(puVar6[8],lVar7,0);
      }
      plVar8 = (long *)*plVar9;
    } while (plVar8 != (long *)0x0);
  }
  return;
}


