/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a2980; name: FUN_034a2980
 */


void FUN_034a2980(long param_1)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  int *piVar19;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  
  puVar2 = (uint *)(param_1 + 699);
  uVar6 = *puVar2;
  if ((uVar6 >> 0x1a & 1) != 0) {
    FUN_034a4b68(param_1,0);
    uVar6 = *puVar2;
  }
  if ((uVar6 >> 0x14 & 1) == 0) {
    *puVar2 = uVar6 | 0x100000;
    if (*(int *)(param_1 + 0x310) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x308);
      do {
        puVar17 = puVar10 + 1;
        FUN_034aa044(*puVar10,param_1);
        puVar10 = puVar17;
      } while (puVar17 !=
               (undefined8 *)(*(long *)(param_1 + 0x308) + (ulong)*(uint *)(param_1 + 0x310) * 8));
    }
    *(undefined4 *)(param_1 + 0x310) = 0;
    uStack_40 = 0x100000000;
    local_38 = 0x100;
    local_58 = 0;
    uStack_50 = 0;
    local_60 = *(undefined8 *)(param_1 + 0x28);
    local_48 = param_1;
    (**(code **)(**(long **)(param_1 + 0x188) + 0x120))(*(long **)(param_1 + 0x188),&local_60);
  }
  lVar7 = *(long *)(param_1 + 0x230);
  if (lVar7 != 0) {
    uVar6 = *(uint *)(lVar7 + 0x30);
    if (uVar6 != 0) {
      plVar16 = *(long **)(lVar7 + 0x28);
      plVar9 = plVar16 + uVar6;
      if (*plVar16 != param_1 + 0x10) {
        lVar18 = (ulong)uVar6 * 8;
        do {
          lVar18 = lVar18 + -8;
          if (lVar18 == 0) {
            plVar16 = plVar9;
            break;
          }
          plVar3 = plVar16 + 1;
          plVar1 = plVar16 + 1;
          plVar16 = plVar3;
        } while (*plVar1 != param_1 + 0x10);
      }
      if (plVar9 != plVar16) {
        if (uVar6 < 2) {
          iVar11 = 0;
        }
        else {
          *plVar16 = plVar9[-1];
          iVar11 = *(int *)(lVar7 + 0x30) + -1;
        }
        *(int *)(lVar7 + 0x30) = iVar11;
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x238);
  if (lVar7 != 0) {
    uVar6 = *(uint *)(lVar7 + 0x30);
    if (uVar6 != 0) {
      plVar16 = *(long **)(lVar7 + 0x28);
      plVar9 = plVar16 + uVar6;
      if (*plVar16 != param_1 + 0x10) {
        lVar18 = (ulong)uVar6 * 8;
        do {
          lVar18 = lVar18 + -8;
          if (lVar18 == 0) {
            plVar16 = plVar9;
            break;
          }
          plVar3 = plVar16 + 1;
          plVar1 = plVar16 + 1;
          plVar16 = plVar3;
        } while (*plVar1 != param_1 + 0x10);
      }
      if (plVar9 != plVar16) {
        if (uVar6 < 2) {
          iVar11 = 0;
        }
        else {
          *plVar16 = plVar9[-1];
          iVar11 = *(int *)(lVar7 + 0x30) + -1;
        }
        *(int *)(lVar7 + 0x30) = iVar11;
      }
    }
  }
  if ((*puVar2 >> 8 & 1) != 0) {
    *puVar2 = *puVar2 & 0xfffffeff;
  }
  if (*(int *)(param_1 + 0x228) != 0) {
    FUN_034b41c0(*(undefined8 *)PTR_DAT_047e6f38,*(int *)(param_1 + 0x228),param_1);
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
  }
  lVar18 = *(long *)(param_1 + 0x188);
  lVar7 = param_1 + 0x18;
  lVar8 = *(long *)(lVar18 + 0x90);
  if (lVar8 != 0) {
    plVar9 = (long *)(lVar8 + 0x10);
    lVar12 = *plVar9;
    lVar14 = 0;
    lVar8 = lVar12;
    if ((lVar12 != 0) && (lVar12 != lVar7)) {
      do {
        lVar14 = lVar8;
        lVar8 = *(long *)(lVar14 + 0x48);
      } while (lVar8 != 0 && lVar8 != lVar7);
    }
    if (lVar8 != 0) {
      if (lVar8 != lVar12) {
        plVar9 = (long *)(lVar14 + 0x48);
      }
      *plVar9 = *(long *)(lVar8 + 0x48);
    }
    lVar18 = *(long *)(lVar18 + 0x90);
    if (((((*(short *)(lVar18 + 0x90) < 1) && (*(short *)(lVar18 + 0x94) < 1)) &&
         (*(short *)(lVar18 + 0x88) == 0)) &&
        ((*(short *)(lVar18 + 0x8a) == 0 && (*(long *)(lVar18 + 0x10) == 0)))) &&
       (*(int *)(lVar18 + 8) == 0)) {
      FUN_034aaf0c();
    }
  }
  if (*(long *)(param_1 + 0x2e0) != 0) {
    if (*(long *)(*(undefined4 **)(param_1 + 0x248) + 4) == 0) {
      FUN_03468ed8(*(undefined8 *)PTR_DAT_047e70e8,**(undefined4 **)(param_1 + 0x248));
    }
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
    FUN_0346034c(*(long *)(param_1 + 0x1e8),0);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  uVar5 = *(ushort *)(*(long *)(param_1 + 0x248) + 0xc);
  lVar18 = *(long *)(param_1 + 0x2f8);
  if (lVar18 == 0) goto LAB_034a2d50;
  puVar10 = *(undefined8 **)(lVar18 + 0x48);
  if (puVar10 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)*puVar10;
    if (puVar10[2] == param_1) {
      puVar15 = (undefined8 *)0x0;
      puVar13 = puVar10;
LAB_034a2cc8:
      *(undefined8 **)(lVar18 + 0x48) = puVar17;
    }
    else {
      puVar4 = puVar10;
      do {
        puVar13 = puVar17;
        puVar15 = puVar4;
        if (puVar13 == (undefined8 *)0x0) goto LAB_034a2cf4;
        puVar17 = (undefined8 *)*puVar13;
        puVar4 = puVar13;
      } while (puVar13[2] != param_1);
      if (puVar13 == puVar10) goto LAB_034a2cc8;
      *puVar15 = puVar17;
      puVar10 = puVar13;
    }
    if (*(undefined8 **)(lVar18 + 0x50) == puVar10) {
      *(undefined8 **)(lVar18 + 0x50) = puVar15;
    }
    *puVar13 = *(undefined8 *)(lVar18 + 0x58);
    *(undefined8 **)(lVar18 + 0x58) = puVar10;
    *(int *)(lVar18 + 0x6c) = *(int *)(lVar18 + 0x6c) + -1;
  }
LAB_034a2cf4:
  if (((*(undefined8 **)(lVar18 + 0x18) != (undefined8 *)0x0) && (*(int *)(lVar18 + 0x6c) == 0)) &&
     (*(int *)(lVar18 + 0x94) == 0)) {
    (**(code **)**(undefined8 **)(lVar18 + 0x18))();
  }
  piVar19 = *(int **)(param_1 + 0x2f8);
  iVar11 = *piVar19;
  *piVar19 = iVar11 + -1;
  if (iVar11 + -1 == 0) {
    FUN_0344ca4c(piVar19);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar19);
  }
  *(undefined8 *)(param_1 + 0x2f8) = 0;
LAB_034a2d50:
  if (((uVar5 >> 8 & 1) != 0) &&
     (puVar10 = *(undefined8 **)(param_1 + 0x248), puVar10 != (undefined8 *)0x0)) {
    uVar5 = *(ushort *)((long)puVar10 + 0xc);
    if (((uVar5 & 0x7c) == 4) && (puVar10[2] != 0)) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      uVar5 = *(ushort *)((long)puVar10 + 0xc);
      puVar10[2] = 0;
    }
    puVar10[2] = 0;
    *puVar10 = 0xffffffff00000000;
    *(undefined4 *)(puVar10 + 1) = 0;
    *(ushort *)((long)puVar10 + 0xc) = uVar5 & 0xf800;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar10);
  }
  FUN_0346d800(lVar7,0);
  FUN_034c8be8(param_1 + 0x1c0,param_1 + 0x28);
  return;
}


