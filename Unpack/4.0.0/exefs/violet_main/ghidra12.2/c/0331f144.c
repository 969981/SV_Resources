/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0331f144; name: FUN_0331f144
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0331f144(undefined8 *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  double *******pppppppdVar3;
  int *piVar4;
  undefined *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  ushort uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  double *******pppppppdVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined2 uVar23;
  short sVar24;
  uint uVar25;
  uint uVar26;
  ulong *puVar27;
  byte *pbVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  uint uVar34;
  ulong *puVar35;
  ulong *puVar36;
  long lVar37;
  ulong uVar38;
  byte *pbVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  undefined8 *puVar46;
  double *******pppppppdVar47;
  double *******pppppppdVar48;
  uint uVar49;
  long lVar50;
  double *******pppppppdVar51;
  double *******pppppppdVar52;
  double *******pppppppdVar53;
  ulong uVar54;
  ulong uVar55;
  uint uVar56;
  short sVar57;
  int iVar58;
  long *plVar59;
  undefined1 *puVar60;
  undefined4 uVar61;
  long lVar62;
  long lVar63;
  long *plVar64;
  ulong uVar65;
  bool bVar66;
  uint uVar67;
  ulong uVar68;
  long lVar69;
  undefined8 uVar70;
  long *plVar71;
  int iVar72;
  byte *pbVar73;
  float fVar74;
  double ******ppppppdVar75;
  double ******local_2f48;
  ulong *puStack_2f40;
  ulong local_2f38;
  undefined8 auStack_2f30 [20];
  code *local_2e90;
  undefined *local_2e80;
  undefined *local_2e78;
  undefined1 *local_2e40;
  undefined *local_2e00;
  code *local_2df0;
  undefined *local_2de8;
  undefined *local_2db8;
  undefined *local_2da8;
  code *local_2da0;
  undefined8 local_2ca8;
  byte *local_2ca0;
  ulong local_2c98;
  undefined1 *local_2c90;
  undefined8 local_2c88;
  undefined1 local_2c80 [3072];
  double *******local_2080;
  ulong *local_2078;
  long *local_2070;
  ulong local_2068;
  double *******local_80;
  ulong *local_78;
  long *local_70;
  
  puVar27 = (ulong *)param_2[1];
  puVar35 = puVar27;
  if ((*puVar27 & 1) == 0) {
    do {
      puVar35 = (ulong *)puVar35[1];
    } while ((*puVar35 & 1) == 0);
  }
  puVar36 = puVar27;
  if ((puVar35[2] & 0x1f) != 8) {
    puVar36 = (ulong *)0x0;
  }
  do {
    if ((*puVar36 & 1) != 0) {
      if ((puVar36 != (ulong *)0x0) && ((int)(puVar36[2] >> 8) != 0)) goto LAB_0331f1fc;
      break;
    }
    puVar36 = (ulong *)puVar36[1];
  } while (puVar36 != (ulong *)0x0);
  iVar19 = *(int *)*param_2;
  if (-1 < iVar19) {
    puVar35 = puVar27;
    if ((*puVar27 & 1) == 0) {
      do {
        puVar35 = (ulong *)puVar35[1];
      } while ((*puVar35 & 1) == 0);
    }
    if ((puVar35[2] & 0x1f) != 8) {
      puVar27 = (ulong *)0x0;
    }
    do {
      if ((*puVar27 & 1) != 0) {
        if ((puVar27 != (ulong *)0x0) && ((int)(puVar27[2] >> 8) != 0)) {
          iVar19 = -1;
        }
        break;
      }
      puVar27 = (ulong *)puVar27[1];
    } while (puVar27 != (ulong *)0x0);
    *(int *)*param_1 = iVar19;
    return;
  }
LAB_0331f1fc:
  pbVar73 = (byte *)param_1[1];
  if (pbVar73 != (byte *)0x0) {
    pbVar28 = pbVar73;
    if ((*pbVar73 & 1) == 0) {
      do {
        pbVar28 = *(byte **)(pbVar28 + 8);
      } while ((*pbVar28 & 1) == 0);
    }
    if ((*(ulong *)(pbVar28 + 0x10) & 0x1f) == 8) {
      uVar70 = *param_1;
      uVar68 = param_1[2];
      if ((uVar68 & 1) != 0) {
        piVar4 = (int *)((uVar68 & 0xfffffffffffffffe) + 8);
        do {
          cVar13 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar17) {
            *piVar4 = *piVar4 + 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        uVar68 = param_1[2];
      }
      goto LAB_0331f2cc;
    }
    pbVar73 = (byte *)0x0;
  }
  uVar68 = 0;
  uVar70 = 0;
LAB_0331f2cc:
  local_2068 = 0;
  plVar71 = (long *)(uVar68 & 0xfffffffffffffffe);
  local_2070 = (long *)0x0;
  local_2078 = (ulong *)0x0;
  local_2080 = (double *******)0x0;
  (**(code **)(*plVar71 + 0x50))(plVar71,uVar70,pbVar73,&local_2080);
  iVar19 = (int)local_2070;
  if ((local_2068 & 1) != 0) {
    plVar20 = (long *)(local_2068 & 0xfffffffffffffffe);
    plVar22 = plVar20 + 1;
    do {
      lVar29 = *plVar22;
      cVar13 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *(int *)plVar22 = (int)lVar29 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
      (**(code **)(*plVar20 + 8))();
    }
  }
  FUN_03323960(&local_2080,param_2);
  iVar9 = *(int *)(param_2 + 4);
  if (((ulong)local_2070 & 1) != 0) {
    plVar20 = (long *)((ulong)local_2070 & 0xfffffffffffffffe);
    plVar22 = plVar20 + 1;
    do {
      lVar29 = *plVar22;
      cVar13 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *(int *)plVar22 = (int)lVar29 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
      (**(code **)(*plVar20 + 8))();
    }
  }
  if (iVar19 != 0) {
    pbVar28 = pbVar73;
    do {
      if ((*pbVar28 & 1) != 0) {
        if ((pbVar28 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar28 + 0x10) >> 8) != 0))
        goto LAB_0331f43c;
        break;
      }
      pbVar28 = *(byte **)(pbVar28 + 8);
    } while (pbVar28 != (byte *)0x0);
    uVar21 = param_1[3];
    local_2ca8 = uVar70;
    local_2ca0 = pbVar73;
    local_2c98 = uVar68;
    if ((uVar68 & 1) == 0) {
      FUN_0332245c(uVar21,&local_2ca8);
    }
    else {
      plVar22 = plVar71 + 1;
      do {
        cVar13 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar17) {
          *(int *)plVar22 = (int)*plVar22 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      FUN_0332245c(uVar21,&local_2ca8);
      if ((uVar68 & 1) != 0) {
        plVar20 = (long *)(uVar68 & 0xfffffffffffffffe);
        plVar22 = plVar20 + 1;
        do {
          lVar29 = *plVar22;
          cVar13 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar17) {
            *(int *)plVar22 = (int)lVar29 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
          (**(code **)(*plVar20 + 8))();
        }
      }
    }
  }
LAB_0331f43c:
  (**(code **)(*plVar71 + 0x58))(plVar71,uVar70,pbVar73,iVar9);
  puVar27 = (ulong *)param_2[5];
  while( true ) {
    uVar25 = (uint)*puVar27;
    if ((uVar25 >> 0x14 & 1) != 0) break;
    if (((*puVar27 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
    goto LAB_0331f49c;
  }
  if (puVar27 != (ulong *)0x0) {
    uVar33 = CONCAT44(uVar25,uVar25) & 0xfffff000fffff;
    sVar57 = (short)puVar27[(ulong)(byte)(POPCOUNT((char)uVar33) + POPCOUNT((char)(uVar33 >> 8)) +
                                         POPCOUNT((char)(uVar33 >> 0x10))) + 2];
    goto LAB_0331f4a0;
  }
LAB_0331f49c:
  sVar57 = 0;
LAB_0331f4a0:
  local_2068 = 0;
  local_2070 = (long *)0x0;
  local_2078 = (ulong *)0x0;
  local_2080 = (double *******)0x0;
  (**(code **)(*plVar71 + 0x50))(plVar71,uVar70,pbVar73,&local_2080);
  puVar27 = local_2078;
  if ((local_2068 & 1) != 0) {
    plVar20 = (long *)(local_2068 & 0xfffffffffffffffe);
    plVar22 = plVar20 + 1;
    do {
      lVar29 = *plVar22;
      cVar13 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *(int *)plVar22 = (int)lVar29 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
      (**(code **)(*plVar20 + 8))();
    }
  }
  while( true ) {
    uVar25 = (uint)*puVar27;
    if ((uVar25 >> 0x14 & 1) != 0) break;
    if (((*puVar27 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
    goto LAB_0331f54c;
  }
  if (puVar27 != (ulong *)0x0) {
    uVar33 = CONCAT44(uVar25,uVar25) & 0xfffff000fffff;
    sVar24 = (short)puVar27[(ulong)(byte)(POPCOUNT((char)uVar33) + POPCOUNT((char)(uVar33 >> 8)) +
                                         POPCOUNT((char)(uVar33 >> 0x10))) + 2];
    goto LAB_0331f550;
  }
LAB_0331f54c:
  sVar24 = 0;
LAB_0331f550:
  if (sVar57 == sVar24) {
    local_2068 = 0;
    local_2070 = (long *)0x0;
    local_2078 = (ulong *)0x0;
    local_2080 = (double *******)0x0;
    (**(code **)(*plVar71 + 0x50))(plVar71,uVar70,pbVar73,&local_2080);
    pppppppdVar16 = local_2080;
    if ((local_2068 & 1) != 0) {
      plVar20 = (long *)(local_2068 & 0xfffffffffffffffe);
      plVar22 = plVar20 + 1;
      do {
        lVar29 = *plVar22;
        cVar13 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar17) {
          *(int *)plVar22 = (int)lVar29 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
        (**(code **)(*plVar20 + 8))();
      }
    }
    puVar27 = (ulong *)param_2[5];
    do {
      uVar25 = (uint)*puVar27;
      if ((uVar25 >> 0x14 & 1) != 0) {
        uVar26 = 0;
        if (puVar27 != (ulong *)0x0) {
          uVar25 = uVar25 & 0xfffff;
          uVar26 = (uint)(ushort)puVar27[(ulong)(byte)(POPCOUNT((char)uVar25) +
                                                       POPCOUNT((char)(uVar25 >> 8)) +
                                                      POPCOUNT((char)(uVar25 >> 0x10))) + 2];
        }
        goto LAB_03321ef8;
      }
      if ((*puVar27 & 1) != 0) {
        uVar26 = 0;
        goto LAB_03321ef8;
      }
      puVar27 = (ulong *)puVar27[1];
    } while (puVar27 != (ulong *)0x0);
    uVar26 = 0;
LAB_03321ef8:
    memcpy(pppppppdVar16,(void *)param_2[3],(long)(int)(uVar26 * iVar9));
  }
  else {
    lVar29 = param_1[3];
    lVar62 = param_2[5];
    local_2068 = 0;
    local_2070 = (long *)0x0;
    local_2078 = (ulong *)0x0;
    local_2080 = (double *******)0x0;
    (**(code **)(*plVar71 + 0x50))(plVar71,uVar70,pbVar73,&local_2080);
    puVar27 = local_2078;
    if ((local_2068 & 1) != 0) {
      plVar20 = (long *)(local_2068 & 0xfffffffffffffffe);
      plVar22 = plVar20 + 1;
      do {
        lVar37 = *plVar22;
        cVar13 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar17) {
          *(int *)plVar22 = (int)lVar37 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((plVar20 != (long *)0x0) && ((int)lVar37 == 1)) {
        (**(code **)(*plVar20 + 8))();
      }
    }
    if ((ulong *)lVar62 == puVar27) {
      lVar29 = FUN_031fa694(lVar29 + 0x2b8,lVar62);
    }
    else {
      lVar29 = FUN_031fa91c(lVar29 + 0x2b8,lVar62,puVar27);
    }
    memset(auStack_2f30,0,0x288);
    local_2e90 = FUN_03225a30;
    local_2e80 = PTR_LAB_047e5f00;
    local_2df0 = FUN_032259b8;
    local_2e00 = PTR_LAB_047e5f08;
    local_2e40 = &LAB_03225af8;
    local_2e78 = PTR_LAB_047e5f10;
    local_2db8 = PTR_FUN_047e5f18;
    local_2de8 = PTR_LAB_047e5f28;
    local_2da0 = FUN_03225a94;
    local_2da8 = PTR_FUN_047e5f20;
    local_2068 = 0;
    local_2070 = (long *)0x0;
    local_2078 = (ulong *)0x0;
    local_2080 = (double *******)0x0;
    (**(code **)(*plVar71 + 0x50))(plVar71,uVar70,pbVar73,&local_2080);
    pppppppdVar16 = local_2080;
    if ((local_2068 & 1) != 0) {
      plVar20 = (long *)(local_2068 & 0xfffffffffffffffe);
      plVar22 = plVar20 + 1;
      do {
        lVar62 = *plVar22;
        cVar13 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar17) {
          *(int *)plVar22 = (int)lVar62 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
        (**(code **)(*plVar20 + 8))();
      }
    }
    local_2068 = 0;
    local_2070 = (long *)0x0;
    local_2078 = (ulong *)0x0;
    local_2080 = (double *******)0x0;
    (**(code **)(*plVar71 + 0x50))(plVar71,uVar70,pbVar73,&local_2080);
    if ((local_2068 & 1) != 0) {
      plVar20 = (long *)(local_2068 & 0xfffffffffffffffe);
      plVar22 = plVar20 + 1;
      do {
        lVar62 = *plVar22;
        cVar13 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar17) {
          *(int *)plVar22 = (int)lVar62 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((plVar20 != (long *)0x0) && ((int)lVar62 == 1)) {
        (**(code **)(*plVar20 + 8))();
      }
    }
    lVar62 = param_2[3];
    local_2068 = 0;
    local_2070 = (long *)0x0;
    local_2078 = (ulong *)0x0;
    local_2080 = (double *******)0x0;
    (**(code **)(*plVar71 + 0x50))(plVar71,uVar70,pbVar73,&local_2080);
    puVar27 = local_2078;
    if ((local_2068 & 1) != 0) {
      plVar20 = (long *)(local_2068 & 0xfffffffffffffffe);
      plVar22 = plVar20 + 1;
      do {
        lVar37 = *plVar22;
        cVar13 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar17) {
          *(int *)plVar22 = (int)lVar37 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((plVar20 != (long *)0x0) && ((int)lVar37 == 1)) {
        (**(code **)(*plVar20 + 8))();
      }
    }
    while( true ) {
      uVar25 = (uint)*puVar27;
      if ((uVar25 >> 0x14 & 1) != 0) break;
      if (((*puVar27 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
      goto LAB_0331f8d0;
    }
    if (puVar27 != (ulong *)0x0) {
      uVar25 = uVar25 & 0xfffff;
      uVar33 = (ulong)(ushort)puVar27[(ulong)(byte)(POPCOUNT((char)uVar25) +
                                                    POPCOUNT((char)(uVar25 >> 8)) +
                                                   POPCOUNT((char)(uVar25 >> 0x10))) + 2];
      goto LAB_0331f8d4;
    }
LAB_0331f8d0:
    uVar33 = 0;
LAB_0331f8d4:
    puVar27 = (ulong *)param_2[5];
    while( true ) {
      uVar25 = (uint)*puVar27;
      if ((uVar25 >> 0x14 & 1) != 0) break;
      if (((*puVar27 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
      goto LAB_0331f91c;
    }
    if (puVar27 != (ulong *)0x0) {
      uVar25 = uVar25 & 0xfffff;
      uVar42 = (ulong)(ushort)puVar27[(ulong)(byte)(POPCOUNT((char)uVar25) +
                                                    POPCOUNT((char)(uVar25 >> 8)) +
                                                   POPCOUNT((char)(uVar25 >> 0x10))) + 2];
      goto LAB_0331f920;
    }
LAB_0331f91c:
    uVar42 = 0;
LAB_0331f920:
    local_2c90 = local_2c80;
    local_2c88 = -0x7fffffc000000000;
    if (0 < iVar9) {
      lVar50 = uVar42 * 2;
      lVar37 = uVar33 * 2;
      iVar19 = 0;
      puVar5 = PTR_PTR_047d1a50 + 0x20;
      while( true ) {
        lVar43 = (long)iVar19;
        uVar26 = iVar9 - iVar19;
        uVar25 = uVar26;
        if (0x3ff < (int)uVar26) {
          uVar25 = 0x400;
        }
        iVar10 = *(int *)(lVar29 + 0x10);
        if (iVar10 != 0) break;
LAB_03321e54:
        iVar19 = uVar25 + iVar19;
        if (iVar9 <= iVar19) goto LAB_03321e70;
      }
      iVar72 = 0;
      uVar41 = (uint)uVar42;
      uVar67 = (uint)uVar33;
      uVar8 = uVar25;
      if ((int)uVar25 < 2) {
        uVar8 = 1;
      }
      pppppppdVar3 = (double *******)(local_2c80 + (long)(int)(uVar25 << 3) + 0xc00);
      uVar55 = (ulong)uVar25;
      uVar38 = uVar55 & 0xfffffffe;
      lVar44 = uVar33 * (lVar43 + 1);
      lVar30 = uVar33 * lVar43;
LAB_0331fa68:
      lVar63 = *(long *)(lVar29 + 8);
      lVar45 = lVar63 + (long)iVar72 * 0x38;
      if (0xc < *(byte *)(lVar45 + 8) - 1) goto switchD_03321ac8_caseD_3;
      uVar31 = (ulong)*(ushort *)(lVar45 + 0xc);
      pppppppdVar53 = (double *******)((long)pppppppdVar16 + uVar31 + lVar43 * uVar33);
      pppppppdVar47 = (double *******)(lVar62 + lVar43 * uVar42 + (ulong)*(ushort *)(lVar45 + 10));
      lVar69 = (long)iVar72;
      switch((uint)*(byte *)(lVar45 + 8)) {
      case 1:
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x20);
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
            uVar31 = *puVar35;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              plVar20 = (long *)puVar35[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              if (((ulong)plVar20 & 1) != 0) {
                piVar4 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar17) {
                    *piVar4 = *piVar4 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              goto LAB_0332039c;
            }
            puVar35 = (ulong *)puVar35[1];
          } while (puVar35 != (ulong *)0x0);
        }
        plVar20 = (long *)0x0;
LAB_0332039c:
        puVar35 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x18);
        puVar36 = puVar35;
        if ((*puVar35 & 1) == 0) {
          do {
            puVar36 = (ulong *)puVar36[1];
          } while ((*puVar36 & 1) == 0);
        }
        if ((puVar36[2] & 0x1f) != 2) {
          puVar35 = (ulong *)0x0;
        }
        if (puVar35 != (ulong *)0x0) {
          puVar36 = puVar35;
          do {
            uVar31 = *puVar36;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              plVar22 = (long *)puVar36[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              if (((ulong)plVar22 & 1) != 0) {
                piVar4 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar17) {
                    *piVar4 = *piVar4 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              goto LAB_03320850;
            }
            puVar36 = (ulong *)puVar36[1];
          } while (puVar36 != (ulong *)0x0);
        }
        plVar22 = (long *)0x0;
LAB_03320850:
        if ((int)uVar26 < 1) {
          bVar17 = true;
        }
        else {
          uVar34 = 0;
          do {
            local_2080 = (double *******)((ulong)local_2080 & 0xffffffffffffff00);
            plVar59 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
            (**(code **)(*plVar59 + 0x38))(plVar59,pppppppdVar47,puVar35,&local_2080);
            plVar64 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
            iVar18 = (**(code **)(*plVar64 + 0x30))
                               (plVar64,pppppppdVar53,puVar27,(ulong)local_2080 & 0xff);
            if (iVar18 < 0) {
              bVar17 = false;
              goto LAB_03320e74;
            }
            if (((ulong)plVar20 & 1) != 0) {
              plVar20 = plVar64 + 1;
              do {
                lVar63 = *plVar20;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar17) {
                  *(int *)plVar20 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar64 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar64 + 8))(plVar64);
              }
            }
            pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
            pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
            if (((ulong)plVar22 & 1) != 0) {
              plVar22 = plVar59 + 1;
              do {
                lVar63 = *plVar22;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar17) {
                  *(int *)plVar22 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar59 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar59 + 8))(plVar59);
              }
            }
            uVar34 = uVar34 + 1;
            plVar22 = plVar59;
            plVar20 = plVar64;
          } while (uVar34 != uVar8);
          bVar17 = true;
        }
LAB_03320e74:
        if (((ulong)plVar22 & 1) != 0) {
          plVar22 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
          plVar59 = plVar22 + 1;
          do {
            lVar63 = *plVar59;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar59,0x10);
            if (bVar66) {
              *(int *)plVar59 = (int)lVar63 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar22 != (long *)0x0) && ((int)lVar63 == 1)) {
            (**(code **)(*plVar22 + 8))();
          }
        }
        if (((ulong)plVar20 & 1) != 0) {
          plVar20 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            iVar18 = (int)*plVar22;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar66) {
              *(int *)plVar22 = iVar18 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
LAB_03321200:
          if ((plVar20 != (long *)0x0) && (iVar18 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        goto LAB_03321218;
      case 2:
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x20);
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
            uVar31 = *puVar35;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              plVar20 = (long *)puVar35[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              if (((ulong)plVar20 & 1) != 0) {
                piVar4 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar17) {
                    *piVar4 = *piVar4 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              goto LAB_0332042c;
            }
            puVar35 = (ulong *)puVar35[1];
          } while (puVar35 != (ulong *)0x0);
        }
        plVar20 = (long *)0x0;
LAB_0332042c:
        puVar35 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x18);
        puVar36 = puVar35;
        if ((*puVar35 & 1) == 0) {
          do {
            puVar36 = (ulong *)puVar36[1];
          } while ((*puVar36 & 1) == 0);
        }
        if ((puVar36[2] & 0x1f) != 4) {
          puVar35 = (ulong *)0x0;
        }
        if (puVar35 != (ulong *)0x0) {
          puVar36 = puVar35;
          do {
            uVar31 = *puVar36;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              plVar22 = (long *)puVar36[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              if (((ulong)plVar22 & 1) != 0) {
                piVar4 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar17) {
                    *piVar4 = *piVar4 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              goto LAB_03320994;
            }
            puVar36 = (ulong *)puVar36[1];
          } while (puVar36 != (ulong *)0x0);
        }
        plVar22 = (long *)0x0;
LAB_03320994:
        if ((int)uVar26 < 1) {
          bVar17 = true;
        }
        else {
          uVar34 = 0;
          do {
            local_2080 = (double *******)0x0;
            local_2078 = (ulong *)((ulong)local_2078 & 0xffffffffffffff00);
            plVar59 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
            (**(code **)(*plVar59 + 0x38))(plVar59,pppppppdVar47,puVar35,&local_2080);
            plVar64 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
            iVar18 = (**(code **)(*plVar64 + 0x30))(plVar64,pppppppdVar53,puVar27,&local_2080);
            if (iVar18 < 0) {
              bVar17 = false;
              goto LAB_03320ed4;
            }
            if (((ulong)plVar20 & 1) != 0) {
              plVar20 = plVar64 + 1;
              do {
                lVar63 = *plVar20;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar17) {
                  *(int *)plVar20 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar64 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar64 + 8))(plVar64);
              }
            }
            pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
            pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
            if (((ulong)plVar22 & 1) != 0) {
              plVar22 = plVar59 + 1;
              do {
                lVar63 = *plVar22;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar17) {
                  *(int *)plVar22 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar59 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar59 + 8))(plVar59);
              }
            }
            uVar34 = uVar34 + 1;
            plVar22 = plVar59;
            plVar20 = plVar64;
          } while (uVar34 != uVar8);
          bVar17 = true;
        }
LAB_03320ed4:
        if (((ulong)plVar22 & 1) != 0) {
          plVar22 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
          plVar59 = plVar22 + 1;
          do {
            lVar63 = *plVar59;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar59,0x10);
            if (bVar66) {
              *(int *)plVar59 = (int)lVar63 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar22 != (long *)0x0) && ((int)lVar63 == 1)) {
            (**(code **)(*plVar22 + 8))();
          }
        }
        if (((ulong)plVar20 & 1) != 0) {
          plVar20 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            iVar18 = (int)*plVar22;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar66) {
              *(int *)plVar22 = iVar18 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          goto LAB_03321200;
        }
        goto LAB_03321218;
      case 3:
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x20);
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
            uVar31 = *puVar35;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              plVar20 = (long *)puVar35[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              if (((ulong)plVar20 & 1) != 0) {
                piVar4 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar17) {
                    *piVar4 = *piVar4 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              goto LAB_033204bc;
            }
            puVar35 = (ulong *)puVar35[1];
          } while (puVar35 != (ulong *)0x0);
        }
        plVar20 = (long *)0x0;
LAB_033204bc:
        puVar35 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x18);
        puVar36 = puVar35;
        if ((*puVar35 & 1) == 0) {
          do {
            puVar36 = (ulong *)puVar36[1];
          } while ((*puVar36 & 1) == 0);
        }
        if ((puVar36[2] & 0x1f) != 5) {
          puVar35 = (ulong *)0x0;
        }
        if (puVar35 != (ulong *)0x0) {
          puVar36 = puVar35;
          do {
            uVar31 = *puVar36;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              plVar22 = (long *)puVar36[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              if (((ulong)plVar22 & 1) != 0) {
                piVar4 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar17) {
                    *piVar4 = *piVar4 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              goto LAB_03320aec;
            }
            puVar36 = (ulong *)puVar36[1];
          } while (puVar36 != (ulong *)0x0);
        }
        plVar22 = (long *)0x0;
LAB_03320aec:
        if ((int)uVar26 < 1) {
          bVar17 = true;
        }
        else {
          uVar34 = 0;
          do {
            local_2080 = (double *******)0x0;
            plVar59 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
            (**(code **)(*plVar59 + 0x38))(plVar59,pppppppdVar47,puVar35,&local_2080);
            plVar64 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
            iVar18 = (**(code **)(*plVar64 + 0x30))(local_2080,plVar64,pppppppdVar53,puVar27);
            if (iVar18 < 0) {
              bVar17 = false;
              goto LAB_03320f34;
            }
            if (((ulong)plVar20 & 1) != 0) {
              plVar20 = plVar64 + 1;
              do {
                lVar63 = *plVar20;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar17) {
                  *(int *)plVar20 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar64 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar64 + 8))(plVar64);
              }
            }
            pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
            pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
            if (((ulong)plVar22 & 1) != 0) {
              plVar22 = plVar59 + 1;
              do {
                lVar63 = *plVar22;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar17) {
                  *(int *)plVar22 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar59 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar59 + 8))(plVar59);
              }
            }
            uVar34 = uVar34 + 1;
            plVar22 = plVar59;
            plVar20 = plVar64;
          } while (uVar34 != uVar8);
          bVar17 = true;
        }
LAB_03320f34:
        if (((ulong)plVar22 & 1) != 0) {
          plVar22 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
          plVar59 = plVar22 + 1;
          do {
            lVar63 = *plVar59;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar59,0x10);
            if (bVar66) {
              *(int *)plVar59 = (int)lVar63 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar22 != (long *)0x0) && ((int)lVar63 == 1)) {
            (**(code **)(*plVar22 + 8))();
          }
        }
        if (((ulong)plVar20 & 1) != 0) {
          plVar20 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            iVar18 = (int)*plVar22;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar66) {
              *(int *)plVar22 = iVar18 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          goto LAB_03321200;
        }
        goto LAB_03321218;
      case 4:
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x20);
        uVar33 = *puVar27;
        uVar25 = (uint)uVar33;
        puVar35 = puVar27;
        if ((uVar33 & 1) == 0) {
          do {
            puVar35 = (ulong *)puVar35[1];
          } while ((*puVar35 & 1) == 0);
        }
        uVar42 = 0;
        bVar17 = true;
        if ((puVar27 != (ulong *)0x0) && ((puVar35[2] & 0x1f) == 6)) {
          while ((uVar25 >> 2 & 1) == 0) {
            puVar27 = (ulong *)puVar27[1];
            if (puVar27 == (ulong *)0x0) {
              uVar42 = 0;
              goto LAB_03321fa0;
            }
            uVar33 = *puVar27;
            uVar25 = (uint)uVar33;
          }
          uVar42 = puVar27[(uVar33 >> 1 & 1) + (uVar33 & 1) + 2];
          if ((uVar42 & 1) != 0) {
            piVar4 = (int *)((uVar42 & 0xfffffffffffffffe) + 8);
            do {
              cVar13 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar17) {
                *piVar4 = *piVar4 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            bVar17 = false;
            goto LAB_03321fa4;
          }
LAB_03321fa0:
          bVar17 = true;
        }
LAB_03321fa4:
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x18);
        uVar33 = *puVar27;
        uVar25 = (uint)uVar33;
        puVar35 = puVar27;
        if ((uVar33 & 1) == 0) {
          do {
            puVar35 = (ulong *)puVar35[1];
          } while ((*puVar35 & 1) == 0);
        }
        uVar38 = 0;
        bVar66 = true;
        if ((puVar27 != (ulong *)0x0) && ((puVar35[2] & 0x1f) == 6)) {
          while ((uVar25 >> 2 & 1) == 0) {
            puVar27 = (ulong *)puVar27[1];
            if (puVar27 == (ulong *)0x0) {
              uVar38 = 0;
              goto LAB_03322038;
            }
            uVar33 = *puVar27;
            uVar25 = (uint)uVar33;
          }
          uVar38 = puVar27[(uVar33 >> 1 & 1) + (uVar33 & 1) + 2];
          if ((uVar38 & 1) != 0) {
            piVar4 = (int *)((uVar38 & 0xfffffffffffffffe) + 8);
            do {
              cVar13 = '\x01';
              bVar66 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar66) {
                *piVar4 = *piVar4 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            bVar66 = false;
            goto LAB_0332203c;
          }
LAB_03322038:
          bVar66 = true;
        }
LAB_0332203c:
        uVar33 = FUN_0220e630(&DAT_047ac760,"Not implemented");
        if ((uVar33 & 1) != 0) {
          CallSupervisor(0x26);
        }
        if (!bVar66) {
          plVar20 = (long *)(uVar38 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            lVar29 = *plVar22;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar66) {
              *(int *)plVar22 = (int)lVar29 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        if (!bVar17) {
          plVar20 = (long *)(uVar42 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            lVar29 = *plVar22;
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar17) {
              *(int *)plVar22 = (int)lVar29 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        goto LAB_033220c0;
      case 5:
        if ((int)(local_2c88._4_4_ & 0x7fffffff) < (int)((int)local_2c88 + uVar25)) {
          FUN_03218528(&local_2c90,puVar5);
        }
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x20);
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
            uVar31 = *puVar35;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              plVar20 = (long *)puVar35[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              if (((ulong)plVar20 & 1) != 0) {
                piVar4 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar17) {
                    *piVar4 = *piVar4 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              goto LAB_0332054c;
            }
            puVar35 = (ulong *)puVar35[1];
          } while (puVar35 != (ulong *)0x0);
        }
        plVar20 = (long *)0x0;
LAB_0332054c:
        puVar35 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x18);
        puVar36 = puVar35;
        if ((*puVar35 & 1) == 0) {
          do {
            puVar36 = (ulong *)puVar36[1];
          } while ((*puVar36 & 1) == 0);
        }
        if ((puVar36[2] & 0x1f) != 3) {
          puVar35 = (ulong *)0x0;
        }
        if (puVar35 != (ulong *)0x0) {
          puVar36 = puVar35;
LAB_03320590:
          uVar31 = *puVar36;
          if (((uint)uVar31 >> 2 & 1) == 0) goto code_r0x03320598;
          plVar22 = (long *)puVar36[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
          if (((ulong)plVar22 & 1) != 0) {
            plVar64 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
            plVar59 = plVar64 + 1;
            do {
              cVar13 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar59,0x10);
              if (bVar17) {
                *(int *)plVar59 = (int)*plVar59 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if ((int)uVar26 < 1) {
              do {
                lVar63 = *plVar59;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar59,0x10);
                if (bVar17) {
                  *(int *)plVar59 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar64 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar64 + 8))();
              }
              goto LAB_03320e34;
            }
            goto LAB_03320c34;
          }
          goto LAB_033205a8;
        }
LAB_033205a0:
        plVar22 = (long *)0x0;
LAB_033205a8:
        if ((int)uVar26 < 1) {
LAB_03320e34:
          if (((ulong)plVar20 & 1) != 0) {
            plVar20 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
            plVar22 = plVar20 + 1;
            do {
              iVar18 = (int)*plVar22;
              cVar13 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar17) {
                *(int *)plVar22 = iVar18 + -1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            goto LAB_03320e50;
          }
        }
        else {
LAB_03320c34:
          uVar34 = 0;
          do {
            if (((ulong)plVar20 & 1) != 0) {
              piVar4 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar17) {
                  *piVar4 = *piVar4 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            if (((ulong)plVar22 & 1) != 0) {
              piVar4 = (int *)(((ulong)plVar22 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar17) {
                  *piVar4 = *piVar4 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            lVar63 = (long)(int)local_2c88;
            if ((int)(local_2c88._4_4_ & 0x7fffffff) <= (int)local_2c88) {
              FUN_03218528(&local_2c90,PTR_PTR_047d1a50 + 0x20,lVar63 + 1);
            }
            puVar46 = (undefined8 *)(local_2c90 + (long)(int)local_2c88 * 0x30);
            *puVar46 = pppppppdVar53;
            puVar46[1] = puVar27;
            puVar46[2] = plVar20;
            if (((ulong)plVar20 & 1) != 0) {
              piVar4 = (int *)(((ulong)plVar20 & 0xfffffffffffffffe) + 8);
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar17) {
                  *piVar4 = *piVar4 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            *(double ********)(local_2c90 + (long)(int)local_2c88 * 0x30 + 0x18) = pppppppdVar47;
            *(ulong **)(local_2c90 + (long)(int)local_2c88 * 0x30 + 0x20) = puVar35;
            *(long **)(local_2c90 + (long)(int)local_2c88 * 0x30 + 0x28) = plVar22;
            uVar61 = (undefined4)(lVar63 + 1);
            if (((ulong)plVar22 & 1) == 0) {
              local_2c88 = CONCAT44(local_2c88._4_4_,uVar61);
            }
            else {
              plVar64 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
              plVar59 = plVar64 + 1;
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar59,0x10);
                if (bVar17) {
                  *(int *)plVar59 = (int)*plVar59 + 1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              local_2c88 = CONCAT44(local_2c88._4_4_,uVar61);
              do {
                lVar63 = *plVar59;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar59,0x10);
                if (bVar17) {
                  *(int *)plVar59 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar64 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar64 + 8))();
              }
            }
            plVar59 = (long *)((ulong)plVar20 & 0xfffffffffffffffe);
            if (((ulong)plVar20 & 1) != 0) {
              plVar20 = plVar59 + 1;
              do {
                lVar63 = *plVar20;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar17) {
                  *(int *)plVar20 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar59 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar59 + 8))(plVar59);
              }
              do {
                lVar63 = *plVar20;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar17) {
                  *(int *)plVar20 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar59 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar59 + 8))(plVar59);
              }
            }
            pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
            plVar64 = (long *)((ulong)plVar22 & 0xfffffffffffffffe);
            pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
            if (((ulong)plVar22 & 1) != 0) {
              plVar22 = plVar64 + 1;
              do {
                lVar63 = *plVar22;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar17) {
                  *(int *)plVar22 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar64 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar64 + 8))(plVar64);
              }
            }
            uVar34 = uVar34 + 1;
            plVar20 = plVar59;
            plVar22 = plVar64;
          } while (uVar34 != uVar8);
        }
        break;
      case 6:
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x20);
        if (puVar27 != (ulong *)0x0) {
          puVar35 = puVar27;
          do {
            uVar31 = *puVar35;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              uVar31 = puVar35[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              if ((uVar31 & 1) != 0) {
                piVar4 = (int *)((uVar31 & 0xfffffffffffffffe) + 8);
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar17) {
                    *piVar4 = *piVar4 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              goto LAB_033202e8;
            }
            puVar35 = (ulong *)puVar35[1];
          } while (puVar35 != (ulong *)0x0);
        }
        uVar31 = 0;
LAB_033202e8:
        puVar35 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x18);
        if (puVar35 != (ulong *)0x0) {
          puVar36 = puVar35;
          do {
            uVar54 = *puVar36;
            if (((uint)uVar54 >> 2 & 1) != 0) {
              uVar54 = puVar36[(uVar54 >> 1 & 1) + (uVar54 & 1) + 2];
              if ((uVar54 & 1) != 0) {
                piVar4 = (int *)((uVar54 & 0xfffffffffffffffe) + 8);
                do {
                  cVar13 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar17) {
                    *piVar4 = *piVar4 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              goto LAB_033205e8;
            }
            puVar36 = (ulong *)puVar36[1];
          } while (puVar36 != (ulong *)0x0);
        }
        uVar54 = 0;
LAB_033205e8:
        iVar18 = (**(code **)(lVar63 + lVar69 * 0x38 + 0x28))
                           (pppppppdVar53,puVar27,pppppppdVar47,puVar35,uVar25);
        if ((uVar54 & 1) != 0) {
          plVar20 = (long *)(uVar54 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            lVar63 = *plVar22;
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar17) {
              *(int *)plVar22 = (int)lVar63 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar63 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        if ((uVar31 & 1) != 0) {
          plVar20 = (long *)(uVar31 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            lVar63 = *plVar22;
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar17) {
              *(int *)plVar22 = (int)lVar63 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar63 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        if (iVar18 < 0) goto LAB_033220c0;
        break;
      case 7:
        pbVar28 = *(byte **)(lVar63 + lVar69 * 0x38 + 0x20);
        pbVar39 = pbVar28;
        if ((*pbVar28 & 1) == 0) {
          do {
            pbVar39 = *(byte **)(pbVar39 + 8);
          } while ((*pbVar39 & 1) == 0);
        }
        if ((*(ulong *)(pbVar39 + 0x10) & 0x1f) != 4) {
          pbVar28 = (byte *)0x0;
        }
        for (; (*pbVar28 & 1) == 0; pbVar28 = *(byte **)(pbVar28 + 8)) {
        }
        pbVar39 = *(byte **)(lVar63 + lVar69 * 0x38 + 0x18);
        uVar34 = *(uint *)(pbVar28 + 0x10);
        pbVar28 = pbVar39;
        if ((*pbVar39 & 1) == 0) {
          do {
            pbVar28 = *(byte **)(pbVar28 + 8);
          } while ((*pbVar28 & 1) == 0);
        }
        if ((*(ulong *)(pbVar28 + 0x10) & 0x1f) != 4) {
          pbVar39 = (byte *)0x0;
        }
        for (; (*pbVar39 & 1) == 0; pbVar39 = *(byte **)(pbVar39 + 8)) {
        }
        uVar56 = *(uint *)(pbVar39 + 0x10);
        uVar7 = (uVar34 >> 10) + 7 >> 3;
        uVar65 = (ulong)uVar7;
        uVar49 = (uVar56 >> 10) + 7;
        uVar14 = uVar7 - (uVar49 >> 3);
        uVar54 = (ulong)uVar14;
        uVar15 = (uVar34 ^ uVar56) >> 8 & 1;
        if ((int)uVar14 < 1) {
          pppppppdVar48 = (double *******)((long)pppppppdVar47 + (ulong)-uVar14);
          if ((uVar56 & 0x100) == 0) {
            pppppppdVar48 = pppppppdVar47;
          }
          if (uVar15 == 0) {
            if ((uVar7 == uVar67) && (uVar7 == uVar41)) goto LAB_03320008;
            if (uVar7 != 0 && 0 < (int)uVar26) {
              uVar34 = 0;
              do {
                if (uVar65 - 1 < 7) {
                  uVar31 = 0;
                }
                else {
                  uVar31 = 0;
                  do {
                    puVar32 = (undefined1 *)((long)pppppppdVar48 + uVar31);
                    puVar60 = (undefined1 *)((long)pppppppdVar53 + uVar31);
                    uVar31 = uVar31 + 8;
                    *puVar60 = *puVar32;
                    puVar60[1] = puVar32[1];
                    puVar60[2] = puVar32[2];
                    puVar60[3] = puVar32[3];
                    puVar60[4] = puVar32[4];
                    puVar60[5] = puVar32[5];
                    puVar60[6] = puVar32[6];
                    puVar60[7] = puVar32[7];
                  } while ((uVar65 & 0xffff8) != uVar31);
                }
                if ((uVar7 & 7) != 0) {
                  uVar54 = uVar65 & 7;
                  do {
                    uVar54 = uVar54 - 1;
                    *(undefined1 *)((long)pppppppdVar53 + uVar31) =
                         *(undefined1 *)((long)pppppppdVar48 + uVar31);
                    uVar31 = uVar31 + 1;
                  } while (uVar54 != 0);
                }
                uVar34 = uVar34 + 1;
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar42);
              } while (uVar34 != uVar25);
            }
          }
          else if (0 < (int)uVar26) {
            switch(uVar7) {
            case 1:
              if (uVar55 - 1 < 3) {
                uVar54 = 0;
              }
              else {
                uVar54 = 0;
                lVar63 = (long)pppppppdVar16 + uVar31;
                pppppppdVar53 = pppppppdVar48;
                do {
                  *(undefined1 *)(lVar30 + lVar63) = *(undefined1 *)pppppppdVar53;
                  uVar54 = uVar54 + 4;
                  *(undefined1 *)(lVar44 + lVar63) = *(undefined1 *)(uVar42 + (long)pppppppdVar53);
                  *(undefined1 *)(uVar33 * (lVar43 + 2) + lVar63) =
                       *(undefined1 *)(lVar50 + (long)pppppppdVar53);
                  puVar32 = (undefined1 *)(uVar42 * 3 + (long)pppppppdVar53);
                  pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar42 * 4);
                  *(undefined1 *)(uVar33 * (lVar43 + 3) + lVar63) = *puVar32;
                  lVar63 = lVar63 + uVar33 * 4;
                } while ((uVar55 & 0xfffffffc) != uVar54);
              }
              if ((uVar25 & 3) != 0) {
                pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar42 * uVar54);
                puVar32 = (undefined1 *)((long)pppppppdVar16 + uVar31 + uVar33 * (lVar43 + uVar54));
                uVar31 = uVar55 & 3;
                do {
                  *puVar32 = *(undefined1 *)pppppppdVar48;
                  uVar31 = uVar31 - 1;
                  puVar32 = puVar32 + uVar33;
                  pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar42);
                } while (uVar31 != 0);
              }
              break;
            case 2:
              uVar54 = 0;
              if (uVar55 != 1) {
                uVar54 = 0;
                lVar63 = (long)pppppppdVar16 + uVar31;
                pppppppdVar47 = pppppppdVar48;
                do {
                  *(ushort *)(lVar30 + lVar63) =
                       *(ushort *)pppppppdVar47 >> 8 | *(ushort *)pppppppdVar47 << 8;
                  uVar54 = uVar54 + 2;
                  puVar1 = (ushort *)(uVar42 + (long)pppppppdVar47);
                  pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar50);
                  *(ushort *)(lVar44 + lVar63) = *puVar1 >> 8 | *puVar1 << 8;
                  lVar63 = lVar63 + lVar37;
                } while (uVar38 != uVar54);
              }
              if ((uVar25 & 1) != 0) {
                uVar12 = *(ushort *)(uVar54 * uVar42 + (long)pppppppdVar48);
                *(ushort *)(uVar54 * uVar33 + (long)pppppppdVar53) = uVar12 >> 8 | uVar12 << 8;
              }
              break;
            case 4:
              uVar54 = 0;
              if (uVar55 != 1) {
                uVar54 = 0;
                lVar63 = (long)pppppppdVar16 + uVar31;
                pppppppdVar47 = pppppppdVar48;
                do {
                  uVar34 = (*(uint *)pppppppdVar47 & 0xff00ff00) >> 8 |
                           (*(uint *)pppppppdVar47 & 0xff00ff) << 8;
                  uVar54 = uVar54 + 2;
                  *(uint *)(lVar30 + lVar63) = uVar34 >> 0x10 | uVar34 << 0x10;
                  puVar2 = (uint *)(uVar42 + (long)pppppppdVar47);
                  pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar50);
                  uVar34 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
                  *(uint *)(lVar44 + lVar63) = uVar34 >> 0x10 | uVar34 << 0x10;
                  lVar63 = lVar63 + lVar37;
                } while (uVar38 != uVar54);
              }
              if ((uVar25 & 1) != 0) {
                uVar34 = *(uint *)(uVar54 * uVar42 + (long)pppppppdVar48);
                uVar34 = (uVar34 & 0xff00ff00) >> 8 | (uVar34 & 0xff00ff) << 8;
                *(uint *)(uVar54 * uVar33 + (long)pppppppdVar53) = uVar34 >> 0x10 | uVar34 << 0x10;
              }
              break;
            case 8:
              uVar54 = 0;
              if (uVar55 != 1) {
                uVar54 = 0;
                lVar63 = (long)pppppppdVar16 + uVar31;
                pppppppdVar47 = pppppppdVar48;
                do {
                  uVar31 = ((ulong)*pppppppdVar47 & 0xff00ff00ff00ff00) >> 8 |
                           ((ulong)*pppppppdVar47 & 0xff00ff00ff00ff) << 8;
                  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10
                  ;
                  uVar54 = uVar54 + 2;
                  *(ulong *)(lVar30 + lVar63) = uVar31 >> 0x20 | uVar31 << 0x20;
                  puVar27 = (ulong *)(uVar42 + (long)pppppppdVar47);
                  pppppppdVar47 = (double *******)((long)pppppppdVar47 + lVar50);
                  uVar31 = (*puVar27 & 0xff00ff00ff00ff00) >> 8 | (*puVar27 & 0xff00ff00ff00ff) << 8
                  ;
                  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10
                  ;
                  *(ulong *)(lVar44 + lVar63) = uVar31 >> 0x20 | uVar31 << 0x20;
                  lVar63 = lVar63 + lVar37;
                } while (uVar38 != uVar54);
              }
              if ((uVar25 & 1) != 0) {
                ppppppdVar75 = *(double *******)(uVar54 * uVar42 + (long)pppppppdVar48);
                uVar31 = ((ulong)ppppppdVar75 & 0xff00ff00ff00ff00) >> 8 |
                         ((ulong)ppppppdVar75 & 0xff00ff00ff00ff) << 8;
                uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
                *(double *******)(uVar54 * uVar33 + (long)pppppppdVar53) =
                     (double ******)(uVar31 >> 0x20 | uVar31 << 0x20);
              }
            }
          }
        }
        else {
          bVar17 = (uVar34 & 0x100) == 0;
          uVar31 = uVar54;
          if (bVar17) {
            uVar31 = 0;
          }
          iVar18 = 1;
          if (!bVar17) {
            iVar18 = -uVar14;
          }
          if (0 < (int)uVar26) {
            uVar49 = uVar49 >> 3;
            uVar65 = (ulong)uVar49;
            lVar63 = (long)(int)(uVar49 - bVar17);
            if (uVar15 == 0) {
              if (uVar49 == 0) {
                if (uVar25 != 1) {
                  iVar58 = -(uVar25 & 0xfffffffe);
                  do {
                    memcpy((void *)(uVar31 + (long)pppppppdVar53),pppppppdVar47,0);
                    if ((uVar56 >> 9 & 1) != 0) {
                      memset((char *)((long)pppppppdVar53 + lVar63) + iVar18,
                             (int)*(char *)((long)pppppppdVar53 + lVar63) >> 7,uVar54);
                    }
                    memcpy((void *)((long)pppppppdVar53 + uVar31 + uVar33),
                           (void *)((long)pppppppdVar47 + uVar42),0);
                    if ((uVar56 >> 9 & 1) != 0) {
                      pcVar6 = (char *)((long)pppppppdVar53 + lVar63 + uVar33);
                      memset(pcVar6 + iVar18,(int)*pcVar6 >> 7,uVar54);
                    }
                    pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33 * 2);
                    pppppppdVar47 = (double *******)((long)((long)pppppppdVar47 + uVar42) + uVar42);
                    iVar58 = iVar58 + 2;
                  } while (iVar58 != 0);
                }
                if ((uVar25 & 1) != 0) {
                  memcpy((void *)(uVar31 + (long)pppppppdVar53),pppppppdVar47,0);
                  goto joined_r0x03321958;
                }
              }
              else {
                uVar34 = 0;
                do {
                  if (uVar65 - 1 < 7) {
                    uVar40 = 0;
                  }
                  else {
                    uVar40 = 0;
                    do {
                      puVar32 = (undefined1 *)((long)pppppppdVar47 + uVar40 + 3);
                      puVar60 = (undefined1 *)((long)pppppppdVar53 + uVar40 + uVar31 + 3);
                      uVar40 = uVar40 + 8;
                      puVar60[-3] = puVar32[-3];
                      puVar60[-2] = puVar32[-2];
                      puVar60[-1] = puVar32[-1];
                      *puVar60 = *puVar32;
                      puVar60[1] = puVar32[1];
                      puVar60[2] = puVar32[2];
                      puVar60[3] = puVar32[3];
                      puVar60[4] = puVar32[4];
                    } while ((uVar65 & 0xffff8) != uVar40);
                  }
                  if ((uVar49 & 7) != 0) {
                    puVar32 = (undefined1 *)((long)pppppppdVar53 + uVar40 + uVar31);
                    puVar60 = (undefined1 *)((long)pppppppdVar47 + uVar40);
                    uVar40 = uVar65 & 7;
                    do {
                      uVar40 = uVar40 - 1;
                      *puVar32 = *puVar60;
                      puVar32 = puVar32 + 1;
                      puVar60 = puVar60 + 1;
                    } while (uVar40 != 0);
                  }
                  if ((uVar56 >> 9 & 1) != 0) {
                    memset((char *)((long)pppppppdVar53 + lVar63) + iVar18,
                           (int)*(char *)((long)pppppppdVar53 + lVar63) >> 7,uVar54);
                  }
                  pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
                  uVar34 = uVar34 + 1;
                  pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                } while (uVar34 != uVar25);
              }
            }
            else if (uVar49 == 1) {
              if (uVar25 != 1) {
                iVar58 = -(uVar25 & 0xfffffffe);
                do {
                  *(undefined1 *)(uVar31 + (long)pppppppdVar53) = *(undefined1 *)pppppppdVar47;
                  if ((uVar56 >> 9 & 1) != 0) {
                    memset((char *)((long)pppppppdVar53 + lVar63) + iVar18,
                           (int)*(char *)((long)pppppppdVar53 + lVar63) >> 7,uVar54);
                  }
                  *(undefined1 *)((long)pppppppdVar53 + uVar31 + uVar33) =
                       *(undefined1 *)((long)pppppppdVar47 + uVar42);
                  if ((uVar56 >> 9 & 1) != 0) {
                    pcVar6 = (char *)((long)pppppppdVar53 + lVar63 + uVar33);
                    memset(pcVar6 + iVar18,(int)*pcVar6 >> 7,uVar54);
                  }
                  pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33 * 2);
                  pppppppdVar47 =
                       (double *******)((undefined1 *)((long)pppppppdVar47 + uVar42) + uVar42);
                  iVar58 = iVar58 + 2;
                } while (iVar58 != 0);
              }
              if ((uVar25 & 1) != 0) {
                *(undefined1 *)(uVar31 + (long)pppppppdVar53) = *(undefined1 *)pppppppdVar47;
joined_r0x03321958:
                if ((uVar56 >> 9 & 1) != 0) {
                  memset((char *)((long)pppppppdVar53 + lVar63) + iVar18,
                         (int)*(char *)((long)pppppppdVar53 + lVar63) >> 7,uVar54);
                }
              }
            }
            else {
              uVar34 = uVar25;
              do {
                if (uVar49 == 2) {
                  *(ushort *)((long)pppppppdVar53 + uVar31) =
                       *(ushort *)pppppppdVar47 >> 8 | *(ushort *)pppppppdVar47 << 8;
                }
                else if (uVar49 == 4) {
                  uVar7 = (*(uint *)pppppppdVar47 & 0xff00ff00) >> 8 |
                          (*(uint *)pppppppdVar47 & 0xff00ff) << 8;
                  *(uint *)((long)pppppppdVar53 + uVar31) = uVar7 >> 0x10 | uVar7 << 0x10;
                }
                else if (uVar49 == 8) {
                  uVar65 = ((ulong)*pppppppdVar47 & 0xff00ff00ff00ff00) >> 8 |
                           ((ulong)*pppppppdVar47 & 0xff00ff00ff00ff) << 8;
                  uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10
                  ;
                  *(ulong *)((long)pppppppdVar53 + uVar31) = uVar65 >> 0x20 | uVar65 << 0x20;
                }
                if ((uVar56 >> 9 & 1) != 0) {
                  memset((char *)((long)pppppppdVar53 + lVar63) + iVar18,
                         (int)*(char *)((long)pppppppdVar53 + lVar63) >> 7,uVar54);
                }
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
                uVar34 = uVar34 - 1;
              } while (uVar34 != 0);
            }
          }
        }
        break;
      case 8:
        pbVar28 = *(byte **)(lVar63 + lVar69 * 0x38 + 0x20);
        pbVar39 = pbVar28;
        if ((*pbVar28 & 1) == 0) {
          do {
            pbVar39 = *(byte **)(pbVar39 + 8);
          } while ((*pbVar39 & 1) == 0);
        }
        if ((*(ulong *)(pbVar39 + 0x10) & 0x1f) != 5) {
          pbVar28 = (byte *)0x0;
        }
        for (; (*pbVar28 & 1) == 0; pbVar28 = *(byte **)(pbVar28 + 8)) {
        }
        pbVar39 = *(byte **)(lVar63 + lVar69 * 0x38 + 0x18);
        uVar34 = *(uint *)(pbVar28 + 0x10);
        pbVar28 = pbVar39;
        if ((*pbVar39 & 1) == 0) {
          do {
            pbVar28 = *(byte **)(pbVar28 + 8);
          } while ((*pbVar28 & 1) == 0);
        }
        if ((*(ulong *)(pbVar28 + 0x10) & 0x1f) != 5) {
          pbVar39 = (byte *)0x0;
        }
        for (; (*pbVar39 & 1) == 0; pbVar39 = *(byte **)(pbVar39 + 8)) {
        }
        uVar49 = *(uint *)(pbVar39 + 0x10);
        uVar56 = uVar41;
        pppppppdVar48 = pppppppdVar47;
        if ((uVar49 & 0x100) != 0) {
          uVar56 = 8;
          pppppppdVar48 = (double *******)&local_2080;
        }
        uVar31 = (ulong)uVar56;
        if ((uVar49 >> 8 & 1) != 0) {
          switch((uVar49 >> 10 & 1) + (uVar49 >> 0xb & 0x1f) + (uVar49 >> 0x10 & 0xff) + 7 >> 3) {
          case 1:
            if (&local_2080 < pppppppdVar3) {
              pppppppdVar52 = (double *******)&local_2080;
              do {
                uVar11 = *(undefined1 *)pppppppdVar47;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
                pppppppdVar51 = pppppppdVar52 + 1;
                *(undefined1 *)pppppppdVar52 = uVar11;
                pppppppdVar52 = pppppppdVar51;
              } while (pppppppdVar51 < pppppppdVar3);
            }
            break;
          case 2:
            if (&local_2080 < pppppppdVar3) {
              pppppppdVar52 = (double *******)&local_2080;
              do {
                uVar12 = *(ushort *)pppppppdVar47;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
                pppppppdVar51 = pppppppdVar52 + 1;
                *(ushort *)pppppppdVar52 = uVar12 >> 8 | uVar12 << 8;
                pppppppdVar52 = pppppppdVar51;
              } while (pppppppdVar51 < pppppppdVar3);
            }
            break;
          case 4:
            if (&local_2080 < pppppppdVar3) {
              pppppppdVar52 = (double *******)&local_2080;
              do {
                uVar56 = *(uint *)pppppppdVar47;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
                uVar56 = (uVar56 & 0xff00ff00) >> 8 | (uVar56 & 0xff00ff) << 8;
                pppppppdVar51 = pppppppdVar52 + 1;
                *(uint *)pppppppdVar52 = uVar56 >> 0x10 | uVar56 << 0x10;
                pppppppdVar52 = pppppppdVar51;
              } while (pppppppdVar51 < pppppppdVar3);
            }
            break;
          case 8:
            if (&local_2080 < pppppppdVar3) {
              pppppppdVar52 = (double *******)&local_2080;
              do {
                ppppppdVar75 = *pppppppdVar47;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
                uVar54 = ((ulong)ppppppdVar75 & 0xff00ff00ff00ff00) >> 8 |
                         ((ulong)ppppppdVar75 & 0xff00ff00ff00ff) << 8;
                uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 | (uVar54 & 0xffff0000ffff) << 0x10;
                pppppppdVar51 = pppppppdVar52 + 1;
                *pppppppdVar52 = (double ******)(uVar54 >> 0x20 | uVar54 << 0x20);
                pppppppdVar52 = pppppppdVar51;
              } while (pppppppdVar51 < pppppppdVar3);
            }
          }
          uVar49 = uVar49 & 0xfffffeff;
        }
        uVar56 = uVar67;
        pppppppdVar47 = pppppppdVar53;
        if ((uVar34 & 0x100) != 0) {
          uVar56 = 8;
          pppppppdVar47 = (double *******)&local_2080;
        }
        uVar54 = (ulong)uVar56;
        uVar7 = uVar34 & 0xfffffeff;
        if (uVar49 == 0x345e05) {
          if (uVar7 == 0x345e05) {
            pppppppdVar52 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar56 * uVar25));
            for (; pppppppdVar47 < pppppppdVar52;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar54)) {
              *pppppppdVar47 = *pppppppdVar48;
              pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar31);
            }
          }
          else if (uVar7 == 0x174605) {
            pppppppdVar52 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar56 * uVar25));
            for (; pppppppdVar47 < pppppppdVar52;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar54)) {
              ppppppdVar75 = *pppppppdVar48;
              pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar31);
              *(float *)pppppppdVar47 = (float)(double)ppppppdVar75;
            }
          }
          else if (uVar7 == 0x74605) {
            pppppppdVar52 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar56 * uVar25));
            for (; pppppppdVar47 < pppppppdVar52;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar54)) {
              ppppppdVar75 = *pppppppdVar48;
              pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar31);
              *(short *)pppppppdVar47 =
                   (short)((uint)((float)(double)ppppppdVar75 * 1.0039062) >> 0x10);
            }
          }
        }
        else if (uVar49 == 0x174605) {
          if (uVar7 == 0x345e05) {
            pppppppdVar52 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar56 * uVar25));
            for (; pppppppdVar47 < pppppppdVar52;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar54)) {
              fVar74 = *(float *)pppppppdVar48;
              pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar31);
              *pppppppdVar47 = (double ******)(double)fVar74;
            }
          }
          else if (uVar7 == 0x174605) {
            pppppppdVar52 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar56 * uVar25));
            for (; pppppppdVar47 < pppppppdVar52;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar54)) {
              *(uint *)pppppppdVar47 = *(uint *)pppppppdVar48;
              pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar31);
            }
          }
          else if (uVar7 == 0x74605) {
            pppppppdVar52 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar56 * uVar25));
            for (; pppppppdVar47 < pppppppdVar52;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar54)) {
              fVar74 = *(float *)pppppppdVar48;
              pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar31);
              *(short *)pppppppdVar47 = (short)((uint)(fVar74 * 1.0039062) >> 0x10);
            }
          }
        }
        else if (uVar49 == 0x74605) {
          if (uVar7 == 0x345e05) {
            pppppppdVar52 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar56 * uVar25));
            for (; pppppppdVar47 < pppppppdVar52;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar54)) {
              uVar12 = *(ushort *)pppppppdVar48;
              pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar31);
              *pppppppdVar47 = (double ******)(double)(float)((uint)uVar12 << 0x10);
            }
          }
          else if (uVar7 == 0x174605) {
            pppppppdVar52 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar56 * uVar25));
            for (; pppppppdVar47 < pppppppdVar52;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar54)) {
              uVar12 = *(ushort *)pppppppdVar48;
              pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar31);
              *(uint *)pppppppdVar47 = (uint)uVar12 << 0x10;
            }
          }
          else if (uVar7 == 0x74605) {
            pppppppdVar52 = (double *******)((long)pppppppdVar47 + (long)(int)(uVar56 * uVar25));
            for (; pppppppdVar47 < pppppppdVar52;
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar54)) {
              *(undefined2 *)pppppppdVar47 = *(undefined2 *)pppppppdVar48;
              pppppppdVar48 = (double *******)((long)pppppppdVar48 + uVar31);
            }
          }
        }
        if (((uVar34 >> 8 & 1) != 0) &&
           (uVar34 = (uVar34 >> 10 & 1) + (uVar34 >> 0xb & 0x1f) + (uVar34 >> 0x10 & 0xff) + 7 >> 3,
           uVar34 - 1 < 8)) {
          pppppppdVar47 = (double *******)((long)pppppppdVar53 + (long)(int)(uVar25 * uVar67));
          switch(uVar34) {
          case 1:
            if (pppppppdVar53 < pppppppdVar47) {
              pppppppdVar48 = (double *******)&local_2080;
              do {
                *(undefined1 *)pppppppdVar53 = *(undefined1 *)pppppppdVar48;
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar48 = pppppppdVar48 + 1;
              } while (pppppppdVar53 < pppppppdVar47);
            }
            break;
          case 2:
            if (pppppppdVar53 < pppppppdVar47) {
              pppppppdVar48 = (double *******)&local_2080;
              do {
                *(ushort *)pppppppdVar53 =
                     *(ushort *)pppppppdVar48 >> 8 | *(ushort *)pppppppdVar48 << 8;
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar48 = pppppppdVar48 + 1;
              } while (pppppppdVar53 < pppppppdVar47);
            }
            break;
          case 4:
            if (pppppppdVar53 < pppppppdVar47) {
              pppppppdVar48 = (double *******)&local_2080;
              do {
                uVar34 = (*(uint *)pppppppdVar48 & 0xff00ff00) >> 8 |
                         (*(uint *)pppppppdVar48 & 0xff00ff) << 8;
                *(uint *)pppppppdVar53 = uVar34 >> 0x10 | uVar34 << 0x10;
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar48 = pppppppdVar48 + 1;
              } while (pppppppdVar53 < pppppppdVar47);
            }
            break;
          case 8:
            if (pppppppdVar53 < pppppppdVar47) {
              pppppppdVar48 = (double *******)&local_2080;
              do {
                uVar31 = ((ulong)*pppppppdVar48 & 0xff00ff00ff00ff00) >> 8 |
                         ((ulong)*pppppppdVar48 & 0xff00ff00ff00ff) << 8;
                uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
                *pppppppdVar53 = (double ******)(uVar31 >> 0x20 | uVar31 << 0x20);
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar48 = pppppppdVar48 + 1;
              } while (pppppppdVar53 < pppppppdVar47);
            }
          }
        }
        break;
      case 9:
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x20);
        while( true ) {
          uVar34 = (uint)*puVar27;
          if ((uVar34 >> 0x14 & 1) != 0) break;
          if (((*puVar27 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
          goto LAB_03320280;
        }
        if (puVar27 != (ulong *)0x0) {
          uVar34 = uVar34 & 0xfffff;
          uVar34 = (uint)(ushort)puVar27[(ulong)(byte)(POPCOUNT((char)uVar34) +
                                                       POPCOUNT((char)(uVar34 >> 8)) +
                                                      POPCOUNT((char)(uVar34 >> 0x10))) + 2];
          goto LAB_03320284;
        }
LAB_03320280:
        uVar34 = 0;
LAB_03320284:
        pppppppdVar48 = (double *******)((long)pppppppdVar53 + (long)(int)(uVar25 * uVar67));
        if (pppppppdVar53 < pppppppdVar48) {
          puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x18);
          while( true ) {
            uVar49 = (uint)*puVar27;
            if ((uVar49 >> 0x14 & 1) != 0) break;
            if (((*puVar27 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
            goto switchD_0332137c_caseD_3;
          }
          if (puVar27 == (ulong *)0x0) {
switchD_0332137c_caseD_3:
            do {
            } while( true );
          }
          uVar49 = uVar49 & 0xfffff;
          switch((short)puVar27[(ulong)(byte)(POPCOUNT((char)uVar49) + POPCOUNT((char)(uVar49 >> 8))
                                             + POPCOUNT((char)(uVar49 >> 0x10))) + 2]) {
          case 1:
            switch(uVar34) {
            case 1:
              do {
                *(bool *)pppppppdVar53 = *(char *)pppppppdVar47 != '\0';
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
              } while (pppppppdVar53 < pppppppdVar48);
              break;
            case 2:
              do {
                *(ushort *)pppppppdVar53 = (ushort)(*(char *)pppppppdVar47 != '\0');
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
              } while (pppppppdVar53 < pppppppdVar48);
              break;
            default:
switchD_03321470_caseD_3:
              do {
              } while( true );
            case 4:
              do {
                *(uint *)pppppppdVar53 = (uint)(*(char *)pppppppdVar47 != '\0');
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
              } while (pppppppdVar53 < pppppppdVar48);
              break;
            case 8:
              do {
                *pppppppdVar53 = (double ******)(ulong)(*(char *)pppppppdVar47 != '\0');
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
              } while (pppppppdVar53 < pppppppdVar48);
            }
            break;
          case 2:
            if (uVar34 == 1) {
              do {
                *(bool *)pppppppdVar53 = *(short *)pppppppdVar47 != 0;
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
              } while (pppppppdVar53 < pppppppdVar48);
            }
            else if (uVar34 == 2) {
              do {
                *(ushort *)pppppppdVar53 = (ushort)(*(short *)pppppppdVar47 != 0);
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
              } while (pppppppdVar53 < pppppppdVar48);
            }
            else if (uVar34 == 4) {
              do {
                *(uint *)pppppppdVar53 = (uint)(*(short *)pppppppdVar47 != 0);
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
              } while (pppppppdVar53 < pppppppdVar48);
            }
            else {
              if (uVar34 != 8) goto switchD_03321470_caseD_3;
              do {
                *pppppppdVar53 = (double ******)(ulong)(*(short *)pppppppdVar47 != 0);
                pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
                pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
              } while (pppppppdVar53 < pppppppdVar48);
            }
            break;
          default:
            goto switchD_0332137c_caseD_3;
          case 4:
            do {
              if (7 < uVar34 - 1) goto switchD_03321470_caseD_3;
              uVar49 = *(uint *)pppppppdVar47;
              switch(uVar34) {
              case 1:
                *(bool *)pppppppdVar53 = uVar49 != 0;
                break;
              case 2:
                *(ushort *)pppppppdVar53 = (ushort)(uVar49 != 0);
                break;
              default:
                goto switchD_03321470_caseD_3;
              case 4:
                *(uint *)pppppppdVar53 = (uint)(uVar49 != 0);
                break;
              case 8:
                *pppppppdVar53 = (double ******)(ulong)(uVar49 != 0);
              }
              pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
              pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
            } while (pppppppdVar53 < pppppppdVar48);
            break;
          case 8:
            do {
              if (7 < uVar34 - 1) goto switchD_03321470_caseD_3;
              ppppppdVar75 = *pppppppdVar47;
              switch(uVar34) {
              case 1:
                *(bool *)pppppppdVar53 = ppppppdVar75 != (double ******)0x0;
                break;
              case 2:
                *(ushort *)pppppppdVar53 = (ushort)(ppppppdVar75 != (double ******)0x0);
                break;
              default:
                goto switchD_03321470_caseD_3;
              case 4:
                *(uint *)pppppppdVar53 = (uint)(ppppppdVar75 != (double ******)0x0);
                break;
              case 8:
                *pppppppdVar53 = (double ******)(ulong)(ppppppdVar75 != (double ******)0x0);
              }
              pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
              pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
            } while (pppppppdVar53 < pppppppdVar48);
          }
        }
        break;
      case 10:
        lVar63 = lVar63 + lVar69 * 0x38;
        local_78 = *(ulong **)(lVar63 + 0x18);
        puVar27 = *(ulong **)(lVar63 + 0x20);
        local_2080 = pppppppdVar53;
        local_2078 = puVar27;
        if (puVar27 == (ulong *)0x0) {
          local_2070 = (long *)0x0;
        }
        else {
          do {
            uVar31 = *puVar27;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              local_2070 = (long *)puVar27[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              goto LAB_0332032c;
            }
            puVar27 = (ulong *)puVar27[1];
          } while (puVar27 != (ulong *)0x0);
          local_2070 = (long *)0x0;
        }
LAB_0332032c:
        if (((ulong)local_2070 & 1) != 0) {
          piVar4 = (int *)(((ulong)local_2070 & 0xfffffffffffffffe) + 8);
          do {
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar17) {
              *piVar4 = *piVar4 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
        local_70 = (long *)0x0;
        puVar27 = local_78;
        if (local_78 != (ulong *)0x0) {
          do {
            uVar31 = *puVar27;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              local_70 = (long *)puVar27[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              goto LAB_0332068c;
            }
            puVar27 = (ulong *)puVar27[1];
          } while (puVar27 != (ulong *)0x0);
          local_70 = (long *)0x0;
        }
LAB_0332068c:
        if (((ulong)local_70 & 1) != 0) {
          piVar4 = (int *)(((ulong)local_70 & 0xfffffffffffffffe) + 8);
          do {
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar17) {
              *piVar4 = *piVar4 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
        local_80 = pppppppdVar47;
        if (0 < (int)uVar26) {
          uVar34 = 0;
          do {
            for (puVar27 = local_78; (*puVar27 & 1) == 0; puVar27 = (ulong *)puVar27[1]) {
            }
            puVar35 = local_2078;
            if ((*local_2078 & 1) == 0) {
              do {
                puVar35 = (ulong *)puVar35[1];
              } while ((*puVar35 & 1) == 0);
            }
            if ((code *)auStack_2f30[(puVar35[2] & 0x1f) * 9 + (puVar27[2] & 0x1f)] != (code *)0x0)
            {
              (*(code *)auStack_2f30[(puVar35[2] & 0x1f) * 9 + (puVar27[2] & 0x1f)])
                        (&local_2080,&local_80);
            }
            plVar22 = local_2070;
            local_2070 = (long *)((ulong)local_2070 & 0xfffffffffffffffe);
            local_2080 = (double *******)((long)local_2080 + uVar33);
            if (((ulong)plVar22 & 1) != 0) {
              plVar22 = local_2070 + 1;
              do {
                lVar63 = *plVar22;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar17) {
                  *(int *)plVar22 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((local_2070 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*local_2070 + 8))();
              }
            }
            local_80 = (double *******)((long)local_80 + uVar42);
            plVar22 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
            uVar31 = (ulong)local_70 & 1;
            local_70 = plVar22;
            if (uVar31 != 0) {
              plVar20 = plVar22 + 1;
              do {
                lVar63 = *plVar20;
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar17) {
                  *(int *)plVar20 = (int)lVar63 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if ((plVar22 != (long *)0x0) && ((int)lVar63 == 1)) {
                (**(code **)(*plVar22 + 8))();
              }
            }
            uVar34 = uVar34 + 1;
          } while (uVar34 != uVar25);
        }
        if (((ulong)local_70 & 1) != 0) {
          plVar20 = (long *)((ulong)local_70 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            lVar63 = *plVar22;
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar17) {
              *(int *)plVar22 = (int)lVar63 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar63 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        if (((ulong)local_2070 & 1) != 0) {
          plVar20 = (long *)((ulong)local_2070 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            iVar18 = (int)*plVar22;
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar17) {
              *(int *)plVar22 = iVar18 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
LAB_03320e50:
          if ((plVar20 != (long *)0x0) && (iVar18 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        break;
      case 0xb:
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x20);
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
        uVar31 = 0;
        if ((puVar27 != (ulong *)0x0) && ((puVar35[2] & 0x1f) == 8)) {
          do {
            uVar31 = *puVar27;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              uVar31 = puVar27[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              goto LAB_03320fa0;
            }
            puVar27 = (ulong *)puVar27[1];
          } while (puVar27 != (ulong *)0x0);
          uVar31 = 0;
        }
LAB_03320fa0:
        if ((uVar31 & 1) != 0) {
          piVar4 = (int *)((uVar31 & 0xfffffffffffffffe) + 8);
          do {
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar17) {
              *piVar4 = *piVar4 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x18);
        uVar54 = *puVar27;
        uVar34 = (uint)uVar54;
        puVar35 = puVar27;
        if ((uVar54 & 1) == 0) {
          do {
            puVar35 = (ulong *)puVar35[1];
          } while ((*puVar35 & 1) == 0);
        }
        uVar65 = 0;
        if ((puVar27 != (ulong *)0x0) && ((puVar35[2] & 0x1f) == 8)) {
          while ((uVar34 >> 2 & 1) == 0) {
            puVar27 = (ulong *)puVar27[1];
            if (puVar27 == (ulong *)0x0) {
              uVar65 = 0;
              goto LAB_03321040;
            }
            uVar54 = *puVar27;
            uVar34 = (uint)uVar54;
          }
          uVar65 = puVar27[(uVar54 >> 1 & 1) + (uVar54 & 1) + 2];
        }
        if ((uVar65 & 1) != 0) {
          piVar4 = (int *)((uVar65 & 0xfffffffffffffffe) + 8);
          do {
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar17) {
              *piVar4 = *piVar4 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
LAB_03321040:
        if ((int)uVar26 < 1) {
          bVar17 = true;
        }
        else {
          uVar54 = FUN_0220e630(&DAT_047ac740,"Not implemented");
          bVar17 = false;
          if ((uVar54 & 1) != 0) {
            CallSupervisor(0x26);
          }
        }
        if ((uVar65 & 1) != 0) {
          plVar20 = (long *)(uVar65 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            lVar63 = *plVar22;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar66) {
              *(int *)plVar22 = (int)lVar63 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar63 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        if ((uVar31 & 1) != 0) {
          plVar20 = (long *)(uVar31 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            iVar18 = (int)*plVar22;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar66) {
              *(int *)plVar22 = iVar18 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          goto LAB_03321200;
        }
        goto LAB_03321218;
      case 0xc:
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x20);
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
        uVar31 = 0;
        if ((puVar27 != (ulong *)0x0) && ((puVar35[2] & 0x1f) == 7)) {
          do {
            uVar31 = *puVar27;
            if (((uint)uVar31 >> 2 & 1) != 0) {
              uVar31 = puVar27[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
              goto LAB_033210dc;
            }
            puVar27 = (ulong *)puVar27[1];
          } while (puVar27 != (ulong *)0x0);
          uVar31 = 0;
        }
LAB_033210dc:
        if ((uVar31 & 1) != 0) {
          piVar4 = (int *)((uVar31 & 0xfffffffffffffffe) + 8);
          do {
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar17) {
              *piVar4 = *piVar4 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
        puVar27 = *(ulong **)(lVar63 + lVar69 * 0x38 + 0x18);
        uVar54 = *puVar27;
        uVar34 = (uint)uVar54;
        puVar35 = puVar27;
        if ((uVar54 & 1) == 0) {
          do {
            puVar35 = (ulong *)puVar35[1];
          } while ((*puVar35 & 1) == 0);
        }
        uVar65 = 0;
        if ((puVar27 != (ulong *)0x0) && ((puVar35[2] & 0x1f) == 7)) {
          while ((uVar34 >> 2 & 1) == 0) {
            puVar27 = (ulong *)puVar27[1];
            if (puVar27 == (ulong *)0x0) {
              uVar65 = 0;
              goto LAB_0332117c;
            }
            uVar54 = *puVar27;
            uVar34 = (uint)uVar54;
          }
          uVar65 = puVar27[(uVar54 >> 1 & 1) + (uVar54 & 1) + 2];
        }
        if ((uVar65 & 1) != 0) {
          piVar4 = (int *)((uVar65 & 0xfffffffffffffffe) + 8);
          do {
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar17) {
              *piVar4 = *piVar4 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
LAB_0332117c:
        if ((int)uVar26 < 1) {
          bVar17 = true;
        }
        else {
          uVar54 = FUN_0220e630(PTR_DAT_047e66b8,"Not implemented");
          bVar17 = false;
          if ((uVar54 & 1) != 0) {
            CallSupervisor(0x26);
          }
        }
        if ((uVar65 & 1) != 0) {
          plVar20 = (long *)(uVar65 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            lVar63 = *plVar22;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar66) {
              *(int *)plVar22 = (int)lVar63 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((plVar20 != (long *)0x0) && ((int)lVar63 == 1)) {
            (**(code **)(*plVar20 + 8))();
          }
        }
        if ((uVar31 & 1) != 0) {
          plVar20 = (long *)(uVar31 & 0xfffffffffffffffe);
          plVar22 = plVar20 + 1;
          do {
            iVar18 = (int)*plVar22;
            cVar13 = '\x01';
            bVar66 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar66) {
              *(int *)plVar22 = iVar18 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          goto LAB_03321200;
        }
LAB_03321218:
        if (!bVar17) goto LAB_033220c0;
        break;
      case 0xd:
        uVar34 = *(uint *)(lVar63 + lVar69 * 0x38 + 0x18);
        uVar31 = (ulong)uVar34;
        if (uVar34 == uVar67 && uVar34 == uVar41) {
          pppppppdVar48 = pppppppdVar47;
LAB_03320008:
          memcpy(pppppppdVar53,pppppppdVar48,(long)(int)(uVar25 * uVar41));
        }
        else if ((0 < (int)uVar26) && (0 < (int)uVar34)) {
          uVar49 = 0;
          do {
            if (uVar31 - 1 < 7) {
              uVar54 = 0;
            }
            else {
              uVar54 = 0;
              do {
                puVar32 = (undefined1 *)((long)pppppppdVar47 + uVar54);
                puVar60 = (undefined1 *)((long)pppppppdVar53 + uVar54);
                uVar54 = uVar54 + 8;
                *puVar60 = *puVar32;
                puVar60[1] = puVar32[1];
                puVar60[2] = puVar32[2];
                puVar60[3] = puVar32[3];
                puVar60[4] = puVar32[4];
                puVar60[5] = puVar32[5];
                puVar60[6] = puVar32[6];
                puVar60[7] = puVar32[7];
              } while ((uVar31 & 0xfffffff8) != uVar54);
            }
            if ((uVar34 & 7) != 0) {
              uVar65 = uVar31 & 7;
              do {
                uVar65 = uVar65 - 1;
                *(undefined1 *)((long)pppppppdVar53 + uVar54) =
                     *(undefined1 *)((long)pppppppdVar47 + uVar54);
                uVar54 = uVar54 + 1;
              } while (uVar65 != 0);
            }
            uVar49 = uVar49 + 1;
            pppppppdVar53 = (double *******)((long)pppppppdVar53 + uVar33);
            pppppppdVar47 = (double *******)((long)pppppppdVar47 + uVar42);
          } while (uVar49 != uVar25);
        }
      }
switchD_03321ac8_caseD_3:
      iVar72 = iVar72 + 1;
      if (iVar10 == iVar72) goto LAB_03321e54;
      goto LAB_0331fa68;
    }
LAB_03321e70:
    if ((int)local_2c88 != 0) {
      lVar29 = (long)(int)local_2c88 * 0x30;
      puVar46 = (undefined8 *)(local_2c90 + 0x18);
      do {
        lVar29 = lVar29 + -0x30;
        local_2080 = (double *******)0x0;
        (**(code **)(*(long *)(puVar46[2] & 0xfffffffffffffffe) + 0x38))
                  ((long *)(puVar46[2] & 0xfffffffffffffffe),*puVar46,puVar46[1],&local_2080);
        iVar19 = (**(code **)(*(long *)(puVar46[-1] & 0xfffffffffffffffe) + 0x30))
                           ((long *)(puVar46[-1] & 0xfffffffffffffffe),puVar46[-3],puVar46[-2],
                            local_2080);
        if (lVar29 == 0) break;
        puVar46 = puVar46 + 6;
      } while (-1 < iVar19);
LAB_033220c0:
      puVar32 = local_2c90;
      if ((int)local_2c88 != 0) {
        puVar60 = local_2c90 + (long)(int)local_2c88 * 0x30;
        do {
          if ((*(ulong *)(puVar60 + -8) & 1) != 0) {
            plVar20 = (long *)(*(ulong *)(puVar60 + -8) & 0xfffffffffffffffe);
            plVar22 = plVar20 + 1;
            do {
              lVar29 = *plVar22;
              cVar13 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar17) {
                *(int *)plVar22 = (int)lVar29 + -1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
              (**(code **)(*plVar20 + 8))();
            }
          }
          puVar27 = (ulong *)(puVar60 + -0x20);
          puVar60 = puVar60 + -0x30;
          if ((*puVar27 & 1) != 0) {
            plVar20 = (long *)(*puVar27 & 0xfffffffffffffffe);
            plVar22 = plVar20 + 1;
            do {
              lVar29 = *plVar22;
              cVar13 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar17) {
                *(int *)plVar22 = (int)lVar29 + -1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
              (**(code **)(*plVar20 + 8))();
            }
          }
        } while (puVar60 != puVar32);
      }
    }
    lVar29 = local_2c88;
    uVar33 = (ulong)local_2c88._4_4_;
    local_2c88 = (ulong)local_2c88._4_4_ << 0x20;
    if ((-1 < lVar29) && (local_2c90 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_2c90,uVar33 * 0x30);
    }
  }
  pbVar28 = pbVar73;
  do {
    if ((*pbVar28 & 1) != 0) {
      if ((pbVar28 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar28 + 0x10) >> 8) != 0))
      goto LAB_03322404;
      break;
    }
    pbVar28 = *(byte **)(pbVar28 + 8);
  } while (pbVar28 != (byte *)0x0);
  uVar21 = param_1[3];
  local_2068 = 0;
  local_2070 = (long *)0x0;
  local_2078 = (ulong *)0x0;
  local_2080 = (double *******)0x0;
  (**(code **)(*plVar71 + 0x50))(plVar71,uVar70,pbVar73,&local_2080);
  pppppppdVar16 = local_2080;
  if ((local_2068 & 1) != 0) {
    plVar20 = (long *)(local_2068 & 0xfffffffffffffffe);
    plVar22 = plVar20 + 1;
    do {
      lVar29 = *plVar22;
      cVar13 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *(int *)plVar22 = (int)lVar29 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
      (**(code **)(*plVar20 + 8))();
    }
  }
  local_2068 = 0;
  local_2070 = (long *)0x0;
  local_2078 = (ulong *)0x0;
  local_2080 = (double *******)0x0;
  (**(code **)(*plVar71 + 0x50))(plVar71,uVar70,pbVar73,&local_2080);
  puVar27 = local_2078;
  if ((local_2068 & 1) != 0) {
    plVar20 = (long *)(local_2068 & 0xfffffffffffffffe);
    plVar22 = plVar20 + 1;
    do {
      lVar29 = *plVar22;
      cVar13 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *(int *)plVar22 = (int)lVar29 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
      (**(code **)(*plVar20 + 8))();
    }
  }
  local_2f48 = (double ******)pppppppdVar16;
  puStack_2f40 = puVar27;
  for (; puVar27 != (ulong *)0x0; puVar27 = (ulong *)puVar27[1]) {
    uVar33 = *puVar27;
    if (((uint)uVar33 >> 2 & 1) != 0) {
      local_2f38 = puVar27[(uVar33 >> 1 & 1) + (uVar33 & 1) + 2];
      goto LAB_033222e4;
    }
  }
  local_2f38 = 0;
LAB_033222e4:
  if ((local_2f38 & 1) != 0) {
    piVar4 = (int *)((local_2f38 & 0xfffffffffffffffe) + 8);
    do {
      cVar13 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar17) {
        *piVar4 = *piVar4 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  local_2068 = 0;
  local_2070 = (long *)0x0;
  local_2078 = (ulong *)0x0;
  local_2080 = (double *******)0x0;
  (**(code **)(*plVar71 + 0x50))(plVar71,uVar70,pbVar73,&local_2080);
  puVar27 = local_2078;
  if ((local_2068 & 1) != 0) {
    plVar20 = (long *)(local_2068 & 0xfffffffffffffffe);
    plVar22 = plVar20 + 1;
    do {
      lVar29 = *plVar22;
      cVar13 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *(int *)plVar22 = (int)lVar29 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
      (**(code **)(*plVar20 + 8))();
    }
  }
  while( true ) {
    uVar25 = (uint)*puVar27;
    if ((uVar25 >> 0x14 & 1) != 0) break;
    if (((*puVar27 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
    goto LAB_033223b0;
  }
  if (puVar27 != (ulong *)0x0) {
    uVar33 = CONCAT44(uVar25,uVar25) & 0xfffff000fffff;
    uVar23 = (undefined2)
             puVar27[(ulong)(byte)(POPCOUNT((char)uVar33) + POPCOUNT((char)(uVar33 >> 8)) +
                                  POPCOUNT((char)(uVar33 >> 0x10))) + 2];
    goto LAB_033223b4;
  }
LAB_033223b0:
  uVar23 = 0;
LAB_033223b4:
  FUN_03322638(uVar21,&local_2f48,iVar9,uVar23,0xffffffff,0xffffffff);
  if ((local_2f38 & 1) != 0) {
    plVar20 = (long *)(local_2f38 & 0xfffffffffffffffe);
    plVar22 = plVar20 + 1;
    do {
      lVar29 = *plVar22;
      cVar13 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *(int *)plVar22 = (int)lVar29 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((plVar20 != (long *)0x0) && ((int)lVar29 == 1)) {
      (**(code **)(*plVar20 + 8))();
    }
  }
LAB_03322404:
  if ((uVar68 & 1) != 0) {
    plVar22 = plVar71 + 1;
    do {
      lVar29 = *plVar22;
      cVar13 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar17) {
        *(int *)plVar22 = (int)lVar29 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((plVar71 != (long *)0x0) && ((int)lVar29 == 1)) {
      (**(code **)(*plVar71 + 8))(plVar71);
    }
  }
  return;
code_r0x03320598:
  puVar36 = (ulong *)puVar36[1];
  if (puVar36 == (ulong *)0x0) goto LAB_033205a0;
  goto LAB_03320590;
}


