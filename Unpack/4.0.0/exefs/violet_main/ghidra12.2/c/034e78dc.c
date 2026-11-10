/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e78dc; name: FUN_034e78dc
 */


int FUN_034e78dc(long *param_1,ulong *param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  ushort uVar13;
  ulong *puVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  bool bVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  char local_b4 [4];
  undefined4 local_b0 [6];
  undefined4 local_98;
  int local_94;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  short local_68;
  
  lVar16 = *(long *)(param_3 + 2);
  plVar17 = param_1;
  if ((*(byte *)((long)param_1 + 0xdb) >> 4 & 1) == 0) {
    do {
      plVar15 = (long *)plVar17[0x13];
      if (plVar15 == (long *)0x0) break;
      plVar17 = plVar15;
    } while ((*(byte *)((long)plVar15 + 0xdb) >> 4 & 1) == 0);
  }
  bVar22 = *(byte *)((long)plVar17 + 0xf1) & 0xf;
  bVar21 = bVar22;
  if (bVar22 == 3) {
    if ((lVar16 == 0) || (iVar6 = (**(code **)(param_1[1] + 0x20))(), iVar6 == 9)) {
      bVar22 = 2;
      bVar21 = 2;
    }
    else {
      uVar11 = (**(code **)(*param_1 + 0x230))(param_1,lVar16);
      bVar21 = 1;
      if ((uVar11 & 1) != 0) {
        bVar21 = 2;
      }
      bVar22 = 2;
    }
  }
  FUN_034e7568(local_b0,param_1,*(undefined8 *)(param_3 + 4),&local_98);
  local_94 = 0x21;
  iVar6 = FUN_034e84d4(local_b0[0]);
  puVar4 = PTR_DAT_047e2fd0;
  if (iVar6 == 2) {
    return 3;
  }
  if (*(short *)((long)param_2 + 0x1a) == 8) {
    lVar16 = *(long *)(param_3 + 8);
    if (lVar16 == 0) {
LAB_034e7ad8:
      iVar7 = 2;
    }
    else {
      puVar8 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x20);
      if (puVar8 != (ulong *)0x0) {
        *(uint *)(puVar8 + 3) = 0xffffffff;
        *puVar8 = 0xffffffff00000000;
        puVar8[2] = 0;
        *(uint *)(puVar8 + 1) = 0;
        *(ushort *)((long)puVar8 + 0xc) = *(ushort *)((long)puVar8 + 0xc) & 0xf800;
        uVar11 = *param_2;
        uVar19 = param_2[1];
        uVar3 = param_2[3];
        puVar8[2] = param_2[2];
        puVar8[3] = uVar3;
        *puVar8 = uVar11;
        puVar8[1] = uVar19;
        iVar7 = *(int *)(lVar16 + 4);
        if (iVar7 != 0) {
          puVar14 = (ulong *)(lVar16 + 0x18);
          do {
            if (*(uint *)((long)puVar8 + 4) == (uint)puVar14[-2]) {
              iVar12 = *(int *)((long)puVar14 + 0xc);
              if (iVar12 == 0) {
                uVar11 = puVar14[-1];
                if (uVar11 != 0) {
                  iVar7 = *(int *)((long)puVar14 + -0xc);
                  uVar23 = (uint)*puVar8;
                  iVar12 = -1;
                  uVar10 = 1;
                  goto LAB_034e7e60;
                }
                uVar11 = puVar14[1];
                if (((uint)uVar11 == 0) || (uVar19 = *puVar14, uVar19 == 0)) goto LAB_034e7a78;
                iVar7 = *(int *)((long)puVar14 + -0xc);
                uVar3 = *puVar8;
                if (((*(ushort *)((long)puVar8 + 0xc) & 0x7c) == 4) && (puVar8[2] != 0)) {
                  (**(code **)(puVar4 + 0x30))(0);
                  puVar8[2] = 0;
                }
                *(uint *)(puVar8 + 3) = iVar7 << 0x10 | 1;
                *puVar8 = (ulong)(uint)uVar3 | 0xffffffff00000000;
                puVar8[1] = (ulong)(uint)uVar11 | 0x18c00000000;
                puVar8[2] = uVar19;
                *(undefined2 *)((long)puVar8 + 0xc) = 0x18c;
              }
              else {
                iVar7 = *(int *)((long)puVar14 + -0xc);
                uVar23 = (uint)*puVar8;
                uVar11 = puVar14[-1];
                uVar10 = 0;
LAB_034e7e60:
                FUN_034cb690(puVar8,uVar23,iVar7 << 0x10 | 1,uVar11,iVar12,uVar10,1);
              }
              bVar18 = true;
              param_2 = puVar8;
              goto LAB_034e7ae4;
            }
LAB_034e7a78:
            iVar7 = iVar7 + -1;
            puVar14 = puVar14 + 4;
          } while (iVar7 != 0);
        }
        uVar13 = *(ushort *)((long)puVar8 + 0xc);
        if (((uVar13 & 0x7c) == 4) && (puVar8[2] != 0)) {
          (**(code **)(puVar4 + 0x30))(0);
          uVar13 = *(ushort *)((long)puVar8 + 0xc);
          puVar8[2] = 0;
        }
        puVar8[2] = 0;
        *puVar8 = 0xffffffff00000000;
        *(uint *)(puVar8 + 1) = 0;
        *(ushort *)((long)puVar8 + 0xc) = uVar13 & 0xf800;
        (**(code **)(puVar4 + 0x30))(0,puVar8);
        goto LAB_034e7ad8;
      }
      iVar7 = 0x34;
    }
    bVar18 = false;
    plVar17 = (long *)0x0;
    local_b4[0] = '\0';
LAB_034e7d18:
    if (plVar17 == (long *)0x0) {
      if (bVar18) {
        local_90 = *(undefined8 *)(param_3 + 4);
        local_80 = 0;
        local_70 = 0x100000000;
        local_68 = 0x100;
        local_88 = (long *)0x0;
        local_78 = plVar17;
        (**(code **)(*param_1 + 0x120))(param_1,&local_90);
      }
      goto LAB_034e7d6c;
    }
LAB_034e7d1c:
    if (!bVar18) {
      *(uint *)((long)plVar17 + 699) = *(uint *)((long)plVar17 + 699) | 0x100000;
    }
  }
  else {
    bVar18 = false;
LAB_034e7ae4:
    local_b4[0] = '\0';
    plVar17 = (long *)(**(code **)(**(long **)(param_3 + 2) + 0x28))
                                (*(long **)(param_3 + 2),param_1,param_2,param_3,local_b0);
    if (plVar17 == (long *)0x0) {
      if (bVar18) {
        uVar13 = *(ushort *)((long)param_2 + 0xc);
        if (((uVar13 & 0x7c) == 4) && (param_2[2] != 0)) {
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
          uVar13 = *(ushort *)((long)param_2 + 0xc);
          param_2[2] = 0;
        }
        param_2[2] = 0;
        *param_2 = 0xffffffff00000000;
        *(uint *)(param_2 + 1) = 0;
        *(ushort *)((long)param_2 + 0xc) = uVar13 & 0xf800;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_2);
      }
      bVar18 = false;
      plVar17 = (long *)0x0;
      iVar7 = 2;
      goto LAB_034e7d18;
    }
    plVar15 = plVar17 + 3;
    if (*param_3 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x22) + 0x10);
    }
    iVar7 = FUN_0346db58(local_98,plVar15,uVar10,bVar21 != 1,&local_94,param_3 + 0x2c,local_b4);
    if (iVar7 != 1) {
      bVar18 = false;
joined_r0x034e7c6c:
      if ((plVar17 == (long *)0x0) || (param_3[0xd] == 0)) goto LAB_034e7d18;
      FUN_034b40b8(*(undefined8 *)PTR_DAT_047e6f38,param_3[0xd],plVar17,&local_90);
      goto LAB_034e7d1c;
    }
    puVar1 = (uint *)((long)plVar17 + 699);
    local_90 = *(undefined8 *)(param_3 + 4);
    local_70 = CONCAT44(1,local_b0[0]);
    local_88 = plVar17 + 0x60;
    local_68 = (ushort)((bVar22 == 0 || local_b4[0] == '\0') && (*puVar1 & 0x2000000) == 0) << 8;
    if ((*(ushort *)(plVar17 + 0x36) & 0x40) != 0) {
      local_88 = (long *)0x0;
    }
    local_80 = 0;
    local_78 = plVar17;
    iVar7 = (**(code **)(*param_1 + 0x118))(param_1,&local_90,1,0);
    if ((iVar7 == 2) ||
       (((iVar6 == 0x50 || (iVar7 == 0x50)) &&
        (*(ushort *)(plVar17 + 0x36) = *(ushort *)(plVar17 + 0x36) | 0x100, bVar21 == 1)))) {
      local_94 = 0x20;
      iVar7 = 3;
LAB_034e7cec:
      bVar18 = true;
      goto joined_r0x034e7c6c;
    }
    iVar7 = (**(code **)(*plVar17 + 0x18))(plVar17);
    if (iVar7 != 1) goto LAB_034e7cec;
    if ((*(ushort *)(plVar17 + 0x36) & 1) == 0) {
      (**(code **)(*plVar15 + 0x58))(plVar15,param_3 + 0x2c);
    }
    else if ((*(ushort *)(plVar17 + 0x36) >> 4 & 1) != 0) {
      (**(code **)(*plVar15 + 0x60))(plVar15);
    }
    FUN_034a4d68(plVar17,param_3 + 0x5a,1);
    puVar4 = PTR_DAT_047e2fd0;
    lVar16 = *(long *)(param_3 + 0x22);
    if (lVar16 != 0) {
      if (((long *)plVar17[0xd] != (long *)0x0) &&
         (plVar15 = *(long **)plVar17[0xd], plVar15 != (long *)0x0)) {
        do {
          lVar20 = plVar15[1];
          if (*(int *)(lVar20 + 0x7c) == 1) {
            uVar2 = *(uint *)(lVar16 + 0x30);
            uVar23 = *(uint *)(lVar16 + 0x34);
            if (uVar23 <= uVar2) {
              iVar6 = uVar23 + (uVar23 >> 1);
              if (uVar23 == 0) {
                iVar6 = 1;
              }
              uVar23 = iVar6 + uVar23;
              lVar9 = (**(code **)(puVar4 + 0x20))
                                (0,*(undefined8 *)(lVar16 + 0x28),(ulong)uVar23 << 3);
              if (lVar9 == 0) goto LAB_034e7f38;
              *(long *)(lVar16 + 0x28) = lVar9;
              *(uint *)(lVar16 + 0x34) = uVar23;
            }
            if (uVar2 < uVar23) {
              uVar23 = *(uint *)(lVar16 + 0x30);
              lVar9 = *(long *)(lVar16 + 0x28);
              *(uint *)(lVar16 + 0x30) = uVar23 + 1;
              if (lVar9 != 0) {
                *(long *)(lVar9 + (ulong)uVar23 * 8) = lVar20;
                *(int *)(lVar20 + 0x74) = *(int *)(lVar20 + 0x74) + 1;
                lVar20 = *(long *)(lVar9 + (ulong)uVar23 * 8);
                *(int *)(lVar20 + 0x84) = *(int *)(lVar20 + 0x84) + 1;
              }
            }
          }
LAB_034e7f38:
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
        lVar16 = *(long *)(param_3 + 0x22);
      }
      *(long **)(lVar16 + 0x10) = plVar17 + 0x21;
    }
    uVar10 = *(undefined8 *)(param_3 + 6);
    iVar6 = param_3[0x20];
    uVar5 = FUN_034cb578(plVar17[0x31]);
    *(undefined2 *)(plVar17 + 0x57) = uVar5;
    if ((*puVar1 >> 0xf & 1) == 0) {
      *puVar1 = *puVar1 | 0x8000;
      if (plVar17[0x21] != 0) {
        lVar16 = plVar17[0x31];
        do {
          if (*(long *)(lVar16 + 0x88) != 0) {
            lVar16 = *(long *)(lVar16 + 0x88) + 0x38;
            goto LAB_034e8010;
          }
          lVar16 = *(long *)(lVar16 + 0x98);
        } while (lVar16 != 0);
        lVar16 = 0;
LAB_034e8010:
        FUN_034b2e64(*(undefined8 *)PTR_DAT_047e7040,plVar17[0x21],lVar16);
      }
    }
    iVar7 = FUN_034a3454(plVar17,uVar10,iVar6 == 1,0);
    if (iVar7 == 1) {
      plVar17[0x3c] = 0;
      plVar15 = &DAT_048b0740;
      if (DAT_048b0740 != 0) {
        plVar15 = DAT_048b0738 + 0x3c;
      }
      *plVar15 = (long)plVar17;
      DAT_048b0730 = DAT_048b0730 + 1;
      DAT_048b0738 = plVar17;
    }
    if (*(long *)(param_3 + 0x22) != 0) {
      *(long *)(*(long *)(param_3 + 0x22) + 8) = plVar17[0x47];
      **(long **)(param_3 + 0x22) = plVar17[0x46];
    }
    if (iVar7 == 1) {
      return 1;
    }
  }
  (**(code **)(*plVar17 + 0x20))(plVar17,1);
  (**(code **)(*plVar17 + 8))(plVar17);
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar17);
LAB_034e7d6c:
  if (iVar7 == 3) {
    return 3;
  }
  return iVar7;
}


