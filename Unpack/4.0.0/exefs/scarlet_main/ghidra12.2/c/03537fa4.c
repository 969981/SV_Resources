/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03537fa4; name: FUN_03537fa4
 */


void FUN_03537fa4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  puVar3 = PTR_DAT_047e2fd0;
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    plVar9 = (long *)0x0;
    do {
      iVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((iVar4 == 1) && (plVar6[3] == param_2)) {
        plVar10 = (long *)plVar6[1];
        plVar1 = (long *)(param_1 + 0x70);
        if (*(long **)(param_1 + 0x70) != plVar6) {
          plVar1 = plVar9 + 1;
        }
        *plVar1 = (long)plVar10;
        if (*(long **)(param_1 + 0x68) == plVar6) {
          *(long **)(param_1 + 0x68) = plVar9;
        }
        (**(code **)*plVar6)(plVar6);
        (**(code **)(puVar3 + 0x30))(0,plVar6);
        plVar6 = plVar10;
      }
      else {
        plVar9 = plVar6;
        plVar6 = (long *)plVar6[1];
      }
    } while (plVar6 != (long *)0x0);
  }
  plVar6 = (long *)(param_1 + 0x78);
  if (*plVar6 != 0) {
    lVar7 = 0;
    lVar5 = *plVar6;
    do {
      lVar8 = *(long *)(lVar5 + 0x18);
      lVar2 = 0;
      if (*(long *)(lVar5 + 8) != 0) {
        lVar2 = *(long *)(lVar5 + 8) + 800;
      }
      if (lVar2 == param_2) {
        plVar9 = plVar6;
        if (*plVar6 != lVar5) {
          plVar9 = (long *)(lVar7 + 0x18);
        }
        *plVar9 = lVar8;
        (**(code **)(puVar3 + 0x30))(0);
      }
      else {
        lVar7 = lVar5;
      }
      lVar5 = lVar8;
    } while (lVar8 != 0);
  }
  return;
}


