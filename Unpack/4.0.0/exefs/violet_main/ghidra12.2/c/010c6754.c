/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010c6754; name: FUN_010c6754
 */


void FUN_010c6754(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long *param_4,
                 long param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  LightEventType *pLVar4;
  undefined1 uVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  long lVar22;
  byte *pbVar23;
  bool bVar24;
  short sVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined4 local_c1;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined7 local_a0;
  undefined4 uStack_99;
  undefined5 uStack_95;
  undefined8 local_90 [2];
  
  if ((((*param_4 != 0) && (*(short *)(*param_4 + 0x1a) != 0)) && (lVar22 = *param_4, lVar22 != 0))
     && (*(short *)(lVar22 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar22 + 0x1a);
    sVar25 = *(short *)(lVar22 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar25) {
        cVar9 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar24) {
          *psVar1 = sVar25 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 != '\0') goto LAB_010c6800;
        bVar24 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_010c6800:
        bVar24 = false;
      }
      if (bVar24) {
        lVar22 = *(long *)(lVar22 + 0x10);
        if (lVar22 == 0) {
          return;
        }
        plVar27 = (long *)(lVar22 + 0xe8);
        lVar15 = nn::os::GetCurrentThread();
        goto LAB_010c6840;
      }
      sVar25 = sVar6;
    } while (sVar6 != 0);
  }
  return;
code_r0x010c6c28:
  sVar25 = sVar6;
  if (sVar6 == 0) goto LAB_010c6990;
  goto LAB_010c6bfc;
code_r0x010c70e4:
  cVar9 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(puVar10,0x10);
  if (bVar7) {
    *(undefined8 *)puVar10 = uVar28;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_010c70ec;
  goto LAB_010c70d4;
code_r0x010c7114:
  cVar9 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar10,0x10);
  if (bVar8) {
    *(undefined8 *)puVar10 = uVar20;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_010c711c;
  goto LAB_010c7104;
code_r0x010c748c:
  cVar9 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar10,0x10);
  if (bVar8) {
    *(undefined8 *)puVar10 = uVar20;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_010c7494;
  goto LAB_010c747c;
LAB_010c6840:
  if (*plVar27 == 0) {
    cVar9 = '\x01';
    bVar24 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar24) {
      *plVar27 = lVar15;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_010c6850;
    goto LAB_010c6840;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
  do {
    if (*plVar27 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
        while (*plVar27 == 0) {
          cVar9 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar24) {
            *plVar27 = lVar15;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_010c6850;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar24 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar24) {
      *plVar27 = lVar15;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_010c6850:
  lVar15 = param_4[2];
  lVar31 = *(long *)(lVar22 + 0x20);
  uVar5 = *(undefined1 *)(lVar31 + lVar15 * 0x10);
  bVar11 = (*(code *)param_4[4])
                     (param_1._0_8_,param_2._0_8_,param_3,lVar22 + -8,param_5,param_6,param_7,
                      param_8);
  *(byte *)(lVar31 + lVar15 * 0x10) = bVar11 & 1;
  uVar16 = (*(code *)param_4[3])(bVar11 & 1,uVar5);
  *(undefined1 *)(lVar22 + 0x140) = 1;
  puVar10 = PTR_DAT_047d6c50;
  if ((uVar16 & 1) != 0) {
    local_f0 = (undefined8 *)0x0;
    uStack_e8 = 0;
    lVar31 = param_4[5];
    lVar15 = 0;
    if (param_5 != 0) {
      lVar15 = param_5 + -0x20;
    }
    if ((lVar31 != 0) && (puVar26 = *(undefined8 **)(lVar31 + 8), puVar26 != (undefined8 *)0x0)) {
      if (((*PTR_DAT_047d6c48 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar14 != 0)) {
        uVar28 = FUN_01cd650c();
        *(undefined8 *)puVar10 = uVar28;
        __cxa_guard_release(PTR_DAT_047d6c48);
      }
      do {
        if (puVar26 == (undefined8 *)puVar10) {
          FUN_00d9f120(&local_f0,param_4 + 5);
          break;
        }
        puVar26 = (undefined8 *)*puVar26;
      } while (puVar26 != (undefined8 *)0x0);
    }
    pbVar23 = (byte *)param_4[8];
    puVar21 = &DAT_cbf29ce484222645;
    bVar11 = *pbVar23;
    while (bVar11 != 0) {
      pbVar23 = pbVar23 + 1;
      puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar11) * 0x100000001b3);
      bVar11 = *pbVar23;
    }
    FUN_00d9ec44(&local_a8,2,puVar21);
    local_e0 = (undefined8 *)0x0;
    uStack_d8 = 0;
    FUN_00d9ee10(&local_e0,&local_f0);
    plVar27 = (long *)0x0;
    local_d0 = local_a8;
    local_c1 = uStack_99;
    lVar31 = param_4[0xb];
    lVar15 = *(long *)(lVar15 + 0x60);
    if (lVar15 != 0) {
      if (*(short *)(lVar15 + 0x1a) == 0) {
        plVar27 = (long *)0x0;
      }
      else {
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar25 = *(short *)(lVar15 + 0x1a);
        do {
          sVar6 = *psVar1;
          if (sVar6 == sVar25) {
            cVar9 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar24) {
              *psVar1 = sVar25 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 != '\0') goto LAB_010c71d8;
            bVar24 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_010c71d8:
            bVar24 = false;
          }
          if (bVar24) {
            plVar27 = (long *)0x0;
            if (*(long *)(lVar15 + 0x10) != 0) {
              plVar27 = (long *)(*(long *)(lVar15 + 0x10) + -0x28);
            }
            break;
          }
          plVar27 = (long *)0x0;
          sVar25 = sVar6;
        } while (sVar6 != 0);
      }
    }
    if (((local_e0 != (undefined8 *)0x0) && (*(short *)((long)local_e0 + 0x1a) != 0)) &&
       ((local_e0 != (undefined8 *)0x0 && (*(short *)((long)local_e0 + 0x1a) != 0)))) {
      psVar1 = (short *)((long)local_e0 + 0x1a);
      sVar25 = *(short *)((long)local_e0 + 0x1a);
LAB_010c6bfc:
      sVar6 = *psVar1;
      if (sVar6 == sVar25) {
        cVar9 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar24) {
          *psVar1 = sVar25 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 != '\0') goto LAB_010c6c20;
        bVar24 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_010c6c20:
        bVar24 = false;
      }
      if (!bVar24) goto code_r0x010c6c28;
      lVar15 = local_e0[2];
      if (lVar15 == 0) goto LAB_010c6990;
      plVar3 = (long *)(lVar15 + 0x58);
      do {
        lVar18 = *plVar3;
        cVar9 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar24) {
          *plVar3 = lVar18;
          *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)(lVar15 + 0x60);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      lVar17 = nn::os::GetCurrentThread();
      if (lVar17 == lVar18) {
        bVar24 = true;
      }
      else {
        lVar18 = nn::os::GetCurrentThread();
        do {
          lVar17 = *plVar3;
          lVar29 = *(long *)(lVar15 + 0x60);
          cVar9 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar24) {
            *plVar3 = lVar17;
            *(long *)(lVar15 + 0x60) = lVar29;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        do {
          while ((lVar17 != 0 && (lVar18 != lVar17))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x68));
            do {
              lVar17 = *plVar3;
              lVar29 = *(long *)(lVar15 + 0x60);
              cVar9 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar24) {
                *plVar3 = lVar17;
                *(long *)(lVar15 + 0x60) = lVar29;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          do {
            lVar30 = *plVar3;
            if (lVar30 != lVar17 || *(long *)(lVar15 + 0x60) != lVar29) {
              bVar24 = false;
              ClearExclusiveLocal();
              goto LAB_010c6cb8;
            }
            cVar9 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar24) {
              *plVar3 = lVar17;
              *(long *)(lVar15 + 0x5c) = lVar29 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          bVar24 = true;
LAB_010c6cb8:
          lVar17 = lVar30;
          lVar29 = *(long *)(lVar15 + 0x60);
        } while (!bVar24);
        bVar24 = false;
      }
      plVar19 = *(long **)(lVar15 + 0x188);
      if (plVar19 == (long *)0x0) {
        local_b8 = (undefined8 *)0x0;
        uStack_b0 = 0;
      }
      else {
        (**(code **)(*plVar19 + 0x18))(&local_a8);
        local_b8 = (undefined8 *)0x0;
        uStack_b0 = 0;
        if ((long *)local_a8[2] == plVar19 + 5) {
          FUN_00cbc6dc(&local_b8,&local_a8);
        }
        puVar26 = local_a8;
        if (local_a8 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_a8 + 3);
          do {
            sVar25 = *psVar1;
            cVar9 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar25 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar25 == 1) {
            piVar2 = (int *)((long)local_a8 + 0x1c);
            do {
              iVar14 = *piVar2;
              cVar9 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar14 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar18 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar18;
              local_90[0] = *puVar26;
              FUN_00c44438(lVar18 + 0x8040,local_90);
            }
          }
          else if (sVar25 == 0) goto LAB_010c6a98;
        }
      }
      local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,2);
      local_a0 = 0;
      uStack_99 = 0;
      uStack_95 = 0;
      FUN_00ca1ea4(&local_a0,&local_b8);
      if (((*PTR_DAT_047d6c20 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar14 != 0)) {
        FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c20);
      }
      lVar18 = *(long *)PTR_DAT_047d6c28;
      *(long *)PTR_DAT_047d6c30 = lVar18;
      if (*(undefined8 **)(lVar15 + 0x28) == (undefined8 *)0x0) {
        uVar28 = 0;
      }
      else {
        uVar28 = **(undefined8 **)(lVar15 + 0x28);
      }
      if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar17 = nn::os::GetTlsValue(DAT_04865a30);
      if ((lVar17 != 0) && (*(int *)(lVar17 + 0x90) != -1)) {
        *(undefined8 *)(lVar18 + (long)*(int *)(lVar17 + 0x90) * 8 + 0x6a0) = uVar28;
      }
      lVar29 = *(long *)(lVar15 + 0xd8);
      lVar17 = *(long *)PTR_DAT_047d38f8;
      lVar18 = nn::os::GetCurrentThread();
      if (lVar18 != lVar17) {
        uVar28 = nn::os::GetCurrentThread();
        puVar10 = PTR_DAT_047d38f8;
LAB_010c70d4:
        if (*(long *)PTR_DAT_047d38f8 == 0) goto code_r0x010c70e4;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(PTR_DAT_047d38f8 + 8));
        puVar10 = PTR_DAT_047d38f8;
        do {
          if (*(long *)PTR_DAT_047d38f8 != 0) {
            pLVar4 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent(pLVar4);
              while (*(long *)PTR_DAT_047d38f8 == 0) {
                cVar9 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(PTR_DAT_047d38f8,0x10);
                if (bVar7) {
                  *(undefined8 *)PTR_DAT_047d38f8 = uVar28;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_010c70ec;
              }
            } while( true );
          }
          cVar9 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar10,0x10);
          if (bVar7) {
            *(undefined8 *)puVar10 = uVar28;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_010c70ec:
        bVar7 = false;
        goto LAB_010c6dd4;
      }
      bVar7 = true;
LAB_010c6dd4:
      lVar17 = *(long *)(lVar29 + 0x80);
      lVar18 = *(long *)(lVar15 + 0x98);
      uVar28 = *(undefined8 *)(lVar29 + 0x70);
      iVar14 = 0xd;
      if (lVar18 == 0) {
        iVar14 = 0xe;
      }
      if (-1 < *(int *)(lVar17 + 0x58)) {
        lVar30 = *(long *)PTR_DAT_047d38f8;
        lVar29 = nn::os::GetCurrentThread();
        if (lVar29 != lVar30) {
          uVar20 = nn::os::GetCurrentThread();
          puVar10 = PTR_DAT_047d38f8;
LAB_010c7104:
          if (*(long *)PTR_DAT_047d38f8 == 0) goto code_r0x010c7114;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(PTR_DAT_047d38f8 + 8));
          puVar10 = PTR_DAT_047d38f8;
          do {
            if (*(long *)PTR_DAT_047d38f8 != 0) {
              pLVar4 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent(pLVar4);
                while (*(long *)PTR_DAT_047d38f8 == 0) {
                  cVar9 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(PTR_DAT_047d38f8,0x10);
                  if (bVar8) {
                    *(undefined8 *)PTR_DAT_047d38f8 = uVar20;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                  if (cVar9 == '\0') goto LAB_010c711c;
                }
              } while( true );
            }
            cVar9 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar10,0x10);
            if (bVar8) {
              *(undefined8 *)puVar10 = uVar20;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
LAB_010c711c:
          bVar8 = false;
          goto LAB_010c6e20;
        }
        bVar8 = true;
LAB_010c6e20:
        iVar12 = FUN_00c5fc50(uVar28,0xfff0b9d8,(long)*(int *)(lVar17 + 0x5c));
        iVar13 = *(int *)(lVar17 + 0x58);
        if (!bVar8) {
          pLVar4 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
          *(undefined8 *)PTR_DAT_047d38f8 = 0;
          nn::os::SignalLightEvent(pLVar4);
        }
        if (iVar12 == iVar13) {
          if (lVar18 == 0) {
            iVar13 = FUN_00c5d9a0(uVar28,0xffffffff,&local_d0);
            if ((iVar13 == 6) && (-1 < *(int *)(lVar17 + 0x58))) {
              lVar30 = *(long *)PTR_DAT_047d38f8;
              lVar29 = nn::os::GetCurrentThread();
              if (lVar29 != lVar30) {
                uVar20 = nn::os::GetCurrentThread();
                puVar10 = PTR_DAT_047d38f8;
LAB_010c747c:
                if (*(long *)PTR_DAT_047d38f8 == 0) goto code_r0x010c748c;
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(PTR_DAT_047d38f8 + 8));
                puVar10 = PTR_DAT_047d38f8;
                do {
                  if (*(long *)PTR_DAT_047d38f8 != 0) {
                    pLVar4 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
                    do {
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent(pLVar4);
                      while (*(long *)PTR_DAT_047d38f8 == 0) {
                        cVar9 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(PTR_DAT_047d38f8,0x10);
                        if (bVar8) {
                          *(undefined8 *)PTR_DAT_047d38f8 = uVar20;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                        if (cVar9 == '\0') goto LAB_010c7494;
                      }
                    } while( true );
                  }
                  cVar9 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar10,0x10);
                  if (bVar8) {
                    *(undefined8 *)puVar10 = uVar20;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
LAB_010c7494:
                bVar8 = false;
                goto LAB_010c742c;
              }
              bVar8 = true;
LAB_010c742c:
              iVar12 = FUN_00c5fc50(uVar28,0xfff0b9d8,(long)*(int *)(lVar17 + 0x5c));
              iVar13 = *(int *)(lVar17 + 0x58);
              if (!bVar8) {
                pLVar4 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
                *(undefined8 *)PTR_DAT_047d38f8 = 0;
                nn::os::SignalLightEvent(pLVar4);
              }
              if (iVar12 == iVar13) goto LAB_010c6e8c;
            }
          }
          else {
            iVar13 = FUN_00c5d9a0(uVar28,0xffffffff,lVar18);
            if ((iVar13 == 5) && (iVar13 = FUN_00c5d9a0(uVar28,0xffffffff,&local_d0), iVar13 == 6))
            {
LAB_010c6e8c:
              FUN_00ca1900(uVar28,&local_a8);
              FUN_02207d30(uVar28,lVar31);
              FUN_02207d30(uVar28,plVar27);
              FUN_00c5d960(uVar28,param_6);
              FUN_00c5d960(uVar28,param_7);
              FUN_00c5d960(uVar28,param_8);
              FUN_00c46da0((double)param_1._0_4_,uVar28);
              FUN_00c46da0((double)param_1._4_4_,uVar28);
              FUN_00c46da0((double)param_1._8_4_,uVar28);
              FUN_00c46da0((double)param_2._4_4_,uVar28);
              FUN_00c46da0((double)param_2._4_4_,uVar28);
              FUN_00c46da0((double)param_2._8_4_,uVar28);
              FUN_00c46da0((double)param_3,uVar28);
              iVar13 = FUN_00c5d980(uVar28);
              FUN_00c5dbe0(uVar28,&LAB_022056f0,0);
              FUN_00c5dcd0(uVar28,iVar13 - iVar14,1);
              iVar14 = FUN_00c5ddd0(uVar28,iVar14,0,iVar13 - iVar14,0,0);
              if (iVar14 != 0) {
                uVar28 = FUN_00c646d0(uVar28,0xffffffff,0);
                *(undefined8 *)PTR_DAT_047d4238 = uVar28;
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("0","CallImpl",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/invoker.h"
                           ,0x89,"Lua panic: function(%s.%s) error: %s",lVar18,&local_d0,uVar28);
              }
            }
          }
        }
      }
      FUN_00c5db00(uVar28,0);
      if (!bVar7) {
        pLVar4 = (LightEventType *)(PTR_DAT_047d38f8 + 8);
        *(undefined8 *)PTR_DAT_047d38f8 = 0;
        nn::os::SignalLightEvent(pLVar4);
      }
      FUN_00cecfd8(&local_a8);
      puVar26 = local_b8;
      if (local_b8 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_b8 + 3);
        do {
          sVar25 = *psVar1;
          cVar9 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar25 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar25 == 1) {
          piVar2 = (int *)((long)local_b8 + 0x1c);
          do {
            iVar14 = *piVar2;
            cVar9 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar31 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar31;
            local_90[0] = *puVar26;
            FUN_00c44438(lVar31 + 0x8040,local_90);
          }
        }
        else if (sVar25 == 0) goto LAB_010c6a98;
      }
      if (!bVar24) {
        do {
          lVar31 = *plVar3;
          lVar18 = *(long *)(lVar15 + 0x60);
          cVar9 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar24) {
            *plVar3 = lVar31;
            *(long *)(lVar15 + 0x60) = lVar18;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        do {
          lVar17 = *plVar3;
          lVar29 = *(long *)(lVar15 + 0x60);
          if (lVar17 != lVar31 || lVar29 != lVar18) {
            bVar24 = false;
            ClearExclusiveLocal();
            goto joined_r0x010c704c;
          }
          cVar9 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar24) {
            *plVar3 = lVar31;
            *(long *)(lVar15 + 0x5c) = lVar18 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        bVar24 = true;
joined_r0x010c704c:
        if (!bVar24) {
          do {
            lVar31 = *plVar3;
            lVar18 = *(long *)(lVar15 + 0x60);
            if (lVar31 != lVar17 || lVar18 != lVar29) {
              bVar24 = false;
              ClearExclusiveLocal();
              lVar17 = lVar31;
              lVar29 = lVar18;
              goto joined_r0x010c704c;
            }
            cVar9 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar24) {
              *plVar3 = lVar17;
              *(long *)(lVar15 + 0x5c) = lVar29 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          bVar24 = true;
          lVar17 = lVar31;
          lVar29 = lVar18;
          goto joined_r0x010c704c;
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x68));
      }
      lVar31 = *(long *)(lVar15 + 8);
      psVar1 = (short *)(lVar31 + 0x1a);
      do {
        sVar25 = *psVar1;
        cVar9 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar24) {
          *psVar1 = sVar25 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar25 == 1) {
        *(undefined8 *)(lVar31 + 0x10) = 0;
        (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))();
      }
      else if (sVar25 == 0) goto LAB_010c69e8;
    }
LAB_010c6990:
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 0x60))(plVar27);
    }
    puVar26 = local_e0;
    if (local_e0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_e0 + 3);
      do {
        sVar25 = *psVar1;
        cVar9 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar24) {
          *psVar1 = sVar25 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar25 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar14 = *piVar2;
          cVar9 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar24) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar14 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_a8 = (undefined8 *)*puVar26;
          FUN_00c44438(lVar15 + 0x8040,&local_a8);
        }
      }
      else if (sVar25 == 0) goto LAB_010c6a98;
    }
    puVar26 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar25 = *psVar1;
        cVar9 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar24) {
          *psVar1 = sVar25 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar25 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar14 = *piVar2;
          cVar9 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar24) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar14 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_a8 = (undefined8 *)*puVar26;
          FUN_00c44438(lVar15 + 0x8040,&local_a8);
        }
      }
      else if (sVar25 == 0) {
LAB_010c6a98:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  *(undefined8 *)(lVar22 + 0xe8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
  lVar15 = *(long *)(lVar22 + 8);
  psVar1 = (short *)(lVar15 + 0x1a);
  do {
    sVar25 = *psVar1;
    cVar9 = '\x01';
    bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar24) {
      *psVar1 = sVar25 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar25 == 1) {
    *(undefined8 *)(lVar15 + 0x10) = 0;
    (**(code **)(*(long *)(lVar22 + -0x28) + 0x50))((long *)(lVar22 + -0x28));
    return;
  }
  if (sVar25 != 0) {
    return;
  }
LAB_010c69e8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


