/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0320a3e8; name: FUN_0320a3e8
 */


void FUN_0320a3e8(ulong *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  ushort uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  short sVar12;
  ushort uVar13;
  uint uVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *local_50;
  ulong *puStack_48;
  ulong local_40;
  undefined8 local_38;
  ulong *local_30;
  ulong local_28;
  
  if ((ulong *)*param_2 == (ulong *)0x0) {
    FUN_0320a6dc(param_1);
    return;
  }
  cVar3 = (char)param_1[1];
  if (cVar3 == '\x02') {
    puVar18 = (ulong *)param_1[2];
LAB_0320a43c:
    if ((ulong *)*param_2 == puVar18) {
      return;
    }
LAB_0320a444:
    puVar11 = (ulong *)*param_1;
    puVar18 = puVar11;
    do {
      uVar14 = (uint)*puVar18;
      if ((uVar14 >> 0x14 & 1) != 0) {
        sVar12 = 0;
        if (puVar18 != (ulong *)0x0) {
          uVar10 = CONCAT44(uVar14,uVar14) & 0xfffff000fffff;
          sVar12 = (short)puVar18[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                POPCOUNT((char)(uVar10 >> 8)) +
                                               POPCOUNT((char)(uVar10 >> 0x10))) + 2];
        }
        goto LAB_0320a49c;
      }
      if ((*puVar18 & 1) != 0) {
        sVar12 = 0;
        goto LAB_0320a49c;
      }
      puVar18 = (ulong *)puVar18[1];
    } while (puVar18 != (ulong *)0x0);
    sVar12 = 0;
LAB_0320a49c:
    puVar7 = (ulong *)param_2[1];
    puVar18 = puVar7;
    do {
      uVar14 = (uint)*puVar18;
      if ((uVar14 >> 0x14 & 1) != 0) {
        sVar16 = 0;
        if (puVar18 != (ulong *)0x0) {
          uVar10 = CONCAT44(uVar14,uVar14) & 0xfffff000fffff;
          sVar16 = (short)puVar18[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                POPCOUNT((char)(uVar10 >> 8)) +
                                               POPCOUNT((char)(uVar10 >> 0x10))) + 2];
        }
        goto LAB_0320a4e8;
      }
      if ((*puVar18 & 1) != 0) {
        sVar16 = 0;
        goto LAB_0320a4e8;
      }
      puVar18 = (ulong *)puVar18[1];
    } while (puVar18 != (ulong *)0x0);
    sVar16 = 0;
LAB_0320a4e8:
    if (sVar12 == sVar16) {
      do {
        uVar14 = (uint)*puVar11;
        if ((uVar14 >> 0x14 & 1) != 0) {
          uVar8 = 0;
          if (puVar11 != (ulong *)0x0) {
            uVar10 = CONCAT44(uVar14,uVar14) & 0xfffff000fffff;
            uVar8 = *(ushort *)
                     ((long)puVar11 +
                     (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                  POPCOUNT((char)(uVar10 >> 0x10))) * 8 + 0x12) & 0xfff;
          }
          goto LAB_0320a538;
        }
        if ((*puVar11 & 1) != 0) {
          uVar8 = 0;
          goto LAB_0320a538;
        }
        puVar11 = (ulong *)puVar11[1];
      } while (puVar11 != (ulong *)0x0);
      uVar8 = 0;
LAB_0320a538:
      puVar18 = puVar7;
      do {
        uVar14 = (uint)*puVar18;
        if ((uVar14 >> 0x14 & 1) != 0) {
          uVar13 = 0;
          if (puVar18 != (ulong *)0x0) {
            uVar10 = CONCAT44(uVar14,uVar14) & 0xfffff000fffff;
            uVar13 = *(ushort *)
                      ((long)puVar18 +
                      (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                   POPCOUNT((char)(uVar10 >> 0x10))) * 8 + 0x12) & 0xfff;
          }
          goto LAB_0320a584;
        }
        if ((*puVar18 & 1) != 0) {
          uVar13 = 0;
          goto LAB_0320a584;
        }
        puVar18 = (ulong *)puVar18[1];
      } while (puVar18 != (ulong *)0x0);
      uVar13 = 0;
LAB_0320a584:
      if (uVar13 <= uVar8) {
        do {
          uVar14 = (uint)*puVar7;
          if ((uVar14 >> 0x13 & 1) != 0) {
            uVar10 = CONCAT44(uVar14,uVar14) & 0x7ffff0007ffff;
            if (((long *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))
                                             + POPCOUNT((char)(uVar10 >> 0x10))) + 2] != (long *)0x0
                ) && (uVar10 = (**(code **)(*(long *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                                          POPCOUNT((char)(uVar10 >>
                                                                                         8)) +
                                                                         POPCOUNT((char)(uVar10 >>
                                                                                        0x10))) + 2]
                                           + 0x28))(), (uVar10 & 1) != 0)) {
              puVar9 = (undefined8 *)*param_1;
              goto LAB_0320a5e0;
            }
            break;
          }
          puVar7 = (ulong *)puVar7[1];
        } while (puVar7 != (ulong *)0x0);
      }
    }
    goto LAB_0320a644;
  }
  if (cVar3 == '\x01') {
    puVar18 = param_1 + 2;
    goto LAB_0320a43c;
  }
  if (cVar3 != '\0') goto LAB_0320a444;
  goto LAB_0320a64c;
LAB_0320a688:
  uVar10 = *puVar11;
  if (((uint)uVar10 >> 8 & 1) == 0) {
    if (((uVar10 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0))
    goto LAB_0320a6d0;
    goto LAB_0320a688;
  }
  if ((puVar11 != (ulong *)0x0) &&
     ((code *)puVar11[(ulong)(byte)POPCOUNT((char)uVar10) + 2] != (code *)0x0)) {
    (*(code *)puVar11[(ulong)(byte)POPCOUNT((char)uVar10) + 2])(puVar18,(ulong *)*param_1,1);
  }
LAB_0320a6d0:
  *param_1 = param_2[1];
  goto LAB_0320a134;
  while (puVar18 = (ulong *)puVar18[1], puVar18 != (ulong *)0x0) {
LAB_0320a254:
    uVar15 = *puVar18;
    if (((uint)uVar15 >> 2 & 1) != 0) {
      local_28 = puVar18[(uVar15 >> 1 & 1) + (uVar15 & 1) + 2];
      if ((local_28 & 1) != 0) {
        piVar1 = (int *)((local_28 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_0320a2a0;
    }
  }
  local_28 = 0;
LAB_0320a2a0:
  if ((uVar10 & 1) != 0) {
    plVar6 = (long *)(uVar10 & 0xfffffffffffffffe);
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  goto LAB_0320a2e0;
  while (puVar9 = (undefined8 *)puVar9[1], puVar9 != (undefined8 *)0x0) {
LAB_0320a5e0:
    uVar14 = (uint)*puVar9;
    if ((uVar14 >> 0x13 & 1) != 0) {
      uVar10 = CONCAT44(uVar14,uVar14) & 0x7ffff0007ffff;
      if (((long *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                       POPCOUNT((char)(uVar10 >> 0x10))) + 2] != (long *)0x0) &&
         (uVar10 = (**(code **)(*(long *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                              POPCOUNT((char)(uVar10 >> 8)) +
                                                             POPCOUNT((char)(uVar10 >> 0x10))) + 2]
                               + 0x28))(), (uVar10 & 1) != 0)) {
        if ((char)param_1[1] == '\x02') {
          puVar18 = (ulong *)param_1[2];
        }
        else if ((char)param_1[1] == '\x01') {
          puVar18 = param_1 + 2;
        }
        else {
          puVar18 = (ulong *)0x0;
        }
        puVar11 = (ulong *)*param_1;
        goto LAB_0320a688;
      }
      break;
    }
  }
LAB_0320a644:
  FUN_0320a6dc(param_1);
LAB_0320a64c:
  *param_1 = param_2[1];
  FUN_03209ed8(param_1,param_2);
LAB_0320a134:
  puVar9 = (undefined8 *)*param_1;
  if ((((undefined8 *)0x1 < puVar9) && (uVar14 = (uint)*puVar9, (uVar14 >> 0x11 & 1) != 0)) &&
     (uVar10 = CONCAT44(uVar14,uVar14) & 0x1ffff0001ffff,
     (puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                          POPCOUNT((char)(uVar10 >> 0x10))) + 2] & 0x300000) != 0)) {
    *param_1 = puVar9[1];
  }
  local_38 = *param_2;
  local_30 = (ulong *)param_2[1];
  uVar10 = param_2[2];
  if ((uVar10 & 1) != 0) {
    piVar1 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_28 = uVar10;
  if ((ulong *)0x1 < local_30) {
    uVar15 = *local_30;
    uVar14 = (uint)uVar15;
    if (((uVar14 >> 0x11 & 1) != 0) &&
       (uVar17 = CONCAT44(uVar14,uVar14) & 0x1ffff0001ffff,
       (local_30[(ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8)) +
                              POPCOUNT((char)(uVar17 >> 0x10))) + 2] & 0x300000) != 0)) {
      uVar17 = 0;
      puVar18 = local_30;
      if ((uVar14 >> 0x15 & 1) != 0) goto LAB_0320a208;
      do {
        uVar19 = 0;
        while( true ) {
          uVar17 = uVar19 | uVar17;
          if (((uVar15 & 1) != 0) || (puVar18 = (ulong *)puVar18[1], puVar18 == (ulong *)0x0)) {
            if (((uint)uVar17 >> 3 & 1) != 0) goto LAB_0320a2e0;
            local_30 = (ulong *)local_30[1];
            if (local_30 != (ulong *)0x0) {
              puVar18 = local_30;
              goto LAB_0320a254;
            }
            local_28 = 0;
            goto LAB_0320a2a0;
          }
          uVar15 = *puVar18;
          if (((uint)uVar15 >> 0x15 & 1) == 0) break;
LAB_0320a208:
          uVar19 = CONCAT44((int)uVar15,(int)uVar15) & 0x1fffff001fffff;
          uVar19 = puVar18[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                        POPCOUNT((char)(uVar19 >> 0x10))) + 2];
        }
      } while( true );
    }
  }
LAB_0320a2e0:
  if ((char)param_1[1] == '\x02') {
    local_50 = (ulong *)param_1[2];
  }
  else if ((char)param_1[1] == '\x01') {
    local_50 = param_1 + 2;
  }
  else {
    local_50 = (ulong *)0x0;
  }
  puStack_48 = (ulong *)*param_1;
  local_40 = 0;
  puVar18 = puStack_48;
  if (puStack_48 != (ulong *)0x0) {
    do {
      uVar10 = *puVar18;
      if (((uint)uVar10 >> 2 & 1) != 0) {
        local_40 = puVar18[(uVar10 >> 1 & 1) + (uVar10 & 1) + 2];
        goto LAB_0320a33c;
      }
      puVar18 = (ulong *)puVar18[1];
    } while (puVar18 != (ulong *)0x0);
    local_40 = 0;
  }
LAB_0320a33c:
  if ((local_40 & 1) != 0) {
    piVar1 = (int *)((local_40 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_031dbfb0(&local_50,&local_38);
  if ((local_40 & 1) != 0) {
    plVar6 = (long *)(local_40 & 0xfffffffffffffffe);
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}


