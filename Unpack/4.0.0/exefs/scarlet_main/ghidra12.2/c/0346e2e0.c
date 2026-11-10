/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346e2e0; name: FUN_0346e2e0
 */


int FUN_0346e2e0(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar12;
  undefined8 *puVar11;
  
  if ((1 < (ushort)((*(ushort *)(param_1 + 0x13c) & 7) - 1)) ||
     (piVar6 = *(int **)(param_1 + 0x168), piVar6 == (int *)0x0)) {
    return 1;
  }
  iVar10 = *piVar6;
  if (((param_2 != (long *)0x0) && (*param_2 != 0)) && ((int)param_2[1] == iVar10)) {
    *(long *)(param_1 + 0xf0) = *param_2;
    *(int *)(param_1 + 0xf8) = (int)param_2[1];
  }
  puVar3 = PTR_DAT_047e7040;
  if (((*(long *)(piVar6 + 10) != 0) && ((piVar6[0xc] & 0x7fffffffU) != 0)) &&
     ((*(long *)(param_1 + 0xf0) == 0 || ((*(byte *)(piVar6 + 4) >> 2 & 1) != 0)))) {
    lVar5 = FUN_034b2514(*(undefined8 *)PTR_DAT_047e7040);
    *(long *)(param_1 + 0xf0) = lVar5;
    if (lVar5 != 0) {
      lVar8 = *(long *)(param_1 + 0x168);
      lVar7 = *(long *)(param_1 + 0x170);
      do {
        if (*(long *)(lVar7 + 0x88) != 0) {
          lVar7 = *(long *)(lVar7 + 0x88) + 0x38;
          goto LAB_0346e4a4;
        }
        lVar7 = *(long *)(lVar7 + 0x98);
      } while (lVar7 != 0);
      lVar7 = 0;
LAB_0346e4a4:
      iVar4 = FUN_034b1ea8(lVar5,*(undefined8 *)(lVar8 + 0x28),*(uint *)(lVar8 + 0x30) & 0x7fffffff,
                           *(undefined4 *)(lVar8 + 0x10),*(uint *)(lVar8 + 0x30) >> 0x1f,lVar7);
      if (iVar4 != 1) {
        FUN_034b2628(*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0xf0));
        iVar10 = 0;
        *(undefined8 *)(param_1 + 0xf0) = 0;
      }
      *(int *)(param_1 + 0xf8) = iVar10;
      goto LAB_0346e3b0;
    }
  }
  iVar4 = 1;
LAB_0346e3b0:
  puVar3 = PTR_DAT_047e6cb8;
  if (((*(byte *)(param_1 + 0x13d) & 1) != 0) && (lVar5 = *(long *)(param_1 + 0xf0), lVar5 != 0)) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x10) + 0x30);
    if ((plVar9 == (long *)0x0) && (plVar9 = *(long **)PTR_DAT_047e6cb8, plVar9 == (long *)0x0)) {
      plVar9 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
      *plVar9 = (long)(PTR_DAT_047e6e40 + 0x10);
      plVar9[1] = 0;
      puVar1 = PTR_DAT_047e6958;
      lVar8 = *(long *)(PTR_DAT_047e6958 + 8);
      plVar9[2] = 0;
      plVar9[3] = lVar8;
      plVar2 = (long *)(puVar1 + 0x10);
      if (*(long *)(puVar1 + 0x10) != 0) {
        plVar2 = (long *)(lVar8 + 0x10);
      }
      *plVar2 = (long)plVar9;
      *(long **)(puVar1 + 8) = plVar9;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      puVar1 = PTR_DAT_047e6e48 + 0x10;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar9[0xc] = 0;
      plVar9[0xd] = 0;
      *plVar9 = (long)puVar1;
      plVar9[0x12] = 0;
      plVar9[0x13] = 0;
      plVar9[0x16] = 0;
      plVar9[0x17] = 0;
      plVar9[0x1a] = 0;
      plVar9[0x1b] = 0;
      *(long **)puVar3 = plVar9;
      *(undefined2 *)(plVar9 + 0x1c) = 0x101;
    }
    if ((int)plVar9[0x1b] != 0) {
      puVar11 = (undefined8 *)plVar9[0x1a];
      do {
        puVar12 = puVar11 + 1;
        FUN_034b219c(lVar5,*puVar11);
        puVar11 = puVar12;
      } while (puVar12 != (undefined8 *)(plVar9[0x1a] + (ulong)*(uint *)(plVar9 + 0x1b) * 8));
    }
  }
  return iVar4;
}


