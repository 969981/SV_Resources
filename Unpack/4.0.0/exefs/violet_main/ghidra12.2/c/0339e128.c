/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0339e128; name: FUN_0339e128
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0339e128(long param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6,
                 int param_7)

{
  ushort *puVar1;
  uint *puVar2;
  double *******pppppppdVar3;
  long lVar4;
  undefined *puVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 uVar9;
  ushort uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  bool bVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  size_t sVar21;
  void *__dest;
  long *plVar22;
  undefined8 *puVar23;
  ulong *puVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong *puVar31;
  undefined1 *puVar32;
  byte *pbVar33;
  uint uVar34;
  long lVar35;
  ulong uVar36;
  byte *pbVar37;
  ulong *puVar38;
  code *pcVar39;
  ulong uVar40;
  undefined1 *puVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  double *******pppppppdVar46;
  double *******pppppppdVar47;
  double *******pppppppdVar48;
  double *******pppppppdVar49;
  long lVar50;
  double *******pppppppdVar51;
  long lVar52;
  ulong uVar53;
  int iVar54;
  ulong uVar55;
  uint uVar56;
  uint uVar57;
  int iVar58;
  int *piVar59;
  ulong uVar60;
  long *plVar61;
  long *plVar62;
  uint uVar63;
  long lVar64;
  long lVar65;
  float fVar66;
  double ******ppppppdVar67;
  long *local_2c90;
  undefined8 local_2c88;
  long local_2c80 [384];
  double *******local_2080;
  ulong *local_2078;
  long *local_2070;
  ulong local_2068;
  double *******local_80;
  ulong *local_78;
  long *local_70;
  
  local_2c90 = local_2c80;
  local_2c88 = -0x7fffffc000000000;
  lVar4 = param_1 + 0x290;
  if (0 < param_7) {
    lVar42 = (long)(int)param_5;
    lVar50 = lVar42 * 2;
    lVar35 = (long)(int)param_6;
    lVar52 = lVar35 * 2;
    iVar17 = 0;
    puVar5 = PTR_PTR_047d1a50 + 0x20;
    do {
      lVar43 = (long)iVar17;
      uVar27 = param_7 - iVar17;
      uVar18 = uVar27;
      if (0x3ff < (int)uVar27) {
        uVar18 = 0x400;
      }
      iVar26 = *(int *)(param_2 + 0x10);
      if (iVar26 != 0) {
        iVar54 = 0;
        uVar63 = uVar18;
        if ((int)uVar18 < 2) {
          uVar63 = 1;
        }
        pppppppdVar3 = (double *******)((long)local_2c80 + (long)(int)(uVar18 << 3) + 0xc00);
        uVar55 = (ulong)uVar18;
        uVar36 = uVar55 & 0xfffffffe;
        lVar44 = lVar42 * (lVar43 + 1);
        lVar28 = lVar42 * lVar43;
        do {
          lVar64 = *(long *)(param_2 + 8);
          lVar45 = lVar64 + (long)iVar54 * 0x38;
          if (0xc < *(byte *)(lVar45 + 8) - 1) goto switchD_033a0ab0_caseD_3;
          lVar65 = (long)iVar54;
          uVar29 = (ulong)*(ushort *)(lVar45 + 0xc);
          pppppppdVar51 = (double *******)(param_3 + lVar43 * lVar42 + uVar29);
          pppppppdVar48 =
               (double *******)(param_4 + lVar43 * lVar35 + (ulong)*(ushort *)(lVar45 + 10));
          switch((uint)*(byte *)(lVar45 + 8)) {
          case 1:
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x20);
            puVar38 = puVar30;
            if ((*puVar30 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            if ((puVar38[2] & 0x1f) != 2) {
              puVar30 = (ulong *)0x0;
            }
            if (puVar30 != (ulong *)0x0) {
              puVar38 = puVar30;
              do {
                uVar29 = *puVar38;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar61 = (long *)puVar38[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar61 & 1) != 0) {
                    piVar59 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339ec70;
                }
                puVar38 = (ulong *)puVar38[1];
              } while (puVar38 != (ulong *)0x0);
            }
            plVar61 = (long *)0x0;
LAB_0339ec70:
            puVar38 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x18);
            puVar31 = puVar38;
            if ((*puVar38 & 1) == 0) {
              do {
                puVar31 = (ulong *)puVar31[1];
              } while ((*puVar31 & 1) == 0);
            }
            if ((puVar31[2] & 0x1f) != 2) {
              puVar38 = (ulong *)0x0;
            }
            if (puVar38 != (ulong *)0x0) {
              puVar31 = puVar38;
              do {
                uVar29 = *puVar31;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar20 = (long *)puVar31[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar20 & 1) != 0) {
                    piVar59 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339f268;
                }
                puVar31 = (ulong *)puVar31[1];
              } while (puVar31 != (ulong *)0x0);
            }
            plVar20 = (long *)0x0;
LAB_0339f268:
            if ((int)uVar27 < 1) {
              bVar14 = true;
            }
            else {
              uVar34 = 0;
              do {
                local_2080 = (double *******)((ulong)local_2080 & 0xffffffffffffff00);
                plVar22 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
                (**(code **)(*plVar22 + 0x38))(plVar22,pppppppdVar48,puVar38,&local_2080);
                plVar62 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                iVar15 = (**(code **)(*plVar62 + 0x30))
                                   (plVar62,pppppppdVar51,puVar30,(ulong)local_2080 & 0xff);
                if (iVar15 < 0) {
                  bVar14 = false;
                  goto joined_r0x0339f370;
                }
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = plVar62 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                if (((ulong)plVar20 & 1) != 0) {
                  plVar61 = plVar22 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar22 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar22 + 8))(plVar22);
                  }
                }
                uVar34 = uVar34 + 1;
                plVar61 = plVar62;
                plVar20 = plVar22;
              } while (uVar34 != uVar63);
              bVar14 = true;
            }
joined_r0x0339f370:
            if (((ulong)plVar20 & 1) != 0) {
              plVar20 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
              plVar62 = plVar20 + 1;
              do {
                lVar64 = *plVar62;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                if (bVar12) {
                  *(int *)plVar62 = (int)lVar64 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if ((plVar20 != (long *)0x0) && ((int)lVar64 == 1)) {
                (**(code **)(*plVar20 + 8))();
              }
            }
            if (((ulong)plVar61 & 1) != 0) {
              plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
              plVar20 = plVar61 + 1;
              do {
                iVar15 = (int)*plVar20;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar12) {
                  *(int *)plVar20 = iVar15 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
LAB_0339ffb4:
              if ((plVar61 != (long *)0x0) && (iVar15 == 1)) {
                (**(code **)(*plVar61 + 8))();
              }
            }
            goto joined_r0x033a0128;
          case 2:
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x20);
            puVar38 = puVar30;
            if ((*puVar30 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            if ((puVar38[2] & 0x1f) != 4) {
              puVar30 = (ulong *)0x0;
            }
            if (puVar30 != (ulong *)0x0) {
              puVar38 = puVar30;
              do {
                uVar29 = *puVar38;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar61 = (long *)puVar38[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar61 & 1) != 0) {
                    piVar59 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339ed00;
                }
                puVar38 = (ulong *)puVar38[1];
              } while (puVar38 != (ulong *)0x0);
            }
            plVar61 = (long *)0x0;
LAB_0339ed00:
            puVar38 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x18);
            puVar31 = puVar38;
            if ((*puVar38 & 1) == 0) {
              do {
                puVar31 = (ulong *)puVar31[1];
              } while ((*puVar31 & 1) == 0);
            }
            if ((puVar31[2] & 0x1f) != 4) {
              puVar38 = (ulong *)0x0;
            }
            if (puVar38 != (ulong *)0x0) {
              puVar31 = puVar38;
              do {
                uVar29 = *puVar31;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar20 = (long *)puVar31[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar20 & 1) != 0) {
                    piVar59 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339f3a8;
                }
                puVar31 = (ulong *)puVar31[1];
              } while (puVar31 != (ulong *)0x0);
            }
            plVar20 = (long *)0x0;
LAB_0339f3a8:
            if ((int)uVar27 < 1) {
              bVar14 = true;
            }
            else {
              uVar34 = 0;
              do {
                local_2080 = (double *******)0x0;
                plVar22 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
                local_2078 = (ulong *)((ulong)local_2078 & 0xffffffffffffff00);
                (**(code **)(*plVar22 + 0x38))(plVar22,pppppppdVar48,puVar38,&local_2080);
                plVar62 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                iVar15 = (**(code **)(*plVar62 + 0x30))(plVar62,pppppppdVar51,puVar30,&local_2080);
                if (iVar15 < 0) {
                  bVar14 = false;
                  goto joined_r0x0339f4c4;
                }
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = plVar62 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                if (((ulong)plVar20 & 1) != 0) {
                  plVar61 = plVar22 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar22 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar22 + 8))(plVar22);
                  }
                }
                uVar34 = uVar34 + 1;
                plVar61 = plVar62;
                plVar20 = plVar22;
              } while (uVar34 != uVar63);
              bVar14 = true;
            }
joined_r0x0339f4c4:
            if (((ulong)plVar20 & 1) != 0) {
              plVar20 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
              plVar62 = plVar20 + 1;
              do {
                lVar64 = *plVar62;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                if (bVar12) {
                  *(int *)plVar62 = (int)lVar64 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if ((plVar20 != (long *)0x0) && ((int)lVar64 == 1)) {
                (**(code **)(*plVar20 + 8))();
              }
            }
            if (((ulong)plVar61 & 1) != 0) {
              plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
              plVar20 = plVar61 + 1;
              do {
                iVar15 = (int)*plVar20;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar12) {
                  *(int *)plVar20 = iVar15 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              goto LAB_0339ffb4;
            }
            goto joined_r0x033a0128;
          case 3:
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x20);
            puVar38 = puVar30;
            if ((*puVar30 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            if ((puVar38[2] & 0x1f) != 5) {
              puVar30 = (ulong *)0x0;
            }
            if (puVar30 != (ulong *)0x0) {
              puVar38 = puVar30;
              do {
                uVar29 = *puVar38;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar61 = (long *)puVar38[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar61 & 1) != 0) {
                    piVar59 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339ed90;
                }
                puVar38 = (ulong *)puVar38[1];
              } while (puVar38 != (ulong *)0x0);
            }
            plVar61 = (long *)0x0;
LAB_0339ed90:
            puVar38 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x18);
            puVar31 = puVar38;
            if ((*puVar38 & 1) == 0) {
              do {
                puVar31 = (ulong *)puVar31[1];
              } while ((*puVar31 & 1) == 0);
            }
            if ((puVar31[2] & 0x1f) != 5) {
              puVar38 = (ulong *)0x0;
            }
            if (puVar38 != (ulong *)0x0) {
              puVar31 = puVar38;
              do {
                uVar29 = *puVar31;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar20 = (long *)puVar31[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar20 & 1) != 0) {
                    piVar59 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339f4fc;
                }
                puVar31 = (ulong *)puVar31[1];
              } while (puVar31 != (ulong *)0x0);
            }
            plVar20 = (long *)0x0;
LAB_0339f4fc:
            if ((int)uVar27 < 1) {
              bVar14 = true;
            }
            else {
              uVar34 = 0;
              do {
                local_2080 = (double *******)0x0;
                plVar22 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
                (**(code **)(*plVar22 + 0x38))(plVar22,pppppppdVar48,puVar38,&local_2080);
                plVar62 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                iVar15 = (**(code **)(*plVar62 + 0x30))(local_2080,plVar62,pppppppdVar51,puVar30);
                if (iVar15 < 0) {
                  bVar14 = false;
                  goto joined_r0x0339f604;
                }
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = plVar62 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                if (((ulong)plVar20 & 1) != 0) {
                  plVar61 = plVar22 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar22 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar22 + 8))(plVar22);
                  }
                }
                uVar34 = uVar34 + 1;
                plVar61 = plVar62;
                plVar20 = plVar22;
              } while (uVar34 != uVar63);
              bVar14 = true;
            }
joined_r0x0339f604:
            if (((ulong)plVar20 & 1) != 0) {
              plVar20 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
              plVar62 = plVar20 + 1;
              do {
                lVar64 = *plVar62;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                if (bVar12) {
                  *(int *)plVar62 = (int)lVar64 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if ((plVar20 != (long *)0x0) && ((int)lVar64 == 1)) {
                (**(code **)(*plVar20 + 8))();
              }
            }
            if (((ulong)plVar61 & 1) != 0) {
              plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
              plVar20 = plVar61 + 1;
              do {
                iVar15 = (int)*plVar20;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar12) {
                  *(int *)plVar20 = iVar15 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              goto LAB_0339ffb4;
            }
            goto joined_r0x033a0128;
          case 4:
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x20);
            puVar38 = puVar30;
            if ((*puVar30 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            if ((puVar38[2] & 0x1f) != 6) {
              puVar30 = (ulong *)0x0;
            }
            if (puVar30 != (ulong *)0x0) {
              puVar38 = puVar30;
              do {
                uVar29 = *puVar38;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  uVar29 = puVar38[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if ((uVar29 & 1) != 0) {
                    piVar59 = (int *)((uVar29 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339ee20;
                }
                puVar38 = (ulong *)puVar38[1];
              } while (puVar38 != (ulong *)0x0);
            }
            uVar29 = 0;
LAB_0339ee20:
            local_2078 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x18);
            puVar38 = local_2078;
            if ((*local_2078 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            if ((puVar38[2] & 0x1f) != 6) {
              local_2078 = (ulong *)0x0;
            }
            if (local_2078 != (ulong *)0x0) {
              puVar38 = local_2078;
LAB_0339ee6c:
              uVar53 = *puVar38;
              if (((uint)uVar53 >> 2 & 1) == 0) goto code_r0x0339ee74;
              plVar61 = (long *)puVar38[(uVar53 >> 1 & 1) + (uVar53 & 1) + 2];
              if (((ulong)plVar61 & 1) != 0) {
                plVar62 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                plVar20 = plVar62 + 1;
                do {
                  cVar11 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar14) {
                    *(int *)plVar20 = (int)*plVar20 + 1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                local_2080 = pppppppdVar48;
                local_2070 = plVar61;
                do {
                  cVar11 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar14) {
                    *(int *)plVar20 = (int)*plVar20 + 1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (0 < (int)uVar27) goto LAB_0339f668;
                do {
                  lVar64 = *plVar20;
                  cVar11 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar14) {
                    *(int *)plVar20 = (int)lVar64 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if ((plVar62 != (long *)0x0) && ((int)lVar64 == 1)) {
                  (**(code **)(*plVar62 + 8))(plVar62);
                }
                goto LAB_0339f828;
              }
              goto LAB_0339ee84;
            }
LAB_0339ee7c:
            plVar61 = (long *)0x0;
LAB_0339ee84:
            local_2080 = pppppppdVar48;
            local_2070 = plVar61;
            if (0 < (int)uVar27) {
LAB_0339f668:
              uVar34 = 0;
              local_2080 = pppppppdVar48;
              local_2070 = plVar61;
              do {
                iVar15 = (**(code **)(**(long **)(param_1 + 0x288) + 0x20))
                                   (*(long **)(param_1 + 0x288),&local_2080);
                if (iVar15 != 0 && *(char *)(param_1 + 0x2a8) != '\0') {
                  puVar38 = puVar30;
                  if (((ulong *)0x1 < puVar30) &&
                     (uVar25 = (uint)*puVar30, (uVar25 >> 0x11 & 1) != 0)) {
                    uVar53 = CONCAT44(uVar25,uVar25) & 0x1ffff0001ffff;
                    uVar53 = puVar30[(ulong)(byte)(POPCOUNT((char)uVar53) +
                                                   POPCOUNT((char)(uVar53 >> 8)) +
                                                  POPCOUNT((char)(uVar53 >> 0x10))) + 2];
                    while ((((uVar53 & 0x300000) != 0 &&
                            (puVar38 = (ulong *)puVar38[1], (ulong *)0x1 < puVar38)) &&
                           (uVar25 = (uint)*puVar38, (uVar25 >> 0x11 & 1) != 0))) {
                      uVar53 = CONCAT44(uVar25,uVar25) & 0x1ffff0001ffff;
                      uVar53 = puVar38[(ulong)(byte)(POPCOUNT((char)uVar53) +
                                                     POPCOUNT((char)(uVar53 >> 8)) +
                                                    POPCOUNT((char)(uVar53 >> 0x10))) + 2];
                    }
                  }
                  for (puVar31 = local_2078;
                      (((ulong *)0x1 < puVar31 &&
                       (uVar25 = (uint)*puVar31, (uVar25 >> 0x11 & 1) != 0)) &&
                      (uVar53 = CONCAT44(uVar25,uVar25) & 0x1ffff0001ffff,
                      (puVar31[(ulong)(byte)(POPCOUNT((char)uVar53) + POPCOUNT((char)(uVar53 >> 8))
                                            + POPCOUNT((char)(uVar53 >> 0x10))) + 2] & 0x300000) !=
                      0)); puVar31 = (ulong *)puVar31[1]) {
                  }
                  (**(code **)(**(long **)(param_1 + 0x2a0) + 0x10))
                            (*(long **)(param_1 + 0x2a0),pppppppdVar51,puVar38);
                }
                *(uint *)pppppppdVar51 = 0;
                (**(code **)(**(long **)(param_1 + 0x2a0) + 0x18))
                          (*(long **)(param_1 + 0x2a0),pppppppdVar51,iVar15,local_2078);
                pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                plVar20 = (long *)((ulong)local_2070 & 0xfffffffffffffffe);
                local_2080 = (double *******)((long)local_2080 + lVar35);
                if (((ulong)local_2070 & 1) != 0) {
                  plVar62 = plVar20 + 1;
                  do {
                    lVar64 = *plVar62;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                    if (bVar14) {
                      *(int *)plVar62 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar20 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar20 + 8))(plVar20);
                  }
                }
                uVar34 = uVar34 + 1;
                local_2070 = plVar20;
              } while (uVar34 != uVar18);
              if (((ulong)plVar61 & 1) != 0) {
                plVar62 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
LAB_0339f828:
                plVar61 = plVar62 + 1;
                do {
                  lVar64 = *plVar61;
                  cVar11 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                  if (bVar14) {
                    *(int *)plVar61 = (int)lVar64 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if ((plVar62 != (long *)0x0) && ((int)lVar64 == 1)) {
                  (**(code **)(*plVar62 + 8))(plVar62);
                }
              }
            }
            if ((uVar29 & 1) != 0) {
              plVar61 = (long *)(uVar29 & 0xfffffffffffffffe);
              plVar20 = plVar61 + 1;
              do {
                iVar15 = (int)*plVar20;
                cVar11 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar14) {
                  *(int *)plVar20 = iVar15 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
LAB_0339fe88:
              if ((plVar61 != (long *)0x0) && (iVar15 == 1)) {
                (**(code **)(*plVar61 + 8))();
              }
            }
            break;
          case 5:
            if ((int)(local_2c88._4_4_ & 0x7fffffff) < (int)((int)local_2c88 + uVar18)) {
              FUN_03218528(&local_2c90,puVar5);
            }
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x20);
            puVar38 = puVar30;
            if ((*puVar30 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            if ((puVar38[2] & 0x1f) != 3) {
              puVar30 = (ulong *)0x0;
            }
            if (puVar30 != (ulong *)0x0) {
              puVar38 = puVar30;
              do {
                uVar29 = *puVar38;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar61 = (long *)puVar38[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar61 & 1) != 0) {
                    piVar59 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339eed4;
                }
                puVar38 = (ulong *)puVar38[1];
              } while (puVar38 != (ulong *)0x0);
            }
            plVar61 = (long *)0x0;
LAB_0339eed4:
            puVar38 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x18);
            puVar31 = puVar38;
            if ((*puVar38 & 1) == 0) {
              do {
                puVar31 = (ulong *)puVar31[1];
              } while ((*puVar31 & 1) == 0);
            }
            if ((puVar31[2] & 0x1f) != 3) {
              puVar38 = (ulong *)0x0;
            }
            if (puVar38 != (ulong *)0x0) {
              puVar31 = puVar38;
LAB_0339ef18:
              uVar29 = *puVar31;
              if (((uint)uVar29 >> 2 & 1) == 0) goto code_r0x0339ef20;
              plVar20 = (long *)puVar31[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
              if (((ulong)plVar20 & 1) != 0) {
                plVar22 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
                plVar62 = plVar22 + 1;
                do {
                  cVar11 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                  if (bVar14) {
                    *(int *)plVar62 = (int)*plVar62 + 1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if ((int)uVar27 < 1) {
                  do {
                    lVar64 = *plVar62;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                    if (bVar14) {
                      *(int *)plVar62 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar22 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar22 + 8))();
                  }
                  goto LAB_0339faa8;
                }
                goto LAB_0339f8b4;
              }
              goto LAB_0339ef30;
            }
LAB_0339ef28:
            plVar20 = (long *)0x0;
LAB_0339ef30:
            if ((int)uVar27 < 1) {
LAB_0339faa8:
              if (((ulong)plVar61 & 1) != 0) {
                plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                plVar20 = plVar61 + 1;
                do {
                  iVar15 = (int)*plVar20;
                  cVar11 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar14) {
                    *(int *)plVar20 = iVar15 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                goto LAB_0339fe88;
              }
            }
            else {
LAB_0339f8b4:
              uVar34 = 0;
              do {
                if (((ulong)plVar61 & 1) != 0) {
                  piVar59 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                    if (bVar14) {
                      *piVar59 = *piVar59 + 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                }
                if (((ulong)plVar20 & 1) != 0) {
                  piVar59 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                    if (bVar14) {
                      *piVar59 = *piVar59 + 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                }
                lVar64 = (long)(int)local_2c88;
                if ((int)(local_2c88._4_4_ & 0x7fffffff) <= (int)local_2c88) {
                  FUN_03218528(&local_2c90,PTR_PTR_047d1a50 + 0x20,lVar64 + 1);
                }
                plVar62 = local_2c90 + (long)(int)local_2c88 * 6;
                *plVar62 = (long)pppppppdVar51;
                plVar62[1] = (long)puVar30;
                plVar62[2] = (long)plVar61;
                if (((ulong)plVar61 & 1) != 0) {
                  piVar59 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                    if (bVar14) {
                      *piVar59 = *piVar59 + 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                }
                local_2c90[(long)(int)local_2c88 * 6 + 5] = (long)plVar20;
                local_2c90[(long)(int)local_2c88 * 6 + 3] = (long)pppppppdVar48;
                local_2c90[(long)(int)local_2c88 * 6 + 4] = (long)puVar38;
                uVar16 = (undefined4)(lVar64 + 1);
                if (((ulong)plVar20 & 1) == 0) {
                  local_2c88 = CONCAT44(local_2c88._4_4_,uVar16);
                }
                else {
                  plVar22 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
                  plVar62 = plVar22 + 1;
                  do {
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                    if (bVar14) {
                      *(int *)plVar62 = (int)*plVar62 + 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  local_2c88 = CONCAT44(local_2c88._4_4_,uVar16);
                  do {
                    lVar64 = *plVar62;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                    if (bVar14) {
                      *(int *)plVar62 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar22 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar22 + 8))();
                  }
                }
                plVar62 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = plVar62 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                plVar22 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
                if (((ulong)plVar20 & 1) != 0) {
                  plVar61 = plVar22 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar22 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar22 + 8))(plVar22);
                  }
                }
                uVar34 = uVar34 + 1;
                plVar61 = plVar62;
                plVar20 = plVar22;
              } while (uVar34 != uVar63);
            }
            break;
          case 6:
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x20);
            if (puVar30 != (ulong *)0x0) {
              puVar38 = puVar30;
              do {
                uVar29 = *puVar38;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  uVar29 = puVar38[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if ((uVar29 & 1) != 0) {
                    piVar59 = (int *)((uVar29 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339ebb4;
                }
                puVar38 = (ulong *)puVar38[1];
              } while (puVar38 != (ulong *)0x0);
            }
            uVar29 = 0;
LAB_0339ebb4:
            puVar38 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x18);
            if (puVar38 != (ulong *)0x0) {
              puVar31 = puVar38;
              do {
                uVar53 = *puVar31;
                if (((uint)uVar53 >> 2 & 1) != 0) {
                  uVar53 = puVar31[(uVar53 >> 1 & 1) + (uVar53 & 1) + 2];
                  if ((uVar53 & 1) != 0) {
                    piVar59 = (int *)((uVar53 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339f000;
                }
                puVar31 = (ulong *)puVar31[1];
              } while (puVar31 != (ulong *)0x0);
            }
            uVar53 = 0;
LAB_0339f000:
            iVar15 = (**(code **)(lVar64 + lVar65 * 0x38 + 0x28))
                               (pppppppdVar51,puVar30,pppppppdVar48,puVar38,uVar18);
            if ((uVar53 & 1) != 0) {
              plVar20 = (long *)(uVar53 & 0xfffffffffffffffe);
              plVar61 = plVar20 + 1;
              do {
                lVar64 = *plVar61;
                cVar11 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar14) {
                  *(int *)plVar61 = (int)lVar64 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if ((plVar20 != (long *)0x0) && ((int)lVar64 == 1)) {
                (**(code **)(*plVar20 + 8))();
              }
            }
            if ((uVar29 & 1) != 0) {
              plVar20 = (long *)(uVar29 & 0xfffffffffffffffe);
              plVar61 = plVar20 + 1;
              do {
                lVar64 = *plVar61;
                cVar11 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar14) {
                  *(int *)plVar61 = (int)lVar64 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if ((plVar20 != (long *)0x0) && ((int)lVar64 == 1)) {
                (**(code **)(*plVar20 + 8))();
              }
            }
            if (iVar15 < 0) goto LAB_033a120c;
            break;
          case 7:
            pbVar33 = *(byte **)(lVar64 + lVar65 * 0x38 + 0x20);
            pbVar37 = pbVar33;
            if ((*pbVar33 & 1) == 0) {
              do {
                pbVar37 = *(byte **)(pbVar37 + 8);
              } while ((*pbVar37 & 1) == 0);
            }
            if ((*(ulong *)(pbVar37 + 0x10) & 0x1f) != 4) {
              pbVar33 = (byte *)0x0;
            }
            for (; (*pbVar33 & 1) == 0; pbVar33 = *(byte **)(pbVar33 + 8)) {
            }
            pbVar37 = *(byte **)(lVar64 + lVar65 * 0x38 + 0x18);
            uVar34 = *(uint *)(pbVar33 + 0x10);
            pbVar33 = pbVar37;
            if ((*pbVar37 & 1) == 0) {
              do {
                pbVar33 = *(byte **)(pbVar33 + 8);
              } while ((*pbVar33 & 1) == 0);
            }
            if ((*(ulong *)(pbVar33 + 0x10) & 0x1f) != 4) {
              pbVar37 = (byte *)0x0;
            }
            for (; (*pbVar37 & 1) == 0; pbVar37 = *(byte **)(pbVar37 + 8)) {
            }
            uVar56 = *(uint *)(pbVar37 + 0x10);
            uVar57 = (uVar34 >> 10) + 7 >> 3;
            uVar53 = (ulong)uVar57;
            uVar25 = (uVar56 >> 10) + 7;
            uVar8 = uVar57 - (uVar25 >> 3);
            uVar60 = (ulong)uVar8;
            uVar13 = (uVar34 ^ uVar56) >> 8 & 1;
            if ((int)uVar8 < 1) {
              pppppppdVar49 = (double *******)((long)pppppppdVar48 + (ulong)-uVar8);
              if ((uVar56 & 0x100) == 0) {
                pppppppdVar49 = pppppppdVar48;
              }
              if (uVar13 == 0) {
                if ((uVar57 == param_5) && (uVar57 == param_6)) goto LAB_0339e8e0;
                if (uVar57 != 0 && 0 < (int)uVar27) {
                  uVar34 = 0;
                  do {
                    if (uVar53 - 1 < 7) {
                      uVar29 = 0;
                    }
                    else {
                      uVar29 = 0;
                      do {
                        puVar32 = (undefined1 *)((long)pppppppdVar49 + uVar29);
                        puVar41 = (undefined1 *)((long)pppppppdVar51 + uVar29);
                        uVar29 = uVar29 + 8;
                        *puVar41 = *puVar32;
                        puVar41[1] = puVar32[1];
                        puVar41[2] = puVar32[2];
                        puVar41[3] = puVar32[3];
                        puVar41[4] = puVar32[4];
                        puVar41[5] = puVar32[5];
                        puVar41[6] = puVar32[6];
                        puVar41[7] = puVar32[7];
                      } while ((uVar53 & 0xffff8) != uVar29);
                    }
                    if ((uVar57 & 7) != 0) {
                      uVar60 = uVar53 & 7;
                      do {
                        uVar60 = uVar60 - 1;
                        *(undefined1 *)((long)pppppppdVar51 + uVar29) =
                             *(undefined1 *)((long)pppppppdVar49 + uVar29);
                        uVar29 = uVar29 + 1;
                      } while (uVar60 != 0);
                    }
                    uVar34 = uVar34 + 1;
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar49 = (double *******)((long)pppppppdVar49 + lVar35);
                  } while (uVar34 != uVar18);
                }
              }
              else if (0 < (int)uVar27) {
                switch(uVar57) {
                case 1:
                  if (uVar55 - 1 < 3) {
                    uVar53 = 0;
                  }
                  else {
                    uVar53 = 0;
                    lVar64 = param_3 + uVar29;
                    pppppppdVar51 = pppppppdVar49;
                    do {
                      *(undefined1 *)(lVar28 + lVar64) = *(undefined1 *)pppppppdVar51;
                      uVar53 = uVar53 + 4;
                      *(undefined1 *)(lVar44 + lVar64) =
                           *(undefined1 *)(lVar35 + (long)pppppppdVar51);
                      *(undefined1 *)(lVar42 * (lVar43 + 2) + lVar64) =
                           *(undefined1 *)(lVar52 + (long)pppppppdVar51);
                      puVar32 = (undefined1 *)(lVar35 * 3 + (long)pppppppdVar51);
                      pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar35 * 4);
                      *(undefined1 *)(lVar42 * (lVar43 + 3) + lVar64) = *puVar32;
                      lVar64 = lVar64 + lVar42 * 4;
                    } while ((uVar55 & 0xfffffffc) != uVar53);
                  }
                  if ((uVar18 & 3) != 0) {
                    pppppppdVar49 = (double *******)((long)pppppppdVar49 + lVar35 * uVar53);
                    puVar32 = (undefined1 *)(param_3 + lVar42 * (lVar43 + uVar53) + uVar29);
                    uVar29 = uVar55 & 3;
                    do {
                      *puVar32 = *(undefined1 *)pppppppdVar49;
                      pppppppdVar49 = (double *******)((long)pppppppdVar49 + lVar35);
                      uVar29 = uVar29 - 1;
                      puVar32 = puVar32 + lVar42;
                    } while (uVar29 != 0);
                  }
                  break;
                case 2:
                  uVar53 = 0;
                  if (uVar55 != 1) {
                    uVar53 = 0;
                    lVar64 = param_3 + uVar29;
                    pppppppdVar48 = pppppppdVar49;
                    do {
                      *(ushort *)(lVar28 + lVar64) =
                           *(ushort *)pppppppdVar48 >> 8 | *(ushort *)pppppppdVar48 << 8;
                      uVar53 = uVar53 + 2;
                      puVar1 = (ushort *)(lVar35 + (long)pppppppdVar48);
                      pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar52);
                      *(ushort *)(lVar44 + lVar64) = *puVar1 >> 8 | *puVar1 << 8;
                      lVar64 = lVar64 + lVar50;
                    } while (uVar36 != uVar53);
                  }
                  if ((uVar18 & 1) != 0) {
                    uVar10 = *(ushort *)(uVar53 * lVar35 + (long)pppppppdVar49);
                    *(ushort *)(uVar53 * lVar42 + (long)pppppppdVar51) = uVar10 >> 8 | uVar10 << 8;
                  }
                  break;
                case 4:
                  uVar53 = 0;
                  if (uVar55 != 1) {
                    uVar53 = 0;
                    lVar64 = param_3 + uVar29;
                    pppppppdVar48 = pppppppdVar49;
                    do {
                      uVar34 = (*(uint *)pppppppdVar48 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar48 & 0xff00ff) << 8;
                      uVar53 = uVar53 + 2;
                      *(uint *)(lVar28 + lVar64) = uVar34 >> 0x10 | uVar34 << 0x10;
                      puVar2 = (uint *)(lVar35 + (long)pppppppdVar48);
                      pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar52);
                      uVar34 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
                      *(uint *)(lVar44 + lVar64) = uVar34 >> 0x10 | uVar34 << 0x10;
                      lVar64 = lVar64 + lVar50;
                    } while (uVar36 != uVar53);
                  }
                  if ((uVar18 & 1) != 0) {
                    uVar34 = *(uint *)(uVar53 * lVar35 + (long)pppppppdVar49);
                    uVar34 = (uVar34 & 0xff00ff00) >> 8 | (uVar34 & 0xff00ff) << 8;
                    *(uint *)(uVar53 * lVar42 + (long)pppppppdVar51) =
                         uVar34 >> 0x10 | uVar34 << 0x10;
                  }
                  break;
                case 8:
                  uVar53 = 0;
                  if (uVar55 != 1) {
                    uVar53 = 0;
                    lVar64 = param_3 + uVar29;
                    pppppppdVar48 = pppppppdVar49;
                    do {
                      uVar29 = ((ulong)*pppppppdVar48 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar48 & 0xff00ff00ff00ff) << 8;
                      uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar29 & 0xffff0000ffff) << 0x10;
                      uVar53 = uVar53 + 2;
                      *(ulong *)(lVar28 + lVar64) = uVar29 >> 0x20 | uVar29 << 0x20;
                      puVar30 = (ulong *)(lVar35 + (long)pppppppdVar48);
                      pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar52);
                      uVar29 = (*puVar30 & 0xff00ff00ff00ff00) >> 8 |
                               (*puVar30 & 0xff00ff00ff00ff) << 8;
                      uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar29 & 0xffff0000ffff) << 0x10;
                      *(ulong *)(lVar44 + lVar64) = uVar29 >> 0x20 | uVar29 << 0x20;
                      lVar64 = lVar64 + lVar50;
                    } while (uVar36 != uVar53);
                  }
                  if ((uVar18 & 1) != 0) {
                    ppppppdVar67 = *(double *******)(uVar53 * lVar35 + (long)pppppppdVar49);
                    uVar29 = ((ulong)ppppppdVar67 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar67 & 0xff00ff00ff00ff) << 8;
                    uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar29 & 0xffff0000ffff) << 0x10;
                    *(double *******)(uVar53 * lVar42 + (long)pppppppdVar51) =
                         (double ******)(uVar29 >> 0x20 | uVar29 << 0x20);
                  }
                }
              }
            }
            else {
              bVar14 = (uVar34 & 0x100) == 0;
              uVar29 = uVar60;
              if (bVar14) {
                uVar29 = 0;
              }
              iVar15 = 1;
              if (!bVar14) {
                iVar15 = -uVar8;
              }
              if (0 < (int)uVar27) {
                uVar25 = uVar25 >> 3;
                uVar53 = (ulong)uVar25;
                lVar64 = (long)(int)(uVar25 - bVar14);
                if (uVar13 == 0) {
                  if (uVar25 == 0) {
                    if (uVar18 != 1) {
                      iVar58 = -(uVar18 & 0xfffffffe);
                      do {
                        memcpy((void *)(uVar29 + (long)pppppppdVar51),pppppppdVar48,0);
                        if ((uVar56 >> 9 & 1) != 0) {
                          memset((char *)((long)pppppppdVar51 + lVar64) + iVar15,
                                 (int)*(char *)((long)pppppppdVar51 + lVar64) >> 7,uVar60);
                        }
                        memcpy((void *)((long)pppppppdVar51 + uVar29 + lVar42),
                               (void *)((long)pppppppdVar48 + lVar35),0);
                        if ((uVar56 >> 9 & 1) != 0) {
                          pcVar7 = (char *)((long)pppppppdVar51 + lVar64 + lVar42);
                          memset(pcVar7 + iVar15,(int)*pcVar7 >> 7,uVar60);
                        }
                        pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42 * 2);
                        pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35 + lVar35);
                        iVar58 = iVar58 + 2;
                      } while (iVar58 != 0);
                    }
                    if ((uVar18 & 1) != 0) {
                      memcpy((void *)(uVar29 + (long)pppppppdVar51),pppppppdVar48,0);
                      goto joined_r0x033a08c0;
                    }
                  }
                  else {
                    uVar34 = 0;
                    do {
                      if (uVar53 - 1 < 7) {
                        uVar40 = 0;
                      }
                      else {
                        uVar40 = 0;
                        do {
                          puVar32 = (undefined1 *)((long)pppppppdVar48 + uVar40 + 3);
                          puVar41 = (undefined1 *)((long)pppppppdVar51 + uVar40 + uVar29 + 3);
                          uVar40 = uVar40 + 8;
                          puVar41[-3] = puVar32[-3];
                          puVar41[-2] = puVar32[-2];
                          puVar41[-1] = puVar32[-1];
                          *puVar41 = *puVar32;
                          puVar41[1] = puVar32[1];
                          puVar41[2] = puVar32[2];
                          puVar41[3] = puVar32[3];
                          puVar41[4] = puVar32[4];
                        } while ((uVar53 & 0xffff8) != uVar40);
                      }
                      if ((uVar25 & 7) != 0) {
                        puVar32 = (undefined1 *)((long)pppppppdVar51 + uVar40 + uVar29);
                        puVar41 = (undefined1 *)((long)pppppppdVar48 + uVar40);
                        uVar40 = uVar53 & 7;
                        do {
                          uVar40 = uVar40 - 1;
                          *puVar32 = *puVar41;
                          puVar32 = puVar32 + 1;
                          puVar41 = puVar41 + 1;
                        } while (uVar40 != 0);
                      }
                      if ((uVar56 >> 9 & 1) != 0) {
                        memset((char *)((long)pppppppdVar51 + lVar64) + iVar15,
                               (int)*(char *)((long)pppppppdVar51 + lVar64) >> 7,uVar60);
                      }
                      pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                      pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                      uVar34 = uVar34 + 1;
                    } while (uVar34 != uVar18);
                  }
                }
                else if (uVar25 == 1) {
                  if (uVar18 != 1) {
                    iVar58 = -(uVar18 & 0xfffffffe);
                    do {
                      *(undefined1 *)(uVar29 + (long)pppppppdVar51) = *(undefined1 *)pppppppdVar48;
                      if ((uVar56 >> 9 & 1) != 0) {
                        memset((char *)((long)pppppppdVar51 + lVar64) + iVar15,
                               (int)*(char *)((long)pppppppdVar51 + lVar64) >> 7,uVar60);
                      }
                      *(undefined1 *)((long)pppppppdVar51 + uVar29 + lVar42) =
                           *(undefined1 *)((long)pppppppdVar48 + lVar35);
                      if ((uVar56 >> 9 & 1) != 0) {
                        pcVar7 = (char *)((long)pppppppdVar51 + lVar64 + lVar42);
                        memset(pcVar7 + iVar15,(int)*pcVar7 >> 7,uVar60);
                      }
                      pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42 * 2);
                      pppppppdVar48 =
                           (double *******)((undefined1 *)((long)pppppppdVar48 + lVar35) + lVar35);
                      iVar58 = iVar58 + 2;
                    } while (iVar58 != 0);
                  }
                  if ((uVar18 & 1) != 0) {
                    *(undefined1 *)(uVar29 + (long)pppppppdVar51) = *(undefined1 *)pppppppdVar48;
joined_r0x033a08c0:
                    if ((uVar56 >> 9 & 1) != 0) {
                      memset((char *)((long)pppppppdVar51 + lVar64) + iVar15,
                             (int)*(char *)((long)pppppppdVar51 + lVar64) >> 7,uVar60);
                    }
                  }
                }
                else {
                  uVar34 = uVar18;
                  do {
                    if (uVar25 == 2) {
                      *(ushort *)((long)pppppppdVar51 + uVar29) =
                           *(ushort *)pppppppdVar48 >> 8 | *(ushort *)pppppppdVar48 << 8;
                    }
                    else if (uVar25 == 4) {
                      uVar57 = (*(uint *)pppppppdVar48 & 0xff00ff00) >> 8 |
                               (*(uint *)pppppppdVar48 & 0xff00ff) << 8;
                      *(uint *)((long)pppppppdVar51 + uVar29) = uVar57 >> 0x10 | uVar57 << 0x10;
                    }
                    else if (uVar25 == 8) {
                      uVar53 = ((ulong)*pppppppdVar48 & 0xff00ff00ff00ff00) >> 8 |
                               ((ulong)*pppppppdVar48 & 0xff00ff00ff00ff) << 8;
                      uVar53 = (uVar53 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar53 & 0xffff0000ffff) << 0x10;
                      *(ulong *)((long)pppppppdVar51 + uVar29) = uVar53 >> 0x20 | uVar53 << 0x20;
                    }
                    if ((uVar56 >> 9 & 1) != 0) {
                      memset((char *)((long)pppppppdVar51 + lVar64) + iVar15,
                             (int)*(char *)((long)pppppppdVar51 + lVar64) >> 7,uVar60);
                    }
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                    uVar34 = uVar34 - 1;
                  } while (uVar34 != 0);
                }
              }
            }
            break;
          case 8:
            pbVar33 = *(byte **)(lVar64 + lVar65 * 0x38 + 0x20);
            pbVar37 = pbVar33;
            if ((*pbVar33 & 1) == 0) {
              do {
                pbVar37 = *(byte **)(pbVar37 + 8);
              } while ((*pbVar37 & 1) == 0);
            }
            if ((*(ulong *)(pbVar37 + 0x10) & 0x1f) != 5) {
              pbVar33 = (byte *)0x0;
            }
            for (; (*pbVar33 & 1) == 0; pbVar33 = *(byte **)(pbVar33 + 8)) {
            }
            pbVar37 = *(byte **)(lVar64 + lVar65 * 0x38 + 0x18);
            uVar34 = *(uint *)(pbVar33 + 0x10);
            pbVar33 = pbVar37;
            if ((*pbVar37 & 1) == 0) {
              do {
                pbVar33 = *(byte **)(pbVar33 + 8);
              } while ((*pbVar33 & 1) == 0);
            }
            if ((*(ulong *)(pbVar33 + 0x10) & 0x1f) != 5) {
              pbVar37 = (byte *)0x0;
            }
            for (; (*pbVar37 & 1) == 0; pbVar37 = *(byte **)(pbVar37 + 8)) {
            }
            uVar25 = *(uint *)(pbVar37 + 0x10);
            uVar56 = param_6;
            pppppppdVar49 = pppppppdVar48;
            if ((uVar25 & 0x100) != 0) {
              uVar56 = 8;
              pppppppdVar49 = (double *******)&local_2080;
            }
            if ((uVar25 >> 8 & 1) != 0) {
              switch((uVar25 >> 10 & 1) + (uVar25 >> 0xb & 0x1f) + (uVar25 >> 0x10 & 0xff) + 7 >> 3)
              {
              case 1:
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar47 = (double *******)&local_2080;
                  do {
                    uVar9 = *(undefined1 *)pppppppdVar48;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                    pppppppdVar46 = pppppppdVar47 + 1;
                    *(undefined1 *)pppppppdVar47 = uVar9;
                    pppppppdVar47 = pppppppdVar46;
                  } while (pppppppdVar46 < pppppppdVar3);
                }
                break;
              case 2:
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar47 = (double *******)&local_2080;
                  do {
                    uVar10 = *(ushort *)pppppppdVar48;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                    pppppppdVar46 = pppppppdVar47 + 1;
                    *(ushort *)pppppppdVar47 = uVar10 >> 8 | uVar10 << 8;
                    pppppppdVar47 = pppppppdVar46;
                  } while (pppppppdVar46 < pppppppdVar3);
                }
                break;
              case 4:
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar47 = (double *******)&local_2080;
                  do {
                    uVar57 = *(uint *)pppppppdVar48;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                    uVar57 = (uVar57 & 0xff00ff00) >> 8 | (uVar57 & 0xff00ff) << 8;
                    pppppppdVar46 = pppppppdVar47 + 1;
                    *(uint *)pppppppdVar47 = uVar57 >> 0x10 | uVar57 << 0x10;
                    pppppppdVar47 = pppppppdVar46;
                  } while (pppppppdVar46 < pppppppdVar3);
                }
                break;
              case 8:
                if (&local_2080 < pppppppdVar3) {
                  pppppppdVar47 = (double *******)&local_2080;
                  do {
                    ppppppdVar67 = *pppppppdVar48;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                    uVar29 = ((ulong)ppppppdVar67 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)ppppppdVar67 & 0xff00ff00ff00ff) << 8;
                    uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar29 & 0xffff0000ffff) << 0x10;
                    pppppppdVar46 = pppppppdVar47 + 1;
                    *pppppppdVar47 = (double ******)(uVar29 >> 0x20 | uVar29 << 0x20);
                    pppppppdVar47 = pppppppdVar46;
                  } while (pppppppdVar46 < pppppppdVar3);
                }
              }
              uVar25 = uVar25 & 0xfffffeff;
            }
            uVar57 = param_5;
            pppppppdVar48 = pppppppdVar51;
            if ((uVar34 & 0x100) != 0) {
              uVar57 = 8;
              pppppppdVar48 = (double *******)&local_2080;
            }
            uVar8 = uVar34 & 0xfffffeff;
            if (uVar25 == 0x345e05) {
              if (uVar8 == 0x345e05) {
                pppppppdVar47 = (double *******)((long)pppppppdVar48 + (long)(int)(uVar57 * uVar18))
                ;
                if (pppppppdVar48 < pppppppdVar47) {
                  do {
                    *pppppppdVar48 = *pppppppdVar49;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + (long)(int)uVar57);
                    pppppppdVar49 = (double *******)((long)pppppppdVar49 + (long)(int)uVar56);
                  } while (pppppppdVar48 < pppppppdVar47);
                }
              }
              else if (uVar8 == 0x174605) {
                pppppppdVar47 = (double *******)((long)pppppppdVar48 + (long)(int)(uVar57 * uVar18))
                ;
                if (pppppppdVar48 < pppppppdVar47) {
                  do {
                    ppppppdVar67 = *pppppppdVar49;
                    pppppppdVar49 = (double *******)((long)pppppppdVar49 + (long)(int)uVar56);
                    *(float *)pppppppdVar48 = (float)(double)ppppppdVar67;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + (long)(int)uVar57);
                  } while (pppppppdVar48 < pppppppdVar47);
                }
              }
              else if ((uVar8 == 0x74605) &&
                      (pppppppdVar47 =
                            (double *******)((long)pppppppdVar48 + (long)(int)(uVar57 * uVar18)),
                      pppppppdVar48 < pppppppdVar47)) {
                do {
                  ppppppdVar67 = *pppppppdVar49;
                  pppppppdVar49 = (double *******)((long)pppppppdVar49 + (long)(int)uVar56);
                  *(short *)pppppppdVar48 =
                       (short)((uint)((float)(double)ppppppdVar67 * 1.0039062) >> 0x10);
                  pppppppdVar48 = (double *******)((long)pppppppdVar48 + (long)(int)uVar57);
                } while (pppppppdVar48 < pppppppdVar47);
              }
            }
            else if (uVar25 == 0x174605) {
              if (uVar8 == 0x345e05) {
                pppppppdVar47 = (double *******)((long)pppppppdVar48 + (long)(int)(uVar57 * uVar18))
                ;
                if (pppppppdVar48 < pppppppdVar47) {
                  do {
                    fVar66 = *(float *)pppppppdVar49;
                    pppppppdVar49 = (double *******)((long)pppppppdVar49 + (long)(int)uVar56);
                    *pppppppdVar48 = (double ******)(double)fVar66;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + (long)(int)uVar57);
                  } while (pppppppdVar48 < pppppppdVar47);
                }
              }
              else if (uVar8 == 0x174605) {
                pppppppdVar47 = (double *******)((long)pppppppdVar48 + (long)(int)(uVar57 * uVar18))
                ;
                if (pppppppdVar48 < pppppppdVar47) {
                  do {
                    *(uint *)pppppppdVar48 = *(uint *)pppppppdVar49;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + (long)(int)uVar57);
                    pppppppdVar49 = (double *******)((long)pppppppdVar49 + (long)(int)uVar56);
                  } while (pppppppdVar48 < pppppppdVar47);
                }
              }
              else if ((uVar8 == 0x74605) &&
                      (pppppppdVar47 =
                            (double *******)((long)pppppppdVar48 + (long)(int)(uVar57 * uVar18)),
                      pppppppdVar48 < pppppppdVar47)) {
                do {
                  fVar66 = *(float *)pppppppdVar49;
                  pppppppdVar49 = (double *******)((long)pppppppdVar49 + (long)(int)uVar56);
                  *(short *)pppppppdVar48 = (short)((uint)(fVar66 * 1.0039062) >> 0x10);
                  pppppppdVar48 = (double *******)((long)pppppppdVar48 + (long)(int)uVar57);
                } while (pppppppdVar48 < pppppppdVar47);
              }
            }
            else if (uVar25 == 0x74605) {
              if (uVar8 == 0x345e05) {
                pppppppdVar47 = (double *******)((long)pppppppdVar48 + (long)(int)(uVar57 * uVar18))
                ;
                if (pppppppdVar48 < pppppppdVar47) {
                  do {
                    uVar10 = *(ushort *)pppppppdVar49;
                    pppppppdVar49 = (double *******)((long)pppppppdVar49 + (long)(int)uVar56);
                    *pppppppdVar48 = (double ******)(double)(float)((uint)uVar10 << 0x10);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + (long)(int)uVar57);
                  } while (pppppppdVar48 < pppppppdVar47);
                }
              }
              else if (uVar8 == 0x174605) {
                pppppppdVar47 = (double *******)((long)pppppppdVar48 + (long)(int)(uVar57 * uVar18))
                ;
                if (pppppppdVar48 < pppppppdVar47) {
                  do {
                    uVar10 = *(ushort *)pppppppdVar49;
                    pppppppdVar49 = (double *******)((long)pppppppdVar49 + (long)(int)uVar56);
                    *(uint *)pppppppdVar48 = (uint)uVar10 << 0x10;
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + (long)(int)uVar57);
                  } while (pppppppdVar48 < pppppppdVar47);
                }
              }
              else if ((uVar8 == 0x74605) &&
                      (pppppppdVar47 =
                            (double *******)((long)pppppppdVar48 + (long)(int)(uVar57 * uVar18)),
                      pppppppdVar48 < pppppppdVar47)) {
                do {
                  *(undefined2 *)pppppppdVar48 = *(undefined2 *)pppppppdVar49;
                  pppppppdVar48 = (double *******)((long)pppppppdVar48 + (long)(int)uVar57);
                  pppppppdVar49 = (double *******)((long)pppppppdVar49 + (long)(int)uVar56);
                } while (pppppppdVar48 < pppppppdVar47);
              }
            }
            if (((uVar34 >> 8 & 1) != 0) &&
               (uVar34 = (uVar34 >> 10 & 1) + (uVar34 >> 0xb & 0x1f) + (uVar34 >> 0x10 & 0xff) + 7
                         >> 3, uVar34 - 1 < 8)) {
              pppppppdVar48 = (double *******)((long)pppppppdVar51 + (long)(int)(uVar18 * param_5));
              switch(uVar34) {
              case 1:
                if (pppppppdVar51 < pppppppdVar48) {
                  pppppppdVar49 = (double *******)&local_2080;
                  do {
                    *(undefined1 *)pppppppdVar51 = *(undefined1 *)pppppppdVar49;
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar49 = pppppppdVar49 + 1;
                  } while (pppppppdVar51 < pppppppdVar48);
                }
                break;
              case 2:
                if (pppppppdVar51 < pppppppdVar48) {
                  pppppppdVar49 = (double *******)&local_2080;
                  do {
                    *(ushort *)pppppppdVar51 =
                         *(ushort *)pppppppdVar49 >> 8 | *(ushort *)pppppppdVar49 << 8;
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar49 = pppppppdVar49 + 1;
                  } while (pppppppdVar51 < pppppppdVar48);
                }
                break;
              case 4:
                if (pppppppdVar51 < pppppppdVar48) {
                  pppppppdVar49 = (double *******)&local_2080;
                  do {
                    uVar34 = (*(uint *)pppppppdVar49 & 0xff00ff00) >> 8 |
                             (*(uint *)pppppppdVar49 & 0xff00ff) << 8;
                    *(uint *)pppppppdVar51 = uVar34 >> 0x10 | uVar34 << 0x10;
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar49 = pppppppdVar49 + 1;
                  } while (pppppppdVar51 < pppppppdVar48);
                }
                break;
              case 8:
                if (pppppppdVar51 < pppppppdVar48) {
                  pppppppdVar49 = (double *******)&local_2080;
                  do {
                    uVar29 = ((ulong)*pppppppdVar49 & 0xff00ff00ff00ff00) >> 8 |
                             ((ulong)*pppppppdVar49 & 0xff00ff00ff00ff) << 8;
                    uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar29 & 0xffff0000ffff) << 0x10;
                    *pppppppdVar51 = (double ******)(uVar29 >> 0x20 | uVar29 << 0x20);
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar49 = pppppppdVar49 + 1;
                  } while (pppppppdVar51 < pppppppdVar48);
                }
              }
            }
            break;
          case 9:
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x20);
            while( true ) {
              uVar34 = (uint)*puVar30;
              if ((uVar34 >> 0x14 & 1) != 0) break;
              if (((*puVar30 & 1) != 0) || (puVar30 = (ulong *)puVar30[1], puVar30 == (ulong *)0x0))
              goto LAB_0339eb4c;
            }
            if (puVar30 != (ulong *)0x0) {
              uVar34 = uVar34 & 0xfffff;
              uVar34 = (uint)(ushort)puVar30[(ulong)(byte)(POPCOUNT((char)uVar34) +
                                                           POPCOUNT((char)(uVar34 >> 8)) +
                                                          POPCOUNT((char)(uVar34 >> 0x10))) + 2];
              goto LAB_0339eb50;
            }
LAB_0339eb4c:
            uVar34 = 0;
LAB_0339eb50:
            pppppppdVar49 = (double *******)((long)pppppppdVar51 + (long)(int)(uVar18 * param_5));
            if (pppppppdVar51 < pppppppdVar49) {
              puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x18);
              while( true ) {
                uVar25 = (uint)*puVar30;
                if ((uVar25 >> 0x14 & 1) != 0) break;
                if (((*puVar30 & 1) != 0) ||
                   (puVar30 = (ulong *)puVar30[1], puVar30 == (ulong *)0x0))
                goto switchD_033a0280_caseD_3;
              }
              if (puVar30 == (ulong *)0x0) {
switchD_033a0280_caseD_3:
                do {
                } while( true );
              }
              uVar25 = uVar25 & 0xfffff;
              switch((short)puVar30[(ulong)(byte)(POPCOUNT((char)uVar25) +
                                                  POPCOUNT((char)(uVar25 >> 8)) +
                                                 POPCOUNT((char)(uVar25 >> 0x10))) + 2]) {
              case 1:
                switch(uVar34) {
                case 1:
                  do {
                    *(bool *)pppppppdVar51 = *(char *)pppppppdVar48 != '\0';
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                  } while (pppppppdVar51 < pppppppdVar49);
                  break;
                case 2:
                  do {
                    *(ushort *)pppppppdVar51 = (ushort)(*(char *)pppppppdVar48 != '\0');
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                  } while (pppppppdVar51 < pppppppdVar49);
                  break;
                default:
switchD_033a037c_caseD_3:
                  do {
                  } while( true );
                case 4:
                  do {
                    *(uint *)pppppppdVar51 = (uint)(*(char *)pppppppdVar48 != '\0');
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                  } while (pppppppdVar51 < pppppppdVar49);
                  break;
                case 8:
                  do {
                    *pppppppdVar51 = (double ******)(ulong)(*(char *)pppppppdVar48 != '\0');
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                  } while (pppppppdVar51 < pppppppdVar49);
                }
                break;
              case 2:
                if (uVar34 == 1) {
                  do {
                    *(bool *)pppppppdVar51 = *(short *)pppppppdVar48 != 0;
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                  } while (pppppppdVar51 < pppppppdVar49);
                }
                else if (uVar34 == 2) {
                  do {
                    *(ushort *)pppppppdVar51 = (ushort)(*(short *)pppppppdVar48 != 0);
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                  } while (pppppppdVar51 < pppppppdVar49);
                }
                else if (uVar34 == 4) {
                  do {
                    *(uint *)pppppppdVar51 = (uint)(*(short *)pppppppdVar48 != 0);
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                  } while (pppppppdVar51 < pppppppdVar49);
                }
                else {
                  if (uVar34 != 8) goto switchD_033a037c_caseD_3;
                  do {
                    *pppppppdVar51 = (double ******)(ulong)(*(short *)pppppppdVar48 != 0);
                    pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                    pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                  } while (pppppppdVar51 < pppppppdVar49);
                }
                break;
              default:
                goto switchD_033a0280_caseD_3;
              case 4:
                do {
                  if (7 < uVar34 - 1) goto switchD_033a037c_caseD_3;
                  uVar25 = *(uint *)pppppppdVar48;
                  switch(uVar34) {
                  case 1:
                    *(bool *)pppppppdVar51 = uVar25 != 0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar51 = (ushort)(uVar25 != 0);
                    break;
                  default:
                    goto switchD_033a037c_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar51 = (uint)(uVar25 != 0);
                    break;
                  case 8:
                    *pppppppdVar51 = (double ******)(ulong)(uVar25 != 0);
                  }
                  pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                  pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                } while (pppppppdVar51 < pppppppdVar49);
                break;
              case 8:
                do {
                  if (7 < uVar34 - 1) goto switchD_033a037c_caseD_3;
                  ppppppdVar67 = *pppppppdVar48;
                  switch(uVar34) {
                  case 1:
                    *(bool *)pppppppdVar51 = ppppppdVar67 != (double ******)0x0;
                    break;
                  case 2:
                    *(ushort *)pppppppdVar51 = (ushort)(ppppppdVar67 != (double ******)0x0);
                    break;
                  default:
                    goto switchD_033a037c_caseD_3;
                  case 4:
                    *(uint *)pppppppdVar51 = (uint)(ppppppdVar67 != (double ******)0x0);
                    break;
                  case 8:
                    *pppppppdVar51 = (double ******)(ulong)(ppppppdVar67 != (double ******)0x0);
                  }
                  pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                  pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                } while (pppppppdVar51 < pppppppdVar49);
              }
            }
            break;
          case 10:
            lVar64 = lVar64 + lVar65 * 0x38;
            local_78 = *(ulong **)(lVar64 + 0x18);
            puVar30 = *(ulong **)(lVar64 + 0x20);
            local_2080 = pppppppdVar51;
            local_2078 = puVar30;
            if (puVar30 == (ulong *)0x0) {
              local_2070 = (long *)0x0;
            }
            else {
              do {
                uVar29 = *puVar30;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  local_2070 = (long *)puVar30[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  goto LAB_0339ebf8;
                }
                puVar30 = (ulong *)puVar30[1];
              } while (puVar30 != (ulong *)0x0);
              local_2070 = (long *)0x0;
            }
LAB_0339ebf8:
            if (((ulong)local_2070 & 1) != 0) {
              piVar59 = (int *)(((ulong)local_2070 & 0xfffffffffffffffe) + 8);
              do {
                cVar11 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                if (bVar14) {
                  *piVar59 = *piVar59 + 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
            }
            puVar30 = local_78;
            if (local_78 == (ulong *)0x0) {
              local_70 = (long *)0x0;
            }
            else {
              do {
                uVar29 = *puVar30;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  local_70 = (long *)puVar30[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  goto LAB_0339f0a4;
                }
                puVar38 = puVar30 + 1;
                puVar30 = (ulong *)*puVar38;
              } while ((ulong *)*puVar38 != (ulong *)0x0);
              local_70 = (long *)0x0;
            }
LAB_0339f0a4:
            if (((ulong)local_70 & 1) != 0) {
              piVar59 = (int *)(((ulong)local_70 & 0xfffffffffffffffe) + 8);
              do {
                cVar11 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                if (bVar14) {
                  *piVar59 = *piVar59 + 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
            }
            local_80 = pppppppdVar48;
            if (0 < (int)uVar27) {
              uVar34 = 0;
              do {
                for (puVar30 = local_78; (*puVar30 & 1) == 0; puVar30 = (ulong *)puVar30[1]) {
                }
                puVar38 = local_2078;
                if ((*local_2078 & 1) == 0) {
                  do {
                    puVar38 = (ulong *)puVar38[1];
                  } while ((*puVar38 & 1) == 0);
                }
                pcVar39 = *(code **)(param_1 + (puVar38[2] & 0x1f) * 0x48 + (puVar30[2] & 0x1f) * 8)
                ;
                if (pcVar39 != (code *)0x0) {
                  (*pcVar39)(&local_2080,&local_80);
                }
                plVar61 = local_2070;
                local_2070 = (long *)((ulong)local_2070 & 0xfffffffffffffffe);
                local_2080 = (double *******)((long)local_2080 + lVar42);
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = local_2070 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((local_2070 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*local_2070 + 8))();
                  }
                }
                local_80 = (double *******)((long)local_80 + lVar35);
                plVar61 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
                uVar29 = (ulong)local_70 & 1;
                local_70 = plVar61;
                if (uVar29 != 0) {
                  plVar20 = plVar61 + 1;
                  do {
                    lVar64 = *plVar20;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                    if (bVar14) {
                      *(int *)plVar20 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar61 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar61 + 8))();
                  }
                }
                uVar34 = uVar34 + 1;
              } while (uVar34 != uVar18);
            }
            if (((ulong)local_70 & 1) != 0) {
              plVar20 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
              plVar61 = plVar20 + 1;
              do {
                lVar64 = *plVar61;
                cVar11 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar14) {
                  *(int *)plVar61 = (int)lVar64 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if ((plVar20 != (long *)0x0) && ((int)lVar64 == 1)) {
                (**(code **)(*plVar20 + 8))();
              }
            }
            if (((ulong)local_2070 & 1) != 0) {
              plVar61 = (long *)((ulong)local_2070 & 0xfffffffffffffffe);
              plVar20 = plVar61 + 1;
              do {
                iVar15 = (int)*plVar20;
                cVar11 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar14) {
                  *(int *)plVar20 = iVar15 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              goto LAB_0339fe88;
            }
            break;
          case 0xb:
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x20);
            puVar38 = puVar30;
            if ((*puVar30 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            if ((puVar38[2] & 0x1f) != 8) {
              puVar30 = (ulong *)0x0;
            }
            puVar38 = puVar30;
            if ((*puVar30 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            puVar31 = puVar30;
            if ((puVar38[2] & 0x1f) != 8) {
              puVar30 = (ulong *)0x0;
              puVar31 = puVar30;
            }
            for (; puVar30 != (ulong *)0x0; puVar30 = (ulong *)puVar30[1]) {
              uVar29 = *puVar30;
              if (((uint)uVar29 >> 2 & 1) != 0) {
                plVar61 = (long *)puVar30[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                if (((ulong)plVar61 & 1) != 0) {
                  piVar59 = (int *)(((ulong)plVar61 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                    if (bVar14) {
                      *piVar59 = *piVar59 + 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                }
                goto LAB_0339ef70;
              }
            }
            plVar61 = (long *)0x0;
LAB_0339ef70:
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x18);
            puVar38 = puVar30;
            if ((*puVar30 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            if ((puVar38[2] & 0x1f) != 8) {
              puVar30 = (ulong *)0x0;
            }
            if (puVar30 != (ulong *)0x0) {
              puVar38 = puVar30;
              do {
                uVar29 = *puVar38;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  plVar20 = (long *)puVar38[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if (((ulong)plVar20 & 1) != 0) {
                    piVar59 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_0339faf8;
                }
                puVar38 = (ulong *)puVar38[1];
              } while (puVar38 != (ulong *)0x0);
            }
            plVar20 = (long *)0x0;
LAB_0339faf8:
            if ((int)(*(uint *)(param_1 + 0x29c) & 0x7fffffff) <
                (int)(*(int *)(param_1 + 0x298) + uVar18)) {
              FUN_033a65f4(lVar4);
            }
            if ((int)uVar27 < 1) {
              if (((ulong)plVar20 & 1) != 0) {
                plVar20 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
                plVar62 = plVar20 + 1;
                do {
                  lVar64 = *plVar62;
                  cVar11 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                  if (bVar14) {
                    *(int *)plVar62 = (int)lVar64 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if ((plVar20 != (long *)0x0) && ((int)lVar64 == 1)) {
                  (**(code **)(*plVar20 + 8))();
                }
              }
              if (((ulong)plVar61 & 1) != 0) {
                plVar61 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                plVar20 = plVar61 + 1;
                do {
                  iVar15 = (int)*plVar20;
                  cVar11 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar14) {
                    *(int *)plVar20 = iVar15 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                goto LAB_0339fe88;
              }
            }
            else {
              uVar34 = 0;
              do {
                local_2068 = 0;
                plVar62 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
                local_2070 = (long *)0x0;
                local_2078 = (ulong *)0x0;
                local_2080 = (double *******)0x0;
                (**(code **)(*plVar62 + 0x50))(plVar62,pppppppdVar48,puVar30,&local_2080);
                if ((int)local_2070 == 0) {
                  if (local_2078 != (ulong *)0x0) {
                    puVar38 = puVar30;
                    do {
                      if (((byte)*puVar38 >> 1 & 1) != 0) {
                        if (1 < puVar38[3]) goto LAB_0339fd48;
                        break;
                      }
                      puVar38 = (ulong *)puVar38[1];
                    } while (puVar38 != (ulong *)0x0);
                    goto LAB_0339fb80;
                  }
LAB_0339fd48:
                  uVar16 = 0;
                }
                else {
LAB_0339fb80:
                  uVar16 = (**(code **)(**(long **)(param_1 + 0x288) + 0x30))();
                  if (((ulong)plVar20 & 1) != 0) {
                    plVar22 = plVar62 + 1;
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar14) {
                        *(int *)plVar22 = (int)*plVar22 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  iVar15 = *(int *)(param_1 + 0x298);
                  lVar64 = (long)iVar15;
                  if ((int)(*(uint *)(param_1 + 0x29c) & 0x7fffffff) <= iVar15) {
                    FUN_033a65f4(lVar4,lVar64 + 1);
                    iVar15 = *(int *)(param_1 + 0x298);
                  }
                  puVar23 = (undefined8 *)(*(long *)(param_1 + 0x290) + (long)iVar15 * 0x20);
                  *puVar23 = pppppppdVar48;
                  puVar23[1] = puVar30;
                  puVar23[2] = plVar20;
                  *(undefined4 *)(puVar23 + 3) = uVar16;
                  *(int *)(param_1 + 0x298) = (int)(lVar64 + 1);
                  if (*(char *)(param_1 + 0x2a8) != '\0') {
                    puVar38 = puVar31;
                    if (((ulong *)0x1 < puVar31) &&
                       (uVar25 = (uint)*puVar31, (uVar25 >> 0x11 & 1) != 0)) {
                      uVar29 = CONCAT44(uVar25,uVar25) & 0x1ffff0001ffff;
                      uVar29 = puVar31[(ulong)(byte)(POPCOUNT((char)uVar29) +
                                                     POPCOUNT((char)(uVar29 >> 8)) +
                                                    POPCOUNT((char)(uVar29 >> 0x10))) + 2];
                      while ((((uVar29 & 0x300000) != 0 &&
                              (puVar38 = (ulong *)puVar38[1], (ulong *)0x1 < puVar38)) &&
                             (uVar25 = (uint)*puVar38, (uVar25 >> 0x11 & 1) != 0))) {
                        uVar29 = CONCAT44(uVar25,uVar25) & 0x1ffff0001ffff;
                        uVar29 = puVar38[(ulong)(byte)(POPCOUNT((char)uVar29) +
                                                       POPCOUNT((char)(uVar29 >> 8)) +
                                                      POPCOUNT((char)(uVar29 >> 0x10))) + 2];
                      }
                    }
                    puVar24 = puVar30;
                    if (((ulong *)0x1 < puVar30) &&
                       (uVar25 = (uint)*puVar30, (uVar25 >> 0x11 & 1) != 0)) {
                      uVar29 = CONCAT44(uVar25,uVar25) & 0x1ffff0001ffff;
                      uVar29 = puVar30[(ulong)(byte)(POPCOUNT((char)uVar29) +
                                                     POPCOUNT((char)(uVar29 >> 8)) +
                                                    POPCOUNT((char)(uVar29 >> 0x10))) + 2];
                      while ((((uVar29 & 0x300000) != 0 &&
                              (puVar24 = (ulong *)puVar24[1], (ulong *)0x1 < puVar24)) &&
                             (uVar25 = (uint)*puVar24, (uVar25 >> 0x11 & 1) != 0))) {
                        uVar29 = CONCAT44(uVar25,uVar25) & 0x1ffff0001ffff;
                        uVar29 = puVar24[(ulong)(byte)(POPCOUNT((char)uVar29) +
                                                       POPCOUNT((char)(uVar29 >> 8)) +
                                                      POPCOUNT((char)(uVar29 >> 0x10))) + 2];
                      }
                    }
                    (**(code **)(**(long **)(param_1 + 0x2a0) + 0x10))
                              (*(long **)(param_1 + 0x2a0),pppppppdVar51,puVar38,puVar24);
                  }
                }
                *(uint *)pppppppdVar51 = 0;
                (**(code **)(**(long **)(param_1 + 0x2a0) + 0x18))
                          (*(long **)(param_1 + 0x2a0),pppppppdVar51,uVar16,puVar30);
                if ((local_2068 & 1) != 0) {
                  plVar19 = (long *)(local_2068 & 0xfffffffffffffffe);
                  plVar22 = plVar19 + 1;
                  do {
                    lVar64 = *plVar22;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar14) {
                      *(int *)plVar22 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar19 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar19 + 8))();
                  }
                }
                plVar22 = (long *)((ulong)plVar61 & 0xfffffffffffffffe);
                if (((ulong)plVar61 & 1) != 0) {
                  plVar61 = plVar22 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar22 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar22 + 8))(plVar22);
                  }
                }
                pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
                if (((ulong)plVar20 & 1) != 0) {
                  plVar61 = plVar62 + 1;
                  do {
                    lVar64 = *plVar61;
                    cVar11 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                    if (bVar14) {
                      *(int *)plVar61 = (int)lVar64 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((plVar62 != (long *)0x0) && ((int)lVar64 == 1)) {
                    (**(code **)(*plVar62 + 8))(plVar62);
                  }
                }
                uVar34 = uVar34 + 1;
                plVar20 = plVar62;
                plVar61 = plVar22;
              } while (uVar34 != uVar63);
            }
            break;
          case 0xc:
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x20);
            puVar38 = puVar30;
            if ((*puVar30 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            if ((puVar38[2] & 0x1f) != 7) {
              puVar30 = (ulong *)0x0;
            }
            puVar38 = puVar30;
            if ((*puVar30 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            if ((puVar30 != (ulong *)0x0) && ((puVar38[2] & 0x1f) == 7)) {
              do {
                uVar29 = *puVar30;
                if (((uint)uVar29 >> 2 & 1) != 0) {
                  uVar29 = puVar30[(uVar29 >> 1 & 1) + (uVar29 & 1) + 2];
                  if ((uVar29 & 1) != 0) {
                    piVar59 = (int *)((uVar29 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar11 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                      if (bVar14) {
                        *piVar59 = *piVar59 + 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                  }
                  goto LAB_033a0004;
                }
                puVar30 = (ulong *)puVar30[1];
              } while (puVar30 != (ulong *)0x0);
            }
            uVar29 = 0;
LAB_033a0004:
            puVar30 = *(ulong **)(lVar64 + lVar65 * 0x38 + 0x18);
            uVar53 = *puVar30;
            uVar34 = (uint)uVar53;
            puVar38 = puVar30;
            if ((uVar53 & 1) == 0) {
              do {
                puVar38 = (ulong *)puVar38[1];
              } while ((*puVar38 & 1) == 0);
            }
            uVar60 = 0;
            if ((puVar30 != (ulong *)0x0) && ((puVar38[2] & 0x1f) == 7)) {
              while ((uVar34 >> 2 & 1) == 0) {
                puVar30 = (ulong *)puVar30[1];
                if (puVar30 == (ulong *)0x0) {
                  uVar60 = 0;
                  goto LAB_033a0088;
                }
                uVar53 = *puVar30;
                uVar34 = (uint)uVar53;
              }
              uVar60 = puVar30[(uVar53 >> 1 & 1) + (uVar53 & 1) + 2];
            }
            if ((uVar60 & 1) != 0) {
              piVar59 = (int *)((uVar60 & 0xfffffffffffffffe) + 8);
              do {
                cVar11 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                if (bVar14) {
                  *piVar59 = *piVar59 + 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
            }
LAB_033a0088:
            if ((int)uVar27 < 1) {
              bVar14 = true;
            }
            else {
              uVar53 = FUN_0220e630(PTR_DAT_047e66b8,"Not implemented");
              bVar14 = false;
              if ((uVar53 & 1) != 0) {
                CallSupervisor(0x26);
              }
            }
            if ((uVar60 & 1) != 0) {
              plVar20 = (long *)(uVar60 & 0xfffffffffffffffe);
              plVar61 = plVar20 + 1;
              do {
                lVar64 = *plVar61;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar12) {
                  *(int *)plVar61 = (int)lVar64 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if ((plVar20 != (long *)0x0) && ((int)lVar64 == 1)) {
                (**(code **)(*plVar20 + 8))();
              }
            }
            if ((uVar29 & 1) != 0) {
              plVar20 = (long *)(uVar29 & 0xfffffffffffffffe);
              plVar61 = plVar20 + 1;
              do {
                lVar64 = *plVar61;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar12) {
                  *(int *)plVar61 = (int)lVar64 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if ((plVar20 != (long *)0x0) && ((int)lVar64 == 1)) {
                (**(code **)(*plVar20 + 8))();
              }
            }
joined_r0x033a0128:
            if (!bVar14) goto LAB_033a120c;
            break;
          case 0xd:
            uVar34 = *(uint *)(lVar64 + lVar65 * 0x38 + 0x18);
            uVar29 = (ulong)uVar34;
            if (uVar34 == param_5 && uVar34 == param_6) {
              pppppppdVar49 = pppppppdVar48;
LAB_0339e8e0:
              memcpy(pppppppdVar51,pppppppdVar49,(long)(int)(uVar18 * param_6));
            }
            else if ((0 < (int)uVar27) && (0 < (int)uVar34)) {
              uVar25 = 0;
              do {
                if (uVar29 - 1 < 7) {
                  uVar53 = 0;
                }
                else {
                  uVar53 = 0;
                  do {
                    puVar32 = (undefined1 *)((long)pppppppdVar48 + uVar53);
                    puVar41 = (undefined1 *)((long)pppppppdVar51 + uVar53);
                    uVar53 = uVar53 + 8;
                    *puVar41 = *puVar32;
                    puVar41[1] = puVar32[1];
                    puVar41[2] = puVar32[2];
                    puVar41[3] = puVar32[3];
                    puVar41[4] = puVar32[4];
                    puVar41[5] = puVar32[5];
                    puVar41[6] = puVar32[6];
                    puVar41[7] = puVar32[7];
                  } while ((uVar29 & 0xfffffff8) != uVar53);
                }
                if ((uVar34 & 7) != 0) {
                  uVar60 = uVar29 & 7;
                  do {
                    uVar60 = uVar60 - 1;
                    *(undefined1 *)((long)pppppppdVar51 + uVar53) =
                         *(undefined1 *)((long)pppppppdVar48 + uVar53);
                    uVar53 = uVar53 + 1;
                  } while (uVar60 != 0);
                }
                pppppppdVar51 = (double *******)((long)pppppppdVar51 + lVar42);
                uVar25 = uVar25 + 1;
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + lVar35);
              } while (uVar25 != uVar18);
            }
          }
switchD_033a0ab0_caseD_3:
          iVar54 = iVar54 + 1;
        } while (iVar26 != iVar54);
      }
      iVar17 = uVar18 + iVar17;
    } while (iVar17 < param_7);
  }
  if ((int)local_2c88 != 0) {
    plVar20 = local_2c90 + (long)(int)local_2c88 * 6;
    plVar61 = local_2c90;
    do {
      local_2080 = (double *******)0x0;
      (**(code **)(*(long *)(plVar61[5] & 0xfffffffffffffffeU) + 0x38))
                ((long *)(plVar61[5] & 0xfffffffffffffffeU),plVar61[3],plVar61[4],&local_2080);
      pppppppdVar3 = local_2080;
      for (pbVar33 = (byte *)plVar61[1]; (*pbVar33 & 1) == 0; pbVar33 = *(byte **)(pbVar33 + 8)) {
      }
      uVar18 = *(uint *)(pbVar33 + 0x10);
      if (((*(char *)(param_1 + 0x2a8) == '\0') || ((uVar18 >> 5 & 1) == 0)) ||
         (uVar27 = uVar18 >> 0x10, uVar27 == 0)) {
        iVar17 = 0;
        if (local_2080 != (double *******)0x0) {
LAB_033a0ef8:
          if ((uVar18 >> 7 & 1) == 0) {
            iVar17 = (**(code **)(**(long **)(param_1 + 0x288) + 0x30))();
            lVar35 = plVar61[3];
            lVar42 = plVar61[4];
            uVar36 = plVar61[5];
            if ((uVar36 & 1) != 0) {
              piVar59 = (int *)((uVar36 & 0xfffffffffffffffe) + 8);
              do {
                cVar11 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar59,0x10);
                if (bVar14) {
                  *piVar59 = *piVar59 + 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
            }
            iVar26 = *(int *)(param_1 + 0x298);
            lVar50 = (long)iVar26;
            if ((int)(*(uint *)(param_1 + 0x29c) & 0x7fffffff) <= iVar26) {
              FUN_033a65f4(lVar4,lVar50 + 1);
              iVar26 = *(int *)(param_1 + 0x298);
            }
            plVar62 = (long *)(*(long *)(param_1 + 0x290) + (long)iVar26 * 0x20);
            *plVar62 = lVar35;
            plVar62[1] = lVar42;
            plVar62[2] = uVar36;
            *(int *)(plVar62 + 3) = iVar17;
            *(int *)(param_1 + 0x298) = (int)(lVar50 + 1);
          }
          else {
            plVar62 = *(long **)(param_1 + 0x2b0);
            uVar18 = FUN_0334a968(plVar62,&local_2080);
            if (*(uint *)(plVar62 + 1) == uVar18) {
              uVar27 = uVar18;
              if ((int)(*(uint *)((long)plVar62 + 0xc) & 0x7fffffff) <= (int)uVar18) {
                FUN_0334108c(plVar62,PTR_PTR_047d1a50,(long)(int)(uVar18 + 1));
                uVar27 = *(uint *)(plVar62 + 1);
              }
              pppppppdVar3 = local_2080;
              lVar35 = *plVar62;
              puVar30 = (ulong *)(lVar35 + (long)(int)uVar27 * 0x10);
              *puVar30 = 0;
              if (local_2080 != (double *******)0x0) {
                sVar21 = strlen((char *)local_2080);
                sVar21 = (size_t)((int)sVar21 + 1);
                __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                           (PTR_PTR_047d1a50,sVar21);
                memcpy(__dest,pppppppdVar3,sVar21);
                *puVar30 = (ulong)__dest | 1;
              }
              *(undefined4 *)(lVar35 + (long)(int)uVar27 * 0x10 + 8) = 0;
              *(uint *)(plVar62 + 1) = uVar18 + 1;
            }
            piVar59 = (int *)(*plVar62 + ((long)((ulong)uVar18 << 0x20) >> 0x1c) + 8);
            iVar17 = *piVar59;
            if (iVar17 == 0) {
              iVar17 = (**(code **)(**(long **)(param_1 + 0x288) + 0x30))();
              *piVar59 = iVar17;
              lVar35 = plVar61[3];
              lVar42 = plVar61[4];
              uVar36 = plVar61[5];
              if ((uVar36 & 1) != 0) {
                piVar6 = (int *)((uVar36 & 0xfffffffffffffffe) + 8);
                do {
                  cVar11 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                  if (bVar14) {
                    *piVar6 = *piVar6 + 1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                iVar17 = *piVar59;
              }
              iVar26 = *(int *)(param_1 + 0x298);
              lVar50 = (long)iVar26;
              if ((int)(*(uint *)(param_1 + 0x29c) & 0x7fffffff) <= iVar26) {
                FUN_033a65f4(lVar4,lVar50 + 1);
                iVar26 = *(int *)(param_1 + 0x298);
              }
              plVar62 = (long *)(*(long *)(param_1 + 0x290) + (long)iVar26 * 0x20);
              *plVar62 = lVar35;
              plVar62[1] = lVar42;
              plVar62[2] = uVar36;
              *(int *)(plVar62 + 3) = iVar17;
              *(int *)(param_1 + 0x298) = (int)(lVar50 + 1);
              iVar17 = *piVar59;
            }
          }
          if (*(char *)(param_1 + 0x2a8) != '\0') {
            for (puVar23 = (undefined8 *)plVar61[1];
                (((undefined8 *)0x1 < puVar23 && (((uint)*puVar23 >> 0x11 & 1) != 0)) &&
                (uVar18 = (uint)*puVar23 & 0x1ffff,
                (puVar23[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                      POPCOUNT((char)(uVar18 >> 0x10))) + 2] & 0x300000) != 0));
                puVar23 = (undefined8 *)puVar23[1]) {
            }
            for (puVar23 = (undefined8 *)plVar61[4];
                (((undefined8 *)0x1 < puVar23 && (((uint)*puVar23 >> 0x11 & 1) != 0)) &&
                (uVar18 = (uint)*puVar23 & 0x1ffff,
                (puVar23[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                      POPCOUNT((char)(uVar18 >> 0x10))) + 2] & 0x300000) != 0));
                puVar23 = (undefined8 *)puVar23[1]) {
            }
            (**(code **)(**(long **)(param_1 + 0x2a0) + 0x10))(*(long **)(param_1 + 0x2a0),*plVar61)
            ;
          }
        }
        *(int *)*plVar61 = iVar17;
        (**(code **)(**(long **)(param_1 + 0x2a0) + 0x18))
                  (*(long **)(param_1 + 0x2a0),*plVar61,iVar17,plVar61[4]);
      }
      else {
        if (local_2080 == (double *******)0x0) {
          uVar63 = 1;
          *(undefined1 *)*plVar61 = 0;
        }
        else {
          sVar21 = strlen((char *)local_2080);
          uVar63 = (int)sVar21 + 1;
          if (uVar27 < uVar63) goto LAB_033a0ef8;
          memcpy((void *)*plVar61,pppppppdVar3,(long)(int)uVar63);
        }
        uVar63 = uVar27 - uVar63;
        if (uVar63 < 0xff) {
          *(char *)(*plVar61 + (ulong)(uVar27 - 1)) = (char)uVar63;
        }
        else {
          if (0xfffe < uVar63) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          *(char *)(*plVar61 + (ulong)(uVar27 - 3)) = (char)uVar63;
          *(char *)(*plVar61 + (ulong)(uVar27 - 2)) = (char)(uVar63 >> 8);
          *(undefined1 *)(*plVar61 + (ulong)(uVar27 - 1)) = 0xff;
        }
      }
      plVar61 = plVar61 + 6;
    } while (plVar61 != plVar20);
LAB_033a120c:
    plVar61 = local_2c90;
    if ((int)local_2c88 != 0) {
      plVar20 = local_2c90 + (long)(int)local_2c88 * 6;
      do {
        if ((plVar20[-1] & 1U) != 0) {
          plVar22 = (long *)(plVar20[-1] & 0xfffffffffffffffe);
          plVar62 = plVar22 + 1;
          do {
            lVar4 = *plVar62;
            cVar11 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar62,0x10);
            if (bVar14) {
              *(int *)plVar62 = (int)lVar4 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if ((plVar22 != (long *)0x0) && ((int)lVar4 == 1)) {
            (**(code **)(*plVar22 + 8))();
          }
        }
        puVar30 = (ulong *)(plVar20 + -4);
        plVar20 = plVar20 + -6;
        if ((*puVar30 & 1) != 0) {
          plVar22 = (long *)(*puVar30 & 0xfffffffffffffffe);
          plVar62 = plVar22 + 1;
          do {
            lVar4 = *plVar62;
            cVar11 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar62,0x10);
            if (bVar14) {
              *(int *)plVar62 = (int)lVar4 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if ((plVar22 != (long *)0x0) && ((int)lVar4 == 1)) {
            (**(code **)(*plVar22 + 8))();
          }
        }
      } while (plVar20 != plVar61);
    }
  }
  lVar4 = local_2c88;
  uVar36 = (ulong)local_2c88._4_4_;
  local_2c88 = (ulong)local_2c88._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_2c90 != (long *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_2c90,uVar36 * 0x30);
  }
  return;
code_r0x0339ef20:
  puVar31 = (ulong *)puVar31[1];
  if (puVar31 == (ulong *)0x0) goto LAB_0339ef28;
  goto LAB_0339ef18;
code_r0x0339ee74:
  puVar38 = (ulong *)puVar38[1];
  if (puVar38 == (ulong *)0x0) goto LAB_0339ee7c;
  goto LAB_0339ee6c;
}


