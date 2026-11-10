/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cbd8a8; name: FUN_00cbd8a8
 */


void FUN_00cbd8a8(long param_1)

{
  short *psVar1;
  int *piVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long *plVar20;
  short sVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined4 uVar25;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  puVar8 = PTR_LAB_047d3de8;
  lVar14 = *(long *)(param_1 + 0x138);
  lVar16 = param_1 + 0x130;
  if (lVar16 != lVar14) {
LAB_00cbd8fc:
    lVar15 = *(long *)(lVar14 + 0x18);
    if (lVar15 != 0) {
      uVar3 = *(undefined1 *)(param_1 + 0x315);
      uVar25 = *(undefined4 *)(param_1 + 0x318);
      if (*(short *)(lVar15 + 0x1a) != 0) {
        plVar22 = (long *)(lVar14 + 0x10);
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar21 = *(short *)(lVar15 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar21) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00cbdb40;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00cbdb40:
            bVar6 = false;
          }
          if (bVar6) {
            lVar15 = *(long *)(lVar15 + 0x10);
            if (lVar15 != 0) {
              if (*(char *)(lVar14 + 0x38) != '\0') {
                lVar17 = *(long *)(lVar14 + 0x28);
                if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) goto LAB_00cbdb7c;
                psVar1 = (short *)(lVar17 + 0x1a);
                sVar21 = *(short *)(lVar17 + 0x1a);
                goto LAB_00cbe650;
              }
              uVar12 = (**(code **)(*(long *)(lVar15 + -0x28) + 0xd8))();
              if ((uVar12 & 1) == 0) goto LAB_00cbdb94;
              plVar20 = (long *)(lVar14 + 0x28);
              lVar17 = *plVar20;
              if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) goto LAB_00cbddd0;
              psVar1 = (short *)(lVar17 + 0x1a);
              sVar21 = *(short *)(lVar17 + 0x1a);
              goto LAB_00cbe7b8;
            }
            break;
          }
          sVar21 = sVar4;
        } while (sVar4 != 0);
      }
    }
    lVar14 = FUN_00cbead0(lVar16);
    goto LAB_00cbd910;
  }
LAB_00cbd918:
  puVar8 = PTR_LAB_047d3de8;
  lVar14 = *(long *)(param_1 + 0x170);
  lVar16 = param_1 + 0x168;
  if (lVar16 != lVar14) {
LAB_00cbd944:
    lVar15 = *(long *)(lVar14 + 0x18);
    if (lVar15 != 0) {
      uVar3 = *(undefined1 *)(param_1 + 0x315);
      uVar25 = *(undefined4 *)(param_1 + 0x318);
      if (*(short *)(lVar15 + 0x1a) != 0) {
        plVar22 = (long *)(lVar14 + 0x10);
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar21 = *(short *)(lVar15 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar21) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00cbdbfc;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00cbdbfc:
            bVar6 = false;
          }
          if (bVar6) {
            lVar15 = *(long *)(lVar15 + 0x10);
            if (lVar15 != 0) {
              if (*(char *)(lVar14 + 0x38) != '\0') {
                lVar17 = *(long *)(lVar14 + 0x28);
                if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) goto LAB_00cbdc38;
                psVar1 = (short *)(lVar17 + 0x1a);
                sVar21 = *(short *)(lVar17 + 0x1a);
                goto LAB_00cbe5b8;
              }
              uVar12 = (**(code **)(*(long *)(lVar15 + -0x28) + 0xd8))();
              if ((uVar12 & 1) == 0) goto LAB_00cbdc50;
              plVar20 = (long *)(lVar14 + 0x28);
              lVar17 = *plVar20;
              if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) goto LAB_00cbdf2c;
              psVar1 = (short *)(lVar17 + 0x1a);
              sVar21 = *(short *)(lVar17 + 0x1a);
              goto LAB_00cbe6e8;
            }
            break;
          }
          sVar21 = sVar4;
        } while (sVar4 != 0);
      }
    }
    lVar14 = FUN_00cbeb84(lVar16);
    goto LAB_00cbd958;
  }
LAB_00cbd960:
  puVar8 = PTR_LAB_047d3de8;
  plVar22 = *(long **)(param_1 + 0x1a8);
joined_r0x00cbd96c:
  do {
    if ((long *)(param_1 + 0x1a0) == plVar22) {
      return;
    }
    lVar16 = plVar22[3];
    if (lVar16 != 0) {
      uVar3 = *(undefined1 *)(param_1 + 0x315);
      uVar25 = *(undefined4 *)(param_1 + 0x318);
      if (*(short *)(lVar16 + 0x1a) != 0) {
        plVar20 = plVar22 + 2;
        psVar1 = (short *)(lVar16 + 0x1a);
        sVar21 = *(short *)(lVar16 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar21) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00cbda94;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00cbda94:
            bVar6 = false;
          }
          if (bVar6) {
            lVar16 = *(long *)(lVar16 + 0x10);
            if (lVar16 != 0) {
              if ((char)plVar22[7] != '\0') {
                lVar14 = plVar22[5];
                if ((lVar14 == 0) || (*(short *)(lVar14 + 0x1a) == 0)) goto LAB_00cbdac8;
                psVar1 = (short *)(lVar14 + 0x1a);
                sVar21 = *(short *)(lVar14 + 0x1a);
                goto LAB_00cbe49c;
              }
              uVar12 = (**(code **)(*(long *)(lVar16 + -0x28) + 0xd8))();
              if ((uVar12 & 1) == 0) goto LAB_00cbdadc;
              plVar24 = plVar22 + 5;
              lVar14 = *plVar24;
              if ((lVar14 == 0) || (*(short *)(lVar14 + 0x1a) == 0)) goto LAB_00cbdc90;
              psVar1 = (short *)(lVar14 + 0x1a);
              sVar21 = *(short *)(lVar14 + 0x1a);
              goto LAB_00cbe51c;
            }
            break;
          }
          sVar21 = sVar4;
        } while (sVar4 != 0);
      }
    }
    plVar20 = (long *)plVar22[1];
    *(long **)(*plVar22 + 8) = plVar20;
    *(long *)plVar22[1] = *plVar22;
    *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1b0) + -1;
    (**(code **)plVar22[2])();
    plVar24 = *(long **)(param_1 + 0x1b8);
    uVar12 = (**(code **)(*plVar24 + 0xf8))(plVar24);
    if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar24 + 0x18))(plVar24,plVar22,0x40,8);
      plVar22 = plVar20;
    }
    else {
      FUN_00c48fe8(plVar24,plVar22,0x40,8);
      plVar22 = plVar20;
    }
  } while( true );
LAB_00cbe650:
  sVar4 = *psVar1;
  if (sVar4 == sVar21) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar21 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_00cbe674;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00cbe674:
    bVar6 = false;
  }
  if (!bVar6) goto code_r0x00cbe67c;
  lVar17 = *(long *)(lVar17 + 0x10);
  if (lVar17 == 0) goto LAB_00cbdb7c;
  uVar10 = (**(code **)(*plVar22 + 0x20))();
  lVar19 = *(long *)(lVar17 + 0x70);
  psVar1 = (short *)(lVar19 + 0x1a);
  do {
    sVar21 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar21 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar21 == 1) {
    *(undefined8 *)(lVar19 + 0x10) = 0;
    (**(code **)(*(long *)(lVar17 + -0x28) + 0x50))((long *)(lVar17 + -0x28));
  }
  else if (sVar21 == 0) goto LAB_00cbe874;
  if ((uVar10 & 1) == 0) {
LAB_00cbdb7c:
    (**(code **)(*(long *)(lVar14 + 0x10) + 0x28))(plVar22);
    *(undefined1 *)(lVar14 + 0x38) = 0;
  }
  goto LAB_00cbdb94;
code_r0x00cbe67c:
  sVar21 = sVar4;
  if (sVar4 == 0) goto LAB_00cbdb7c;
  goto LAB_00cbe650;
LAB_00cbe7b8:
  sVar4 = *psVar1;
  if (sVar4 == sVar21) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar21 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_00cbe7dc;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00cbe7dc:
    bVar6 = false;
  }
  if (!bVar6) goto code_r0x00cbe7e4;
  lVar17 = *(long *)(lVar17 + 0x10);
  if (lVar17 != 0) {
    lVar19 = *(long *)(lVar17 + 0x70);
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      pcVar18 = *(code **)(*(long *)(lVar17 + -0x28) + 0x50);
      goto LAB_00cbdeb0;
    }
    if (sVar21 == 0) goto LAB_00cbe874;
    goto LAB_00cbdeb4;
  }
  goto LAB_00cbddd0;
code_r0x00cbe7e4:
  sVar21 = sVar4;
  if (sVar4 == 0) goto LAB_00cbddd0;
  goto LAB_00cbe7b8;
LAB_00cbddd0:
  plVar24 = (long *)(lVar15 + 0xe8);
  lVar19 = *plVar24;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 != lVar19) {
    lVar17 = nn::os::GetCurrentThread();
LAB_00cbddf4:
    if (*plVar24 == 0) goto code_r0x00cbddfc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xf0));
    do {
      if (*plVar24 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xf0));
          while (*plVar24 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = lVar17;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00cbde08;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00cbde08:
    bVar6 = false;
    goto LAB_00cbde0c;
  }
  bVar6 = true;
LAB_00cbde0c:
  plVar24 = (long *)FUN_01f897b0(*(undefined8 *)(lVar15 + 0x100),*(undefined8 *)(lVar15 + 0x108));
  if ((*(long **)(lVar15 + 0x108) == plVar24) || (*plVar24 == 0)) {
    plVar24 = (long *)FUN_01f897b0(*(undefined8 *)(lVar15 + 0x138),*(undefined8 *)(lVar15 + 0x140));
    if (*(long **)(lVar15 + 0x140) == plVar24) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      if (*plVar24 != 0) {
        lVar17 = *plVar24 + -0x20;
      }
    }
  }
  else {
    lVar17 = *plVar24 + -0x20;
  }
  if (!bVar6) {
    *(undefined8 *)(lVar15 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xf0));
  }
  if (lVar17 != 0) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00c43ef0(&local_80,lVar17 + 0x98);
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    if (local_80[2] == lVar17 + 0x28) {
      FUN_010f6b28(&local_90,&local_80);
    }
    puVar9 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar21 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_68 = *puVar9;
          FUN_00c44438(lVar17 + 0x8040,&local_68);
        }
      }
      else if (sVar21 == 0) goto LAB_00cbe1f4;
    }
    FUN_010f6758(plVar20,&local_90);
    puVar9 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar21 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        piVar2 = (int *)((long)local_90 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_80 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar17 + 0x8040,&local_80);
        }
      }
      else if (sVar21 == 0) goto LAB_00cbe1f4;
    }
    pcVar18 = *(code **)(*plVar22 + 0x10);
LAB_00cbdeb0:
    (*pcVar18)();
  }
LAB_00cbdeb4:
  lVar17 = *plVar20;
  if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar17 + 0x1a);
    sVar21 = *(short *)(lVar17 + 0x1a);
LAB_00cbded0:
    sVar4 = *psVar1;
    if (sVar4 == sVar21) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00cbdef4;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00cbdef4:
      bVar6 = false;
    }
    if (!bVar6) goto code_r0x00cbdefc;
    lVar17 = *(long *)(lVar17 + 0x10);
    if (lVar17 != 0) {
      lVar19 = *(long *)(lVar17 + 0x70);
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar21 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*(long *)(lVar17 + -0x28) + 0x50))();
      }
      else if (sVar21 == 0) goto LAB_00cbe874;
      uVar12 = (**(code **)(*plVar22 + 0x18))(uVar25,plVar22,uVar3);
      if ((uVar12 & 1) != 0) {
        *(undefined1 *)(lVar14 + 0x38) = 1;
      }
    }
  }
LAB_00cbdb94:
  (**(code **)(*(long *)(lVar15 + -0x28) + 0x60))();
  lVar14 = *(long *)(lVar14 + 8);
LAB_00cbd910:
  if (lVar16 == lVar14) goto LAB_00cbd918;
  goto LAB_00cbd8fc;
code_r0x00cbddfc:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar6) {
    *plVar24 = lVar17;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00cbde08;
  goto LAB_00cbddf4;
code_r0x00cbdefc:
  sVar21 = sVar4;
  if (sVar4 == 0) goto LAB_00cbdb94;
  goto LAB_00cbded0;
LAB_00cbe5b8:
  sVar4 = *psVar1;
  if (sVar4 == sVar21) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar21 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_00cbe5dc;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00cbe5dc:
    bVar6 = false;
  }
  if (!bVar6) goto code_r0x00cbe5e4;
  lVar17 = *(long *)(lVar17 + 0x10);
  if (lVar17 == 0) goto LAB_00cbdc38;
  uVar10 = (**(code **)(*plVar22 + 0x20))();
  lVar19 = *(long *)(lVar17 + 0x70);
  psVar1 = (short *)(lVar19 + 0x1a);
  do {
    sVar21 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar21 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar21 == 1) {
    *(undefined8 *)(lVar19 + 0x10) = 0;
    (**(code **)(*(long *)(lVar17 + -0x28) + 0x50))((long *)(lVar17 + -0x28));
  }
  else if (sVar21 == 0) goto LAB_00cbe874;
  if ((uVar10 & 1) == 0) {
LAB_00cbdc38:
    (**(code **)(*(long *)(lVar14 + 0x10) + 0x28))(plVar22);
    *(undefined1 *)(lVar14 + 0x38) = 0;
  }
  goto LAB_00cbdc50;
code_r0x00cbe5e4:
  sVar21 = sVar4;
  if (sVar4 == 0) goto LAB_00cbdc38;
  goto LAB_00cbe5b8;
LAB_00cbe6e8:
  sVar4 = *psVar1;
  if (sVar4 == sVar21) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar21 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_00cbe70c;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00cbe70c:
    bVar6 = false;
  }
  if (!bVar6) goto code_r0x00cbe714;
  lVar17 = *(long *)(lVar17 + 0x10);
  if (lVar17 != 0) {
    lVar19 = *(long *)(lVar17 + 0x70);
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      pcVar18 = *(code **)(*(long *)(lVar17 + -0x28) + 0x50);
      goto LAB_00cbe00c;
    }
    if (sVar21 == 0) goto LAB_00cbe874;
    goto LAB_00cbe010;
  }
  goto LAB_00cbdf2c;
code_r0x00cbe714:
  sVar21 = sVar4;
  if (sVar4 == 0) goto LAB_00cbdf2c;
  goto LAB_00cbe6e8;
LAB_00cbdf2c:
  plVar24 = (long *)(lVar15 + 0xe8);
  lVar19 = *plVar24;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 != lVar19) {
    lVar17 = nn::os::GetCurrentThread();
LAB_00cbdf50:
    if (*plVar24 == 0) goto code_r0x00cbdf58;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xf0));
    do {
      if (*plVar24 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xf0));
          while (*plVar24 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = lVar17;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00cbdf64;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00cbdf64:
    bVar6 = false;
    goto LAB_00cbdf68;
  }
  bVar6 = true;
LAB_00cbdf68:
  plVar24 = (long *)FUN_01f898c0(*(undefined8 *)(lVar15 + 0x100),*(undefined8 *)(lVar15 + 0x108));
  if ((*(long **)(lVar15 + 0x108) == plVar24) || (*plVar24 == 0)) {
    plVar24 = (long *)FUN_01f898c0(*(undefined8 *)(lVar15 + 0x138),*(undefined8 *)(lVar15 + 0x140));
    if (*(long **)(lVar15 + 0x140) == plVar24) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      if (*plVar24 != 0) {
        lVar17 = *plVar24 + -0x20;
      }
    }
  }
  else {
    lVar17 = *plVar24 + -0x20;
  }
  if (!bVar6) {
    *(undefined8 *)(lVar15 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xf0));
  }
  if (lVar17 != 0) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00c43ef0(&local_80,lVar17 + 0x98);
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    if (local_80[2] == lVar17 + 0x28) {
      FUN_00e77114(&local_90,&local_80);
    }
    puVar9 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar21 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_68 = *puVar9;
          FUN_00c44438(lVar17 + 0x8040,&local_68);
        }
      }
      else if (sVar21 == 0) goto LAB_00cbe1f4;
    }
    FUN_00e76d44(plVar20,&local_90);
    puVar9 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar21 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        piVar2 = (int *)((long)local_90 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_80 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar17 + 0x8040,&local_80);
        }
      }
      else if (sVar21 == 0) goto LAB_00cbe1f4;
    }
    pcVar18 = *(code **)(*plVar22 + 0x10);
LAB_00cbe00c:
    (*pcVar18)();
  }
LAB_00cbe010:
  lVar17 = *plVar20;
  if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar17 + 0x1a);
    sVar21 = *(short *)(lVar17 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar21) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00cbe050;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00cbe050:
        bVar6 = false;
      }
      if (bVar6) {
        lVar17 = *(long *)(lVar17 + 0x10);
        if (lVar17 != 0) {
          lVar19 = *(long *)(lVar17 + 0x70);
          psVar1 = (short *)(lVar19 + 0x1a);
          do {
            sVar21 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar21 == 1) {
            *(undefined8 *)(lVar19 + 0x10) = 0;
            (**(code **)(*(long *)(lVar17 + -0x28) + 0x50))();
          }
          else if (sVar21 == 0) {
LAB_00cbe874:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          uVar12 = (**(code **)(*plVar22 + 0x18))(uVar25,plVar22,uVar3);
          if ((uVar12 & 1) != 0) {
            *(undefined1 *)(lVar14 + 0x38) = 1;
          }
        }
        break;
      }
      sVar21 = sVar4;
    } while (sVar4 != 0);
  }
LAB_00cbdc50:
  (**(code **)(*(long *)(lVar15 + -0x28) + 0x60))();
  lVar14 = *(long *)(lVar14 + 8);
LAB_00cbd958:
  if (lVar16 == lVar14) goto LAB_00cbd960;
  goto LAB_00cbd944;
code_r0x00cbdf58:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar6) {
    *plVar24 = lVar17;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00cbdf64;
  goto LAB_00cbdf50;
  while (sVar21 = sVar4, sVar4 != 0) {
LAB_00cbe49c:
    sVar4 = *psVar1;
    if (sVar4 == sVar21) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00cbe4c0;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00cbe4c0:
      bVar6 = false;
    }
    if (bVar6) {
      if (*(long *)(lVar14 + 0x10) != 0) {
        plVar24 = (long *)(*(long *)(lVar14 + 0x10) + -0x28);
        uVar12 = (**(code **)(*plVar20 + 0x20))();
        (**(code **)(*plVar24 + 0x60))(plVar24);
        if ((uVar12 & 1) != 0) goto LAB_00cbdadc;
      }
      break;
    }
  }
LAB_00cbdac8:
  (**(code **)(plVar22[2] + 0x28))(plVar20);
  *(undefined1 *)(plVar22 + 7) = 0;
  goto LAB_00cbdadc;
  while (sVar21 = sVar4, sVar4 != 0) {
LAB_00cbe51c:
    sVar4 = *psVar1;
    if (sVar4 == sVar21) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00cbe540;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00cbe540:
      bVar6 = false;
    }
    if (bVar6) {
      if (*(long *)(lVar14 + 0x10) != 0) {
        pcVar18 = *(code **)(*(long *)(*(long *)(lVar14 + 0x10) + -0x28) + 0x60);
        goto LAB_00cbdd54;
      }
      break;
    }
  }
LAB_00cbdc90:
  plVar13 = (long *)(lVar16 + 0xe8);
  lVar15 = *plVar13;
  lVar14 = nn::os::GetCurrentThread();
  if (lVar14 != lVar15) {
    lVar14 = nn::os::GetCurrentThread();
LAB_00cbea54:
    if (*plVar13 == 0) goto code_r0x00cbea60;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0xf0));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0xf0));
          while (*plVar13 == 0) {
            bVar7 = false;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar14;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00cbdcb0;
          }
        } while( true );
      }
      bVar7 = false;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_00cbdcb0;
  }
  bVar7 = true;
LAB_00cbdcb0:
  plVar13 = (long *)FUN_01f899e0(*(undefined8 *)(lVar16 + 0x100),*(undefined8 *)(lVar16 + 0x108));
  if ((*(long **)(lVar16 + 0x108) == plVar13) || (*plVar13 == 0)) {
    plVar13 = (long *)FUN_01f899e0(*(undefined8 *)(lVar16 + 0x138),*(undefined8 *)(lVar16 + 0x140));
    if (*(long **)(lVar16 + 0x140) == plVar13) {
      plVar23 = (long *)0x0;
    }
    else {
      plVar23 = (long *)0x0;
      if (*plVar13 != 0) {
        plVar23 = (long *)(*plVar13 + -0x20);
      }
    }
  }
  else {
    plVar23 = (long *)(*plVar13 + -0x20);
  }
  if (!bVar7) {
    *(undefined8 *)(lVar16 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0xf0));
  }
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(&local_80,plVar23);
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    if ((long *)local_80[2] == plVar23 + 5) {
      FUN_010b7b78(&local_90,&local_80);
    }
    puVar9 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar21 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_68 = *puVar9;
          FUN_00c44438(lVar14 + 0x8040,&local_68);
        }
      }
      else if (sVar21 == 0) {
LAB_00cbe1f4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    FUN_010764a4(plVar24,&local_90);
    puVar9 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar21 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        piVar2 = (int *)((long)local_90 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_80 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar14 + 0x8040,&local_80);
        }
      }
      else if (sVar21 == 0) goto LAB_00cbe1f4;
    }
    pcVar18 = *(code **)(*plVar20 + 0x10);
LAB_00cbdd54:
    (*pcVar18)();
  }
  lVar14 = *plVar24;
  if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar14 + 0x1a);
    sVar21 = *(short *)(lVar14 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar21) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00cbdd98;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00cbdd98:
        bVar6 = false;
      }
      if (bVar6) {
        if (*(long *)(lVar14 + 0x10) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar14 + 0x10) + -0x28) + 0x60))();
          uVar12 = (**(code **)(*plVar20 + 0x18))(uVar25,plVar20,uVar3);
          if ((uVar12 & 1) != 0) {
            *(undefined1 *)(plVar22 + 7) = 1;
          }
        }
        break;
      }
      sVar21 = sVar4;
    } while (sVar4 != 0);
  }
LAB_00cbdadc:
  (**(code **)(*(long *)(lVar16 + -0x28) + 0x60))();
  plVar22 = (long *)plVar22[1];
  goto joined_r0x00cbd96c;
code_r0x00cbea60:
  bVar7 = false;
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar6) {
    *plVar13 = lVar14;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00cbdcb0;
  goto LAB_00cbea54;
}


