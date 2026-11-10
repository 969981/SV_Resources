/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351f89c; name: FUN_0351f89c
 */


void FUN_0351f89c(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar12 = *param_3;
  plVar8 = *(long **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  plVar10 = plVar8;
  if (uVar2 == 0) {
LAB_0351f930:
    if ((plVar10 != plVar8 + (ulong)uVar2 * 6) &&
       (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0)) {
      puVar15 = *(undefined8 **)(param_1 + 8);
      do {
        puVar13 = (undefined8 *)puVar15[1];
        if ((((*(byte *)((long)puVar15 + 0x17c) >> 1 & 1) != 0) &&
            (puVar9 = (undefined8 *)*param_3, puVar9 != puVar15)) &&
           ((puVar9[8] == puVar15[8] &&
            ((*(int *)((long)puVar9 + 0x2c) == *(int *)((long)puVar15 + 0x2c) &&
             (puVar9[2] == puVar15[2])))))) {
          *(int *)((long)puVar15 + 0x4c) = *(int *)((long)puVar15 + 0x4c) + 1;
          plVar8 = (long *)param_2[1];
          if (plVar8 != (long *)0x0) {
            plVar14 = (long *)0x0;
            do {
              plVar16 = (long *)plVar8[4];
              if ((undefined8 *)*plVar8 == puVar15) {
                plVar1 = param_2 + 1;
                if ((long *)param_2[1] != plVar8) {
                  plVar1 = plVar14 + 4;
                }
                *plVar1 = (long)plVar16;
                if ((long *)*param_2 == plVar8) {
                  *param_2 = plVar14;
                }
                puVar9 = (undefined8 *)*plVar8;
                iVar3 = *(int *)((long)puVar9 + 0x4c) + -1;
                *(int *)((long)puVar9 + 0x4c) = iVar3;
                if (iVar3 == 0) {
                  (**(code **)*puVar9)(puVar9);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar9);
                }
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar8);
              }
              else {
                plVar14 = plVar8;
              }
              plVar8 = plVar16;
            } while (plVar16 != (long *)0x0);
          }
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x1b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x2b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x3b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x4b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x5b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x6b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x7b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x8b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0x9b0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xab0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xbb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xcb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xdb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xeb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          uVar6 = local_70;
          local_70 = CONCAT62(local_70._2_6_,0xfb0);
          uVar7 = local_70;
          local_70._6_2_ = SUB82(uVar6,6);
          local_70._0_4_ = (undefined4)uVar7;
          local_70._0_6_ = CONCAT24(0x40,(undefined4)local_70);
          FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),0,1);
          *(undefined2 *)(plVar10 + 5) = 0;
          for (plVar8 = (long *)plVar10[4]; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (((((undefined8 *)plVar8[3] == puVar15) && (*(char *)(plVar8 + 5) == -0x70)) &&
                (*(char *)((long)plVar8 + 0x2d) != '\0')) && ((*(byte *)(plVar8 + 7) >> 2 & 1) == 0)
               ) {
              uVar4 = (ulong)local_68 >> 0x20;
              local_68 = (undefined8 *)CONCAT44((int)uVar4,*(undefined4 *)(plVar8 + 6));
              local_70 = CONCAT71((int7)((ulong)plVar8[5] >> 8),0x80);
              FUN_0344b418(param_1,puVar15,&local_70,*(undefined4 *)((long)param_3 + 0x14),1,1);
            }
          }
          iVar3 = *(int *)((long)puVar15 + 0x4c) + -1;
          *(int *)((long)puVar15 + 0x4c) = iVar3;
          if (iVar3 == 0) {
            (**(code **)*puVar15)(puVar15);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar15);
          }
        }
        puVar15 = puVar13;
      } while (puVar13 != (undefined8 *)0x0);
      lVar12 = *param_3;
    }
  }
  else {
    lVar11 = (ulong)uVar2 * 0x30;
    do {
      if (((*(long *)(lVar12 + 0x40) == *plVar10) && (*(long *)(lVar12 + 0x10) == plVar10[1])) &&
         (*(int *)(lVar12 + 0x2c) == (int)plVar10[2])) goto LAB_0351f930;
      lVar11 = lVar11 + -0x30;
      plVar10 = plVar10 + 6;
    } while (lVar11 != 0);
  }
  local_70 = 0;
  local_68 = (undefined8 *)0x0;
  FUN_035211f0(lVar12,&local_70,*(undefined4 *)((long)param_3 + 0x14),
               *(uint *)(param_3 + 3) & 0x3fffffff);
  puVar5 = PTR_DAT_047e2fd0;
  puVar15 = local_68;
  while (puVar15 != (undefined8 *)0x0) {
    local_68 = (undefined8 *)puVar15[4];
    if (local_68 == (undefined8 *)0x0) {
      local_70 = 0;
      local_68 = (undefined8 *)0x0;
    }
    if ((((char)param_3[1] != -0x50) ||
        (*(char *)((long)param_3 + 9) != *(char *)((long)puVar15 + 9))) ||
       ((*(char *)(puVar15 + 1) != -0x50 ||
        (*(char *)((long)param_3 + 0xc) != *(char *)((long)puVar15 + 0xc))))) {
      FUN_0344b418(param_1,lVar12,puVar15 + 1,*(undefined4 *)((long)puVar15 + 0x14),0,1);
    }
    puVar13 = (undefined8 *)*puVar15;
    iVar3 = *(int *)((long)puVar13 + 0x4c) + -1;
    *(int *)((long)puVar13 + 0x4c) = iVar3;
    if (iVar3 == 0) {
      (**(code **)*puVar13)(puVar13);
      (**(code **)(puVar5 + 0x30))(0,puVar13);
    }
    (**(code **)(puVar5 + 0x30))(0,puVar15);
    puVar15 = local_68;
  }
  return;
}


