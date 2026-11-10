/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0321562c; name: FUN_0321562c
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_0321562c(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  ushort *puVar1;
  uint *puVar2;
  double *******pppppppdVar3;
  undefined *puVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  ushort uVar11;
  short sVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong *puVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  byte *pbVar32;
  ulong *puVar33;
  ulong *puVar34;
  code *pcVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  double *******pppppppdVar40;
  undefined8 *puVar41;
  double *******pppppppdVar42;
  double *******pppppppdVar43;
  double *******pppppppdVar44;
  uint uVar45;
  double *******pppppppdVar46;
  long lVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  uint uVar51;
  uint uVar52;
  int iVar53;
  undefined1 *puVar54;
  int iVar55;
  long lVar56;
  long *plVar57;
  long lVar58;
  undefined4 uVar59;
  long lVar60;
  long *plVar61;
  long *plVar62;
  long lVar63;
  float fVar64;
  double ******ppppppdVar65;
  undefined *local_2cb0;
  undefined1 *local_2c90;
  undefined8 local_2c88;
  undefined1 auStack_2c80 [3072];
  double *******local_2080;
  ulong *local_2078;
  long *local_2070;
  double *******local_80;
  ulong *local_78;
  long *local_70;
  
  local_2c90 = auStack_2c80;
  local_2c88 = -0x7fffffc000000000;
  if (0 < param_7) {
    uVar25 = (uint)param_5;
    lVar60 = (long)(int)uVar25;
    uVar26 = (uint)param_6;
    lVar63 = (long)(int)uVar26;
    lVar30 = lVar60 * 2;
    lVar37 = lVar63 * 2;
    iVar19 = 0;
    puVar4 = PTR_PTR_047d1a50 + 0x20;
    local_2cb0 = puVar4;
    do {
      lVar47 = (long)iVar19;
      uVar15 = param_7 - iVar19;
      iVar9 = *(int *)(param_2 + 0x10);
      uVar27 = uVar15;
      if (0x3ff < (int)uVar15) {
        uVar27 = 0x400;
      }
      if (iVar9 != 0) {
        pppppppdVar3 = (double *******)(auStack_2c80 + (long)(int)(uVar27 << 3) + 0xc00);
        uVar50 = (ulong)uVar27;
        uVar8 = uVar27;
        if ((int)uVar27 < 2) {
          uVar8 = 1;
        }
        uVar31 = uVar50 & 0xfffffffe;
        lVar38 = lVar60 * (lVar47 + 1);
        lVar20 = lVar60 * lVar47;
        iVar53 = 0;
        do {
          lVar56 = *(long *)(param_2 + 8);
          lVar39 = lVar56 + (long)iVar53 * 0x38;
          if (0xc < *(byte *)(lVar39 + 8) - 1) goto switchD_03217ca4_caseD_3;
          uVar21 = (ulong)*(ushort *)(lVar39 + 0xc);
          pppppppdVar46 = (double *******)(param_3 + lVar47 * lVar60 + uVar21);
          pppppppdVar43 =
               (double *******)(param_4 + lVar47 * lVar63 + (ulong)*(ushort *)(lVar39 + 10));
          lVar58 = (long)iVar53;
          switch((uint)*(byte *)(lVar39 + 8)) {
          case 1:
            puVar23 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x20);
            puVar33 = puVar23;
            if ((*puVar23 & 1) == 0) {
              do {
                puVar33 = (ulong *)puVar33[1];
              } while ((*puVar33 & 1) == 0);
            }
            if ((puVar33[2] & 0x1f) != 2) {
              puVar23 = (ulong *)0x0;
            }
            if (puVar23 != (ulong *)0x0) {
              puVar33 = puVar23;
              do {
                uVar21 = *puVar33;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  plVar61 = (long *)puVar33[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  if (((ulong)plVar61 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar17) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03216128;
                }
                puVar33 = (ulong *)puVar33[1];
              } while (puVar33 != (ulong *)0x0);
            }
            plVar61 = (long *)0x0;
LAB_03216128:
            puVar33 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x18);
            puVar34 = puVar33;
            if ((*puVar33 & 1) == 0) {
              do {
                puVar34 = (ulong *)puVar34[1];
              } while ((*puVar34 & 1) == 0);
            }
            if ((puVar34[2] & 0x1f) != 2) {
              puVar33 = (ulong *)0x0;
            }
            if (puVar33 != (ulong *)0x0) {
              puVar34 = puVar33;
              do {
                uVar21 = *puVar34;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  plVar18 = (long *)puVar34[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  if (((ulong)plVar18 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar18 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar17) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_032167ac;
                }
                puVar34 = (ulong *)puVar34[1];
              } while (puVar34 != (ulong *)0x0);
            }
            plVar18 = (long *)0x0;
LAB_032167ac:
            if ((int)uVar15 < 1) {
              bVar17 = true;
            }
            else {
              uVar28 = 0;
              do {
                local_2080 = (double *******)((ulong)local_2080 & 0xffffffffffffff00);
                plVar57 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
                (**(code **)(*plVar57 + 0x38))(plVar57,pppppppdVar43,puVar33,&local_2080);
                plVar62 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                local_2cb0 = (undefined *)
                             (**(code **)(*plVar62 + 0x30))
                                       (plVar62,pppppppdVar46,puVar23,(ulong)local_2080 & 0xff);
                if ((int)local_2cb0 < 0) {
                  bVar17 = false;
                  goto LAB_03217168;
                }
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = plVar62 + 1;
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                if (((ulong)plVar18 & 1) != 0) {
                  plVar61 = plVar57 + 1;
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar57 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar57 + 8))(plVar57);
                  }
                }
                uVar28 = uVar28 + 1;
                plVar18 = plVar57;
                plVar61 = plVar62;
              } while (uVar28 != uVar8);
              bVar17 = true;
            }
LAB_03217168:
            if (((ulong)plVar18 & 1) != 0) {
              plVar18 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
              plVar57 = plVar18 + 1;
              do {
                lVar56 = *plVar57;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                if (bVar14) {
                  *(int *)plVar57 = (int)lVar56 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar18 != (long *)0x0) && ((int)lVar56 == 1)) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            if (((ulong)plVar61 & 1) != 0) {
              plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
              plVar18 = plVar61 + 1;
              do {
                iVar29 = (int)*plVar18;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar14) {
                  *(int *)plVar18 = iVar29 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
LAB_03217298:
              if ((plVar61 != (long *)0x0) && (iVar29 == 1)) {
                (**(code **)(*plVar61 + 8))();
              }
            }
            goto LAB_032172b0;
          case 2:
            puVar23 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x20);
            puVar33 = puVar23;
            if ((*puVar23 & 1) == 0) {
              do {
                puVar33 = (ulong *)puVar33[1];
              } while ((*puVar33 & 1) == 0);
            }
            if ((puVar33[2] & 0x1f) != 4) {
              puVar23 = (ulong *)0x0;
            }
            if (puVar23 != (ulong *)0x0) {
              puVar33 = puVar23;
              do {
                uVar21 = *puVar33;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  plVar61 = (long *)puVar33[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  if (((ulong)plVar61 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar17) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_032161b4;
                }
                puVar33 = (ulong *)puVar33[1];
              } while (puVar33 != (ulong *)0x0);
            }
            plVar61 = (long *)0x0;
LAB_032161b4:
            puVar33 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x18);
            puVar34 = puVar33;
            if ((*puVar33 & 1) == 0) {
              do {
                puVar34 = (ulong *)puVar34[1];
              } while ((*puVar34 & 1) == 0);
            }
            if ((puVar34[2] & 0x1f) != 4) {
              puVar33 = (ulong *)0x0;
            }
            if (puVar33 != (ulong *)0x0) {
              puVar34 = puVar33;
              do {
                uVar21 = *puVar34;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  plVar18 = (long *)puVar34[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  if (((ulong)plVar18 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar18 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar17) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_032168ec;
                }
                puVar34 = (ulong *)puVar34[1];
              } while (puVar34 != (ulong *)0x0);
            }
            plVar18 = (long *)0x0;
LAB_032168ec:
            if ((int)uVar15 < 1) {
              bVar17 = true;
            }
            else {
              uVar28 = 0;
              do {
                local_2080 = (double *******)0x0;
                plVar57 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
                local_2078 = (ulong *)((ulong)local_2078 & 0xffffffffffffff00);
                (**(code **)(*plVar57 + 0x38))(plVar57,pppppppdVar43,puVar33,&local_2080);
                plVar62 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                local_2cb0 = (undefined *)
                             (**(code **)(*plVar62 + 0x30))
                                       (plVar62,pppppppdVar46,puVar23,&local_2080);
                if ((int)local_2cb0 < 0) {
                  bVar17 = false;
                  goto LAB_032171d4;
                }
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = plVar62 + 1;
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                if (((ulong)plVar18 & 1) != 0) {
                  plVar61 = plVar57 + 1;
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar57 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar57 + 8))(plVar57);
                  }
                }
                uVar28 = uVar28 + 1;
                plVar18 = plVar57;
                plVar61 = plVar62;
              } while (uVar28 != uVar8);
              bVar17 = true;
            }
LAB_032171d4:
            if (((ulong)plVar18 & 1) != 0) {
              plVar18 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
              plVar57 = plVar18 + 1;
              do {
                lVar56 = *plVar57;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                if (bVar14) {
                  *(int *)plVar57 = (int)lVar56 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar18 != (long *)0x0) && ((int)lVar56 == 1)) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            if (((ulong)plVar61 & 1) != 0) {
              plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
              plVar18 = plVar61 + 1;
              do {
                iVar29 = (int)*plVar18;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar14) {
                  *(int *)plVar18 = iVar29 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              goto LAB_03217298;
            }
            goto LAB_032172b0;
          case 3:
            puVar23 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x20);
            puVar33 = puVar23;
            if ((*puVar23 & 1) == 0) {
              do {
                puVar33 = (ulong *)puVar33[1];
              } while ((*puVar33 & 1) == 0);
            }
            if ((puVar33[2] & 0x1f) != 5) {
              puVar23 = (ulong *)0x0;
            }
            if (puVar23 != (ulong *)0x0) {
              puVar33 = puVar23;
              do {
                uVar21 = *puVar33;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  plVar61 = (long *)puVar33[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  if (((ulong)plVar61 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar17) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03216240;
                }
                puVar33 = (ulong *)puVar33[1];
              } while (puVar33 != (ulong *)0x0);
            }
            plVar61 = (long *)0x0;
LAB_03216240:
            puVar33 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x18);
            puVar34 = puVar33;
            if ((*puVar33 & 1) == 0) {
              do {
                puVar34 = (ulong *)puVar34[1];
              } while ((*puVar34 & 1) == 0);
            }
            if ((puVar34[2] & 0x1f) != 5) {
              puVar33 = (ulong *)0x0;
            }
            if (puVar33 != (ulong *)0x0) {
              puVar34 = puVar33;
              do {
                uVar21 = *puVar34;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  plVar18 = (long *)puVar34[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  if (((ulong)plVar18 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar18 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar17) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03216a40;
                }
                puVar34 = (ulong *)puVar34[1];
              } while (puVar34 != (ulong *)0x0);
            }
            plVar18 = (long *)0x0;
LAB_03216a40:
            if ((int)uVar15 < 1) {
              bVar17 = true;
            }
            else {
              uVar28 = 0;
              do {
                local_2080 = (double *******)0x0;
                plVar57 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
                (**(code **)(*plVar57 + 0x38))(plVar57,pppppppdVar43,puVar33,&local_2080);
                plVar62 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                local_2cb0 = (undefined *)
                             (**(code **)(*plVar62 + 0x30))
                                       (local_2080,plVar62,pppppppdVar46,puVar23);
                if ((int)local_2cb0 < 0) {
                  bVar17 = false;
                  goto LAB_03217240;
                }
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = plVar62 + 1;
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                if (((ulong)plVar18 & 1) != 0) {
                  plVar61 = plVar57 + 1;
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar57 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar57 + 8))(plVar57);
                  }
                }
                uVar28 = uVar28 + 1;
                plVar18 = plVar57;
                plVar61 = plVar62;
              } while (uVar28 != uVar8);
              bVar17 = true;
            }
LAB_03217240:
            if (((ulong)plVar18 & 1) != 0) {
              plVar18 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
              plVar57 = plVar18 + 1;
              do {
                lVar56 = *plVar57;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                if (bVar14) {
                  *(int *)plVar57 = (int)lVar56 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar18 != (long *)0x0) && ((int)lVar56 == 1)) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            if (((ulong)plVar61 & 1) != 0) {
              plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
              plVar18 = plVar61 + 1;
              do {
                iVar29 = (int)*plVar18;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar14) {
                  *(int *)plVar18 = iVar29 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              goto LAB_03217298;
            }
LAB_032172b0:
            if (!bVar17) goto LAB_03218038;
            break;
          case 4:
            puVar23 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x20);
            puVar33 = puVar23;
            if ((*puVar23 & 1) == 0) {
              do {
                puVar33 = (ulong *)puVar33[1];
              } while ((*puVar33 & 1) == 0);
            }
            local_2078 = puVar23;
            if ((puVar33[2] & 0x1f) != 6) {
              puVar23 = (ulong *)0x0;
              local_2078 = puVar23;
            }
            for (; puVar23 != (ulong *)0x0; puVar23 = (ulong *)puVar23[1]) {
              uVar21 = *puVar23;
              if (((uint)uVar21 >> 2 & 1) != 0) {
                plVar61 = (long *)puVar23[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                goto LAB_032162b8;
              }
            }
            plVar61 = (long *)0x0;
LAB_032162b8:
            if (((ulong)plVar61 & 1) != 0) {
              piVar5 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar17) {
                  *piVar5 = *piVar5 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            local_78 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x18);
            puVar23 = local_78;
            if ((*local_78 & 1) == 0) {
              do {
                puVar23 = (ulong *)puVar23[1];
              } while ((*puVar23 & 1) == 0);
            }
            if ((puVar23[2] & 0x1f) != 6) {
              local_78 = (ulong *)0x0;
            }
            local_70 = (long *)0x0;
            puVar23 = local_78;
            if (local_78 != (ulong *)0x0) {
              do {
                uVar21 = *puVar23;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  local_70 = (long *)puVar23[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  goto LAB_03216b64;
                }
                puVar23 = (ulong *)puVar23[1];
              } while (puVar23 != (ulong *)0x0);
              local_70 = (long *)0x0;
            }
LAB_03216b64:
            local_2080 = pppppppdVar46;
            local_2070 = plVar61;
            if (((ulong)local_70 & 1) == 0) {
              local_80 = pppppppdVar43;
              FUN_03218200(param_1,&local_2080,&local_80,param_5,param_6,uVar27);
            }
            else {
              plVar57 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
              plVar18 = plVar57 + 1;
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar17) {
                  *(int *)plVar18 = (int)*plVar18 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              local_80 = pppppppdVar43;
              FUN_03218200(param_1,&local_2080,&local_80,param_5,param_6,uVar27);
              do {
                lVar56 = *plVar18;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar17) {
                  *(int *)plVar18 = (int)lVar56 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar57 != (long *)0x0) && ((int)lVar56 == 1)) {
                (**(code **)(*plVar57 + 8))(plVar57);
              }
            }
            if (((ulong)plVar61 & 1) != 0) {
              plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
              plVar18 = plVar61 + 1;
              do {
                lVar56 = *plVar18;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar17) {
                  *(int *)plVar18 = (int)lVar56 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar61 != (long *)0x0) && ((int)lVar56 == 1)) {
                (**(code **)(*plVar61 + 8))();
              }
            }
            local_2cb0 = (undefined *)0x0;
            break;
          case 5:
            if ((int)(local_2c88._4_4_ & 0x7fffffff) < (int)((int)local_2c88 + uVar27)) {
              FUN_03218528(&local_2c90,puVar4);
            }
            puVar23 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x20);
            puVar33 = puVar23;
            if ((*puVar23 & 1) == 0) {
              do {
                puVar33 = (ulong *)puVar33[1];
              } while ((*puVar33 & 1) == 0);
            }
            if ((puVar33[2] & 0x1f) != 3) {
              puVar23 = (ulong *)0x0;
            }
            if (puVar23 != (ulong *)0x0) {
              puVar33 = puVar23;
              do {
                uVar21 = *puVar33;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  plVar61 = (long *)puVar33[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  if (((ulong)plVar61 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar17) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_0321635c;
                }
                puVar33 = (ulong *)puVar33[1];
              } while (puVar33 != (ulong *)0x0);
            }
            plVar61 = (long *)0x0;
LAB_0321635c:
            puVar33 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x18);
            puVar34 = puVar33;
            if ((*puVar33 & 1) == 0) {
              do {
                puVar34 = (ulong *)puVar34[1];
              } while ((*puVar34 & 1) == 0);
            }
            if ((puVar34[2] & 0x1f) != 3) {
              puVar33 = (ulong *)0x0;
            }
            if (puVar33 != (ulong *)0x0) {
              puVar34 = puVar33;
LAB_032163a0:
              uVar21 = *puVar34;
              if (((uint)uVar21 >> 2 & 1) == 0) goto code_r0x032163a8;
              plVar18 = (long *)puVar34[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
              if (((ulong)plVar18 & 1) != 0) {
                plVar62 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
                plVar57 = plVar62 + 1;
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                  if (bVar17) {
                    *(int *)plVar57 = (int)*plVar57 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if ((int)uVar15 < 1) {
                  do {
                    lVar56 = *plVar57;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                    if (bVar17) {
                      *(int *)plVar57 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar62 + 8))();
                  }
                  goto LAB_03216e58;
                }
                goto LAB_03216c5c;
              }
              goto LAB_032163b8;
            }
LAB_032163b0:
            plVar18 = (long *)0x0;
LAB_032163b8:
            if ((int)uVar15 < 1) {
LAB_03216e58:
              if (((ulong)plVar61 & 1) != 0) {
                plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                plVar18 = plVar61 + 1;
                do {
                  iVar29 = (int)*plVar18;
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar17) {
                    *(int *)plVar18 = iVar29 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (plVar61 != (long *)0x0) goto LAB_03217494;
              }
            }
            else {
LAB_03216c5c:
              uVar28 = 0;
              do {
                if (((ulong)plVar61 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar17) {
                      *piVar5 = *piVar5 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                if (((ulong)plVar18 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar18 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar17) {
                      *piVar5 = *piVar5 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                lVar56 = (long)(int)local_2c88;
                if ((int)(local_2c88._4_4_ & 0x7fffffff) <= (int)local_2c88) {
                  FUN_03218528(&local_2c90,PTR_PTR_047d1a50 + 0x20,lVar56 + 1);
                }
                puVar41 = (undefined8 *)(local_2c90 + (long)(int)local_2c88 * 0x30);
                *puVar41 = pppppppdVar46;
                puVar41[1] = puVar23;
                puVar41[2] = plVar61;
                if (((ulong)plVar61 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar17) {
                      *piVar5 = *piVar5 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                *(long **)(local_2c90 + (long)(int)local_2c88 * 0x30 + 0x28) = plVar18;
                *(double ********)(local_2c90 + (long)(int)local_2c88 * 0x30 + 0x18) = pppppppdVar43
                ;
                *(ulong **)(local_2c90 + (long)(int)local_2c88 * 0x30 + 0x20) = puVar33;
                uVar59 = (undefined4)(lVar56 + 1);
                if (((ulong)plVar18 & 1) == 0) {
                  local_2c88 = CONCAT44(local_2c88._4_4_,uVar59);
                }
                else {
                  plVar62 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
                  plVar57 = plVar62 + 1;
                  do {
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                    if (bVar17) {
                      *(int *)plVar57 = (int)*plVar57 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  local_2c88 = CONCAT44(local_2c88._4_4_,uVar59);
                  do {
                    lVar56 = *plVar57;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                    if (bVar17) {
                      *(int *)plVar57 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar62 + 8))();
                  }
                }
                plVar57 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = plVar57 + 1;
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar57 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar57 + 8))(plVar57);
                  }
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar57 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar57 + 8))(plVar57);
                  }
                }
                pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                plVar62 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
                if (((ulong)plVar18 & 1) != 0) {
                  plVar61 = plVar62 + 1;
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                uVar28 = uVar28 + 1;
                plVar61 = plVar57;
                plVar18 = plVar62;
              } while (uVar28 != uVar8);
            }
            break;
          case 6:
            puVar23 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x20);
            if (puVar23 != (ulong *)0x0) {
              puVar33 = puVar23;
              do {
                uVar21 = *puVar33;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  uVar21 = puVar33[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  if ((uVar21 & 1) != 0) {
                    piVar5 = (int *)((uVar21 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar17) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03216078;
                }
                puVar33 = (ulong *)puVar33[1];
              } while (puVar33 != (ulong *)0x0);
            }
            uVar21 = 0;
LAB_03216078:
            puVar33 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x18);
            if (puVar33 != (ulong *)0x0) {
              puVar34 = puVar33;
              do {
                uVar48 = *puVar34;
                if (((uint)uVar48 >> 2 & 1) != 0) {
                  uVar48 = puVar34[(uVar48 >> 1 & 1) + (uVar48 & 1) + 2];
                  if ((uVar48 & 1) != 0) {
                    piVar5 = (int *)((uVar48 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar17) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03216528;
                }
                puVar34 = (ulong *)puVar34[1];
              } while (puVar34 != (ulong *)0x0);
            }
            uVar48 = 0;
LAB_03216528:
            local_2cb0 = (undefined *)
                         (**(code **)(lVar56 + lVar58 * 0x38 + 0x28))
                                   (pppppppdVar46,puVar23,pppppppdVar43,puVar33,uVar27);
            if ((uVar48 & 1) != 0) {
              plVar18 = (long *)(uVar48 & 0xfffffffffffffffe);
              plVar61 = plVar18 + 1;
              do {
                lVar56 = *plVar61;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar17) {
                  *(int *)plVar61 = (int)lVar56 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar18 != (long *)0x0) && ((int)lVar56 == 1)) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            if ((uVar21 & 1) != 0) {
              plVar18 = (long *)(uVar21 & 0xfffffffffffffffe);
              plVar61 = plVar18 + 1;
              do {
                lVar56 = *plVar61;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar17) {
                  *(int *)plVar61 = (int)lVar56 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar18 != (long *)0x0) && ((int)lVar56 == 1)) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            if ((int)local_2cb0 < 0) goto LAB_03218038;
            break;
          case 7:
            pbVar22 = *(byte **)(lVar56 + lVar58 * 0x38 + 0x20);
            pbVar32 = pbVar22;
            if ((*pbVar22 & 1) == 0) {
              do {
                pbVar32 = *(byte **)(pbVar32 + 8);
              } while ((*pbVar32 & 1) == 0);
            }
            if ((*(ulong *)(pbVar32 + 0x10) & 0x1f) != 4) {
              pbVar22 = (byte *)0x0;
            }
            for (; (*pbVar22 & 1) == 0; pbVar22 = *(byte **)(pbVar22 + 8)) {
            }
            pbVar32 = *(byte **)(lVar56 + lVar58 * 0x38 + 0x18);
            uVar28 = *(uint *)(pbVar22 + 0x10);
            pbVar22 = pbVar32;
            if ((*pbVar32 & 1) == 0) {
              do {
                pbVar22 = *(byte **)(pbVar22 + 8);
              } while ((*pbVar22 & 1) == 0);
            }
            if ((*(ulong *)(pbVar22 + 0x10) & 0x1f) != 4) {
              pbVar32 = (byte *)0x0;
            }
            for (; (*pbVar32 & 1) == 0; pbVar32 = *(byte **)(pbVar32 + 8)) {
            }
            uVar51 = *(uint *)(pbVar32 + 0x10);
            uVar52 = (uVar28 >> 10) + 7 >> 3;
            uVar48 = (ulong)uVar52;
            uVar45 = (uVar51 >> 10) + 7;
            uVar7 = uVar52 - (uVar45 >> 3);
            uVar49 = (ulong)uVar7;
            uVar16 = (uVar28 ^ uVar51) >> 8 & 1;
            if ((int)uVar7 < 1) {
              pppppppdVar44 = (double *******)((long)pppppppdVar43 + (ulong)-uVar7);
              if ((uVar51 & 0x100) == 0) {
                pppppppdVar44 = pppppppdVar43;
              }
              if (uVar16 == 0) {
                if ((uVar52 == uVar25) && (uVar52 == uVar26)) goto LAB_03215d7c;
                if (uVar52 != 0 && 0 < (int)uVar15) {
                  uVar28 = 0;
                  do {
                    if (uVar48 - 1 < 7) {
                      uVar21 = 0;
                    }
                    else {
                      uVar21 = 0;
                      do {
                        puVar24 = (undefined1 *)((long)pppppppdVar44 + uVar21);
                        puVar54 = (undefined1 *)((long)pppppppdVar46 + uVar21);
                        uVar21 = uVar21 + 8;
                        *puVar54 = *puVar24;
                        puVar54[1] = puVar24[1];
                        puVar54[2] = puVar24[2];
                        puVar54[3] = puVar24[3];
                        puVar54[4] = puVar24[4];
                        puVar54[5] = puVar24[5];
                        puVar54[6] = puVar24[6];
                        puVar54[7] = puVar24[7];
                      } while ((uVar48 & 0xffff8) != uVar21);
                    }
                    if ((uVar52 & 7) != 0) {
                      uVar49 = uVar48 & 7;
                      do {
                        uVar49 = uVar49 - 1;
                        *(undefined1 *)((long)pppppppdVar46 + uVar21) =
                             *(undefined1 *)((long)pppppppdVar44 + uVar21);
                        uVar21 = uVar21 + 1;
                      } while (uVar49 != 0);
                    }
                    uVar28 = uVar28 + 1;
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                    pppppppdVar44 = (double *******)((long)pppppppdVar44 + lVar63);
                  } while (uVar28 != uVar27);
                }
              }
              else if (0 < (int)uVar15) {
                switch(uVar52) {
                case 1:
                  uVar48 = 0;
                  if (2 < uVar50 - 1) {
                    lVar56 = param_3 + uVar21;
                    pppppppdVar46 = pppppppdVar44;
                    do {
                      *(undefined1 *)(lVar20 + lVar56) = *(undefined1 *)pppppppdVar46;
                      uVar48 = uVar48 + 4;
                      *(undefined1 *)(lVar38 + lVar56) =
                           *(undefined1 *)(lVar63 + (long)pppppppdVar46);
                      *(undefined1 *)(lVar60 * (lVar47 + 2) + lVar56) =
                           *(undefined1 *)(lVar37 + (long)pppppppdVar46);
                      puVar24 = (undefined1 *)(lVar63 * 3 + (long)pppppppdVar46);
                      pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar63 * 4);
                      *(undefined1 *)(lVar60 * (lVar47 + 3) + lVar56) = *puVar24;
                      lVar56 = lVar56 + lVar60 * 4;
                    } while ((uVar50 & 0xfffffffc) != uVar48);
                  }
                  if ((uVar27 & 3) != 0) {
                    pppppppdVar44 = (double *******)((long)pppppppdVar44 + lVar63 * uVar48);
                    puVar24 = (undefined1 *)(param_3 + lVar60 * (lVar47 + uVar48) + uVar21);
                    uVar21 = uVar50 & 3;
                    do {
                      uVar10 = *(undefined1 *)pppppppdVar44;
                      uVar21 = uVar21 - 1;
                      pppppppdVar44 = (double *******)((long)pppppppdVar44 + lVar63);
                      *puVar24 = uVar10;
                      puVar24 = puVar24 + lVar60;
                    } while (uVar21 != 0);
                  }
                  break;
                case 2:
                  uVar48 = 0;
                  if (uVar50 != 1) {
                    uVar48 = 0;
                    lVar56 = param_3 + uVar21;
                    pppppppdVar43 = pppppppdVar44;
                    do {
                      *(ushort *)(lVar20 + lVar56) =
                           *(ushort *)pppppppdVar43 >> 8 | *(ushort *)pppppppdVar43 << 8;
                      uVar48 = uVar48 + 2;
                      puVar1 = (ushort *)(lVar63 + (long)pppppppdVar43);
                      pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar37);
                      *(ushort *)(lVar38 + lVar56) = *puVar1 >> 8 | *puVar1 << 8;
                      lVar56 = lVar56 + lVar30;
                    } while (uVar31 != uVar48);
                  }
                  if ((uVar27 & 1) != 0) {
                    uVar11 = *(ushort *)(uVar48 * lVar63 + (long)pppppppdVar44);
                    *(ushort *)(uVar48 * lVar60 + (long)pppppppdVar46) = uVar11 >> 8 | uVar11 << 8;
                  }
                  break;
                case 4:
                  uVar48 = 0;
                  if (uVar50 != 1) {
                    uVar48 = 0;
                    lVar56 = param_3 + uVar21;
                    pppppppdVar43 = pppppppdVar44;
                    do {
                      uVar28 = (*(uint *)pppppppdVar43 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar43 & 0xff00ff) << 8;
                      uVar48 = uVar48 + 2;
                      *(uint *)(lVar20 + lVar56) = uVar28 >> 0x10 | uVar28 << 0x10;
                      puVar2 = (uint *)(lVar63 + (long)pppppppdVar43);
                      pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar37);
                      uVar28 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
                      *(uint *)(lVar38 + lVar56) = uVar28 >> 0x10 | uVar28 << 0x10;
                      lVar56 = lVar56 + lVar30;
                    } while (uVar31 != uVar48);
                  }
                  if ((uVar27 & 1) != 0) {
                    uVar28 = *(uint *)(uVar48 * lVar63 + (long)pppppppdVar44);
                    uVar28 = (uVar28 & 0xff00ff00) >> 8 | (uVar28 & 0xff00ff) << 8;
                    *(uint *)(uVar48 * lVar60 + (long)pppppppdVar46) =
                         uVar28 >> 0x10 | uVar28 << 0x10;
                  }
                  break;
                case 8:
                  uVar48 = 0;
                  if (uVar50 != 1) {
                    uVar48 = 0;
                    lVar56 = param_3 + uVar21;
                    pppppppdVar43 = pppppppdVar44;
                    do {
                      uVar21 = ((ulong)*pppppppdVar43 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar43 & 0xff00ff00ff00ff) << 8;
                      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar21 & 0xffff0000ffff) << 0x10;
                      uVar48 = uVar48 + 2;
                      *(ulong *)(lVar20 + lVar56) = uVar21 >> 0x20 | uVar21 << 0x20;
                      puVar23 = (ulong *)(lVar63 + (long)pppppppdVar43);
                      pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar37);
                      uVar21 = (*puVar23 & 0xff00ff00ff00ff00) >> 8 |
                               (*puVar23 & 0xff00ff00ff00ff) << 8;
                      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar21 & 0xffff0000ffff) << 0x10;
                      *(ulong *)(lVar38 + lVar56) = uVar21 >> 0x20 | uVar21 << 0x20;
                      lVar56 = lVar56 + lVar30;
                    } while (uVar31 != uVar48);
                  }
                  if ((uVar27 & 1) != 0) {
                    ppppppdVar65 = *(double *******)(uVar48 * lVar63 + (long)pppppppdVar44);
                    uVar21 = ((ulong)ppppppdVar65 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar65 & 0xff00ff00ff00ff) << 8;
                    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar21 & 0xffff0000ffff) << 0x10;
                    *(double *******)(uVar48 * lVar60 + (long)pppppppdVar46) =
                         (double ******)(uVar21 >> 0x20 | uVar21 << 0x20);
                  }
                }
              }
            }
            else {
              bVar17 = (uVar28 & 0x100) == 0;
              uVar21 = uVar49;
              if (bVar17) {
                uVar21 = 0;
              }
              iVar29 = 1;
              if (!bVar17) {
                iVar29 = -uVar7;
              }
              if (0 < (int)uVar15) {
                uVar45 = uVar45 >> 3;
                uVar48 = (ulong)uVar45;
                lVar56 = (long)(int)(uVar45 - bVar17);
                if (uVar16 == 0) {
                  if (uVar45 == 0) {
                    if (uVar27 != 1) {
                      iVar55 = -(uVar27 & 0xfffffffe);
                      do {
                        memcpy((void *)(uVar21 + (long)pppppppdVar46),pppppppdVar43,0);
                        if ((uVar51 >> 9 & 1) != 0) {
                          memset((char *)((long)pppppppdVar46 + lVar56) + iVar29,
                                 (int)*(char *)((long)pppppppdVar46 + lVar56) >> 7,uVar49);
                        }
                        memcpy((void *)((long)pppppppdVar46 + uVar21 + lVar60),
                               (void *)((long)pppppppdVar43 + lVar63),0);
                        if ((uVar51 >> 9 & 1) != 0) {
                          pcVar6 = (char *)((long)pppppppdVar46 + lVar56 + lVar60);
                          memset(pcVar6 + iVar29,(int)*pcVar6 >> 7,uVar49);
                        }
                        pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60 * 2);
                        pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63 + lVar63);
                        iVar55 = iVar55 + 2;
                      } while (iVar55 != 0);
                    }
                    if ((uVar27 & 1) != 0) {
                      memcpy((void *)(uVar21 + (long)pppppppdVar46),pppppppdVar43,0);
                      goto joined_r0x03217abc;
                    }
                  }
                  else {
                    uVar28 = 0;
                    do {
                      if (uVar48 - 1 < 7) {
                        uVar36 = 0;
                      }
                      else {
                        uVar36 = 0;
                        do {
                          puVar24 = (undefined1 *)((long)pppppppdVar43 + uVar36 + 3);
                          puVar54 = (undefined1 *)((long)pppppppdVar46 + uVar36 + uVar21 + 3);
                          uVar36 = uVar36 + 8;
                          puVar54[-3] = puVar24[-3];
                          puVar54[-2] = puVar24[-2];
                          puVar54[-1] = puVar24[-1];
                          *puVar54 = *puVar24;
                          puVar54[1] = puVar24[1];
                          puVar54[2] = puVar24[2];
                          puVar54[3] = puVar24[3];
                          puVar54[4] = puVar24[4];
                        } while ((uVar48 & 0xffff8) != uVar36);
                      }
                      if ((uVar45 & 7) != 0) {
                        puVar24 = (undefined1 *)((long)pppppppdVar46 + uVar36 + uVar21);
                        puVar54 = (undefined1 *)((long)pppppppdVar43 + uVar36);
                        uVar36 = uVar48 & 7;
                        do {
                          uVar36 = uVar36 - 1;
                          *puVar24 = *puVar54;
                          puVar24 = puVar24 + 1;
                          puVar54 = puVar54 + 1;
                        } while (uVar36 != 0);
                      }
                      if ((uVar51 >> 9 & 1) != 0) {
                        memset((char *)((long)pppppppdVar46 + lVar56) + iVar29,
                               (int)*(char *)((long)pppppppdVar46 + lVar56) >> 7,uVar49);
                      }
                      pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                      uVar28 = uVar28 + 1;
                      pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                    } while (uVar28 != uVar27);
                  }
                }
                else if (uVar45 == 1) {
                  if (uVar27 != 1) {
                    iVar55 = -(uVar27 & 0xfffffffe);
                    do {
                      *(undefined1 *)(uVar21 + (long)pppppppdVar46) = *(undefined1 *)pppppppdVar43;
                      if ((uVar51 >> 9 & 1) != 0) {
                        memset((char *)((long)pppppppdVar46 + lVar56) + iVar29,
                               (int)*(char *)((long)pppppppdVar46 + lVar56) >> 7,uVar49);
                      }
                      *(undefined1 *)((long)pppppppdVar46 + uVar21 + lVar60) =
                           *(undefined1 *)((long)pppppppdVar43 + lVar63);
                      if ((uVar51 >> 9 & 1) != 0) {
                        pcVar6 = (char *)((long)pppppppdVar46 + lVar56 + lVar60);
                        memset(pcVar6 + iVar29,(int)*pcVar6 >> 7,uVar49);
                      }
                      pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60 * 2);
                      pppppppdVar43 =
                           (double *******)((undefined1 *)((long)pppppppdVar43 + lVar63) + lVar63);
                      iVar55 = iVar55 + 2;
                    } while (iVar55 != 0);
                  }
                  if ((uVar27 & 1) != 0) {
                    *(undefined1 *)(uVar21 + (long)pppppppdVar46) = *(undefined1 *)pppppppdVar43;
joined_r0x03217abc:
                    if ((uVar51 >> 9 & 1) != 0) {
                      memset((char *)((long)pppppppdVar46 + lVar56) + iVar29,
                             (int)*(char *)((long)pppppppdVar46 + lVar56) >> 7,uVar49);
                    }
                  }
                }
                else {
                  uVar28 = uVar27;
                  do {
                    if (uVar45 == 2) {
                      *(ushort *)((long)pppppppdVar46 + uVar21) =
                           *(ushort *)pppppppdVar43 >> 8 | *(ushort *)pppppppdVar43 << 8;
                    }
                    else if (uVar45 == 4) {
                      uVar52 = (*(uint *)pppppppdVar43 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar43 & 0xff00ff) << 8;
                      *(uint *)((long)pppppppdVar46 + uVar21) = uVar52 >> 0x10 | uVar52 << 0x10;
                    }
                    else if (uVar45 == 8) {
                      uVar48 = ((ulong)*pppppppdVar43 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar43 & 0xff00ff00ff00ff) << 8;
                      uVar48 = (uVar48 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar48 & 0xffff0000ffff) << 0x10;
                      *(ulong *)((long)pppppppdVar46 + uVar21) = uVar48 >> 0x20 | uVar48 << 0x20;
                    }
                    if ((uVar51 >> 9 & 1) != 0) {
                      memset((char *)((long)pppppppdVar46 + lVar56) + iVar29,
                             (int)*(char *)((long)pppppppdVar46 + lVar56) >> 7,uVar49);
                    }
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    uVar28 = uVar28 - 1;
                  } while (uVar28 != 0);
                }
              }
            }
            break;
          case 8:
            pbVar22 = *(byte **)(lVar56 + lVar58 * 0x38 + 0x20);
            pbVar32 = pbVar22;
            if ((*pbVar22 & 1) == 0) {
              do {
                pbVar32 = *(byte **)(pbVar32 + 8);
              } while ((*pbVar32 & 1) == 0);
            }
            if ((*(ulong *)(pbVar32 + 0x10) & 0x1f) != 5) {
              pbVar22 = (byte *)0x0;
            }
            for (; (*pbVar22 & 1) == 0; pbVar22 = *(byte **)(pbVar22 + 8)) {
            }
            pbVar32 = *(byte **)(lVar56 + lVar58 * 0x38 + 0x18);
            uVar28 = *(uint *)(pbVar22 + 0x10);
            pbVar22 = pbVar32;
            if ((*pbVar32 & 1) == 0) {
              do {
                pbVar22 = *(byte **)(pbVar22 + 8);
              } while ((*pbVar22 & 1) == 0);
            }
            if ((*(ulong *)(pbVar22 + 0x10) & 0x1f) != 5) {
              pbVar32 = (byte *)0x0;
            }
            for (; (*pbVar32 & 1) == 0; pbVar32 = *(byte **)(pbVar32 + 8)) {
            }
            uVar45 = *(uint *)(pbVar32 + 0x10);
            uVar51 = uVar26;
            pppppppdVar44 = pppppppdVar43;
            if ((uVar45 & 0x100) != 0) {
              uVar51 = 8;
              pppppppdVar44 = (double *******)&local_2080;
            }
            if ((uVar45 >> 8 & 1) != 0) {
              switch((uVar45 >> 10 & 1) + (uVar45 >> 0xb & 0x1f) + (uVar45 >> 0x10 & 0xff) + 7 >> 3)
              {
              case 1:
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar42 = (double *******)&local_2080;
                  do {
                    uVar10 = *(undefined1 *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    pppppppdVar40 = pppppppdVar42 + 1;
                    *(undefined1 *)pppppppdVar42 = uVar10;
                    pppppppdVar42 = pppppppdVar40;
                  } while (pppppppdVar40 < pppppppdVar3);
                }
                break;
              case 2:
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar42 = (double *******)&local_2080;
                  do {
                    uVar11 = *(ushort *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    pppppppdVar40 = pppppppdVar42 + 1;
                    *(ushort *)pppppppdVar42 = uVar11 >> 8 | uVar11 << 8;
                    pppppppdVar42 = pppppppdVar40;
                  } while (pppppppdVar40 < pppppppdVar3);
                }
                break;
              case 4:
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar42 = (double *******)&local_2080;
                  do {
                    uVar52 = *(uint *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    uVar52 = (uVar52 & 0xff00ff00) >> 8 | (uVar52 & 0xff00ff) << 8;
                    pppppppdVar40 = pppppppdVar42 + 1;
                    *(uint *)pppppppdVar42 = uVar52 >> 0x10 | uVar52 << 0x10;
                    pppppppdVar42 = pppppppdVar40;
                  } while (pppppppdVar40 < pppppppdVar3);
                }
                break;
              case 8:
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar42 = (double *******)&local_2080;
                  do {
                    ppppppdVar65 = *pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    uVar21 = ((ulong)ppppppdVar65 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar65 & 0xff00ff00ff00ff) << 8;
                    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar21 & 0xffff0000ffff) << 0x10;
                    pppppppdVar40 = pppppppdVar42 + 1;
                    *pppppppdVar42 = (double ******)(uVar21 >> 0x20 | uVar21 << 0x20);
                    pppppppdVar42 = pppppppdVar40;
                  } while (pppppppdVar40 < pppppppdVar3);
                }
              }
              uVar45 = uVar45 & 0xfffffeff;
            }
            uVar52 = uVar25;
            pppppppdVar43 = pppppppdVar46;
            if ((uVar28 & 0x100) != 0) {
              uVar52 = 8;
              pppppppdVar43 = (double *******)&local_2080;
            }
            uVar7 = uVar28 & 0xfffffeff;
            if (uVar45 == 0x345e05) {
              if (uVar7 == 0x345e05) {
                pppppppdVar42 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar52 * uVar27))
                ;
                if (pppppppdVar43 < pppppppdVar42) {
                  do {
                    *pppppppdVar43 = *pppppppdVar44;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar52);
                    pppppppdVar44 = (double *******)((long)pppppppdVar44 + (long)(int)uVar51);
                  } while (pppppppdVar43 < pppppppdVar42);
                }
              }
              else if (uVar7 == 0x174605) {
                pppppppdVar42 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar52 * uVar27))
                ;
                if (pppppppdVar43 < pppppppdVar42) {
                  do {
                    ppppppdVar65 = *pppppppdVar44;
                    pppppppdVar44 = (double *******)((long)pppppppdVar44 + (long)(int)uVar51);
                    *(float *)pppppppdVar43 = (float)(double)ppppppdVar65;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar52);
                  } while (pppppppdVar43 < pppppppdVar42);
                }
              }
              else if ((uVar7 == 0x74605) &&
                      (pppppppdVar42 =
                            (double *******)((long)pppppppdVar43 + (long)(int)(uVar52 * uVar27)),
                      pppppppdVar43 < pppppppdVar42)) {
                do {
                  *(short *)pppppppdVar43 =
                       (short)((uint)((float)(double)*pppppppdVar44 * 1.0039062) >> 0x10);
                  pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar52);
                  pppppppdVar44 = (double *******)((long)pppppppdVar44 + (long)(int)uVar51);
                } while (pppppppdVar43 < pppppppdVar42);
              }
            }
            else if (uVar45 == 0x174605) {
              if (uVar7 == 0x345e05) {
                pppppppdVar42 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar52 * uVar27))
                ;
                if (pppppppdVar43 < pppppppdVar42) {
                  do {
                    fVar64 = *(float *)pppppppdVar44;
                    pppppppdVar44 = (double *******)((long)pppppppdVar44 + (long)(int)uVar51);
                    *pppppppdVar43 = (double ******)(double)fVar64;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar52);
                  } while (pppppppdVar43 < pppppppdVar42);
                }
              }
              else if (uVar7 == 0x174605) {
                pppppppdVar42 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar52 * uVar27))
                ;
                if (pppppppdVar43 < pppppppdVar42) {
                  do {
                    *(uint *)pppppppdVar43 = *(uint *)pppppppdVar44;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar52);
                    pppppppdVar44 = (double *******)((long)pppppppdVar44 + (long)(int)uVar51);
                  } while (pppppppdVar43 < pppppppdVar42);
                }
              }
              else if ((uVar7 == 0x74605) &&
                      (pppppppdVar42 =
                            (double *******)((long)pppppppdVar43 + (long)(int)(uVar52 * uVar27)),
                      pppppppdVar43 < pppppppdVar42)) {
                do {
                  *(short *)pppppppdVar43 =
                       (short)((uint)(*(float *)pppppppdVar44 * 1.0039062) >> 0x10);
                  pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar52);
                  pppppppdVar44 = (double *******)((long)pppppppdVar44 + (long)(int)uVar51);
                } while (pppppppdVar43 < pppppppdVar42);
              }
            }
            else if (uVar45 == 0x74605) {
              if (uVar7 == 0x345e05) {
                pppppppdVar42 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar52 * uVar27))
                ;
                if (pppppppdVar43 < pppppppdVar42) {
                  do {
                    uVar11 = *(ushort *)pppppppdVar44;
                    pppppppdVar44 = (double *******)((long)pppppppdVar44 + (long)(int)uVar51);
                    *pppppppdVar43 = (double ******)(double)(float)((uint)uVar11 << 0x10);
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar52);
                  } while (pppppppdVar43 < pppppppdVar42);
                }
              }
              else if (uVar7 == 0x174605) {
                pppppppdVar42 = (double *******)((long)pppppppdVar43 + (long)(int)(uVar52 * uVar27))
                ;
                if (pppppppdVar43 < pppppppdVar42) {
                  do {
                    uVar11 = *(ushort *)pppppppdVar44;
                    pppppppdVar44 = (double *******)((long)pppppppdVar44 + (long)(int)uVar51);
                    *(uint *)pppppppdVar43 = (uint)uVar11 << 0x10;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar52);
                  } while (pppppppdVar43 < pppppppdVar42);
                }
              }
              else if ((uVar7 == 0x74605) &&
                      (pppppppdVar42 =
                            (double *******)((long)pppppppdVar43 + (long)(int)(uVar52 * uVar27)),
                      pppppppdVar43 < pppppppdVar42)) {
                do {
                  *(undefined2 *)pppppppdVar43 = *(undefined2 *)pppppppdVar44;
                  pppppppdVar43 = (double *******)((long)pppppppdVar43 + (long)(int)uVar52);
                  pppppppdVar44 = (double *******)((long)pppppppdVar44 + (long)(int)uVar51);
                } while (pppppppdVar43 < pppppppdVar42);
              }
            }
            if (((uVar28 >> 8 & 1) != 0) &&
               (uVar28 = (uVar28 >> 10 & 1) + (uVar28 >> 0xb & 0x1f) + (uVar28 >> 0x10 & 0xff) + 7
                         >> 3, uVar28 - 1 < 8)) {
              pppppppdVar43 = (double *******)((long)pppppppdVar46 + (long)(int)(uVar27 * uVar25));
              switch(uVar28) {
              case 1:
                if (pppppppdVar46 < pppppppdVar43) {
                  pppppppdVar44 = (double *******)&local_2080;
                  do {
                    *(undefined1 *)pppppppdVar46 = *(undefined1 *)pppppppdVar44;
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                    pppppppdVar44 = pppppppdVar44 + 1;
                  } while (pppppppdVar46 < pppppppdVar43);
                }
                break;
              case 2:
                if (pppppppdVar46 < pppppppdVar43) {
                  pppppppdVar44 = (double *******)&local_2080;
                  do {
                    *(ushort *)pppppppdVar46 =
                         *(ushort *)pppppppdVar44 >> 8 | *(ushort *)pppppppdVar44 << 8;
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                    pppppppdVar44 = pppppppdVar44 + 1;
                  } while (pppppppdVar46 < pppppppdVar43);
                }
                break;
              case 4:
                if (pppppppdVar46 < pppppppdVar43) {
                  pppppppdVar44 = (double *******)&local_2080;
                  do {
                    uVar28 = (*(uint *)pppppppdVar44 & 0xff00ff00) >> 8 |
                             (*(uint *)pppppppdVar44 & 0xff00ff) << 8;
                    *(uint *)pppppppdVar46 = uVar28 >> 0x10 | uVar28 << 0x10;
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                    pppppppdVar44 = pppppppdVar44 + 1;
                  } while (pppppppdVar46 < pppppppdVar43);
                }
                break;
              case 8:
                if (pppppppdVar46 < pppppppdVar43) {
                  pppppppdVar44 = (double *******)&local_2080;
                  do {
                    uVar21 = ((ulong)*pppppppdVar44 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*pppppppdVar44 & 0xff00ff00ff00ff) << 8;
                    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar21 & 0xffff0000ffff) << 0x10;
                    *pppppppdVar46 = (double ******)(uVar21 >> 0x20 | uVar21 << 0x20);
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                    pppppppdVar44 = pppppppdVar44 + 1;
                  } while (pppppppdVar46 < pppppppdVar43);
                }
              }
            }
            break;
          case 9:
            puVar23 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x20);
            while( true ) {
              uVar28 = (uint)*puVar23;
              if ((uVar28 >> 0x14 & 1) != 0) break;
              if (((*puVar23 & 1) != 0) || (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
              goto LAB_03216010;
            }
            if (puVar23 != (ulong *)0x0) {
              uVar28 = uVar28 & 0xfffff;
              uVar28 = (uint)(ushort)puVar23[(ulong)(byte)(POPCOUNT((char)uVar28) +
                                                           POPCOUNT((char)(uVar28 >> 8)) +
                                                          POPCOUNT((char)(uVar28 >> 0x10))) + 2];
              goto LAB_03216014;
            }
LAB_03216010:
            uVar28 = 0;
LAB_03216014:
            pppppppdVar44 = (double *******)((long)pppppppdVar46 + (long)(int)(uVar27 * uVar25));
            if (pppppppdVar46 < pppppppdVar44) {
              puVar23 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x18);
              while( true ) {
                uVar45 = (uint)*puVar23;
                if ((uVar45 >> 0x14 & 1) != 0) break;
                if (((*puVar23 & 1) != 0) ||
                   (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
                goto switchD_032174f0_caseD_3;
              }
              if (puVar23 == (ulong *)0x0) {
switchD_032174f0_caseD_3:
                do {
                } while( true );
              }
              uVar45 = uVar45 & 0xfffff;
              switch((short)puVar23[(ulong)(byte)(POPCOUNT((char)uVar45) +
                                                  POPCOUNT((char)(uVar45 >> 8)) +
                                                 POPCOUNT((char)(uVar45 >> 0x10))) + 2]) {
              case 1:
                switch(uVar28) {
                case 1:
                  do {
                    cVar13 = *(char *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    *(bool *)pppppppdVar46 = cVar13 != '\0';
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                  } while (pppppppdVar46 < pppppppdVar44);
                  break;
                case 2:
                  do {
                    cVar13 = *(char *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    *(ushort *)pppppppdVar46 = (ushort)(cVar13 != '\0');
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                  } while (pppppppdVar46 < pppppppdVar44);
                  break;
                default:
switchD_032175d8_caseD_3:
                  do {
                  } while( true );
                case 4:
                  do {
                    cVar13 = *(char *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    *(uint *)pppppppdVar46 = (uint)(cVar13 != '\0');
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                  } while (pppppppdVar46 < pppppppdVar44);
                  break;
                case 8:
                  do {
                    cVar13 = *(char *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    *pppppppdVar46 = (double ******)(ulong)(cVar13 != '\0');
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                  } while (pppppppdVar46 < pppppppdVar44);
                }
                break;
              case 2:
                if (uVar28 == 1) {
                  do {
                    sVar12 = *(short *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    *(bool *)pppppppdVar46 = sVar12 != 0;
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                  } while (pppppppdVar46 < pppppppdVar44);
                }
                else if (uVar28 == 2) {
                  do {
                    sVar12 = *(short *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    *(ushort *)pppppppdVar46 = (ushort)(sVar12 != 0);
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                  } while (pppppppdVar46 < pppppppdVar44);
                }
                else if (uVar28 == 4) {
                  do {
                    sVar12 = *(short *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    *(uint *)pppppppdVar46 = (uint)(sVar12 != 0);
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                  } while (pppppppdVar46 < pppppppdVar44);
                }
                else {
                  if (uVar28 != 8) goto switchD_032175d8_caseD_3;
                  do {
                    sVar12 = *(short *)pppppppdVar43;
                    pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                    *pppppppdVar46 = (double ******)(ulong)(sVar12 != 0);
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                  } while (pppppppdVar46 < pppppppdVar44);
                }
                break;
              default:
                goto switchD_032174f0_caseD_3;
              case 4:
                do {
                  if (7 < uVar28 - 1) goto switchD_032175d8_caseD_3;
                  uVar45 = *(uint *)pppppppdVar43;
                  switch(uVar28) {
                  case 1:
                    *(bool *)pppppppdVar46 = uVar45 != 0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar46 = (ushort)(uVar45 != 0);
                    break;
                  default:
                    goto switchD_032175d8_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar46 = (uint)(uVar45 != 0);
                    break;
                  case 8:
                    *pppppppdVar46 = (double ******)(ulong)(uVar45 != 0);
                  }
                  pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                  pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                } while (pppppppdVar46 < pppppppdVar44);
                break;
              case 8:
                do {
                  if (7 < uVar28 - 1) goto switchD_032175d8_caseD_3;
                  ppppppdVar65 = *pppppppdVar43;
                  switch(uVar28) {
                  case 1:
                    *(bool *)pppppppdVar46 = ppppppdVar65 != (double ******)0x0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar46 = (ushort)(ppppppdVar65 != (double ******)0x0);
                    break;
                  default:
                    goto switchD_032175d8_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar46 = (uint)(ppppppdVar65 != (double ******)0x0);
                    break;
                  case 8:
                    *pppppppdVar46 = (double ******)(ulong)(ppppppdVar65 != (double ******)0x0);
                  }
                  pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                  pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                } while (pppppppdVar46 < pppppppdVar44);
              }
            }
            break;
          case 10:
            lVar56 = lVar56 + lVar58 * 0x38;
            local_78 = *(ulong **)(lVar56 + 0x18);
            puVar23 = *(ulong **)(lVar56 + 0x20);
            local_2080 = pppppppdVar46;
            local_2078 = puVar23;
            if (puVar23 == (ulong *)0x0) {
              local_2070 = (long *)0x0;
            }
            else {
              do {
                uVar21 = *puVar23;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  local_2070 = (long *)puVar23[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  goto LAB_032160bc;
                }
                puVar23 = (ulong *)puVar23[1];
              } while (puVar23 != (ulong *)0x0);
              local_2070 = (long *)0x0;
            }
LAB_032160bc:
            if (((ulong)local_2070 & 1) != 0) {
              piVar5 = (int *)(((ulong)local_2070 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar17) {
                  *piVar5 = *piVar5 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            local_70 = (long *)0x0;
            puVar23 = local_78;
            if (local_78 != (ulong *)0x0) {
              do {
                uVar21 = *puVar23;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  local_70 = (long *)puVar23[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  goto LAB_032165d8;
                }
                puVar23 = (ulong *)puVar23[1];
              } while (puVar23 != (ulong *)0x0);
              local_70 = (long *)0x0;
            }
LAB_032165d8:
            if (((ulong)local_70 & 1) != 0) {
              piVar5 = (int *)(((ulong)local_70 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar17) {
                  *piVar5 = *piVar5 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            local_80 = pppppppdVar43;
            if (0 < (int)uVar15) {
              uVar28 = 0;
              do {
                for (puVar23 = local_78; (*puVar23 & 1) == 0; puVar23 = (ulong *)puVar23[1]) {
                }
                puVar33 = local_2078;
                if ((*local_2078 & 1) == 0) {
                  do {
                    puVar33 = (ulong *)puVar33[1];
                  } while ((*puVar33 & 1) == 0);
                }
                pcVar35 = *(code **)(param_1 + (puVar33[2] & 0x1f) * 0x48 + (puVar23[2] & 0x1f) * 8)
                ;
                if (pcVar35 != (code *)0x0) {
                  (*pcVar35)(&local_2080,&local_80);
                }
                plVar61 = local_2070;
                local_2070 = (long *)((ulong)local_2070 & 0xfffffffffffffffe);
                local_2080 = (double *******)((long)local_2080 + lVar60);
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = local_2070 + 1;
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((local_2070 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*local_2070 + 8))();
                  }
                }
                local_80 = (double *******)((long)local_80 + lVar63);
                plVar61 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
                uVar21 = (ulong)local_70 & 1;
                local_70 = plVar61;
                if (uVar21 != 0) {
                  plVar18 = plVar61 + 1;
                  do {
                    lVar56 = *plVar18;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar17) {
                      *(int *)plVar18 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar61 + 8))();
                  }
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 != uVar27);
            }
            if (((ulong)local_70 & 1) != 0) {
              plVar18 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
              plVar61 = plVar18 + 1;
              do {
                lVar56 = *plVar61;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar17) {
                  *(int *)plVar61 = (int)lVar56 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar18 != (long *)0x0) && ((int)lVar56 == 1)) {
                (**(code **)(*plVar18 + 8))();
              }
            }
            if (((ulong)local_2070 & 1) != 0) {
              plVar61 = (long *)((ulong)local_2070 & 0xfffffffffffffffe);
              plVar18 = plVar61 + 1;
              do {
                iVar29 = (int)*plVar18;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar17) {
                  *(int *)plVar18 = iVar29 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
joined_r0x03217490:
              if (plVar61 != (long *)0x0) {
LAB_03217494:
                if (iVar29 == 1) {
                  (**(code **)(*plVar61 + 8))();
                }
              }
            }
            break;
          case 0xb:
            puVar23 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x20);
            puVar33 = puVar23;
            if ((*puVar23 & 1) == 0) {
              do {
                puVar33 = (ulong *)puVar33[1];
              } while ((*puVar33 & 1) == 0);
            }
            if ((puVar33[2] & 0x1f) != 8) {
              puVar23 = (ulong *)0x0;
            }
            puVar33 = puVar23;
            if ((*puVar23 & 1) == 0) {
              do {
                puVar33 = (ulong *)puVar33[1];
              } while ((*puVar33 & 1) == 0);
            }
            local_2080 = pppppppdVar46;
            if ((puVar33[2] & 0x1f) != 8) {
              puVar23 = (ulong *)0x0;
            }
            local_2078 = puVar23;
            if (puVar23 != (ulong *)0x0) {
              puVar33 = puVar23;
              do {
                uVar21 = *puVar33;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  plVar61 = (long *)puVar33[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  goto LAB_032163e0;
                }
                puVar33 = (ulong *)puVar33[1];
              } while (puVar33 != (ulong *)0x0);
            }
            plVar61 = (long *)0x0;
LAB_032163e0:
            local_2070 = plVar61;
            if (((ulong)plVar61 & 1) != 0) {
              piVar5 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar17) {
                  *piVar5 = *piVar5 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            puVar33 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x18);
            puVar34 = puVar33;
            if ((*puVar33 & 1) == 0) {
              do {
                puVar34 = (ulong *)puVar34[1];
              } while ((*puVar34 & 1) == 0);
            }
            if ((puVar34[2] & 0x1f) != 8) {
              puVar33 = (ulong *)0x0;
            }
            if (puVar33 != (ulong *)0x0) {
              puVar34 = puVar33;
              do {
                uVar21 = *puVar34;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  local_70 = (long *)puVar34[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  goto LAB_03216e84;
                }
                puVar34 = (ulong *)puVar34[1];
              } while (puVar34 != (ulong *)0x0);
            }
            local_70 = (long *)0x0;
LAB_03216e84:
            if (((ulong)local_70 & 1) != 0) {
              piVar5 = (int *)(((ulong)local_70 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar17) {
                  *piVar5 = *piVar5 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            local_78 = puVar33;
            if ((int)uVar15 < 1) {
              if (((ulong)local_70 & 1) == 0) {
                local_80 = pppppppdVar43;
              }
              else {
                plVar57 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
                plVar18 = plVar57 + 1;
                do {
                  lVar56 = *plVar18;
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar17) {
                    *(int *)plVar18 = (int)lVar56 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                local_80 = pppppppdVar43;
                if ((plVar57 != (long *)0x0) && ((int)lVar56 == 1)) {
                  (**(code **)(*plVar57 + 8))();
                }
              }
            }
            else {
              uVar28 = 0;
              plVar18 = plVar61;
              local_80 = pppppppdVar43;
              do {
                plVar57 = local_70;
                FUN_03218138(*(undefined8 *)(param_1 + 0x288),&local_2080,&local_80);
                pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                plVar61 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
                local_2080 = pppppppdVar46;
                local_2078 = puVar23;
                if (((ulong)plVar18 & 1) != 0) {
                  plVar18 = plVar61 + 1;
                  do {
                    lVar56 = *plVar18;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar17) {
                      *(int *)plVar18 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar61 + 8))(plVar61);
                  }
                }
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                plVar62 = (long *)((ulong)plVar57 & 0xfffffffffffffffe);
                local_2070 = plVar61;
                local_80 = pppppppdVar43;
                local_78 = puVar33;
                if (((ulong)plVar57 & 1) != 0) {
                  plVar18 = plVar62 + 1;
                  do {
                    lVar56 = *plVar18;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar17) {
                      *(int *)plVar18 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                uVar28 = uVar28 + 1;
                plVar18 = plVar61;
                local_70 = plVar62;
              } while (uVar28 != uVar8);
              local_2cb0 = (undefined *)0x0;
            }
            if (((ulong)plVar61 & 1) != 0) {
              plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
              plVar18 = plVar61 + 1;
              do {
                lVar56 = *plVar18;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar17) {
                  *(int *)plVar18 = (int)lVar56 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar61 != (long *)0x0) && ((int)lVar56 == 1)) {
                (**(code **)(*plVar61 + 8))();
              }
            }
            break;
          case 0xc:
            puVar23 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x20);
            puVar33 = puVar23;
            if ((*puVar23 & 1) == 0) {
              do {
                puVar33 = (ulong *)puVar33[1];
              } while ((*puVar33 & 1) == 0);
            }
            if ((puVar33[2] & 0x1f) != 7) {
              puVar23 = (ulong *)0x0;
            }
            puVar33 = puVar23;
            if ((*puVar23 & 1) == 0) {
              do {
                puVar33 = (ulong *)puVar33[1];
              } while ((*puVar33 & 1) == 0);
            }
            if ((puVar33[2] & 0x1f) != 7) {
              puVar23 = (ulong *)0x0;
            }
            if (puVar23 != (ulong *)0x0) {
              puVar33 = puVar23;
              do {
                uVar21 = *puVar33;
                if (((uint)uVar21 >> 2 & 1) != 0) {
                  plVar61 = (long *)puVar33[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
                  if (((ulong)plVar61 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar17) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_0321648c;
                }
                puVar33 = (ulong *)puVar33[1];
              } while (puVar33 != (ulong *)0x0);
            }
            plVar61 = (long *)0x0;
LAB_0321648c:
            puVar33 = *(ulong **)(lVar56 + lVar58 * 0x38 + 0x18);
            puVar34 = puVar33;
            if ((*puVar33 & 1) == 0) {
              do {
                puVar34 = (ulong *)puVar34[1];
              } while ((*puVar34 & 1) == 0);
            }
            if ((puVar34[2] & 0x1f) != 7) {
              puVar33 = (ulong *)0x0;
            }
            if (puVar33 != (ulong *)0x0) {
              puVar34 = puVar33;
LAB_032164cc:
              uVar21 = *puVar34;
              if (((uint)uVar21 >> 2 & 1) == 0) goto code_r0x032164d4;
              plVar18 = (long *)puVar34[(uVar21 >> 1 & 1) + (uVar21 & 1) + 2];
              if (((ulong)plVar18 & 1) != 0) {
                plVar62 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
                plVar57 = plVar62 + 1;
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                  if (bVar17) {
                    *(int *)plVar57 = (int)*plVar57 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (0 < (int)uVar15) goto LAB_03216fcc;
                do {
                  lVar56 = *plVar57;
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                  if (bVar17) {
                    *(int *)plVar57 = (int)lVar56 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if ((plVar62 != (long *)0x0) && ((int)lVar56 == 1)) {
                  (**(code **)(*plVar62 + 8))();
                }
                goto LAB_03217144;
              }
              goto LAB_032164e4;
            }
LAB_032164dc:
            plVar18 = (long *)0x0;
LAB_032164e4:
            if ((int)uVar15 < 1) {
LAB_03217144:
              if (((ulong)plVar61 & 1) != 0) {
                plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                plVar18 = plVar61 + 1;
                do {
                  iVar29 = (int)*plVar18;
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar17) {
                    *(int *)plVar18 = iVar29 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                goto joined_r0x03217490;
              }
            }
            else {
LAB_03216fcc:
              uVar28 = 0;
              do {
                plVar57 = *(long **)(param_1 + 0x288);
                iVar29 = (int)plVar57[1];
                lVar56 = (long)iVar29;
                if ((int)(*(uint *)((long)plVar57 + 0xc) & 0x7fffffff) <= iVar29) {
                  FUN_032107fc(plVar57,lVar56 + 1);
                  iVar29 = (int)plVar57[1];
                }
                lVar39 = *plVar57;
                puVar41 = (undefined8 *)(lVar39 + (long)iVar29 * 0x30);
                *puVar41 = pppppppdVar46;
                puVar41[1] = puVar23;
                puVar41[2] = plVar61;
                if (((ulong)plVar61 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar17) {
                      *piVar5 = *piVar5 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                lVar39 = lVar39 + (long)iVar29 * 0x30;
                *(long **)(lVar39 + 0x28) = plVar18;
                *(double ********)(lVar39 + 0x18) = pppppppdVar43;
                *(ulong **)(lVar39 + 0x20) = puVar33;
                if (((ulong)plVar18 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar18 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar17) {
                      *piVar5 = *piVar5 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                plVar62 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                *(int *)(plVar57 + 1) = (int)(lVar56 + 1);
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = plVar62 + 1;
                  do {
                    lVar56 = *plVar61;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar17) {
                      *(int *)plVar61 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
                plVar61 = (long *)((ulong)plVar18 & 0xfffffffffffffffe);
                if (((ulong)plVar18 & 1) != 0) {
                  plVar18 = plVar61 + 1;
                  do {
                    lVar56 = *plVar18;
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar17) {
                      *(int *)plVar18 = (int)lVar56 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar56 == 1)) {
                    (**(code **)(*plVar61 + 8))(plVar61);
                  }
                }
                uVar28 = uVar28 + 1;
                plVar18 = plVar61;
                plVar61 = plVar62;
              } while (uVar28 != uVar8);
              local_2cb0 = (undefined *)0x0;
            }
            break;
          case 0xd:
            uVar28 = *(uint *)(lVar56 + lVar58 * 0x38 + 0x18);
            uVar21 = (ulong)uVar28;
            if (uVar28 == uVar25 && uVar28 == uVar26) {
              pppppppdVar44 = pppppppdVar43;
LAB_03215d7c:
              memcpy(pppppppdVar46,pppppppdVar44,(long)(int)(uVar27 * uVar26));
            }
            else if ((0 < (int)uVar15) && (0 < (int)uVar28)) {
              uVar45 = 0;
              do {
                if (uVar21 - 1 < 7) {
                  uVar48 = 0;
                }
                else {
                  uVar48 = 0;
                  do {
                    puVar24 = (undefined1 *)((long)pppppppdVar43 + uVar48);
                    puVar54 = (undefined1 *)((long)pppppppdVar46 + uVar48);
                    uVar48 = uVar48 + 8;
                    *puVar54 = *puVar24;
                    puVar54[1] = puVar24[1];
                    puVar54[2] = puVar24[2];
                    puVar54[3] = puVar24[3];
                    puVar54[4] = puVar24[4];
                    puVar54[5] = puVar24[5];
                    puVar54[6] = puVar24[6];
                    puVar54[7] = puVar24[7];
                  } while ((uVar21 & 0xfffffff8) != uVar48);
                }
                if ((uVar28 & 7) != 0) {
                  uVar49 = uVar21 & 7;
                  do {
                    uVar49 = uVar49 - 1;
                    *(undefined1 *)((long)pppppppdVar46 + uVar48) =
                         *(undefined1 *)((long)pppppppdVar43 + uVar48);
                    uVar48 = uVar48 + 1;
                  } while (uVar49 != 0);
                }
                uVar45 = uVar45 + 1;
                pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar60);
                pppppppdVar43 = (double *******)((long)pppppppdVar43 + lVar63);
              } while (uVar45 != uVar27);
            }
          }
switchD_03217ca4_caseD_3:
          iVar53 = iVar53 + 1;
        } while (iVar9 != iVar53);
      }
      iVar19 = uVar27 + iVar19;
    } while (iVar19 < param_7);
  }
  if ((int)local_2c88 == 0) {
    local_2cb0 = (undefined *)0x0;
  }
  else {
    puVar54 = local_2c90 + (long)(int)local_2c88 * 0x30;
    puVar24 = local_2c90;
    do {
      FUN_03218460(*(undefined8 *)(param_1 + 0x288),puVar24,puVar24 + 0x18);
      puVar24 = puVar24 + 0x30;
    } while (puVar24 != puVar54);
    local_2cb0 = (undefined *)0x0;
LAB_03218038:
    puVar24 = local_2c90;
    if ((int)local_2c88 != 0) {
      puVar54 = local_2c90 + (long)(int)local_2c88 * 0x30;
      do {
        if ((*(ulong *)(puVar54 + -8) & 1) != 0) {
          plVar18 = (long *)(*(ulong *)(puVar54 + -8) & 0xfffffffffffffffe);
          plVar61 = plVar18 + 1;
          do {
            lVar30 = *plVar61;
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
            if (bVar17) {
              *(int *)plVar61 = (int)lVar30 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar18 != (long *)0x0) && ((int)lVar30 == 1)) {
            (**(code **)(*plVar18 + 8))();
          }
        }
        puVar23 = (ulong *)(puVar54 + -0x20);
        puVar54 = puVar54 + -0x30;
        if ((*puVar23 & 1) != 0) {
          plVar18 = (long *)(*puVar23 & 0xfffffffffffffffe);
          plVar61 = plVar18 + 1;
          do {
            lVar30 = *plVar61;
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar61,0x10);
            if (bVar17) {
              *(int *)plVar61 = (int)lVar30 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar18 != (long *)0x0) && ((int)lVar30 == 1)) {
            (**(code **)(*plVar18 + 8))();
          }
        }
      } while (puVar54 != puVar24);
    }
  }
  lVar30 = local_2c88;
  uVar50 = (ulong)local_2c88._4_4_;
  local_2c88 = (ulong)local_2c88._4_4_ << 0x20;
  if ((-1 < lVar30) && (local_2c90 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_2c90,uVar50 * 0x30);
  }
  return (ulong)local_2cb0 & 0xffffffff;
code_r0x032164d4:
  puVar34 = (ulong *)puVar34[1];
  if (puVar34 == (ulong *)0x0) goto LAB_032164dc;
  goto LAB_032164cc;
code_r0x032163a8:
  puVar34 = (ulong *)puVar34[1];
  if (puVar34 == (ulong *)0x0) goto LAB_032163b0;
  goto LAB_032163a0;
}


