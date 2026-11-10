/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033691e0; name: FUN_033691e0
 */


void FUN_033691e0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int iVar20;
  long local_80;
  ulong *puStack_78;
  ulong local_70;
  int local_68;
  
  puVar7 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x16) != 0) {
    puVar18 = (undefined4 *)param_1[0x15];
    puVar19 = puVar18 + (long)*(int *)(param_1 + 0x16) * 3;
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    do {
      if (*(char *)(puVar18 + 2) == '\0') {
        (**(code **)(*(long *)*param_1 + 0x10))(&local_80,(long *)*param_1,*puVar18);
        lVar3 = local_80;
        if ((local_70 & 1) != 0) {
          plVar8 = (long *)(local_70 & 0xfffffffffffffffe);
          plVar15 = plVar8 + 1;
          do {
            lVar13 = *plVar15;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *(int *)plVar15 = (int)lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar8 != (long *)0x0) && ((int)lVar13 == 1)) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        if (lVar3 != 0) {
          (**(code **)(*(long *)*param_1 + 0x10))(&local_80,(long *)*param_1,*puVar18);
          lVar3 = local_80 + (int)puVar18[1];
          iVar20 = (int)param_2[1];
          lVar13 = (long)iVar20;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar20) {
            FUN_0324e2d4(param_2,puVar1,lVar13 + 1);
            iVar20 = (int)param_2[1];
          }
          lVar9 = *param_2;
          plVar15 = (long *)(lVar9 + (long)iVar20 * 0x18);
          puVar12 = (ulong *)param_1[10];
          *plVar15 = lVar3;
          plVar15[1] = (long)puVar12;
          uVar17 = 0;
          if (puVar12 != (ulong *)0x0) {
            do {
              uVar17 = *puVar12;
              if (((uint)uVar17 >> 2 & 1) != 0) {
                uVar17 = puVar12[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
                goto LAB_033695d8;
              }
              puVar12 = (ulong *)puVar12[1];
            } while (puVar12 != (ulong *)0x0);
            uVar17 = 0;
          }
LAB_033695d8:
          *(ulong *)(lVar9 + (long)iVar20 * 0x18 + 0x10) = uVar17;
          if ((uVar17 & 1) != 0) {
            piVar2 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          *(int *)(param_2 + 1) = (int)(lVar13 + 1);
          if ((local_70 & 1) != 0) {
            plVar8 = (long *)(local_70 & 0xfffffffffffffffe);
            plVar15 = plVar8 + 1;
            do {
              iVar20 = (int)*plVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *(int *)plVar15 = iVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_03369620;
          }
        }
      }
      else {
        (**(code **)(*(long *)*param_1 + 0x18))(&local_80,(long *)*param_1,*puVar18);
        iVar20 = -local_68;
        if (-1 < local_68) {
          iVar20 = local_68;
        }
        if (0 < iVar20) {
          iVar20 = 0;
          do {
            puVar12 = puStack_78;
            do {
              uVar14 = (uint)*puVar12;
              if ((uVar14 >> 0x14 & 1) != 0) {
                uVar10 = 0;
                if (puVar12 != (ulong *)0x0) {
                  uVar17 = CONCAT44(uVar14,uVar14) & 0xfffff000fffff;
                  uVar10 = (uint)(ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                               POPCOUNT((char)(uVar17 >> 8)) +
                                                              POPCOUNT((char)(uVar17 >> 0x10))) + 2]
                  ;
                }
                goto LAB_033692b4;
              }
              if ((*puVar12 & 1) != 0) {
                uVar10 = 0;
                goto LAB_033692b4;
              }
              puVar12 = (ulong *)puVar12[1];
            } while (puVar12 != (ulong *)0x0);
            uVar10 = 0;
LAB_033692b4:
            if (puStack_78 == (ulong *)0x0) {
              uVar17 = 0;
            }
            else {
              puVar12 = puStack_78;
              do {
                uVar17 = *puVar12;
                if (((uint)uVar17 >> 2 & 1) != 0) {
                  uVar17 = puVar12[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
                  goto LAB_033692f0;
                }
                puVar12 = (ulong *)puVar12[1];
              } while (puVar12 != (ulong *)0x0);
              uVar17 = 0;
            }
LAB_033692f0:
            lVar3 = local_80 + (ulong)(uVar10 * iVar20);
            if ((uVar17 & 1) != 0) {
              plVar8 = (long *)(uVar17 & 0xfffffffffffffffe);
              plVar15 = plVar8 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *(int *)plVar15 = (int)*plVar15 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              do {
                lVar13 = *plVar15;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *(int *)plVar15 = (int)lVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((plVar8 != (long *)0x0) && ((int)lVar13 == 1)) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            if (lVar3 != 0) {
              puVar12 = puStack_78;
              do {
                uVar14 = (uint)*puVar12;
                if ((uVar14 >> 0x14 & 1) != 0) {
                  uVar10 = 0;
                  if (puVar12 != (ulong *)0x0) {
                    uVar17 = CONCAT44(uVar14,uVar14) & 0xfffff000fffff;
                    uVar10 = (uint)(ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                                 POPCOUNT((char)(uVar17 >> 8)) +
                                                                POPCOUNT((char)(uVar17 >> 0x10))) +
                                                   2];
                  }
                  goto LAB_03369390;
                }
                if ((*puVar12 & 1) != 0) {
                  uVar10 = 0;
                  goto LAB_03369390;
                }
                puVar12 = (ulong *)puVar12[1];
              } while (puVar12 != (ulong *)0x0);
              uVar10 = 0;
LAB_03369390:
              for (puVar12 = puStack_78; puVar12 != (ulong *)0x0; puVar12 = (ulong *)puVar12[1]) {
                uVar17 = *puVar12;
                if (((uint)uVar17 >> 2 & 1) != 0) {
                  uVar17 = puVar12[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
                  goto LAB_033693c4;
                }
              }
              uVar17 = 0;
LAB_033693c4:
              lVar3 = local_80 + (ulong)(uVar10 * iVar20);
              if ((uVar17 & 1) != 0) {
                piVar2 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              iVar4 = puVar18[1];
              iVar11 = (int)param_2[1];
              lVar13 = (long)iVar11;
              if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar11) {
                FUN_0324e2d4(param_2,puVar7 + 0x20,lVar13 + 1);
                iVar11 = (int)param_2[1];
              }
              lVar9 = *param_2;
              plVar15 = (long *)(lVar9 + (long)iVar11 * 0x18);
              puVar12 = (ulong *)param_1[10];
              *plVar15 = lVar3 + iVar4;
              plVar15[1] = (long)puVar12;
              uVar16 = 0;
              if (puVar12 != (ulong *)0x0) {
                do {
                  uVar16 = *puVar12;
                  if (((uint)uVar16 >> 2 & 1) != 0) {
                    uVar16 = puVar12[(uVar16 >> 1 & 1) + (uVar16 & 1) + 2];
                    goto LAB_03369458;
                  }
                  puVar12 = (ulong *)puVar12[1];
                } while (puVar12 != (ulong *)0x0);
                uVar16 = 0;
              }
LAB_03369458:
              *(ulong *)(lVar9 + (long)iVar11 * 0x18 + 0x10) = uVar16;
              if ((uVar16 & 1) != 0) {
                piVar2 = (int *)((uVar16 & 0xfffffffffffffffe) + 8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              *(int *)(param_2 + 1) = (int)(lVar13 + 1);
              if ((uVar17 & 1) != 0) {
                plVar8 = (long *)(uVar17 & 0xfffffffffffffffe);
                plVar15 = plVar8 + 1;
                do {
                  lVar3 = *plVar15;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar6) {
                    *(int *)plVar15 = (int)lVar3 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((plVar8 != (long *)0x0) && ((int)lVar3 == 1)) {
                  (**(code **)(*plVar8 + 8))();
                }
              }
            }
            iVar20 = iVar20 + 1;
            iVar11 = -local_68;
            if (-1 < local_68) {
              iVar11 = local_68;
            }
          } while (iVar20 < iVar11);
        }
        if ((local_70 & 1) != 0) {
          plVar8 = (long *)(local_70 & 0xfffffffffffffffe);
          plVar15 = plVar8 + 1;
          do {
            iVar20 = (int)*plVar15;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *(int *)plVar15 = iVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_03369620:
          if ((plVar8 != (long *)0x0) && (iVar20 == 1)) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      puVar18 = puVar18 + 3;
    } while (puVar18 != puVar19);
  }
  return;
}


