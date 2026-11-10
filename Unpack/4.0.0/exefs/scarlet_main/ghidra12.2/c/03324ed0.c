/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03324ed0; name: FUN_03324ed0
 */


void FUN_03324ed0(undefined8 *param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  int iVar16;
  ulong *puVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  ulong *puVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong uVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  int iVar34;
  long lVar35;
  long local_d8;
  ulong *puStack_d0;
  ulong local_c8;
  long local_c0;
  ulong *puStack_b8;
  ulong local_b0;
  int local_a8;
  undefined1 *local_a0;
  ulong *puStack_98;
  ulong local_90;
  undefined1 *local_88;
  ulong *local_80;
  ulong local_78;
  int local_70;
  long local_68;
  
  if (*(int *)(param_1 + 4) == param_2) {
    return;
  }
  puVar17 = (ulong *)param_1[1];
  puVar25 = puVar17;
  if ((*puVar17 & 1) == 0) {
    do {
      puVar25 = (ulong *)puVar25[1];
    } while ((*puVar25 & 1) == 0);
  }
  puVar26 = puVar17;
  if ((puVar25[2] & 0x1f) != 8) {
    puVar26 = (ulong *)0x0;
  }
  do {
    if ((*puVar26 & 1) != 0) {
      if ((puVar26 != (ulong *)0x0) && ((int)(puVar26[2] >> 8) != 0)) {
        return;
      }
      break;
    }
    puVar26 = (ulong *)puVar26[1];
  } while (puVar26 != (ulong *)0x0);
  iVar34 = *(int *)*param_1;
  if (iVar34 < 0) {
    return;
  }
  puVar25 = puVar17;
  puVar26 = puVar17;
  if ((*puVar17 & 1) == 0) {
    puVar22 = puVar17;
    do {
      puVar22 = (ulong *)puVar22[1];
    } while ((*puVar22 & 1) == 0);
    if ((puVar22[2] & 0x1f) != 8) {
      puVar25 = (ulong *)0x0;
    }
    do {
      puVar26 = (ulong *)puVar26[1];
    } while ((*puVar26 & 1) == 0);
  }
  else if ((puVar17[2] & 0x1f) != 8) {
    puVar25 = (ulong *)0x0;
  }
  if ((puVar26[2] & 0x1f) != 8) {
    puVar17 = (ulong *)0x0;
  }
  do {
    if ((*puVar17 & 1) != 0) {
      if ((puVar17 != (ulong *)0x0) && ((int)(puVar17[2] >> 8) != 0)) {
        iVar34 = -1;
        goto LAB_03325018;
      }
      break;
    }
    puVar17 = (ulong *)puVar17[1];
  } while (puVar17 != (ulong *)0x0);
  if (iVar34 == 0) {
    local_80 = (ulong *)param_1[5];
    puVar17 = local_80;
    if ((*local_80 & 1) == 0) {
      do {
        puVar17 = (ulong *)puVar17[1];
      } while ((*puVar17 & 1) == 0);
    }
    if ((local_80 != (ulong *)0x0) && ((puVar17[2] & 0x1f) == 7)) {
      local_88 = &DAT_03c886bc;
      local_80 = (ulong *)&DAT_03c886bc;
      puVar12 = (undefined8 *)FUN_033364d4(param_1[2] + 0x68,&local_88,0);
      if (puVar12 == (undefined8 *)0x0) {
        param_1[5] = 0;
        return;
      }
      local_80 = (ulong *)*puVar12;
      param_1[5] = local_80;
    }
    lVar13 = param_1[2] + 0x200;
    uVar4 = *(undefined4 *)(param_1[2] + 0x230);
    local_88 = (undefined1 *)0x0;
    for (puVar17 = local_80; puVar17 != (ulong *)0x0; puVar17 = (ulong *)puVar17[1]) {
      uVar23 = *puVar17;
      if (((uint)uVar23 >> 2 & 1) != 0) {
        local_78 = puVar17[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
        goto LAB_033250c8;
      }
    }
    local_78 = 0;
LAB_033250c8:
    if ((local_78 & 1) == 0) {
      local_70 = 0;
      FUN_03323a58(lVar13,uVar4,&local_88);
    }
    else {
      plVar14 = (long *)(local_78 & 0xfffffffffffffffe);
      plVar1 = plVar14 + 1;
      do {
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      local_70 = 0;
      FUN_03323a58(lVar13,uVar4,&local_88);
      do {
        lVar13 = *plVar1;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)lVar13 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((plVar14 != (long *)0x0) && ((int)lVar13 == 1)) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
    lVar35 = param_1[2];
    iVar16 = *(int *)(lVar35 + 0x298);
    lVar13 = (long)iVar16;
    if ((int)(*(uint *)(lVar35 + 0x29c) & 0x7fffffff) <= iVar16) {
      FUN_0133bb88(lVar35 + 0x290,PTR_PTR_047d1a50,lVar13 + 1);
      iVar16 = *(int *)(lVar35 + 0x298);
    }
    iVar34 = 0;
    *(undefined4 *)(*(long *)(lVar35 + 0x290) + (long)iVar16 * 4) = 1;
    *(int *)(lVar35 + 0x298) = (int)(lVar13 + 1);
    *(undefined4 *)*param_1 = uVar4;
  }
  else {
LAB_03325018:
    FUN_033240e8(param_1[2],iVar34);
  }
  FUN_03323960(&local_88,param_1);
  uVar23 = local_78;
  if (*(int *)(param_1 + 4) == 0) {
    if (param_1[5] != 0) goto LAB_033253e8;
    puVar17 = puVar25;
    do {
      if (((byte)*puVar17 >> 1 & 1) != 0) {
        local_80 = (ulong *)puVar17[3];
        goto LAB_0332528c;
      }
      puVar17 = (ulong *)puVar17[1];
    } while (puVar17 != (ulong *)0x0);
    local_80 = (ulong *)0x0;
LAB_0332528c:
    param_1[5] = local_80;
    if ((local_78 & 1) != 0) {
      piVar2 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
      do {
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      local_80 = (ulong *)param_1[5];
    }
    iVar16 = -local_70;
    if (-1 < local_70) {
      iVar16 = local_70;
    }
    if (local_80 == (ulong *)0x0) {
      uVar27 = 0;
    }
    else {
      puVar17 = local_80;
      do {
        uVar27 = *puVar17;
        if (((uint)uVar27 >> 2 & 1) != 0) {
          uVar27 = puVar17[(uVar27 >> 1 & 1) + (uVar27 & 1) + 2];
          goto LAB_03325300;
        }
        puVar17 = (ulong *)puVar17[1];
      } while (puVar17 != (ulong *)0x0);
      uVar27 = 0;
    }
LAB_03325300:
    if ((uVar27 & 1) != 0) {
      piVar2 = (int *)((uVar27 & 0xfffffffffffffffe) + 8);
      do {
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if ((local_78 & 1) != 0) {
      plVar14 = (long *)(local_78 & 0xfffffffffffffffe);
      plVar1 = plVar14 + 1;
      do {
        lVar13 = *plVar1;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)lVar13 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((plVar14 != (long *)0x0) && ((int)lVar13 == 1)) {
        local_78 = uVar27;
        (**(code **)(*plVar14 + 8))();
        uVar27 = local_78;
      }
    }
    local_78 = uVar27;
    local_70 = iVar16;
    if ((uVar23 & 1) != 0) {
      plVar14 = (long *)(uVar23 & 0xfffffffffffffffe);
      plVar1 = plVar14 + 1;
      do {
        lVar13 = *plVar1;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)lVar13 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((plVar14 != (long *)0x0) && ((int)lVar13 == 1)) {
        (**(code **)(*plVar14 + 8))();
      }
    }
    puVar17 = (ulong *)param_1[5];
    uVar20 = 0;
    if (puVar17 != (ulong *)0x0) {
      do {
        uVar20 = (uint)*puVar17;
        if ((uVar20 >> 0x14 & 1) != 0) {
          uVar23 = CONCAT44(uVar20,uVar20) & 0xfffff000fffff;
          uVar20 = (uint)(ushort)puVar17[(ulong)(byte)(POPCOUNT((char)uVar23) +
                                                       POPCOUNT((char)(uVar23 >> 8)) +
                                                      POPCOUNT((char)(uVar23 >> 0x10))) + 2];
          goto LAB_033253dc;
        }
        if ((*puVar17 & 1) != 0) {
          uVar20 = 0;
          goto LAB_033253dc;
        }
        puVar17 = (ulong *)puVar17[1];
      } while (puVar17 != (ulong *)0x0);
      uVar20 = 0;
    }
LAB_033253dc:
    *(uint *)((long)param_1 + 0x24) = uVar20;
    if (*(int *)(param_1 + 4) == 0) goto LAB_033253e8;
  }
  do {
    uVar23 = local_78;
    if ((*puVar25 & 1) != 0) {
      if ((puVar25 != (ulong *)0x0) && ((int)(puVar25[2] >> 8) != 0)) goto LAB_033253e8;
      break;
    }
    puVar25 = (ulong *)puVar25[1];
  } while (puVar25 != (ulong *)0x0);
  if ((local_88 != (undefined1 *)0x0) &&
     (lVar13 = param_1[2], *(int *)(*(long *)(lVar13 + 0x290) + (long)iVar34 * 4) != 0)) {
    local_a0 = local_88;
    puStack_98 = local_80;
    local_90 = local_78;
    if ((local_78 & 1) == 0) {
      FUN_0332245c(lVar13,&local_a0);
    }
    else {
      piVar2 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
      do {
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      FUN_0332245c(lVar13,&local_a0);
      if ((uVar23 & 1) != 0) {
        plVar14 = (long *)(uVar23 & 0xfffffffffffffffe);
        plVar1 = plVar14 + 1;
        do {
          lVar13 = *plVar1;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = (int)lVar13 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((plVar14 != (long *)0x0) && ((int)lVar13 == 1)) {
          (**(code **)(*plVar14 + 8))();
        }
      }
    }
  }
LAB_033253e8:
  puVar17 = local_80;
  puVar25 = local_80;
  while( true ) {
    uVar20 = (uint)*puVar25;
    if ((uVar20 >> 0x14 & 1) != 0) break;
    if (((*puVar25 & 1) != 0) || (puVar25 = (ulong *)puVar25[1], puVar25 == (ulong *)0x0))
    goto LAB_03325434;
  }
  if (puVar25 != (ulong *)0x0) {
    uVar23 = CONCAT44(uVar20,uVar20) & 0xfffff000fffff;
    uVar20 = (uint)(ushort)puVar25[(ulong)(byte)(POPCOUNT((char)uVar23) +
                                                 POPCOUNT((char)(uVar23 >> 8)) +
                                                POPCOUNT((char)(uVar23 >> 0x10))) + 2];
    goto LAB_03325438;
  }
LAB_03325434:
  uVar20 = 0;
LAB_03325438:
  local_68 = (long)(int)(uVar20 * param_2);
  lVar13 = (**(code **)(*(long *)(param_1[2] + 0x238) + 0x10))
                     (param_1[2] + 0x238,local_68,&local_68);
  param_1[3] = lVar13;
  iVar16 = -local_70;
  if (-1 < local_70) {
    iVar16 = local_70;
  }
  iVar10 = param_2 - iVar16;
  iVar29 = iVar10 * uVar20;
  if (iVar10 == 0 || param_2 < iVar16) {
    iVar29 = 0;
  }
  iVar3 = iVar16;
  if (iVar10 == 0 || param_2 < iVar16) {
    iVar3 = param_2;
  }
  memset((void *)((ulong)(iVar16 * uVar20) + lVar13),0,(long)iVar29);
  memcpy((void *)param_1[3],local_88,(long)(int)(iVar3 * uVar20));
  lVar13 = param_1[3];
  if (puVar17 != (ulong *)0x0) {
    puVar25 = puVar17;
LAB_033254b0:
    uVar23 = *puVar25;
    if (((uint)uVar23 >> 2 & 1) == 0) goto code_r0x033254b8;
    uVar23 = puVar25[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
    if ((uVar23 & 1) != 0) {
      piVar2 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
      do {
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar7 = false;
      goto LAB_03325504;
    }
    goto LAB_033254c8;
  }
LAB_033254c0:
  uVar23 = 0;
LAB_033254c8:
  bVar7 = true;
LAB_03325504:
  *(int *)(param_1 + 4) = param_2;
  *(uint *)((long)param_1 + 0x24) = uVar20;
  param_1[5] = puVar17;
  puStack_b8 = puVar17;
  if (!bVar7) {
    piVar2 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = *piVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  pbVar18 = (byte *)param_1[1];
  pbVar24 = pbVar18;
  if ((*pbVar18 & 1) == 0) {
    do {
      pbVar24 = *(byte **)(pbVar24 + 8);
    } while ((*pbVar24 & 1) == 0);
  }
  if ((*(ulong *)(pbVar24 + 0x10) & 0x1f) != 8) {
    pbVar18 = (byte *)0x0;
  }
  do {
    local_c0 = lVar13;
    local_b0 = uVar23;
    local_a8 = param_2;
    if ((*pbVar18 & 1) != 0) {
      if ((pbVar18 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar18 + 0x10) >> 8) != 0))
      goto LAB_033255bc;
      break;
    }
    pbVar18 = *(byte **)(pbVar18 + 8);
  } while (pbVar18 != (byte *)0x0);
  if (-1 < *(int *)*param_1) {
    FUN_03323a58(param_1[2] + 0x200,*(int *)*param_1,&local_c0);
  }
LAB_033255bc:
  if (!bVar7) {
    plVar14 = (long *)(uVar23 & 0xfffffffffffffffe);
    plVar1 = plVar14 + 1;
    do {
      lVar35 = *plVar1;
      cVar8 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar35 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((plVar14 != (long *)0x0) && ((int)lVar35 == 1)) {
      (**(code **)(*plVar14 + 8))();
    }
  }
  puVar11 = local_88;
  if (local_88 != (undefined1 *)0x0) {
    lVar35 = param_1[2];
    if ((local_78 & 1) != 0) {
      plVar14 = (long *)(local_78 & 0xfffffffffffffffe);
      plVar1 = plVar14 + 1;
      do {
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      do {
        lVar19 = *plVar1;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((plVar14 != (long *)0x0) && ((int)lVar19 == 1)) {
        (**(code **)(*plVar14 + 8))();
      }
    }
    iVar16 = -local_70;
    if (-1 < local_70) {
      iVar16 = local_70;
    }
    puVar25 = local_80;
    while( true ) {
      uVar21 = (uint)*puVar25;
      if ((uVar21 >> 0x14 & 1) != 0) break;
      if (((*puVar25 & 1) != 0) || (puVar25 = (ulong *)puVar25[1], puVar25 == (ulong *)0x0))
      goto LAB_03325694;
    }
    if (puVar25 != (ulong *)0x0) {
      uVar27 = CONCAT44(uVar21,uVar21) & 0xfffff000fffff;
      uVar21 = (uint)(ushort)puVar25[(ulong)(byte)(POPCOUNT((char)uVar27) +
                                                   POPCOUNT((char)(uVar27 >> 8)) +
                                                  POPCOUNT((char)(uVar27 >> 0x10))) + 2];
      goto LAB_03325698;
    }
LAB_03325694:
    uVar21 = 0;
LAB_03325698:
    if ((uVar23 & 1) != 0) {
      plVar14 = (long *)(uVar23 & 0xfffffffffffffffe);
      plVar1 = plVar14 + 1;
      do {
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      do {
        lVar19 = *plVar1;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)lVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((plVar14 != (long *)0x0) && ((int)lVar19 == 1)) {
        (**(code **)(*plVar14 + 8))();
      }
    }
    iVar29 = *(int *)(lVar35 + 0x20);
    if (0 < iVar29) {
      lVar28 = *(long *)(lVar35 + 0x18);
      lVar19 = 0;
      do {
        if (0 < *(int *)(lVar28 + lVar19 * 0x10 + 8)) {
          lVar30 = 0;
          lVar31 = 0;
          do {
            lVar28 = *(long *)(lVar28 + lVar19 * 0x10);
            puVar25 = (ulong *)(lVar28 + lVar30);
            puVar33 = (undefined1 *)*puVar25;
            puVar32 = (undefined1 *)puVar25[3];
            if (puVar11 <= puVar33 && puVar33 < puVar11 + uVar21 * iVar16) {
              *(undefined1 **)(lVar28 + lVar30) = puVar33 + (lVar13 - (long)puVar11);
            }
            if (puVar11 <= puVar32 && puVar32 < puVar11 + uVar21 * iVar16) {
              puVar25[3] = (ulong)(puVar32 + (lVar13 - (long)puVar11));
            }
            lVar28 = *(long *)(lVar35 + 0x18);
            lVar31 = lVar31 + 1;
            lVar30 = lVar30 + 0x30;
          } while (lVar31 < *(int *)(lVar28 + lVar19 * 0x10 + 8));
          iVar29 = *(int *)(lVar35 + 0x20);
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 < iVar29);
    }
  }
  uVar15 = param_1[2];
  puStack_d0 = puVar17;
  local_d8 = lVar13;
  local_c8 = uVar23;
  if ((uVar23 & 1) == 0) {
    FUN_03322638(uVar15,&local_d8,param_2,uVar20,0xffffffff,iVar34);
  }
  else {
    piVar2 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
    do {
      cVar8 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    FUN_03322638(uVar15,&local_d8,param_2,uVar20,0xffffffff,iVar34);
    if ((uVar23 & 1) != 0) {
      plVar14 = (long *)(uVar23 & 0xfffffffffffffffe);
      plVar1 = plVar14 + 1;
      do {
        lVar13 = *plVar1;
        cVar8 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)lVar13 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((plVar14 != (long *)0x0) && ((int)lVar13 == 1)) {
        (**(code **)(*plVar14 + 8))();
      }
    }
  }
  pbVar18 = (byte *)param_1[1];
  pbVar24 = pbVar18;
  if ((*pbVar18 & 1) == 0) {
    do {
      pbVar24 = *(byte **)(pbVar24 + 8);
    } while ((*pbVar24 & 1) == 0);
  }
  if ((*(ulong *)(pbVar24 + 0x10) & 0x1f) != 8) {
    pbVar18 = (byte *)0x0;
  }
  do {
    if ((*pbVar18 & 1) != 0) {
      if ((pbVar18 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar18 + 0x10) >> 8) != 0)) {
        lVar13 = -1;
        goto LAB_0332588c;
      }
      break;
    }
    pbVar18 = *(byte **)(pbVar18 + 8);
  } while (pbVar18 != (byte *)0x0);
  lVar13 = (long)*(int *)*param_1;
LAB_0332588c:
  lVar35 = param_1[2];
  lVar19 = param_1[3];
  uVar20 = *(uint *)(lVar35 + 0x2b4);
  if ((int)uVar20 < *(int *)(lVar35 + 0x2b0) * 2) {
    FUN_02ef5fd4((long *)(lVar35 + 0x2a8),PTR_PTR_047d1a50,uVar20 * 2 + 2);
    uVar20 = *(uint *)(lVar35 + 0x2b4);
  }
  uVar21 = (int)lVar19 * -0x61c8864f;
  uVar5 = (int)((ulong)lVar19 >> 0x20) * -0x61c8864f;
  uVar21 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
  uVar6 = uVar21 >> 0x10 | uVar21 << 0x10;
  uVar21 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
  uVar21 = uVar6 + (uVar6 >> 2) + uVar21 * 0x40 + 0x9e3779b9 ^ uVar21;
  lVar28 = *(long *)(lVar35 + 0x2a8);
  do {
    uVar21 = uVar20 & uVar21;
    lVar31 = *(long *)(lVar28 + (ulong)uVar21 * 0x10);
    if (lVar31 == -1) {
      iVar34 = 1;
LAB_03325928:
      *(int *)(lVar35 + 0x2b0) = *(int *)(lVar35 + 0x2b0) + iVar34;
      *(long *)(lVar28 + (-(ulong)(uVar21 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar21 << 4)) =
           lVar19;
      *(long *)(*(long *)(lVar35 + 0x2a8) + (long)(int)uVar21 * 0x10 + 8) = lVar13;
      if ((uVar23 & 1) != 0) {
        plVar14 = (long *)(uVar23 & 0xfffffffffffffffe);
        plVar1 = plVar14 + 1;
        do {
          lVar13 = *plVar1;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = (int)lVar13 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((plVar14 != (long *)0x0) && ((int)lVar13 == 1)) {
          (**(code **)(*plVar14 + 8))();
        }
      }
      if ((local_78 & 1) != 0) {
        plVar14 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar1 = plVar14 + 1;
        do {
          lVar13 = *plVar1;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = (int)lVar13 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((plVar14 != (long *)0x0) && ((int)lVar13 == 1)) {
          (**(code **)(*plVar14 + 8))();
        }
      }
      return;
    }
    if (lVar31 == lVar19) {
      iVar34 = 0;
      goto LAB_03325928;
    }
    uVar21 = uVar21 + 1;
  } while( true );
code_r0x033254b8:
  puVar25 = (ulong *)puVar25[1];
  if (puVar25 == (ulong *)0x0) goto LAB_033254c0;
  goto LAB_033254b0;
}


