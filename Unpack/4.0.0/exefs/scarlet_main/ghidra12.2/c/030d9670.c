/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d9670; name: FUN_030d9670
 */


void FUN_030d9670(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar10;
  undefined8 *puVar9;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_047d1a08;
  if (*(int *)(param_2 + 0x28) != 0) {
    plVar6 = *(long **)(param_2 + 0x20);
    lVar8 = (long)*(int *)(param_2 + 0x28) << 3;
    do {
      if ((*plVar6 != 0) && (*(int *)(*plVar6 + 0x100) != 0)) {
        local_48 = 0x28;
        plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
        if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
          (**(code **)(puVar4 + 0x10))(plVar6,"hkaiNavMeshModifiedAabbs");
        }
        plVar6[2] = 1;
        *plVar6 = (long)(PTR_DAT_047e51c0 + 0x10);
        plVar6[1] = 0xffffffff;
        plVar6[3] = 0;
        plVar6[4] = -0x8000000000000000;
        iVar5 = *(int *)(param_2 + 0x28);
        if (0 < iVar5) {
          FUN_030db8fc();
          iVar5 = *(int *)(param_2 + 0x28);
        }
        puVar4 = PTR_PTR_047d1a50;
        if (iVar5 != 0) {
          plVar12 = *(long **)(param_2 + 0x20);
          plVar1 = plVar12 + iVar5;
          do {
            lVar8 = (long)(int)plVar6[4] + 1;
            lVar11 = plVar6[3];
            lVar13 = *plVar12;
            puVar2 = (undefined8 *)(lVar11 + (long)(int)plVar6[4] * 0x10);
            *(int *)(plVar6 + 4) = (int)lVar8;
            puVar9 = puVar2;
            do {
              puVar10 = puVar9 + 2;
              *puVar9 = 0;
              puVar9[1] = 0x8000000000000000;
              puVar9 = puVar10;
            } while (puVar10 != (undefined8 *)(lVar11 + lVar8 * 0x10));
            if ((lVar13 != 0) && ((undefined8 *)(lVar13 + 0xf8) != puVar2)) {
              FUN_030da42c(puVar2,puVar4);
              FUN_030da42c((undefined8 *)(lVar13 + 0xf8),puVar4);
              uVar7 = *puVar2;
              *puVar2 = *(undefined8 *)(lVar13 + 0xf8);
              *(undefined8 *)(lVar13 + 0xf8) = uVar7;
              uVar3 = *(undefined4 *)(puVar2 + 1);
              *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar13 + 0x100);
              *(undefined4 *)(lVar13 + 0x100) = uVar3;
              uVar3 = *(undefined4 *)((long)puVar2 + 0xc);
              *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)(lVar13 + 0x104);
              *(undefined4 *)(lVar13 + 0x104) = uVar3;
            }
            plVar12 = plVar12 + 1;
          } while (plVar12 != plVar1);
        }
        *param_1 = plVar6;
        return;
      }
      plVar6 = plVar6 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  *param_1 = 0;
  return;
}


