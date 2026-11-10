/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0315dd34; name: FUN_0315dd34
 */


long FUN_0315dd34(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  size_t sVar10;
  long *plVar11;
  void *__dest;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  void *pvVar25;
  char *pcVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar13;
  memcpy((void *)(param_1 + 0x30),(void *)(param_2 + 0x30),0x5d);
  uVar13 = *(undefined8 *)(param_2 + 0x96);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x96) = uVar13;
  if (param_2 != param_1) {
    iVar15 = *(int *)(param_2 + 0xa8);
    pvVar25 = *(void **)(param_2 + 0xa0);
    if ((int)(*(uint *)(param_1 + 0xac) & 0x7fffffff) < iVar15) {
      FUN_02f0842c(param_1 + 0xa0,PTR_PTR_047d1a50,(long)iVar15);
    }
    memcpy(*(void **)(param_1 + 0xa0),pvVar25,(long)iVar15 << 4);
    *(int *)(param_1 + 0xa8) = iVar15;
    iVar15 = *(int *)(param_2 + 0xb8);
    pvVar25 = *(void **)(param_2 + 0xb0);
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar15) {
      FUN_0315e8c8(param_1 + 0xb0,PTR_PTR_047d1a50,(long)iVar15);
    }
    memcpy(*(void **)(param_1 + 0xb0),pvVar25,(long)iVar15 << 5);
    *(int *)(param_1 + 0xb8) = iVar15;
  }
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  uVar13 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar13;
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0xf8);
    lVar27 = *(long *)(param_2 + 0xf0);
    plVar19 = (long *)(param_1 + 0xf0);
    if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < (int)uVar2) {
      FUN_0315e974(plVar19,PTR_PTR_047d1a50,(long)(int)uVar2);
    }
    uVar12 = *(uint *)(param_1 + 0xf8);
    if ((int)uVar2 < (int)uVar12) {
      lVar16 = *plVar19;
      plVar14 = (long *)(lVar16 + (long)(int)uVar12 * 8);
      do {
        plVar14 = plVar14 + -1;
        plVar9 = (long *)*plVar14;
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar1 = plVar9 + 2;
          do {
            lVar17 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar17 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
      } while (plVar14 != (long *)(lVar16 + (long)(int)uVar2 * 8));
      uVar12 = *(uint *)(param_1 + 0xf8);
    }
    lVar16 = *plVar19;
    if ((int)uVar2 <= (int)uVar12) {
      uVar12 = uVar2;
    }
    if ((lVar16 != lVar27) && (0 < (int)uVar12)) {
      uVar29 = 0;
      do {
        plVar9 = *(long **)(lVar16 + uVar29 * 8);
        plVar14 = *(long **)(lVar27 + uVar29 * 8);
        if (plVar9 != plVar14) {
          if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
            plVar14 = plVar14 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = *plVar14 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar9 = *(long **)(lVar16 + uVar29 * 8);
            plVar14 = *(long **)(lVar27 + uVar29 * 8);
          }
          *(long **)(lVar16 + uVar29 * 8) = plVar14;
          if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
            plVar14 = plVar9 + 2;
            do {
              lVar17 = *plVar14;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = lVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar17 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar12);
      lVar16 = *plVar19;
    }
    if (0 < (int)(uVar2 - uVar12)) {
      iVar15 = 0;
      plVar19 = (long *)(lVar27 + (long)(int)uVar12 * 8);
      plVar14 = (long *)(lVar16 + (long)(int)uVar12 * 8);
      do {
        lVar27 = *plVar19;
        *plVar14 = lVar27;
        if ((lVar27 != 0) && (*(long *)(lVar27 + 8) != 0)) {
          plVar9 = (long *)(lVar27 + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        iVar15 = iVar15 + 1;
        plVar19 = plVar19 + 1;
        plVar14 = plVar14 + 1;
      } while (iVar15 != uVar2 - uVar12);
    }
    *(uint *)(param_1 + 0xf8) = uVar2;
    uVar2 = *(uint *)(param_2 + 0x108);
    lVar27 = *(long *)(param_2 + 0x100);
    plVar19 = (long *)(param_1 + 0x100);
    if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < (int)uVar2) {
      FUN_0315eacc(plVar19,PTR_PTR_047d1a50,(long)(int)uVar2);
    }
    uVar12 = *(uint *)(param_1 + 0x108);
    if ((int)uVar2 < (int)uVar12) {
      lVar16 = *plVar19;
      plVar14 = (long *)(lVar16 + (long)(int)uVar12 * 8);
      do {
        plVar14 = plVar14 + -1;
        plVar9 = (long *)*plVar14;
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar1 = plVar9 + 2;
          do {
            lVar17 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar17 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
      } while (plVar14 != (long *)(lVar16 + (long)(int)uVar2 * 8));
      uVar12 = *(uint *)(param_1 + 0x108);
    }
    lVar16 = *plVar19;
    if ((int)uVar2 <= (int)uVar12) {
      uVar12 = uVar2;
    }
    if ((lVar16 != lVar27) && (0 < (int)uVar12)) {
      uVar29 = 0;
      do {
        plVar9 = *(long **)(lVar16 + uVar29 * 8);
        plVar14 = *(long **)(lVar27 + uVar29 * 8);
        if (plVar9 != plVar14) {
          if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
            plVar14 = plVar14 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = *plVar14 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar9 = *(long **)(lVar16 + uVar29 * 8);
            plVar14 = *(long **)(lVar27 + uVar29 * 8);
          }
          *(long **)(lVar16 + uVar29 * 8) = plVar14;
          if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
            plVar14 = plVar9 + 2;
            do {
              lVar17 = *plVar14;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = lVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar17 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar12);
      lVar16 = *plVar19;
    }
    if (0 < (int)(uVar2 - uVar12)) {
      iVar15 = 0;
      plVar19 = (long *)(lVar27 + (long)(int)uVar12 * 8);
      plVar14 = (long *)(lVar16 + (long)(int)uVar12 * 8);
      do {
        lVar27 = *plVar19;
        *plVar14 = lVar27;
        if ((lVar27 != 0) && (*(long *)(lVar27 + 8) != 0)) {
          plVar9 = (long *)(lVar27 + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        iVar15 = iVar15 + 1;
        plVar19 = plVar19 + 1;
        plVar14 = plVar14 + 1;
      } while (iVar15 != uVar2 - uVar12);
    }
    *(uint *)(param_1 + 0x108) = uVar2;
    uVar13 = *(undefined8 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    *(undefined8 *)(param_1 + 0x110) = uVar13;
    uVar2 = *(uint *)(param_2 + 0x128);
    lVar27 = *(long *)(param_2 + 0x120);
    if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < (int)uVar2) {
      FUN_0315ec24((long *)(param_1 + 0x120),PTR_PTR_047d1a50,(long)(int)uVar2);
    }
    uVar3 = *(uint *)(param_1 + 0x128);
    lVar16 = *(long *)(param_1 + 0x120);
    uVar12 = uVar3;
    if ((int)uVar2 <= (int)uVar3) {
      uVar12 = uVar2;
    }
    if ((lVar16 != lVar27) && (0 < (int)uVar12)) {
      uVar24 = (ulong)uVar12;
      uVar29 = uVar24 & 3;
      if (uVar24 - 1 < 3) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        puVar20 = (undefined8 *)(lVar16 + 0x10);
        puVar23 = (undefined8 *)(lVar27 + 0x10);
        do {
          puVar20[-2] = puVar23[-2];
          puVar20[-1] = puVar23[-1];
          *puVar20 = *puVar23;
          puVar18 = puVar23 + 1;
          uVar22 = uVar22 + 4;
          puVar23 = puVar23 + 4;
          puVar20[1] = *puVar18;
          puVar20 = puVar20 + 4;
        } while ((uVar24 & 0xfffffffc) != uVar22);
      }
      if ((uVar12 & 3) != 0) {
        puVar20 = (undefined8 *)(lVar16 + uVar22 * 8);
        puVar23 = (undefined8 *)(lVar27 + uVar22 * 8);
        do {
          uVar29 = uVar29 - 1;
          *puVar20 = *puVar23;
          puVar20 = puVar20 + 1;
          puVar23 = puVar23 + 1;
        } while (uVar29 != 0);
      }
      lVar16 = *(long *)(param_1 + 0x120);
    }
    if ((int)uVar3 < (int)uVar2) {
      puVar20 = (undefined8 *)(lVar27 + (long)(int)uVar12 * 8);
      puVar23 = (undefined8 *)(lVar16 + (long)(int)uVar12 * 8);
      uVar3 = uVar2 - uVar12 & 3;
      if (2 < uVar2 + ~uVar12) {
        iVar15 = -(uVar2 - uVar12 & 0xfffffffc);
        puVar18 = puVar20;
        puVar21 = puVar23;
        do {
          *puVar21 = *puVar18;
          puVar21[1] = puVar18[1];
          puVar21[2] = puVar18[2];
          puVar20 = puVar18 + 4;
          puVar23 = puVar21 + 4;
          iVar15 = iVar15 + 4;
          puVar21[3] = puVar18[3];
          puVar18 = puVar20;
          puVar21 = puVar23;
        } while (iVar15 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar23 = *puVar20;
        puVar20 = puVar20 + 1;
        puVar23 = puVar23 + 1;
      }
    }
    *(uint *)(param_1 + 0x128) = uVar2;
  }
  memcpy((void *)(param_1 + 0x130),(void *)(param_2 + 0x130),0x27);
  memcpy((void *)(param_1 + 0x158),(void *)(param_2 + 0x158),0x55);
  memcpy((void *)(param_1 + 0x1b0),(void *)(param_2 + 0x1b0),0x28);
  if (param_2 != param_1) {
    iVar15 = *(int *)(param_2 + 0x1e0);
    pvVar25 = *(void **)(param_2 + 0x1d8);
    if ((int)(*(uint *)(param_1 + 0x1e4) & 0x7fffffff) < iVar15) {
      FUN_02f0842c(param_1 + 0x1d8,PTR_PTR_047d1a50,(long)iVar15);
    }
    memcpy(*(void **)(param_1 + 0x1d8),pvVar25,(long)iVar15 << 4);
    *(int *)(param_1 + 0x1e0) = iVar15;
  }
  *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_2 + 0x1e8);
  uVar29 = *(ulong *)(param_1 + 0x1f0);
  pcVar26 = (char *)(*(ulong *)(param_2 + 0x1f0) & 0xfffffffffffffffe);
  if ((char *)(uVar29 & 0xfffffffffffffffe) != pcVar26) {
    if (pcVar26 == (char *)0x0) {
      uVar24 = 0;
    }
    else {
      sVar10 = strlen(pcVar26);
      sVar10 = (size_t)((int)sVar10 + 1);
      pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar10);
      memcpy(pvVar25,pcVar26,sVar10);
      uVar24 = (ulong)pvVar25 | 1;
    }
    *(ulong *)(param_1 + 0x1f0) = uVar24;
    if ((uVar29 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar29 - 1,0);
    }
  }
  uVar13 = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined2 *)(param_1 + 0x200) = *(undefined2 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = uVar13;
  uVar29 = *(ulong *)(param_1 + 0x208);
  pcVar26 = (char *)(*(ulong *)(param_2 + 0x208) & 0xfffffffffffffffe);
  if ((char *)(uVar29 & 0xfffffffffffffffe) != pcVar26) {
    if (pcVar26 == (char *)0x0) {
      uVar24 = 0;
    }
    else {
      sVar10 = strlen(pcVar26);
      sVar10 = (size_t)((int)sVar10 + 1);
      pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar10);
      memcpy(pvVar25,pcVar26,sVar10);
      uVar24 = (ulong)pvVar25 | 1;
    }
    *(ulong *)(param_1 + 0x208) = uVar24;
    if ((uVar29 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar29 - 1,0);
    }
  }
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0x218);
    lVar27 = *(long *)(param_2 + 0x210);
    plVar19 = (long *)(param_1 + 0x210);
    if ((int)(*(uint *)(param_1 + 0x21c) & 0x7fffffff) < (int)uVar2) {
      FUN_0315ed34(plVar19,PTR_PTR_047d1a50,(long)(int)uVar2);
    }
    puVar8 = PTR_PTR_047d1a50;
    puVar7 = PTR_DAT_047d1a08;
    uVar12 = *(uint *)(param_1 + 0x218);
    if ((int)uVar2 < (int)uVar12) {
      lVar17 = *plVar19;
      lVar16 = lVar17 + (long)(int)uVar12 * 0xf0;
      do {
        if ((*(ulong *)(lVar16 + -8) & 1) != 0) {
          (**(code **)(puVar7 + 8))(0,*(ulong *)(lVar16 + -8) - 1,0);
        }
        *(undefined4 *)(lVar16 + -0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar16 + -0x14)) && (*(long *)(lVar16 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar8 + 0x20))
                    (puVar8,*(long *)(lVar16 + -0x20),(ulong)*(uint *)(lVar16 + -0x14) << 4);
        }
        plVar14 = *(long **)(lVar16 + -0xf0);
        lVar28 = lVar16 + -0xf0;
        *(undefined8 *)(lVar16 + -0x20) = 0;
        *(undefined4 *)(lVar16 + -0x14) = 0x80000000;
        if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
          plVar9 = plVar14 + 2;
          do {
            lVar16 = *plVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 + -1 == 0) {
            (**(code **)(*plVar14 + 0x18))();
          }
        }
        lVar16 = lVar28;
      } while (lVar28 != lVar17 + (long)(int)uVar2 * 0xf0);
      uVar12 = *(uint *)(param_1 + 0x218);
    }
    lVar16 = *plVar19;
    if ((int)uVar2 <= (int)uVar12) {
      uVar12 = uVar2;
    }
    if ((lVar16 != lVar27) && (0 < (int)uVar12)) {
      uVar29 = 0;
      do {
        plVar9 = (long *)(lVar27 + uVar29 * 0xf0);
        plVar1 = (long *)(lVar16 + uVar29 * 0xf0);
        plVar11 = (long *)*plVar1;
        plVar14 = (long *)*plVar9;
        if (plVar11 != plVar14) {
          if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
            plVar14 = plVar14 + 2;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = *plVar14 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar11 = (long *)*plVar1;
            plVar14 = (long *)*plVar9;
          }
          *plVar1 = (long)plVar14;
          if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
            plVar14 = plVar11 + 2;
            do {
              lVar17 = *plVar14;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = lVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar17 + -1 == 0) {
              (**(code **)(*plVar11 + 0x18))();
            }
          }
        }
        lVar17 = lVar16 + uVar29 * 0xf0;
        lVar28 = lVar27 + uVar29 * 0xf0;
        memcpy((void *)(lVar17 + 8),(void *)(lVar28 + 8),0x41);
        memcpy((void *)(lVar17 + 0x50),(void *)(lVar28 + 0x50),0x55);
        memcpy((void *)(lVar17 + 0xa8),(void *)(lVar28 + 0xa8),0x28);
        pvVar25 = *(void **)(lVar28 + 0xd0);
        iVar15 = *(int *)(lVar28 + 0xd8);
        if ((int)(*(uint *)(lVar17 + 0xdc) & 0x7fffffff) < iVar15) {
          FUN_02f0842c((undefined8 *)(lVar17 + 0xd0),PTR_PTR_047d1a50,(long)iVar15);
        }
        lVar28 = lVar16 + uVar29 * 0xf0;
        memcpy(*(void **)(lVar17 + 0xd0),pvVar25,(long)iVar15 << 4);
        uVar24 = *(ulong *)(lVar28 + 0xe8);
        *(int *)(lVar28 + 0xd8) = iVar15;
        lVar17 = lVar27 + uVar29 * 0xf0;
        *(undefined1 *)(lVar28 + 0xe0) = *(undefined1 *)(lVar17 + 0xe0);
        pcVar26 = (char *)(*(ulong *)(lVar17 + 0xe8) & 0xfffffffffffffffe);
        if ((char *)(uVar24 & 0xfffffffffffffffe) != pcVar26) {
          if (pcVar26 == (char *)0x0) {
            uVar22 = 0;
          }
          else {
            sVar10 = strlen(pcVar26);
            sVar10 = (size_t)((int)sVar10 + 1);
            pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                        (PTR_PTR_047d1a50,sVar10);
            memcpy(pvVar25,pcVar26,sVar10);
            uVar22 = (ulong)pvVar25 | 1;
          }
          *(ulong *)(lVar28 + 0xe8) = uVar22;
          if ((uVar24 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar24 - 1,0);
          }
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar12);
      lVar16 = *plVar19;
    }
    if (0 < (int)(uVar2 - uVar12)) {
      iVar15 = 0;
      plVar19 = (long *)(lVar27 + (long)(int)uVar12 * 0xf0);
      plVar14 = (long *)(lVar16 + (long)(int)uVar12 * 0xf0);
      do {
        lVar27 = *plVar19;
        *plVar14 = lVar27;
        if ((lVar27 != 0) && (*(long *)(lVar27 + 8) != 0)) {
          plVar9 = (long *)(lVar27 + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = *plVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        memcpy(plVar14 + 1,plVar19 + 1,0x41);
        memcpy(plVar14 + 10,plVar19 + 10,0x55);
        plVar9 = plVar14 + 0x1a;
        *plVar9 = 0;
        plVar14[0x1b] = -0x8000000000000000;
        memcpy(plVar14 + 0x15,plVar19 + 0x15,0x28);
        if (plVar19 != plVar14) {
          iVar4 = (int)plVar19[0x1b];
          pvVar25 = (void *)plVar19[0x1a];
          if (iVar4 < 1) {
            __dest = (void *)0x0;
          }
          else {
            FUN_02f0842c(plVar9,PTR_PTR_047d1a50,(long)iVar4);
            __dest = (void *)*plVar9;
          }
          memcpy(__dest,pvVar25,(long)iVar4 << 4);
          *(int *)(plVar14 + 0x1b) = iVar4;
        }
        *(char *)(plVar14 + 0x1c) = (char)plVar19[0x1c];
        plVar14[0x1d] = 0;
        pcVar26 = (char *)(plVar19[0x1d] & 0xfffffffffffffffe);
        if (pcVar26 != (char *)0x0) {
          sVar10 = strlen(pcVar26);
          sVar10 = (size_t)((int)sVar10 + 1);
          pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar10)
          ;
          memcpy(pvVar25,pcVar26,sVar10);
          plVar14[0x1d] = (ulong)pvVar25 | 1;
        }
        iVar15 = iVar15 + 1;
        plVar19 = plVar19 + 0x1e;
        plVar14 = plVar14 + 0x1e;
      } while (iVar15 != uVar2 - uVar12);
    }
    *(uint *)(param_1 + 0x218) = uVar2;
  }
  return param_1;
}


