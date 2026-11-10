/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fa4e2c; name: FUN_02fa4e2c
 */


void FUN_02fa4e2c(long param_1,long *param_2,long param_3,long *param_4)

{
  undefined2 *puVar1;
  short *psVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined2 uVar7;
  char cVar8;
  bool bVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined2 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  uint *puVar29;
  long *plVar30;
  long local_68;
  
  uVar6 = *(uint *)(param_2 + 0x22);
  puVar3 = (uint *)(param_2 + 0x22);
  uVar27 = (ulong)uVar6 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar18 = *puVar3;
  if (uVar18 == uVar6) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar9) {
      *puVar3 = uVar6 + 0x200 & 0xfffffe00 | puVar3[uVar27 + 1];
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 != '\0') goto LAB_02fa4e9c;
    puVar29 = puVar3 + uVar27 + 1;
  }
  else {
    ClearExclusiveLocal();
LAB_02fa4e9c:
    do {
      uVar27 = (ulong)(uVar18 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar6 = *puVar3;
      if (uVar6 == uVar18) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
          *puVar3 = uVar18 + 0x200 & 0xfffffe00 | *(uint *)((long)param_2 + uVar27 * 4 + 0x114);
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_02fa4ed8;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02fa4ed8:
        bVar9 = false;
      }
      uVar18 = uVar6;
    } while (!bVar9);
    puVar29 = (uint *)((long)param_2 + uVar27 * 4 + 0x114);
  }
  *puVar29 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar29 = *(uint **)(*param_2 + uVar27 * 8);
  lVar28 = *(long *)(puVar29 + 2);
  plVar21 = (long *)(*(ulong *)(lVar28 + 0x7e8) & 0xfffffffffffffffc);
  if (plVar21 != (long *)0x0) {
    do {
      uVar26 = plVar21[1];
      if ((uVar26 & 3) == 0) {
        (**(code **)(*plVar21 + 0x20))(plVar21,lVar28,uVar27);
      }
      plVar21 = (long *)(uVar26 & 0xfffffffffffffffc);
    } while (plVar21 != (long *)0x0);
    lVar28 = *(long *)(puVar29 + 2);
  }
  if ((param_4 == (long *)0x0) && (*(char *)(*(long *)(param_1 + 0x10) + 0x118) == '\0')) {
    sVar10 = FUN_0323f560(param_3,param_1 + 0x180);
    sVar12 = *(short *)(*(long *)(param_1 + 0x6a0) + 0x62);
    sVar10 = sVar12 + sVar10;
    if (sVar12 == -1) {
      sVar10 = -1;
    }
    *(short *)(param_3 + 0x4da) = sVar10;
  }
  puVar5 = PTR_DAT_047d1a08;
  if (*(short *)(param_3 + 0x4d6) == -1) {
    FUN_02f428b0(lVar28,puVar29);
    lVar22 = *(long *)(param_1 + 0x10);
    iVar25 = *(int *)(lVar22 + 0xb8);
    if (0 < iVar25) {
      lVar23 = 0;
      iVar19 = 0;
      lVar24 = 0x1c;
      do {
        uVar6 = *(int *)(*(long *)(*(long *)(lVar22 + 0xc0) + lVar23 * 8) + 0x1c) + 0x3fU &
                0xffffffc0;
        if (uVar6 != 0) {
          *(int *)(*(long *)(lVar22 + 0xb0) + lVar24) = iVar19;
          *(uint *)(*(long *)(lVar22 + 0xe0) + lVar23 * 4) = uVar6;
          iVar25 = *(int *)(lVar22 + 0xb8);
          iVar19 = uVar6 + iVar19;
        }
        lVar23 = lVar23 + 1;
        lVar24 = lVar24 + 0x20;
      } while (lVar23 < iVar25);
      if (0 < iVar19) {
        local_68 = (long)(iVar19 + 0x30);
        uVar16 = (**(code **)puVar5)(0,&local_68,0);
        *(undefined8 *)(lVar22 + 0xf0) = uVar16;
      }
    }
    lVar22 = *(long *)(param_1 + 0x10);
    iVar25 = *(int *)(lVar22 + 0x18);
    if (0 < iVar25) {
      lVar23 = 0;
      iVar19 = 0;
      lVar24 = 0x1c;
      do {
        uVar6 = *(int *)(*(long *)(*(long *)(lVar22 + 0x20) + lVar23 * 8) + 0x1c) + 0x3fU &
                0xffffffc0;
        if (uVar6 != 0) {
          *(int *)(*(long *)(lVar22 + 0x10) + lVar24) = iVar19;
          *(uint *)(*(long *)(lVar22 + 0x40) + lVar23 * 4) = uVar6;
          iVar25 = *(int *)(lVar22 + 0x18);
          iVar19 = uVar6 + iVar19;
        }
        lVar23 = lVar23 + 1;
        lVar24 = lVar24 + 0x20;
      } while (lVar23 < iVar25);
      if (0 < iVar19) {
        local_68 = (long)(iVar19 + 0x30);
        uVar16 = (**(code **)puVar5)(0,&local_68,0);
        *(undefined8 *)(lVar22 + 0x50) = uVar16;
      }
    }
    lVar22 = *(long *)(param_1 + 0x10);
    iVar25 = *(int *)(lVar22 + 0x68);
    if (0 < iVar25) {
      lVar23 = 0;
      iVar19 = 0;
      lVar24 = 0x1c;
      do {
        uVar6 = *(int *)(*(long *)(*(long *)(lVar22 + 0x70) + lVar23 * 8) + 0x1c) + 0x3fU &
                0xffffffc0;
        if (uVar6 != 0) {
          *(int *)(*(long *)(lVar22 + 0x60) + lVar24) = iVar19;
          *(uint *)(*(long *)(lVar22 + 0x90) + lVar23 * 4) = uVar6;
          iVar25 = *(int *)(lVar22 + 0x68);
          iVar19 = uVar6 + iVar19;
        }
        lVar23 = lVar23 + 1;
        lVar24 = lVar24 + 0x20;
      } while (lVar23 < iVar25);
      if (0 < iVar19) {
        local_68 = (long)(iVar19 + 0x30);
        uVar16 = (**(code **)puVar5)(0,&local_68,0);
        *(undefined8 *)(lVar22 + 0xa0) = uVar16;
      }
    }
  }
  else {
    *(long *)(*(long *)(param_1 + 0x688) + 0x28) = lVar28;
    *(long *)(*(long *)(param_1 + 0x688) + 0x30) = param_1;
    iVar25 = *(int *)(param_3 + 0x20);
    lVar22 = 0;
    if (*(long *)(param_1 + 0x688) != 0) {
      lVar22 = *(long *)(param_1 + 0x688) + 0x20;
    }
    iVar19 = iVar25;
    if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= iVar25) {
      FUN_0323ff70(param_3 + 0x18,PTR_PTR_047d1a50,(long)iVar25 + 1);
      iVar19 = *(int *)(param_3 + 0x20);
    }
    plVar21 = (long *)(*(long *)(param_3 + 0x18) + (long)iVar19 * 0x18);
    *(int *)(param_3 + 0x20) = (int)((long)iVar25 + 1);
    *(undefined2 *)(plVar21 + 1) = 1;
    *plVar21 = lVar22;
    *(undefined1 *)((long)plVar21 + 10) = 0x40;
    plVar21[2] = 0;
    iVar19 = *(int *)(param_3 + 0x330);
    lVar22 = (long)iVar19;
    uVar7 = *(undefined2 *)(param_3 + 0x4d6);
    *(short *)(param_3 + 0x4d8) = (short)iVar25;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar19) {
      FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar22 + 1);
      iVar19 = *(int *)(param_3 + 0x330);
    }
    puVar1 = (undefined2 *)(*(long *)(param_3 + 0x328) + (long)iVar19 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar22 + 1);
    puVar1[1] = (short)iVar25;
    *puVar1 = uVar7;
  }
  if (param_4 == (long *)0x0) {
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x118) == '\0') goto LAB_02fa532c;
  }
  else {
    local_68 = 0x40;
    puVar14 = (undefined8 *)(**(code **)puVar5)(0,&local_68,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(puVar14,"hkReferencedTask");
    }
    puVar14[6] = param_2;
    *puVar14 = &PTR_LAB_04611870;
    puVar14[1] = 0xffffffff;
    puVar14[2] = 1;
    puVar14[4] = &PTR_LAB_046118b8;
    puVar14[5] = param_1;
    plVar21 = *(long **)(param_1 + 0x6a8);
    *(undefined8 **)(param_1 + 0x6a8) = puVar14;
    if ((plVar21 != (long *)0x0) && (plVar21[1] != 0)) {
      plVar17 = plVar21 + 2;
      do {
        lVar22 = *plVar17;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *plVar17 = lVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))();
      }
    }
  }
  iVar25 = *(int *)(param_3 + 0x20);
  lVar22 = 0;
  if (*(long *)(param_1 + 0x6a8) != 0) {
    lVar22 = *(long *)(param_1 + 0x6a8) + 0x20;
  }
  iVar19 = iVar25;
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= iVar25) {
    FUN_0323ff70(param_3 + 0x18,PTR_PTR_047d1a50,(long)iVar25 + 1);
    iVar19 = *(int *)(param_3 + 0x20);
  }
  plVar21 = (long *)(*(long *)(param_3 + 0x18) + (long)iVar19 * 0x18);
  *(int *)(param_3 + 0x20) = (int)((long)iVar25 + 1);
  *plVar21 = lVar22;
  *(undefined2 *)(plVar21 + 1) = 1;
  *(undefined1 *)((long)plVar21 + 10) = 0x40;
  plVar21[2] = 0;
  *(short *)(param_3 + 0x4da) = (short)iVar25;
LAB_02fa532c:
  if (*(long *)(lVar28 + 0x698) == 0) {
    sVar10 = -1;
  }
  else {
    local_68 = 0x40;
    plVar21 = (long *)(**(code **)puVar5)(0,&local_68,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar21,"hkReferencedTask");
    }
    plVar17 = plVar21 + 2;
    *plVar17 = 1;
    plVar21[6] = (long)param_2;
    *plVar21 = (long)&PTR_LAB_046119c0;
    plVar21[1] = 0xffffffff;
    plVar21[4] = (long)&PTR_LAB_04611a08;
    plVar21[5] = param_1;
    sVar10 = FUN_0323f360(param_3,plVar21,0x40);
    sVar12 = *(short *)(param_3 + 0x4d8);
    if ((sVar12 != -1) && (sVar10 != -1)) {
      iVar25 = *(int *)(param_3 + 0x330);
      lVar22 = (long)iVar25;
      if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar25) {
        FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar22 + 1);
        iVar25 = *(int *)(param_3 + 0x330);
      }
      psVar2 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar25 * 4);
      *(int *)(param_3 + 0x330) = (int)(lVar22 + 1);
      *psVar2 = sVar12;
      psVar2[1] = sVar10;
    }
    iVar25 = *(int *)(param_3 + 0x330);
    lVar23 = (long)iVar25;
    sVar12 = *(short *)(param_3 + 0x4da);
    lVar22 = param_3 + 0x328;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar25) {
      FUN_02e7f7cc(lVar22,PTR_PTR_047d1a50,lVar23 + 1);
      iVar25 = *(int *)(param_3 + 0x330);
    }
    psVar2 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar25 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar23 + 1);
    *psVar2 = sVar10;
    psVar2[1] = sVar12;
    puVar5 = PTR_DAT_047d1a08;
    local_68 = 0x60;
    plVar15 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar15,"hkReferencedTask");
    }
    plVar30 = plVar15 + 2;
    *plVar30 = 1;
    *(undefined4 *)((long)plVar15 + 0x4c) = 0;
    *plVar15 = (long)&PTR_LAB_04611a68;
    plVar15[1] = 0xffffffff;
    plVar15[10] = 0;
    plVar15[6] = (long)param_2;
    plVar15[4] = (long)&PTR_LAB_04611aa8;
    plVar15[5] = param_1;
    sVar11 = FUN_0323f360(param_3,plVar15,0x40);
    sVar12 = *(short *)(param_3 + 0x4d8);
    if ((sVar12 != -1) && (sVar11 != -1)) {
      iVar25 = *(int *)(param_3 + 0x330);
      lVar23 = (long)iVar25;
      if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar25) {
        FUN_02e7f7cc(lVar22,PTR_PTR_047d1a50,lVar23 + 1);
        iVar25 = *(int *)(param_3 + 0x330);
      }
      psVar2 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar25 * 4);
      *(int *)(param_3 + 0x330) = (int)(lVar23 + 1);
      *psVar2 = sVar12;
      psVar2[1] = sVar11;
    }
    iVar25 = *(int *)(param_3 + 0x330);
    lVar23 = (long)iVar25;
    sVar12 = *(short *)(param_3 + 0x4da);
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar25) {
      FUN_02e7f7cc(lVar22,PTR_PTR_047d1a50,lVar23 + 1);
      iVar25 = *(int *)(param_3 + 0x330);
    }
    psVar2 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar25 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar23 + 1);
    *psVar2 = sVar11;
    psVar2[1] = sVar12;
    if (plVar15[1] != 0) {
      do {
        lVar22 = *plVar30;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar9) {
          *plVar30 = lVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    if (plVar21[1] != 0) {
      do {
        lVar22 = *plVar17;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *plVar17 = lVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
  }
  if (param_4 == (long *)0x0) {
    FUN_02fbf1f0(*(undefined8 *)(param_1 + 0x178),param_2,puVar29,*(undefined8 *)(param_1 + 0x10));
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x118) == '\0') {
      lVar22 = *(long *)(param_1 + 0x6a0);
      lVar23 = *(long *)(*(long *)(lVar22 + 0x28) + 0x178);
      iVar25 = *(int *)(lVar23 + 0x28);
      if (0 < iVar25) {
        uVar27 = 0;
        lVar24 = 4;
        do {
          if ((*(int *)(*(long *)(lVar23 + 0x20) + lVar24) != 0) &&
             (*(int *)(*(long *)(lVar22 + 0x40) + lVar24) == 0)) {
            FUN_02fbfc68(*(long *)(*(long *)(lVar22 + 0x28) + 0x178) + 0x68,
                         *(undefined8 *)(lVar22 + 0x30),*(long *)(lVar22 + 0x28) + 0x180,
                         uVar27 & 0xffffffff,*(undefined2 *)(lVar22 + 0x60),
                         *(undefined2 *)(lVar22 + 0x62));
            iVar25 = *(int *)(lVar23 + 0x28);
          }
          uVar27 = uVar27 + 1;
          lVar24 = lVar24 + 8;
        } while ((long)uVar27 < (long)iVar25);
      }
    }
    else {
      lVar22 = *(long *)(param_1 + 0x178);
      uVar6 = *(uint *)(lVar22 + 0x70);
      if ((int)uVar6 < 0) {
        uVar27 = (long)(int)uVar6 * 0x20;
        plVar17 = *(long **)(lVar22 + 0x68);
        uVar18 = (0xe0U - (int)uVar27 >> 5) + 1;
        *(undefined4 *)(lVar22 + 0x70) = 0;
        puVar5 = PTR_DAT_047e4988;
        plVar21 = plVar17 + (long)(int)uVar6 * 4;
        if ((uVar18 & 7) != 0) {
          lVar23 = -((ulong)uVar18 & 7);
          puVar4 = PTR_DAT_047e4988 + 0x10;
          plVar15 = plVar21;
          do {
            bVar9 = lVar23 != -1;
            lVar23 = lVar23 + 1;
            plVar21 = plVar15 + 4;
            *plVar15 = (long)puVar4;
            plVar15 = plVar21;
          } while (bVar9);
        }
        if (uVar27 < 0xffffffffffffff01) {
          puVar5 = puVar5 + 0x10;
          do {
            *plVar21 = (long)puVar5;
            plVar21[4] = (long)puVar5;
            plVar21[8] = (long)puVar5;
            plVar21[0xc] = (long)puVar5;
            plVar21[0x10] = (long)puVar5;
            plVar21[0x14] = (long)puVar5;
            plVar21[0x18] = (long)puVar5;
            plVar21[0x1c] = (long)puVar5;
            plVar21 = plVar21 + 0x20;
          } while (plVar21 != plVar17);
        }
      }
      else if (uVar6 != 0) {
        lVar24 = *(long *)(lVar22 + 0x68);
        lVar23 = (ulong)uVar6 << 5;
        *(undefined4 *)(lVar22 + 0x70) = 0;
        do {
          (**(code **)(*(long *)(lVar24 + -0x20 + lVar23) + 8))();
          lVar23 = lVar23 + -0x20;
        } while (lVar23 != 0);
      }
      FUN_02fbf9a8(lVar22 + 0x68,param_2,puVar29);
    }
    plVar21 = *(long **)(param_1 + 0x6a0);
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    if ((plVar21 != (long *)0x0) && (plVar21[1] != 0)) {
      plVar17 = plVar21 + 2;
      do {
        lVar22 = *plVar17;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *plVar17 = lVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))();
      }
    }
  }
  else {
    lVar22 = tpidr_el0;
    lVar23 = *(long *)(lVar22 + 0x1000b8);
    if (lVar23 == 0) {
      lVar23 = FUN_00e5d3b4();
      *(long *)(lVar22 + 0x1000b8) = lVar23;
    }
    plVar21 = *(long **)(lVar23 + 0x3e0);
    if (plVar21 != (long *)0x0) {
      lVar22 = *plVar21;
      if (*(code **)(lVar22 + 0x18) != (code *)0x0) {
        (**(code **)(lVar22 + 0x18))("PreSolve",8,*(undefined8 *)(lVar22 + 0x28));
      }
      puVar14 = (undefined8 *)plVar21[2];
      uVar27 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)plVar21[3]) && (plVar21[2] = uVar27, puVar14 != (undefined8 *)0x0)) {
        *puVar14 = "TtPreSolve";
        uVar16 = nn::os::GetSystemTick();
        puVar14[1] = uVar16;
      }
      if (((*(byte *)(lVar22 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
        puVar14 = (undefined8 *)plVar21[2];
        uVar27 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
        if ((uVar27 <= (ulong)plVar21[3]) && (plVar21[2] = uVar27, puVar14 != (undefined8 *)0x0)) {
          *puVar14 = &DAT_03c4e575;
          puVar14[1] = *(undefined8 *)(plVar21[6] + 8);
        }
      }
    }
    puVar5 = PTR_DAT_047d1a08;
    local_68 = 0x510;
    plVar17 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar17,"hkReferencedTask");
    }
    plVar30 = plVar17 + 2;
    *plVar30 = 1;
    *plVar17 = (long)&PTR_LAB_04611660;
    plVar17[1] = 0xffffffff;
    plVar17[9] = (long)(PTR_DAT_047ddb80 + 0x10);
    plVar17[10] = 0xffffffff;
    plVar17[0xb] = 1;
    plVar17[0xc] = (long)(plVar17 + 0xe);
    plVar17[0x6e] = (long)(plVar17 + 0x70);
    plVar17[0xd] = -0x7fffffe000000000;
    plVar17[0x6f] = -0x7fffffe000000000;
    plVar17[0x80] = (long)(plVar17 + 0x82);
    plVar17[0x81] = -0x7fffffe000000000;
    plVar17[6] = param_1;
    plVar17[7] = (long)param_2;
    plVar17[4] = (long)&PTR_LAB_046116a8;
    plVar17[5] = (long)param_4;
    (**(code **)(*param_4 + 0x18))(param_4,plVar17 + 8,1,8);
    (**(code **)(*param_4 + 0x28))(param_4,plVar17[8],0,0x40);
    plVar15 = (long *)(*(long *)(param_3 + 0x18) + (ulong)*(ushort *)(param_3 + 0x4da) * 0x18 + 0x10
                      );
    lVar22 = *plVar15;
    if (lVar22 == 0) {
      (**(code **)(*param_4 + 0x18))(param_4,plVar15,1,8);
      lVar22 = *plVar15;
    }
    (**(code **)(*param_4 + 0x40))(param_4,plVar17[8],lVar22);
    sVar12 = FUN_0323f360(param_3,plVar17,0x40);
    if (plVar17[1] != 0) {
      do {
        lVar22 = *plVar30;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar9) {
          *plVar30 = lVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
    if (plVar21 != (long *)0x0) {
      lVar22 = *plVar21;
      if (((*(byte *)(lVar22 + 0x38) & 1) != 0) && (plVar21[6] != 0)) {
        puVar14 = (undefined8 *)plVar21[2];
        uVar27 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
        if ((uVar27 <= (ulong)plVar21[3]) && (plVar21[2] = uVar27, puVar14 != (undefined8 *)0x0)) {
          *puVar14 = &DAT_03c4e575;
          puVar14[1] = *(undefined8 *)(plVar21[6] + 8);
        }
      }
      puVar14 = (undefined8 *)plVar21[2];
      uVar27 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)plVar21[3]) && (plVar21[2] = uVar27, puVar14 != (undefined8 *)0x0)) {
        *puVar14 = &DAT_03c2d363;
        uVar16 = nn::os::GetSystemTick();
        puVar14[1] = uVar16;
      }
      if (*(code **)(lVar22 + 0x20) != (code *)0x0) {
        (**(code **)(lVar22 + 0x20))(*(undefined8 *)(lVar22 + 0x28));
      }
    }
    if ((sVar12 != -1) && (sVar11 = *(short *)(param_3 + 0x4d8), sVar11 != -1)) {
      iVar25 = *(int *)(param_3 + 0x330);
      lVar22 = (long)iVar25;
      if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar25) {
        FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar22 + 1);
        iVar25 = *(int *)(param_3 + 0x330);
      }
      psVar2 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar25 * 4);
      *(int *)(param_3 + 0x330) = (int)(lVar22 + 1);
      *psVar2 = sVar11;
      psVar2[1] = sVar12;
    }
    iVar25 = *(int *)(param_3 + 0x330);
    lVar22 = (long)iVar25;
    sVar11 = *(short *)(param_3 + 0x4da);
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar25) {
      FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar22 + 1);
      iVar25 = *(int *)(param_3 + 0x330);
    }
    psVar2 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar25 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar22 + 1);
    *psVar2 = sVar12;
    psVar2[1] = sVar11;
    if ((sVar10 != -1) && (sVar12 != -1)) {
      iVar25 = *(int *)(param_3 + 0x330);
      lVar22 = (long)iVar25;
      if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar25) {
        FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar22 + 1);
        iVar25 = *(int *)(param_3 + 0x330);
      }
      psVar2 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar25 * 4);
      *(int *)(param_3 + 0x330) = (int)(lVar22 + 1);
      *psVar2 = sVar12;
      psVar2[1] = sVar10;
    }
  }
  uVar13 = FUN_0323f458(param_3,*(undefined8 *)(param_1 + 0x690),(int)param_2[1],1,0x40);
  iVar25 = *(int *)(param_3 + 0x330);
  lVar22 = (long)iVar25;
  uVar7 = *(undefined2 *)(param_3 + 0x4da);
  *(undefined2 *)(param_3 + 0x4dc) = uVar13;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar25) {
    FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar22 + 1);
    iVar25 = *(int *)(param_3 + 0x330);
  }
  puVar1 = (undefined2 *)(*(long *)(param_3 + 0x328) + (long)iVar25 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar22 + 1);
  *puVar1 = uVar7;
  puVar1[1] = uVar13;
  *(long *)(*(long *)(param_1 + 0x698) + 0x28) = lVar28;
  *(long *)(*(long *)(param_1 + 0x698) + 0x30) = param_1;
  iVar25 = *(int *)(param_3 + 0x20);
  lVar28 = 0;
  if (*(long *)(param_1 + 0x698) != 0) {
    lVar28 = *(long *)(param_1 + 0x698) + 0x20;
  }
  iVar19 = iVar25;
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= iVar25) {
    FUN_0323ff70(param_3 + 0x18,PTR_PTR_047d1a50,(long)iVar25 + 1);
    iVar19 = *(int *)(param_3 + 0x20);
  }
  plVar21 = (long *)(*(long *)(param_3 + 0x18) + (long)iVar19 * 0x18);
  *(int *)(param_3 + 0x20) = (int)((long)iVar25 + 1);
  *(undefined2 *)(plVar21 + 1) = 1;
  *plVar21 = lVar28;
  *(undefined1 *)((long)plVar21 + 10) = 0x40;
  plVar21[2] = 0;
  iVar19 = *(int *)(param_3 + 0x330);
  lVar28 = (long)iVar19;
  uVar7 = *(undefined2 *)(param_3 + 0x4dc);
  *(short *)(param_3 + 0x4e0) = (short)iVar25;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar19) {
    FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar28 + 1);
    iVar19 = *(int *)(param_3 + 0x330);
  }
  puVar1 = (undefined2 *)(*(long *)(param_3 + 0x328) + (long)iVar19 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar28 + 1);
  *puVar1 = uVar7;
  puVar1[1] = (short)iVar25;
  uVar6 = *puVar29;
  lVar28 = *(long *)(*(long *)(*param_2 + (long)(int)uVar6 * 8) + 8);
  uVar27 = *(ulong *)(lVar28 + 0x7f0);
  while (plVar21 = (long *)(uVar27 & 0xfffffffffffffffc), plVar21 != (long *)0x0) {
    uVar27 = plVar21[1];
    if ((uVar27 & 3) == 0) {
      (**(code **)(*plVar21 + 0x20))(plVar21,lVar28,uVar6);
    }
  }
  uVar18 = *(uint *)(param_2 + 0x22);
  lVar28 = (long)(int)uVar6 * 4;
  DataMemoryBarrier(2,3);
  *(uint *)((long)param_2 + lVar28 + 0x114) = uVar18 & 0x1ff;
  uVar20 = *puVar3;
  if (uVar20 == uVar18) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar9) {
      *puVar3 = uVar18 & 0xfffffe00 | uVar6;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)param_2 + lVar28 + 0x114) = uVar20 & 0x1ff;
    uVar18 = *puVar3;
    if (uVar18 == uVar20) {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar9) {
        *puVar3 = uVar20 & 0xfffffe00 | uVar6;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_02fa5d98;
      bVar9 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02fa5d98:
      bVar9 = false;
    }
    uVar20 = uVar18;
    if (bVar9) {
      return;
    }
  } while( true );
}


