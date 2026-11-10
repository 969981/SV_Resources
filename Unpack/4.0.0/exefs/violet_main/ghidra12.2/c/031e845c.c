/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e845c; name: FUN_031e845c
 */


/* WARNING: Removing unreachable block (ram,0x031e8a54) */
/* WARNING: Removing unreachable block (ram,0x031e94b0) */

int FUN_031e845c(undefined8 param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  short *psVar19;
  ulong uVar20;
  ulong *puVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong *puVar24;
  byte *pbVar25;
  short *psVar26;
  ulong uVar27;
  undefined8 *puVar28;
  uint uVar29;
  byte *pbVar30;
  long *plVar31;
  ulong uVar32;
  int iVar33;
  long lVar34;
  long *plVar35;
  long *plVar36;
  char *local_e0;
  ulong *local_d8;
  ulong local_d0;
  char *local_c8;
  ulong *local_c0;
  ulong local_b8;
  char *local_b0;
  ulong *local_a8;
  undefined8 local_a0;
  ulong local_98;
  char *local_90;
  ulong *local_88;
  undefined8 local_80;
  ulong local_78;
  
  pbVar30 = (byte *)param_2[1];
  pbVar15 = pbVar30;
  if ((*pbVar30 & 1) == 0) {
    do {
      pbVar15 = *(byte **)(pbVar15 + 8);
    } while ((*pbVar15 & 1) == 0);
  }
  switch(*(uint *)(pbVar15 + 0x10) & 0x1f) {
  case 0:
  case 1:
    return 0;
  case 2:
    pbVar15 = (byte *)param_3[1];
    if (pbVar15 != (byte *)0x0) {
      pbVar16 = pbVar15;
      if ((*pbVar15 & 1) == 0) {
        do {
          pbVar16 = *(byte **)(pbVar16 + 8);
        } while ((*pbVar16 & 1) == 0);
      }
      if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) == 2) {
        lVar34 = *param_3;
        uVar32 = param_3[2];
        if ((uVar32 & 1) != 0) {
          piVar1 = (int *)((uVar32 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar32 = param_3[2];
          pbVar30 = (byte *)param_2[1];
        }
        goto LAB_031e8878;
      }
      pbVar15 = (byte *)0x0;
    }
    uVar32 = 0;
    lVar34 = 0;
LAB_031e8878:
    local_90 = (char *)((ulong)local_90 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffeU) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffeU),*param_2,pbVar30,&local_90);
    bVar5 = (byte)local_90;
    local_90 = (char *)((ulong)local_90 & 0xffffffffffffff00);
    plVar31 = (long *)(uVar32 & 0xfffffffffffffffe);
    (**(code **)(*plVar31 + 0x38))(plVar31,lVar34,pbVar15,&local_90);
    bVar6 = (byte)local_90;
    if ((uVar32 & 1) != 0) {
      plVar36 = plVar31 + 1;
      do {
        lVar34 = *plVar36;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar3) {
          *(int *)plVar36 = (int)lVar34 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar31 != (long *)0x0) && ((int)lVar34 == 1)) {
        (**(code **)(*plVar31 + 8))(plVar31);
      }
    }
    return (uint)bVar5 - (bVar6 & 1);
  case 3:
    pbVar15 = (byte *)param_3[1];
    if (pbVar15 == (byte *)0x0) {
LAB_031e8910:
      lVar34 = 0;
      uVar32 = 0;
    }
    else {
      pbVar16 = pbVar15;
      if ((*pbVar15 & 1) == 0) {
        do {
          pbVar16 = *(byte **)(pbVar16 + 8);
        } while ((*pbVar16 & 1) == 0);
      }
      if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) != 3) {
        pbVar15 = (byte *)0x0;
        goto LAB_031e8910;
      }
      lVar34 = *param_3;
      uVar32 = param_3[2];
      if ((uVar32 & 1) != 0) {
        piVar1 = (int *)((uVar32 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar32 = param_3[2];
        pbVar30 = (byte *)param_2[1];
      }
    }
    local_90 = (char *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffeU) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffeU),*param_2,pbVar30,&local_90);
    pcVar7 = local_90;
    local_90 = (char *)0x0;
    plVar31 = (long *)(uVar32 & 0xfffffffffffffffe);
    (**(code **)(*plVar31 + 0x38))(plVar31,lVar34,pbVar15,&local_90);
    if (pcVar7 == local_90) {
      iVar9 = 0;
    }
    else if (pcVar7 == (char *)0x0) {
      iVar9 = -1;
    }
    else if (local_90 == (char *)0x0) {
      iVar9 = 1;
    }
    else {
      iVar9 = strcmp(pcVar7,local_90);
    }
    if ((uVar32 & 1) == 0) {
      return iVar9;
    }
    plVar36 = plVar31 + 1;
    do {
      iVar14 = (int)*plVar36;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar3) {
        *(int *)plVar36 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 4:
    pbVar15 = (byte *)param_3[1];
    if (pbVar15 == (byte *)0x0) {
LAB_031e87c0:
      uVar32 = 0;
      lVar34 = 0;
    }
    else {
      pbVar16 = pbVar15;
      if ((*pbVar15 & 1) == 0) {
        do {
          pbVar16 = *(byte **)(pbVar16 + 8);
        } while ((*pbVar16 & 1) == 0);
      }
      if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) != 4) {
        pbVar15 = (byte *)0x0;
        goto LAB_031e87c0;
      }
      lVar34 = *param_3;
      uVar32 = param_3[2];
      if ((uVar32 & 1) != 0) {
        piVar1 = (int *)((uVar32 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar32 = param_3[2];
        pbVar30 = (byte *)param_2[1];
      }
    }
    local_90 = (char *)0x0;
    local_88 = (ulong *)((ulong)local_88 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffeU) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffeU),*param_2,pbVar30,&local_90);
    pcVar7 = local_90;
    local_90 = (char *)0x0;
    plVar31 = (long *)(uVar32 & 0xfffffffffffffffe);
    bVar5 = (byte)local_88;
    local_88 = (ulong *)((ulong)local_88 & 0xffffffffffffff00);
    (**(code **)(*plVar31 + 0x38))(plVar31,lVar34,pbVar15,&local_90);
    iVar9 = (uint)bVar5 - ((uint)local_88 & 1);
    if (iVar9 == 0) {
      iVar9 = ((uint)(local_90 < pcVar7) - (uint)(pcVar7 < local_90)) * ((uint)bVar5 * -2 + 1);
    }
    if ((uVar32 & 1) == 0) {
      return iVar9;
    }
    plVar36 = plVar31 + 1;
    do {
      iVar14 = (int)*plVar36;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar3) {
        *(int *)plVar36 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 5:
    pbVar15 = (byte *)param_3[1];
    if (pbVar15 != (byte *)0x0) {
      pbVar16 = pbVar15;
      if ((*pbVar15 & 1) == 0) {
        do {
          pbVar16 = *(byte **)(pbVar16 + 8);
        } while ((*pbVar16 & 1) == 0);
      }
      if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) == 5) {
        lVar34 = *param_3;
        uVar32 = param_3[2];
        if ((uVar32 & 1) != 0) {
          piVar1 = (int *)((uVar32 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar32 = param_3[2];
          pbVar30 = (byte *)param_2[1];
        }
        goto LAB_031e8fa4;
      }
      pbVar15 = (byte *)0x0;
    }
    uVar32 = 0;
    lVar34 = 0;
LAB_031e8fa4:
    local_90 = (char *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffeU) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffeU),*param_2,pbVar30,&local_90);
    pcVar7 = local_90;
    local_90 = (char *)0x0;
    plVar31 = (long *)(uVar32 & 0xfffffffffffffffe);
    (**(code **)(*plVar31 + 0x38))(plVar31,lVar34,pbVar15,&local_90);
    pcVar8 = local_90;
    if ((uVar32 & 1) != 0) {
      plVar36 = plVar31 + 1;
      do {
        lVar34 = *plVar36;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar3) {
          *(int *)plVar36 = (int)lVar34 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar31 != (long *)0x0) && ((int)lVar34 == 1)) {
        (**(code **)(*plVar31 + 8))(plVar31);
      }
    }
    return (uint)((double)pcVar8 < (double)pcVar7) - (uint)((double)pcVar7 < (double)pcVar8);
  case 6:
    pbVar15 = (byte *)param_3[1];
    if (pbVar15 != (byte *)0x0) {
      pbVar16 = pbVar15;
      if ((*pbVar15 & 1) == 0) {
        do {
          pbVar16 = *(byte **)(pbVar16 + 8);
        } while ((*pbVar16 & 1) == 0);
      }
      if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) == 6) {
        lVar34 = *param_3;
        uVar32 = param_3[2];
        if ((uVar32 & 1) != 0) {
          piVar1 = (int *)((uVar32 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar32 = param_3[2];
          pbVar30 = (byte *)param_2[1];
        }
        goto LAB_031e904c;
      }
      pbVar15 = (byte *)0x0;
    }
    lVar34 = 0;
    uVar32 = 0;
LAB_031e904c:
    lVar12 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffeU) + 0x60))
                       ((long *)(param_2[2] & 0xfffffffffffffffeU),*param_2,pbVar30);
    plVar31 = (long *)(uVar32 & 0xfffffffffffffffe);
    lVar34 = (**(code **)(*plVar31 + 0x60))(plVar31,lVar34,pbVar15);
    if ((uVar32 & 1) != 0) {
      plVar36 = plVar31 + 1;
      do {
        lVar4 = *plVar36;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar3) {
          *(int *)plVar36 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar31 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar31 + 8))(plVar31);
      }
    }
    iVar9 = (int)(lVar12 - lVar34 >> 0x3f);
    if (0 < lVar12 - lVar34) {
      iVar9 = iVar9 + 1;
    }
    return iVar9;
  case 7:
    pbVar15 = (byte *)param_3[1];
    if (pbVar15 == (byte *)0x0) {
      uVar32 = 0;
    }
    else {
      pbVar16 = pbVar15;
      if ((*pbVar15 & 1) == 0) {
        do {
          pbVar16 = *(byte **)(pbVar16 + 8);
        } while ((*pbVar16 & 1) == 0);
      }
      if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) == 7) {
        uVar32 = param_3[2];
        if ((uVar32 & 1) != 0) {
          piVar1 = (int *)((uVar32 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar32 = param_3[2];
          pbVar30 = (byte *)param_2[1];
        }
      }
      else {
        uVar32 = 0;
        pbVar15 = (byte *)0x0;
      }
    }
    plVar35 = (long *)0x0;
    plVar31 = (long *)0x0;
    plVar13 = (long *)0x0;
    pbVar16 = (byte *)0x0;
    plVar36 = (long *)0x0;
    pbVar25 = (byte *)0x0;
    do {
      do {
        do {
          plVar11 = plVar36 + 1;
          if (plVar35 <= plVar11) {
            if (pbVar30 == pbVar16) {
              pbVar16 = pbVar30;
            }
            else {
              psVar19 = (short *)0x0;
              pbVar17 = (byte *)0x0;
              pbVar22 = pbVar30;
              do {
                uVar18 = (uint)*(undefined8 *)pbVar22;
                if ((uVar18 >> 0x17 & 1) != 0) {
                  uVar23 = CONCAT44(uVar18,uVar18) & 0x7fffff007fffff;
                  psVar26 = *(short **)
                             (pbVar22 +
                             (ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8)) +
                                          POPCOUNT((char)(uVar23 >> 0x10))) * 8 + 0x10);
                  if (psVar26 != (short *)0x0) {
                    if ((int)psVar26[1] + (int)*psVar26 != 0) {
                      psVar19 = psVar26;
                      pbVar17 = pbVar22;
                    }
                  }
                }
                pbVar22 = *(byte **)(pbVar22 + 8);
              } while (pbVar22 != pbVar16);
              if (pbVar17 != (byte *)0x0) {
                plVar11 = (long *)(psVar19 + 4);
                plVar35 = plVar11 + (long)psVar19[1] + (long)*psVar19;
                goto LAB_031e8a40;
              }
            }
LAB_031e9360:
            iVar9 = -1;
            goto LAB_031e9364;
          }
          pbVar17 = pbVar16;
LAB_031e8a40:
          uVar18 = (uint)*(undefined8 *)*plVar11;
          pbVar16 = pbVar17;
          plVar36 = plVar11;
        } while ((uVar18 >> 0x11 & 1) == 0);
        uVar23 = CONCAT44(uVar18,uVar18) & 0x1ffff0001ffff;
        plVar10 = plVar31;
      } while ((*(ushort *)
                 (*plVar11 +
                 (ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8)) +
                              POPCOUNT((char)(uVar23 >> 0x10))) * 8 + 0x12) >> 5 & 1) == 0);
      do {
        plVar31 = plVar10 + 1;
        if (plVar31 < plVar13) {
          pbVar17 = pbVar25;
        }
        else {
          plVar31 = plVar10;
          if (pbVar15 == pbVar25) {
            pbVar25 = pbVar15;
            goto LAB_031e9360;
          }
          psVar19 = (short *)0x0;
          pbVar17 = (byte *)0x0;
          pbVar22 = pbVar15;
          do {
            uVar18 = (uint)*(undefined8 *)pbVar22;
            if ((uVar18 >> 0x17 & 1) != 0) {
              uVar23 = CONCAT44(uVar18,uVar18) & 0x7fffff007fffff;
              psVar26 = *(short **)
                         (pbVar22 +
                         (ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8)) +
                                      POPCOUNT((char)(uVar23 >> 0x10))) * 8 + 0x10);
              if (psVar26 != (short *)0x0) {
                if ((int)psVar26[1] + (int)*psVar26 != 0) {
                  psVar19 = psVar26;
                  pbVar17 = pbVar22;
                }
              }
            }
            pbVar22 = *(byte **)(pbVar22 + 8);
          } while (pbVar22 != pbVar25);
          if (pbVar17 == (byte *)0x0) goto LAB_031e9360;
          plVar31 = (long *)(psVar19 + 4);
          plVar13 = plVar31 + (long)psVar19[1] + (long)*psVar19;
        }
        uVar18 = (uint)*(undefined8 *)*plVar31;
        plVar10 = plVar31;
        pbVar25 = pbVar17;
      } while (((uVar18 >> 0x11 & 1) == 0) ||
              (uVar23 = CONCAT44(uVar18,uVar18) & 0x1ffff0001ffff,
              (*(ushort *)
                (*plVar31 +
                (ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8)) +
                             POPCOUNT((char)(uVar23 >> 0x10))) * 8 + 0x12) >> 5 & 1) == 0));
      lVar34 = *param_2;
      if ((lVar34 == 0) || (puVar24 = (ulong *)*plVar11, puVar24 < (ulong *)0x2)) {
LAB_031e8c14:
        local_88 = (ulong *)0x0;
        local_80 = 0;
        local_90 = (char *)0x0;
      }
      else {
        uVar23 = *puVar24;
        uVar18 = (uint)uVar23;
        if ((uVar18 >> 0x11 & 1) == 0) goto LAB_031e8c14;
        uVar20 = CONCAT44(uVar18,uVar18) & 0x1ffff0001ffff;
        uVar20 = (ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)) +
                              POPCOUNT((char)(uVar20 >> 0x10)));
        if ((puVar24[uVar20 + 2] & 0x300000) == 0) goto LAB_031e8c14;
        if (((param_2[2] & 1U) == 0) &&
           (((puVar28 = (undefined8 *)param_2[1], puVar28 < (undefined8 *)0x2 ||
             (uVar29 = (uint)*puVar28, (uVar29 >> 0x11 & 1) == 0)) ||
            (uVar27 = CONCAT44(uVar29,uVar29) & 0x1ffff0001ffff,
            (puVar28[(ulong)(byte)(POPCOUNT((char)uVar27) + POPCOUNT((char)(uVar27 >> 8)) +
                                  POPCOUNT((char)(uVar27 >> 0x10))) + 2] & 0x300000) == 0 ||
            (puVar28[(ulong)(byte)(POPCOUNT((char)uVar27) + POPCOUNT((char)(uVar27 >> 8)) +
                                  POPCOUNT((char)(uVar27 >> 0x10))) + 2] & 0x500000) == 0)))) {
          puVar21 = puVar24;
          if ((uVar18 >> 2 & 1) == 0) {
            do {
              puVar21 = (ulong *)puVar21[1];
              if (puVar21 == (ulong *)0x0) {
                uVar23 = 0;
                goto LAB_031e8f10;
              }
              uVar23 = *puVar21;
            } while (((uint)uVar23 >> 2 & 1) == 0);
          }
          uVar23 = puVar21[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
LAB_031e8f10:
          uVar27 = 0;
LAB_031e8f14:
          uVar20 = (ulong)(ushort)puVar24[uVar20 + 2];
        }
        else {
          plVar11 = (long *)(param_2[2] & 0xfffffffffffffffe);
          uVar23 = (**(code **)(*plVar11 + 0x20))(plVar11,param_2,puVar24);
          lVar34 = *param_2;
          uVar18 = (uint)*puVar24;
          if ((uVar18 >> 0x11 & 1) != 0) {
            uVar20 = CONCAT44(uVar18,uVar18) & 0x1ffff0001ffff;
            uVar20 = (ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)) +
                                  POPCOUNT((char)(uVar20 >> 0x10)));
            uVar27 = 1;
            goto LAB_031e8f14;
          }
          uVar20 = 0;
          uVar27 = 1;
        }
        local_90 = (char *)(uVar20 + lVar34);
        local_80 = uVar27 | uVar23;
        local_88 = puVar24;
        if (uVar27 != 0 || (uVar23 & 1) != 0) {
          piVar1 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      lVar34 = *param_3;
      if ((lVar34 == 0) || (puVar24 = (ulong *)*plVar31, puVar24 < (ulong *)0x2)) {
LAB_031e8ce8:
        local_b0 = (char *)0x0;
        local_a8 = (ulong *)0x0;
        local_a0 = 0;
      }
      else {
        uVar23 = *puVar24;
        uVar18 = (uint)uVar23;
        if ((uVar18 >> 0x11 & 1) == 0) goto LAB_031e8ce8;
        uVar20 = CONCAT44(uVar18,uVar18) & 0x1ffff0001ffff;
        uVar20 = (ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)) +
                              POPCOUNT((char)(uVar20 >> 0x10)));
        if ((puVar24[uVar20 + 2] & 0x300000) == 0) goto LAB_031e8ce8;
        if (((param_3[2] & 1U) == 0) &&
           (((puVar28 = (undefined8 *)param_3[1], puVar28 < (undefined8 *)0x2 ||
             (uVar29 = (uint)*puVar28, (uVar29 >> 0x11 & 1) == 0)) ||
            (uVar27 = CONCAT44(uVar29,uVar29) & 0x1ffff0001ffff,
            (puVar28[(ulong)(byte)(POPCOUNT((char)uVar27) + POPCOUNT((char)(uVar27 >> 8)) +
                                  POPCOUNT((char)(uVar27 >> 0x10))) + 2] & 0x300000) == 0 ||
            (puVar28[(ulong)(byte)(POPCOUNT((char)uVar27) + POPCOUNT((char)(uVar27 >> 8)) +
                                  POPCOUNT((char)(uVar27 >> 0x10))) + 2] & 0x500000) == 0)))) {
          puVar21 = puVar24;
          if ((uVar18 >> 2 & 1) == 0) {
            do {
              puVar21 = (ulong *)puVar21[1];
              if (puVar21 == (ulong *)0x0) {
                uVar23 = 0;
                goto LAB_031e8f50;
              }
              uVar23 = *puVar21;
            } while (((uint)uVar23 >> 2 & 1) == 0);
          }
          uVar23 = puVar21[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
LAB_031e8f50:
          uVar27 = 0;
LAB_031e8f54:
          uVar20 = (ulong)(ushort)puVar24[uVar20 + 2];
        }
        else {
          plVar11 = (long *)(param_3[2] & 0xfffffffffffffffe);
          uVar23 = (**(code **)(*plVar11 + 0x20))(plVar11,param_3,puVar24);
          lVar34 = *param_3;
          uVar18 = (uint)*puVar24;
          if ((uVar18 >> 0x11 & 1) != 0) {
            uVar20 = CONCAT44(uVar18,uVar18) & 0x1ffff0001ffff;
            uVar27 = 1;
            uVar20 = (ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)) +
                                  POPCOUNT((char)(uVar20 >> 0x10)));
            goto LAB_031e8f54;
          }
          uVar20 = 0;
          uVar27 = 1;
        }
        local_b0 = (char *)(uVar20 + lVar34);
        local_a0 = uVar27 | uVar23;
        local_a8 = puVar24;
        if (uVar27 != 0 || (uVar23 & 1) != 0) {
          piVar1 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      puVar24 = local_88;
      if ((*local_88 & 1) == 0) {
        do {
          puVar24 = (ulong *)puVar24[1];
        } while ((*puVar24 & 1) == 0);
      }
      puVar21 = local_a8;
      if ((*local_a8 & 1) == 0) {
        do {
          puVar21 = (ulong *)puVar21[1];
        } while ((*puVar21 & 1) == 0);
      }
      iVar9 = ((uint)puVar24[2] & 0x1f) - ((uint)puVar21[2] & 0x1f);
      if (iVar9 == 0) {
        if ((local_88 == local_a8) && (local_90 == local_b0)) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_031e845c(param_1,&local_90,&local_b0);
        }
      }
      if ((local_a0 & 1) != 0) {
        plVar10 = (long *)(local_a0 & 0xfffffffffffffffe);
        plVar11 = plVar10 + 1;
        do {
          lVar34 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = (int)lVar34 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar34 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_80 & 1) != 0) {
        plVar10 = (long *)(local_80 & 0xfffffffffffffffe);
        plVar11 = plVar10 + 1;
        do {
          lVar34 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = (int)lVar34 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar34 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    } while (iVar9 == 0);
    goto LAB_031e94f8;
  case 8:
    pbVar15 = (byte *)param_3[1];
    if (pbVar15 == (byte *)0x0) {
LAB_031e90d8:
      uVar32 = 0;
      lVar34 = 0;
    }
    else {
      pbVar16 = pbVar15;
      if ((*pbVar15 & 1) == 0) {
        do {
          pbVar16 = *(byte **)(pbVar16 + 8);
        } while ((*pbVar16 & 1) == 0);
      }
      if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) != 8) {
        pbVar15 = (byte *)0x0;
        goto LAB_031e90d8;
      }
      lVar34 = *param_3;
      uVar32 = param_3[2];
      if ((uVar32 & 1) != 0) {
        piVar1 = (int *)((uVar32 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar32 = param_3[2];
        pbVar30 = (byte *)param_2[1];
      }
    }
    local_80 = 0;
    local_78 = 0;
    local_90 = (char *)0x0;
    local_88 = (ulong *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffeU) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffeU),*param_2,pbVar30,&local_90);
    local_a0 = 0;
    local_98 = 0;
    plVar31 = (long *)(uVar32 & 0xfffffffffffffffe);
    local_b0 = (char *)0x0;
    local_a8 = (ulong *)0x0;
    (**(code **)(*plVar31 + 0x50))(plVar31,lVar34,pbVar15,&local_b0);
    iVar14 = (int)local_80;
    iVar9 = (int)local_80 - (int)local_a0;
    if (iVar9 == 0) {
      if ((int)local_80 != 0) {
        puVar24 = local_88;
        if ((*local_88 & 1) == 0) {
          do {
            puVar24 = (ulong *)puVar24[1];
          } while ((*puVar24 & 1) == 0);
        }
        for (puVar21 = local_a8; (*puVar21 & 1) == 0; puVar21 = (ulong *)puVar21[1]) {
        }
        iVar9 = ((uint)puVar24[2] & 0x1f) - ((uint)puVar21[2] & 0x1f);
        if (iVar9 != 0) goto LAB_031e92c8;
        if (0 < (int)local_80) {
          iVar33 = 0;
          do {
            local_c8 = local_90 + (long)local_80._4_4_ * (long)iVar33;
            local_b8 = local_78;
            if ((local_78 & 1) != 0) {
              piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            local_e0 = local_b0 + (long)local_a0._4_4_ * (long)iVar33;
            local_d0 = local_98;
            local_d8 = local_a8;
            if ((local_98 & 1) != 0) {
              piVar1 = (int *)((local_98 & 0xfffffffffffffffe) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            local_c0 = local_88;
            if ((local_c8 == local_e0) && (local_88 == local_a8)) {
              iVar9 = 0;
            }
            else {
              iVar9 = FUN_031e845c(param_1,&local_c8,&local_e0);
            }
            if ((local_d0 & 1) != 0) {
              plVar13 = (long *)(local_d0 & 0xfffffffffffffffe);
              plVar36 = plVar13 + 1;
              do {
                lVar34 = *plVar36;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                if (bVar3) {
                  *(int *)plVar36 = (int)lVar34 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((plVar13 != (long *)0x0) && ((int)lVar34 == 1)) {
                (**(code **)(*plVar13 + 8))();
              }
            }
            if ((local_b8 & 1) != 0) {
              plVar13 = (long *)(local_b8 & 0xfffffffffffffffe);
              plVar36 = plVar13 + 1;
              do {
                lVar34 = *plVar36;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                if (bVar3) {
                  *(int *)plVar36 = (int)lVar34 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((plVar13 != (long *)0x0) && ((int)lVar34 == 1)) {
                (**(code **)(*plVar13 + 8))();
              }
            }
            if (iVar9 != 0) goto LAB_031e92c8;
            iVar33 = iVar33 + 1;
          } while (iVar33 != iVar14);
        }
      }
      iVar9 = 0;
    }
LAB_031e92c8:
    if ((local_98 & 1) != 0) {
      plVar13 = (long *)(local_98 & 0xfffffffffffffffe);
      plVar36 = plVar13 + 1;
      do {
        lVar34 = *plVar36;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar3) {
          *(int *)plVar36 = (int)lVar34 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar13 != (long *)0x0) && ((int)lVar34 == 1)) {
        (**(code **)(*plVar13 + 8))();
      }
    }
    if ((local_78 & 1) != 0) {
      plVar13 = (long *)(local_78 & 0xfffffffffffffffe);
      plVar36 = plVar13 + 1;
      do {
        lVar34 = *plVar36;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar3) {
          *(int *)plVar36 = (int)lVar34 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar13 != (long *)0x0) && ((int)lVar34 == 1)) {
        (**(code **)(*plVar13 + 8))();
      }
    }
    if ((uVar32 & 1) == 0) {
      return iVar9;
    }
    plVar36 = plVar31 + 1;
    do {
      iVar14 = (int)*plVar36;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar3) {
        *(int *)plVar36 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch");
  }
  if (plVar31 == (long *)0x0) {
    return iVar9;
  }
  if (iVar14 != 1) {
    return iVar9;
  }
  lVar34 = *plVar31;
  goto LAB_031e9558;
  while( true ) {
    uVar18 = (uint)*(undefined8 *)*plVar31;
    if ((uVar18 >> 0x11 & 1) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar18 & 0x1ffff;
      uVar18 = (uint)*(ushort *)
                      (*plVar31 +
                      (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                   POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12);
    }
    pbVar25 = pbVar17;
    if ((uVar18 >> 5 & 1) != 0) break;
LAB_031e9364:
    plVar31 = plVar31 + 1;
    pbVar17 = pbVar25;
    if (plVar13 <= plVar31) {
      if (pbVar15 == pbVar25) goto LAB_031e94d8;
      psVar19 = (short *)0x0;
      pbVar17 = (byte *)0x0;
      pbVar22 = pbVar15;
      do {
        if (((uint)*(undefined8 *)pbVar22 >> 0x17 & 1) != 0) {
          uVar18 = (uint)*(undefined8 *)pbVar22 & 0x7fffff;
          psVar26 = *(short **)
                     (pbVar22 +
                     (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                  POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x10);
          if (psVar26 != (short *)0x0) {
            if ((int)psVar26[1] + (int)*psVar26 != 0) {
              psVar19 = psVar26;
              pbVar17 = pbVar22;
            }
          }
        }
        pbVar22 = *(byte **)(pbVar22 + 8);
      } while (pbVar22 != pbVar25);
      if (pbVar17 == (byte *)0x0) goto LAB_031e94d8;
      plVar31 = (long *)(psVar19 + 4);
      plVar13 = plVar31 + (long)psVar19[1] + (long)*psVar19;
    }
  }
  goto LAB_031e94f8;
LAB_031e94d8:
  do {
    plVar36 = plVar36 + 1;
    pbVar15 = pbVar16;
    if (plVar35 <= plVar36) {
      if (pbVar30 != pbVar16) {
        psVar19 = (short *)0x0;
        pbVar15 = (byte *)0x0;
        pbVar25 = pbVar30;
        do {
          if (((uint)*(undefined8 *)pbVar25 >> 0x17 & 1) != 0) {
            uVar18 = (uint)*(undefined8 *)pbVar25 & 0x7fffff;
            psVar26 = *(short **)
                       (pbVar25 +
                       (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                    POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x10);
            if (psVar26 != (short *)0x0) {
              if ((int)psVar26[1] + (int)*psVar26 != 0) {
                psVar19 = psVar26;
                pbVar15 = pbVar25;
              }
            }
          }
          pbVar25 = *(byte **)(pbVar25 + 8);
        } while (pbVar25 != pbVar16);
        if (pbVar15 != (byte *)0x0) {
          plVar36 = (long *)(psVar19 + 4);
          plVar35 = plVar36 + (long)psVar19[1] + (long)*psVar19;
          goto LAB_031e949c;
        }
      }
      iVar9 = 0;
      goto LAB_031e94f8;
    }
LAB_031e949c:
    uVar18 = (uint)*(undefined8 *)*plVar36;
    pbVar16 = pbVar15;
  } while (((uVar18 >> 0x11 & 1) == 0) ||
          (uVar18 = uVar18 & 0x1ffff,
          (*(ushort *)
            (*plVar36 +
            (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                         POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12) >> 5 & 1) == 0));
  iVar9 = 1;
LAB_031e94f8:
  if ((uVar32 & 1) != 0) {
    plVar31 = (long *)(uVar32 & 0xfffffffffffffffe);
    plVar36 = plVar31 + 1;
    do {
      lVar34 = *plVar36;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar3) {
        *(int *)plVar36 = (int)lVar34 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar31 != (long *)0x0) && ((int)lVar34 == 1)) {
      lVar34 = *plVar31;
LAB_031e9558:
      (**(code **)(lVar34 + 8))(plVar31);
    }
  }
  return iVar9;
}


