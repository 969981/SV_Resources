/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4d788; name: FUN_00d4d788
 */


void FUN_00d4d788(long param_1)

{
  long *plVar1;
  LightEventType *pLVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  plVar6 = DAT_0485a0e8;
  if (DAT_0485a0e8 != (long *)0x0) {
    plVar1 = DAT_0485a0e8 + 5;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = (int)lVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar12 = *(long *)(param_1 + 0x1a0);
  if (lVar12 != 0) {
    plVar1 = plVar6 + 0x1ae;
    pLVar2 = (LightEventType *)(plVar6 + 0x1b0);
    do {
      uVar13 = (lVar12 + *(long *)(param_1 + 0x198)) - 1;
      uVar18 = uVar13 % 0x38;
      lVar12 = *(long *)(*(long *)(param_1 + 0x160) + (uVar13 / 0x38) * 8);
      puVar14 = (undefined8 *)(lVar12 + uVar18 * 0x48);
      local_b0 = *puVar14;
      local_a8 = puVar14[1];
      local_a0 = puVar14[2];
      local_98 = (long *)puVar14[3];
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x18))();
      }
      lVar15 = lVar12 + uVar18 * 0x48;
      local_90 = *(undefined8 *)(lVar15 + 0x20);
      local_88 = *(undefined8 *)(lVar15 + 0x28);
      local_80 = *(undefined8 *)(lVar15 + 0x30);
      local_78 = *(long **)(lVar15 + 0x38);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))();
      }
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(lVar12 + uVar18 * 0x48 + 0x40));
      uVar13 = FUN_00d4e220(plVar6,&local_b0,0);
      if ((uVar13 & 0xff) != 0) {
        uVar7 = (undefined4)local_70;
        lVar12 = nn::os::GetCurrentThread();
LAB_00d4d8c8:
        if (*plVar1 == 0 && plVar6[0x1af] == 0) goto code_r0x00d4d8d4;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        do {
          if (*plVar1 != 0 || plVar6[0x1af] != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent(pLVar2);
              while (*plVar1 == 0 && plVar6[0x1af] == 0) {
                cVar4 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar11) {
                  *plVar1 = lVar12;
                  plVar6[0x1af] = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_00d4d8dc;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar12;
            plVar6[0x1af] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_00d4d8dc:
        lVar12 = plVar6[7] + ((long)uVar13 >> 0x20) * 0x1d0;
        puVar9 = (undefined4 *)FUN_00c42268(lVar12 + 0x80,&local_90);
        *puVar9 = uVar7;
        *(undefined1 *)(lVar12 + 0x1b9) = 1;
        do {
          lVar12 = *plVar1;
          lVar15 = plVar6[0x1af];
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar12;
            plVar6[0x1af] = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar16 = *plVar1;
          lVar3 = plVar6[0x1af];
          if (lVar16 != lVar12 || lVar3 != lVar15) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_00d4d988;
          }
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = 0;
            *(long *)((long)plVar6 + 0xd74) = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar11 = true;
LAB_00d4d988:
        if (!bVar11) {
          do {
            lVar12 = *plVar1;
            lVar15 = plVar6[0x1af];
            if (lVar12 != lVar16 || lVar15 != lVar3) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto joined_r0x00d4e0b4;
            }
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = 0;
              *(long *)((long)plVar6 + 0xd74) = lVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar11 = true;
joined_r0x00d4e0b4:
          if (!bVar11) {
            do {
              lVar16 = *plVar1;
              lVar3 = plVar6[0x1af];
              if (lVar16 != lVar12 || lVar3 != lVar15) {
                bVar11 = false;
                ClearExclusiveLocal();
                lVar12 = lVar16;
                lVar15 = lVar3;
                goto joined_r0x00d4e0b4;
              }
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar11) {
                *plVar1 = 0;
                *(long *)((long)plVar6 + 0xd74) = lVar15;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar11 = true;
            lVar12 = lVar16;
            lVar15 = lVar3;
            goto joined_r0x00d4e0b4;
          }
        }
        nn::os::SignalLightEvent(pLVar2);
      }
      uVar13 = (*(long *)(param_1 + 0x1a0) + *(long *)(param_1 + 0x198)) - 1;
      uVar18 = uVar13 % 0x38;
      lVar12 = *(long *)(*(long *)(param_1 + 0x160) + (uVar13 / 0x38) * 8);
      plVar10 = *(long **)(lVar12 + uVar18 * 0x48 + 0x38);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      plVar10 = *(long **)(lVar12 + uVar18 * 0x48 + 0x18);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      lVar16 = *(long *)(param_1 + 0x1a0) + -1;
      *(long *)(param_1 + 0x1a0) = lVar16;
      lVar15 = *(long *)(param_1 + 0x168) - *(long *)(param_1 + 0x160);
      lVar12 = 0;
      if (lVar15 != 0) {
        lVar12 = (lVar15 >> 3) * 0x38 + -1;
      }
      if (0x6f < (ulong)(lVar12 - (*(long *)(param_1 + 0x198) + lVar16))) {
        plVar10 = *(long **)(param_1 + 0x1a8);
        uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x168) + -8);
        uVar13 = FUN_00c4e564(plVar10);
        if ((uVar13 & 1) == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10,uVar17,0xfc0,8);
        }
        else {
          FUN_00c48fe8(plVar10,uVar17,0xfc0,8);
        }
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + -8;
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      lVar12 = *(long *)(param_1 + 0x1a0);
    } while (lVar12 != 0);
  }
  lVar12 = *(long *)(param_1 + 0x218);
  if (lVar12 != 0) {
    plVar1 = plVar6 + 0x1ae;
    pLVar2 = (LightEventType *)(plVar6 + 0x1b0);
    do {
      uVar13 = (lVar12 + *(long *)(param_1 + 0x210)) - 1;
      uVar18 = uVar13 % 0x33;
      lVar12 = *(long *)(*(long *)(param_1 + 0x1d8) + (uVar13 / 0x33) * 8);
      puVar14 = (undefined8 *)(lVar12 + uVar18 * 0x50);
      local_b0 = *puVar14;
      local_a8 = puVar14[1];
      local_a0 = puVar14[2];
      local_98 = (long *)puVar14[3];
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x18))();
      }
      lVar15 = lVar12 + uVar18 * 0x50;
      local_90 = *(undefined8 *)(lVar15 + 0x20);
      local_88 = *(undefined8 *)(lVar15 + 0x28);
      local_80 = *(undefined8 *)(lVar15 + 0x30);
      local_78 = *(long **)(lVar15 + 0x38);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))();
      }
      lVar12 = lVar12 + uVar18 * 0x50;
      uStack_68 = *(undefined8 *)(lVar12 + 0x48);
      local_70 = *(undefined8 *)(lVar12 + 0x40);
      uVar13 = FUN_00d4e220(plVar6,&local_b0,0);
      uVar8 = uStack_68;
      uVar17 = local_70;
      if ((uVar13 & 0xff) != 0) {
        lVar12 = nn::os::GetCurrentThread();
LAB_00d4dd88:
        if (*plVar1 == 0 && plVar6[0x1af] == 0) goto code_r0x00d4dd94;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        do {
          if (*plVar1 != 0 || plVar6[0x1af] != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent(pLVar2);
              while (*plVar1 == 0 && plVar6[0x1af] == 0) {
                cVar4 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar11) {
                  *plVar1 = lVar12;
                  plVar6[0x1af] = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_00d4dd9c;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar12;
            plVar6[0x1af] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_00d4dd9c:
        lVar12 = plVar6[7] + ((long)uVar13 >> 0x20) * 0x1d0;
        puVar14 = (undefined8 *)FUN_00c5f1b0(lVar12 + 0xe8,&local_90);
        puVar14[1] = uVar8;
        *puVar14 = uVar17;
        *(undefined1 *)(lVar12 + 0x1b9) = 1;
        do {
          lVar12 = *plVar1;
          lVar15 = plVar6[0x1af];
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar12;
            plVar6[0x1af] = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar16 = *plVar1;
          lVar3 = plVar6[0x1af];
          if (lVar16 != lVar12 || lVar3 != lVar15) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_00d4de48;
          }
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = 0;
            *(long *)((long)plVar6 + 0xd74) = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar11 = true;
LAB_00d4de48:
        if (!bVar11) {
          do {
            lVar12 = *plVar1;
            lVar15 = plVar6[0x1af];
            if (lVar12 != lVar16 || lVar15 != lVar3) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto joined_r0x00d4e1e0;
            }
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = 0;
              *(long *)((long)plVar6 + 0xd74) = lVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar11 = true;
joined_r0x00d4e1e0:
          if (!bVar11) {
            do {
              lVar16 = *plVar1;
              lVar3 = plVar6[0x1af];
              if (lVar16 != lVar12 || lVar3 != lVar15) {
                bVar11 = false;
                ClearExclusiveLocal();
                lVar12 = lVar16;
                lVar15 = lVar3;
                goto joined_r0x00d4e1e0;
              }
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar11) {
                *plVar1 = 0;
                *(long *)((long)plVar6 + 0xd74) = lVar15;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar11 = true;
            lVar12 = lVar16;
            lVar15 = lVar3;
            goto joined_r0x00d4e1e0;
          }
        }
        nn::os::SignalLightEvent(pLVar2);
      }
      uVar13 = (*(long *)(param_1 + 0x218) + *(long *)(param_1 + 0x210)) - 1;
      uVar18 = uVar13 % 0x33;
      lVar12 = *(long *)(*(long *)(param_1 + 0x1d8) + (uVar13 / 0x33) * 8);
      plVar10 = *(long **)(lVar12 + uVar18 * 0x50 + 0x38);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      plVar10 = *(long **)(lVar12 + uVar18 * 0x50 + 0x18);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      lVar16 = *(long *)(param_1 + 0x218) + -1;
      *(long *)(param_1 + 0x218) = lVar16;
      lVar15 = *(long *)(param_1 + 0x1e0) - *(long *)(param_1 + 0x1d8);
      lVar12 = 0;
      if (lVar15 != 0) {
        lVar12 = (lVar15 >> 3) * 0x33 + -1;
      }
      if (0x65 < (ulong)(lVar12 - (*(long *)(param_1 + 0x210) + lVar16))) {
        plVar10 = *(long **)(param_1 + 0x220);
        uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x1e0) + -8);
        uVar13 = FUN_00c4e564(plVar10);
        if ((uVar13 & 1) == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10,uVar17,0xff0,0x10);
        }
        else {
          FUN_00c48fe8(plVar10,uVar17,0xff0,0x10);
        }
        *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1e0) + -8;
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      lVar12 = *(long *)(param_1 + 0x218);
    } while (lVar12 != 0);
  }
  lVar12 = *(long *)(param_1 + 0x290);
  if (lVar12 != 0) {
    plVar1 = plVar6 + 0x1ae;
    pLVar2 = (LightEventType *)(plVar6 + 0x1b0);
    do {
      uVar13 = (lVar12 + *(long *)(param_1 + 0x288)) - 1;
      uVar18 = uVar13 % 0x33;
      lVar12 = *(long *)(*(long *)(param_1 + 0x250) + (uVar13 / 0x33) * 8);
      puVar14 = (undefined8 *)(lVar12 + uVar18 * 0x50);
      local_b0 = *puVar14;
      local_a8 = puVar14[1];
      local_a0 = puVar14[2];
      local_98 = (long *)puVar14[3];
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x18))();
      }
      memcpy(&local_90,(void *)(lVar12 + uVar18 * 0x50 + 0x20),0x30);
      uVar13 = FUN_00d4e220(plVar6,&local_b0,0);
      if ((uVar13 & 0xff) != 0) {
        lVar12 = nn::os::GetCurrentThread();
LAB_00d4db60:
        if (*plVar1 == 0 && plVar6[0x1af] == 0) goto code_r0x00d4db6c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        do {
          if (*plVar1 != 0 || plVar6[0x1af] != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent(pLVar2);
              while (*plVar1 == 0 && plVar6[0x1af] == 0) {
                cVar4 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar11) {
                  *plVar1 = lVar12;
                  plVar6[0x1af] = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_00d4db74;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar12;
            plVar6[0x1af] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_00d4db74:
        lVar12 = plVar6[7] + ((long)uVar13 >> 0x20) * 0x1d0;
        memcpy((void *)(lVar12 + 0x50),&local_90,0x30);
        *(undefined1 *)(lVar12 + 0x1b9) = 1;
        do {
          lVar12 = *plVar1;
          lVar15 = plVar6[0x1af];
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar12;
            plVar6[0x1af] = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar16 = *plVar1;
          lVar3 = plVar6[0x1af];
          if (lVar16 != lVar12 || lVar3 != lVar15) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_00d4dc1c;
          }
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = 0;
            *(long *)((long)plVar6 + 0xd74) = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar11 = true;
LAB_00d4dc1c:
        if (!bVar11) {
          do {
            lVar12 = *plVar1;
            lVar15 = plVar6[0x1af];
            if (lVar12 != lVar16 || lVar15 != lVar3) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto joined_r0x00d4e148;
            }
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = 0;
              *(long *)((long)plVar6 + 0xd74) = lVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar11 = true;
joined_r0x00d4e148:
          if (!bVar11) {
            do {
              lVar16 = *plVar1;
              lVar3 = plVar6[0x1af];
              if (lVar16 != lVar12 || lVar3 != lVar15) {
                bVar11 = false;
                ClearExclusiveLocal();
                lVar12 = lVar16;
                lVar15 = lVar3;
                goto joined_r0x00d4e148;
              }
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar11) {
                *plVar1 = 0;
                *(long *)((long)plVar6 + 0xd74) = lVar15;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar11 = true;
            lVar12 = lVar16;
            lVar15 = lVar3;
            goto joined_r0x00d4e148;
          }
        }
        nn::os::SignalLightEvent(pLVar2);
      }
      lVar15 = *(long *)(param_1 + 0x290) + -1;
      uVar13 = lVar15 + *(long *)(param_1 + 0x288);
      lVar12 = *(long *)(param_1 + 0x250);
      plVar10 = *(long **)(*(long *)(lVar12 + (uVar13 / 0x33) * 8) + (uVar13 % 0x33) * 0x50 + 0x18);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
        lVar15 = *(long *)(param_1 + 0x290) + -1;
        lVar12 = *(long *)(param_1 + 0x250);
        uVar13 = *(long *)(param_1 + 0x288) + lVar15;
      }
      *(long *)(param_1 + 0x290) = lVar15;
      lVar12 = *(long *)(param_1 + 600) - lVar12;
      lVar15 = 0;
      if (lVar12 != 0) {
        lVar15 = (lVar12 >> 3) * 0x33 + -1;
      }
      if (0x65 < lVar15 - uVar13) {
        plVar10 = *(long **)(param_1 + 0x298);
        uVar17 = *(undefined8 *)(*(long *)(param_1 + 600) + -8);
        uVar13 = FUN_00c4e564(plVar10);
        if ((uVar13 & 1) == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10,uVar17,0xff0,0x10);
        }
        else {
          FUN_00c48fe8(plVar10,uVar17,0xff0,0x10);
        }
        *(long *)(param_1 + 600) = *(long *)(param_1 + 600) + -8;
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      lVar12 = *(long *)(param_1 + 0x290);
    } while (lVar12 != 0);
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar12 = *plVar1;
      iVar5 = (int)lVar12 + -1;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *(int *)plVar1 = iVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
code_r0x00d4d8d4:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar11) {
    *plVar1 = lVar12;
    plVar6[0x1af] = 0;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00d4d8dc;
  goto LAB_00d4d8c8;
code_r0x00d4dd94:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar11) {
    *plVar1 = lVar12;
    plVar6[0x1af] = 0;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00d4dd9c;
  goto LAB_00d4dd88;
code_r0x00d4db6c:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar11) {
    *plVar1 = lVar12;
    plVar6[0x1af] = 0;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00d4db74;
  goto LAB_00d4db60;
}


