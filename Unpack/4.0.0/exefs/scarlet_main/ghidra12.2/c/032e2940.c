/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032e2940; name: FUN_032e2940
 */


void FUN_032e2940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 local_140;
  undefined8 local_130;
  ulong *local_128;
  long local_120;
  byte *pbStack_118;
  undefined8 local_110;
  ulong local_108;
  undefined8 local_f8;
  byte *local_f0;
  ulong local_e8;
  undefined1 auStack_d0 [16];
  ulong local_c0;
  undefined1 auStack_a8 [16];
  ulong local_98;
  undefined1 auStack_80 [32];
  
  FUN_03325b88(auStack_d0,param_1,param_3);
  FUN_033234d0(auStack_a8,auStack_d0);
  if ((local_c0 & 1) != 0) {
    plVar8 = (long *)(local_c0 & 0xfffffffffffffffe);
    plVar22 = plVar8 + 1;
    do {
      lVar23 = *plVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  FUN_03325b88(&local_f8,param_1,param_2);
  FUN_033234d0(auStack_d0,&local_f8);
  if ((local_e8 & 1) != 0) {
    plVar8 = (long *)(local_e8 & 0xfffffffffffffffe);
    plVar22 = plVar8 + 1;
    do {
      lVar23 = *plVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  FUN_03325b88(&local_f8,auStack_a8,"translation");
  puVar10 = (undefined8 *)PTR_DAT_047e6240;
  do {
    uVar17 = (uint)*puVar10;
    if ((uVar17 >> 0xb & 1) != 0) {
      uVar18 = CONCAT44(uVar17,uVar17) & 0x7ff000007ff;
      if ((code *)puVar10[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8))) + 2]
          == (code *)0x0) {
        auVar25._8_8_ = PTR_DAT_047e6240;
        auVar25._0_8_ = auStack_80;
        goto LAB_032e2a9c;
      }
      auVar25 = (*(code *)puVar10[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                               POPCOUNT((char)(uVar18 >> 8))) + 2])(auStack_80);
      if (auVar25._8_8_ != 0) goto LAB_032e2a9c;
      auVar25 = ZEXT816(0);
      uVar18 = 0;
      goto LAB_032e2b9c;
    }
    puVar10 = (undefined8 *)puVar10[1];
  } while (puVar10 != (undefined8 *)0x0);
  auVar25._8_8_ = PTR_DAT_047e6240;
  auVar25._0_8_ = auStack_80;
LAB_032e2a9c:
  local_128 = auVar25._8_8_;
  puVar11 = local_128;
LAB_032e2aa0:
  uVar18 = *puVar11;
  if (((uint)uVar18 >> 2 & 1) == 0) goto code_r0x032e2aa8;
  uVar18 = puVar11[(uVar18 >> 1 & 1) + (uVar18 & 1) + 2];
  if ((uVar18 & 1) != 0) {
    plVar8 = (long *)(uVar18 & 0xfffffffffffffffe);
    plVar22 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((*local_128 & 1) == 0) {
      do {
        local_128 = (ulong *)local_128[1];
      } while ((*local_128 & 1) == 0);
    }
    if ((local_128[2] & 0x1f) == 8) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *(int *)plVar22 = (int)*plVar22 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      auVar25 = ZEXT816(0);
      uVar18 = 0;
    }
    do {
      lVar23 = *plVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
    goto LAB_032e2b9c;
  }
  goto LAB_032e2b28;
code_r0x032e2aa8:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e2ab0;
  goto LAB_032e2aa0;
code_r0x032e2ab0:
  uVar18 = 0;
LAB_032e2b28:
  if ((*local_128 & 1) == 0) {
    do {
      local_128 = (ulong *)local_128[1];
    } while ((*local_128 & 1) == 0);
  }
  if ((local_128[2] & 0x1f) != 8) {
    uVar18 = 0;
    auVar25 = ZEXT816(0);
  }
LAB_032e2b9c:
  local_128 = auVar25._8_8_;
  local_130 = auVar25._0_8_;
  pbVar15 = local_f0;
  if (local_f0 != (byte *)0x0) {
    pbVar12 = local_f0;
    if ((*local_f0 & 1) == 0) {
      do {
        pbVar12 = *(byte **)(pbVar12 + 8);
      } while ((*pbVar12 & 1) == 0);
    }
    if ((*(ulong *)(pbVar12 + 0x10) & 0x1f) == 8) {
      local_140 = local_f8;
      uVar16 = local_e8;
      if ((local_e8 & 1) != 0) {
        piVar1 = (int *)((local_e8 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_032e2c14;
    }
    pbVar15 = (byte *)0x0;
  }
  local_140 = 0;
  uVar16 = 0;
LAB_032e2c14:
  iVar19 = 0;
  plVar8 = (long *)(uVar16 & 0xfffffffffffffffe);
  plVar22 = (long *)(uVar18 & 0xfffffffffffffffe);
  do {
    local_110 = 0;
    local_108 = 0;
    local_120 = 0;
    pbStack_118 = (byte *)0x0;
    (**(code **)(*plVar8 + 0x50))(plVar8,local_140,pbVar15,&local_120);
    if (iVar19 < (int)local_110) {
      lVar23 = local_120 + (long)local_110._4_4_ * (long)iVar19;
      uVar21 = local_108;
      pbVar12 = pbStack_118;
      if ((local_108 & 1) != 0) {
        piVar1 = (int *)((local_108 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      lVar23 = 0;
      uVar21 = 0;
      pbVar12 = (byte *)0x0;
    }
    if ((local_108 & 1) != 0) {
      plVar9 = (long *)(local_108 & 0xfffffffffffffffe);
      plVar20 = plVar9 + 1;
      do {
        lVar24 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if (pbVar12 == (byte *)0x0) {
LAB_032e2d38:
      lVar23 = 0;
      uVar5 = 0;
    }
    else {
      pbVar13 = pbVar12;
      if ((*pbVar12 & 1) == 0) {
        do {
          pbVar13 = *(byte **)(pbVar13 + 8);
        } while ((*pbVar13 & 1) == 0);
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 5) {
        pbVar12 = (byte *)0x0;
        goto LAB_032e2d38;
      }
      uVar5 = uVar21;
      if ((uVar21 & 1) != 0) {
        piVar1 = (int *)((uVar21 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if ((uVar21 & 1) != 0) {
      plVar9 = (long *)(uVar21 & 0xfffffffffffffffe);
      plVar20 = plVar9 + 1;
      do {
        lVar24 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    local_110 = 0;
    local_108 = 0;
    local_120 = 0;
    pbStack_118 = (byte *)0x0;
    (**(code **)(*plVar22 + 0x50))(plVar22,local_130,local_128,&local_120);
    if (iVar19 < (int)local_110) {
      lVar24 = local_120 + (long)local_110._4_4_ * (long)iVar19;
      uVar21 = local_108;
      pbVar13 = pbStack_118;
      if ((local_108 & 1) != 0) {
        piVar1 = (int *)((local_108 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      lVar24 = 0;
      uVar21 = 0;
      pbVar13 = (byte *)0x0;
    }
    if ((local_108 & 1) != 0) {
      plVar9 = (long *)(local_108 & 0xfffffffffffffffe);
      plVar20 = plVar9 + 1;
      do {
        lVar7 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar7 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if (pbVar13 == (byte *)0x0) {
LAB_032e2e7c:
      lVar24 = 0;
      uVar6 = 0;
    }
    else {
      pbVar14 = pbVar13;
      if ((*pbVar13 & 1) == 0) {
        do {
          pbVar14 = *(byte **)(pbVar14 + 8);
        } while ((*pbVar14 & 1) == 0);
      }
      if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 5) {
        pbVar13 = (byte *)0x0;
        goto LAB_032e2e7c;
      }
      uVar6 = uVar21;
      if ((uVar21 & 1) != 0) {
        piVar1 = (int *)((uVar21 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if ((uVar21 & 1) != 0) {
      plVar9 = (long *)(uVar21 & 0xfffffffffffffffe);
      plVar20 = plVar9 + 1;
      do {
        lVar7 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar7 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    local_120 = 0;
    plVar20 = (long *)(uVar5 & 0xfffffffffffffffe);
    (**(code **)(*plVar20 + 0x38))(plVar20,lVar23,pbVar12,&local_120);
    plVar9 = (long *)(uVar6 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x30))(local_120,plVar9,lVar24,pbVar13);
    if ((uVar6 & 1) != 0) {
      plVar2 = plVar9 + 1;
      do {
        lVar23 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar23 == 1)) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
    if ((uVar5 & 1) != 0) {
      plVar9 = plVar20 + 1;
      do {
        lVar23 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)lVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar20 != (long *)0x0) && ((int)lVar23 == 1)) {
        (**(code **)(*plVar20 + 8))(plVar20);
      }
    }
    iVar19 = iVar19 + 1;
  } while (iVar19 != 4);
  if ((uVar16 & 1) != 0) {
    plVar20 = plVar8 + 1;
    do {
      lVar23 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = (int)lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  if ((uVar18 & 1) != 0) {
    plVar8 = plVar22 + 1;
    do {
      lVar23 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar22 != (long *)0x0) && ((int)lVar23 == 1)) {
      (**(code **)(*plVar22 + 8))(plVar22);
    }
  }
  FUN_03325b88(&local_120,auStack_d0,"translation");
  FUN_03286e14(&local_120,auStack_80,4);
  if ((local_110 & 1) != 0) {
    plVar8 = (long *)(local_110 & 0xfffffffffffffffe);
    plVar22 = plVar8 + 1;
    do {
      lVar23 = *plVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if ((local_e8 & 1) != 0) {
    plVar8 = (long *)(local_e8 & 0xfffffffffffffffe);
    plVar22 = plVar8 + 1;
    do {
      lVar23 = *plVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  FUN_03325b88(&local_f8,auStack_a8,"rotation");
  puVar10 = (undefined8 *)PTR_DAT_047e6240;
  do {
    uVar17 = (uint)*puVar10;
    if ((uVar17 >> 0xb & 1) != 0) {
      uVar18 = CONCAT44(uVar17,uVar17) & 0x7ff000007ff;
      if ((code *)puVar10[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8))) + 2]
          == (code *)0x0) {
        auVar26._8_8_ = PTR_DAT_047e6240;
        auVar26._0_8_ = auStack_80;
        goto LAB_032e3100;
      }
      auVar26 = (*(code *)puVar10[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                               POPCOUNT((char)(uVar18 >> 8))) + 2])(auStack_80);
      if (auVar26._8_8_ != 0) goto LAB_032e3100;
      auVar26 = ZEXT816(0);
      uVar18 = 0;
      goto LAB_032e3200;
    }
    puVar10 = (undefined8 *)puVar10[1];
  } while (puVar10 != (undefined8 *)0x0);
  auVar26._8_8_ = PTR_DAT_047e6240;
  auVar26._0_8_ = auStack_80;
LAB_032e3100:
  local_128 = auVar26._8_8_;
  puVar11 = local_128;
LAB_032e3104:
  uVar18 = *puVar11;
  if (((uint)uVar18 >> 2 & 1) == 0) goto code_r0x032e310c;
  uVar18 = puVar11[(uVar18 >> 1 & 1) + (uVar18 & 1) + 2];
  if ((uVar18 & 1) != 0) {
    plVar8 = (long *)(uVar18 & 0xfffffffffffffffe);
    plVar22 = plVar8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((*local_128 & 1) == 0) {
      do {
        local_128 = (ulong *)local_128[1];
      } while ((*local_128 & 1) == 0);
    }
    if ((local_128[2] & 0x1f) == 8) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *(int *)plVar22 = (int)*plVar22 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      auVar26 = ZEXT816(0);
      uVar18 = 0;
    }
    do {
      lVar23 = *plVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
    goto LAB_032e3200;
  }
  goto LAB_032e318c;
code_r0x032e310c:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto code_r0x032e3114;
  goto LAB_032e3104;
code_r0x032e3114:
  uVar18 = 0;
LAB_032e318c:
  if ((*local_128 & 1) == 0) {
    do {
      local_128 = (ulong *)local_128[1];
    } while ((*local_128 & 1) == 0);
  }
  if ((local_128[2] & 0x1f) != 8) {
    uVar18 = 0;
    auVar26 = ZEXT816(0);
  }
LAB_032e3200:
  local_128 = auVar26._8_8_;
  local_130 = auVar26._0_8_;
  if (local_f0 != (byte *)0x0) {
    pbVar15 = local_f0;
    if ((*local_f0 & 1) == 0) {
      do {
        pbVar15 = *(byte **)(pbVar15 + 8);
      } while ((*pbVar15 & 1) == 0);
    }
    if ((*(ulong *)(pbVar15 + 0x10) & 0x1f) == 8) {
      local_140 = local_f8;
      uVar16 = local_e8;
      pbVar15 = local_f0;
      if ((local_e8 & 1) != 0) {
        piVar1 = (int *)((local_e8 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_032e3278;
    }
    local_f0 = (byte *)0x0;
  }
  local_140 = 0;
  uVar16 = 0;
  pbVar15 = local_f0;
LAB_032e3278:
  iVar19 = 0;
  plVar8 = (long *)(uVar16 & 0xfffffffffffffffe);
  plVar22 = (long *)(uVar18 & 0xfffffffffffffffe);
  do {
    local_110 = 0;
    local_108 = 0;
    local_120 = 0;
    pbStack_118 = (byte *)0x0;
    (**(code **)(*plVar8 + 0x50))(plVar8,local_140,pbVar15,&local_120);
    if (iVar19 < (int)local_110) {
      lVar23 = local_120 + (long)local_110._4_4_ * (long)iVar19;
      uVar21 = local_108;
      pbVar12 = pbStack_118;
      if ((local_108 & 1) != 0) {
        piVar1 = (int *)((local_108 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      lVar23 = 0;
      uVar21 = 0;
      pbVar12 = (byte *)0x0;
    }
    if ((local_108 & 1) != 0) {
      plVar9 = (long *)(local_108 & 0xfffffffffffffffe);
      plVar20 = plVar9 + 1;
      do {
        lVar24 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if (pbVar12 == (byte *)0x0) {
LAB_032e339c:
      lVar23 = 0;
      uVar5 = 0;
    }
    else {
      pbVar13 = pbVar12;
      if ((*pbVar12 & 1) == 0) {
        do {
          pbVar13 = *(byte **)(pbVar13 + 8);
        } while ((*pbVar13 & 1) == 0);
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 5) {
        pbVar12 = (byte *)0x0;
        goto LAB_032e339c;
      }
      uVar5 = uVar21;
      if ((uVar21 & 1) != 0) {
        piVar1 = (int *)((uVar21 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if ((uVar21 & 1) != 0) {
      plVar9 = (long *)(uVar21 & 0xfffffffffffffffe);
      plVar20 = plVar9 + 1;
      do {
        lVar24 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)lVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    local_110 = 0;
    local_108 = 0;
    local_120 = 0;
    pbStack_118 = (byte *)0x0;
    (**(code **)(*plVar22 + 0x50))(plVar22,local_130,local_128,&local_120);
    if (iVar19 < (int)local_110) {
      lVar24 = local_120 + (long)local_110._4_4_ * (long)iVar19;
      uVar21 = local_108;
      pbVar13 = pbStack_118;
      if ((local_108 & 1) != 0) {
        piVar1 = (int *)((local_108 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      lVar24 = 0;
      uVar21 = 0;
      pbVar13 = (byte *)0x0;
    }
    if ((local_108 & 1) != 0) {
      plVar9 = (long *)(local_108 & 0xfffffffffffffffe);
      plVar20 = plVar9 + 1;
      do {
        lVar7 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar7 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if (pbVar13 == (byte *)0x0) {
LAB_032e34e0:
      lVar24 = 0;
      uVar6 = 0;
    }
    else {
      pbVar14 = pbVar13;
      if ((*pbVar13 & 1) == 0) {
        do {
          pbVar14 = *(byte **)(pbVar14 + 8);
        } while ((*pbVar14 & 1) == 0);
      }
      if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 5) {
        pbVar13 = (byte *)0x0;
        goto LAB_032e34e0;
      }
      uVar6 = uVar21;
      if ((uVar21 & 1) != 0) {
        piVar1 = (int *)((uVar21 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if ((uVar21 & 1) != 0) {
      plVar9 = (long *)(uVar21 & 0xfffffffffffffffe);
      plVar20 = plVar9 + 1;
      do {
        lVar7 = *plVar20;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *(int *)plVar20 = (int)lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar7 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    local_120 = 0;
    plVar20 = (long *)(uVar5 & 0xfffffffffffffffe);
    (**(code **)(*plVar20 + 0x38))(plVar20,lVar23,pbVar12,&local_120);
    plVar9 = (long *)(uVar6 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x30))(local_120,plVar9,lVar24,pbVar13);
    if ((uVar6 & 1) != 0) {
      plVar2 = plVar9 + 1;
      do {
        lVar23 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar23 == 1)) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
    if ((uVar5 & 1) != 0) {
      plVar9 = plVar20 + 1;
      do {
        lVar23 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)lVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar20 != (long *)0x0) && ((int)lVar23 == 1)) {
        (**(code **)(*plVar20 + 8))(plVar20);
      }
    }
    iVar19 = iVar19 + 1;
    if (iVar19 == 4) {
      if ((uVar16 & 1) != 0) {
        plVar20 = plVar8 + 1;
        do {
          lVar23 = *plVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = (int)lVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
      if ((uVar18 & 1) != 0) {
        plVar8 = plVar22 + 1;
        do {
          lVar23 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = (int)lVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar22 != (long *)0x0) && ((int)lVar23 == 1)) {
          (**(code **)(*plVar22 + 8))(plVar22);
        }
      }
      FUN_03325b88(&local_120,auStack_d0,"rotation");
      FUN_03286e14(&local_120,auStack_80,4);
      if ((local_110 & 1) != 0) {
        plVar8 = (long *)(local_110 & 0xfffffffffffffffe);
        plVar22 = plVar8 + 1;
        do {
          lVar23 = *plVar22;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *(int *)plVar22 = (int)lVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      if ((local_e8 & 1) != 0) {
        plVar8 = (long *)(local_e8 & 0xfffffffffffffffe);
        plVar22 = plVar8 + 1;
        do {
          lVar23 = *plVar22;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *(int *)plVar22 = (int)lVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      if ((local_c0 & 1) != 0) {
        plVar8 = (long *)(local_c0 & 0xfffffffffffffffe);
        plVar22 = plVar8 + 1;
        do {
          lVar23 = *plVar22;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *(int *)plVar22 = (int)lVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      if ((local_98 & 1) != 0) {
        plVar8 = (long *)(local_98 & 0xfffffffffffffffe);
        plVar22 = plVar8 + 1;
        do {
          lVar23 = *plVar22;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *(int *)plVar22 = (int)lVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar23 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      return;
    }
  } while( true );
}


