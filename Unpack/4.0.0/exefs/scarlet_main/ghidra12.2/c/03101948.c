/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03101948; name: FUN_03101948
 */


void FUN_03101948(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  MutexType *pMVar21;
  long lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long *local_270;
  undefined8 local_268;
  long alStack_260 [2];
  long local_250;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  
  plVar19 = *(long **)(param_1 + 0x38);
  if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
    plVar14 = plVar19 + 2;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *plVar14 = *plVar14 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  switch(*(undefined1 *)(param_3 + 0x5c)) {
  case 0:
    local_a0 = 1;
    uStack_98 = 0;
    local_90 = &local_270;
    local_b0 = PTR_DAT_047e34b8 + 0x10;
    uStack_a8 = 0xffffffff;
    local_88 = 0;
    local_78 = 0;
    local_80 = 0x1bf;
    memset(&local_270,0,0x1c0);
    FUN_0322bd4c(&local_b0,
                 "Output status shouldn\'t be SEARCH_IN_PROGRESS if path request is marked as processed."
                 ,0x55);
    iVar11 = FUN_03226f50(0x45c0fd69,&local_270,
                          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/Navigator/hkaiVolumeNavigator.cpp"
                          ,0x2fe);
    if (iVar11 != 0) {
      CallSupervisor(0x26);
    }
    break;
  case 1:
    uVar25 = *(undefined4 *)(param_3 + 0x50);
    uVar4 = *(undefined4 *)(*(long *)(param_2 + 0x48) + (long)*(int *)(param_3 + 0x54) * 4);
    puVar9 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)*(int *)(param_3 + 0x54) * 0x10);
    uVar30 = puVar9[1];
    uVar29 = *puVar9;
    uVar28 = *(undefined8 *)(param_2 + 0x28);
    uVar27 = *(undefined8 *)(param_2 + 0x20);
    iVar11 = (int)plVar19[0x37];
    lVar20 = (long)iVar11;
    uVar26 = *(undefined4 *)(param_2 + 0x40);
    uVar24 = *(undefined4 *)(param_3 + 0x58);
    if ((int)(*(uint *)((long)plVar19 + 0x1bc) & 0x7fffffff) <= iVar11) {
      FUN_03102564(plVar19 + 0x36,PTR_PTR_047d1a50,lVar20 + 1);
      iVar11 = (int)plVar19[0x37];
    }
    puVar16 = (undefined4 *)(plVar19[0x36] + (long)iVar11 * 0x60);
    bVar8 = false;
    *(int *)(plVar19 + 0x37) = (int)(lVar20 + 1);
    *(undefined8 *)(puVar16 + 0x14) = 0;
    *(undefined8 *)(puVar16 + 0x16) = 0x8000000000000000;
    uVar23 = 8;
    *puVar16 = 0;
    puVar16[0xc] = uVar26;
    puVar16[0xd] = uVar4;
    puVar16[0xe] = uVar24;
    puVar16[0xf] = uVar25;
    *(undefined8 *)(puVar16 + 6) = uVar28;
    *(undefined8 *)(puVar16 + 4) = uVar27;
    *(undefined8 *)(puVar16 + 10) = uVar30;
    *(undefined8 *)(puVar16 + 8) = uVar29;
LAB_03101cdc:
    puVar10 = PTR_DAT_047d1a08;
    local_270 = (long *)0x30;
    plVar14 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_270,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar14,"hkaiGatePath");
    }
    puVar1 = PTR_DAT_047e5210 + 0x10;
    *(undefined4 *)(plVar14 + 5) = 0;
    plVar14[2] = 1;
    plVar14[3] = 0;
    *plVar14 = (long)puVar1;
    plVar14[1] = 0xffffffff;
    plVar14[4] = -0x8000000000000000;
    plVar12 = (long *)plVar19[0x2e];
    plVar19[0x2e] = (long)plVar14;
    if (plVar12 != (long *)0x0) {
      if (plVar12[1] != 0) {
        plVar14 = plVar12 + 2;
        do {
          lVar20 = *plVar14;
          cVar7 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar20 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar20 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))();
        }
      }
      plVar14 = (long *)plVar19[0x2e];
    }
    FUN_03103530(plVar14,param_2,param_3,*(undefined8 *)(plVar19[0x23] + 0x130));
    lVar20 = plVar19[0x2f];
    plVar19[0x30] = 0;
    plVar19[0x31] = 0;
    *(undefined4 *)(plVar19 + 0x32) = 0xffffffff;
    *(undefined4 *)(plVar19 + 0x34) = 0xffffffff;
    *(undefined4 *)((long)plVar19 + 0x124) = uVar23;
    *(undefined2 *)(plVar19 + 0x25) = 0;
    *(undefined1 *)(plVar19 + 0x2d) = 0;
    if (lVar20 != 0) {
      pcVar2 = (char *)(lVar20 + 0x5c);
      do {
        cVar7 = *pcVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar5) {
          *pcVar2 = '\x04';
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (cVar7 == '\x01') {
        *(undefined1 *)(*(long *)(lVar20 + 0x60) + 0x20) = 3;
        plVar14 = *(long **)(lVar20 + 0x60);
        *(undefined8 *)(lVar20 + 0x60) = 0;
        if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
          plVar12 = plVar14 + 2;
          do {
            lVar20 = *plVar12;
            cVar7 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar20 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar20 + -1 == 0) {
            (**(code **)(*plVar14 + 0x18))();
          }
        }
      }
      plVar14 = (long *)plVar19[0x2f];
      plVar19[0x2f] = 0;
      if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
        plVar12 = plVar14 + 2;
        do {
          lVar20 = *plVar12;
          cVar7 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar20 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar20 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))();
        }
      }
    }
    lVar20 = plVar19[0x2e];
    local_270 = (long *)0xb0;
    plVar14 = (long *)(**(code **)puVar10)(0,&local_270,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar14,"NavigatorSettings");
    }
    plVar14[1] = 0xffffffff;
    plVar12 = plVar14 + 2;
    *plVar12 = 1;
    *plVar14 = (long)(PTR_DAT_047e51f8 + 0x10);
    memcpy(plVar14 + 4,plVar19 + 0x10,0x74);
    lVar22 = plVar19[0x20];
    plVar14[0x14] = lVar22;
    if ((lVar22 != 0) && (*(long *)(lVar22 + 8) != 0)) {
      plVar13 = (long *)(lVar22 + 0x10);
      do {
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    lVar22 = plVar19[0x21];
    plVar14[0x15] = lVar22;
    if ((lVar22 != 0) && (*(long *)(lVar22 + 8) != 0)) {
      plVar13 = (long *)(lVar22 + 0x10);
      do {
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    local_270 = (long *)0x70;
    lVar22 = (**(code **)puVar10)(0,&local_270,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(lVar22,"hkaiVolumeNavigatorStalenessChecker");
    }
    local_270 = plVar14;
    FUN_03102758(lVar22,lVar20,plVar19,plVar19 + 6,plVar19[4],
                 plVar19[4] + (long)(int)plVar19[5] * 0x10,&local_270);
    if (plVar14[1] != 0) {
      do {
        lVar20 = *plVar12;
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar20 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
    plVar14 = (long *)plVar19[0x2f];
    plVar19[0x2f] = lVar22;
    if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
      plVar12 = plVar14 + 2;
      do {
        lVar20 = *plVar12;
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar20 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))();
      }
    }
    goto joined_r0x03101fe8;
  case 2:
    uVar28 = *(undefined8 *)(param_2 + 0x28);
    uVar27 = *(undefined8 *)(param_2 + 0x20);
    iVar11 = (int)plVar19[0x37];
    lVar20 = (long)iVar11;
    uVar25 = *(undefined4 *)(param_2 + 0x40);
    uVar26 = *(undefined4 *)(param_3 + 0x50);
    uVar24 = *(undefined4 *)(param_3 + 0x58);
    if ((int)(*(uint *)((long)plVar19 + 0x1bc) & 0x7fffffff) <= iVar11) {
      FUN_03102564(plVar19 + 0x36,PTR_PTR_047d1a50,lVar20 + 1);
      iVar11 = (int)plVar19[0x37];
    }
    puVar16 = (undefined4 *)(plVar19[0x36] + (long)iVar11 * 0x60);
    *(int *)(plVar19 + 0x37) = (int)(lVar20 + 1);
    *(undefined8 *)(puVar16 + 0x14) = 0;
    *(undefined8 *)(puVar16 + 0x16) = 0x8000000000000000;
    *(undefined8 *)(puVar16 + 8) = 0;
    *(undefined8 *)(puVar16 + 10) = 0;
    puVar16[0xc] = uVar25;
    puVar16[0xd] = 0xffffffff;
    *puVar16 = 1;
    puVar16[0xe] = uVar24;
    puVar16[0xf] = uVar26;
    *(undefined8 *)(puVar16 + 6) = uVar28;
    *(undefined8 *)(puVar16 + 4) = uVar27;
    puVar16[0x10] = 2;
    break;
  case 3:
    cVar7 = *(char *)(param_3 + 0x5d);
    if ((int)plVar19[0x12] < 1 || cVar7 != '\x01') {
      uVar28 = *(undefined8 *)(param_2 + 0x28);
      uVar27 = *(undefined8 *)(param_2 + 0x20);
      uVar25 = *(undefined4 *)(param_2 + 0x40);
      iVar11 = *(int *)(param_3 + 0x50);
      uVar26 = *(undefined4 *)(param_3 + 0x58);
      if (cVar7 == '\x01') {
        uVar24 = 0;
      }
      else if (cVar7 == '\x02') {
        uVar24 = 1;
      }
      else {
        if (cVar7 != '\x03') {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar24 = 2;
      }
LAB_03101c60:
      iVar15 = (int)plVar19[0x37];
      lVar20 = (long)iVar15;
      if ((int)(*(uint *)((long)plVar19 + 0x1bc) & 0x7fffffff) <= iVar15) {
        FUN_03102564(plVar19 + 0x36,PTR_PTR_047d1a50,lVar20 + 1);
        iVar15 = (int)plVar19[0x37];
      }
      puVar16 = (undefined4 *)(plVar19[0x36] + (long)iVar15 * 0x60);
      bVar8 = false;
      *(int *)(plVar19 + 0x37) = (int)(lVar20 + 1);
      *(undefined8 *)(puVar16 + 0x14) = 0;
      *(undefined8 *)(puVar16 + 0x16) = 0x8000000000000000;
      uVar23 = 2;
      *puVar16 = 2;
      puVar16[0x10] = uVar24;
      *(undefined8 *)(puVar16 + 8) = 0;
      *(undefined8 *)(puVar16 + 10) = 0;
      puVar16[0xc] = uVar25;
      puVar16[0xd] = 0xffffffff;
      puVar16[0xe] = uVar26;
      puVar16[0xf] = iVar11;
      *(undefined8 *)(puVar16 + 6) = uVar28;
      *(undefined8 *)(puVar16 + 4) = uVar27;
    }
    else {
      iVar11 = *(int *)(param_3 + 0x50);
      if ((int)plVar19[0x12] <= iVar11) {
        uVar28 = *(undefined8 *)(param_2 + 0x28);
        uVar27 = *(undefined8 *)(param_2 + 0x20);
        uVar24 = 0;
        uVar25 = *(undefined4 *)(param_2 + 0x40);
        uVar26 = *(undefined4 *)(param_3 + 0x58);
        goto LAB_03101c60;
      }
      uVar23 = 1;
      bVar8 = true;
    }
    if ((*(byte *)(plVar19 + 0x3f) >> 1 & 1) != 0) goto LAB_03101cdc;
joined_r0x03101fe8:
    if (((bVar8) && ((char)plVar19[0x22] != '\0')) && ((int)plVar19[5] != 0)) {
      local_250 = 0;
      local_270 = alStack_260;
      local_268 = -0x7ffffffeffffffff;
      FUN_0310055c(plVar19,&local_270);
      lVar20 = *(long *)(plVar19[0x23] + 0x250);
      pMVar21 = *(MutexType **)(lVar20 + 0x28);
      lVar22 = plVar19[0x2c];
      nn::os::LockMutex(pMVar21);
      lVar20 = *(long *)(*(long *)(lVar20 + 0x18) + (ulong)*(byte *)(lVar22 + 0x18) * 8);
      if ((lVar22 != 0) && (*(long *)(lVar22 + 8) != 0)) {
        plVar14 = (long *)(lVar22 + 0x10);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = *plVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      iVar11 = *(int *)(lVar20 + 0x58);
      lVar18 = (long)iVar11;
      if ((int)(*(uint *)(lVar20 + 0x5c) & 0x7fffffff) <= iVar11) {
        FUN_030d1ea8(lVar20 + 0x50,PTR_PTR_047d1a50,lVar18 + 1);
        iVar11 = *(int *)(lVar20 + 0x58);
      }
      *(long *)(*(long *)(lVar20 + 0x50) + (long)iVar11 * 8) = lVar22;
      *(int *)(lVar20 + 0x58) = (int)(lVar18 + 1);
      nn::os::UnlockMutex(pMVar21);
      if (local_250 != 0) {
        plVar12 = local_270 + local_250 * 2;
        plVar14 = local_270;
        do {
          plVar13 = (long *)plVar14[1];
          if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
            plVar3 = plVar13 + 2;
            do {
              lVar20 = *plVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar8) {
                *plVar3 = lVar20 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar20 + -1 == 0) {
              (**(code **)(*plVar13 + 0x18))();
            }
          }
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar12);
      }
      lVar20 = local_268;
      uVar17 = (ulong)local_268._4_4_;
      local_268 = (ulong)local_268._4_4_ << 0x20;
      if ((-1 < lVar20) && (local_270 != (long *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_270,uVar17 << 4);
      }
    }
    break;
  case 4:
    local_a0 = 1;
    uStack_98 = 0;
    local_90 = &local_270;
    local_b0 = PTR_DAT_047e34b8 + 0x10;
    uStack_a8 = 0xffffffff;
    local_88 = 0;
    local_78 = 0;
    local_80 = 0x1bf;
    memset(&local_270,0,0x1c0);
    FUN_0322bd4c(&local_b0,"We don\'t expect result truncation in hkaiVolumeNavigator.",0x39);
    iVar11 = FUN_03226f50(0x16844053,&local_270,
                          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/Navigator/hkaiVolumeNavigator.cpp"
                          ,0x302);
    if (iVar11 != 0) {
      CallSupervisor(0x26);
    }
    break;
  case 5:
    break;
  default:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar18 = plVar19[0x23];
    lVar20 = *(long *)(param_1 + 0x48);
    lVar22 = (long)*(int *)(param_1 + 0x50) * 0x60;
    do {
      FUN_031059b0(lVar20,plVar19,lVar18 + 0x480,plVar19 + 0x38);
      lVar20 = lVar20 + 0x60;
      lVar22 = lVar22 + -0x60;
    } while (lVar22 != 0);
  }
  plVar14 = (long *)plVar19[0x2c];
  plVar19[0x2c] = 0;
  if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
    plVar12 = plVar14 + 2;
    do {
      lVar20 = *plVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar8) {
        *plVar12 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))();
    }
  }
  if (plVar19[1] != 0) {
    plVar14 = plVar19 + 2;
    do {
      lVar20 = *plVar14;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *plVar14 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x031021e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar19 + 0x18))(plVar19);
      return;
    }
  }
  return;
}


