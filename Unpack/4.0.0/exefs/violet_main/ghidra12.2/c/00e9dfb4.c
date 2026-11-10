/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e9dfb4; name: FUN_00e9dfb4
 */


void FUN_00e9dfb4(long *param_1,undefined8 param_2,byte param_3)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  undefined1 uVar5;
  short sVar6;
  bool bVar7;
  char cVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  long lVar17;
  byte *pbVar18;
  short sVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined4 local_b1;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined7 local_90;
  undefined4 uStack_89;
  undefined5 uStack_85;
  byte local_7c [4];
  long local_78;
  long lStack_70;
  undefined8 local_68;
  
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) && (lVar17 = *param_1, lVar17 != 0))
     && (*(short *)(lVar17 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar17 + 0x1a);
    sVar19 = *(short *)(lVar17 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar19) {
        cVar8 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar19 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_00e9e054;
        bVar23 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e9e054:
        bVar23 = false;
      }
      if (bVar23) {
        lVar17 = *(long *)(lVar17 + 0x10);
        if (lVar17 == 0) {
          return;
        }
        plVar2 = (long *)(lVar17 + 0xe8);
        lVar12 = nn::os::GetCurrentThread();
        goto LAB_00e9e084;
      }
      sVar19 = sVar6;
    } while (sVar6 != 0);
  }
  return;
code_r0x00e9e420:
  sVar19 = sVar6;
  if (sVar6 == 0) goto LAB_00e9e428;
  goto LAB_00e9e3f4;
code_r0x00e9e6f0:
  cVar8 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(puVar9,0x10);
  if (bVar7) {
    *(undefined8 *)puVar9 = uVar24;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_00e9e6f8;
  goto LAB_00e9e6e8;
LAB_00e9e084:
  if (*plVar2 == 0) {
    cVar8 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar23) {
      *plVar2 = lVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00e9e094;
    goto LAB_00e9e084;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0xf0));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0xf0));
        while (*plVar2 == 0) {
          cVar8 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar23) {
            *plVar2 = lVar12;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00e9e094;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar23) {
      *plVar2 = lVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00e9e094:
  lVar12 = param_1[2];
  lVar22 = *(long *)(lVar17 + 0x20);
  uVar5 = *(undefined1 *)(lVar22 + lVar12 * 0x10);
  bVar10 = (*(code *)param_1[4])(lVar17 + -8,param_2,param_3 & 1);
  *(byte *)(lVar22 + lVar12 * 0x10) = bVar10 & 1;
  uVar13 = (*(code *)param_1[3])(bVar10 & 1,uVar5);
  *(undefined1 *)(lVar17 + 0x140) = 1;
  puVar9 = PTR_DAT_047d6c50;
  if ((uVar13 & 1) != 0) {
    local_e0 = (undefined8 *)0x0;
    uStack_d8 = 0;
    lVar12 = param_1[5];
    if ((lVar12 != 0) && (puVar21 = *(undefined8 **)(lVar12 + 8), puVar21 != (undefined8 *)0x0)) {
      if (((*PTR_DAT_047d6c48 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar11 != 0)) {
        uVar24 = FUN_01cd650c();
        *(undefined8 *)puVar9 = uVar24;
        __cxa_guard_release(PTR_DAT_047d6c48);
      }
      do {
        if (puVar21 == (undefined8 *)puVar9) {
          FUN_00d9f120(&local_e0,param_1 + 5);
          break;
        }
        puVar21 = (undefined8 *)*puVar21;
      } while (puVar21 != (undefined8 *)0x0);
    }
    pbVar18 = (byte *)param_1[8];
    puVar16 = &DAT_cbf29ce484222645;
    bVar10 = *pbVar18;
    while (bVar10 != 0) {
      pbVar18 = pbVar18 + 1;
      puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar10) * 0x100000001b3);
      bVar10 = *pbVar18;
    }
    FUN_00d9ec44(&local_98,2,puVar16);
    local_d0 = (undefined8 *)0x0;
    uStack_c8 = 0;
    FUN_00d9ee10(&local_d0,&local_e0);
    local_c0 = local_98;
    local_b1 = uStack_89;
    local_78 = param_1[0xb];
    local_7c[0] = param_3 & 1;
    lStack_70 = local_78;
    if (local_d0 == (undefined8 *)0x0) {
LAB_00e9e258:
      puVar21 = (undefined8 *)0x0;
    }
    else {
      if (*(short *)((long)local_d0 + 0x1a) != 0) {
        if (local_d0 == (undefined8 *)0x0) goto LAB_00e9e258;
        if (*(short *)((long)local_d0 + 0x1a) == 0) goto LAB_00e9e428;
        psVar1 = (short *)((long)local_d0 + 0x1a);
        sVar19 = *(short *)((long)local_d0 + 0x1a);
LAB_00e9e3f4:
        sVar6 = *psVar1;
        if (sVar6 == sVar19) {
          cVar8 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar19 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_00e9e418;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00e9e418:
          bVar23 = false;
        }
        if (!bVar23) goto code_r0x00e9e420;
        lVar12 = local_d0[2];
        if (lVar12 == 0) goto LAB_00e9e428;
        plVar2 = (long *)(lVar12 + 0x58);
        do {
          lVar22 = *plVar2;
          cVar8 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar23) {
            *plVar2 = lVar22;
            *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)(lVar12 + 0x60);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar14 = nn::os::GetCurrentThread();
        if (lVar14 == lVar22) {
          bVar23 = true;
        }
        else {
          lVar22 = nn::os::GetCurrentThread();
          do {
            lVar14 = *plVar2;
            lVar20 = *(long *)(lVar12 + 0x60);
            cVar8 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar23) {
              *plVar2 = lVar14;
              *(long *)(lVar12 + 0x60) = lVar20;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          do {
            while ((lVar14 != 0 && (lVar22 != lVar14))) {
              nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x68));
              do {
                lVar14 = *plVar2;
                lVar20 = *(long *)(lVar12 + 0x60);
                cVar8 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar23) {
                  *plVar2 = lVar14;
                  *(long *)(lVar12 + 0x60) = lVar20;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            do {
              lVar4 = *plVar2;
              if (lVar4 != lVar14 || *(long *)(lVar12 + 0x60) != lVar20) {
                bVar23 = false;
                ClearExclusiveLocal();
                goto LAB_00e9e4ac;
              }
              cVar8 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar23) {
                *plVar2 = lVar14;
                *(long *)(lVar12 + 0x5c) = lVar20 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            bVar23 = true;
LAB_00e9e4ac:
            lVar14 = lVar4;
            lVar20 = *(long *)(lVar12 + 0x60);
          } while (!bVar23);
          bVar23 = false;
        }
        plVar15 = *(long **)(lVar12 + 0x188);
        if (plVar15 == (long *)0x0) {
          local_a8 = (undefined8 *)0x0;
          uStack_a0 = 0;
        }
        else {
          (**(code **)(*plVar15 + 0x18))(&local_98);
          local_a8 = (undefined8 *)0x0;
          uStack_a0 = 0;
          if ((long *)local_98[2] == plVar15 + 5) {
            FUN_00cbc6dc(&local_a8,&local_98);
          }
          puVar21 = local_98;
          if (local_98 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_98 + 3);
            do {
              sVar19 = *psVar1;
              cVar8 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar19 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (sVar19 == 1) {
              piVar3 = (int *)((long)local_98 + 0x1c);
              do {
                iVar11 = *piVar3;
                cVar8 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar7) {
                  *piVar3 = -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar11 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar22 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar22;
                local_68 = *puVar21;
                FUN_00c44438(lVar22 + 0x8040,&local_68);
              }
            }
            else if (sVar19 == 0) goto LAB_00e9e2c4;
          }
        }
        local_98 = (undefined8 *)CONCAT71(local_98._1_7_,2);
        local_90 = 0;
        uStack_89 = 0;
        uStack_85 = 0;
        FUN_00ca1ea4(&local_90,&local_a8);
        if (((*PTR_DAT_047d6c20 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c20);
        }
        lVar22 = *(long *)PTR_DAT_047d6c28;
        *(long *)PTR_DAT_047d6c30 = lVar22;
        if (*(undefined8 **)(lVar12 + 0x28) == (undefined8 *)0x0) {
          uVar24 = 0;
        }
        else {
          uVar24 = **(undefined8 **)(lVar12 + 0x28);
        }
        if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar14 = nn::os::GetTlsValue(DAT_04865a30);
        if ((lVar14 != 0) && (*(int *)(lVar14 + 0x90) != -1)) {
          *(undefined8 *)(lVar22 + (long)*(int *)(lVar14 + 0x90) * 8 + 0x6a0) = uVar24;
        }
        puVar9 = PTR_DAT_047d38f8;
        lVar20 = *(long *)(lVar12 + 0xd8);
        lVar14 = *(long *)PTR_DAT_047d38f8;
        lVar22 = nn::os::GetCurrentThread();
        if (lVar22 != lVar14) {
          uVar24 = nn::os::GetCurrentThread();
LAB_00e9e6e8:
          if (*(long *)puVar9 == 0) goto code_r0x00e9e6f0;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar9 + 8));
          do {
            if (*(long *)puVar9 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar9 + 8));
                while (*(long *)puVar9 == 0) {
                  cVar8 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar9,0x10);
                  if (bVar7) {
                    *(undefined8 *)puVar9 = uVar24;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  if (cVar8 == '\0') goto LAB_00e9e6f8;
                }
              } while( true );
            }
            cVar8 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar7) {
              *(undefined8 *)puVar9 = uVar24;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
LAB_00e9e6f8:
          FUN_011fb7a4(*(undefined8 *)(lVar20 + 0x70),*(undefined8 *)(lVar20 + 0x80),
                       *(undefined8 *)(lVar12 + 0x98),&local_c0,&local_98,&lStack_70,&local_78,
                       local_7c);
          *(undefined8 *)puVar9 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar9 + 8));
          goto LAB_00e9e5d8;
        }
        FUN_011fb7a4(*(undefined8 *)(lVar20 + 0x70),*(undefined8 *)(lVar20 + 0x80),
                     *(undefined8 *)(lVar12 + 0x98),&local_c0,&local_98,&lStack_70,&local_78,
                     local_7c);
LAB_00e9e5d8:
        FUN_00cecfd8(&local_98);
        puVar21 = local_a8;
        if (local_a8 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_a8 + 3);
          do {
            sVar19 = *psVar1;
            cVar8 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar19 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar19 == 1) {
            piVar3 = (int *)((long)local_a8 + 0x1c);
            do {
              iVar11 = *piVar3;
              cVar8 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_68 = *puVar21;
              FUN_00c44438(lVar22 + 0x8040,&local_68);
            }
          }
          else if (sVar19 == 0) goto LAB_00e9e2c4;
        }
        if (!bVar23) {
          do {
            lVar22 = *plVar2;
            lVar14 = *(long *)(lVar12 + 0x60);
            cVar8 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar23) {
              *plVar2 = lVar22;
              *(long *)(lVar12 + 0x60) = lVar14;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          do {
            lVar20 = *plVar2;
            lVar4 = *(long *)(lVar12 + 0x60);
            if (lVar20 != lVar22 || lVar4 != lVar14) {
              bVar23 = false;
              ClearExclusiveLocal();
              goto joined_r0x00e9e670;
            }
            cVar8 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar23) {
              *plVar2 = lVar22;
              *(long *)(lVar12 + 0x5c) = lVar14 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          bVar23 = true;
joined_r0x00e9e670:
          if (!bVar23) {
            do {
              lVar22 = *plVar2;
              lVar14 = *(long *)(lVar12 + 0x60);
              if (lVar22 != lVar20 || lVar14 != lVar4) {
                bVar23 = false;
                ClearExclusiveLocal();
                lVar20 = lVar22;
                lVar4 = lVar14;
                goto joined_r0x00e9e670;
              }
              cVar8 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar23) {
                *plVar2 = lVar20;
                *(long *)(lVar12 + 0x5c) = lVar4 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            bVar23 = true;
            lVar20 = lVar22;
            lVar4 = lVar14;
            goto joined_r0x00e9e670;
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x68));
        }
        lVar22 = *(long *)(lVar12 + 8);
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar19 = *psVar1;
          cVar8 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar19 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar19 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
        }
        else if (sVar19 == 0) goto LAB_00e9e10c;
      }
LAB_00e9e428:
      puVar21 = local_d0;
    }
    if (puVar21 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar21 + 3);
      do {
        sVar19 = *psVar1;
        cVar8 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)puVar21 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar8 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar23) {
            *piVar3 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_98 = (undefined8 *)*puVar21;
          FUN_00c44438(lVar12 + 0x8040,&local_98);
        }
      }
      else if (sVar19 == 0) goto LAB_00e9e2c4;
    }
    puVar21 = local_e0;
    if (local_e0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_e0 + 3);
      do {
        sVar19 = *psVar1;
        cVar8 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar19 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar8 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar23) {
            *piVar3 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_98 = (undefined8 *)*puVar21;
          FUN_00c44438(lVar12 + 0x8040,&local_98);
        }
      }
      else if (sVar19 == 0) {
LAB_00e9e2c4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  *(undefined8 *)(lVar17 + 0xe8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0xf0));
  lVar12 = *(long *)(lVar17 + 8);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar19 = *psVar1;
    cVar8 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar23) {
      *psVar1 = sVar19 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar19 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*(long *)(lVar17 + -0x28) + 0x50))((long *)(lVar17 + -0x28));
    return;
  }
  if (sVar19 != 0) {
    return;
  }
LAB_00e9e10c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


