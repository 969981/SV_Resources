/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304b540; name: FUN_0304b540
 */


void FUN_0304b540(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  size_t sVar12;
  void *pvVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  ulong uVar23;
  ulong *puVar24;
  void *pvVar25;
  long lVar26;
  char *pcVar27;
  void *pvVar28;
  void *pvVar29;
  ulong uVar30;
  ulong *puVar31;
  long local_78;
  
  memset(param_1,0,0x80);
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3f0000003089705f;
  param_1[4] = -0x8000000000000000;
  param_1[5] = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0x7fffffff3f000000;
  param_1[6] = -0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  param_1[0xb] = 0;
  puVar3 = PTR_DAT_047e4ee8 + 0x10;
  param_1[0x10] = 0;
  *param_1 = (long)puVar3;
  param_1[1] = 0xffffffff;
  lVar20 = param_2[0x11];
  param_1[0x11] = lVar20;
  if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
    plVar14 = (long *)(lVar20 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *plVar14 = *plVar14 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  param_1[0x12] = 0;
  param_1[0x13] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x13);
  if ((int)uVar5 < 1) {
    param_1[0x12] = 0;
    param_1[0x13] = -0x8000000000000000;
  }
  else {
    puVar22 = (undefined4 *)param_2[0x12];
    puVar9 = (undefined4 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar5 << 2);
    uVar17 = uVar5 & 3;
    param_1[0x12] = (long)puVar9;
    *(uint *)(param_1 + 0x13) = uVar5;
    *(uint *)((long)param_1 + 0x9c) = uVar5;
    if (2 < uVar5 - 1) {
      iVar19 = -(uVar5 & 0xfffffffc);
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar22;
        puVar10[1] = puVar22[1];
        puVar10[2] = puVar22[2];
        puVar1 = puVar22 + 3;
        puVar9 = puVar10 + 4;
        puVar22 = puVar22 + 4;
        iVar19 = iVar19 + 4;
        puVar10[3] = *puVar1;
        puVar10 = puVar9;
      } while (iVar19 != 0);
    }
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar9 = *puVar22;
      puVar9 = puVar9 + 1;
      puVar22 = puVar22 + 1;
    }
  }
  param_1[0x14] = 0;
  param_1[0x15] = -0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x15);
  if ((int)uVar5 < 1) {
    param_1[0x14] = 0;
    param_1[0x15] = -0x8000000000000000;
  }
  else {
    puVar22 = (undefined4 *)param_2[0x14];
    puVar9 = (undefined4 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar5 << 2);
    uVar17 = uVar5 & 3;
    param_1[0x14] = (long)puVar9;
    *(uint *)(param_1 + 0x15) = uVar5;
    *(uint *)((long)param_1 + 0xac) = uVar5;
    if (2 < uVar5 - 1) {
      iVar19 = -(uVar5 & 0xfffffffc);
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar22;
        puVar10[1] = puVar22[1];
        puVar10[2] = puVar22[2];
        puVar1 = puVar22 + 3;
        puVar9 = puVar10 + 4;
        puVar22 = puVar22 + 4;
        iVar19 = iVar19 + 4;
        puVar10[3] = *puVar1;
        puVar10 = puVar9;
      } while (iVar19 != 0);
    }
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar9 = *puVar22;
      puVar9 = puVar9 + 1;
      puVar22 = puVar22 + 1;
    }
  }
  if (param_2 != param_1) {
    uVar5 = *(uint *)(param_2 + 4);
    lVar20 = param_2[3];
    plVar14 = param_1 + 3;
    if ((int)(*(uint *)((long)param_1 + 0x24) & 0x7fffffff) < (int)uVar5) {
      FUN_0304b1cc(plVar14,PTR_PTR_047d1a50,(long)(int)uVar5);
    }
    puVar3 = PTR_DAT_047d1a08;
    uVar17 = *(uint *)(param_1 + 4);
    if ((int)uVar5 < (int)uVar17) {
      lVar21 = *plVar14;
      puVar24 = (ulong *)(lVar21 + (long)(int)uVar17 * 0x50);
      do {
        plVar11 = (long *)puVar24[-9];
        puVar24 = puVar24 + -10;
        if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
          plVar15 = plVar11 + 2;
          do {
            lVar26 = *plVar15;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar8) {
              *plVar15 = lVar26 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar26 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))();
          }
        }
        if ((*puVar24 & 1) != 0) {
          (**(code **)(puVar3 + 8))(0,*puVar24 - 1,0);
        }
      } while (puVar24 != (ulong *)(lVar21 + (long)(int)uVar5 * 0x50));
      uVar17 = *(uint *)(param_1 + 4);
    }
    lVar21 = *plVar14;
    if ((int)uVar5 <= (int)uVar17) {
      uVar17 = uVar5;
    }
    if ((lVar21 != lVar20) && (0 < (int)uVar17)) {
      uVar23 = (ulong)uVar17;
      lVar26 = lVar20;
      do {
        lVar21 = FUN_02f1bf34(lVar21,lVar26);
        uVar23 = uVar23 - 1;
        lVar21 = lVar21 + 0x50;
        lVar26 = lVar26 + 0x50;
      } while (uVar23 != 0);
      lVar21 = *plVar14;
    }
    if (0 < (int)(uVar5 - uVar17)) {
      iVar19 = 0;
      puVar24 = (ulong *)(lVar20 + (long)(int)uVar17 * 0x50);
      puVar31 = (ulong *)(lVar21 + (long)(int)uVar17 * 0x50);
      do {
        *puVar31 = 0;
        puVar31[1] = 0;
        pcVar27 = (char *)(*puVar24 & 0xfffffffffffffffe);
        if (pcVar27 == (char *)0x0) {
          plVar14 = (long *)0x0;
        }
        else {
          sVar12 = strlen(pcVar27);
          sVar12 = (size_t)((int)sVar12 + 1);
          pvVar13 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar12)
          ;
          memcpy(pvVar13,pcVar27,sVar12);
          plVar14 = (long *)puVar31[1];
          *puVar31 = (ulong)pvVar13 | 1;
        }
        plVar11 = (long *)puVar24[1];
        if (plVar14 != plVar11) {
          if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
            plVar11 = plVar11 + 2;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar8) {
                *plVar11 = *plVar11 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            plVar14 = (long *)puVar31[1];
            plVar11 = (long *)puVar24[1];
          }
          puVar31[1] = (ulong)plVar11;
          if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
            plVar11 = plVar14 + 2;
            do {
              lVar20 = *plVar11;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar8) {
                *plVar11 = lVar20 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar20 + -1 == 0) {
              (**(code **)(*plVar14 + 0x18))();
            }
          }
        }
        memcpy(puVar31 + 2,puVar24 + 2,0x40);
        iVar19 = iVar19 + 1;
        puVar24 = puVar24 + 10;
        puVar31 = puVar31 + 10;
      } while (iVar19 != uVar5 - uVar17);
    }
    *(uint *)(param_1 + 4) = uVar5;
    if (param_2 != param_1) {
      uVar5 = *(uint *)(param_2 + 6);
      pvVar13 = (void *)param_2[5];
      if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) < (int)uVar5) {
        FUN_0304b420(param_1 + 5,PTR_PTR_047d1a50,(long)(int)uVar5);
      }
      uVar6 = *(uint *)(param_1 + 6);
      pvVar29 = (void *)param_1[5];
      uVar17 = uVar6;
      if ((int)uVar5 <= (int)uVar6) {
        uVar17 = uVar5;
      }
      if ((pvVar29 != pvVar13) && (0 < (int)uVar17)) {
        uVar23 = 0;
        if (uVar17 != 1) {
          pvVar25 = pvVar29;
          pvVar28 = pvVar13;
          do {
            memcpy(pvVar25,pvVar28,0x70);
            memcpy((void *)((long)pvVar25 + 0x70),(void *)((long)pvVar28 + 0x70),0x70);
            uVar23 = uVar23 + 2;
            pvVar28 = (void *)((long)pvVar28 + 0xe0);
            pvVar25 = (void *)((long)pvVar25 + 0xe0);
          } while (((ulong)uVar17 & 0xfffffffe) != uVar23);
        }
        if ((uVar17 & 1) != 0) {
          memcpy((void *)((long)pvVar29 + uVar23 * 0x70),(void *)((long)pvVar13 + uVar23 * 0x70),
                 0x70);
        }
        pvVar29 = (void *)param_1[5];
      }
      if ((int)uVar6 < (int)uVar5) {
        pvVar13 = (void *)((long)pvVar13 + (long)(int)uVar17 * 0x70);
        pvVar29 = (void *)((long)pvVar29 + (long)(int)uVar17 * 0x70);
        if (uVar5 != uVar17 + 1) {
          iVar19 = -(uVar5 - uVar17 & 0xfffffffe);
          do {
            memcpy(pvVar29,pvVar13,0x70);
            pvVar28 = (void *)((long)pvVar29 + 0x70);
            pvVar25 = (void *)((long)pvVar13 + 0x70);
            pvVar29 = (void *)((long)pvVar29 + 0xe0);
            pvVar13 = (void *)((long)pvVar13 + 0xe0);
            memcpy(pvVar28,pvVar25,0x70);
            iVar19 = iVar19 + 2;
          } while (iVar19 != 0);
        }
        if ((uVar5 - uVar17 & 1) != 0) {
          memcpy(pvVar29,pvVar13,0x70);
        }
      }
      *(uint *)(param_1 + 6) = uVar5;
      if (param_2 != param_1) {
        uVar5 = *(uint *)(param_2 + 8);
        lVar20 = param_2[7];
        plVar14 = param_1 + 7;
        if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) < (int)uVar5) {
          FUN_0304c12c(plVar14,PTR_PTR_047d1a50,(long)(int)uVar5);
        }
        uVar17 = *(uint *)(param_1 + 8);
        if ((int)uVar5 < (int)uVar17) {
          lVar26 = (long)(int)uVar17 * 0xb0 + *plVar14;
          lVar21 = (long)(int)uVar17 * -0xb0 + (long)(int)uVar5 * 0xb0;
          do {
            lVar26 = lVar26 + -0xb0;
            FUN_00cb081c(lVar26);
            lVar21 = lVar21 + 0xb0;
          } while (lVar21 != 0);
          uVar17 = *(uint *)(param_1 + 8);
        }
        lVar21 = *plVar14;
        if ((int)uVar5 <= (int)uVar17) {
          uVar17 = uVar5;
        }
        if ((lVar21 != lVar20) && (0 < (int)uVar17)) {
          uVar23 = (ulong)uVar17;
          lVar26 = lVar20;
          do {
            FUN_02f3a064(lVar21,lVar26);
            puVar2 = (undefined8 *)(lVar26 + 0xa4);
            uVar23 = uVar23 - 1;
            lVar26 = lVar26 + 0xb0;
            *(undefined8 *)(lVar21 + 0xa4) = *puVar2;
            lVar21 = lVar21 + 0xb0;
          } while (uVar23 != 0);
          lVar21 = *plVar14;
        }
        if (0 < (int)(uVar5 - uVar17)) {
          iVar19 = 0;
          plVar14 = (long *)(lVar20 + (long)(int)uVar17 * 0xb0);
          plVar11 = (long *)(lVar21 + (long)(int)uVar17 * 0xb0);
          do {
            lVar20 = *plVar14;
            *plVar11 = lVar20;
            if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
              plVar15 = (long *)(lVar20 + 0x10);
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar8) {
                  *plVar15 = *plVar15 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            lVar20 = plVar14[1];
            *(undefined8 *)((long)plVar11 + 0xf) = *(undefined8 *)((long)plVar14 + 0xf);
            plVar11[1] = lVar20;
            plVar11[3] = 0;
            pcVar27 = (char *)(plVar14[3] & 0xfffffffffffffffe);
            if (pcVar27 != (char *)0x0) {
              sVar12 = strlen(pcVar27);
              sVar12 = (size_t)((int)sVar12 + 1);
              pvVar13 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                          (PTR_PTR_047d1a50,sVar12);
              memcpy(pvVar13,pcVar27,sVar12);
              plVar11[3] = (ulong)pvVar13 | 1;
            }
            memcpy(plVar11 + 4,plVar14 + 4,0x54);
            lVar20 = plVar14[0xf];
            plVar11[0xf] = lVar20;
            if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
              plVar15 = (long *)(lVar20 + 0x10);
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar8) {
                  *plVar15 = *plVar15 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            lVar20 = plVar14[0x10];
            plVar11[0x10] = lVar20;
            if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
              plVar15 = (long *)(lVar20 + 0x10);
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar8) {
                  *plVar15 = *plVar15 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            lVar20 = plVar14[0x12];
            plVar11[0x11] = plVar14[0x11];
            plVar11[0x12] = lVar20;
            lVar20 = plVar14[0x13];
            plVar11[0x13] = lVar20;
            if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
              plVar15 = (long *)(lVar20 + 0x10);
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar8) {
                  *plVar15 = *plVar15 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            *(char *)(plVar11 + 0x14) = (char)plVar14[0x14];
            iVar19 = iVar19 + 1;
            *(undefined8 *)((long)plVar11 + 0xa4) = *(undefined8 *)((long)plVar14 + 0xa4);
            plVar14 = plVar14 + 0x16;
            plVar11 = plVar11 + 0x16;
          } while (iVar19 != uVar5 - uVar17);
        }
        *(uint *)(param_1 + 8) = uVar5;
        if (param_2 != param_1) {
          uVar5 = *(uint *)(param_2 + 10);
          lVar20 = param_2[9];
          plVar14 = param_1 + 9;
          if ((int)(*(uint *)((long)param_1 + 0x54) & 0x7fffffff) < (int)uVar5) {
            FUN_030429cc(plVar14,PTR_PTR_047d1a50,(long)(int)uVar5);
          }
          puVar3 = PTR_DAT_047d1a08;
          uVar17 = *(uint *)(param_1 + 10);
          if ((int)uVar5 < (int)uVar17) {
            lVar21 = *plVar14;
            plVar11 = (long *)(lVar21 + (long)(int)uVar17 * 0x30);
            do {
              puVar24 = (ulong *)(plVar11 + -2);
              plVar11 = plVar11 + -6;
              if ((*puVar24 & 1) != 0) {
                (**(code **)(puVar3 + 8))(0,*puVar24 - 1,0);
              }
              plVar15 = (long *)*plVar11;
              if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
                plVar4 = plVar15 + 2;
                do {
                  lVar26 = *plVar4;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar8) {
                    *plVar4 = lVar26 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar26 + -1 == 0) {
                  (**(code **)(*plVar15 + 0x18))();
                }
              }
            } while (plVar11 != (long *)(lVar21 + (long)(int)uVar5 * 0x30));
            uVar17 = *(uint *)(param_1 + 10);
          }
          if ((int)uVar5 <= (int)uVar17) {
            uVar17 = uVar5;
          }
          local_78 = *plVar14;
          if ((local_78 != lVar20) && (0 < (int)uVar17)) {
            uVar23 = 0;
            do {
              plVar15 = (long *)(lVar20 + uVar23 * 0x30);
              plVar4 = (long *)(local_78 + uVar23 * 0x30);
              plVar16 = (long *)*plVar4;
              plVar11 = (long *)*plVar15;
              if (plVar16 != plVar11) {
                if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
                  plVar11 = plVar11 + 2;
                  do {
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar8) {
                      *plVar11 = *plVar11 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  plVar16 = (long *)*plVar4;
                  plVar11 = (long *)*plVar15;
                }
                *plVar4 = (long)plVar11;
                if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
                  plVar11 = plVar16 + 2;
                  do {
                    lVar21 = *plVar11;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar8) {
                      *plVar11 = lVar21 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (lVar21 + -1 == 0) {
                    (**(code **)(*plVar16 + 0x18))();
                  }
                }
              }
              lVar21 = plVar15[1];
              lVar26 = plVar15[2];
              uVar30 = plVar4[4];
              *(short *)(plVar4 + 3) = (short)plVar15[3];
              plVar4[1] = lVar21;
              plVar4[2] = lVar26;
              pcVar27 = (char *)(plVar15[4] & 0xfffffffffffffffe);
              if ((char *)(uVar30 & 0xfffffffffffffffe) != pcVar27) {
                if (pcVar27 == (char *)0x0) {
                  uVar18 = 0;
                }
                else {
                  sVar12 = strlen(pcVar27);
                  sVar12 = (size_t)((int)sVar12 + 1);
                  pvVar13 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                              (PTR_PTR_047d1a50,sVar12);
                  memcpy(pvVar13,pcVar27,sVar12);
                  uVar18 = (ulong)pvVar13 | 1;
                }
                plVar4[4] = uVar18;
                if ((uVar30 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar30 - 1,0);
                }
              }
              *(int *)(plVar4 + 5) = (int)plVar15[5];
              uVar23 = uVar23 + 1;
              *(undefined4 *)((long)plVar4 + 0x2c) = *(undefined4 *)((long)plVar15 + 0x2c);
            } while (uVar23 != uVar17);
            local_78 = *plVar14;
          }
          if (0 < (int)(uVar5 - uVar17)) {
            iVar19 = 0;
            plVar14 = (long *)(lVar20 + (long)(int)uVar17 * 0x30);
            plVar11 = (long *)(local_78 + (long)(int)uVar17 * 0x30);
            do {
              lVar20 = *plVar14;
              *plVar11 = lVar20;
              if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
                plVar15 = (long *)(lVar20 + 0x10);
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar8) {
                    *plVar15 = *plVar15 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              lVar20 = plVar14[1];
              lVar21 = plVar14[2];
              *(short *)(plVar11 + 3) = (short)plVar14[3];
              plVar11[1] = lVar20;
              plVar11[2] = lVar21;
              plVar11[4] = 0;
              pcVar27 = (char *)(plVar14[4] & 0xfffffffffffffffe);
              if (pcVar27 != (char *)0x0) {
                sVar12 = strlen(pcVar27);
                sVar12 = (size_t)((int)sVar12 + 1);
                pvVar13 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                            (PTR_PTR_047d1a50,sVar12);
                memcpy(pvVar13,pcVar27,sVar12);
                plVar11[4] = (ulong)pvVar13 | 1;
              }
              iVar19 = iVar19 + 1;
              plVar11[5] = plVar14[5];
              plVar14 = plVar14 + 6;
              plVar11 = plVar11 + 6;
            } while (iVar19 != uVar5 - uVar17);
          }
          *(uint *)(param_1 + 10) = uVar5;
        }
      }
    }
  }
  pcVar27 = (char *)(param_2[0xb] & 0xfffffffffffffffe);
  uVar23 = param_1[0xb];
  if ((char *)(uVar23 & 0xfffffffffffffffe) != pcVar27) {
    if (pcVar27 == (char *)0x0) {
      uVar30 = 0;
    }
    else {
      sVar12 = strlen(pcVar27);
      sVar12 = (size_t)((int)sVar12 + 1);
      pvVar13 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar12);
      memcpy(pvVar13,pcVar27,sVar12);
      uVar30 = (ulong)pvVar13 | 1;
    }
    param_1[0xb] = uVar30;
    if ((uVar23 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar23 - 1,0);
    }
  }
  lVar20 = param_2[0xc];
  lVar21 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = lVar21;
  param_1[0xc] = lVar20;
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  param_1[0x10] = param_2[0x10];
  return;
}


