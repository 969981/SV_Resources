/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033573c4; name: FUN_033573c4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_033573c4(long param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6,
                 int param_7)

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
  char cVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  byte *pbVar26;
  ulong *puVar27;
  ulong *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  byte *pbVar34;
  ulong *puVar35;
  code *pcVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  double *******pppppppdVar42;
  undefined8 *puVar43;
  double *******pppppppdVar44;
  double *******pppppppdVar45;
  double *******pppppppdVar46;
  long lVar47;
  double *******pppppppdVar48;
  ulong uVar49;
  int iVar50;
  ulong uVar51;
  uint uVar52;
  uint uVar53;
  int iVar54;
  undefined4 uVar55;
  long *plVar56;
  undefined1 *puVar57;
  long lVar58;
  ulong uVar59;
  long lVar60;
  long *plVar61;
  long lVar62;
  float fVar63;
  double ******ppppppdVar64;
  undefined1 *local_2ca8;
  undefined8 local_2ca0;
  undefined1 local_2c98 [3072];
  double *******local_2098;
  ulong *local_2090;
  long *local_2088;
  ulong local_2080;
  double *******local_98;
  ulong *local_90;
  long *local_88;
  double *******local_80;
  ulong *local_78;
  long *local_70;
  
  local_2ca8 = local_2c98;
  local_2ca0 = -0x7fffffc000000000;
  if (0 < param_7) {
    lVar62 = (long)(int)param_5;
    lVar38 = lVar62 * 2;
    lVar32 = (long)(int)param_6;
    lVar47 = lVar32 * 2;
    iVar19 = 0;
    puVar4 = PTR_PTR_047d1a50 + 0x20;
    do {
      lVar39 = (long)iVar19;
      uVar14 = param_7 - iVar19;
      uVar30 = uVar14;
      if (0x3ff < (int)uVar14) {
        uVar30 = 0x400;
      }
      iVar9 = *(int *)(param_2 + 0x10);
      if (iVar9 != 0) {
        iVar50 = 0;
        uVar51 = (ulong)uVar30;
        uVar8 = uVar30;
        if ((int)uVar30 < 2) {
          uVar8 = 1;
        }
        pppppppdVar3 = (double *******)(local_2c98 + (long)(int)(uVar30 << 3) + 0xc00);
        uVar33 = uVar51 & 0xfffffffe;
        lVar40 = lVar62 * (lVar39 + 1);
        lVar24 = lVar62 * lVar39;
        do {
          lVar58 = *(long *)(param_2 + 8);
          lVar41 = lVar58 + (long)iVar50 * 0x38;
          if (0xc < *(byte *)(lVar41 + 8) - 1) goto switchD_03359cf0_caseD_3;
          lVar60 = (long)iVar50;
          uVar25 = (ulong)*(ushort *)(lVar41 + 0xc);
          pppppppdVar48 = (double *******)(param_3 + lVar39 * lVar62 + uVar25);
          pppppppdVar45 =
               (double *******)(param_4 + lVar39 * lVar32 + (ulong)*(ushort *)(lVar41 + 10));
          switch((uint)*(byte *)(lVar41 + 8)) {
          case 1:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x20);
            puVar35 = puVar27;
            if ((*puVar27 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((puVar35[2] & 0x1f) != 2) {
              puVar27 = (ulong *)0x0;
            }
            if (puVar27 != (ulong *)0x0) {
              puVar35 = puVar27;
              do {
                uVar25 = *puVar35;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  plVar22 = (long *)puVar35[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  if (((ulong)plVar22 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_03357f78;
                }
                puVar35 = (ulong *)puVar35[1];
              } while (puVar35 != (ulong *)0x0);
            }
            plVar22 = (long *)0x0;
LAB_03357f78:
            puVar35 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x18);
            puVar28 = puVar35;
            if ((*puVar35 & 1) == 0) {
              do {
                puVar28 = (ulong *)puVar28[1];
              } while ((*puVar28 & 1) == 0);
            }
            if ((puVar28[2] & 0x1f) != 2) {
              puVar35 = (ulong *)0x0;
            }
            if (puVar35 != (ulong *)0x0) {
              puVar28 = puVar35;
              do {
                uVar25 = *puVar28;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  plVar23 = (long *)puVar28[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  if (((ulong)plVar23 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar23 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_03358878;
                }
                puVar28 = (ulong *)puVar28[1];
              } while (puVar28 != (ulong *)0x0);
            }
            plVar23 = (long *)0x0;
LAB_03358878:
            if ((int)uVar14 < 1) {
              bVar16 = true;
            }
            else {
              uVar31 = 0;
              do {
                local_2098 = (double *******)((ulong)local_2098 & 0xffffffffffffff00);
                plVar61 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
                (**(code **)(*plVar61 + 0x38))(plVar61,pppppppdVar45,puVar35,&local_2098);
                plVar56 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
                iVar17 = (**(code **)(*plVar56 + 0x30))
                                   (plVar56,pppppppdVar48,puVar27,(ulong)local_2098 & 0xff);
                if (iVar17 < 0) {
                  bVar16 = false;
                  goto joined_r0x0335897c;
                }
                if (((ulong)plVar22 & 1) != 0) {
                  plVar22 = plVar56 + 1;
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar56 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar56 + 8))(plVar56);
                  }
                }
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                if (((ulong)plVar23 & 1) != 0) {
                  plVar22 = plVar61 + 1;
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar61 + 8))(plVar61);
                  }
                }
                uVar31 = uVar31 + 1;
                plVar23 = plVar61;
                plVar22 = plVar56;
              } while (uVar31 != uVar8);
              bVar16 = true;
            }
joined_r0x0335897c:
            if (((ulong)plVar23 & 1) != 0) {
              plVar23 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
              plVar61 = plVar23 + 1;
              do {
                lVar58 = *plVar61;
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar13) {
                  *(int *)plVar61 = (int)lVar58 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if ((plVar23 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar23 + 8))();
              }
            }
            if (((ulong)plVar22 & 1) != 0) {
              plVar22 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
              plVar23 = plVar22 + 1;
              do {
                iVar17 = (int)*plVar23;
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar13) {
                  *(int *)plVar23 = iVar17 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
LAB_03358f6c:
              if ((plVar22 != (long *)0x0) && (iVar17 == 1)) {
                (**(code **)(*plVar22 + 8))();
              }
            }
            goto joined_r0x033593c4;
          case 2:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x20);
            puVar35 = puVar27;
            if ((*puVar27 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((puVar35[2] & 0x1f) != 4) {
              puVar27 = (ulong *)0x0;
            }
            if (puVar27 != (ulong *)0x0) {
              puVar35 = puVar27;
              do {
                uVar25 = *puVar35;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  plVar22 = (long *)puVar35[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  if (((ulong)plVar22 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_03358008;
                }
                puVar35 = (ulong *)puVar35[1];
              } while (puVar35 != (ulong *)0x0);
            }
            plVar22 = (long *)0x0;
LAB_03358008:
            puVar35 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x18);
            puVar28 = puVar35;
            if ((*puVar35 & 1) == 0) {
              do {
                puVar28 = (ulong *)puVar28[1];
              } while ((*puVar28 & 1) == 0);
            }
            if ((puVar28[2] & 0x1f) != 4) {
              puVar35 = (ulong *)0x0;
            }
            if (puVar35 != (ulong *)0x0) {
              puVar28 = puVar35;
              do {
                uVar25 = *puVar28;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  plVar23 = (long *)puVar28[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  if (((ulong)plVar23 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar23 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_033589b4;
                }
                puVar28 = (ulong *)puVar28[1];
              } while (puVar28 != (ulong *)0x0);
            }
            plVar23 = (long *)0x0;
LAB_033589b4:
            if ((int)uVar14 < 1) {
              bVar16 = true;
            }
            else {
              uVar31 = 0;
              do {
                local_2098 = (double *******)0x0;
                plVar61 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
                local_2090 = (ulong *)((ulong)local_2090 & 0xffffffffffffff00);
                (**(code **)(*plVar61 + 0x38))(plVar61,pppppppdVar45,puVar35,&local_2098);
                plVar56 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
                iVar17 = (**(code **)(*plVar56 + 0x30))(plVar56,pppppppdVar48,puVar27,&local_2098);
                if (iVar17 < 0) {
                  bVar16 = false;
                  goto joined_r0x03358acc;
                }
                if (((ulong)plVar22 & 1) != 0) {
                  plVar22 = plVar56 + 1;
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar56 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar56 + 8))(plVar56);
                  }
                }
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                if (((ulong)plVar23 & 1) != 0) {
                  plVar22 = plVar61 + 1;
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar61 + 8))(plVar61);
                  }
                }
                uVar31 = uVar31 + 1;
                plVar23 = plVar61;
                plVar22 = plVar56;
              } while (uVar31 != uVar8);
              bVar16 = true;
            }
joined_r0x03358acc:
            if (((ulong)plVar23 & 1) != 0) {
              plVar23 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
              plVar61 = plVar23 + 1;
              do {
                lVar58 = *plVar61;
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar13) {
                  *(int *)plVar61 = (int)lVar58 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if ((plVar23 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar23 + 8))();
              }
            }
            if (((ulong)plVar22 & 1) != 0) {
              plVar22 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
              plVar23 = plVar22 + 1;
              do {
                iVar17 = (int)*plVar23;
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar13) {
                  *(int *)plVar23 = iVar17 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              goto LAB_03358f6c;
            }
            goto joined_r0x033593c4;
          case 3:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x20);
            puVar35 = puVar27;
            if ((*puVar27 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((puVar35[2] & 0x1f) != 5) {
              puVar27 = (ulong *)0x0;
            }
            if (puVar27 != (ulong *)0x0) {
              puVar35 = puVar27;
              do {
                uVar25 = *puVar35;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  plVar22 = (long *)puVar35[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  if (((ulong)plVar22 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_03358098;
                }
                puVar35 = (ulong *)puVar35[1];
              } while (puVar35 != (ulong *)0x0);
            }
            plVar22 = (long *)0x0;
LAB_03358098:
            puVar35 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x18);
            puVar28 = puVar35;
            if ((*puVar35 & 1) == 0) {
              do {
                puVar28 = (ulong *)puVar28[1];
              } while ((*puVar28 & 1) == 0);
            }
            if ((puVar28[2] & 0x1f) != 5) {
              puVar35 = (ulong *)0x0;
            }
            if (puVar35 != (ulong *)0x0) {
              puVar28 = puVar35;
              do {
                uVar25 = *puVar28;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  plVar23 = (long *)puVar28[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  if (((ulong)plVar23 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar23 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_03358b04;
                }
                puVar28 = (ulong *)puVar28[1];
              } while (puVar28 != (ulong *)0x0);
            }
            plVar23 = (long *)0x0;
LAB_03358b04:
            if ((int)uVar14 < 1) {
              bVar16 = true;
            }
            else {
              uVar31 = 0;
              do {
                local_2098 = (double *******)0x0;
                plVar61 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
                (**(code **)(*plVar61 + 0x38))(plVar61,pppppppdVar45,puVar35,&local_2098);
                plVar56 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
                iVar17 = (**(code **)(*plVar56 + 0x30))(local_2098,plVar56,pppppppdVar48,puVar27);
                if (iVar17 < 0) {
                  bVar16 = false;
                  goto joined_r0x03358c08;
                }
                if (((ulong)plVar22 & 1) != 0) {
                  plVar22 = plVar56 + 1;
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar56 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar56 + 8))(plVar56);
                  }
                }
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                if (((ulong)plVar23 & 1) != 0) {
                  plVar22 = plVar61 + 1;
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar61 + 8))(plVar61);
                  }
                }
                uVar31 = uVar31 + 1;
                plVar23 = plVar61;
                plVar22 = plVar56;
              } while (uVar31 != uVar8);
              bVar16 = true;
            }
joined_r0x03358c08:
            if (((ulong)plVar23 & 1) != 0) {
              plVar23 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
              plVar61 = plVar23 + 1;
              do {
                lVar58 = *plVar61;
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar13) {
                  *(int *)plVar61 = (int)lVar58 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if ((plVar23 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar23 + 8))();
              }
            }
            if (((ulong)plVar22 & 1) != 0) {
              plVar22 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
              plVar23 = plVar22 + 1;
              do {
                iVar17 = (int)*plVar23;
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar13) {
                  *(int *)plVar23 = iVar17 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              goto LAB_03358f6c;
            }
            goto joined_r0x033593c4;
          case 4:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x20);
            uVar25 = *puVar27;
            uVar31 = (uint)uVar25;
            puVar35 = puVar27;
            if ((uVar25 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            uVar49 = 0;
            if ((puVar27 != (ulong *)0x0) && ((puVar35[2] & 0x1f) == 6)) {
              while ((uVar31 >> 2 & 1) == 0) {
                puVar27 = (ulong *)puVar27[1];
                if (puVar27 == (ulong *)0x0) {
                  uVar49 = 0;
                  goto LAB_033576a8;
                }
                uVar25 = *puVar27;
                uVar31 = (uint)uVar25;
              }
              uVar49 = puVar27[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
            }
            if ((uVar49 & 1) != 0) {
              piVar5 = (int *)((uVar49 & 0xfffffffffffffffe) + 8);
              do {
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar16) {
                  *piVar5 = *piVar5 + 1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
            }
LAB_033576a8:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x18);
            puVar35 = puVar27;
            if ((*puVar27 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((puVar35[2] & 0x1f) != 6) {
              puVar27 = (ulong *)0x0;
            }
            if (puVar27 != (ulong *)0x0) {
              puVar35 = puVar27;
LAB_03357a14:
              uVar25 = *puVar35;
              if (((uint)uVar25 >> 2 & 1) == 0) goto code_r0x03357a1c;
              plVar22 = (long *)puVar35[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
              if (((ulong)plVar22 & 1) != 0) {
                plVar61 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
                plVar23 = plVar61 + 1;
                do {
                  cVar12 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar16) {
                    *(int *)plVar23 = (int)*plVar23 + 1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                do {
                  cVar12 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar16) {
                    *(int *)plVar23 = (int)*plVar23 + 1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if (0 < (int)uVar14) goto LAB_03358144;
                do {
                  lVar58 = *plVar23;
                  cVar12 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar16) {
                    *(int *)plVar23 = (int)lVar58 + -1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if ((plVar61 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar61 + 8))(plVar61);
                }
                goto LAB_033584f0;
              }
              goto LAB_03357a2c;
            }
LAB_03357a24:
            plVar22 = (long *)0x0;
LAB_03357a2c:
            if (0 < (int)uVar14) {
LAB_03358144:
              uVar31 = 0;
              plVar23 = plVar22;
              do {
                local_78 = (ulong *)0x0;
                local_70 = (long *)0x0;
                plVar61 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
                local_80 = (double *******)0x0;
                (**(code **)(*plVar61 + 0x50))(plVar61,pppppppdVar45,puVar27,&local_80);
                if ((local_78 == (ulong *)0x0) ||
                   (uVar25 = FUN_031dd260(local_78,PTR_DAT_047e5c40), (uVar25 & 1) == 0)) {
                  pppppppdVar46 = local_80;
                  *pppppppdVar48 = (double ******)0x0;
                  uVar25 = *(ulong *)(param_1 + 0x288);
                  if (((ulong)plVar23 & 1) != 0) {
                    plVar56 = plVar61 + 1;
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(plVar56,0x10);
                      if (bVar16) {
                        *(int *)plVar56 = (int)*plVar56 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  puVar35 = puVar27;
                  while( true ) {
                    uVar18 = (uint)*puVar35;
                    if ((uVar18 >> 0x1a & 1) != 0) break;
                    if (((*puVar35 & 1) != 0) ||
                       (puVar35 = (ulong *)puVar35[1], puVar35 == (ulong *)0x0)) goto LAB_03358230;
                  }
                  if (puVar35 != (ulong *)0x0) {
                    uVar59 = CONCAT44(uVar18,uVar18) & 0x3ffffff03ffffff;
                    uVar59 = puVar35[(ulong)(byte)(POPCOUNT((char)uVar59) +
                                                   POPCOUNT((char)(uVar59 >> 8)) +
                                                  POPCOUNT((char)(uVar59 >> 0x10)) +
                                                  POPCOUNT((char)(uVar59 >> 0x18))) + 2];
                    goto LAB_03358234;
                  }
LAB_03358230:
                  uVar59 = 0;
LAB_03358234:
                  local_98 = pppppppdVar45;
                  local_90 = puVar27;
                  local_88 = plVar23;
                  if (uVar59 == uVar25) {
                    plVar56 = *(long **)(((ulong)plVar23 & 0xfffffffffffffffe) + 0x10);
                    if (((ulong)plVar56 & 1) != 0) {
                      piVar5 = (int *)(((ulong)plVar56 & 0xfffffffffffffffe) + 8);
                      do {
                        cVar12 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                        if (bVar16) {
                          *piVar5 = *piVar5 + 1;
                          cVar12 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar12 != '\0');
                      do {
                        cVar12 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                        if (bVar16) {
                          *piVar5 = *piVar5 + 1;
                          cVar12 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar12 != '\0');
                    }
                    if (((ulong)plVar23 & 1) != 0) {
                      plVar20 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
                      plVar21 = plVar20 + 1;
                      do {
                        lVar58 = *plVar21;
                        cVar12 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar16) {
                          *(int *)plVar21 = (int)lVar58 + -1;
                          cVar12 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar12 != '\0');
                      if ((plVar20 != (long *)0x0) && ((int)lVar58 == 1)) {
                        (**(code **)(*plVar20 + 8))();
                      }
                    }
                    local_88 = plVar56;
                    if (((ulong)plVar56 & 1) != 0) {
                      plVar56 = (long *)((ulong)plVar56 & 0xfffffffffffffffe);
                      plVar21 = plVar56 + 1;
                      do {
                        lVar58 = *plVar21;
                        cVar12 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar16) {
                          *(int *)plVar21 = (int)lVar58 + -1;
                          cVar12 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar12 != '\0');
                      if ((plVar56 != (long *)0x0) && ((int)lVar58 == 1)) {
                        (**(code **)(*plVar56 + 8))();
                      }
                    }
LAB_03358328:
                    (**(code **)(**(long **)(uVar25 + 0x2b0) + 0x20))
                              (&local_2098,*(long **)(uVar25 + 0x2b0),&local_98);
                    if (local_2098 == (double *******)0x0) {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = FUN_0335a3c0(uVar25);
                    }
                    if (((ulong)local_2088 & 1) != 0) {
                      plVar21 = (long *)((ulong)local_2088 & 0xfffffffffffffffe);
                      plVar56 = plVar21 + 1;
                      do {
                        iVar17 = (int)*plVar56;
                        cVar12 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(plVar56,0x10);
                        if (bVar16) {
                          *(int *)plVar56 = iVar17 + -1;
                          cVar12 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar12 != '\0');
LAB_033583b8:
                      if ((plVar21 != (long *)0x0) && (iVar17 == 1)) {
                        (**(code **)(*plVar21 + 8))();
                      }
                    }
                  }
                  else {
                    if (((ulong)plVar23 & 0xfffffffffffffffe) != uVar25 + 0x1c8) goto LAB_03358328;
                    FUN_0335ae08(&local_2098,uVar25 + 0x2b8,&local_98);
                    if (local_2098 == (double *******)0x0) {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = FUN_0335a3c0(uVar25);
                    }
                    if (((ulong)local_2088 & 1) != 0) {
                      plVar21 = (long *)((ulong)local_2088 & 0xfffffffffffffffe);
                      plVar56 = plVar21 + 1;
                      do {
                        iVar17 = (int)*plVar56;
                        cVar12 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(plVar56,0x10);
                        if (bVar16) {
                          *(int *)plVar56 = iVar17 + -1;
                          cVar12 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar12 != '\0');
                      goto LAB_033583b8;
                    }
                  }
                  if (((ulong)local_88 & 1) != 0) {
                    plVar21 = (long *)((ulong)local_88 & 0xfffffffffffffffe);
                    plVar56 = plVar21 + 1;
                    do {
                      lVar58 = *plVar56;
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(plVar56,0x10);
                      if (bVar16) {
                        *(int *)plVar56 = (int)lVar58 + -1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                    if ((plVar21 != (long *)0x0) && ((int)lVar58 == 1)) {
                      (**(code **)(*plVar21 + 8))();
                    }
                  }
                  if (uVar18 == 0) {
                    if (pppppppdVar46 != (double *******)0x0) {
                      uVar18 = FUN_0335a3c0(*(undefined8 *)(param_1 + 0x288),pppppppdVar46);
                      *(uint *)pppppppdVar48 = uVar18;
                    }
                  }
                  else {
                    *(uint *)pppppppdVar48 = uVar18;
                  }
                }
                else {
                  if (local_80 == (double *******)0x0) {
                    ppppppdVar64 = (double ******)0x0;
                  }
                  else {
                    ppppppdVar64 = (double ******)
                                   FUN_0335a528(*(undefined8 *)(param_1 + 0x288),local_80);
                  }
                  *pppppppdVar48 = ppppppdVar64;
                }
                if (((ulong)plVar23 & 1) != 0) {
                  plVar23 = plVar61 + 1;
                  do {
                    lVar58 = *plVar23;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                    if (bVar16) {
                      *(int *)plVar23 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar61 + 8))(plVar61);
                  }
                }
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                if (((ulong)local_70 & 1) != 0) {
                  plVar56 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
                  plVar23 = plVar56 + 1;
                  do {
                    lVar58 = *plVar23;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                    if (bVar16) {
                      *(int *)plVar23 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar56 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar56 + 8))();
                  }
                }
                uVar31 = uVar31 + 1;
                plVar23 = plVar61;
              } while (uVar31 != uVar30);
              if (((ulong)plVar22 & 1) != 0) {
                plVar61 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
LAB_033584f0:
                plVar22 = plVar61 + 1;
                do {
                  lVar58 = *plVar22;
                  cVar12 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar16) {
                    *(int *)plVar22 = (int)lVar58 + -1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if ((plVar61 != (long *)0x0) && ((int)lVar58 == 1)) {
                  (**(code **)(*plVar61 + 8))(plVar61);
                }
              }
            }
            if ((uVar49 & 1) != 0) {
              plVar22 = (long *)(uVar49 & 0xfffffffffffffffe);
              plVar23 = plVar22 + 1;
              do {
                iVar17 = (int)*plVar23;
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar16) {
                  *(int *)plVar23 = iVar17 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
LAB_03359254:
              if ((plVar22 != (long *)0x0) && (iVar17 == 1)) {
                (**(code **)(*plVar22 + 8))();
              }
            }
            break;
          case 5:
            if ((int)(local_2ca0._4_4_ & 0x7fffffff) < (int)((int)local_2ca0 + uVar30)) {
              FUN_03218528(&local_2ca8,puVar4);
            }
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x20);
            puVar35 = puVar27;
            if ((*puVar27 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((puVar35[2] & 0x1f) != 3) {
              puVar27 = (ulong *)0x0;
            }
            if (puVar27 != (ulong *)0x0) {
              puVar35 = puVar27;
              do {
                uVar25 = *puVar35;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  plVar22 = (long *)puVar35[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  if (((ulong)plVar22 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_03358570;
                }
                puVar35 = (ulong *)puVar35[1];
              } while (puVar35 != (ulong *)0x0);
            }
            plVar22 = (long *)0x0;
LAB_03358570:
            puVar35 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x18);
            puVar28 = puVar35;
            if ((*puVar35 & 1) == 0) {
              do {
                puVar28 = (ulong *)puVar28[1];
              } while ((*puVar28 & 1) == 0);
            }
            if ((puVar28[2] & 0x1f) != 3) {
              puVar35 = (ulong *)0x0;
            }
            if (puVar35 != (ulong *)0x0) {
              puVar28 = puVar35;
LAB_033585b4:
              uVar25 = *puVar28;
              if (((uint)uVar25 >> 2 & 1) == 0) goto code_r0x033585bc;
              plVar23 = (long *)puVar28[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
              if (((ulong)plVar23 & 1) != 0) {
                plVar56 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
                plVar61 = plVar56 + 1;
                do {
                  cVar12 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                  if (bVar16) {
                    *(int *)plVar61 = (int)*plVar61 + 1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if ((int)uVar14 < 1) {
                  do {
                    lVar58 = *plVar61;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar16) {
                      *(int *)plVar61 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar56 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar56 + 8))();
                  }
                  goto LAB_03358e3c;
                }
                goto LAB_03358c4c;
              }
              goto LAB_033585cc;
            }
LAB_033585c4:
            plVar23 = (long *)0x0;
LAB_033585cc:
            if ((int)uVar14 < 1) {
LAB_03358e3c:
              if (((ulong)plVar22 & 1) != 0) {
                plVar22 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
                plVar23 = plVar22 + 1;
                do {
                  iVar17 = (int)*plVar23;
                  cVar12 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar16) {
                    *(int *)plVar23 = iVar17 + -1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                goto LAB_03359254;
              }
            }
            else {
LAB_03358c4c:
              uVar31 = 0;
              do {
                if (((ulong)plVar22 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar16) {
                      *piVar5 = *piVar5 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
                if (((ulong)plVar23 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar23 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar16) {
                      *piVar5 = *piVar5 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
                lVar58 = (long)(int)local_2ca0;
                if ((int)(local_2ca0._4_4_ & 0x7fffffff) <= (int)local_2ca0) {
                  FUN_03218528(&local_2ca8,PTR_PTR_047d1a50 + 0x20,lVar58 + 1);
                }
                puVar43 = (undefined8 *)(local_2ca8 + (long)(int)local_2ca0 * 0x30);
                *puVar43 = pppppppdVar48;
                puVar43[1] = puVar27;
                puVar43[2] = plVar22;
                if (((ulong)plVar22 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar16) {
                      *piVar5 = *piVar5 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
                *(long **)(local_2ca8 + (long)(int)local_2ca0 * 0x30 + 0x28) = plVar23;
                *(double ********)(local_2ca8 + (long)(int)local_2ca0 * 0x30 + 0x18) = pppppppdVar45
                ;
                *(ulong **)(local_2ca8 + (long)(int)local_2ca0 * 0x30 + 0x20) = puVar35;
                uVar55 = (undefined4)(lVar58 + 1);
                if (((ulong)plVar23 & 1) == 0) {
                  local_2ca0 = CONCAT44(local_2ca0._4_4_,uVar55);
                }
                else {
                  plVar56 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
                  plVar61 = plVar56 + 1;
                  do {
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar16) {
                      *(int *)plVar61 = (int)*plVar61 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  local_2ca0 = CONCAT44(local_2ca0._4_4_,uVar55);
                  do {
                    lVar58 = *plVar61;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar16) {
                      *(int *)plVar61 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar56 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar56 + 8))();
                  }
                }
                plVar61 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
                if (((ulong)plVar22 & 1) != 0) {
                  plVar22 = plVar61 + 1;
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar61 + 8))(plVar61);
                  }
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar61 + 8))(plVar61);
                  }
                }
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                plVar22 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
                pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                if (((ulong)plVar23 & 1) != 0) {
                  plVar23 = plVar22 + 1;
                  do {
                    lVar58 = *plVar23;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                    if (bVar16) {
                      *(int *)plVar23 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar22 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar22 + 8))(plVar22);
                  }
                }
                uVar31 = uVar31 + 1;
                plVar23 = plVar22;
                plVar22 = plVar61;
              } while (uVar31 != uVar8);
            }
            break;
          case 6:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x20);
            if (puVar27 != (ulong *)0x0) {
              puVar35 = puVar27;
              do {
                uVar25 = *puVar35;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  uVar25 = puVar35[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  if ((uVar25 & 1) != 0) {
                    piVar5 = (int *)((uVar25 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_03357ec8;
                }
                puVar35 = (ulong *)puVar35[1];
              } while (puVar35 != (ulong *)0x0);
            }
            uVar25 = 0;
LAB_03357ec8:
            puVar35 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x18);
            if (puVar35 != (ulong *)0x0) {
              puVar28 = puVar35;
              do {
                uVar49 = *puVar28;
                if (((uint)uVar49 >> 2 & 1) != 0) {
                  uVar49 = puVar28[(uVar49 >> 1 & 1) + (uVar49 & 1) + 2];
                  if ((uVar49 & 1) != 0) {
                    piVar5 = (int *)((uVar49 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_0335860c;
                }
                puVar28 = (ulong *)puVar28[1];
              } while (puVar28 != (ulong *)0x0);
            }
            uVar49 = 0;
LAB_0335860c:
            iVar17 = (**(code **)(lVar58 + lVar60 * 0x38 + 0x28))
                               (pppppppdVar48,puVar27,pppppppdVar45,puVar35,uVar30);
            if ((uVar49 & 1) != 0) {
              plVar23 = (long *)(uVar49 & 0xfffffffffffffffe);
              plVar22 = plVar23 + 1;
              do {
                lVar58 = *plVar22;
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar16) {
                  *(int *)plVar22 = (int)lVar58 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if ((plVar23 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar23 + 8))();
              }
            }
            if ((uVar25 & 1) != 0) {
              plVar23 = (long *)(uVar25 & 0xfffffffffffffffe);
              plVar22 = plVar23 + 1;
              do {
                lVar58 = *plVar22;
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar16) {
                  *(int *)plVar22 = (int)lVar58 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if ((plVar23 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar23 + 8))();
              }
            }
            if (iVar17 < 0) goto LAB_0335a0f0;
            break;
          case 7:
            pbVar26 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x20);
            pbVar34 = pbVar26;
            if ((*pbVar26 & 1) == 0) {
              do {
                pbVar34 = *(byte **)(pbVar34 + 8);
              } while ((*pbVar34 & 1) == 0);
            }
            if ((*(ulong *)(pbVar34 + 0x10) & 0x1f) != 4) {
              pbVar26 = (byte *)0x0;
            }
            for (; (*pbVar26 & 1) == 0; pbVar26 = *(byte **)(pbVar26 + 8)) {
            }
            pbVar34 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            uVar31 = *(uint *)(pbVar26 + 0x10);
            pbVar26 = pbVar34;
            if ((*pbVar34 & 1) == 0) {
              do {
                pbVar26 = *(byte **)(pbVar26 + 8);
              } while ((*pbVar26 & 1) == 0);
            }
            if ((*(ulong *)(pbVar26 + 0x10) & 0x1f) != 4) {
              pbVar34 = (byte *)0x0;
            }
            for (; (*pbVar34 & 1) == 0; pbVar34 = *(byte **)(pbVar34 + 8)) {
            }
            uVar52 = *(uint *)(pbVar34 + 0x10);
            uVar53 = (uVar31 >> 10) + 7 >> 3;
            uVar49 = (ulong)uVar53;
            uVar18 = (uVar52 >> 10) + 7;
            uVar7 = uVar53 - (uVar18 >> 3);
            uVar59 = (ulong)uVar7;
            uVar15 = (uVar31 ^ uVar52) >> 8 & 1;
            if ((int)uVar7 < 1) {
              pppppppdVar46 = (double *******)((long)pppppppdVar45 + (ulong)-uVar7);
              if ((uVar52 & 0x100) == 0) {
                pppppppdVar46 = pppppppdVar45;
              }
              if (uVar15 == 0) {
                if ((uVar53 == param_5) && (uVar53 == param_6)) goto LAB_03357bfc;
                if (uVar53 != 0 && 0 < (int)uVar14) {
                  uVar31 = 0;
                  do {
                    if (uVar49 - 1 < 7) {
                      uVar25 = 0;
                    }
                    else {
                      uVar25 = 0;
                      do {
                        puVar29 = (undefined1 *)((long)pppppppdVar46 + uVar25);
                        puVar57 = (undefined1 *)((long)pppppppdVar48 + uVar25);
                        uVar25 = uVar25 + 8;
                        *puVar57 = *puVar29;
                        puVar57[1] = puVar29[1];
                        puVar57[2] = puVar29[2];
                        puVar57[3] = puVar29[3];
                        puVar57[4] = puVar29[4];
                        puVar57[5] = puVar29[5];
                        puVar57[6] = puVar29[6];
                        puVar57[7] = puVar29[7];
                      } while ((uVar49 & 0xffff8) != uVar25);
                    }
                    if ((uVar53 & 7) != 0) {
                      uVar59 = uVar49 & 7;
                      do {
                        uVar59 = uVar59 - 1;
                        *(undefined1 *)((long)pppppppdVar48 + uVar25) =
                             *(undefined1 *)((long)pppppppdVar46 + uVar25);
                        uVar25 = uVar25 + 1;
                      } while (uVar59 != 0);
                    }
                    uVar31 = uVar31 + 1;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar32);
                  } while (uVar31 != uVar30);
                }
              }
              else if (0 < (int)uVar14) {
                switch(uVar53) {
                case 1:
                  if (uVar51 - 1 < 3) {
                    uVar49 = 0;
                  }
                  else {
                    uVar49 = 0;
                    lVar58 = param_3 + uVar25;
                    pppppppdVar48 = pppppppdVar46;
                    do {
                      *(undefined1 *)(lVar24 + lVar58) = *(undefined1 *)pppppppdVar48;
                      uVar49 = uVar49 + 4;
                      *(undefined1 *)(lVar40 + lVar58) =
                           *(undefined1 *)(lVar32 + (long)pppppppdVar48);
                      *(undefined1 *)(lVar62 * (lVar39 + 2) + lVar58) =
                           *(undefined1 *)(lVar47 + (long)pppppppdVar48);
                      puVar29 = (undefined1 *)(lVar32 * 3 + (long)pppppppdVar48);
                      pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar32 * 4);
                      *(undefined1 *)(lVar62 * (lVar39 + 3) + lVar58) = *puVar29;
                      lVar58 = lVar58 + lVar62 * 4;
                    } while ((uVar51 & 0xfffffffc) != uVar49);
                  }
                  if ((uVar30 & 3) != 0) {
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar32 * uVar49);
                    puVar29 = (undefined1 *)(param_3 + lVar62 * (lVar39 + uVar49) + uVar25);
                    uVar25 = uVar51 & 3;
                    do {
                      *puVar29 = *(undefined1 *)pppppppdVar46;
                      uVar25 = uVar25 - 1;
                      puVar29 = puVar29 + lVar62;
                      pppppppdVar46 = (double *******)((long)pppppppdVar46 + lVar32);
                    } while (uVar25 != 0);
                  }
                  break;
                case 2:
                  uVar49 = 0;
                  if (uVar51 != 1) {
                    uVar49 = 0;
                    lVar58 = param_3 + uVar25;
                    pppppppdVar45 = pppppppdVar46;
                    do {
                      *(ushort *)(lVar24 + lVar58) =
                           *(ushort *)pppppppdVar45 >> 8 | *(ushort *)pppppppdVar45 << 8;
                      uVar49 = uVar49 + 2;
                      puVar1 = (ushort *)(lVar32 + (long)pppppppdVar45);
                      pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar47);
                      *(ushort *)(lVar40 + lVar58) = *puVar1 >> 8 | *puVar1 << 8;
                      lVar58 = lVar58 + lVar38;
                    } while (uVar33 != uVar49);
                  }
                  if ((uVar30 & 1) != 0) {
                    uVar11 = *(ushort *)(uVar49 * lVar32 + (long)pppppppdVar46);
                    *(ushort *)(uVar49 * lVar62 + (long)pppppppdVar48) = uVar11 >> 8 | uVar11 << 8;
                  }
                  break;
                case 4:
                  uVar49 = 0;
                  if (uVar51 != 1) {
                    uVar49 = 0;
                    lVar58 = param_3 + uVar25;
                    pppppppdVar45 = pppppppdVar46;
                    do {
                      uVar31 = (*(uint *)pppppppdVar45 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar45 & 0xff00ff) << 8;
                      uVar49 = uVar49 + 2;
                      *(uint *)(lVar24 + lVar58) = uVar31 >> 0x10 | uVar31 << 0x10;
                      puVar2 = (uint *)(lVar32 + (long)pppppppdVar45);
                      pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar47);
                      uVar31 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
                      *(uint *)(lVar40 + lVar58) = uVar31 >> 0x10 | uVar31 << 0x10;
                      lVar58 = lVar58 + lVar38;
                    } while (uVar33 != uVar49);
                  }
                  if ((uVar30 & 1) != 0) {
                    uVar31 = *(uint *)(uVar49 * lVar32 + (long)pppppppdVar46);
                    uVar31 = (uVar31 & 0xff00ff00) >> 8 | (uVar31 & 0xff00ff) << 8;
                    *(uint *)(uVar49 * lVar62 + (long)pppppppdVar48) =
                         uVar31 >> 0x10 | uVar31 << 0x10;
                  }
                  break;
                case 8:
                  uVar49 = 0;
                  if (uVar51 != 1) {
                    uVar49 = 0;
                    lVar58 = param_3 + uVar25;
                    pppppppdVar45 = pppppppdVar46;
                    do {
                      uVar25 = ((ulong)*pppppppdVar45 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar45 & 0xff00ff00ff00ff) << 8;
                      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar25 & 0xffff0000ffff) << 0x10;
                      uVar49 = uVar49 + 2;
                      *(ulong *)(lVar24 + lVar58) = uVar25 >> 0x20 | uVar25 << 0x20;
                      puVar27 = (ulong *)(lVar32 + (long)pppppppdVar45);
                      pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar47);
                      uVar25 = (*puVar27 & 0xff00ff00ff00ff00) >> 8 |
                               (*puVar27 & 0xff00ff00ff00ff) << 8;
                      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar25 & 0xffff0000ffff) << 0x10;
                      *(ulong *)(lVar40 + lVar58) = uVar25 >> 0x20 | uVar25 << 0x20;
                      lVar58 = lVar58 + lVar38;
                    } while (uVar33 != uVar49);
                  }
                  if ((uVar30 & 1) != 0) {
                    ppppppdVar64 = *(double *******)(uVar49 * lVar32 + (long)pppppppdVar46);
                    uVar25 = ((ulong)ppppppdVar64 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar64 & 0xff00ff00ff00ff) << 8;
                    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar25 & 0xffff0000ffff) << 0x10;
                    *(double *******)(uVar49 * lVar62 + (long)pppppppdVar48) =
                         (double ******)(uVar25 >> 0x20 | uVar25 << 0x20);
                  }
                }
              }
            }
            else {
              bVar16 = (uVar31 & 0x100) == 0;
              uVar25 = uVar59;
              if (bVar16) {
                uVar25 = 0;
              }
              iVar17 = 1;
              if (!bVar16) {
                iVar17 = -uVar7;
              }
              if (0 < (int)uVar14) {
                uVar18 = uVar18 >> 3;
                uVar49 = (ulong)uVar18;
                lVar58 = (long)(int)(uVar18 - bVar16);
                if (uVar15 == 0) {
                  if (uVar18 == 0) {
                    if (uVar30 != 1) {
                      iVar54 = -(uVar30 & 0xfffffffe);
                      do {
                        memcpy((void *)(uVar25 + (long)pppppppdVar48),pppppppdVar45,0);
                        if ((uVar52 >> 9 & 1) != 0) {
                          memset((char *)((long)pppppppdVar48 + lVar58) + iVar17,
                                 (int)*(char *)((long)pppppppdVar48 + lVar58) >> 7,uVar59);
                        }
                        memcpy((void *)((long)pppppppdVar48 + uVar25 + lVar62),
                               (void *)((long)pppppppdVar45 + lVar32),0);
                        if ((uVar52 >> 9 & 1) != 0) {
                          pcVar6 = (char *)((long)pppppppdVar48 + lVar58 + lVar62);
                          memset(pcVar6 + iVar17,(int)*pcVar6 >> 7,uVar59);
                        }
                        pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62 * 2);
                        pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32 + lVar32);
                        iVar54 = iVar54 + 2;
                      } while (iVar54 != 0);
                    }
                    if ((uVar30 & 1) != 0) {
                      memcpy((void *)(uVar25 + (long)pppppppdVar48),pppppppdVar45,0);
                      goto joined_r0x03359b04;
                    }
                  }
                  else {
                    uVar31 = 0;
                    do {
                      if (uVar49 - 1 < 7) {
                        uVar37 = 0;
                      }
                      else {
                        uVar37 = 0;
                        do {
                          puVar29 = (undefined1 *)((long)pppppppdVar45 + uVar37 + 3);
                          puVar57 = (undefined1 *)((long)pppppppdVar48 + uVar37 + uVar25 + 3);
                          uVar37 = uVar37 + 8;
                          puVar57[-3] = puVar29[-3];
                          puVar57[-2] = puVar29[-2];
                          puVar57[-1] = puVar29[-1];
                          *puVar57 = *puVar29;
                          puVar57[1] = puVar29[1];
                          puVar57[2] = puVar29[2];
                          puVar57[3] = puVar29[3];
                          puVar57[4] = puVar29[4];
                        } while ((uVar49 & 0xffff8) != uVar37);
                      }
                      if ((uVar18 & 7) != 0) {
                        puVar29 = (undefined1 *)((long)pppppppdVar48 + uVar37 + uVar25);
                        puVar57 = (undefined1 *)((long)pppppppdVar45 + uVar37);
                        uVar37 = uVar49 & 7;
                        do {
                          uVar37 = uVar37 - 1;
                          *puVar29 = *puVar57;
                          puVar29 = puVar29 + 1;
                          puVar57 = puVar57 + 1;
                        } while (uVar37 != 0);
                      }
                      if ((uVar52 >> 9 & 1) != 0) {
                        memset((char *)((long)pppppppdVar48 + lVar58) + iVar17,
                               (int)*(char *)((long)pppppppdVar48 + lVar58) >> 7,uVar59);
                      }
                      pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                      uVar31 = uVar31 + 1;
                      pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    } while (uVar31 != uVar30);
                  }
                }
                else if (uVar18 == 1) {
                  if (uVar30 != 1) {
                    iVar54 = -(uVar30 & 0xfffffffe);
                    do {
                      *(undefined1 *)(uVar25 + (long)pppppppdVar48) = *(undefined1 *)pppppppdVar45;
                      if ((uVar52 >> 9 & 1) != 0) {
                        memset((char *)((long)pppppppdVar48 + lVar58) + iVar17,
                               (int)*(char *)((long)pppppppdVar48 + lVar58) >> 7,uVar59);
                      }
                      *(undefined1 *)((long)pppppppdVar48 + uVar25 + lVar62) =
                           *(undefined1 *)((long)pppppppdVar45 + lVar32);
                      if ((uVar52 >> 9 & 1) != 0) {
                        pcVar6 = (char *)((long)pppppppdVar48 + lVar58 + lVar62);
                        memset(pcVar6 + iVar17,(int)*pcVar6 >> 7,uVar59);
                      }
                      pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62 * 2);
                      iVar54 = iVar54 + 2;
                      pppppppdVar45 =
                           (double *******)((undefined1 *)((long)pppppppdVar45 + lVar32) + lVar32);
                    } while (iVar54 != 0);
                  }
                  if ((uVar30 & 1) != 0) {
                    *(undefined1 *)(uVar25 + (long)pppppppdVar48) = *(undefined1 *)pppppppdVar45;
joined_r0x03359b04:
                    if ((uVar52 >> 9 & 1) != 0) {
                      memset((char *)((long)pppppppdVar48 + lVar58) + iVar17,
                             (int)*(char *)((long)pppppppdVar48 + lVar58) >> 7,uVar59);
                    }
                  }
                }
                else {
                  uVar31 = uVar30;
                  do {
                    if (uVar18 == 2) {
                      *(ushort *)((long)pppppppdVar48 + uVar25) =
                           *(ushort *)pppppppdVar45 >> 8 | *(ushort *)pppppppdVar45 << 8;
                    }
                    else if (uVar18 == 4) {
                      uVar53 = (*(uint *)pppppppdVar45 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar45 & 0xff00ff) << 8;
                      *(uint *)((long)pppppppdVar48 + uVar25) = uVar53 >> 0x10 | uVar53 << 0x10;
                    }
                    else if (uVar18 == 8) {
                      uVar49 = ((ulong)*pppppppdVar45 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar45 & 0xff00ff00ff00ff) << 8;
                      uVar49 = (uVar49 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar49 & 0xffff0000ffff) << 0x10;
                      *(ulong *)((long)pppppppdVar48 + uVar25) = uVar49 >> 0x20 | uVar49 << 0x20;
                    }
                    if ((uVar52 >> 9 & 1) != 0) {
                      memset((char *)((long)pppppppdVar48 + lVar58) + iVar17,
                             (int)*(char *)((long)pppppppdVar48 + lVar58) >> 7,uVar59);
                    }
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    uVar31 = uVar31 - 1;
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                  } while (uVar31 != 0);
                }
              }
            }
            break;
          case 8:
            pbVar26 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x20);
            pbVar34 = pbVar26;
            if ((*pbVar26 & 1) == 0) {
              do {
                pbVar34 = *(byte **)(pbVar34 + 8);
              } while ((*pbVar34 & 1) == 0);
            }
            if ((*(ulong *)(pbVar34 + 0x10) & 0x1f) != 5) {
              pbVar26 = (byte *)0x0;
            }
            for (; (*pbVar26 & 1) == 0; pbVar26 = *(byte **)(pbVar26 + 8)) {
            }
            pbVar34 = *(byte **)(lVar58 + lVar60 * 0x38 + 0x18);
            uVar31 = *(uint *)(pbVar26 + 0x10);
            pbVar26 = pbVar34;
            if ((*pbVar34 & 1) == 0) {
              do {
                pbVar26 = *(byte **)(pbVar26 + 8);
              } while ((*pbVar26 & 1) == 0);
            }
            if ((*(ulong *)(pbVar26 + 0x10) & 0x1f) != 5) {
              pbVar34 = (byte *)0x0;
            }
            for (; (*pbVar34 & 1) == 0; pbVar34 = *(byte **)(pbVar34 + 8)) {
            }
            uVar18 = *(uint *)(pbVar34 + 0x10);
            uVar52 = param_6;
            pppppppdVar46 = pppppppdVar45;
            if ((uVar18 & 0x100) != 0) {
              uVar52 = 8;
              pppppppdVar46 = (double *******)&local_2098;
            }
            if ((uVar18 >> 8 & 1) != 0) {
              switch((uVar18 >> 10 & 1) + (uVar18 >> 0xb & 0x1f) + (uVar18 >> 0x10 & 0xff) + 7 >> 3)
              {
              case 1:
                if (&local_2098 < pppppppdVar3) {
                  pppppppdVar44 = (double *******)&local_2098;
                  do {
                    uVar10 = *(undefined1 *)pppppppdVar45;
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                    pppppppdVar42 = pppppppdVar44 + 1;
                    *(undefined1 *)pppppppdVar44 = uVar10;
                    pppppppdVar44 = pppppppdVar42;
                  } while (pppppppdVar42 < pppppppdVar3);
                }
                break;
              case 2:
                if (&local_2098 < pppppppdVar3) {
                  pppppppdVar44 = (double *******)&local_2098;
                  do {
                    uVar11 = *(ushort *)pppppppdVar45;
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                    pppppppdVar42 = pppppppdVar44 + 1;
                    *(ushort *)pppppppdVar44 = uVar11 >> 8 | uVar11 << 8;
                    pppppppdVar44 = pppppppdVar42;
                  } while (pppppppdVar42 < pppppppdVar3);
                }
                break;
              case 4:
                if (&local_2098 < pppppppdVar3) {
                  pppppppdVar44 = (double *******)&local_2098;
                  do {
                    uVar53 = *(uint *)pppppppdVar45;
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                    uVar53 = (uVar53 & 0xff00ff00) >> 8 | (uVar53 & 0xff00ff) << 8;
                    pppppppdVar42 = pppppppdVar44 + 1;
                    *(uint *)pppppppdVar44 = uVar53 >> 0x10 | uVar53 << 0x10;
                    pppppppdVar44 = pppppppdVar42;
                  } while (pppppppdVar42 < pppppppdVar3);
                }
                break;
              case 8:
                if (&local_2098 < pppppppdVar3) {
                  pppppppdVar44 = (double *******)&local_2098;
                  do {
                    ppppppdVar64 = *pppppppdVar45;
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                    uVar25 = ((ulong)ppppppdVar64 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar64 & 0xff00ff00ff00ff) << 8;
                    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar25 & 0xffff0000ffff) << 0x10;
                    pppppppdVar42 = pppppppdVar44 + 1;
                    *pppppppdVar44 = (double ******)(uVar25 >> 0x20 | uVar25 << 0x20);
                    pppppppdVar44 = pppppppdVar42;
                  } while (pppppppdVar42 < pppppppdVar3);
                }
              }
              uVar18 = uVar18 & 0xfffffeff;
            }
            uVar53 = param_5;
            pppppppdVar45 = pppppppdVar48;
            if ((uVar31 & 0x100) != 0) {
              uVar53 = 8;
              pppppppdVar45 = (double *******)&local_2098;
            }
            uVar7 = uVar31 & 0xfffffeff;
            if (uVar18 == 0x345e05) {
              if (uVar7 == 0x345e05) {
                pppppppdVar44 = (double *******)((long)pppppppdVar45 + (long)(int)(uVar53 * uVar30))
                ;
                if (pppppppdVar45 < pppppppdVar44) {
                  do {
                    *pppppppdVar45 = *pppppppdVar46;
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + (long)(int)uVar53);
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + (long)(int)uVar52);
                  } while (pppppppdVar45 < pppppppdVar44);
                }
              }
              else if (uVar7 == 0x174605) {
                pppppppdVar44 = (double *******)((long)pppppppdVar45 + (long)(int)(uVar53 * uVar30))
                ;
                if (pppppppdVar45 < pppppppdVar44) {
                  do {
                    ppppppdVar64 = *pppppppdVar46;
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + (long)(int)uVar52);
                    *(float *)pppppppdVar45 = (float)(double)ppppppdVar64;
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + (long)(int)uVar53);
                  } while (pppppppdVar45 < pppppppdVar44);
                }
              }
              else if ((uVar7 == 0x74605) &&
                      (pppppppdVar44 =
                            (double *******)((long)pppppppdVar45 + (long)(int)(uVar53 * uVar30)),
                      pppppppdVar45 < pppppppdVar44)) {
                do {
                  ppppppdVar64 = *pppppppdVar46;
                  pppppppdVar46 = (double *******)((long)pppppppdVar46 + (long)(int)uVar52);
                  *(short *)pppppppdVar45 =
                       (short)((uint)((float)(double)ppppppdVar64 * 1.0039062) >> 0x10);
                  pppppppdVar45 = (double *******)((long)pppppppdVar45 + (long)(int)uVar53);
                } while (pppppppdVar45 < pppppppdVar44);
              }
            }
            else if (uVar18 == 0x174605) {
              if (uVar7 == 0x345e05) {
                pppppppdVar44 = (double *******)((long)pppppppdVar45 + (long)(int)(uVar53 * uVar30))
                ;
                if (pppppppdVar45 < pppppppdVar44) {
                  do {
                    fVar63 = *(float *)pppppppdVar46;
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + (long)(int)uVar52);
                    *pppppppdVar45 = (double ******)(double)fVar63;
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + (long)(int)uVar53);
                  } while (pppppppdVar45 < pppppppdVar44);
                }
              }
              else if (uVar7 == 0x174605) {
                pppppppdVar44 = (double *******)((long)pppppppdVar45 + (long)(int)(uVar53 * uVar30))
                ;
                if (pppppppdVar45 < pppppppdVar44) {
                  do {
                    *(uint *)pppppppdVar45 = *(uint *)pppppppdVar46;
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + (long)(int)uVar53);
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + (long)(int)uVar52);
                  } while (pppppppdVar45 < pppppppdVar44);
                }
              }
              else if ((uVar7 == 0x74605) &&
                      (pppppppdVar44 =
                            (double *******)((long)pppppppdVar45 + (long)(int)(uVar53 * uVar30)),
                      pppppppdVar45 < pppppppdVar44)) {
                do {
                  fVar63 = *(float *)pppppppdVar46;
                  pppppppdVar46 = (double *******)((long)pppppppdVar46 + (long)(int)uVar52);
                  *(short *)pppppppdVar45 = (short)((uint)(fVar63 * 1.0039062) >> 0x10);
                  pppppppdVar45 = (double *******)((long)pppppppdVar45 + (long)(int)uVar53);
                } while (pppppppdVar45 < pppppppdVar44);
              }
            }
            else if (uVar18 == 0x74605) {
              if (uVar7 == 0x345e05) {
                pppppppdVar44 = (double *******)((long)pppppppdVar45 + (long)(int)(uVar53 * uVar30))
                ;
                if (pppppppdVar45 < pppppppdVar44) {
                  do {
                    uVar11 = *(ushort *)pppppppdVar46;
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + (long)(int)uVar52);
                    *pppppppdVar45 = (double ******)(double)(float)((uint)uVar11 << 0x10);
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + (long)(int)uVar53);
                  } while (pppppppdVar45 < pppppppdVar44);
                }
              }
              else if (uVar7 == 0x174605) {
                pppppppdVar44 = (double *******)((long)pppppppdVar45 + (long)(int)(uVar53 * uVar30))
                ;
                if (pppppppdVar45 < pppppppdVar44) {
                  do {
                    uVar11 = *(ushort *)pppppppdVar46;
                    pppppppdVar46 = (double *******)((long)pppppppdVar46 + (long)(int)uVar52);
                    *(uint *)pppppppdVar45 = (uint)uVar11 << 0x10;
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + (long)(int)uVar53);
                  } while (pppppppdVar45 < pppppppdVar44);
                }
              }
              else if ((uVar7 == 0x74605) &&
                      (pppppppdVar44 =
                            (double *******)((long)pppppppdVar45 + (long)(int)(uVar53 * uVar30)),
                      pppppppdVar45 < pppppppdVar44)) {
                do {
                  *(undefined2 *)pppppppdVar45 = *(undefined2 *)pppppppdVar46;
                  pppppppdVar45 = (double *******)((long)pppppppdVar45 + (long)(int)uVar53);
                  pppppppdVar46 = (double *******)((long)pppppppdVar46 + (long)(int)uVar52);
                } while (pppppppdVar45 < pppppppdVar44);
              }
            }
            if (((uVar31 >> 8 & 1) != 0) &&
               (uVar31 = (uVar31 >> 10 & 1) + (uVar31 >> 0xb & 0x1f) + (uVar31 >> 0x10 & 0xff) + 7
                         >> 3, uVar31 - 1 < 8)) {
              pppppppdVar45 = (double *******)((long)pppppppdVar48 + (long)(int)(uVar30 * param_5));
              switch(uVar31) {
              case 1:
                if (pppppppdVar48 < pppppppdVar45) {
                  pppppppdVar46 = (double *******)&local_2098;
                  do {
                    *(undefined1 *)pppppppdVar48 = *(undefined1 *)pppppppdVar46;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar46 = pppppppdVar46 + 1;
                  } while (pppppppdVar48 < pppppppdVar45);
                }
                break;
              case 2:
                if (pppppppdVar48 < pppppppdVar45) {
                  pppppppdVar46 = (double *******)&local_2098;
                  do {
                    *(ushort *)pppppppdVar48 =
                         *(ushort *)pppppppdVar46 >> 8 | *(ushort *)pppppppdVar46 << 8;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar46 = pppppppdVar46 + 1;
                  } while (pppppppdVar48 < pppppppdVar45);
                }
                break;
              case 4:
                if (pppppppdVar48 < pppppppdVar45) {
                  pppppppdVar46 = (double *******)&local_2098;
                  do {
                    uVar31 = (*(uint *)pppppppdVar46 & 0xff00ff00) >> 8 |
                             (*(uint *)pppppppdVar46 & 0xff00ff) << 8;
                    *(uint *)pppppppdVar48 = uVar31 >> 0x10 | uVar31 << 0x10;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar46 = pppppppdVar46 + 1;
                  } while (pppppppdVar48 < pppppppdVar45);
                }
                break;
              case 8:
                if (pppppppdVar48 < pppppppdVar45) {
                  pppppppdVar46 = (double *******)&local_2098;
                  do {
                    uVar25 = ((ulong)*pppppppdVar46 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*pppppppdVar46 & 0xff00ff00ff00ff) << 8;
                    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar25 & 0xffff0000ffff) << 0x10;
                    *pppppppdVar48 = (double ******)(uVar25 >> 0x20 | uVar25 << 0x20);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar46 = pppppppdVar46 + 1;
                  } while (pppppppdVar48 < pppppppdVar45);
                }
              }
            }
            break;
          case 9:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x20);
            while( true ) {
              uVar31 = (uint)*puVar27;
              if ((uVar31 >> 0x14 & 1) != 0) break;
              if (((*puVar27 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
              goto LAB_03357e60;
            }
            if (puVar27 != (ulong *)0x0) {
              uVar31 = uVar31 & 0xfffff;
              uVar31 = (uint)(ushort)puVar27[(ulong)(byte)(POPCOUNT((char)uVar31) +
                                                           POPCOUNT((char)(uVar31 >> 8)) +
                                                          POPCOUNT((char)(uVar31 >> 0x10))) + 2];
              goto LAB_03357e64;
            }
LAB_03357e60:
            uVar31 = 0;
LAB_03357e64:
            pppppppdVar46 = (double *******)((long)pppppppdVar48 + (long)(int)(uVar30 * param_5));
            if (pppppppdVar48 < pppppppdVar46) {
              puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x18);
              while( true ) {
                uVar18 = (uint)*puVar27;
                if ((uVar18 >> 0x14 & 1) != 0) break;
                if (((*puVar27 & 1) != 0) ||
                   (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
                goto switchD_03359518_caseD_3;
              }
              if (puVar27 == (ulong *)0x0) {
switchD_03359518_caseD_3:
                do {
                } while( true );
              }
              uVar18 = uVar18 & 0xfffff;
              switch((short)puVar27[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                  POPCOUNT((char)(uVar18 >> 8)) +
                                                 POPCOUNT((char)(uVar18 >> 0x10))) + 2]) {
              case 1:
                switch(uVar31) {
                case 1:
                  do {
                    *(bool *)pppppppdVar48 = *(char *)pppppppdVar45 != '\0';
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                  } while (pppppppdVar48 < pppppppdVar46);
                  break;
                case 2:
                  do {
                    *(ushort *)pppppppdVar48 = (ushort)(*(char *)pppppppdVar45 != '\0');
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                  } while (pppppppdVar48 < pppppppdVar46);
                  break;
                default:
switchD_0335960c_caseD_3:
                  do {
                  } while( true );
                case 4:
                  do {
                    *(uint *)pppppppdVar48 = (uint)(*(char *)pppppppdVar45 != '\0');
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                  } while (pppppppdVar48 < pppppppdVar46);
                  break;
                case 8:
                  do {
                    *pppppppdVar48 = (double ******)(ulong)(*(char *)pppppppdVar45 != '\0');
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                  } while (pppppppdVar48 < pppppppdVar46);
                }
                break;
              case 2:
                if (uVar31 == 1) {
                  do {
                    *(bool *)pppppppdVar48 = *(short *)pppppppdVar45 != 0;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                  } while (pppppppdVar48 < pppppppdVar46);
                }
                else if (uVar31 == 2) {
                  do {
                    *(ushort *)pppppppdVar48 = (ushort)(*(short *)pppppppdVar45 != 0);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                  } while (pppppppdVar48 < pppppppdVar46);
                }
                else if (uVar31 == 4) {
                  do {
                    *(uint *)pppppppdVar48 = (uint)(*(short *)pppppppdVar45 != 0);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                  } while (pppppppdVar48 < pppppppdVar46);
                }
                else {
                  if (uVar31 != 8) goto switchD_0335960c_caseD_3;
                  do {
                    *pppppppdVar48 = (double ******)(ulong)(*(short *)pppppppdVar45 != 0);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                    pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                  } while (pppppppdVar48 < pppppppdVar46);
                }
                break;
              default:
                goto switchD_03359518_caseD_3;
              case 4:
                do {
                  if (7 < uVar31 - 1) goto switchD_0335960c_caseD_3;
                  uVar18 = *(uint *)pppppppdVar45;
                  switch(uVar31) {
                  case 1:
                    *(bool *)pppppppdVar48 = uVar18 != 0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar48 = (ushort)(uVar18 != 0);
                    break;
                  default:
                    goto switchD_0335960c_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar48 = (uint)(uVar18 != 0);
                    break;
                  case 8:
                    *pppppppdVar48 = (double ******)(ulong)(uVar18 != 0);
                  }
                  pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                  pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                } while (pppppppdVar48 < pppppppdVar46);
                break;
              case 8:
                do {
                  if (7 < uVar31 - 1) goto switchD_0335960c_caseD_3;
                  ppppppdVar64 = *pppppppdVar45;
                  switch(uVar31) {
                  case 1:
                    *(bool *)pppppppdVar48 = ppppppdVar64 != (double ******)0x0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar48 = (ushort)(ppppppdVar64 != (double ******)0x0);
                    break;
                  default:
                    goto switchD_0335960c_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar48 = (uint)(ppppppdVar64 != (double ******)0x0);
                    break;
                  case 8:
                    *pppppppdVar48 = (double ******)(ulong)(ppppppdVar64 != (double ******)0x0);
                  }
                  pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                  pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                } while (pppppppdVar48 < pppppppdVar46);
              }
            }
            break;
          case 10:
            lVar58 = lVar58 + lVar60 * 0x38;
            local_78 = *(ulong **)(lVar58 + 0x18);
            puVar27 = *(ulong **)(lVar58 + 0x20);
            local_2098 = pppppppdVar48;
            local_2090 = puVar27;
            if (puVar27 == (ulong *)0x0) {
              local_2088 = (long *)0x0;
            }
            else {
              do {
                uVar25 = *puVar27;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  local_2088 = (long *)puVar27[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  goto LAB_03357f0c;
                }
                puVar27 = (ulong *)puVar27[1];
              } while (puVar27 != (ulong *)0x0);
              local_2088 = (long *)0x0;
            }
LAB_03357f0c:
            if (((ulong)local_2088 & 1) != 0) {
              piVar5 = (int *)(((ulong)local_2088 & 0xfffffffffffffffe) + 8);
              do {
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar16) {
                  *piVar5 = *piVar5 + 1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
            }
            local_70 = (long *)0x0;
            puVar27 = local_78;
            if (local_78 != (ulong *)0x0) {
              do {
                uVar25 = *puVar27;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  local_70 = (long *)puVar27[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  goto LAB_033586b0;
                }
                puVar27 = (ulong *)puVar27[1];
              } while (puVar27 != (ulong *)0x0);
              local_70 = (long *)0x0;
            }
LAB_033586b0:
            if (((ulong)local_70 & 1) != 0) {
              piVar5 = (int *)(((ulong)local_70 & 0xfffffffffffffffe) + 8);
              do {
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar16) {
                  *piVar5 = *piVar5 + 1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
            }
            local_80 = pppppppdVar45;
            if (0 < (int)uVar14) {
              uVar31 = 0;
              do {
                for (puVar27 = local_78; (*puVar27 & 1) == 0; puVar27 = (ulong *)puVar27[1]) {
                }
                puVar35 = local_2090;
                if ((*local_2090 & 1) == 0) {
                  do {
                    puVar35 = (ulong *)puVar35[1];
                  } while ((*puVar35 & 1) == 0);
                }
                pcVar36 = *(code **)(param_1 + (puVar35[2] & 0x1f) * 0x48 + (puVar27[2] & 0x1f) * 8)
                ;
                if (pcVar36 != (code *)0x0) {
                  (*pcVar36)(&local_2098,&local_80);
                }
                plVar22 = local_2088;
                local_2088 = (long *)((ulong)local_2088 & 0xfffffffffffffffe);
                local_2098 = (double *******)((long)local_2098 + lVar62);
                if (((ulong)plVar22 & 1) != 0) {
                  plVar22 = local_2088 + 1;
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((local_2088 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*local_2088 + 8))();
                  }
                }
                local_80 = (double *******)((long)local_80 + lVar32);
                plVar22 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
                uVar25 = (ulong)local_70 & 1;
                local_70 = plVar22;
                if (uVar25 != 0) {
                  plVar23 = plVar22 + 1;
                  do {
                    lVar58 = *plVar23;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                    if (bVar16) {
                      *(int *)plVar23 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar22 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar22 + 8))();
                  }
                }
                uVar31 = uVar31 + 1;
              } while (uVar31 != uVar30);
            }
            if (((ulong)local_70 & 1) != 0) {
              plVar23 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
              plVar22 = plVar23 + 1;
              do {
                lVar58 = *plVar22;
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar16) {
                  *(int *)plVar22 = (int)lVar58 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if ((plVar23 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar23 + 8))();
              }
            }
            if (((ulong)local_2088 & 1) != 0) {
              plVar22 = (long *)((ulong)local_2088 & 0xfffffffffffffffe);
              plVar23 = plVar22 + 1;
              do {
                iVar17 = (int)*plVar23;
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar16) {
                  *(int *)plVar23 = iVar17 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              goto LAB_03359254;
            }
            break;
          case 0xb:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x20);
            puVar35 = puVar27;
            if ((*puVar27 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((puVar35[2] & 0x1f) != 8) {
              puVar27 = (ulong *)0x0;
            }
            puVar35 = puVar27;
            if ((*puVar27 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((puVar27 != (ulong *)0x0) && ((puVar35[2] & 0x1f) == 8)) {
              do {
                uVar25 = *puVar27;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  plVar22 = (long *)puVar27[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  if (((ulong)plVar22 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_03358fbc;
                }
                puVar27 = (ulong *)puVar27[1];
              } while (puVar27 != (ulong *)0x0);
            }
            plVar22 = (long *)0x0;
LAB_03358fbc:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x18);
            puVar35 = puVar27;
            if ((*puVar27 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((puVar35[2] & 0x1f) != 8) {
              puVar27 = (ulong *)0x0;
            }
            if (puVar27 != (ulong *)0x0) {
              puVar35 = puVar27;
LAB_03359000:
              uVar25 = *puVar35;
              if (((uint)uVar25 >> 2 & 1) == 0) goto code_r0x03359008;
              plVar23 = (long *)puVar35[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
              if (((ulong)plVar23 & 1) != 0) {
                plVar56 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
                plVar61 = plVar56 + 1;
                do {
                  cVar12 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                  if (bVar16) {
                    *(int *)plVar61 = (int)*plVar61 + 1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if ((int)uVar14 < 1) {
                  do {
                    lVar58 = *plVar61;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar16) {
                      *(int *)plVar61 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar56 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar56 + 8))();
                  }
                  goto LAB_03359238;
                }
                goto LAB_03359064;
              }
              goto LAB_03359018;
            }
LAB_03359010:
            plVar23 = (long *)0x0;
LAB_03359018:
            if ((int)uVar14 < 1) {
LAB_03359238:
              if (((ulong)plVar22 & 1) != 0) {
                plVar22 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
                plVar23 = plVar22 + 1;
                do {
                  iVar17 = (int)*plVar23;
                  cVar12 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar16) {
                    *(int *)plVar23 = iVar17 + -1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                goto LAB_03359254;
              }
            }
            else {
LAB_03359064:
              uVar31 = 0;
              do {
                if (((ulong)plVar22 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar16) {
                      *piVar5 = *piVar5 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
                plVar61 = (long *)((ulong)plVar23 & 0xfffffffffffffffe);
                if (((ulong)plVar23 & 1) != 0) {
                  plVar56 = plVar61 + 1;
                  do {
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar56,0x10);
                    if (bVar16) {
                      *(int *)plVar56 = (int)*plVar56 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
                local_2080 = 0;
                local_2088 = (long *)0x0;
                local_2090 = (ulong *)0x0;
                local_2098 = (double *******)0x0;
                (**(code **)(*plVar61 + 0x50))(plVar61,pppppppdVar45,puVar27,&local_2098);
                uVar18 = FUN_0335a1e0(*(undefined8 *)(param_1 + 0x288),local_2098,local_2090);
                *(uint *)pppppppdVar48 = uVar18;
                if ((local_2080 & 1) != 0) {
                  plVar21 = (long *)(local_2080 & 0xfffffffffffffffe);
                  plVar56 = plVar21 + 1;
                  do {
                    lVar58 = *plVar56;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar56,0x10);
                    if (bVar16) {
                      *(int *)plVar56 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar21 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar21 + 8))();
                  }
                }
                if (((ulong)plVar23 & 1) != 0) {
                  plVar56 = plVar61 + 1;
                  do {
                    lVar58 = *plVar56;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar56,0x10);
                    if (bVar16) {
                      *(int *)plVar56 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar61 + 8))(plVar61);
                  }
                }
                plVar56 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
                if (((ulong)plVar22 & 1) != 0) {
                  plVar22 = plVar56 + 1;
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar56 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar56 + 8))(plVar56);
                  }
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar56 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar56 + 8))(plVar56);
                  }
                }
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
                if (((ulong)plVar23 & 1) != 0) {
                  plVar22 = plVar61 + 1;
                  do {
                    lVar58 = *plVar22;
                    cVar12 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar16) {
                      *(int *)plVar22 = (int)lVar58 + -1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar58 == 1)) {
                    (**(code **)(*plVar61 + 8))(plVar61);
                  }
                }
                uVar31 = uVar31 + 1;
                plVar22 = plVar56;
                plVar23 = plVar61;
              } while (uVar31 != uVar8);
            }
            break;
          case 0xc:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x20);
            puVar35 = puVar27;
            if ((*puVar27 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((puVar35[2] & 0x1f) != 7) {
              puVar27 = (ulong *)0x0;
            }
            puVar35 = puVar27;
            if ((*puVar27 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((puVar27 != (ulong *)0x0) && ((puVar35[2] & 0x1f) == 7)) {
              do {
                uVar25 = *puVar27;
                if (((uint)uVar25 >> 2 & 1) != 0) {
                  uVar25 = puVar27[(uVar25 >> 1 & 1) + (uVar25 & 1) + 2];
                  if ((uVar25 & 1) != 0) {
                    piVar5 = (int *)((uVar25 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar12 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar16) {
                        *piVar5 = *piVar5 + 1;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                  }
                  goto LAB_033592a0;
                }
                puVar27 = (ulong *)puVar27[1];
              } while (puVar27 != (ulong *)0x0);
            }
            uVar25 = 0;
LAB_033592a0:
            puVar27 = *(ulong **)(lVar58 + lVar60 * 0x38 + 0x18);
            uVar49 = *puVar27;
            uVar31 = (uint)uVar49;
            puVar35 = puVar27;
            if ((uVar49 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            uVar59 = 0;
            if ((puVar27 != (ulong *)0x0) && ((puVar35[2] & 0x1f) == 7)) {
              while ((uVar31 >> 2 & 1) == 0) {
                puVar27 = (ulong *)puVar27[1];
                if (puVar27 == (ulong *)0x0) {
                  uVar59 = 0;
                  goto LAB_03359324;
                }
                uVar49 = *puVar27;
                uVar31 = (uint)uVar49;
              }
              uVar59 = puVar27[(uVar49 >> 1 & 1) + (uVar49 & 1) + 2];
            }
            if ((uVar59 & 1) != 0) {
              piVar5 = (int *)((uVar59 & 0xfffffffffffffffe) + 8);
              do {
                cVar12 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar16) {
                  *piVar5 = *piVar5 + 1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
            }
LAB_03359324:
            if ((int)uVar14 < 1) {
              bVar16 = true;
            }
            else {
              uVar49 = FUN_0220e630(PTR_DAT_047e66b8,"Not implemented");
              bVar16 = false;
              if ((uVar49 & 1) != 0) {
                CallSupervisor(0x26);
              }
            }
            if ((uVar59 & 1) != 0) {
              plVar23 = (long *)(uVar59 & 0xfffffffffffffffe);
              plVar22 = plVar23 + 1;
              do {
                lVar58 = *plVar22;
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar13) {
                  *(int *)plVar22 = (int)lVar58 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if ((plVar23 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar23 + 8))();
              }
            }
            if ((uVar25 & 1) != 0) {
              plVar23 = (long *)(uVar25 & 0xfffffffffffffffe);
              plVar22 = plVar23 + 1;
              do {
                lVar58 = *plVar22;
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar13) {
                  *(int *)plVar22 = (int)lVar58 + -1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if ((plVar23 != (long *)0x0) && ((int)lVar58 == 1)) {
                (**(code **)(*plVar23 + 8))();
              }
            }
joined_r0x033593c4:
            if (!bVar16) goto LAB_0335a0f0;
            break;
          case 0xd:
            uVar31 = *(uint *)(lVar58 + lVar60 * 0x38 + 0x18);
            uVar25 = (ulong)uVar31;
            if (uVar31 == param_5 && uVar31 == param_6) {
              pppppppdVar46 = pppppppdVar45;
LAB_03357bfc:
              memcpy(pppppppdVar48,pppppppdVar46,(long)(int)(uVar30 * param_6));
            }
            else if ((0 < (int)uVar14) && (0 < (int)uVar31)) {
              uVar18 = 0;
              do {
                if (uVar25 - 1 < 7) {
                  uVar49 = 0;
                }
                else {
                  uVar49 = 0;
                  do {
                    puVar29 = (undefined1 *)((long)pppppppdVar45 + uVar49);
                    puVar57 = (undefined1 *)((long)pppppppdVar48 + uVar49);
                    uVar49 = uVar49 + 8;
                    *puVar57 = *puVar29;
                    puVar57[1] = puVar29[1];
                    puVar57[2] = puVar29[2];
                    puVar57[3] = puVar29[3];
                    puVar57[4] = puVar29[4];
                    puVar57[5] = puVar29[5];
                    puVar57[6] = puVar29[6];
                    puVar57[7] = puVar29[7];
                  } while ((uVar25 & 0xfffffff8) != uVar49);
                }
                if ((uVar31 & 7) != 0) {
                  uVar59 = uVar25 & 7;
                  do {
                    uVar59 = uVar59 - 1;
                    *(undefined1 *)((long)pppppppdVar48 + uVar49) =
                         *(undefined1 *)((long)pppppppdVar45 + uVar49);
                    uVar49 = uVar49 + 1;
                  } while (uVar59 != 0);
                }
                uVar18 = uVar18 + 1;
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar62);
                pppppppdVar45 = (double *******)((long)pppppppdVar45 + lVar32);
              } while (uVar18 != uVar30);
            }
          }
switchD_03359cf0_caseD_3:
          iVar50 = iVar50 + 1;
        } while (iVar9 != iVar50);
      }
      iVar19 = uVar30 + iVar19;
    } while (iVar19 < param_7);
  }
  if ((int)local_2ca0 != 0) {
    lVar32 = (long)(int)local_2ca0 * 0x30;
    puVar43 = (undefined8 *)(local_2ca8 + 0x18);
    do {
      lVar32 = lVar32 + -0x30;
      local_2098 = (double *******)0x0;
      (**(code **)(*(long *)(puVar43[2] & 0xfffffffffffffffe) + 0x38))
                ((long *)(puVar43[2] & 0xfffffffffffffffe),*puVar43,puVar43[1],&local_2098);
      iVar19 = (**(code **)(*(long *)(puVar43[-1] & 0xfffffffffffffffe) + 0x30))
                         ((long *)(puVar43[-1] & 0xfffffffffffffffe),puVar43[-3],puVar43[-2],
                          local_2098);
      if (lVar32 == 0) break;
      puVar43 = puVar43 + 6;
    } while (-1 < iVar19);
LAB_0335a0f0:
    puVar29 = local_2ca8;
    if ((int)local_2ca0 != 0) {
      puVar57 = local_2ca8 + (long)(int)local_2ca0 * 0x30;
      do {
        if ((*(ulong *)(puVar57 + -8) & 1) != 0) {
          plVar23 = (long *)(*(ulong *)(puVar57 + -8) & 0xfffffffffffffffe);
          plVar22 = plVar23 + 1;
          do {
            lVar32 = *plVar22;
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar16) {
              *(int *)plVar22 = (int)lVar32 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if ((plVar23 != (long *)0x0) && ((int)lVar32 == 1)) {
            (**(code **)(*plVar23 + 8))();
          }
        }
        puVar27 = (ulong *)(puVar57 + -0x20);
        puVar57 = puVar57 + -0x30;
        if ((*puVar27 & 1) != 0) {
          plVar23 = (long *)(*puVar27 & 0xfffffffffffffffe);
          plVar22 = plVar23 + 1;
          do {
            lVar32 = *plVar22;
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar16) {
              *(int *)plVar22 = (int)lVar32 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if ((plVar23 != (long *)0x0) && ((int)lVar32 == 1)) {
            (**(code **)(*plVar23 + 8))();
          }
        }
      } while (puVar57 != puVar29);
    }
  }
  lVar32 = local_2ca0;
  uVar51 = (ulong)local_2ca0._4_4_;
  local_2ca0 = (ulong)local_2ca0._4_4_ << 0x20;
  if ((-1 < lVar32) && (local_2ca8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_2ca8,uVar51 * 0x30);
  }
  return;
code_r0x03359008:
  puVar35 = (ulong *)puVar35[1];
  if (puVar35 == (ulong *)0x0) goto LAB_03359010;
  goto LAB_03359000;
code_r0x033585bc:
  puVar28 = (ulong *)puVar28[1];
  if (puVar28 == (ulong *)0x0) goto LAB_033585c4;
  goto LAB_033585b4;
code_r0x03357a1c:
  puVar35 = (ulong *)puVar35[1];
  if (puVar35 == (ulong *)0x0) goto LAB_03357a24;
  goto LAB_03357a14;
}


