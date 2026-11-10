/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0345ee68; name: FUN_0345ee68
 */


void FUN_0345ee68(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  
  *param_1 = (long)&PTR_FUN_047c1030;
  lVar6 = param_1[8];
  if ((lVar6 != 0) && (lVar13 = param_1[0x1b], lVar13 != 0)) {
    uVar3 = *(uint *)(lVar6 + 0x30);
    if (uVar3 != 0) {
      plVar11 = *(long **)(lVar6 + 0x28);
      plVar16 = plVar11 + uVar3;
      if (*plVar11 != lVar13) {
        lVar14 = (ulong)uVar3 * 8;
        do {
          lVar14 = lVar14 + -8;
          if (lVar14 == 0) {
            plVar11 = plVar16;
            break;
          }
          plVar2 = plVar11 + 1;
          plVar1 = plVar11 + 1;
          plVar11 = plVar2;
        } while (*plVar1 != lVar13);
      }
      if (plVar16 != plVar11) {
        if (uVar3 < 2) {
          iVar8 = 0;
        }
        else {
          *plVar11 = plVar16[-1];
          iVar8 = *(int *)(lVar6 + 0x30) + -1;
        }
        *(int *)(lVar6 + 0x30) = iVar8;
      }
    }
  }
  lVar6 = param_1[9];
  param_1[8] = 0;
  if ((lVar6 != 0) && (lVar13 = param_1[0x1b], lVar13 != 0)) {
    uVar3 = *(uint *)(lVar6 + 0x30);
    if (uVar3 != 0) {
      plVar11 = *(long **)(lVar6 + 0x28);
      plVar16 = plVar11 + uVar3;
      if (*plVar11 != lVar13) {
        lVar14 = (ulong)uVar3 * 8;
        do {
          lVar14 = lVar14 + -8;
          if (lVar14 == 0) {
            plVar11 = plVar16;
            break;
          }
          plVar2 = plVar11 + 1;
          plVar1 = plVar11 + 1;
          plVar11 = plVar2;
        } while (*plVar1 != lVar13);
      }
      if (plVar16 != plVar11) {
        if (uVar3 < 2) {
          iVar8 = 0;
        }
        else {
          *plVar11 = plVar16[-1];
          iVar8 = *(int *)(lVar6 + 0x30) + -1;
        }
        *(int *)(lVar6 + 0x30) = iVar8;
      }
    }
  }
  param_1[9] = 0;
  if (param_1[10] != 0) {
    FUN_034b2c38(*(undefined8 *)PTR_DAT_047e7040);
  }
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x30))();
    param_1[0x1e] = 0;
  }
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 0x18))();
  }
  lVar6 = param_1[0x22];
  if (lVar6 == 0) goto LAB_0345f0c8;
  puVar7 = *(undefined8 **)(lVar6 + 0x70);
  if (puVar7 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)*puVar7;
    if ((long *)puVar7[2] == param_1) {
      puVar10 = (undefined8 *)0x0;
      puVar9 = puVar7;
LAB_0345f040:
      *(undefined8 **)(lVar6 + 0x70) = puVar12;
    }
    else {
      puVar5 = puVar7;
      do {
        puVar9 = puVar12;
        puVar10 = puVar5;
        if (puVar9 == (undefined8 *)0x0) goto LAB_0345f06c;
        puVar12 = (undefined8 *)*puVar9;
        puVar5 = puVar9;
      } while ((long *)puVar9[2] != param_1);
      if (puVar9 == puVar7) goto LAB_0345f040;
      *puVar10 = puVar12;
      puVar7 = puVar9;
    }
    if (*(undefined8 **)(lVar6 + 0x78) == puVar7) {
      *(undefined8 **)(lVar6 + 0x78) = puVar10;
    }
    *puVar9 = *(undefined8 *)(lVar6 + 0x80);
    *(undefined8 **)(lVar6 + 0x80) = puVar7;
    *(int *)(lVar6 + 0x94) = *(int *)(lVar6 + 0x94) + -1;
  }
LAB_0345f06c:
  if (((*(undefined8 **)(lVar6 + 0x18) != (undefined8 *)0x0) && (*(int *)(lVar6 + 0x6c) == 0)) &&
     (*(int *)(lVar6 + 0x94) == 0)) {
    (**(code **)**(undefined8 **)(lVar6 + 0x18))();
  }
  piVar15 = (int *)param_1[0x22];
  iVar8 = *piVar15;
  *piVar15 = iVar8 + -1;
  if (iVar8 + -1 == 0) {
    FUN_0344ca4c(piVar15);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar15);
  }
  param_1[0x22] = 0;
LAB_0345f0c8:
  puVar4 = PTR_DAT_047e2fd0;
  plVar11 = (long *)param_1[0x23];
  plVar16 = plVar11;
  if ((int)param_1[0x24] != 0) {
    do {
      *(int *)(*plVar16 + 0x84) = *(int *)(*plVar16 + 0x84) + -1;
      puVar7 = (undefined8 *)*plVar16;
      iVar8 = *(int *)((long)puVar7 + 0x74) + -1;
      *(int *)((long)puVar7 + 0x74) = iVar8;
      if (iVar8 == 0) {
        (**(code **)*puVar7)(puVar7);
        (**(code **)(puVar4 + 0x30))(0,puVar7);
      }
      plVar11 = (long *)param_1[0x23];
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar11 + *(uint *)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (plVar11 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar11);
    param_1[0x23] = 0;
    *(undefined4 *)((long)param_1 + 0x124) = 0;
  }
  lVar6 = param_1[0xc];
  if (lVar6 != 0) {
    iVar8 = *(int *)(lVar6 + 0x10) + -1;
    *(int *)(lVar6 + 0x10) = iVar8;
    if (iVar8 == 0) {
      FUN_034783fc(lVar6);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar6);
    }
    param_1[0xc] = 0;
  }
  *param_1 = (long)(PTR_DAT_047e70b0 + 0x10);
  if (param_1[5] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(1);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(1);
  }
  puVar4 = PTR_DAT_047e70a0;
  param_1[4] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


