/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03322aa8; name: FUN_03322aa8
 */


void FUN_03322aa8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  long *plVar16;
  ulong *puVar17;
  long lVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  bool bVar26;
  undefined4 local_98 [2];
  int *local_90;
  ulong *puStack_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  
  piVar22 = (int *)*param_2;
  if (piVar22 == (int *)*param_1) {
    return;
  }
  puVar11 = (ulong *)param_1[1];
  puVar12 = puVar11;
  if ((*puVar11 & 1) == 0) {
    puVar17 = puVar11;
    do {
      puVar17 = (ulong *)puVar17[1];
    } while ((*puVar17 & 1) == 0);
    if ((puVar11 != (ulong *)0x0) && ((puVar17[2] & 0x1f) == 6)) goto LAB_03322b44;
    if ((*puVar11 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
    }
  }
  else if ((puVar11 != (ulong *)0x0) && ((puVar11[2] & 0x1f) == 6)) {
LAB_03322b44:
    if (piVar22 == (int *)0x0) {
      iVar21 = 0;
      goto LAB_03322f04;
    }
    lVar25 = param_1[3];
    puVar12 = (ulong *)param_2[1];
    uVar24 = param_2[2];
    if ((uVar24 & 1) != 0) {
      piVar3 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar26) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    iVar19 = *(int *)(lVar25 + 0x220);
    if (0 < iVar19) {
      lVar8 = 0;
      iVar21 = iVar19;
      do {
        plVar16 = (long *)(*(long *)(lVar25 + 0x218) + lVar8 * 0x18);
        piVar3 = (int *)*plVar16;
        puVar11 = (ulong *)plVar16[1];
        if (puVar11 != (ulong *)0x0) {
          puVar17 = puVar11;
          do {
            uVar23 = *puVar17;
            if (((uint)uVar23 >> 2 & 1) != 0) {
              uVar23 = puVar17[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
              if ((uVar23 & 1) != 0) {
                piVar2 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
                do {
                  cVar5 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar26) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              goto LAB_03322be4;
            }
            puVar17 = (ulong *)puVar17[1];
          } while (puVar17 != (ulong *)0x0);
        }
        uVar23 = 0;
LAB_03322be4:
        if ((puVar12 == puVar11) && (piVar3 == piVar22)) {
          bVar26 = false;
          iVar21 = (int)lVar8;
        }
        else {
          bVar26 = true;
        }
        if ((uVar23 & 1) != 0) {
          plVar9 = (long *)(uVar23 & 0xfffffffffffffffe);
          plVar16 = plVar9 + 1;
          do {
            lVar18 = *plVar16;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *(int *)plVar16 = (int)lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar18 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        if (!bVar26) {
          if ((uVar24 & 1) != 0) goto LAB_03322ed4;
          goto LAB_03322f04;
        }
        iVar19 = *(int *)(lVar25 + 0x220);
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar19);
    }
    local_68 = local_68 & 0xffffff00;
    iVar21 = iVar19 + 1;
    local_78 = 0;
    uStack_70 = 0;
    iVar15 = iVar19;
    if (iVar19 < (int)(*(uint *)(lVar25 + 0x224) & 0x7fffffff)) {
LAB_03322d10:
      *(int *)(lVar25 + 0x220) = iVar21;
      if (iVar15 <= iVar19) {
        puVar14 = (undefined8 *)(*(long *)(lVar25 + 0x218) + (long)iVar15 * 0x18);
        uVar7 = (iVar19 - iVar15) + 1;
        if (iVar19 - iVar15 != 0) {
          iVar21 = -(uVar7 & 0xfffffffe);
          puVar13 = puVar14;
          do {
            iVar21 = iVar21 + 2;
            *puVar13 = local_78;
            puVar13[1] = uStack_70;
            *(uint *)(puVar13 + 2) = local_68;
            *(undefined4 *)((long)puVar13 + 0x14) = 0;
            puVar13[3] = local_78;
            puVar13[4] = uStack_70;
            puVar14 = puVar13 + 6;
            *(uint *)(puVar13 + 5) = local_68;
            *(undefined4 *)((long)puVar13 + 0x2c) = 0;
            puVar13 = puVar14;
          } while (iVar21 != 0);
        }
        if ((uVar7 & 1) != 0) {
          *puVar14 = local_78;
          puVar14[1] = uStack_70;
          *(uint *)(puVar14 + 2) = local_68;
          *(undefined4 *)((long)puVar14 + 0x14) = 0;
        }
      }
    }
    else {
      FUN_033277d4(lVar25 + 0x218,PTR_PTR_047d1a50,(long)iVar21);
      iVar15 = *(int *)(lVar25 + 0x220);
      if (iVar15 <= iVar19) goto LAB_03322d10;
      if (iVar21 < iVar15) {
        *(int *)(lVar25 + 0x220) = iVar21;
      }
    }
    *(int **)(*(long *)(lVar25 + 0x218) + (long)iVar19 * 0x18) = piVar22;
    *(ulong **)(*(long *)(lVar25 + 0x218) + (long)iVar19 * 0x18 + 8) = puVar12;
    iVar21 = *(int *)(lVar25 + 0x288);
    lVar8 = (long)iVar21;
    if ((int)(*(uint *)(lVar25 + 0x28c) & 0x7fffffff) <= iVar21) {
      FUN_0133bb88(lVar25 + 0x280,PTR_PTR_047d1a50,lVar8 + 1);
      iVar21 = *(int *)(lVar25 + 0x288);
    }
    *(undefined4 *)(*(long *)(lVar25 + 0x280) + (long)iVar21 * 4) = 1;
    *(int *)(lVar25 + 0x288) = (int)(lVar8 + 1);
    iVar21 = iVar19;
    local_90 = piVar22;
    puStack_88 = puVar12;
    local_80 = uVar24;
    if ((uVar24 & 1) == 0) {
      FUN_03322638(lVar25,&local_90,1,0,iVar19,0xffffffff);
    }
    else {
      piVar22 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar26) {
          *piVar22 = *piVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_03322638(lVar25,&local_90,1,0,iVar19,0xffffffff);
      if ((uVar24 & 1) != 0) {
        plVar9 = (long *)(uVar24 & 0xfffffffffffffffe);
        plVar16 = plVar9 + 1;
        do {
          lVar25 = *plVar16;
          cVar5 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar26) {
            *(int *)plVar16 = (int)lVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar25 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
LAB_03322ed4:
      plVar9 = (long *)(uVar24 & 0xfffffffffffffffe);
      plVar16 = plVar9 + 1;
      do {
        lVar25 = *plVar16;
        cVar5 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar26) {
          *(int *)plVar16 = (int)lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar25 == 1)) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
LAB_03322f04:
    *(int *)*param_1 = iVar21;
    return;
  }
  if (puVar11 == (ulong *)0x0) {
    return;
  }
  if ((puVar12[2] & 0x1f) != 7) {
    return;
  }
  puVar11 = (ulong *)param_2[1];
  puVar12 = puVar11;
  if ((*puVar11 & 1) == 0) {
    puVar17 = puVar11;
    do {
      puVar17 = (ulong *)puVar17[1];
    } while ((*puVar17 & 1) == 0);
    if ((puVar11 == (ulong *)0x0) || ((puVar17[2] & 0x1f) != 6)) {
      if ((*puVar11 & 1) == 0) {
        do {
          puVar12 = (ulong *)puVar12[1];
        } while ((*puVar12 & 1) == 0);
      }
      goto LAB_03322f14;
    }
  }
  else if ((puVar11 == (ulong *)0x0) || ((puVar11[2] & 0x1f) != 6)) {
LAB_03322f14:
    lVar25 = param_1[3];
    piVar3 = (int *)0x0;
    if (puVar11 != (ulong *)0x0 && (puVar12[2] & 0x1f) == 7) {
      piVar3 = piVar22;
    }
    goto joined_r0x03322fa4;
  }
  puVar14 = (undefined8 *)(*(long *)(param_1[3] + 0x218) + (long)*piVar22 * 0x18);
  piVar3 = (int *)*puVar14;
  puVar12 = (ulong *)puVar14[1];
  if (puVar12 != (ulong *)0x0) {
    do {
      uVar24 = *puVar12;
      if (((uint)uVar24 >> 2 & 1) != 0) {
        uVar24 = puVar12[(uVar24 >> 1 & 1) + (uVar24 & 1) + 2];
        goto LAB_03322f5c;
      }
      puVar12 = (ulong *)puVar12[1];
    } while (puVar12 != (ulong *)0x0);
    uVar24 = 0;
LAB_03322f5c:
    if ((uVar24 & 1) != 0) {
      plVar9 = (long *)(uVar24 & 0xfffffffffffffffe);
      plVar16 = plVar9 + 1;
      do {
        cVar5 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar26) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        lVar25 = *plVar16;
        cVar5 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar26) {
          *(int *)plVar16 = (int)lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar25 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar25 = param_1[3];
joined_r0x03322fa4:
  if (puVar11 == (ulong *)0x0) {
    uVar24 = 0;
    bVar26 = true;
  }
  else {
    puVar12 = puVar11;
    do {
      uVar24 = *puVar12;
      if (((uint)uVar24 >> 2 & 1) != 0) {
        bVar26 = false;
        uVar24 = puVar12[(uVar24 >> 1 & 1) + (uVar24 & 1) + 2];
        goto LAB_03322fe0;
      }
      puVar12 = (ulong *)puVar12[1];
    } while (puVar12 != (ulong *)0x0);
    uVar24 = 0;
    bVar26 = false;
  }
LAB_03322fe0:
  if ((uVar24 & 1) != 0) {
    piVar22 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar6) {
        *piVar22 = *piVar22 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_98[0] = *(undefined4 *)(param_1 + 4);
  plVar16 = (long *)(lVar25 + 0x28);
  lVar8 = FUN_03327360(plVar16,local_98);
  if (lVar8 == 0) {
    iVar21 = *(int *)(lVar25 + 0x20);
    iVar19 = iVar21;
    if ((int)(*(uint *)(lVar25 + 0x24) & 0x7fffffff) <= iVar21) {
      FUN_03327b6c(lVar25 + 0x18,(long)iVar21 + 1);
      iVar19 = *(int *)(lVar25 + 0x20);
    }
    plVar9 = (long *)(*(long *)(lVar25 + 0x18) + (long)iVar19 * 0x10);
    *(int *)(lVar25 + 0x20) = (int)((long)iVar21 + 1);
    *plVar9 = 0;
    plVar10 = plVar9 + 1;
    *plVar10 = -0x8000000000000000;
    uVar20 = *param_1;
    uVar4 = param_1[1];
    uVar23 = param_1[2];
    if ((uVar23 & 1) != 0) {
      piVar22 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar6) {
          *piVar22 = *piVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if ((uVar24 & 1) != 0) {
      piVar22 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar6) {
          *piVar22 = *piVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    iVar19 = (int)*plVar10;
    lVar8 = (long)iVar19;
    if ((int)(*(uint *)((long)plVar9 + 0xc) & 0x7fffffff) <= iVar19) {
      FUN_0332795c(plVar9,lVar8 + 1);
      iVar19 = (int)*plVar10;
    }
    puVar14 = (undefined8 *)(*plVar9 + (long)iVar19 * 0x30);
    *puVar14 = uVar20;
    puVar14[1] = uVar4;
    puVar14[2] = uVar23;
    puVar14[3] = piVar3;
    puVar14[4] = puVar11;
    puVar14[5] = uVar24;
    *(int *)plVar10 = (int)(lVar8 + 1);
    iVar19 = *(int *)(lVar25 + 0x20);
    lVar8 = *(long *)(lVar25 + 0x18);
    uVar20 = *param_1;
    if (!bVar26) {
      puVar12 = puVar11;
LAB_033232ac:
      uVar23 = *puVar12;
      if (((uint)uVar23 >> 2 & 1) == 0) goto code_r0x033232b4;
      uVar23 = puVar12[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
      if ((uVar23 & 1) != 0) {
        piVar22 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
        do {
          cVar5 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar26) {
            *piVar22 = *piVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          cVar5 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar26) {
            *piVar22 = *piVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar26 = false;
        goto LAB_033232c4;
      }
      goto LAB_033232c0;
    }
LAB_033232bc:
    uVar23 = 0;
LAB_033232c0:
    bVar26 = true;
LAB_033232c4:
    plVar9 = (long *)(lVar8 + ((long)iVar19 + -1) * 0x10);
    if ((uVar24 & 1) != 0) {
      piVar22 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar6) {
          *piVar22 = *piVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar10 = plVar9 + 1;
    iVar19 = (int)*plVar10;
    lVar8 = (long)iVar19;
    if ((int)(*(uint *)((long)plVar9 + 0xc) & 0x7fffffff) <= iVar19) {
      FUN_0332795c(plVar9,lVar8 + 1);
      iVar19 = (int)*plVar10;
    }
    puVar14 = (undefined8 *)(*plVar9 + (long)iVar19 * 0x30);
    *puVar14 = uVar20;
    puVar14[1] = puVar11;
    puVar14[2] = uVar23;
    puVar14[3] = piVar3;
    puVar14[4] = puVar11;
    puVar14[5] = uVar24;
    *(int *)plVar10 = (int)(lVar8 + 1);
    if (!bVar26) {
      plVar10 = (long *)(uVar23 & 0xfffffffffffffffe);
      plVar9 = plVar10 + 1;
      do {
        lVar8 = *plVar9;
        cVar5 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar26) {
          *(int *)plVar9 = (int)lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar8 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    uVar7 = FUN_03327f2c(plVar16,local_98);
    if (*(uint *)(lVar25 + 0x30) == uVar7) {
      iVar19 = uVar7 + 1;
      if ((int)(*(uint *)(lVar25 + 0x34) & 0x7fffffff) <= (int)uVar7) {
        FUN_03328020(plVar16,(long)iVar19);
        uVar7 = *(uint *)(lVar25 + 0x30);
      }
      puVar1 = (undefined4 *)(*(long *)(lVar25 + 0x28) + (long)(int)uVar7 * 8);
      *puVar1 = local_98[0];
      puVar1[1] = iVar21;
      *(int *)(lVar25 + 0x30) = iVar19;
    }
    else {
      *(int *)(*plVar16 + ((long)((ulong)uVar7 << 0x20) >> 0x1d) + 4) = iVar21;
    }
  }
  else {
    uVar20 = *param_1;
    uVar4 = param_1[1];
    lVar18 = (long)*(int *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(lVar8 + 4) * 8 + 4);
    lVar8 = *(long *)(lVar25 + 0x18);
    uVar23 = param_1[2];
    if ((uVar23 & 1) != 0) {
      piVar22 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar6) {
          *piVar22 = *piVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar16 = (long *)(lVar8 + lVar18 * 0x10);
    if ((uVar24 & 1) != 0) {
      piVar22 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar6) {
          *piVar22 = *piVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = plVar16 + 1;
    iVar21 = (int)*plVar9;
    lVar8 = (long)iVar21;
    if ((int)(*(uint *)((long)plVar16 + 0xc) & 0x7fffffff) <= iVar21) {
      FUN_0332795c(plVar16,lVar8 + 1);
      iVar21 = (int)*plVar9;
    }
    puVar14 = (undefined8 *)(*plVar16 + (long)iVar21 * 0x30);
    *puVar14 = uVar20;
    puVar14[1] = uVar4;
    puVar14[2] = uVar23;
    puVar14[3] = piVar3;
    puVar14[4] = puVar11;
    puVar14[5] = uVar24;
    *(int *)plVar9 = (int)(lVar8 + 1);
    lVar25 = *(long *)(lVar25 + 0x18);
    uVar20 = *param_1;
    if (!bVar26) {
      puVar12 = puVar11;
LAB_033230fc:
      uVar23 = *puVar12;
      if (((uint)uVar23 >> 2 & 1) == 0) goto code_r0x03323104;
      uVar23 = puVar12[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
      if ((uVar23 & 1) != 0) {
        piVar22 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
        do {
          cVar5 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar26) {
            *piVar22 = *piVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          cVar5 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar26) {
            *piVar22 = *piVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar26 = false;
        goto LAB_03323114;
      }
      goto LAB_03323110;
    }
LAB_0332310c:
    uVar23 = 0;
LAB_03323110:
    bVar26 = true;
LAB_03323114:
    plVar16 = (long *)(lVar25 + lVar18 * 0x10);
    if ((uVar24 & 1) != 0) {
      piVar22 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar6) {
          *piVar22 = *piVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = plVar16 + 1;
    iVar21 = (int)*plVar9;
    lVar25 = (long)iVar21;
    if ((int)(*(uint *)((long)plVar16 + 0xc) & 0x7fffffff) <= iVar21) {
      FUN_0332795c(plVar16,lVar25 + 1);
      iVar21 = (int)*plVar9;
    }
    puVar14 = (undefined8 *)(*plVar16 + (long)iVar21 * 0x30);
    *puVar14 = uVar20;
    puVar14[1] = puVar11;
    puVar14[2] = uVar23;
    puVar14[3] = piVar3;
    puVar14[4] = puVar11;
    puVar14[5] = uVar24;
    *(int *)plVar9 = (int)(lVar25 + 1);
    if (!bVar26) {
      plVar9 = (long *)(uVar23 & 0xfffffffffffffffe);
      plVar16 = plVar9 + 1;
      do {
        lVar25 = *plVar16;
        cVar5 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar26) {
          *(int *)plVar16 = (int)lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar25 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  if ((uVar24 & 1) != 0) {
    plVar9 = (long *)(uVar24 & 0xfffffffffffffffe);
    plVar16 = plVar9 + 1;
    do {
      lVar25 = *plVar16;
      cVar5 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar26) {
        *(int *)plVar16 = (int)lVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar25 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x03323404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 8))();
      return;
    }
  }
  return;
code_r0x033232b4:
  puVar12 = (ulong *)puVar12[1];
  if (puVar12 == (ulong *)0x0) goto LAB_033232bc;
  goto LAB_033232ac;
code_r0x03323104:
  puVar12 = (ulong *)puVar12[1];
  if (puVar12 == (ulong *)0x0) goto LAB_0332310c;
  goto LAB_033230fc;
}


