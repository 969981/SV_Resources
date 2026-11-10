/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6803c; name: FUN_00d6803c
 */


/* WARNING: Removing unreachable block (ram,0x00d69350) */
/* WARNING: Removing unreachable block (ram,0x00d69354) */
/* WARNING: Removing unreachable block (ram,0x00d6935c) */
/* WARNING: Removing unreachable block (ram,0x00d69364) */
/* WARNING: Removing unreachable block (ram,0x00d6a384) */
/* WARNING: Removing unreachable block (ram,0x00d6a38c) */
/* WARNING: Removing unreachable block (ram,0x00d6a390) */
/* WARNING: Removing unreachable block (ram,0x00d6a398) */
/* WARNING: Removing unreachable block (ram,0x00d6a3a0) */
/* WARNING: Removing unreachable block (ram,0x00d6af1c) */
/* WARNING: Removing unreachable block (ram,0x00d6af2c) */
/* WARNING: Removing unreachable block (ram,0x00d6a3b0) */
/* WARNING: Removing unreachable block (ram,0x00d6936c) */
/* WARNING: Removing unreachable block (ram,0x00d69464) */
/* WARNING: Removing unreachable block (ram,0x00d69468) */
/* WARNING: Removing unreachable block (ram,0x00d69470) */
/* WARNING: Removing unreachable block (ram,0x00d69478) */
/* WARNING: Removing unreachable block (ram,0x00d6a284) */
/* WARNING: Removing unreachable block (ram,0x00d6a28c) */
/* WARNING: Removing unreachable block (ram,0x00d6a290) */
/* WARNING: Removing unreachable block (ram,0x00d6a298) */
/* WARNING: Removing unreachable block (ram,0x00d6a2a0) */
/* WARNING: Removing unreachable block (ram,0x00d6ae68) */
/* WARNING: Removing unreachable block (ram,0x00d6ae78) */
/* WARNING: Removing unreachable block (ram,0x00d6a2b0) */
/* WARNING: Removing unreachable block (ram,0x00d69480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00d6803c(long *param_1)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  byte bVar11;
  ushort uVar12;
  undefined2 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  ushort *puVar26;
  short sVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  undefined1 uVar32;
  undefined8 *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_ac;
  long *local_a0;
  char *local_98;
  long *local_90;
  long local_88;
  
  lVar22 = *param_1;
  if (lVar22 == 0) {
    uVar10 = 0;
    bVar8 = false;
  }
  else {
    if (*(short *)(lVar22 + 0x1a) != 0) {
      psVar1 = (short *)(lVar22 + 0x1a);
      sVar27 = *(short *)(lVar22 + 0x1a);
LAB_00d686f8:
      sVar4 = *psVar1;
      if (sVar4 == sVar27) {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar27 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00d6871c;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d6871c:
        bVar8 = false;
      }
      if (!bVar8) goto code_r0x00d68724;
      lVar22 = *(long *)(lVar22 + 0x10);
      if (lVar22 == 0) goto LAB_00d68868;
      local_100 = &local_88;
      plVar28 = (long *)(lVar22 + 0xe8);
      lVar25 = *plVar28;
      local_a0 = &local_100;
      lVar23 = nn::os::GetCurrentThread();
      if (lVar23 == lVar25) {
        bVar8 = true;
      }
      else {
        lVar23 = nn::os::GetCurrentThread();
        do {
          if (*plVar28 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
              while (*plVar28 == 0) {
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar8) {
                  *plVar28 = lVar23;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00d68780;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar8) {
            *plVar28 = lVar23;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00d68780:
        bVar8 = false;
      }
      lVar23 = lVar22 + 0x100;
      plVar29 = (long *)FUN_01e20098(&local_a0,lVar23);
      if (plVar29 == (long *)0x0) {
        plVar29 = (long *)FUN_01e20098(&local_a0,lVar22 + 0x138);
      }
      if (!bVar8) {
        *(undefined8 *)(lVar22 + 0xe8) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
      }
      if (plVar29 == (long *)0x0) {
        uVar10 = 0;
LAB_00d687c4:
        lVar30 = *plVar28;
        lVar25 = nn::os::GetCurrentThread();
        if (lVar25 == lVar30) {
          bVar8 = true;
        }
        else {
          lVar25 = nn::os::GetCurrentThread();
          do {
            if (*plVar28 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
                while (*plVar28 == 0) {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar8) {
                    *plVar28 = lVar25;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d687ec;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar8) {
              *plVar28 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d687ec:
          bVar8 = false;
        }
        plVar29 = (long *)FUN_01e20970(*(undefined8 *)(lVar22 + 0x100),
                                       *(undefined8 *)(lVar22 + 0x108));
        if ((*(long **)(lVar22 + 0x108) == plVar29) || (*plVar29 == 0)) {
          plVar29 = (long *)FUN_01e20970(*(undefined8 *)(lVar22 + 0x138),
                                         *(undefined8 *)(lVar22 + 0x140));
          if (*(long **)(lVar22 + 0x140) == plVar29) {
            plVar31 = (long *)0x0;
          }
          else {
            plVar31 = (long *)0x0;
            if (*plVar29 != 0) {
              plVar31 = (long *)(*plVar29 + -0x20);
            }
          }
        }
        else {
          plVar31 = (long *)(*plVar29 + -0x20);
        }
        if (!bVar8) {
          *(undefined8 *)(lVar22 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
        }
        if (plVar31 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          lVar25 = plVar31[0x13];
          if (*(long *)(lVar25 + 0x10) == 0) goto LAB_00d6ac08;
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
            *(undefined8 *)(lVar25 + 8) = uVar16;
            *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
          }
          else if (sVar27 == -1) goto LAB_00d6ac28;
          local_100 = (long *)0x0;
          local_f8 = (char *)0x0;
          FUN_00c43ef0(&local_100,plVar31 + 0x13);
          local_a0 = (long *)0x0;
          local_98 = (char *)0x0;
          if ((long *)local_100[2] == plVar31 + 5) {
            FUN_00e77114(&local_a0,&local_100);
          }
          plVar29 = local_100;
          if (local_100 != (long *)0x0) {
            plVar2 = local_100 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_100 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar8) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar25 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar25;
                local_88 = *plVar29;
                FUN_00c44438(lVar25 + 0x8040,&local_88);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          FUN_00e76d44(param_1 + 10,&local_a0);
          plVar29 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar2 = local_a0 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar8) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar25 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar25;
                local_100 = (long *)*plVar29;
                FUN_00c44438(lVar25 + 0x8040,&local_100);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          lVar25 = plVar31[0x13];
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar25 + 0x10) = 0;
            (**(code **)(*plVar31 + 0x50))(plVar31);
          }
          else if (sVar27 == 0) goto LAB_00d68698;
        }
        lVar30 = *plVar28;
        lVar25 = nn::os::GetCurrentThread();
        if (lVar25 == lVar30) {
          bVar8 = true;
        }
        else {
          lVar25 = nn::os::GetCurrentThread();
          do {
            if (*plVar28 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
                while (*plVar28 == 0) {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar8) {
                    *plVar28 = lVar25;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d68a2c;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar8) {
              *plVar28 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d68a2c:
          bVar8 = false;
        }
        plVar29 = (long *)FUN_01e20a84(lVar23);
        if (plVar29 == (long *)0x0) {
          plVar29 = (long *)FUN_01e20a84(lVar22 + 0x138);
        }
        if (!bVar8) {
          *(undefined8 *)(lVar22 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
        }
        if (plVar29 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          lVar25 = plVar29[0x13];
          if (*(long *)(lVar25 + 0x10) == 0) goto LAB_00d6ac08;
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
            *(undefined8 *)(lVar25 + 8) = uVar16;
            *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
          }
          else if (sVar27 == -1) goto LAB_00d6ac28;
          (**(code **)(*plVar29 + 0x18))(&local_100,plVar29);
          local_a0 = (long *)0x0;
          local_98 = (char *)0x0;
          if ((long *)local_100[2] == plVar29 + 5) {
            FUN_010f50e4(&local_a0,&local_100);
          }
          plVar31 = local_100;
          if (local_100 != (long *)0x0) {
            plVar2 = local_100 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_100 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar8) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar25 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar25;
                local_88 = *plVar31;
                FUN_00c44438(lVar25 + 0x8040,&local_88);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          FUN_00f3c15c(param_1 + 0xc,&local_a0);
          plVar31 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar2 = local_a0 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar8) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar25 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar25;
                local_100 = (long *)*plVar31;
                FUN_00c44438(lVar25 + 0x8040,&local_100);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          lVar25 = plVar29[0x13];
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar25 + 0x10) = 0;
            (**(code **)(*plVar29 + 0x50))(plVar29);
          }
          else if (sVar27 == 0) goto LAB_00d68698;
        }
        lVar30 = *plVar28;
        lVar25 = nn::os::GetCurrentThread();
        if (lVar25 == lVar30) {
          bVar8 = true;
        }
        else {
          lVar25 = nn::os::GetCurrentThread();
          do {
            if (*plVar28 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
                while (*plVar28 == 0) {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar8) {
                    *plVar28 = lVar25;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d68a8c;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar8) {
              *plVar28 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d68a8c:
          bVar8 = false;
        }
        plVar29 = (long *)FUN_01e20bf0(*(undefined8 *)(lVar22 + 0x100),
                                       *(undefined8 *)(lVar22 + 0x108));
        if ((*(long **)(lVar22 + 0x108) == plVar29) || (*plVar29 == 0)) {
          plVar29 = (long *)FUN_01e20bf0(*(undefined8 *)(lVar22 + 0x138),
                                         *(undefined8 *)(lVar22 + 0x140));
          if (*(long **)(lVar22 + 0x140) == plVar29) {
            plVar31 = (long *)0x0;
          }
          else {
            plVar31 = (long *)0x0;
            if (*plVar29 != 0) {
              plVar31 = (long *)(*plVar29 + -0x20);
            }
          }
        }
        else {
          plVar31 = (long *)(*plVar29 + -0x20);
        }
        if (!bVar8) {
          *(undefined8 *)(lVar22 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
        }
        if (plVar31 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          lVar25 = plVar31[0x13];
          if (*(long *)(lVar25 + 0x10) == 0) goto LAB_00d6ac08;
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
            *(undefined8 *)(lVar25 + 8) = uVar16;
            *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
          }
          else if (sVar27 == -1) goto LAB_00d6ac28;
          local_100 = (long *)0x0;
          local_f8 = (char *)0x0;
          FUN_00c43ef0(&local_100,plVar31 + 0x13);
          local_a0 = (long *)0x0;
          local_98 = (char *)0x0;
          if ((long *)local_100[2] == plVar31 + 5) {
            FUN_00c92210(&local_a0,&local_100);
          }
          plVar29 = local_100;
          if (local_100 != (long *)0x0) {
            plVar2 = local_100 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_100 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar8) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar25 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar25;
                local_88 = *plVar29;
                FUN_00c44438(lVar25 + 0x8040,&local_88);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          FUN_00c93a38(param_1 + 0xe,&local_a0);
          plVar29 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar2 = local_a0 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar8) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar25 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar25;
                local_100 = (long *)*plVar29;
                FUN_00c44438(lVar25 + 0x8040,&local_100);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          uVar15 = FUN_00c94218(plVar31);
          *(undefined4 *)(param_1 + 0x1e) = uVar15;
          lVar25 = plVar31[0x13];
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar25 + 0x10) = 0;
            (**(code **)(*plVar31 + 0x50))(plVar31);
          }
          else if (sVar27 == 0) goto LAB_00d68698;
        }
        lVar30 = *plVar28;
        lVar25 = nn::os::GetCurrentThread();
        if (lVar25 == lVar30) {
          bVar8 = true;
        }
        else {
          lVar25 = nn::os::GetCurrentThread();
          do {
            if (*plVar28 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
                while (*plVar28 == 0) {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar8) {
                    *plVar28 = lVar25;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d68c70;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar8) {
              *plVar28 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d68c70:
          bVar8 = false;
        }
        plVar29 = (long *)FUN_01e20d10(*(undefined8 *)(lVar22 + 0x100),
                                       *(undefined8 *)(lVar22 + 0x108));
        if ((*(long **)(lVar22 + 0x108) == plVar29) || (*plVar29 == 0)) {
          plVar29 = (long *)FUN_01e20d10(*(undefined8 *)(lVar22 + 0x138),
                                         *(undefined8 *)(lVar22 + 0x140));
          if (*(long **)(lVar22 + 0x140) == plVar29) {
            plVar31 = (long *)0x0;
          }
          else {
            plVar31 = (long *)0x0;
            if (*plVar29 != 0) {
              plVar31 = (long *)(*plVar29 + -0x20);
            }
          }
        }
        else {
          plVar31 = (long *)(*plVar29 + -0x20);
        }
        if (!bVar8) {
          *(undefined8 *)(lVar22 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
        }
        if (plVar31 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          lVar25 = plVar31[0x13];
          if (*(long *)(lVar25 + 0x10) == 0) goto LAB_00d6ac08;
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
            *(undefined8 *)(lVar25 + 8) = uVar16;
            *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
          }
          else if (sVar27 == -1) goto LAB_00d6ac28;
          (**(code **)(*plVar31 + 0x18))(&local_100,plVar31);
          local_a0 = (long *)0x0;
          local_98 = (char *)0x0;
          if ((long *)local_100[2] == plVar31 + 5) {
            FUN_014c78e4(&local_a0,&local_100);
          }
          plVar29 = local_100;
          if (local_100 != (long *)0x0) {
            plVar2 = local_100 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_100 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar8) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar25 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar25;
                local_88 = *plVar29;
                FUN_00c44438(lVar25 + 0x8040,&local_88);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          FUN_013dc33c(param_1 + 0x10,&local_a0);
          plVar29 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar2 = local_a0 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar8) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar25 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar25;
                local_100 = (long *)*plVar29;
                FUN_00c44438(lVar25 + 0x8040,&local_100);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          lVar25 = plVar31[0x13];
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar25 + 0x10) = 0;
            (**(code **)(*plVar31 + 0x50))(plVar31);
          }
          else if (sVar27 == 0) goto LAB_00d68698;
        }
        if (((*PTR_DAT_047d7b48 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d7b48), iVar14 != 0)) {
          FUN_00100190(&LAB_00aa519c,PTR_DAT_047d7b50,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d7b48);
        }
        uVar16 = *(undefined8 *)PTR_DAT_047d7b50;
        *(undefined8 *)PTR_DAT_047d7b58 = uVar16;
        uVar17 = FUN_00aa14c4(uVar16,lVar22 + 0x340);
        if ((uVar17 & 0xff) != 0) {
          iVar14 = (int)(uVar17 >> 0x20);
          if (iVar14 == 0xb) {
            *(undefined1 *)((long)param_1 + 0x11d) = 1;
          }
          else if (iVar14 == 5) {
            *(undefined1 *)((long)param_1 + 0x11c) = 1;
          }
        }
        lVar30 = *plVar28;
        lVar25 = nn::os::GetCurrentThread();
        if (lVar25 == lVar30) {
          bVar8 = true;
        }
        else {
          lVar25 = nn::os::GetCurrentThread();
          do {
            if (*plVar28 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
                while (*plVar28 == 0) {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar8) {
                    *plVar28 = lVar25;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d68de0;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar8) {
              *plVar28 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d68de0:
          bVar8 = false;
        }
        plVar29 = (long *)FUN_01e20e20(*(undefined8 *)(lVar22 + 0x100),
                                       *(undefined8 *)(lVar22 + 0x108));
        if ((*(long **)(lVar22 + 0x108) == plVar29) || (*plVar29 == 0)) {
          plVar29 = (long *)FUN_01e20e20(*(undefined8 *)(lVar22 + 0x138),
                                         *(undefined8 *)(lVar22 + 0x140));
          if (*(long **)(lVar22 + 0x140) == plVar29) {
            plVar31 = (long *)0x0;
          }
          else {
            plVar31 = (long *)0x0;
            if (*plVar29 != 0) {
              plVar31 = (long *)(*plVar29 + -0x20);
            }
          }
        }
        else {
          plVar31 = (long *)(*plVar29 + -0x20);
        }
        if (!bVar8) {
          *(undefined8 *)(lVar22 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
        }
        if (plVar31 == (long *)0x0) {
          uVar10 = 0;
          bVar8 = false;
        }
        else {
          lVar25 = plVar31[0x13];
          if (*(long *)(lVar25 + 0x10) == 0) goto LAB_00d6ac08;
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
            *(undefined8 *)(lVar25 + 8) = uVar16;
            *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
          }
          else if (sVar27 == -1) goto LAB_00d6ac28;
          bVar11 = *(byte *)((long)plVar31 + 0x11e);
          bVar8 = bVar11 == 5;
          bVar9 = (bVar11 & 0xfe) == 4;
          *(bool *)((long)param_1 + 0x11f) = bVar9;
          *(bool *)(param_1 + 0x24) = bVar9;
          *(bool *)((long)param_1 + 0x121) = bVar11 == 4;
          lVar25 = plVar31[0x13];
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar25 + 0x10) = 0;
            (**(code **)(*plVar31 + 0x50))(plVar31);
          }
          else if (sVar27 == 0) goto LAB_00d68698;
        }
        lVar30 = *plVar28;
        lVar25 = nn::os::GetCurrentThread();
        if (lVar25 == lVar30) {
          bVar9 = true;
        }
        else {
          lVar25 = nn::os::GetCurrentThread();
          do {
            if (*plVar28 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
                while (*plVar28 == 0) {
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar9) {
                    *plVar28 = lVar25;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d68e58;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar9) {
              *plVar28 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d68e58:
          bVar9 = false;
        }
        plVar29 = (long *)FUN_01e20f30(*(undefined8 *)(lVar22 + 0x100),
                                       *(undefined8 *)(lVar22 + 0x108));
        if ((*(long **)(lVar22 + 0x108) == plVar29) || (*plVar29 == 0)) {
          plVar29 = (long *)FUN_01e20f30(*(undefined8 *)(lVar22 + 0x138),
                                         *(undefined8 *)(lVar22 + 0x140));
          if (*(long **)(lVar22 + 0x140) == plVar29) {
            plVar31 = (long *)0x0;
          }
          else {
            plVar31 = (long *)0x0;
            if (*plVar29 != 0) {
              plVar31 = (long *)(*plVar29 + -0x20);
            }
          }
        }
        else {
          plVar31 = (long *)(*plVar29 + -0x20);
        }
        if (!bVar9) {
          *(undefined8 *)(lVar22 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
        }
        if (plVar31 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          lVar25 = plVar31[0x13];
          if (*(long *)(lVar25 + 0x10) == 0) goto LAB_00d6ac08;
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
            *(undefined8 *)(lVar25 + 8) = uVar16;
            *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
          }
          else if (sVar27 == -1) goto LAB_00d6ac28;
          lVar25 = plVar31[0x13];
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar25 + 0x10) = 0;
            (**(code **)(*plVar31 + 0x50))(plVar31);
          }
          else if (sVar27 == 0) goto LAB_00d68698;
        }
        local_100 = &local_88;
        lVar30 = *plVar28;
        local_a0 = &local_100;
        lVar25 = nn::os::GetCurrentThread();
        if (lVar25 == lVar30) {
          bVar9 = true;
        }
        else {
          lVar25 = nn::os::GetCurrentThread();
          do {
            if (*plVar28 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
                while (*plVar28 == 0) {
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar9) {
                    *plVar28 = lVar25;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d68edc;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar9) {
              *plVar28 = lVar25;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d68edc:
          bVar9 = false;
        }
        plVar29 = (long *)FUN_01e21044(&local_a0,lVar23);
        if (plVar29 == (long *)0x0) {
          plVar29 = (long *)FUN_01e21044(&local_a0,lVar22 + 0x138);
        }
        if (!bVar9) {
          *(undefined8 *)(lVar22 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
        }
        if (plVar29 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          lVar23 = plVar29[0x13];
          if (*(long *)(lVar23 + 0x10) == 0) goto LAB_00d6ac08;
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
            *(undefined8 *)(lVar23 + 8) = uVar16;
            *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
          }
          else if (sVar27 == -1) goto LAB_00d6ac28;
          local_100 = (long *)0x0;
          local_f8 = (char *)0x0;
          FUN_00c43ef0(&local_100,plVar29 + 0x13);
          local_a0 = (long *)0x0;
          local_98 = (char *)0x0;
          if ((long *)local_100[2] == plVar29 + 5) {
            FUN_00d94688(&local_a0,&local_100);
          }
          plVar31 = local_100;
          if (local_100 != (long *)0x0) {
            plVar2 = local_100 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_100 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar9) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar23 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar23;
                local_88 = *plVar31;
                FUN_00c44438(lVar23 + 0x8040,&local_88);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          FUN_00d48230(param_1 + 0x12,&local_a0);
          plVar31 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar2 = local_a0 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar9) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar23 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar23;
                local_100 = (long *)*plVar31;
                FUN_00c44438(lVar23 + 0x8040,&local_100);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          lVar23 = plVar29[0x13];
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar23 + 0x10) = 0;
            (**(code **)(*plVar29 + 0x50))(plVar29);
          }
          else if (sVar27 == 0) goto LAB_00d68698;
        }
        lVar25 = *plVar28;
        lVar23 = nn::os::GetCurrentThread();
        if (lVar23 == lVar25) {
          bVar9 = true;
        }
        else {
          lVar23 = nn::os::GetCurrentThread();
          do {
            if (*plVar28 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
                while (*plVar28 == 0) {
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar9) {
                    *plVar28 = lVar23;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d68f44;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar9) {
              *plVar28 = lVar23;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d68f44:
          bVar9 = false;
        }
        plVar29 = (long *)FUN_00c6fdc0(*(undefined8 *)(lVar22 + 0x100),
                                       *(undefined8 *)(lVar22 + 0x108));
        if ((*(long **)(lVar22 + 0x108) == plVar29) || (*plVar29 == 0)) {
          plVar29 = (long *)FUN_00c6fdc0(*(undefined8 *)(lVar22 + 0x138),
                                         *(undefined8 *)(lVar22 + 0x140));
          if (*(long **)(lVar22 + 0x140) == plVar29) {
            plVar31 = (long *)0x0;
          }
          else {
            plVar31 = (long *)0x0;
            if (*plVar29 != 0) {
              plVar31 = (long *)(*plVar29 + -0x20);
            }
          }
        }
        else {
          plVar31 = (long *)(*plVar29 + -0x20);
        }
        if (!bVar9) {
          *(undefined8 *)(lVar22 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
        }
        if (plVar31 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          lVar23 = plVar31[0x13];
          if (*(long *)(lVar23 + 0x10) == 0) goto LAB_00d6ac08;
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
            *(undefined8 *)(lVar23 + 8) = uVar16;
            *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
          }
          else if (sVar27 == -1) goto LAB_00d6ac28;
          (**(code **)(*plVar31 + 0x18))(&local_100,plVar31);
          local_a0 = (long *)0x0;
          local_98 = (char *)0x0;
          if ((long *)local_100[2] == plVar31 + 5) {
            do {
              pcVar18 = local_f8;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(&local_f8,0x10);
              if (bVar9) {
                local_f8 = (char *)0x0;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            puVar7 = PTR_DAT_047d3918;
            puVar6 = PTR_DAT_047d3910;
            uVar16 = *(undefined8 *)PTR_DAT_047d3910;
            *(undefined8 *)PTR_DAT_047d3918 = uVar16;
            FUN_00c44204(&local_90,uVar16,pcVar18);
            plVar29 = local_100;
            local_100 = (long *)0x0;
            if (plVar29 != (long *)0x0) {
              plVar2 = plVar29 + 3;
              do {
                sVar27 = (short)*plVar2;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar9) {
                  *(short *)plVar2 = sVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar27 == 1) {
                piVar24 = (int *)((long)plVar29 + 0x1c);
                do {
                  iVar14 = *piVar24;
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                  if (bVar9) {
                    *piVar24 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar14 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar23 = *(long *)puVar6;
                  *(long *)puVar7 = lVar23;
                  local_88 = *plVar29;
                  FUN_00c44438(lVar23 + 0x8040,&local_88);
                }
              }
              else if (sVar27 == 0) goto LAB_00d6ad50;
            }
            plVar29 = local_a0;
            if (local_90 == (long *)0x0) {
              FUN_01e1feac(&local_a0);
            }
            else {
              local_a0 = (long *)0x0;
              if (plVar29 != (long *)0x0) {
                plVar2 = plVar29 + 3;
                do {
                  sVar27 = (short)*plVar2;
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar9) {
                    *(short *)plVar2 = sVar27 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar27 == 1) {
                  piVar24 = (int *)((long)plVar29 + 0x1c);
                  do {
                    iVar14 = *piVar24;
                    cVar5 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                    if (bVar9) {
                      *piVar24 = -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar14 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar23 = *(long *)puVar6;
                    *(long *)puVar7 = lVar23;
                    local_88 = *plVar29;
                    FUN_00c44438(lVar23 + 0x8040,&local_88);
                  }
                }
                else if (sVar27 == 0) goto LAB_00d6ad50;
              }
              local_a0 = local_90;
              local_90 = (long *)0x0;
              local_98 = pcVar18;
            }
          }
          plVar29 = local_100;
          if (local_100 != (long *)0x0) {
            plVar2 = local_100 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_100 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar9) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar23 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar23;
                local_88 = *plVar29;
                FUN_00c44438(lVar23 + 0x8040,&local_88);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          plVar29 = param_1 + 0x14;
          do {
            pcVar18 = local_98;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(&local_98,0x10);
            if (bVar9) {
              local_98 = (char *)0x0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          puVar6 = PTR_DAT_047d3918;
          uVar16 = *(undefined8 *)PTR_DAT_047d3910;
          *(undefined8 *)PTR_DAT_047d3918 = uVar16;
          FUN_00c44204(&local_88,uVar16,pcVar18);
          plVar2 = local_a0;
          local_a0 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            plVar3 = plVar2 + 3;
            do {
              sVar27 = (short)*plVar3;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar9) {
                *(short *)plVar3 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)plVar2 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar9) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar23 = *(long *)PTR_DAT_047d3910;
                *(long *)puVar6 = lVar23;
                local_100 = (long *)*plVar2;
                FUN_00c44438(lVar23 + 0x8040,&local_100);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          if (local_88 == 0) {
            FUN_01e1feac(plVar29);
          }
          else {
            puVar33 = (undefined8 *)*plVar29;
            *plVar29 = 0;
            if (puVar33 != (undefined8 *)0x0) {
              psVar1 = (short *)(puVar33 + 3);
              do {
                sVar27 = *psVar1;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar9) {
                  *psVar1 = sVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar27 == 1) {
                piVar24 = (int *)((long)puVar33 + 0x1c);
                do {
                  iVar14 = *piVar24;
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                  if (bVar9) {
                    *piVar24 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar14 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar23 = *(long *)PTR_DAT_047d3910;
                  *(long *)puVar6 = lVar23;
                  local_100 = (long *)*puVar33;
                  FUN_00c44438(lVar23 + 0x8040,&local_100);
                }
              }
              else if (sVar27 == 0) goto LAB_00d6ad50;
            }
            lVar23 = local_88;
            local_88 = 0;
            param_1[0x14] = lVar23;
            param_1[0x15] = (long)pcVar18;
          }
          plVar29 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar2 = local_a0 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar9) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar23 = *(long *)PTR_DAT_047d3910;
                *(long *)puVar6 = lVar23;
                local_100 = (long *)*plVar29;
                FUN_00c44438(lVar23 + 0x8040,&local_100);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          puVar6 = PTR_PTR_047d9248;
          fVar36 = 0.0;
          piVar24 = (int *)plVar31[0x2c];
          fVar34 = 0.0;
          if (piVar24 != (int *)0x0) {
            puVar26 = (ushort *)((long)piVar24 - (long)*piVar24);
            uVar12 = *puVar26;
            if (uVar12 < 0x19) {
              fVar34 = *(float *)(plVar31 + 0x40) * 0.0;
              if (6 < uVar12) goto LAB_00d69628;
              fVar38 = 1.2;
              fVar37 = 0.8;
            }
            else {
              if ((ulong)puVar26[0xc] == 0) {
                fVar34 = 0.0;
              }
              else {
                fVar34 = *(float *)((long)piVar24 + (ulong)puVar26[0xc]);
              }
              fVar34 = fVar34 * *(float *)(plVar31 + 0x40);
LAB_00d69628:
              if ((ulong)puVar26[3] == 0) {
                fVar37 = 0.8;
              }
              else {
                fVar37 = *(float *)((long)piVar24 + (ulong)puVar26[3]);
              }
              if ((uVar12 < 9) || ((ulong)puVar26[4] == 0)) {
                fVar38 = 1.2;
              }
              else {
                fVar38 = *(float *)((long)piVar24 + (ulong)puVar26[4]);
              }
            }
            fVar35 = (float)(**(code **)PTR_PTR_047d9248)(0x3f000000);
            fVar34 = fVar34 / (fVar37 + (fVar38 - fVar37) * fVar35);
          }
          *(float *)((long)param_1 + 0xf4) = fVar34;
          piVar24 = (int *)plVar31[0x2c];
          fVar34 = 0.0;
          if (piVar24 != (int *)0x0) {
            puVar26 = (ushort *)((long)piVar24 - (long)*piVar24);
            uVar12 = *puVar26;
            if (uVar12 < 0x1b) {
              fVar34 = *(float *)(plVar31 + 0x40) * 0.0;
              if (6 < uVar12) goto LAB_00d6990c;
              fVar38 = 1.2;
              fVar37 = 0.8;
            }
            else {
              if ((ulong)puVar26[0xd] == 0) {
                fVar34 = 0.0;
              }
              else {
                fVar34 = *(float *)((long)piVar24 + (ulong)puVar26[0xd]);
              }
              fVar34 = fVar34 * *(float *)(plVar31 + 0x40);
LAB_00d6990c:
              if ((ulong)puVar26[3] == 0) {
                fVar37 = 0.8;
              }
              else {
                fVar37 = *(float *)((long)piVar24 + (ulong)puVar26[3]);
              }
              if ((uVar12 < 9) || ((ulong)puVar26[4] == 0)) {
                fVar38 = 1.2;
              }
              else {
                fVar38 = *(float *)((long)piVar24 + (ulong)puVar26[4]);
              }
            }
            fVar35 = (float)(**(code **)puVar6)(0x3f000000);
            fVar34 = fVar34 / (fVar37 + (fVar38 - fVar37) * fVar35);
          }
          *(float *)(param_1 + 0x1f) = fVar34;
          piVar24 = (int *)plVar31[0x2c];
          if (piVar24 != (int *)0x0) {
            puVar26 = (ushort *)((long)piVar24 - (long)*piVar24);
            uVar12 = *puVar26;
            if (uVar12 < 0x1d) {
              fVar36 = *(float *)(plVar31 + 0x40) * 0.0;
              if (6 < uVar12) goto LAB_00d699d4;
              fVar37 = 1.2;
              fVar34 = 0.8;
            }
            else {
              if ((ulong)puVar26[0xe] == 0) {
                fVar36 = 0.0;
              }
              else {
                fVar36 = *(float *)((long)piVar24 + (ulong)puVar26[0xe]);
              }
              fVar36 = fVar36 * *(float *)(plVar31 + 0x40);
LAB_00d699d4:
              if ((ulong)puVar26[3] == 0) {
                fVar34 = 0.8;
              }
              else {
                fVar34 = *(float *)((long)piVar24 + (ulong)puVar26[3]);
              }
              if ((uVar12 < 9) || ((ulong)puVar26[4] == 0)) {
                fVar37 = 1.2;
              }
              else {
                fVar37 = *(float *)((long)piVar24 + (ulong)puVar26[4]);
              }
            }
            fVar38 = (float)(**(code **)puVar6)(0x3f000000);
            fVar36 = fVar36 / (fVar34 + (fVar37 - fVar34) * fVar38);
          }
          *(float *)((long)param_1 + 0xfc) = fVar36;
          lVar23 = plVar31[0x13];
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar23 + 0x10) = 0;
            (**(code **)(*plVar31 + 0x50))(plVar31);
          }
          else if (sVar27 == 0) goto LAB_00d68698;
        }
        lVar25 = *plVar28;
        lVar23 = nn::os::GetCurrentThread();
        if (lVar23 == lVar25) {
          bVar9 = true;
        }
        else {
          lVar23 = nn::os::GetCurrentThread();
          do {
            if (*plVar28 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
                while (*plVar28 == 0) {
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar9) {
                    *plVar28 = lVar23;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00d68fb8;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar9) {
              *plVar28 = lVar23;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00d68fb8:
          bVar9 = false;
        }
        plVar29 = (long *)FUN_01e21180(*(undefined8 *)(lVar22 + 0x100),
                                       *(undefined8 *)(lVar22 + 0x108));
        if ((*(long **)(lVar22 + 0x108) == plVar29) || (*plVar29 == 0)) {
          plVar29 = (long *)FUN_01e21180(*(undefined8 *)(lVar22 + 0x138),
                                         *(undefined8 *)(lVar22 + 0x140));
          if (*(long **)(lVar22 + 0x140) == plVar29) {
            plVar31 = (long *)0x0;
          }
          else {
            plVar31 = (long *)0x0;
            if (*plVar29 != 0) {
              plVar31 = (long *)(*plVar29 + -0x20);
            }
          }
        }
        else {
          plVar31 = (long *)(*plVar29 + -0x20);
        }
        if (!bVar9) {
          *(undefined8 *)(lVar22 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
        }
        if (plVar31 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          lVar23 = plVar31[0x13];
          if (*(long *)(lVar23 + 0x10) == 0) goto LAB_00d6ac08;
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
            *(undefined8 *)(lVar23 + 8) = uVar16;
            *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
          }
          else if (sVar27 == -1) goto LAB_00d6ac28;
          local_100 = (long *)0x0;
          local_f8 = (char *)0x0;
          FUN_00c43ef0(&local_100,plVar31 + 0x13);
          local_a0 = (long *)0x0;
          local_98 = (char *)0x0;
          if ((long *)local_100[2] == plVar31 + 5) {
            FUN_010f6b28(&local_a0,&local_100);
          }
          plVar29 = local_100;
          if (local_100 != (long *)0x0) {
            plVar2 = local_100 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_100 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar9) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar23 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar23;
                local_88 = *plVar29;
                FUN_00c44438(lVar23 + 0x8040,&local_88);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          FUN_010f6758(param_1 + 0x16,&local_a0);
          plVar29 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar2 = local_a0 + 3;
            do {
              sVar27 = (short)*plVar2;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *(short *)plVar2 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              piVar24 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar14 = *piVar24;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                if (bVar9) {
                  *piVar24 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar23 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar23;
                local_100 = (long *)*plVar29;
                FUN_00c44438(lVar23 + 0x8040,&local_100);
              }
            }
            else if (sVar27 == 0) goto LAB_00d6ad50;
          }
          lVar23 = plVar31[0x13];
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 1) {
            *(undefined8 *)(lVar23 + 0x10) = 0;
            (**(code **)(*plVar31 + 0x50))(plVar31);
          }
          else if (sVar27 == 0) goto LAB_00d68698;
        }
        if (*(char *)((long)param_1 + 0x11c) == '\0') {
          lVar25 = *plVar28;
          lVar23 = nn::os::GetCurrentThread();
          if (lVar23 == lVar25) {
            bVar9 = true;
          }
          else {
            lVar23 = nn::os::GetCurrentThread();
            do {
              if (*plVar28 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
                  while (*plVar28 == 0) {
                    cVar5 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar9) {
                      *plVar28 = lVar23;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_00d6903c;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar9) {
                *plVar28 = lVar23;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00d6903c:
            bVar9 = false;
          }
          plVar28 = (long *)FUN_01e21290(*(undefined8 *)(lVar22 + 0x100),
                                         *(undefined8 *)(lVar22 + 0x108));
          if ((*(long **)(lVar22 + 0x108) == plVar28) || (*plVar28 == 0)) {
            plVar28 = (long *)FUN_01e21290(*(undefined8 *)(lVar22 + 0x138),
                                           *(undefined8 *)(lVar22 + 0x140));
            if (*(long **)(lVar22 + 0x140) == plVar28) {
              plVar29 = (long *)0x0;
            }
            else {
              plVar29 = (long *)0x0;
              if (*plVar28 != 0) {
                plVar29 = (long *)(*plVar28 + -0x20);
              }
            }
          }
          else {
            plVar29 = (long *)(*plVar28 + -0x20);
          }
          if (!bVar9) {
            *(undefined8 *)(lVar22 + 0xe8) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
          }
          if (plVar29 == (long *)0x0) {
            uVar10 = 0;
          }
          else {
            lVar23 = plVar29[0x13];
            if (*(long *)(lVar23 + 0x10) == 0) goto LAB_00d6ac08;
            psVar1 = (short *)(lVar23 + 0x1a);
            do {
              sVar27 = *psVar1;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar27 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 0) {
              uVar16 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
              *(undefined8 *)(lVar23 + 8) = uVar16;
              *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
            }
            else if (sVar27 == -1) goto LAB_00d6ac28;
            local_100 = (long *)0x0;
            local_f8 = (char *)0x0;
            FUN_00c43ef0(&local_100,plVar29 + 0x13);
            local_a0 = (long *)0x0;
            local_98 = (char *)0x0;
            if ((long *)local_100[2] == plVar29 + 5) {
              FUN_0125f3ac(&local_a0,&local_100);
            }
            plVar28 = local_100;
            if (local_100 != (long *)0x0) {
              plVar31 = local_100 + 3;
              do {
                sVar27 = (short)*plVar31;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                if (bVar9) {
                  *(short *)plVar31 = sVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar27 == 1) {
                piVar24 = (int *)((long)local_100 + 0x1c);
                do {
                  iVar14 = *piVar24;
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                  if (bVar9) {
                    *piVar24 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar14 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar23 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar23;
                  local_88 = *plVar28;
                  FUN_00c44438(lVar23 + 0x8040,&local_88);
                }
              }
              else if (sVar27 == 0) goto LAB_00d6ad50;
            }
            FUN_00f5a410(param_1 + 0x18,&local_a0);
            plVar28 = local_a0;
            if (local_a0 != (long *)0x0) {
              plVar31 = local_a0 + 3;
              do {
                sVar27 = (short)*plVar31;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                if (bVar9) {
                  *(short *)plVar31 = sVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar27 == 1) {
                piVar24 = (int *)((long)local_a0 + 0x1c);
                do {
                  iVar14 = *piVar24;
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar24,0x10);
                  if (bVar9) {
                    *piVar24 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar14 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar23 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar23;
                  local_100 = (long *)*plVar28;
                  FUN_00c44438(lVar23 + 0x8040,&local_100);
                }
              }
              else if (sVar27 == 0) {
LAB_00d6ad50:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            lVar23 = plVar29[0x13];
            psVar1 = (short *)(lVar23 + 0x1a);
            do {
              sVar27 = *psVar1;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar27 == 1) {
              *(undefined8 *)(lVar23 + 0x10) = 0;
              (**(code **)(*plVar29 + 0x50))(plVar29);
            }
            else if (sVar27 == 0) goto LAB_00d68698;
          }
        }
        (**(code **)(*(long *)(lVar22 + -0x28) + 0x60))();
        goto LAB_00d68074;
      }
      lVar25 = plVar29[0x13];
      if (*(long *)(lVar25 + 0x10) == 0) goto LAB_00d6ac08;
      psVar1 = (short *)(lVar25 + 0x1a);
      do {
        sVar27 = *psVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar27 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar27 != 0) {
        if (sVar27 != -1) goto LAB_00d69cf4;
        goto LAB_00d6ac28;
      }
      uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
      *(undefined8 *)(lVar25 + 8) = uVar16;
      *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
LAB_00d69cf4:
      local_100 = (long *)0x0;
      local_f8 = (char *)0x0;
      FUN_00c43ef0(&local_100,plVar29 + 0x13);
      local_a0 = (long *)0x0;
      local_98 = (char *)0x0;
      if ((long *)local_100[2] == plVar29 + 5) {
        FUN_01e1fadc(&local_a0,&local_100);
      }
      plVar31 = local_100;
      if (local_100 != (long *)0x0) {
        plVar2 = local_100 + 3;
        do {
          sVar27 = (short)*plVar2;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(short *)plVar2 = sVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar27 == 1) {
          piVar24 = (int *)((long)local_100 + 0x1c);
          do {
            iVar14 = *piVar24;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar8) {
              *piVar24 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar25 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar25;
            local_88 = *plVar31;
            FUN_00c44438(lVar25 + 0x8040,&local_88);
          }
        }
        else if (sVar27 == 0) goto LAB_00d6ad50;
      }
      FUN_01e201c8(param_1 + 6,&local_a0);
      plVar31 = local_a0;
      if (local_a0 != (long *)0x0) {
        plVar2 = local_a0 + 3;
        do {
          sVar27 = (short)*plVar2;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(short *)plVar2 = sVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar27 == 1) {
          piVar24 = (int *)((long)local_a0 + 0x1c);
          do {
            iVar14 = *piVar24;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar8) {
              *piVar24 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar25 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar25;
            local_100 = (long *)*plVar31;
            FUN_00c44438(lVar25 + 0x8040,&local_100);
          }
        }
        else if (sVar27 == 0) goto LAB_00d6ad50;
      }
      puVar6 = PTR_DAT_047d92d8;
      local_100 = (long *)0x0;
      local_f8 = (char *)0x0;
      if ((plVar29[0x24] != 0) &&
         (puVar33 = *(undefined8 **)(plVar29[0x24] + 8), puVar33 != (undefined8 *)0x0)) {
        if (((*PTR_DAT_047d92d0 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_047d92d0), iVar14 != 0)) {
          uVar16 = FUN_01e2b0d8();
          *(undefined8 *)puVar6 = uVar16;
          __cxa_guard_release(PTR_DAT_047d92d0);
        }
        do {
          if (puVar33 == (undefined8 *)puVar6) {
            FUN_01193608(&local_100,plVar29 + 0x24);
            break;
          }
          puVar33 = (undefined8 *)*puVar33;
        } while (puVar33 != (undefined8 *)0x0);
      }
      FUN_01e20598(param_1 + 8,&local_100);
      plVar31 = local_100;
      if (local_100 != (long *)0x0) {
        plVar2 = local_100 + 3;
        do {
          sVar27 = (short)*plVar2;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(short *)plVar2 = sVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar27 == 1) {
          piVar24 = (int *)((long)local_100 + 0x1c);
          do {
            iVar14 = *piVar24;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar8) {
              *piVar24 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar25 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar25;
            local_a0 = (long *)*plVar31;
            FUN_00c44438(lVar25 + 0x8040,&local_a0);
          }
        }
        else if (sVar27 == 0) goto LAB_00d6ad50;
      }
      lVar25 = plVar29[0x13];
      psVar1 = (short *)(lVar25 + 0x1a);
      do {
        sVar27 = *psVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar27 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar27 == 1) {
        *(undefined8 *)(lVar25 + 0x10) = 0;
        (**(code **)(*plVar29 + 0x50))(plVar29);
      }
      else if (sVar27 == 0) goto LAB_00d68698;
      uVar10 = 1;
      goto LAB_00d687c4;
    }
LAB_00d68868:
    uVar10 = 0;
    bVar8 = false;
  }
LAB_00d68074:
  lVar22 = param_1[2];
  if (lVar22 == 0) {
    uVar32 = 0;
  }
  else {
    if (*(short *)(lVar22 + 0x1a) != 0) {
      psVar1 = (short *)(lVar22 + 0x1a);
      sVar27 = *(short *)(lVar22 + 0x1a);
LAB_00d68174:
      sVar4 = *psVar1;
      if (sVar4 == sVar27) {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar27 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00d68198;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d68198:
        bVar9 = false;
      }
      if (!bVar9) goto code_r0x00d681a0;
      lVar22 = *(long *)(lVar22 + 0x10);
      if (lVar22 == 0) goto LAB_00d684f0;
      plVar28 = *(long **)(lVar22 + 0x15c0);
      if (plVar28 == (long *)0x0) {
        uVar32 = 0;
      }
      else {
        lVar23 = plVar28[6];
        if (*(long *)(lVar23 + 0x10) == 0) goto LAB_00d6ac08;
        psVar1 = (short *)(lVar23 + 0x1a);
        do {
          sVar27 = *psVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar27 != 0) {
          if (sVar27 != -1) goto LAB_00d681f4;
LAB_00d6ac28:
          pcVar18 = "count != 0";
          pcVar19 = "AddReference";
          pcVar20 = 
          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
          ;
          pcVar21 = "Reference counter overflows.";
          goto LAB_00d6aca8;
        }
        uVar16 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
        *(undefined8 *)(lVar23 + 8) = uVar16;
        *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
LAB_00d681f4:
        *(int *)((long)param_1 + 0x124) = (int)plVar28[0xd];
        *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)((long)plVar28 + 0x6c);
        *(int *)((long)param_1 + 300) = (int)plVar28[0xe];
        *(int *)(param_1 + 0x26) = (int)*(undefined8 *)((long)plVar28 + 0x74);
        *(int *)((long)param_1 + 0x134) = (int)plVar28[0xf];
        *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)((long)plVar28 + 0x7c);
        lVar23 = plVar28[6];
        psVar1 = (short *)(lVar23 + 0x1a);
        do {
          sVar27 = *psVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar32 = uVar10;
        if (sVar27 == 1) {
          *(undefined8 *)(lVar23 + 0x10) = 0;
          (**(code **)(*plVar28 + 0x50))(plVar28);
        }
        else if (sVar27 == 0) goto LAB_00d68698;
      }
      if (*(char *)((long)param_1 + 0x11f) == '\0') {
        plVar28 = *(long **)(lVar22 + 0x15a8);
        if (plVar28 != (long *)0x0) {
          lVar23 = plVar28[6];
          if (*(long *)(lVar23 + 0x10) == 0) goto LAB_00d6ac08;
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
            *(undefined8 *)(lVar23 + 8) = uVar16;
            *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
          }
          else if (sVar27 == -1) goto LAB_00d6ac28;
          *(undefined4 *)((long)param_1 + 0x10c) = *(undefined4 *)plVar28[0x1e];
          *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(plVar28[0x1e] + 4);
          *(undefined4 *)((long)param_1 + 0x114) = *(undefined4 *)(plVar28[0x1e] + 8);
          lVar23 = plVar28[6];
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_00d685a4;
        }
LAB_00d69184:
        uVar32 = 0;
      }
      else {
        plVar28 = *(long **)(lVar22 + 0x15c0);
        if (plVar28 == (long *)0x0) goto LAB_00d69184;
        lVar23 = plVar28[6];
        if (*(long *)(lVar23 + 0x10) == 0) {
LAB_00d6ac08:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar23 + 0x1a);
        do {
          sVar27 = *psVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar27 == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
          *(undefined8 *)(lVar23 + 8) = uVar16;
          *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
        }
        else if (sVar27 == -1) goto LAB_00d6ac28;
        *(int *)((long)param_1 + 0x10c) = (int)plVar28[0x17];
        *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)((long)plVar28 + 0xbc);
        *(int *)((long)param_1 + 0x114) = (int)plVar28[0x18];
        lVar23 = plVar28[6];
        psVar1 = (short *)(lVar23 + 0x1a);
        do {
          sVar27 = *psVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00d685a4:
        if (sVar27 == 1) {
          *(undefined8 *)(lVar23 + 0x10) = 0;
          (**(code **)(*plVar28 + 0x50))(plVar28);
        }
        else if (sVar27 == 0) goto LAB_00d68698;
      }
      lVar23 = *(long *)(lVar22 + 8);
      psVar1 = (short *)(lVar23 + 0x1a);
      do {
        sVar27 = *psVar1;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar27 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar27 == 1) {
        *(undefined8 *)(lVar23 + 0x10) = 0;
        (**(code **)(*(long *)(lVar22 + -0x28) + 0x50))();
      }
      else if (sVar27 == 0) goto LAB_00d68698;
      goto LAB_00d68080;
    }
LAB_00d684f0:
    uVar32 = 0;
  }
LAB_00d68080:
  if (((*PTR_DAT_047d91f8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d91f8), iVar14 != 0)) {
    FUN_00100190(&LAB_00aa89a4,PTR_DAT_047d9200,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91f8);
  }
  lVar22 = *(long *)PTR_DAT_047d9200;
  *(long *)PTR_DAT_047d9208 = lVar22;
  lVar22 = *(long *)(lVar22 + 0x50);
  if (lVar22 == 0) {
    uVar10 = 0;
  }
  else if (*(short *)(lVar22 + 0x1a) == 0) {
LAB_00d684fc:
    uVar10 = 0;
  }
  else {
    psVar1 = (short *)(lVar22 + 0x1a);
    sVar27 = *(short *)(lVar22 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar27) {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar27 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00d682fc;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d682fc:
        bVar9 = false;
      }
      if (bVar9) {
        lVar22 = *(long *)(lVar22 + 0x10);
        if (lVar22 == 0) goto LAB_00d684fc;
        lVar23 = param_1[0xe];
        if ((lVar23 == 0) || (*(short *)(lVar23 + 0x1a) == 0)) goto LAB_00d68328;
        psVar1 = (short *)(lVar23 + 0x1a);
        sVar27 = *(short *)(lVar23 + 0x1a);
        goto LAB_00d6a878;
      }
      uVar10 = 0;
      sVar27 = sVar4;
    } while (sVar4 != 0);
  }
  goto LAB_00d680b4;
code_r0x00d68724:
  uVar10 = 0;
  bVar8 = false;
  sVar27 = sVar4;
  if (sVar4 == 0) goto LAB_00d68074;
  goto LAB_00d686f8;
code_r0x00d681a0:
  uVar32 = 0;
  sVar27 = sVar4;
  if (sVar4 == 0) goto LAB_00d68080;
  goto LAB_00d68174;
LAB_00d6a878:
  sVar4 = *psVar1;
  if (sVar4 == sVar27) {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar27 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_00d6a89c;
    bVar9 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d6a89c:
    bVar9 = false;
  }
  if (!bVar9) goto code_r0x00d6a8a4;
  lVar23 = *(long *)(lVar23 + 0x10);
  if (lVar23 != 0) {
    plVar28 = *(long **)(lVar23 + 0x110);
    if (plVar28 != (long *)0x0) {
      plVar29 = plVar28 + 5;
      do {
        lVar25 = *plVar29;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar9) {
          *(int *)plVar29 = (int)lVar25 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar25 == -1) goto LAB_00d6ac4c;
    }
    lVar25 = *(long *)(lVar23 + 0x70);
    psVar1 = (short *)(lVar25 + 0x1a);
    do {
      sVar27 = *psVar1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar27 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar27 == 1) {
      *(undefined8 *)(lVar25 + 0x10) = 0;
      (**(code **)(*(long *)(lVar23 + -0x28) + 0x50))();
    }
    else if (sVar27 == 0) goto LAB_00d68698;
    goto LAB_00d6834c;
  }
  goto LAB_00d68328;
code_r0x00d6a8a4:
  sVar27 = sVar4;
  if (sVar4 == 0) goto LAB_00d68328;
  goto LAB_00d6a878;
LAB_00d68328:
  plVar28 = _DAT_00000138;
  plVar29 = _DAT_00000138 + 5;
  do {
    lVar23 = *plVar29;
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar9) {
      *(int *)plVar29 = (int)lVar23 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((int)lVar23 == -1) {
LAB_00d6ac4c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_00d6834c:
  plVar29 = (long *)(lVar22 + -0x28);
  uVar12 = FUN_00cf44f4(plVar28[0xe]);
  uVar13 = FUN_00cf41a8(plVar28[0xe]);
  uVar10 = FUN_00cec030(plVar28[0xe]);
  FUN_01acb394(&local_100,plVar29,uVar12,uVar13,uVar10);
  *(float *)(param_1 + 0x1c) = local_ac;
  fVar34 = local_ac + local_ac + local_100._4_4_;
  *(float *)((long)param_1 + 0xe4) = fVar34;
  *(float *)(param_1 + 0x1d) = local_100._4_4_;
  if (uVar12 < 0x1bd) {
    if (uVar12 < 0xce) {
      if ((uVar12 == 0x33) || (uVar12 == 0x71)) goto LAB_00d6861c;
    }
    else if ((uVar12 == 0xce) || ((uVar12 == 0xf2 || (uVar12 == 0x1bc)))) goto LAB_00d6861c;
LAB_00d68644:
    *(undefined1 *)((long)param_1 + 0x11b) = 1;
  }
  else if (uVar12 < 0x2be) {
    if ((uVar12 != 0x1bd) && (uVar12 != 0x1ce)) {
      if (uVar12 != 0x27a) goto LAB_00d68644;
      goto LAB_00d6861c;
    }
  }
  else {
    if (uVar12 != 0x2be) {
      if (uVar12 == 0x3ea) {
        *(undefined4 *)((long)param_1 + 0xec) = 0x3f99999a;
      }
      else if (uVar12 == 0x395) goto LAB_00d6861c;
      goto LAB_00d68644;
    }
LAB_00d6861c:
    *(float *)(param_1 + 0x1d) = fVar34;
    if ((uVar12 != 0x1bd) && (uVar12 != 0x1ce)) goto LAB_00d68644;
  }
  if (plVar28 != (long *)0x0) {
    plVar31 = plVar28 + 5;
    do {
      lVar23 = *plVar31;
      iVar14 = (int)lVar23 + -1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar9) {
        *(int *)plVar31 = iVar14;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
    else if ((int)lVar23 == 0) {
      pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar19 = "DecrementReferenceInternal";
      pcVar20 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
      ;
      pcVar21 = "Reference counter underflows.";
LAB_00d6aca8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar18,pcVar19,pcVar20,0x58,pcVar21);
    }
  }
  lVar22 = *(long *)(lVar22 + 8);
  psVar1 = (short *)(lVar22 + 0x1a);
  do {
    sVar27 = *psVar1;
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar27 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar10 = uVar32;
  if (sVar27 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar29 + 0x50))(plVar29);
  }
  else if (sVar27 == 0) {
LAB_00d68698:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00d680b4:
  lVar22 = param_1[4];
  if (lVar22 == 0) {
    uVar10 = 0;
  }
  else if (*(short *)(lVar22 + 0x1a) == 0) {
LAB_00d685e4:
    uVar10 = 0;
  }
  else {
    psVar1 = (short *)(lVar22 + 0x1a);
    sVar27 = *(short *)(lVar22 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar27) {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar27 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00d6840c;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d6840c:
        bVar9 = false;
      }
      if (bVar9) {
        lVar22 = *(long *)(lVar22 + 0x10);
        if (lVar22 != 0) {
          plVar28 = (long *)(lVar22 + -0x28);
          local_100 = (long *)0xdb3511ae502a979c;
          local_f8 = "0000_defaultwait01_loop";
          local_f0 = 0x17;
          uStack_e8 = 0;
          bVar11 = FUN_00c738f0(plVar28,&local_100,0);
          *(byte *)(param_1 + 0x23) = bVar11 & 1;
          local_100 = (long *)0xdb3511ae502a979c;
          local_f8 = "0000_defaultwait01_loop";
          local_f0 = 0x17;
          uStack_e8 = 0;
          bVar11 = FUN_00c738f0(plVar28,&local_100,1);
          *(byte *)((long)param_1 + 0x119) = bVar11 & 1;
          local_100 = (long *)0xdb3511ae502a979c;
          local_f8 = "0000_defaultwait01_loop";
          local_f0 = 0x17;
          uStack_e8 = 0;
          bVar11 = FUN_00c738f0(plVar28,&local_100,2);
          *(byte *)((long)param_1 + 0x11a) = bVar11 & 1;
          if ((int)param_1[0x26] == 4) {
            *(undefined1 *)((long)param_1 + 0x119) = 0;
          }
          lVar22 = *(long *)(lVar22 + 8);
          psVar1 = (short *)(lVar22 + 0x1a);
          do {
            sVar27 = *psVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar27 != 1) {
            if (sVar27 != 0) goto LAB_00d680c0;
            goto LAB_00d68698;
          }
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*plVar28 + 0x50))(plVar28);
          goto LAB_00d680c0;
        }
        goto LAB_00d685e4;
      }
      sVar27 = sVar4;
    } while (sVar4 != 0);
    uVar10 = 0;
  }
LAB_00d680c0:
  if ((((bVar8) && ((char)param_1[0x23] != '\0')) && (*(char *)((long)param_1 + 0x119) == '\0')) &&
     (*(char *)((long)param_1 + 0x11a) == '\0')) {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  *(undefined1 *)((long)param_1 + 0x13c) = uVar10;
  return uVar10;
}


