/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dfba48; name: FUN_00dfba48
 */


void FUN_00dfba48(long *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long *plVar29;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  local_90 = param_2;
  (**(code **)(*param_1 + 0x18))(local_78);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  plVar23 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar23 = param_1 + 5;
  }
  if ((long *)local_78[0][2] == plVar23) {
    FUN_00c9ea00(&local_88,local_78);
  }
  puVar21 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_78[0] + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68 = *puVar21;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) goto LAB_00dfbc40;
  }
  puVar21 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    iVar13 = *(int *)((long)local_88 + 0x1c);
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_78[0] = (undefined8 *)*puVar21;
          FUN_00c44438(lVar14 + 0x8040,local_78);
        }
      }
      else if (sVar3 == 0) goto LAB_00dfbc40;
    }
    plVar8 = local_90;
    if (iVar13 != -1) {
      if (param_1[0x71] == 0) {
        bVar11 = true;
      }
      else {
        bVar11 = *(long *)(param_1[0x71] + 0x10) == 0;
      }
      if (!bVar11) {
        return;
      }
      if (local_90 == (long *)0x0) {
        return;
      }
      plVar29 = local_90 + 0x78;
      lVar20 = *plVar29;
      lVar14 = nn::os::GetCurrentThread();
      if (lVar14 != lVar20) {
        lVar14 = nn::os::GetCurrentThread();
LAB_00dfbb10:
        if (*plVar29 == 0) goto code_r0x00dfbb18;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x79));
        do {
          if (*plVar29 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x79));
              while (*plVar29 == 0) {
                cVar5 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar11) {
                  *plVar29 = lVar14;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00dfbb20;
              }
            } while( true );
          }
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar11) {
            *plVar29 = lVar14;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00dfbb20:
        bVar11 = false;
        goto LAB_00dfbb24;
      }
      plVar29 = (long *)0x0;
      bVar11 = true;
LAB_00dfbb24:
      plVar22 = (long *)plVar8[0x7b];
      plVar24 = (long *)plVar8[0x7c];
      if (plVar22 != plVar24) {
        if ((*plVar22 != 0) && (*(short *)(*plVar22 + 0x1a) != 0)) {
          do {
            plVar22 = plVar22 + 2;
            if (plVar24 == plVar22) {
              plVar22 = plVar24;
              goto LAB_00dfbcf8;
            }
            if (*plVar22 == 0) goto LAB_00dfbcf8;
          } while (*(short *)(*plVar22 + 0x1a) != 0);
        }
      }
LAB_00dfbcf8:
      plVar17 = plVar22;
      if ((plVar22 != plVar24) && (plVar22 + 2 != plVar24)) {
        lVar14 = plVar22[2];
        if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
          FUN_00d0a34c(plVar22);
          plVar17 = plVar22 + 2;
        }
        plVar22 = plVar22 + 4;
        if (plVar22 != plVar24) {
          do {
            if ((*plVar22 != 0) && (*(short *)(*plVar22 + 0x1a) != 0)) {
              FUN_00d0a34c(plVar17,plVar22);
              plVar17 = plVar17 + 2;
            }
            plVar22 = plVar22 + 2;
          } while (plVar24 != plVar22);
        }
      }
      plVar22 = (long *)plVar8[0x7c];
      lVar14 = (long)plVar22 - (long)plVar17;
      if (lVar14 == 0) {
LAB_00dfbd10:
        (**(code **)(*param_1 + 0x18))(local_78,param_1);
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        if ((long *)local_78[0][2] == plVar23) {
          FUN_00c9ea00(&local_88,local_78);
        }
        puVar21 = local_78[0];
        if (local_78[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78[0] + 3);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_78[0] + 0x1c);
            do {
              iVar13 = *piVar2;
              cVar5 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_68 = *puVar21;
              FUN_00c44438(lVar14 + 0x8040,&local_68);
            }
          }
          else if (sVar3 == 0) goto LAB_00dfbc40;
        }
        puVar21 = (undefined8 *)plVar8[0x7c];
        if (puVar21 < (undefined8 *)plVar8[0x7d]) {
          lVar14 = plVar8[0x7e];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar20 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar20 == 0) {
            *puVar21 = 0;
            puVar21[1] = 0;
            FUN_00d0a34c(puVar21,&local_88);
          }
          else {
            if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_00dfc9b8;
            *(long *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = lVar14;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
            *puVar21 = 0;
            puVar21[1] = 0;
            FUN_00d0a34c(puVar21,&local_88);
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
          }
          plVar8[0x7c] = (long)(puVar21 + 2);
        }
        else {
          lVar14 = (long)puVar21 - plVar8[0x7b] >> 4;
          uVar15 = lVar14 + 1;
          if (uVar15 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar20 = plVar8[0x7d] - plVar8[0x7b];
          uVar18 = lVar20 >> 3;
          if (uVar15 <= uVar18) {
            uVar15 = uVar18;
          }
          if (0x7fffffffffffffe < (ulong)(lVar20 >> 4)) {
            uVar15 = 0xfffffffffffffff;
          }
          if (uVar15 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = (**(code **)(*(long *)plVar8[0x7e] + 0x10))((long *)plVar8[0x7e],uVar15 << 4,8)
            ;
            if (lVar20 == 0) {
              (**(code **)(*(long *)plVar8[0x7e] + 0xe8))();
            }
          }
          lVar25 = plVar8[0x7e];
          puVar21 = (undefined8 *)(lVar20 + lVar14 * 0x10);
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar14 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar14 == 0) {
            *puVar21 = 0;
            puVar21[1] = 0;
            FUN_00d0a34c(puVar21,&local_88);
          }
          else {
            if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_00dfc9b8:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar25;
            *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
            *puVar21 = 0;
            puVar21[1] = 0;
            FUN_00d0a34c(puVar21,&local_88);
            *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
          }
          puVar26 = (undefined8 *)plVar8[0x7b];
          puVar27 = (undefined8 *)plVar8[0x7c];
          puVar28 = puVar21;
          if (puVar27 == puVar26) {
            puVar16 = puVar21;
            puVar28 = puVar26;
          }
          else {
            do {
              puVar16 = puVar28 + -2;
              lVar14 = plVar8[0x7e];
              puVar27 = puVar27 + -2;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar25 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar25 == 0) {
                *puVar16 = 0;
                puVar28[-1] = 0;
                FUN_00d0a34c(puVar16,puVar27);
              }
              else {
                if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_00dfc9b8;
                *(long *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = lVar14;
                *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
                *puVar16 = 0;
                puVar28[-1] = 0;
                FUN_00d0a34c(puVar16,puVar27);
                *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
              }
              puVar28 = puVar16;
            } while (puVar26 != puVar27);
            puVar28 = (undefined8 *)plVar8[0x7b];
            puVar26 = (undefined8 *)plVar8[0x7c];
          }
          lVar14 = plVar8[0x7d];
          plVar8[0x7b] = (long)puVar16;
          plVar8[0x7c] = (long)(puVar21 + 2);
          plVar8[0x7d] = lVar20 + uVar15 * 0x10;
          puVar6 = PTR_DAT_047d3918;
          if (puVar26 != puVar28) {
            pbVar19 = PTR_DAT_047d3908;
            plVar23 = (long *)PTR_DAT_047d3910;
            do {
              puVar26 = puVar26 + -2;
              puVar21 = (undefined8 *)*puVar26;
              if (puVar21 != (undefined8 *)0x0) {
                psVar1 = (short *)(puVar21 + 3);
                do {
                  sVar3 = *psVar1;
                  cVar5 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar4) {
                    *psVar1 = sVar3 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar3 == 1) {
                  piVar2 = (int *)((long)puVar21 + 0x1c);
                  do {
                    iVar13 = *piVar2;
                    cVar5 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                      *piVar2 = -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar13 != -1) {
                    if ((*pbVar19 & 1) == 0) {
                      iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908);
                      plVar23 = (long *)PTR_DAT_047d3910;
                      if (iVar13 != 0) {
                        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3908);
                        plVar23 = (long *)PTR_DAT_047d3910;
                      }
                    }
                    lVar20 = *plVar23;
                    *(long *)puVar6 = lVar20;
                    local_78[0] = (undefined8 *)*puVar21;
                    FUN_00c44438(lVar20 + 0x8040,local_78);
                    pbVar19 = PTR_DAT_047d3908;
                  }
                }
                else if (sVar3 == 0) goto LAB_00dfbc40;
              }
            } while (puVar26 != puVar28);
          }
          if (puVar28 != (undefined8 *)0x0) {
            plVar23 = (long *)plVar8[0x7e];
            uVar15 = (**(code **)(*plVar23 + 0xf8))(plVar23);
            if (((uVar15 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
              (**(code **)(*plVar23 + 0x18))(plVar23,puVar28,lVar14 - (long)puVar28,8);
            }
            else {
              FUN_00c48fe8(plVar23,puVar28,lVar14 - (long)puVar28,8);
            }
          }
        }
        puVar21 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_88 + 3);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_88 + 0x1c);
            do {
              iVar13 = *piVar2;
              cVar5 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_78[0] = (undefined8 *)*puVar21;
              FUN_00c44438(lVar14 + 0x8040,local_78);
            }
          }
          else if (sVar3 == 0) goto LAB_00dfbc40;
        }
        if (!bVar11) {
          *plVar29 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar29 + 1));
        }
        (**(code **)(*plVar8 + 0x18))(local_78,plVar8);
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        if ((long *)local_78[0][2] == plVar8 + 5) {
          FUN_00c9ea00(&local_88,local_78);
        }
        puVar21 = local_78[0];
        if (local_78[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78[0] + 3);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_78[0] + 0x1c);
            do {
              iVar13 = *piVar2;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar11) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_68 = *puVar21;
              FUN_00c44438(lVar14 + 0x8040,&local_68);
            }
          }
          else if (sVar3 == 0) goto LAB_00dfbc40;
        }
        FUN_00d0a34c(param_1 + 0x71,&local_88);
        puVar21 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_88 + 3);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_88 + 0x1c);
            do {
              iVar13 = *piVar2;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar11) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_78[0] = (undefined8 *)*puVar21;
              FUN_00c44438(lVar14 + 0x8040,local_78);
            }
          }
          else if (sVar3 == 0) goto LAB_00dfbc40;
        }
        FUN_00ee7824(param_1,&local_90);
        (**(code **)(*param_1 + 0xf0))(param_1);
        return;
      }
      plVar24 = (long *)((long)plVar17 + lVar14);
      puVar6 = PTR_DAT_047d3910;
      puVar7 = PTR_DAT_047d3918;
      puVar9 = PTR_DAT_047d3918;
      puVar10 = PTR_DAT_047d3910;
      if (plVar24 != plVar22) {
        FUN_00d0a34c(plVar17,plVar24);
        plVar17 = plVar17 + 2;
        if (plVar24 + 2 != plVar22) {
          do {
            FUN_00d0a34c(plVar17,plVar17 + (lVar14 >> 4) * 2);
            plVar17 = plVar17 + 2;
          } while (plVar22 + (lVar14 >> 4) * -2 != plVar17);
        }
        plVar22 = (long *)plVar8[0x7c];
        puVar6 = PTR_DAT_047d3910;
        puVar7 = PTR_DAT_047d3918;
        puVar9 = PTR_DAT_047d3918;
        puVar10 = PTR_DAT_047d3910;
      }
      do {
        while( true ) {
          do {
            PTR_DAT_047d3910 = puVar10;
            PTR_DAT_047d3918 = puVar9;
            puVar9 = PTR_DAT_047d3918;
            puVar10 = PTR_DAT_047d3910;
            PTR_DAT_047d3910 = puVar6;
            PTR_DAT_047d3918 = puVar7;
            if (plVar22 == plVar17) {
              plVar8[0x7c] = (long)plVar17;
              goto LAB_00dfbd10;
            }
            plVar22 = plVar22 + -2;
            puVar21 = (undefined8 *)*plVar22;
          } while (puVar21 == (undefined8 *)0x0);
          psVar1 = (short *)(puVar21 + 3);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 != 1) break;
          piVar2 = (int *)((long)puVar21 + 0x1c);
          do {
            iVar13 = *piVar2;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          puVar6 = PTR_DAT_047d3910;
          puVar7 = PTR_DAT_047d3918;
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar10,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)puVar10;
            *(long *)puVar9 = lVar14;
            local_78[0] = (undefined8 *)*puVar21;
            FUN_00c44438(lVar14 + 0x8040,local_78);
            puVar6 = PTR_DAT_047d3910;
            puVar7 = PTR_DAT_047d3918;
          }
        }
        puVar6 = PTR_DAT_047d3910;
        puVar7 = PTR_DAT_047d3918;
      } while (sVar3 != 0);
      goto LAB_00dfbc40;
    }
  }
  plVar8 = local_90;
  plVar29 = local_90 + 5;
  (**(code **)(*local_90 + 0x18))(local_78,local_90);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  plVar23 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar23 = plVar29;
  }
  if ((long *)local_78[0][2] == plVar23) {
    FUN_00c9ea00(&local_88,local_78);
  }
  puVar21 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_78[0] + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68 = *puVar21;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) goto LAB_00dfbc40;
  }
  FUN_00d0a34c(param_1 + 0x71,&local_88);
  puVar21 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_88 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_78[0] = (undefined8 *)*puVar21;
        FUN_00c44438(lVar14 + 0x8040,local_78);
      }
    }
    else if (sVar3 == 0) {
LAB_00dfbc40:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x00dfbb18:
  cVar5 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
  if (bVar11) {
    *plVar29 = lVar14;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00dfbb20;
  goto LAB_00dfbb10;
}


