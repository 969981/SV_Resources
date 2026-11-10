/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03328288; name: FUN_03328288
 */


void FUN_03328288(long param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6,
                 int param_7)

{
  ushort *puVar1;
  uint *puVar2;
  double ******ppppppdVar3;
  undefined *puVar4;
  int *piVar5;
  long *plVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 uVar11;
  ushort uVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  undefined *puVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  byte *pbVar30;
  ulong *puVar31;
  ulong *puVar32;
  undefined1 *puVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  byte *pbVar38;
  ulong *puVar39;
  code *pcVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  double ******ppppppdVar46;
  undefined8 *puVar47;
  double ******ppppppdVar48;
  double ******ppppppdVar49;
  double ******ppppppdVar50;
  long lVar51;
  double ******ppppppdVar52;
  long lVar53;
  ulong uVar54;
  int iVar55;
  ulong uVar56;
  undefined4 uVar57;
  long *plVar58;
  int iVar59;
  long *plVar60;
  undefined1 *puVar61;
  long lVar62;
  ulong uVar63;
  long lVar64;
  float fVar65;
  double *****pppppdVar66;
  undefined1 *local_2ca8;
  undefined8 local_2ca0;
  undefined1 local_2c98 [3072];
  double ******local_2098;
  ulong *local_2090;
  long *local_2088;
  ulong local_2080;
  double ******local_98;
  ulong *local_90;
  long *local_88;
  double ******local_80;
  ulong *local_78;
  long *local_70;
  
  local_2ca8 = local_2c98;
  local_2ca0 = -0x7fffffc000000000;
  if (0 < param_7) {
    lVar42 = (long)(int)param_5;
    lVar51 = lVar42 * 2;
    lVar36 = (long)(int)param_6;
    lVar53 = lVar36 * 2;
    iVar23 = 0;
    puVar4 = PTR_PTR_047d1a50 + 0x20;
    do {
      lVar43 = (long)iVar23;
      uVar15 = param_7 - iVar23;
      uVar34 = uVar15;
      if (0x3ff < (int)uVar15) {
        uVar34 = 0x400;
      }
      iVar10 = *(int *)(param_2 + 0x10);
      if (iVar10 != 0) {
        iVar55 = 0;
        uVar9 = uVar34;
        if ((int)uVar34 < 2) {
          uVar9 = 1;
        }
        ppppppdVar3 = (double ******)(local_2c98 + (long)(int)(uVar34 << 3) + 0xc00);
        uVar56 = (ulong)uVar34;
        uVar37 = uVar56 & 0xfffffffe;
        lVar44 = lVar42 * (lVar43 + 1);
        lVar28 = lVar42 * lVar43;
        do {
          lVar62 = *(long *)(param_2 + 8);
          lVar45 = lVar62 + (long)iVar55 * 0x38;
          if (0xc < *(byte *)(lVar45 + 8) - 1) goto switchD_0332ad58_caseD_3;
          lVar64 = (long)iVar55;
          uVar29 = (ulong)*(ushort *)(lVar45 + 0xc);
          ppppppdVar52 = (double ******)(param_3 + lVar43 * lVar42 + uVar29);
          ppppppdVar49 = (double ******)
                         (param_4 + lVar43 * lVar36 + (ulong)*(ushort *)(lVar45 + 10));
          switch((uint)*(byte *)(lVar45 + 8)) {
          case 1:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x20);
            puVar39 = puVar31;
            if ((*puVar31 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            if ((puVar39[2] & 0x1f) != 2) {
              puVar31 = (ulong *)0x0;
            }
            if (puVar31 != (ulong *)0x0) {
              puVar39 = puVar31;
              do {
                uVar29 = *puVar39;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar25 = (long *)puVar39[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar25 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar25 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03328dbc;
                }
                puVar39 = (ulong *)puVar39[1];
              } while (puVar39 != (ulong *)0x0);
            }
            plVar25 = (long *)0x0;
LAB_03328dbc:
            puVar39 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x18);
            puVar32 = puVar39;
            if ((*puVar39 & 1) == 0) {
              do {
                puVar32 = (ulong *)puVar32[1];
              } while ((*puVar32 & 1) == 0);
            }
            if ((puVar32[2] & 0x1f) != 2) {
              puVar39 = (ulong *)0x0;
            }
            if (puVar39 != (ulong *)0x0) {
              puVar32 = puVar39;
              do {
                uVar29 = *puVar32;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar27 = (long *)puVar32[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar27 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar27 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03329270;
                }
                puVar32 = (ulong *)puVar32[1];
              } while (puVar32 != (ulong *)0x0);
            }
            plVar27 = (long *)0x0;
LAB_03329270:
            if ((int)uVar15 < 1) {
              bVar18 = true;
            }
            else {
              uVar35 = 0;
              do {
                local_2098 = (double ******)((ulong)local_2098 & 0xffffffffffffff00);
                plVar58 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
                (**(code **)(*plVar58 + 0x38))(plVar58,ppppppdVar49,puVar39,&local_2098);
                plVar60 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
                iVar20 = (**(code **)(*plVar60 + 0x30))
                                   (plVar60,ppppppdVar52,puVar31,(ulong)local_2098 & 0xff);
                if (iVar20 < 0) {
                  bVar18 = false;
                  goto joined_r0x03329374;
                }
                if (((ulong)plVar25 & 1) != 0) {
                  plVar25 = plVar60 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar60 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar60 + 8))(plVar60);
                  }
                }
                ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                if (((ulong)plVar27 & 1) != 0) {
                  plVar25 = plVar58 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar58 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar58 + 8))(plVar58);
                  }
                }
                uVar35 = uVar35 + 1;
                plVar27 = plVar58;
                plVar25 = plVar60;
              } while (uVar35 != uVar9);
              bVar18 = true;
            }
joined_r0x03329374:
            if (((ulong)plVar27 & 1) != 0) {
              plVar27 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
              plVar58 = plVar27 + 1;
              do {
                lVar62 = *plVar58;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                if (bVar14) {
                  *(int *)plVar58 = (int)lVar62 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar27 != (long *)0x0) && ((int)lVar62 == 1)) {
                (**(code **)(*plVar27 + 8))();
              }
            }
            if (((ulong)plVar25 & 1) != 0) {
              plVar25 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
              plVar27 = plVar25 + 1;
              do {
                iVar20 = (int)*plVar27;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar14) {
                  *(int *)plVar27 = iVar20 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
LAB_03329968:
              if ((plVar25 != (long *)0x0) && (iVar20 == 1)) {
                (**(code **)(*plVar25 + 8))();
              }
            }
            goto joined_r0x03329f64;
          case 2:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x20);
            puVar39 = puVar31;
            if ((*puVar31 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            if ((puVar39[2] & 0x1f) != 4) {
              puVar31 = (ulong *)0x0;
            }
            if (puVar31 != (ulong *)0x0) {
              puVar39 = puVar31;
              do {
                uVar29 = *puVar39;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar25 = (long *)puVar39[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar25 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar25 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03328e4c;
                }
                puVar39 = (ulong *)puVar39[1];
              } while (puVar39 != (ulong *)0x0);
            }
            plVar25 = (long *)0x0;
LAB_03328e4c:
            puVar39 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x18);
            puVar32 = puVar39;
            if ((*puVar39 & 1) == 0) {
              do {
                puVar32 = (ulong *)puVar32[1];
              } while ((*puVar32 & 1) == 0);
            }
            if ((puVar32[2] & 0x1f) != 4) {
              puVar39 = (ulong *)0x0;
            }
            if (puVar39 != (ulong *)0x0) {
              puVar32 = puVar39;
              do {
                uVar29 = *puVar32;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar27 = (long *)puVar32[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar27 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar27 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_033293ac;
                }
                puVar32 = (ulong *)puVar32[1];
              } while (puVar32 != (ulong *)0x0);
            }
            plVar27 = (long *)0x0;
LAB_033293ac:
            if ((int)uVar15 < 1) {
              bVar18 = true;
            }
            else {
              uVar35 = 0;
              do {
                local_2098 = (double ******)0x0;
                plVar58 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
                local_2090 = (ulong *)((ulong)local_2090 & 0xffffffffffffff00);
                (**(code **)(*plVar58 + 0x38))(plVar58,ppppppdVar49,puVar39,&local_2098);
                plVar60 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
                iVar20 = (**(code **)(*plVar60 + 0x30))(plVar60,ppppppdVar52,puVar31,&local_2098);
                if (iVar20 < 0) {
                  bVar18 = false;
                  goto joined_r0x033294c4;
                }
                if (((ulong)plVar25 & 1) != 0) {
                  plVar25 = plVar60 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar60 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar60 + 8))(plVar60);
                  }
                }
                ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                if (((ulong)plVar27 & 1) != 0) {
                  plVar25 = plVar58 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar58 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar58 + 8))(plVar58);
                  }
                }
                uVar35 = uVar35 + 1;
                plVar27 = plVar58;
                plVar25 = plVar60;
              } while (uVar35 != uVar9);
              bVar18 = true;
            }
joined_r0x033294c4:
            if (((ulong)plVar27 & 1) != 0) {
              plVar27 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
              plVar58 = plVar27 + 1;
              do {
                lVar62 = *plVar58;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                if (bVar14) {
                  *(int *)plVar58 = (int)lVar62 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar27 != (long *)0x0) && ((int)lVar62 == 1)) {
                (**(code **)(*plVar27 + 8))();
              }
            }
            if (((ulong)plVar25 & 1) != 0) {
              plVar25 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
              plVar27 = plVar25 + 1;
              do {
                iVar20 = (int)*plVar27;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar14) {
                  *(int *)plVar27 = iVar20 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              goto LAB_03329968;
            }
            goto joined_r0x03329f64;
          case 3:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x20);
            puVar39 = puVar31;
            if ((*puVar31 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            if ((puVar39[2] & 0x1f) != 5) {
              puVar31 = (ulong *)0x0;
            }
            if (puVar31 != (ulong *)0x0) {
              puVar39 = puVar31;
              do {
                uVar29 = *puVar39;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar25 = (long *)puVar39[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar25 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar25 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03328edc;
                }
                puVar39 = (ulong *)puVar39[1];
              } while (puVar39 != (ulong *)0x0);
            }
            plVar25 = (long *)0x0;
LAB_03328edc:
            puVar39 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x18);
            puVar32 = puVar39;
            if ((*puVar39 & 1) == 0) {
              do {
                puVar32 = (ulong *)puVar32[1];
              } while ((*puVar32 & 1) == 0);
            }
            if ((puVar32[2] & 0x1f) != 5) {
              puVar39 = (ulong *)0x0;
            }
            if (puVar39 != (ulong *)0x0) {
              puVar32 = puVar39;
              do {
                uVar29 = *puVar32;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar27 = (long *)puVar32[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar27 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar27 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_033294fc;
                }
                puVar32 = (ulong *)puVar32[1];
              } while (puVar32 != (ulong *)0x0);
            }
            plVar27 = (long *)0x0;
LAB_033294fc:
            if ((int)uVar15 < 1) {
              bVar18 = true;
            }
            else {
              uVar35 = 0;
              do {
                local_2098 = (double ******)0x0;
                plVar58 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
                (**(code **)(*plVar58 + 0x38))(plVar58,ppppppdVar49,puVar39,&local_2098);
                plVar60 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
                iVar20 = (**(code **)(*plVar60 + 0x30))(local_2098,plVar60,ppppppdVar52,puVar31);
                if (iVar20 < 0) {
                  bVar18 = false;
                  goto joined_r0x03329600;
                }
                if (((ulong)plVar25 & 1) != 0) {
                  plVar25 = plVar60 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar60 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar60 + 8))(plVar60);
                  }
                }
                ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                if (((ulong)plVar27 & 1) != 0) {
                  plVar25 = plVar58 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar58 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar58 + 8))(plVar58);
                  }
                }
                uVar35 = uVar35 + 1;
                plVar27 = plVar58;
                plVar25 = plVar60;
              } while (uVar35 != uVar9);
              bVar18 = true;
            }
joined_r0x03329600:
            if (((ulong)plVar27 & 1) != 0) {
              plVar27 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
              plVar58 = plVar27 + 1;
              do {
                lVar62 = *plVar58;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                if (bVar14) {
                  *(int *)plVar58 = (int)lVar62 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar27 != (long *)0x0) && ((int)lVar62 == 1)) {
                (**(code **)(*plVar27 + 8))();
              }
            }
            if (((ulong)plVar25 & 1) != 0) {
              plVar25 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
              plVar27 = plVar25 + 1;
              do {
                iVar20 = (int)*plVar27;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar14) {
                  *(int *)plVar27 = iVar20 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              goto LAB_03329968;
            }
            goto joined_r0x03329f64;
          case 4:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x20);
            uVar29 = *puVar31;
            uVar35 = (uint)uVar29;
            puVar39 = puVar31;
            if ((uVar29 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            uVar54 = 0;
            if ((puVar31 != (ulong *)0x0) && ((puVar39[2] & 0x1f) == 6)) {
              while ((uVar35 >> 2 & 1) == 0) {
                puVar31 = (ulong *)puVar31[1];
                if (puVar31 == (ulong *)0x0) {
                  uVar54 = 0;
                  goto LAB_03329f8c;
                }
                uVar29 = *puVar31;
                uVar35 = (uint)uVar29;
              }
              uVar54 = puVar31[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
              if ((uVar54 & 1) != 0) {
                piVar5 = (int *)((uVar54 & 0xfffffffffffffffe) + 8);
                do {
                  cVar13 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                  if (bVar18) {
                    *piVar5 = *piVar5 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
            }
LAB_03329f8c:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x18);
            puVar39 = puVar31;
            if ((*puVar31 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            if ((puVar39[2] & 0x1f) != 6) {
              puVar31 = (ulong *)0x0;
            }
            if (puVar31 != (ulong *)0x0) {
              puVar39 = puVar31;
LAB_03329fd0:
              uVar29 = *puVar39;
              if (((uint)uVar29 >> 2 & 1) == 0) goto code_r0x03329fd8;
              plVar25 = (long *)puVar39[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
              if (((ulong)plVar25 & 1) != 0) {
                plVar58 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
                plVar27 = plVar58 + 1;
                do {
                  cVar13 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar18) {
                    *(int *)plVar27 = (int)*plVar27 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                do {
                  cVar13 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar18) {
                    *(int *)plVar27 = (int)*plVar27 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (0 < (int)uVar15) goto LAB_0332a044;
                do {
                  lVar62 = *plVar27;
                  cVar13 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar18) {
                    *(int *)plVar27 = (int)lVar62 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if ((plVar58 != (long *)0x0) && ((int)lVar62 == 1)) {
                  (**(code **)(*plVar58 + 8))(plVar58);
                }
                goto LAB_0332a370;
              }
              goto LAB_03329fe8;
            }
LAB_03329fe0:
            plVar25 = (long *)0x0;
LAB_03329fe8:
            if (0 < (int)uVar15) {
LAB_0332a044:
              uVar35 = 0;
              plVar27 = plVar25;
              do {
                local_78 = (ulong *)0x0;
                local_70 = (long *)0x0;
                plVar58 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
                local_80 = (double ******)0x0;
                (**(code **)(*plVar58 + 0x50))(plVar58,ppppppdVar49,puVar31,&local_80);
                ppppppdVar50 = local_80;
                uVar29 = *(ulong *)(param_1 + 0x288);
                if (((ulong)plVar27 & 1) != 0) {
                  plVar60 = plVar58 + 1;
                  do {
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
                    if (bVar18) {
                      *(int *)plVar60 = (int)*plVar60 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                local_98 = ppppppdVar49;
                local_90 = puVar31;
                local_88 = plVar27;
                if (*(ulong *)(uVar29 + 0x60) == ((ulong)plVar27 & 0xfffffffffffffffe)) {
                  plVar60 = (long *)(uVar29 + 0x200);
                }
                else {
                  plVar60 = *(long **)(uVar29 + 0x1f8);
                  puVar39 = puVar31;
                  do {
                    uVar21 = (uint)*puVar39;
                    if ((uVar21 >> 0x1a & 1) != 0) {
                      uVar63 = 0;
                      if (puVar39 != (ulong *)0x0) {
                        uVar63 = CONCAT44(uVar21,uVar21) & 0x3ffffff03ffffff;
                        uVar63 = puVar39[(ulong)(byte)(POPCOUNT((char)uVar63) +
                                                       POPCOUNT((char)(uVar63 >> 8)) +
                                                      POPCOUNT((char)(uVar63 >> 0x10)) +
                                                      POPCOUNT((char)(uVar63 >> 0x18))) + 2];
                      }
                      goto LAB_0332a118;
                    }
                    if ((*puVar39 & 1) != 0) {
                      uVar63 = 0;
                      goto LAB_0332a118;
                    }
                    puVar39 = (ulong *)puVar39[1];
                  } while (puVar39 != (ulong *)0x0);
                  uVar63 = 0;
LAB_0332a118:
                  if (uVar63 == uVar29) {
                    plVar24 = *(long **)(((ulong)plVar27 & 0xfffffffffffffffe) + 0x10);
                    if (((ulong)plVar24 & 1) != 0) {
                      piVar5 = (int *)(((ulong)plVar24 & 0xfffffffffffffffe) + 8);
                      do {
                        cVar13 = '\x01';
                        bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                        if (bVar18) {
                          *piVar5 = *piVar5 + 1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                      do {
                        cVar13 = '\x01';
                        bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                        if (bVar18) {
                          *piVar5 = *piVar5 + 1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                    }
                    if (((ulong)plVar27 & 1) != 0) {
                      plVar26 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
                      plVar6 = plVar26 + 1;
                      do {
                        lVar62 = *plVar6;
                        cVar13 = '\x01';
                        bVar18 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                        if (bVar18) {
                          *(int *)plVar6 = (int)lVar62 + -1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                      if ((plVar26 != (long *)0x0) && ((int)lVar62 == 1)) {
                        (**(code **)(*plVar26 + 8))();
                      }
                    }
                    local_88 = plVar24;
                    if (((ulong)plVar24 & 1) == 0) {
                    }
                    else {
                      plVar24 = (long *)((ulong)plVar24 & 0xfffffffffffffffe);
                      plVar6 = plVar24 + 1;
                      do {
                        lVar62 = *plVar6;
                        cVar13 = '\x01';
                        bVar18 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                        if (bVar18) {
                          *(int *)plVar6 = (int)lVar62 + -1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                      if (plVar24 != (long *)0x0) {
                        if ((int)lVar62 == 1) {
                          (**(code **)(*plVar24 + 8))();
                        }
                      }
                    }
                  }
                }
                (**(code **)(*plVar60 + 0x20))(&local_2098,plVar60,&local_98);
                if (local_2098 == (double ******)0x0) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = FUN_0332b25c(uVar29);
                }
                if (((ulong)local_2088 & 1) != 0) {
                  plVar24 = (long *)((ulong)local_2088 & 0xfffffffffffffffe);
                  plVar60 = plVar24 + 1;
                  do {
                    lVar62 = *plVar60;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
                    if (bVar18) {
                      *(int *)plVar60 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar24 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar24 + 8))();
                  }
                }
                if (((ulong)local_88 & 1) != 0) {
                  plVar24 = (long *)((ulong)local_88 & 0xfffffffffffffffe);
                  plVar60 = plVar24 + 1;
                  do {
                    lVar62 = *plVar60;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
                    if (bVar18) {
                      *(int *)plVar60 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar24 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar24 + 8))();
                  }
                }
                if (uVar21 == 0) {
                  if (ppppppdVar50 == (double ******)0x0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = FUN_0332b25c(*(undefined8 *)(param_1 + 0x288),ppppppdVar50);
                  }
                }
                *(uint *)ppppppdVar52 = uVar21;
                if (((ulong)plVar27 & 1) != 0) {
                  plVar27 = plVar58 + 1;
                  do {
                    lVar62 = *plVar27;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar18) {
                      *(int *)plVar27 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar58 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar58 + 8))(plVar58);
                  }
                }
                ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                if (((ulong)local_70 & 1) != 0) {
                  plVar60 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
                  plVar27 = plVar60 + 1;
                  do {
                    lVar62 = *plVar27;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar18) {
                      *(int *)plVar27 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar60 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar60 + 8))();
                  }
                }
                uVar35 = uVar35 + 1;
                plVar27 = plVar58;
              } while (uVar35 != uVar34);
              if (((ulong)plVar25 & 1) != 0) {
                plVar58 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
LAB_0332a370:
                plVar25 = plVar58 + 1;
                do {
                  lVar62 = *plVar25;
                  cVar13 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar18) {
                    *(int *)plVar25 = (int)lVar62 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if ((plVar58 != (long *)0x0) && ((int)lVar62 == 1)) {
                  (**(code **)(*plVar58 + 8))(plVar58);
                }
              }
            }
            if ((uVar54 & 1) != 0) {
              plVar25 = (long *)(uVar54 & 0xfffffffffffffffe);
              plVar27 = plVar25 + 1;
              do {
                iVar20 = (int)*plVar27;
                cVar13 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar18) {
                  *(int *)plVar27 = iVar20 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
LAB_0332a3bc:
              if ((plVar25 != (long *)0x0) && (iVar20 == 1)) {
                (**(code **)(*plVar25 + 8))();
              }
            }
            break;
          case 5:
            if ((int)(local_2ca0._4_4_ & 0x7fffffff) < (int)((int)local_2ca0 + uVar34)) {
              FUN_03218528(&local_2ca8,puVar4);
            }
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x20);
            puVar39 = puVar31;
            if ((*puVar31 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            if ((puVar39[2] & 0x1f) != 3) {
              puVar31 = (ulong *)0x0;
            }
            if (puVar31 != (ulong *)0x0) {
              puVar39 = puVar31;
              do {
                uVar29 = *puVar39;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar25 = (long *)puVar39[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar25 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar25 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03328f6c;
                }
                puVar39 = (ulong *)puVar39[1];
              } while (puVar39 != (ulong *)0x0);
            }
            plVar25 = (long *)0x0;
LAB_03328f6c:
            puVar39 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x18);
            puVar32 = puVar39;
            if ((*puVar39 & 1) == 0) {
              do {
                puVar32 = (ulong *)puVar32[1];
              } while ((*puVar32 & 1) == 0);
            }
            if ((puVar32[2] & 0x1f) != 3) {
              puVar39 = (ulong *)0x0;
            }
            if (puVar39 != (ulong *)0x0) {
              puVar32 = puVar39;
LAB_03328fb0:
              uVar29 = *puVar32;
              if (((uint)uVar29 >> 2 & 1) == 0) goto code_r0x03328fb8;
              plVar27 = (long *)puVar32[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
              if (((ulong)plVar27 & 1) != 0) {
                plVar60 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
                plVar58 = plVar60 + 1;
                do {
                  cVar13 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                  if (bVar18) {
                    *(int *)plVar58 = (int)*plVar58 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if ((int)uVar15 < 1) {
                  do {
                    lVar62 = *plVar58;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                    if (bVar18) {
                      *(int *)plVar58 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar60 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar60 + 8))();
                  }
                  goto LAB_03329838;
                }
                goto LAB_03329644;
              }
              goto LAB_03328fc8;
            }
LAB_03328fc0:
            plVar27 = (long *)0x0;
LAB_03328fc8:
            if ((int)uVar15 < 1) {
LAB_03329838:
              if (((ulong)plVar25 & 1) != 0) {
                plVar25 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
                plVar27 = plVar25 + 1;
                do {
                  iVar20 = (int)*plVar27;
                  cVar13 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar18) {
                    *(int *)plVar27 = iVar20 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                goto LAB_0332a3bc;
              }
            }
            else {
LAB_03329644:
              uVar35 = 0;
              do {
                if (((ulong)plVar25 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar25 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar18) {
                      *piVar5 = *piVar5 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                if (((ulong)plVar27 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar27 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar18) {
                      *piVar5 = *piVar5 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                lVar62 = (long)(int)local_2ca0;
                if ((int)(local_2ca0._4_4_ & 0x7fffffff) <= (int)local_2ca0) {
                  FUN_03218528(&local_2ca8,PTR_PTR_047d1a50 + 0x20,lVar62 + 1);
                }
                puVar47 = (undefined8 *)(local_2ca8 + (long)(int)local_2ca0 * 0x30);
                *puVar47 = ppppppdVar52;
                puVar47[1] = puVar31;
                puVar47[2] = plVar25;
                if (((ulong)plVar25 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar25 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar18) {
                      *piVar5 = *piVar5 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                *(long **)(local_2ca8 + (long)(int)local_2ca0 * 0x30 + 0x28) = plVar27;
                *(double *******)(local_2ca8 + (long)(int)local_2ca0 * 0x30 + 0x18) = ppppppdVar49;
                *(ulong **)(local_2ca8 + (long)(int)local_2ca0 * 0x30 + 0x20) = puVar39;
                uVar57 = (undefined4)(lVar62 + 1);
                if (((ulong)plVar27 & 1) == 0) {
                  local_2ca0 = CONCAT44(local_2ca0._4_4_,uVar57);
                }
                else {
                  plVar60 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
                  plVar58 = plVar60 + 1;
                  do {
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                    if (bVar18) {
                      *(int *)plVar58 = (int)*plVar58 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  local_2ca0 = CONCAT44(local_2ca0._4_4_,uVar57);
                  do {
                    lVar62 = *plVar58;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                    if (bVar18) {
                      *(int *)plVar58 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar60 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar60 + 8))();
                  }
                }
                plVar58 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
                if (((ulong)plVar25 & 1) != 0) {
                  plVar25 = plVar58 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar58 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar58 + 8))(plVar58);
                  }
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar58 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar58 + 8))(plVar58);
                  }
                }
                ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                plVar60 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
                ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                if (((ulong)plVar27 & 1) != 0) {
                  plVar25 = plVar60 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar60 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar60 + 8))(plVar60);
                  }
                }
                uVar35 = uVar35 + 1;
                plVar25 = plVar58;
                plVar27 = plVar60;
              } while (uVar35 != uVar9);
            }
            break;
          case 6:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x20);
            if (puVar31 != (ulong *)0x0) {
              puVar39 = puVar31;
              do {
                uVar29 = *puVar39;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  uVar29 = puVar39[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if ((uVar29 & 1) != 0) {
                    piVar5 = (int *)((uVar29 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03328d08;
                }
                puVar39 = (ulong *)puVar39[1];
              } while (puVar39 != (ulong *)0x0);
            }
            uVar29 = 0;
LAB_03328d08:
            puVar39 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x18);
            if (puVar39 != (ulong *)0x0) {
              puVar32 = puVar39;
              do {
                uVar54 = *puVar32;
                if (((uint)uVar54 >> 2 & 1) != 0) {
                  uVar54 = puVar32[(uVar54 >> 1 & 1) + (uVar54 & 1) + 2];
                  if ((uVar54 & 1) != 0) {
                    piVar5 = (int *)((uVar54 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03329008;
                }
                puVar32 = (ulong *)puVar32[1];
              } while (puVar32 != (ulong *)0x0);
            }
            uVar54 = 0;
LAB_03329008:
            iVar20 = (**(code **)(lVar62 + lVar64 * 0x38 + 0x28))
                               (ppppppdVar52,puVar31,ppppppdVar49,puVar39,uVar34);
            if ((uVar54 & 1) != 0) {
              plVar27 = (long *)(uVar54 & 0xfffffffffffffffe);
              plVar25 = plVar27 + 1;
              do {
                lVar62 = *plVar25;
                cVar13 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar18) {
                  *(int *)plVar25 = (int)lVar62 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar27 != (long *)0x0) && ((int)lVar62 == 1)) {
                (**(code **)(*plVar27 + 8))();
              }
            }
            if ((uVar29 & 1) != 0) {
              plVar27 = (long *)(uVar29 & 0xfffffffffffffffe);
              plVar25 = plVar27 + 1;
              do {
                lVar62 = *plVar25;
                cVar13 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar18) {
                  *(int *)plVar25 = (int)lVar62 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar27 != (long *)0x0) && ((int)lVar62 == 1)) {
                (**(code **)(*plVar27 + 8))();
              }
            }
            if (iVar20 < 0) goto LAB_0332b16c;
            break;
          case 7:
            pbVar30 = *(byte **)(lVar62 + lVar64 * 0x38 + 0x20);
            pbVar38 = pbVar30;
            if ((*pbVar30 & 1) == 0) {
              do {
                pbVar38 = *(byte **)(pbVar38 + 8);
              } while ((*pbVar38 & 1) == 0);
            }
            if ((*(ulong *)(pbVar38 + 0x10) & 0x1f) != 4) {
              pbVar30 = (byte *)0x0;
            }
            for (; (*pbVar30 & 1) == 0; pbVar30 = *(byte **)(pbVar30 + 8)) {
            }
            pbVar38 = *(byte **)(lVar62 + lVar64 * 0x38 + 0x18);
            uVar35 = *(uint *)(pbVar30 + 0x10);
            pbVar30 = pbVar38;
            if ((*pbVar38 & 1) == 0) {
              do {
                pbVar30 = *(byte **)(pbVar30 + 8);
              } while ((*pbVar30 & 1) == 0);
            }
            if ((*(ulong *)(pbVar30 + 0x10) & 0x1f) != 4) {
              pbVar38 = (byte *)0x0;
            }
            for (; (*pbVar38 & 1) == 0; pbVar38 = *(byte **)(pbVar38 + 8)) {
            }
            uVar19 = *(uint *)(pbVar38 + 0x10);
            uVar22 = (uVar35 >> 10) + 7 >> 3;
            uVar54 = (ulong)uVar22;
            uVar21 = (uVar19 >> 10) + 7;
            uVar8 = uVar22 - (uVar21 >> 3);
            uVar63 = (ulong)uVar8;
            uVar16 = (uVar35 ^ uVar19) >> 8 & 1;
            if ((int)uVar8 < 1) {
              ppppppdVar50 = (double ******)((long)ppppppdVar49 + (ulong)-uVar8);
              if ((uVar19 & 0x100) == 0) {
                ppppppdVar50 = ppppppdVar49;
              }
              if (uVar16 == 0) {
                if ((uVar22 == param_5) && (uVar22 == param_6)) goto LAB_03328a44;
                if (uVar22 != 0 && 0 < (int)uVar15) {
                  uVar35 = 0;
                  do {
                    if (uVar54 - 1 < 7) {
                      uVar29 = 0;
                    }
                    else {
                      uVar29 = 0;
                      do {
                        puVar33 = (undefined1 *)((long)ppppppdVar50 + uVar29);
                        puVar61 = (undefined1 *)((long)ppppppdVar52 + uVar29);
                        uVar29 = uVar29 + 8;
                        *puVar61 = *puVar33;
                        puVar61[1] = puVar33[1];
                        puVar61[2] = puVar33[2];
                        puVar61[3] = puVar33[3];
                        puVar61[4] = puVar33[4];
                        puVar61[5] = puVar33[5];
                        puVar61[6] = puVar33[6];
                        puVar61[7] = puVar33[7];
                      } while ((uVar54 & 0xffff8) != uVar29);
                    }
                    if ((uVar22 & 7) != 0) {
                      uVar63 = uVar54 & 7;
                      do {
                        uVar63 = uVar63 - 1;
                        *(undefined1 *)((long)ppppppdVar52 + uVar29) =
                             *(undefined1 *)((long)ppppppdVar50 + uVar29);
                        uVar29 = uVar29 + 1;
                      } while (uVar63 != 0);
                    }
                    uVar35 = uVar35 + 1;
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar50 = (double ******)((long)ppppppdVar50 + lVar36);
                  } while (uVar35 != uVar34);
                }
              }
              else if (0 < (int)uVar15) {
                switch(uVar22) {
                case 1:
                  if (uVar56 - 1 < 3) {
                    uVar54 = 0;
                  }
                  else {
                    uVar54 = 0;
                    lVar62 = param_3 + uVar29;
                    ppppppdVar52 = ppppppdVar50;
                    do {
                      *(undefined1 *)(lVar28 + lVar62) = *(undefined1 *)ppppppdVar52;
                      uVar54 = uVar54 + 4;
                      *(undefined1 *)(lVar44 + lVar62) =
                           *(undefined1 *)(lVar36 + (long)ppppppdVar52);
                      *(undefined1 *)(lVar42 * (lVar43 + 2) + lVar62) =
                           *(undefined1 *)(lVar53 + (long)ppppppdVar52);
                      puVar33 = (undefined1 *)(lVar36 * 3 + (long)ppppppdVar52);
                      ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar36 * 4);
                      *(undefined1 *)(lVar42 * (lVar43 + 3) + lVar62) = *puVar33;
                      lVar62 = lVar62 + lVar42 * 4;
                    } while ((uVar56 & 0xfffffffc) != uVar54);
                  }
                  if ((uVar34 & 3) != 0) {
                    ppppppdVar50 = (double ******)((long)ppppppdVar50 + lVar36 * uVar54);
                    puVar33 = (undefined1 *)(param_3 + lVar42 * (lVar43 + uVar54) + uVar29);
                    uVar29 = uVar56 & 3;
                    do {
                      *puVar33 = *(undefined1 *)ppppppdVar50;
                      ppppppdVar50 = (double ******)((long)ppppppdVar50 + lVar36);
                      uVar29 = uVar29 - 1;
                      puVar33 = puVar33 + lVar42;
                    } while (uVar29 != 0);
                  }
                  break;
                case 2:
                  uVar54 = 0;
                  if (uVar56 != 1) {
                    uVar54 = 0;
                    lVar62 = param_3 + uVar29;
                    ppppppdVar49 = ppppppdVar50;
                    do {
                      *(ushort *)(lVar28 + lVar62) =
                           *(ushort *)ppppppdVar49 >> 8 | *(ushort *)ppppppdVar49 << 8;
                      uVar54 = uVar54 + 2;
                      puVar1 = (ushort *)(lVar36 + (long)ppppppdVar49);
                      ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar53);
                      *(ushort *)(lVar44 + lVar62) = *puVar1 >> 8 | *puVar1 << 8;
                      lVar62 = lVar62 + lVar51;
                    } while (uVar37 != uVar54);
                  }
                  if ((uVar34 & 1) != 0) {
                    uVar12 = *(ushort *)(uVar54 * lVar36 + (long)ppppppdVar50);
                    *(ushort *)(uVar54 * lVar42 + (long)ppppppdVar52) = uVar12 >> 8 | uVar12 << 8;
                  }
                  break;
                case 4:
                  uVar54 = 0;
                  if (uVar56 != 1) {
                    uVar54 = 0;
                    lVar62 = param_3 + uVar29;
                    ppppppdVar49 = ppppppdVar50;
                    do {
                      uVar35 = (*(uint *)ppppppdVar49 & 0xff00ff00) >> 8 |
                               (*(uint *)ppppppdVar49 & 0xff00ff) << 8;
                      uVar54 = uVar54 + 2;
                      *(uint *)(lVar28 + lVar62) = uVar35 >> 0x10 | uVar35 << 0x10;
                      puVar2 = (uint *)(lVar36 + (long)ppppppdVar49);
                      ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar53);
                      uVar35 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
                      *(uint *)(lVar44 + lVar62) = uVar35 >> 0x10 | uVar35 << 0x10;
                      lVar62 = lVar62 + lVar51;
                    } while (uVar37 != uVar54);
                  }
                  if ((uVar34 & 1) != 0) {
                    uVar35 = *(uint *)(uVar54 * lVar36 + (long)ppppppdVar50);
                    uVar35 = (uVar35 & 0xff00ff00) >> 8 | (uVar35 & 0xff00ff) << 8;
                    *(uint *)(uVar54 * lVar42 + (long)ppppppdVar52) =
                         uVar35 >> 0x10 | uVar35 << 0x10;
                  }
                  break;
                case 8:
                  uVar54 = 0;
                  if (uVar56 != 1) {
                    uVar54 = 0;
                    lVar62 = param_3 + uVar29;
                    ppppppdVar49 = ppppppdVar50;
                    do {
                      uVar29 = ((ulong)*ppppppdVar49 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*ppppppdVar49 & 0xff00ff00ff00ff) << 8;
                      uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar29 & 0xffff0000ffff) << 0x10;
                      uVar54 = uVar54 + 2;
                      *(ulong *)(lVar28 + lVar62) = uVar29 >> 0x20 | uVar29 << 0x20;
                      puVar31 = (ulong *)(lVar36 + (long)ppppppdVar49);
                      ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar53);
                      uVar29 = (*puVar31 & 0xff00ff00ff00ff00) >> 8 |
                               (*puVar31 & 0xff00ff00ff00ff) << 8;
                      uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar29 & 0xffff0000ffff) << 0x10;
                      *(ulong *)(lVar44 + lVar62) = uVar29 >> 0x20 | uVar29 << 0x20;
                      lVar62 = lVar62 + lVar51;
                    } while (uVar37 != uVar54);
                  }
                  if ((uVar34 & 1) != 0) {
                    pppppdVar66 = *(double ******)(uVar54 * lVar36 + (long)ppppppdVar50);
                    uVar29 = ((ulong)pppppdVar66 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)pppppdVar66 & 0xff00ff00ff00ff) << 8;
                    uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar29 & 0xffff0000ffff) << 0x10;
                    *(double ******)(uVar54 * lVar42 + (long)ppppppdVar52) =
                         (double *****)(uVar29 >> 0x20 | uVar29 << 0x20);
                  }
                }
              }
            }
            else {
              bVar18 = (uVar35 & 0x100) == 0;
              uVar29 = uVar63;
              if (bVar18) {
                uVar29 = 0;
              }
              iVar20 = 1;
              if (!bVar18) {
                iVar20 = -uVar8;
              }
              if (0 < (int)uVar15) {
                uVar21 = uVar21 >> 3;
                uVar54 = (ulong)uVar21;
                lVar62 = (long)(int)(uVar21 - bVar18);
                if (uVar16 == 0) {
                  if (uVar21 == 0) {
                    if (uVar34 != 1) {
                      iVar59 = -(uVar34 & 0xfffffffe);
                      do {
                        memcpy((void *)(uVar29 + (long)ppppppdVar52),ppppppdVar49,0);
                        if ((uVar19 >> 9 & 1) != 0) {
                          memset((char *)((long)ppppppdVar52 + lVar62) + iVar20,
                                 (int)*(char *)((long)ppppppdVar52 + lVar62) >> 7,uVar63);
                        }
                        memcpy((void *)((long)ppppppdVar52 + uVar29 + lVar42),
                               (void *)((long)ppppppdVar49 + lVar36),0);
                        if ((uVar19 >> 9 & 1) != 0) {
                          pcVar7 = (char *)((long)ppppppdVar52 + lVar62 + lVar42);
                          memset(pcVar7 + iVar20,(int)*pcVar7 >> 7,uVar63);
                        }
                        ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42 * 2);
                        ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36 + lVar36);
                        iVar59 = iVar59 + 2;
                      } while (iVar59 != 0);
                    }
                    if ((uVar34 & 1) != 0) {
                      memcpy((void *)(uVar29 + (long)ppppppdVar52),ppppppdVar49,0);
                      goto joined_r0x0332ab6c;
                    }
                  }
                  else {
                    uVar35 = 0;
                    do {
                      if (uVar54 - 1 < 7) {
                        uVar41 = 0;
                      }
                      else {
                        uVar41 = 0;
                        do {
                          puVar33 = (undefined1 *)((long)ppppppdVar49 + uVar41 + 3);
                          puVar61 = (undefined1 *)((long)ppppppdVar52 + uVar41 + uVar29 + 3);
                          uVar41 = uVar41 + 8;
                          puVar61[-3] = puVar33[-3];
                          puVar61[-2] = puVar33[-2];
                          puVar61[-1] = puVar33[-1];
                          *puVar61 = *puVar33;
                          puVar61[1] = puVar33[1];
                          puVar61[2] = puVar33[2];
                          puVar61[3] = puVar33[3];
                          puVar61[4] = puVar33[4];
                        } while ((uVar54 & 0xffff8) != uVar41);
                      }
                      if ((uVar21 & 7) != 0) {
                        puVar33 = (undefined1 *)((long)ppppppdVar52 + uVar41 + uVar29);
                        puVar61 = (undefined1 *)((long)ppppppdVar49 + uVar41);
                        uVar41 = uVar54 & 7;
                        do {
                          uVar41 = uVar41 - 1;
                          *puVar33 = *puVar61;
                          puVar33 = puVar33 + 1;
                          puVar61 = puVar61 + 1;
                        } while (uVar41 != 0);
                      }
                      if ((uVar19 >> 9 & 1) != 0) {
                        memset((char *)((long)ppppppdVar52 + lVar62) + iVar20,
                               (int)*(char *)((long)ppppppdVar52 + lVar62) >> 7,uVar63);
                      }
                      ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                      ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                      uVar35 = uVar35 + 1;
                    } while (uVar35 != uVar34);
                  }
                }
                else if (uVar21 == 1) {
                  if (uVar34 != 1) {
                    iVar59 = -(uVar34 & 0xfffffffe);
                    do {
                      *(undefined1 *)(uVar29 + (long)ppppppdVar52) = *(undefined1 *)ppppppdVar49;
                      if ((uVar19 >> 9 & 1) != 0) {
                        memset((char *)((long)ppppppdVar52 + lVar62) + iVar20,
                               (int)*(char *)((long)ppppppdVar52 + lVar62) >> 7,uVar63);
                      }
                      *(undefined1 *)((long)ppppppdVar52 + uVar29 + lVar42) =
                           *(undefined1 *)((long)ppppppdVar49 + lVar36);
                      if ((uVar19 >> 9 & 1) != 0) {
                        pcVar7 = (char *)((long)ppppppdVar52 + lVar62 + lVar42);
                        memset(pcVar7 + iVar20,(int)*pcVar7 >> 7,uVar63);
                      }
                      ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42 * 2);
                      ppppppdVar49 = (double ******)
                                     ((undefined1 *)((long)ppppppdVar49 + lVar36) + lVar36);
                      iVar59 = iVar59 + 2;
                    } while (iVar59 != 0);
                  }
                  if ((uVar34 & 1) != 0) {
                    *(undefined1 *)(uVar29 + (long)ppppppdVar52) = *(undefined1 *)ppppppdVar49;
joined_r0x0332ab6c:
                    if ((uVar19 >> 9 & 1) != 0) {
                      memset((char *)((long)ppppppdVar52 + lVar62) + iVar20,
                             (int)*(char *)((long)ppppppdVar52 + lVar62) >> 7,uVar63);
                    }
                  }
                }
                else {
                  uVar35 = uVar34;
                  do {
                    if (uVar21 == 2) {
                      *(ushort *)((long)ppppppdVar52 + uVar29) =
                           *(ushort *)ppppppdVar49 >> 8 | *(ushort *)ppppppdVar49 << 8;
                    }
                    else if (uVar21 == 4) {
                      uVar22 = (*(uint *)ppppppdVar49 & 0xff00ff00) >> 8 |
                               (*(uint *)ppppppdVar49 & 0xff00ff) << 8;
                      *(uint *)((long)ppppppdVar52 + uVar29) = uVar22 >> 0x10 | uVar22 << 0x10;
                    }
                    else if (uVar21 == 8) {
                      uVar54 = ((ulong)*ppppppdVar49 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*ppppppdVar49 & 0xff00ff00ff00ff) << 8;
                      uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar54 & 0xffff0000ffff) << 0x10;
                      *(ulong *)((long)ppppppdVar52 + uVar29) = uVar54 >> 0x20 | uVar54 << 0x20;
                    }
                    if ((uVar19 >> 9 & 1) != 0) {
                      memset((char *)((long)ppppppdVar52 + lVar62) + iVar20,
                             (int)*(char *)((long)ppppppdVar52 + lVar62) >> 7,uVar63);
                    }
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                    uVar35 = uVar35 - 1;
                  } while (uVar35 != 0);
                }
              }
            }
            break;
          case 8:
            pbVar30 = *(byte **)(lVar62 + lVar64 * 0x38 + 0x20);
            pbVar38 = pbVar30;
            if ((*pbVar30 & 1) == 0) {
              do {
                pbVar38 = *(byte **)(pbVar38 + 8);
              } while ((*pbVar38 & 1) == 0);
            }
            if ((*(ulong *)(pbVar38 + 0x10) & 0x1f) != 5) {
              pbVar30 = (byte *)0x0;
            }
            for (; (*pbVar30 & 1) == 0; pbVar30 = *(byte **)(pbVar30 + 8)) {
            }
            pbVar38 = *(byte **)(lVar62 + lVar64 * 0x38 + 0x18);
            uVar35 = *(uint *)(pbVar30 + 0x10);
            pbVar30 = pbVar38;
            if ((*pbVar38 & 1) == 0) {
              do {
                pbVar30 = *(byte **)(pbVar30 + 8);
              } while ((*pbVar30 & 1) == 0);
            }
            if ((*(ulong *)(pbVar30 + 0x10) & 0x1f) != 5) {
              pbVar38 = (byte *)0x0;
            }
            for (; (*pbVar38 & 1) == 0; pbVar38 = *(byte **)(pbVar38 + 8)) {
            }
            uVar21 = *(uint *)(pbVar38 + 0x10);
            uVar19 = param_6;
            ppppppdVar50 = ppppppdVar49;
            if ((uVar21 & 0x100) != 0) {
              uVar19 = 8;
              ppppppdVar50 = (double ******)&local_2098;
            }
            if ((uVar21 >> 8 & 1) != 0) {
              switch((uVar21 >> 10 & 1) + (uVar21 >> 0xb & 0x1f) + (uVar21 >> 0x10 & 0xff) + 7 >> 3)
              {
              case 1:
                if (&local_2098 < ppppppdVar3) {
                  ppppppdVar48 = (double ******)&local_2098;
                  do {
                    uVar11 = *(undefined1 *)ppppppdVar49;
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                    ppppppdVar46 = ppppppdVar48 + 1;
                    *(undefined1 *)ppppppdVar48 = uVar11;
                    ppppppdVar48 = ppppppdVar46;
                  } while (ppppppdVar46 < ppppppdVar3);
                }
                break;
              case 2:
                if (&local_2098 < ppppppdVar3) {
                  ppppppdVar48 = (double ******)&local_2098;
                  do {
                    uVar12 = *(ushort *)ppppppdVar49;
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                    ppppppdVar46 = ppppppdVar48 + 1;
                    *(ushort *)ppppppdVar48 = uVar12 >> 8 | uVar12 << 8;
                    ppppppdVar48 = ppppppdVar46;
                  } while (ppppppdVar46 < ppppppdVar3);
                }
                break;
              case 4:
                if (&local_2098 < ppppppdVar3) {
                  ppppppdVar48 = (double ******)&local_2098;
                  do {
                    uVar22 = *(uint *)ppppppdVar49;
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                    uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
                    ppppppdVar46 = ppppppdVar48 + 1;
                    *(uint *)ppppppdVar48 = uVar22 >> 0x10 | uVar22 << 0x10;
                    ppppppdVar48 = ppppppdVar46;
                  } while (ppppppdVar46 < ppppppdVar3);
                }
                break;
              case 8:
                if (&local_2098 < ppppppdVar3) {
                  ppppppdVar48 = (double ******)&local_2098;
                  do {
                    pppppdVar66 = *ppppppdVar49;
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                    uVar29 = ((ulong)pppppdVar66 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)pppppdVar66 & 0xff00ff00ff00ff) << 8;
                    uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar29 & 0xffff0000ffff) << 0x10;
                    ppppppdVar46 = ppppppdVar48 + 1;
                    *ppppppdVar48 = (double *****)(uVar29 >> 0x20 | uVar29 << 0x20);
                    ppppppdVar48 = ppppppdVar46;
                  } while (ppppppdVar46 < ppppppdVar3);
                }
              }
              uVar21 = uVar21 & 0xfffffeff;
            }
            uVar22 = param_5;
            ppppppdVar49 = ppppppdVar52;
            if ((uVar35 & 0x100) != 0) {
              uVar22 = 8;
              ppppppdVar49 = (double ******)&local_2098;
            }
            uVar8 = uVar35 & 0xfffffeff;
            if (uVar21 == 0x345e05) {
              if (uVar8 == 0x345e05) {
                ppppppdVar48 = (double ******)((long)ppppppdVar49 + (long)(int)(uVar22 * uVar34));
                if (ppppppdVar49 < ppppppdVar48) {
                  do {
                    *ppppppdVar49 = *ppppppdVar50;
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + (long)(int)uVar22);
                    ppppppdVar50 = (double ******)((long)ppppppdVar50 + (long)(int)uVar19);
                  } while (ppppppdVar49 < ppppppdVar48);
                }
              }
              else if (uVar8 == 0x174605) {
                ppppppdVar48 = (double ******)((long)ppppppdVar49 + (long)(int)(uVar22 * uVar34));
                if (ppppppdVar49 < ppppppdVar48) {
                  do {
                    pppppdVar66 = *ppppppdVar50;
                    ppppppdVar50 = (double ******)((long)ppppppdVar50 + (long)(int)uVar19);
                    *(float *)ppppppdVar49 = (float)(double)pppppdVar66;
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + (long)(int)uVar22);
                  } while (ppppppdVar49 < ppppppdVar48);
                }
              }
              else if ((uVar8 == 0x74605) &&
                      (ppppppdVar48 = (double ******)
                                      ((long)ppppppdVar49 + (long)(int)(uVar22 * uVar34)),
                      ppppppdVar49 < ppppppdVar48)) {
                do {
                  pppppdVar66 = *ppppppdVar50;
                  ppppppdVar50 = (double ******)((long)ppppppdVar50 + (long)(int)uVar19);
                  *(short *)ppppppdVar49 =
                       (short)((uint)((float)(double)pppppdVar66 * 1.0039062) >> 0x10);
                  ppppppdVar49 = (double ******)((long)ppppppdVar49 + (long)(int)uVar22);
                } while (ppppppdVar49 < ppppppdVar48);
              }
            }
            else if (uVar21 == 0x174605) {
              if (uVar8 == 0x345e05) {
                ppppppdVar48 = (double ******)((long)ppppppdVar49 + (long)(int)(uVar22 * uVar34));
                if (ppppppdVar49 < ppppppdVar48) {
                  do {
                    fVar65 = *(float *)ppppppdVar50;
                    ppppppdVar50 = (double ******)((long)ppppppdVar50 + (long)(int)uVar19);
                    *ppppppdVar49 = (double *****)(double)fVar65;
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + (long)(int)uVar22);
                  } while (ppppppdVar49 < ppppppdVar48);
                }
              }
              else if (uVar8 == 0x174605) {
                ppppppdVar48 = (double ******)((long)ppppppdVar49 + (long)(int)(uVar22 * uVar34));
                if (ppppppdVar49 < ppppppdVar48) {
                  do {
                    *(uint *)ppppppdVar49 = *(uint *)ppppppdVar50;
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + (long)(int)uVar22);
                    ppppppdVar50 = (double ******)((long)ppppppdVar50 + (long)(int)uVar19);
                  } while (ppppppdVar49 < ppppppdVar48);
                }
              }
              else if ((uVar8 == 0x74605) &&
                      (ppppppdVar48 = (double ******)
                                      ((long)ppppppdVar49 + (long)(int)(uVar22 * uVar34)),
                      ppppppdVar49 < ppppppdVar48)) {
                do {
                  fVar65 = *(float *)ppppppdVar50;
                  ppppppdVar50 = (double ******)((long)ppppppdVar50 + (long)(int)uVar19);
                  *(short *)ppppppdVar49 = (short)((uint)(fVar65 * 1.0039062) >> 0x10);
                  ppppppdVar49 = (double ******)((long)ppppppdVar49 + (long)(int)uVar22);
                } while (ppppppdVar49 < ppppppdVar48);
              }
            }
            else if (uVar21 == 0x74605) {
              if (uVar8 == 0x345e05) {
                ppppppdVar48 = (double ******)((long)ppppppdVar49 + (long)(int)(uVar22 * uVar34));
                if (ppppppdVar49 < ppppppdVar48) {
                  do {
                    uVar12 = *(ushort *)ppppppdVar50;
                    ppppppdVar50 = (double ******)((long)ppppppdVar50 + (long)(int)uVar19);
                    *ppppppdVar49 = (double *****)(double)(float)((uint)uVar12 << 0x10);
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + (long)(int)uVar22);
                  } while (ppppppdVar49 < ppppppdVar48);
                }
              }
              else if (uVar8 == 0x174605) {
                ppppppdVar48 = (double ******)((long)ppppppdVar49 + (long)(int)(uVar22 * uVar34));
                if (ppppppdVar49 < ppppppdVar48) {
                  do {
                    uVar12 = *(ushort *)ppppppdVar50;
                    ppppppdVar50 = (double ******)((long)ppppppdVar50 + (long)(int)uVar19);
                    *(uint *)ppppppdVar49 = (uint)uVar12 << 0x10;
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + (long)(int)uVar22);
                  } while (ppppppdVar49 < ppppppdVar48);
                }
              }
              else if ((uVar8 == 0x74605) &&
                      (ppppppdVar48 = (double ******)
                                      ((long)ppppppdVar49 + (long)(int)(uVar22 * uVar34)),
                      ppppppdVar49 < ppppppdVar48)) {
                do {
                  *(undefined2 *)ppppppdVar49 = *(undefined2 *)ppppppdVar50;
                  ppppppdVar49 = (double ******)((long)ppppppdVar49 + (long)(int)uVar22);
                  ppppppdVar50 = (double ******)((long)ppppppdVar50 + (long)(int)uVar19);
                } while (ppppppdVar49 < ppppppdVar48);
              }
            }
            if (((uVar35 >> 8 & 1) != 0) &&
               (uVar35 = (uVar35 >> 10 & 1) + (uVar35 >> 0xb & 0x1f) + (uVar35 >> 0x10 & 0xff) + 7
                         >> 3, uVar35 - 1 < 8)) {
              ppppppdVar49 = (double ******)((long)ppppppdVar52 + (long)(int)(uVar34 * param_5));
              switch(uVar35) {
              case 1:
                if (ppppppdVar52 < ppppppdVar49) {
                  ppppppdVar50 = (double ******)&local_2098;
                  do {
                    *(undefined1 *)ppppppdVar52 = *(undefined1 *)ppppppdVar50;
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar50 = ppppppdVar50 + 1;
                  } while (ppppppdVar52 < ppppppdVar49);
                }
                break;
              case 2:
                if (ppppppdVar52 < ppppppdVar49) {
                  ppppppdVar50 = (double ******)&local_2098;
                  do {
                    *(ushort *)ppppppdVar52 =
                         *(ushort *)ppppppdVar50 >> 8 | *(ushort *)ppppppdVar50 << 8;
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar50 = ppppppdVar50 + 1;
                  } while (ppppppdVar52 < ppppppdVar49);
                }
                break;
              case 4:
                if (ppppppdVar52 < ppppppdVar49) {
                  ppppppdVar50 = (double ******)&local_2098;
                  do {
                    uVar35 = (*(uint *)ppppppdVar50 & 0xff00ff00) >> 8 |
                             (*(uint *)ppppppdVar50 & 0xff00ff) << 8;
                    *(uint *)ppppppdVar52 = uVar35 >> 0x10 | uVar35 << 0x10;
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar50 = ppppppdVar50 + 1;
                  } while (ppppppdVar52 < ppppppdVar49);
                }
                break;
              case 8:
                if (ppppppdVar52 < ppppppdVar49) {
                  ppppppdVar50 = (double ******)&local_2098;
                  do {
                    uVar29 = ((ulong)*ppppppdVar50 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*ppppppdVar50 & 0xff00ff00ff00ff) << 8;
                    uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar29 & 0xffff0000ffff) << 0x10;
                    *ppppppdVar52 = (double *****)(uVar29 >> 0x20 | uVar29 << 0x20);
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar50 = ppppppdVar50 + 1;
                  } while (ppppppdVar52 < ppppppdVar49);
                }
              }
            }
            break;
          case 9:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x20);
            while( true ) {
              uVar35 = (uint)*puVar31;
              if ((uVar35 >> 0x14 & 1) != 0) break;
              if (((*puVar31 & 1) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
              goto LAB_03328ca0;
            }
            if (puVar31 != (ulong *)0x0) {
              uVar35 = uVar35 & 0xfffff;
              uVar35 = (uint)(ushort)puVar31[(ulong)(byte)(POPCOUNT((char)uVar35) +
                                                           POPCOUNT((char)(uVar35 >> 8)) +
                                                          POPCOUNT((char)(uVar35 >> 0x10))) + 2];
              goto LAB_03328ca4;
            }
LAB_03328ca0:
            uVar35 = 0;
LAB_03328ca4:
            ppppppdVar50 = (double ******)((long)ppppppdVar52 + (long)(int)(uVar34 * param_5));
            if (ppppppdVar52 < ppppppdVar50) {
              puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x18);
              while( true ) {
                uVar21 = (uint)*puVar31;
                if ((uVar21 >> 0x14 & 1) != 0) break;
                if (((*puVar31 & 1) != 0) ||
                   (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
                goto switchD_0332a528_caseD_3;
              }
              if (puVar31 == (ulong *)0x0) {
switchD_0332a528_caseD_3:
                do {
                } while( true );
              }
              uVar21 = uVar21 & 0xfffff;
              switch((short)puVar31[(ulong)(byte)(POPCOUNT((char)uVar21) +
                                                  POPCOUNT((char)(uVar21 >> 8)) +
                                                 POPCOUNT((char)(uVar21 >> 0x10))) + 2]) {
              case 1:
                switch(uVar35) {
                case 1:
                  do {
                    *(bool *)ppppppdVar52 = *(char *)ppppppdVar49 != '\0';
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                  } while (ppppppdVar52 < ppppppdVar50);
                  break;
                case 2:
                  do {
                    *(ushort *)ppppppdVar52 = (ushort)(*(char *)ppppppdVar49 != '\0');
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                  } while (ppppppdVar52 < ppppppdVar50);
                  break;
                default:
switchD_0332a620_caseD_3:
                  do {
                  } while( true );
                case 4:
                  do {
                    *(uint *)ppppppdVar52 = (uint)(*(char *)ppppppdVar49 != '\0');
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                  } while (ppppppdVar52 < ppppppdVar50);
                  break;
                case 8:
                  do {
                    *ppppppdVar52 = (double *****)(ulong)(*(char *)ppppppdVar49 != '\0');
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                  } while (ppppppdVar52 < ppppppdVar50);
                }
                break;
              case 2:
                if (uVar35 == 1) {
                  do {
                    *(bool *)ppppppdVar52 = *(short *)ppppppdVar49 != 0;
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                  } while (ppppppdVar52 < ppppppdVar50);
                }
                else if (uVar35 == 2) {
                  do {
                    *(ushort *)ppppppdVar52 = (ushort)(*(short *)ppppppdVar49 != 0);
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                  } while (ppppppdVar52 < ppppppdVar50);
                }
                else if (uVar35 == 4) {
                  do {
                    *(uint *)ppppppdVar52 = (uint)(*(short *)ppppppdVar49 != 0);
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                  } while (ppppppdVar52 < ppppppdVar50);
                }
                else {
                  if (uVar35 != 8) goto switchD_0332a620_caseD_3;
                  do {
                    *ppppppdVar52 = (double *****)(ulong)(*(short *)ppppppdVar49 != 0);
                    ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                    ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                  } while (ppppppdVar52 < ppppppdVar50);
                }
                break;
              default:
                goto switchD_0332a528_caseD_3;
              case 4:
                do {
                  if (7 < uVar35 - 1) goto switchD_0332a620_caseD_3;
                  uVar21 = *(uint *)ppppppdVar49;
                  switch(uVar35) {
                  case 1:
                    *(bool *)ppppppdVar52 = uVar21 != 0;
                    break;
                  case 2:
                    *(ushort *)ppppppdVar52 = (ushort)(uVar21 != 0);
                    break;
                  default:
                    goto switchD_0332a620_caseD_3;
                  case 4:
                    *(uint *)ppppppdVar52 = (uint)(uVar21 != 0);
                    break;
                  case 8:
                    *ppppppdVar52 = (double *****)(ulong)(uVar21 != 0);
                  }
                  ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                  ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                } while (ppppppdVar52 < ppppppdVar50);
                break;
              case 8:
                do {
                  if (7 < uVar35 - 1) goto switchD_0332a620_caseD_3;
                  pppppdVar66 = *ppppppdVar49;
                  switch(uVar35) {
                  case 1:
                    *(bool *)ppppppdVar52 = pppppdVar66 != (double *****)0x0;
                    break;
                  case 2:
                    *(ushort *)ppppppdVar52 = (ushort)(pppppdVar66 != (double *****)0x0);
                    break;
                  default:
                    goto switchD_0332a620_caseD_3;
                  case 4:
                    *(uint *)ppppppdVar52 = (uint)(pppppdVar66 != (double *****)0x0);
                    break;
                  case 8:
                    *ppppppdVar52 = (double *****)(ulong)(pppppdVar66 != (double *****)0x0);
                  }
                  ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                  ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                } while (ppppppdVar52 < ppppppdVar50);
              }
            }
            break;
          case 10:
            lVar62 = lVar62 + lVar64 * 0x38;
            local_78 = *(ulong **)(lVar62 + 0x18);
            puVar31 = *(ulong **)(lVar62 + 0x20);
            local_2098 = ppppppdVar52;
            local_2090 = puVar31;
            if (puVar31 == (ulong *)0x0) {
              local_2088 = (long *)0x0;
            }
            else {
              do {
                uVar29 = *puVar31;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  local_2088 = (long *)puVar31[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  goto LAB_03328d4c;
                }
                puVar31 = (ulong *)puVar31[1];
              } while (puVar31 != (ulong *)0x0);
              local_2088 = (long *)0x0;
            }
LAB_03328d4c:
            if (((ulong)local_2088 & 1) != 0) {
              piVar5 = (int *)(((ulong)local_2088 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar18) {
                  *piVar5 = *piVar5 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            local_70 = (long *)0x0;
            puVar31 = local_78;
            if (local_78 != (ulong *)0x0) {
              do {
                uVar29 = *puVar31;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  local_70 = (long *)puVar31[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  goto LAB_033290ac;
                }
                puVar31 = (ulong *)puVar31[1];
              } while (puVar31 != (ulong *)0x0);
              local_70 = (long *)0x0;
            }
LAB_033290ac:
            if (((ulong)local_70 & 1) != 0) {
              piVar5 = (int *)(((ulong)local_70 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar18) {
                  *piVar5 = *piVar5 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            local_80 = ppppppdVar49;
            if (0 < (int)uVar15) {
              uVar35 = 0;
              do {
                for (puVar31 = local_78; (*puVar31 & 1) == 0; puVar31 = (ulong *)puVar31[1]) {
                }
                puVar39 = local_2090;
                if ((*local_2090 & 1) == 0) {
                  do {
                    puVar39 = (ulong *)puVar39[1];
                  } while ((*puVar39 & 1) == 0);
                }
                pcVar40 = *(code **)(param_1 + (puVar39[2] & 0x1f) * 0x48 + (puVar31[2] & 0x1f) * 8)
                ;
                if (pcVar40 != (code *)0x0) {
                  (*pcVar40)(&local_2098,&local_80);
                }
                plVar25 = local_2088;
                local_2088 = (long *)((ulong)local_2088 & 0xfffffffffffffffe);
                local_2098 = (double ******)((long)local_2098 + lVar42);
                if (((ulong)plVar25 & 1) != 0) {
                  plVar25 = local_2088 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((local_2088 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*local_2088 + 8))();
                  }
                }
                local_80 = (double ******)((long)local_80 + lVar36);
                plVar25 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
                uVar29 = (ulong)local_70 & 1;
                local_70 = plVar25;
                if (uVar29 != 0) {
                  plVar27 = plVar25 + 1;
                  do {
                    lVar62 = *plVar27;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar18) {
                      *(int *)plVar27 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar25 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar25 + 8))();
                  }
                }
                uVar35 = uVar35 + 1;
              } while (uVar35 != uVar34);
            }
            if (((ulong)local_70 & 1) != 0) {
              plVar27 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
              plVar25 = plVar27 + 1;
              do {
                lVar62 = *plVar25;
                cVar13 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar18) {
                  *(int *)plVar25 = (int)lVar62 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar27 != (long *)0x0) && ((int)lVar62 == 1)) {
                (**(code **)(*plVar27 + 8))();
              }
            }
            if (((ulong)local_2088 & 1) != 0) {
              plVar25 = (long *)((ulong)local_2088 & 0xfffffffffffffffe);
              plVar27 = plVar25 + 1;
              do {
                iVar20 = (int)*plVar27;
                cVar13 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar18) {
                  *(int *)plVar27 = iVar20 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              goto LAB_0332a3bc;
            }
            break;
          case 0xb:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x20);
            puVar39 = puVar31;
            if ((*puVar31 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            if ((puVar39[2] & 0x1f) != 8) {
              puVar31 = (ulong *)0x0;
            }
            puVar39 = puVar31;
            if ((*puVar31 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            if ((puVar31 != (ulong *)0x0) && ((puVar39[2] & 0x1f) == 8)) {
              do {
                uVar29 = *puVar31;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar25 = (long *)puVar31[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar25 & 1) != 0) {
                    piVar5 = (int *)(((ulong)plVar25 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_033299b8;
                }
                puVar31 = (ulong *)puVar31[1];
              } while (puVar31 != (ulong *)0x0);
            }
            plVar25 = (long *)0x0;
LAB_033299b8:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x18);
            puVar39 = puVar31;
            if ((*puVar31 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            if ((puVar39[2] & 0x1f) != 8) {
              puVar31 = (ulong *)0x0;
            }
            if (puVar31 != (ulong *)0x0) {
              puVar39 = puVar31;
LAB_033299fc:
              uVar29 = *puVar39;
              if (((uint)uVar29 >> 2 & 1) == 0) goto code_r0x03329a04;
              plVar27 = (long *)puVar39[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
              if (((ulong)plVar27 & 1) != 0) {
                plVar60 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
                plVar58 = plVar60 + 1;
                do {
                  cVar13 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                  if (bVar18) {
                    *(int *)plVar58 = (int)*plVar58 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if ((int)uVar15 < 1) {
                  do {
                    lVar62 = *plVar58;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                    if (bVar18) {
                      *(int *)plVar58 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar60 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar60 + 8))();
                  }
                  goto LAB_03329df0;
                }
                goto LAB_03329a60;
              }
              goto LAB_03329a14;
            }
LAB_03329a0c:
            plVar27 = (long *)0x0;
LAB_03329a14:
            if ((int)uVar15 < 1) {
LAB_03329df0:
              if (((ulong)plVar25 & 1) != 0) {
                plVar25 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
                plVar27 = plVar25 + 1;
                do {
                  iVar20 = (int)*plVar27;
                  cVar13 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar18) {
                    *(int *)plVar27 = iVar20 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                goto LAB_0332a3bc;
              }
            }
            else {
LAB_03329a60:
              uVar35 = 0;
              do {
                if (((ulong)plVar25 & 1) != 0) {
                  piVar5 = (int *)(((ulong)plVar25 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar18) {
                      *piVar5 = *piVar5 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                plVar58 = (long *)((ulong)plVar27 & 0xfffffffffffffffe);
                if (((ulong)plVar27 & 1) != 0) {
                  plVar60 = plVar58 + 1;
                  do {
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
                    if (bVar18) {
                      *(int *)plVar60 = (int)*plVar60 + 1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
                local_2080 = 0;
                local_2088 = (long *)0x0;
                local_2090 = (ulong *)0x0;
                local_2098 = (double ******)0x0;
                (**(code **)(*plVar58 + 0x50))(plVar58,ppppppdVar49,puVar31,&local_2098);
                ppppppdVar50 = local_2098;
                if ((local_2080 & 1) != 0) {
                  plVar24 = (long *)(local_2080 & 0xfffffffffffffffe);
                  plVar60 = plVar24 + 1;
                  do {
                    lVar62 = *plVar60;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
                    if (bVar18) {
                      *(int *)plVar60 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar24 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar24 + 8))();
                  }
                }
                lVar62 = *(long *)(param_1 + 0x288);
                uVar21 = *(uint *)(lVar62 + 0x2b4);
                iVar20 = *(int *)(lVar62 + 0x230);
                if ((int)uVar21 < *(int *)(lVar62 + 0x2b0) * 2) {
                  FUN_02ef5fd4((long *)(lVar62 + 0x2a8),PTR_PTR_047d1a50,uVar21 * 2 + 2);
                  uVar21 = *(uint *)(lVar62 + 0x2b4);
                }
                uVar19 = (int)ppppppdVar50 * -0x61c8864f;
                uVar22 = (int)((ulong)ppppppdVar50 >> 0x20) * -0x61c8864f;
                uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
                uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
                uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                lVar45 = *(long *)(lVar62 + 0x2a8);
                uVar29 = (ulong)(uVar21 & (uVar19 + (uVar19 >> 2) + uVar22 * 0x40 + 0x9e3779b9 ^
                                          uVar22));
                puVar47 = (undefined8 *)(lVar45 + uVar29 * 0x10);
                if ((double ******)*puVar47 == (double ******)0xffffffffffffffff) {
LAB_03329bc8:
                  *puVar47 = ppppppdVar50;
                  *(long *)(*(long *)(lVar62 + 0x2a8) + uVar29 * 0x10 + 8) = (long)iVar20;
                  lVar45 = *(long *)(lVar62 + 0x2a8);
                  *(int *)(lVar62 + 0x2b0) = *(int *)(lVar62 + 0x2b0) + 1;
                }
                else if ((double ******)*puVar47 != ppppppdVar50) {
                  do {
                    uVar29 = (ulong)((int)uVar29 + 1U & uVar21);
                    puVar47 = (undefined8 *)(lVar45 + uVar29 * 0x10);
                    if ((double ******)*puVar47 == (double ******)0xffffffffffffffff)
                    goto LAB_03329bc8;
                  } while ((double ******)*puVar47 != ppppppdVar50);
                }
                puVar17 = PTR_DAT_047e61d0;
                uVar21 = *(uint *)(lVar45 + ((long)(uVar29 << 0x20) >> 0x1c) + 8);
                if (*(uint *)(lVar62 + 0x230) == uVar21) {
                  local_2098 = *(double *******)PTR_DAT_047e61d0;
                  local_2090 = *(ulong **)(PTR_DAT_047e61d0 + 8);
                  local_2088 = *(long **)(PTR_DAT_047e61d0 + 0x10);
                  if (((ulong)local_2088 & 1) == 0) {
                    local_2080 = CONCAT44(local_2080._4_4_,*(undefined4 *)(PTR_DAT_047e61d0 + 0x18))
                    ;
                    FUN_03323a58(lVar62 + 0x200,uVar21,&local_2098);
                  }
                  else {
                    plVar24 = (long *)((ulong)local_2088 & 0xfffffffffffffffe);
                    plVar60 = plVar24 + 1;
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
                      if (bVar18) {
                        *(int *)plVar60 = (int)*plVar60 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                    local_2080 = CONCAT44(local_2080._4_4_,*(undefined4 *)(puVar17 + 0x18));
                    FUN_03323a58(lVar62 + 0x200,uVar21,&local_2098);
                    do {
                      lVar45 = *plVar60;
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
                      if (bVar18) {
                        *(int *)plVar60 = (int)lVar45 + -1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                    if ((plVar24 != (long *)0x0) && ((int)lVar45 == 1)) {
                      (**(code **)(*plVar24 + 8))(plVar24);
                    }
                  }
                  iVar20 = *(int *)(lVar62 + 0x298);
                  lVar45 = (long)iVar20;
                  if ((int)(*(uint *)(lVar62 + 0x29c) & 0x7fffffff) <= iVar20) {
                    FUN_0133bb88(lVar62 + 0x290,PTR_PTR_047d1a50,lVar45 + 1);
                    iVar20 = *(int *)(lVar62 + 0x298);
                  }
                  *(undefined4 *)(*(long *)(lVar62 + 0x290) + (long)iVar20 * 4) = 0;
                  *(int *)(lVar62 + 0x298) = (int)(lVar45 + 1);
                }
                *(uint *)ppppppdVar52 = uVar21;
                if (((ulong)plVar27 & 1) != 0) {
                  plVar60 = plVar58 + 1;
                  do {
                    lVar62 = *plVar60;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar60,0x10);
                    if (bVar18) {
                      *(int *)plVar60 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar58 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar58 + 8))(plVar58);
                  }
                }
                plVar60 = (long *)((ulong)plVar25 & 0xfffffffffffffffe);
                if (((ulong)plVar25 & 1) != 0) {
                  plVar25 = plVar60 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar60 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar60 + 8))(plVar60);
                  }
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar60 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar60 + 8))(plVar60);
                  }
                }
                ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
                if (((ulong)plVar27 & 1) != 0) {
                  plVar25 = plVar58 + 1;
                  do {
                    lVar62 = *plVar25;
                    cVar13 = '\x01';
                    bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar18) {
                      *(int *)plVar25 = (int)lVar62 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                  if ((plVar58 != (long *)0x0) && ((int)lVar62 == 1)) {
                    (**(code **)(*plVar58 + 8))(plVar58);
                  }
                }
                uVar35 = uVar35 + 1;
                plVar27 = plVar58;
                plVar25 = plVar60;
              } while (uVar35 != uVar9);
            }
            break;
          case 0xc:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x20);
            puVar39 = puVar31;
            if ((*puVar31 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            if ((puVar39[2] & 0x1f) != 7) {
              puVar31 = (ulong *)0x0;
            }
            puVar39 = puVar31;
            if ((*puVar31 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            if ((puVar31 != (ulong *)0x0) && ((puVar39[2] & 0x1f) == 7)) {
              do {
                uVar29 = *puVar31;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  uVar29 = puVar31[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if ((uVar29 & 1) != 0) {
                    piVar5 = (int *)((uVar29 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar13 = '\x01';
                      bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                      if (bVar18) {
                        *piVar5 = *piVar5 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  goto LAB_03329e40;
                }
                puVar31 = (ulong *)puVar31[1];
              } while (puVar31 != (ulong *)0x0);
            }
            uVar29 = 0;
LAB_03329e40:
            puVar31 = *(ulong **)(lVar62 + lVar64 * 0x38 + 0x18);
            uVar54 = *puVar31;
            uVar35 = (uint)uVar54;
            puVar39 = puVar31;
            if ((uVar54 & 1) == 0) {
              do {
                puVar39 = (ulong *)puVar39[1];
              } while ((*puVar39 & 1) == 0);
            }
            uVar63 = 0;
            if ((puVar31 != (ulong *)0x0) && ((puVar39[2] & 0x1f) == 7)) {
              while ((uVar35 >> 2 & 1) == 0) {
                puVar31 = (ulong *)puVar31[1];
                if (puVar31 == (ulong *)0x0) {
                  uVar63 = 0;
                  goto LAB_03329ec4;
                }
                uVar54 = *puVar31;
                uVar35 = (uint)uVar54;
              }
              uVar63 = puVar31[(uVar54 >> 1 & 1) + (uVar54 & 1) + 2];
            }
            if ((uVar63 & 1) != 0) {
              piVar5 = (int *)((uVar63 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar18) {
                  *piVar5 = *piVar5 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
LAB_03329ec4:
            if ((int)uVar15 < 1) {
              bVar18 = true;
            }
            else {
              uVar54 = FUN_0220e630(PTR_DAT_047e66b8,"Not implemented");
              bVar18 = false;
              if ((uVar54 & 1) != 0) {
                CallSupervisor(0x26);
              }
            }
            if ((uVar63 & 1) != 0) {
              plVar27 = (long *)(uVar63 & 0xfffffffffffffffe);
              plVar25 = plVar27 + 1;
              do {
                lVar62 = *plVar25;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar14) {
                  *(int *)plVar25 = (int)lVar62 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar27 != (long *)0x0) && ((int)lVar62 == 1)) {
                (**(code **)(*plVar27 + 8))();
              }
            }
            if ((uVar29 & 1) != 0) {
              plVar27 = (long *)(uVar29 & 0xfffffffffffffffe);
              plVar25 = plVar27 + 1;
              do {
                lVar62 = *plVar25;
                cVar13 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar14) {
                  *(int *)plVar25 = (int)lVar62 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar27 != (long *)0x0) && ((int)lVar62 == 1)) {
                (**(code **)(*plVar27 + 8))();
              }
            }
joined_r0x03329f64:
            if (!bVar18) goto LAB_0332b16c;
            break;
          case 0xd:
            uVar35 = *(uint *)(lVar62 + lVar64 * 0x38 + 0x18);
            uVar29 = (ulong)uVar35;
            if (uVar35 == param_5 && uVar35 == param_6) {
              ppppppdVar50 = ppppppdVar49;
LAB_03328a44:
              memcpy(ppppppdVar52,ppppppdVar50,(long)(int)(uVar34 * param_6));
            }
            else if ((0 < (int)uVar15) && (0 < (int)uVar35)) {
              uVar21 = 0;
              do {
                if (uVar29 - 1 < 7) {
                  uVar54 = 0;
                }
                else {
                  uVar54 = 0;
                  do {
                    puVar33 = (undefined1 *)((long)ppppppdVar49 + uVar54);
                    puVar61 = (undefined1 *)((long)ppppppdVar52 + uVar54);
                    uVar54 = uVar54 + 8;
                    *puVar61 = *puVar33;
                    puVar61[1] = puVar33[1];
                    puVar61[2] = puVar33[2];
                    puVar61[3] = puVar33[3];
                    puVar61[4] = puVar33[4];
                    puVar61[5] = puVar33[5];
                    puVar61[6] = puVar33[6];
                    puVar61[7] = puVar33[7];
                  } while ((uVar29 & 0xfffffff8) != uVar54);
                }
                if ((uVar35 & 7) != 0) {
                  uVar63 = uVar29 & 7;
                  do {
                    uVar63 = uVar63 - 1;
                    *(undefined1 *)((long)ppppppdVar52 + uVar54) =
                         *(undefined1 *)((long)ppppppdVar49 + uVar54);
                    uVar54 = uVar54 + 1;
                  } while (uVar63 != 0);
                }
                uVar21 = uVar21 + 1;
                ppppppdVar52 = (double ******)((long)ppppppdVar52 + lVar42);
                ppppppdVar49 = (double ******)((long)ppppppdVar49 + lVar36);
              } while (uVar21 != uVar34);
            }
          }
switchD_0332ad58_caseD_3:
          iVar55 = iVar55 + 1;
        } while (iVar10 != iVar55);
      }
      iVar23 = uVar34 + iVar23;
    } while (iVar23 < param_7);
  }
  if ((int)local_2ca0 != 0) {
    lVar36 = (long)(int)local_2ca0 * 0x30;
    puVar47 = (undefined8 *)(local_2ca8 + 0x18);
    do {
      lVar36 = lVar36 + -0x30;
      local_2098 = (double ******)0x0;
      (**(code **)(*(long *)(puVar47[2] & 0xfffffffffffffffe) + 0x38))
                ((long *)(puVar47[2] & 0xfffffffffffffffe),*puVar47,puVar47[1],&local_2098);
      iVar23 = (**(code **)(*(long *)(puVar47[-1] & 0xfffffffffffffffe) + 0x30))
                         ((long *)(puVar47[-1] & 0xfffffffffffffffe),puVar47[-3],puVar47[-2],
                          local_2098);
      if (lVar36 == 0) break;
      puVar47 = puVar47 + 6;
    } while (-1 < iVar23);
LAB_0332b16c:
    puVar33 = local_2ca8;
    if ((int)local_2ca0 != 0) {
      puVar61 = local_2ca8 + (long)(int)local_2ca0 * 0x30;
      do {
        if ((*(ulong *)(puVar61 + -8) & 1) != 0) {
          plVar27 = (long *)(*(ulong *)(puVar61 + -8) & 0xfffffffffffffffe);
          plVar25 = plVar27 + 1;
          do {
            lVar36 = *plVar25;
            cVar13 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar18) {
              *(int *)plVar25 = (int)lVar36 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar27 != (long *)0x0) && ((int)lVar36 == 1)) {
            (**(code **)(*plVar27 + 8))();
          }
        }
        puVar31 = (ulong *)(puVar61 + -0x20);
        puVar61 = puVar61 + -0x30;
        if ((*puVar31 & 1) != 0) {
          plVar27 = (long *)(*puVar31 & 0xfffffffffffffffe);
          plVar25 = plVar27 + 1;
          do {
            lVar36 = *plVar25;
            cVar13 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar18) {
              *(int *)plVar25 = (int)lVar36 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar27 != (long *)0x0) && ((int)lVar36 == 1)) {
            (**(code **)(*plVar27 + 8))();
          }
        }
      } while (puVar61 != puVar33);
    }
  }
  lVar36 = local_2ca0;
  uVar37 = (ulong)local_2ca0._4_4_;
  local_2ca0 = (ulong)local_2ca0._4_4_ << 0x20;
  if ((-1 < lVar36) && (local_2ca8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_2ca8,uVar37 * 0x30);
  }
  return;
code_r0x03329a04:
  puVar39 = (ulong *)puVar39[1];
  if (puVar39 == (ulong *)0x0) goto LAB_03329a0c;
  goto LAB_033299fc;
code_r0x03328fb8:
  puVar32 = (ulong *)puVar32[1];
  if (puVar32 == (ulong *)0x0) goto LAB_03328fc0;
  goto LAB_03328fb0;
code_r0x03329fd8:
  puVar39 = (ulong *)puVar39[1];
  if (puVar39 == (ulong *)0x0) goto LAB_03329fe0;
  goto LAB_03329fd0;
}


