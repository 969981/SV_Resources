/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344bd98; name: FUN_0344bd98
 */


void FUN_0344bd98(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar6 = local_70;
  plVar8 = *(long **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  plVar13 = plVar8;
  if (uVar2 == 0) {
LAB_0344be24:
    plVar14 = plVar13 + 3;
    if (plVar13 != plVar8 + (ulong)uVar2 * 6) {
      local_70 = CONCAT62(local_70._2_6_,0xb0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0x1b0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0x2b0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0x3b0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0x4b0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0x5b0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0x6b0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0x7b0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0x8b0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0x9b0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0xab0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0xbb0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0xcb0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0xdb0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0xeb0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0xfb0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
      FUN_0344c2d0(plVar14,param_2,&local_70);
      plVar8 = (long *)plVar13[4];
      *(undefined2 *)(plVar13 + 5) = 0;
      puVar5 = PTR_DAT_047e2fd0;
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)0x0;
        do {
          if (((plVar8[3] == param_2) &&
              (*(undefined4 *)((long)plVar8 + 0x34) = 0, (char)plVar8[5] == -0x70)) &&
             ((*(char *)((long)plVar8 + 0x2d) != '\0' &&
              (bVar3 = *(byte *)(plVar8 + 7), (bVar3 >> 2 & 1) == 0)))) {
            if ((bVar3 >> 1 & 1) != 0) {
              if ((bVar3 & 6) == 2) {
                *(byte *)(plVar8 + 7) = bVar3 & 0xf8 | 4;
                *(undefined1 *)(plVar8 + 5) = 0x80;
              }
              goto LAB_0344c130;
            }
            plVar15 = (long *)*plVar8;
            plVar1 = plVar13 + 4;
            if ((long *)plVar13[4] != plVar8) {
              plVar1 = plVar9;
            }
            *plVar1 = (long)plVar15;
            if ((long *)*plVar14 == plVar8) {
              *plVar14 = (long)plVar9;
            }
            iVar4 = (int)plVar8[1] + -1;
            *(int *)(plVar8 + 1) = iVar4;
            plVar9 = plVar15;
            if (iVar4 == 0) {
              puVar11 = (undefined8 *)plVar8[3];
              if ((puVar11 != (undefined8 *)0x0) &&
                 (iVar4 = *(int *)((long)puVar11 + 0x4c) + -1,
                 *(int *)((long)puVar11 + 0x4c) = iVar4, iVar4 == 0)) {
                (**(code **)*puVar11)(puVar11);
                (**(code **)(puVar5 + 0x30))(0,puVar11);
              }
              if ((long *)plVar8[4] != (long *)0x0) {
                (**(code **)(*(long *)plVar8[4] + 0x30))();
              }
              piVar12 = (int *)plVar8[2];
              if ((piVar12 != (int *)0x0) &&
                 (iVar4 = *piVar12, *piVar12 = iVar4 + -1, iVar4 + -1 == 0)) {
                FUN_0344ca4c(piVar12);
                (**(code **)(puVar5 + 0x30))(0,piVar12);
              }
              (**(code **)(puVar5 + 0x30))(0,plVar8);
            }
          }
          else {
LAB_0344c130:
            plVar9 = plVar8;
          }
          plVar8 = (long *)*plVar9;
        } while (plVar8 != (long *)0x0);
      }
      uVar6 = local_70;
      local_70 = CONCAT62(local_70._2_6_,0xfff0);
      uVar7 = local_70;
      local_70._6_2_ = SUB82(uVar6,6);
      local_70._0_4_ = (undefined4)uVar7;
      local_70._0_6_ = CONCAT24(1,(undefined4)local_70);
      FUN_0344b418(param_1,param_2,&local_70,0,0,0);
      FUN_0344b9fc(param_1,0);
      plVar13 = *(long **)(param_1 + 0x28);
      if (plVar13 != (long *)0x0) {
        plVar8 = (long *)0x0;
        do {
          while( true ) {
            plVar14 = plVar13;
            plVar13 = (long *)*plVar14;
            if (plVar14[3] != param_2) break;
            plVar9 = (long *)(param_1 + 0x28);
            if (*(long **)(param_1 + 0x28) != plVar14) {
              plVar9 = plVar8;
            }
            lVar10 = plVar14[2];
            *plVar9 = (long)plVar13;
            if (*(long **)(param_1 + 0x20) == plVar14) {
              *(long **)(param_1 + 0x20) = plVar8;
            }
            *(undefined8 *)(lVar10 + 0x18) = 0;
            for (plVar9 = *(long **)(plVar14[2] + 0x48); plVar9 != (long *)0x0;
                plVar9 = (long *)*plVar9) {
              lVar10 = plVar9[2];
              *(undefined4 *)(lVar10 + 0x318) = 0xffffffff;
              local_68 = 0;
              local_70 = 0x400000000;
              FUN_034a30a4(lVar10,&local_70,1);
            }
            iVar4 = (int)plVar14[1] + -1;
            *(int *)(plVar14 + 1) = iVar4;
            if (iVar4 == 0) {
              puVar11 = (undefined8 *)plVar14[3];
              if ((puVar11 != (undefined8 *)0x0) &&
                 (iVar4 = *(int *)((long)puVar11 + 0x4c) + -1,
                 *(int *)((long)puVar11 + 0x4c) = iVar4, iVar4 == 0)) {
                (**(code **)*puVar11)(puVar11);
                (**(code **)(puVar5 + 0x30))(0,puVar11);
              }
              if ((long *)plVar14[4] != (long *)0x0) {
                (**(code **)(*(long *)plVar14[4] + 0x30))();
              }
              piVar12 = (int *)plVar14[2];
              if ((piVar12 != (int *)0x0) &&
                 (iVar4 = *piVar12, *piVar12 = iVar4 + -1, iVar4 + -1 == 0)) {
                FUN_0344ca4c(piVar12);
                (**(code **)(puVar5 + 0x30))(0,piVar12);
              }
              (**(code **)(puVar5 + 0x30))(0,plVar14);
            }
            if (plVar13 == (long *)0x0) {
              return;
            }
          }
          plVar8 = plVar14;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  else {
    lVar10 = (ulong)uVar2 * 0x30;
    do {
      if (((*(long *)(param_2 + 0x40) == *plVar13) && (*(long *)(param_2 + 0x10) == plVar13[1])) &&
         (*(int *)(param_2 + 0x2c) == (int)plVar13[2])) goto LAB_0344be24;
      lVar10 = lVar10 + -0x30;
      plVar13 = plVar13 + 6;
    } while (lVar10 != 0);
  }
  return;
}


