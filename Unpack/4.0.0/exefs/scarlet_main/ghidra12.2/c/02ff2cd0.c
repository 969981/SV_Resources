/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ff2cd0; name: FUN_02ff2cd0
 */


void FUN_02ff2cd0(long *param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  
  lVar8 = param_1[0x100];
  lVar3 = tpidr_el0;
  piVar12 = (int *)PTR_DAT_047e49c0;
  if (lVar8 == 0) {
    iVar18 = -1;
    if (((int)param_3 < 1) || (*(char *)((long)param_1 + 0x999) == '\0')) goto LAB_02ff2f0c;
LAB_02ff2d34:
    uVar9 = (ulong)(param_3 - 1);
    uVar6 = param_3;
    if (param_3 - 1 == 0 || (int)param_3 < 1) {
      uVar6 = 1;
    }
    uVar14 = (ulong)uVar6;
    puVar17 = param_2;
    do {
      if (lVar8 == 0) {
        plVar7 = (long *)0x0;
        iVar18 = -1;
        bVar5 = false;
      }
      else {
        iVar16 = *piVar12;
        lVar10 = (long)iVar16;
        lVar8 = *(long *)(lVar3 + 0x1000b8);
        if (lVar8 == 0) {
          lVar8 = FUN_00e5d3b4();
          piVar12 = (int *)PTR_DAT_047e49c0;
          *(long *)(lVar3 + 0x1000b8) = lVar8;
          iVar16 = *piVar12;
          iVar18 = (int)*(undefined8 *)(lVar8 + lVar10 * 8 + 1000);
          if (lVar8 == 0) {
            lVar8 = FUN_00e5d3b4();
            piVar12 = (int *)PTR_DAT_047e49c0;
            *(long *)(lVar3 + 0x1000b8) = lVar8;
          }
        }
        else {
          iVar18 = (int)*(undefined8 *)(lVar8 + lVar10 * 8 + 1000);
        }
        *(long *)(lVar8 + (long)iVar16 * 8 + 1000) = (long)(iVar18 + 1);
        plVar7 = (long *)param_1[0x100];
        bVar5 = iVar18 == 0;
      }
      bVar5 = (bool)(bVar5 & plVar7 != (long *)0x0);
      if ((*(char *)((long)param_1 + 0x999) != '\0') || (bVar5)) {
        local_70 = *puVar17;
        local_78 = (undefined8 *)0x3402000020;
        local_68 = (undefined1)param_4;
        local_67 = uVar9 == 0;
        if (bVar5) {
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
          piVar12 = (int *)PTR_DAT_047e49c0;
        }
      }
      if (iVar18 != -1) {
        iVar16 = *piVar12;
        lVar8 = *(long *)(lVar3 + 0x1000b8);
        if (lVar8 == 0) {
          lVar8 = FUN_00e5d3b4();
          piVar12 = (int *)PTR_DAT_047e49c0;
          *(long *)(lVar3 + 0x1000b8) = lVar8;
        }
        *(long *)(lVar8 + (long)iVar16 * 8 + 1000) = (long)iVar18;
      }
      lVar8 = param_1[0x100];
      uVar14 = uVar14 - 1;
      uVar9 = uVar9 - 1;
      puVar17 = puVar17 + 1;
    } while (uVar14 != 0);
    if (lVar8 == 0) {
      iVar18 = -1;
      goto LAB_02ff2f0c;
    }
  }
  else if (0 < (int)param_3) goto LAB_02ff2d34;
  iVar16 = *piVar12;
  lVar8 = *(long *)(lVar3 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar8;
    iVar18 = (int)*(undefined8 *)(lVar8 + (long)iVar16 * 8 + 1000);
    iVar16 = *(int *)PTR_DAT_047e49c0;
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar3 + 0x1000b8) = lVar8;
    }
  }
  else {
    iVar18 = (int)*(undefined8 *)(lVar8 + (long)iVar16 * 8 + 1000);
  }
  *(long *)(lVar8 + (long)iVar16 * 8 + 1000) = (long)(iVar18 + 1);
LAB_02ff2f0c:
  puVar4 = PTR_PTR_047d1a50;
  local_78 = (undefined8 *)0x0;
  local_70 = 0x8000000000000000;
  if (0 < (int)param_3) {
    FUN_02f5f34c(&local_78,PTR_PTR_047d1a50 + 0x20,param_3);
    uVar6 = param_3 & 3;
    puVar17 = local_78;
    if (2 < param_3 - 1) {
      iVar16 = -(param_3 & 0xfffffffc);
      puVar11 = local_78;
      do {
        *puVar11 = *param_2;
        puVar11[1] = param_2[1];
        puVar11[2] = param_2[2];
        puVar1 = param_2 + 3;
        puVar17 = puVar11 + 4;
        param_2 = param_2 + 4;
        iVar16 = iVar16 + 4;
        puVar11[3] = *puVar1;
        puVar11 = puVar17;
      } while (iVar16 != 0);
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar17 = *param_2;
      puVar17 = puVar17 + 1;
      param_2 = param_2 + 1;
    }
  }
  local_70 = CONCAT44(local_70._4_4_,param_3);
  lVar8 = (**(code **)(*param_1 + 0x58))(param_1);
  if (((int)param_3 < 1) || (lVar8 == 0)) {
    uVar9 = local_70 & 0xffffffff;
  }
  else {
    plVar7 = (long *)(**(code **)(*param_1 + 0x58))(param_1);
    uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,param_1,local_78,local_70 & 0xffffffff);
    uVar9 = local_70 & 0xffffffff;
    if ((int)uVar6 < (int)local_70) {
      if ((int)(local_70._4_4_ & 0x7fffffff) < (int)uVar6) {
        FUN_02f5f34c(&local_78,puVar4 + 0x20,(long)(int)uVar6);
        uVar9 = local_70 & 0xffffffff;
      }
      if (((int)uVar9 < (int)uVar6) || ((int)uVar6 < (int)uVar9)) {
        uVar9 = (ulong)uVar6;
        local_70 = CONCAT44(local_70._4_4_,uVar6);
      }
    }
  }
  lVar8 = param_1[0xa0];
  if ((int)(*(uint *)(lVar8 + 0x94c) & 0x7fffffff) < *(int *)(lVar8 + 0x948) + (int)uVar9) {
    FUN_02f5f23c(lVar8 + 0x940,PTR_PTR_047d1a50);
    uVar9 = local_70 & 0xffffffff;
  }
  if (0 < (int)uVar9) {
    if (param_4 == 0) {
      lVar10 = 0;
      do {
        lVar13 = param_1[7];
        uVar14 = (ulong)((uint *)((long)local_78 + lVar10))[1] & 0xffffff;
        if ((((*(byte *)(lVar13 + uVar14 * 0xc0 + 0x88) & 1) != 0) &&
            (uVar15 = (ulong)*(uint *)((long)local_78 + lVar10) & 0xffffff,
            (*(byte *)(lVar13 + uVar15 * 0xc0 + 0x88) & 1) != 0)) &&
           (*(int *)(lVar13 + uVar14 * 0xc0 + 0x80) != *(int *)(lVar13 + uVar15 * 0xc0 + 0x80))) {
          if ((*(byte *)(lVar13 + uVar14 * 0xc0 + 0x54) & 9) == 0) {
            FUN_02f35f08(param_1,*(undefined4 *)(lVar13 + uVar14 * 0xc0 + 0x50),0);
          }
          if ((*(byte *)(lVar13 + uVar15 * 0xc0 + 0x54) & 9) == 0) {
            FUN_02f35f08(param_1,*(undefined4 *)(lVar13 + uVar15 * 0xc0 + 0x50),0);
          }
          iVar16 = *(int *)(lVar8 + 0x948);
          *(int *)(lVar8 + 0x948) = iVar16 + 1;
          puVar2 = (undefined4 *)(*(long *)(lVar8 + 0x940) + (long)iVar16 * 8);
          puVar2[1] = *(undefined4 *)(lVar13 + uVar14 * 0xc0 + 0x50);
          *puVar2 = *(undefined4 *)(lVar13 + uVar15 * 0xc0 + 0x50);
        }
        lVar10 = lVar10 + 8;
      } while (uVar9 * 8 != lVar10);
    }
    else {
      lVar10 = 0;
      do {
        lVar13 = param_1[7];
        uVar14 = (ulong)((uint *)((long)local_78 + lVar10))[1] & 0xffffff;
        if ((((*(byte *)(lVar13 + uVar14 * 0xc0 + 0x88) & 1) != 0) &&
            (uVar15 = (ulong)*(uint *)((long)local_78 + lVar10) & 0xffffff,
            (*(byte *)(lVar13 + uVar15 * 0xc0 + 0x88) & 1) != 0)) &&
           (*(int *)(lVar13 + uVar14 * 0xc0 + 0x80) != *(int *)(lVar13 + uVar15 * 0xc0 + 0x80))) {
          iVar16 = *(int *)(lVar8 + 0x948);
          *(int *)(lVar8 + 0x948) = iVar16 + 1;
          puVar2 = (undefined4 *)(*(long *)(lVar8 + 0x940) + (long)iVar16 * 8);
          puVar2[1] = *(undefined4 *)(lVar13 + uVar14 * 0xc0 + 0x50);
          *puVar2 = *(undefined4 *)(lVar13 + uVar15 * 0xc0 + 0x50);
        }
        lVar10 = lVar10 + 8;
      } while (uVar9 * 8 != lVar10);
    }
  }
  uVar9 = local_70;
  uVar14 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (long)uVar9) && (local_78 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_78,uVar14 << 3);
  }
  if (iVar18 != -1) {
    iVar16 = *(int *)PTR_DAT_047e49c0;
    lVar8 = *(long *)(lVar3 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar3 + 0x1000b8) = lVar8;
    }
    *(long *)(lVar8 + (long)iVar16 * 8 + 1000) = (long)iVar18;
  }
  return;
}


