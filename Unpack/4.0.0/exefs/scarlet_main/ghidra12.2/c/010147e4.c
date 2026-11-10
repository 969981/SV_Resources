/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010147e4; name: FUN_010147e4
 */


bool FUN_010147e4(long param_1)

{
  long **pplVar1;
  long ***ppplVar2;
  long ***ppplVar3;
  int *piVar4;
  short *psVar5;
  short sVar6;
  char cVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  short sVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long **pplVar23;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  long **local_e0;
  long *local_d8;
  long local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  long ***local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  if (*(char *)(param_1 + 0x1ba) == '\0') {
    return true;
  }
  if ((*(long *)(param_1 + 0xd98) == 0) || (*(short *)(*(long *)(param_1 + 0xd98) + 0x1a) == 0)) {
    lVar16 = param_1 + 0xe8;
    FUN_00c9e664(&local_98,lVar16);
    if (local_90 == (long ***)0x0) {
      pplVar23 = (long **)0x0;
    }
    else {
      pplVar23 = local_90[9];
    }
    pplVar1 = pplVar23 + 0x22;
    plVar20 = *pplVar1;
    plVar13 = (long *)nn::os::GetCurrentThread();
    if (plVar13 == plVar20) {
      bVar11 = true;
    }
    else {
      plVar13 = (long *)nn::os::GetCurrentThread();
      do {
        if (*pplVar1 != (long *)0x0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(pplVar23 + 0x23));
            while (*pplVar1 == (long *)0x0) {
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
              if (bVar11) {
                *pplVar1 = plVar13;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_01014868;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
        if (bVar11) {
          *pplVar1 = plVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_01014868:
      bVar11 = false;
    }
    puVar10 = PTR_DAT_047d5648;
    puVar9 = PTR_DAT_047d5640;
    plVar13 = pplVar23[0x25];
    plVar20 = pplVar23[0x26];
    if (plVar13 == plVar20) {
LAB_01014924:
      plVar13 = pplVar23[0x2c];
      plVar20 = pplVar23[0x2d];
      if (plVar13 != plVar20) {
        do {
          lVar21 = *plVar13;
          if (lVar21 != 0) {
            puVar14 = (undefined8 *)
                      (*(code *)**(undefined8 **)(lVar21 + 8))((undefined8 *)(lVar21 + 8));
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              uVar18 = FUN_01bd65a8();
              *(undefined8 *)puVar10 = uVar18;
              __cxa_guard_release(puVar9);
            }
            for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
              if (puVar14 == (undefined8 *)puVar10) {
                uVar15 = (**(code **)(*(long *)*plVar13 + 0xc0))();
                if (((uVar15 & 1) == 0) &&
                   (uVar15 = FUN_01f91ee4(lVar21 + -0x20), (uVar15 & 1) != 0)) goto LAB_010149c0;
                break;
              }
            }
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar20);
        plVar13 = plVar20;
LAB_010149c0:
        if (plVar13 != pplVar23[0x2d]) {
          lVar21 = 0;
          if (*plVar13 != 0) {
            lVar21 = *plVar13 + -0x20;
          }
          goto LAB_010149d0;
        }
      }
      lVar21 = 0;
    }
    else {
      do {
        lVar21 = *plVar13;
        if (lVar21 != 0) {
          puVar14 = (undefined8 *)
                    (*(code *)**(undefined8 **)(lVar21 + 8))((undefined8 *)(lVar21 + 8));
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            uVar18 = FUN_01bd65a8();
            *(undefined8 *)puVar10 = uVar18;
            __cxa_guard_release(puVar9);
          }
          for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
            if (puVar14 == (undefined8 *)puVar10) {
              uVar15 = (**(code **)(*(long *)*plVar13 + 0xc0))();
              if (((uVar15 & 1) == 0) && (uVar15 = FUN_01f91ee4(lVar21 + -0x20), (uVar15 & 1) != 0))
              goto LAB_01014918;
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar20);
      plVar13 = plVar20;
LAB_01014918:
      if ((plVar13 == pplVar23[0x26]) || (*plVar13 == 0)) goto LAB_01014924;
      lVar21 = *plVar13 + -0x20;
    }
LAB_010149d0:
    if (!bVar11) {
      pplVar23[0x22] = (long *)0x0;
      nn::os::SignalLightEvent((LightEventType *)(pplVar23 + 0x23));
    }
    if (local_90 != (long ***)0x0) {
      ppplVar2 = local_90 + 5;
      do {
        iVar12 = *(int *)ppplVar2;
        iVar8 = iVar12 + -1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppplVar2,0x10);
        if (bVar11) {
          *(int *)ppplVar2 = iVar8;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar8 == 0) {
        (*(code *)(*local_90)[2])();
      }
      else if (iVar12 == 0) goto LAB_01015a48;
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x60))();
    }
    if (lVar21 != 0) {
      FUN_00c9e664(&local_b8,lVar16);
      lVar21 = 0;
      if (local_b0 != (long *)0x0) {
        lVar21 = local_b0[9];
      }
      local_e0 = &local_78;
      local_98 = (long *)(lVar21 + 0x108);
      local_90 = &local_e0;
      FUN_01f91f68(local_98,&local_98);
      if (local_b0 != (long *)0x0) {
        plVar13 = local_b0 + 5;
        do {
          lVar21 = *plVar13;
          iVar12 = (int)lVar21 + -1;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar11) {
            *(int *)plVar13 = iVar12;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
        else if ((int)lVar21 == 0) goto LAB_01015a48;
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x60))();
      }
    }
    if (*(long *)(param_1 + 0xd88) != 0) {
      local_b8 = (long *)&DAT_782dc8993ad1f2c7;
      local_b0 = (long *)0x3c852e7;
      local_a8 = 0x15;
      local_a0 = (long *)0x0;
      FUN_02a24268(&local_98,*(long *)(param_1 + 0xd88),&local_b8);
      if ((char)local_98 != '\0') {
        FUN_00c9e664(&local_e0,lVar16);
        if (local_d8 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        else {
          plVar13 = (long *)local_d8[9];
        }
        plVar20 = *(long **)(param_1 + 0xd90);
        if (plVar20 == (long *)0x0) {
          local_78 = (long *)0x0;
          uStack_70 = 0;
        }
        else {
          (**(code **)(*plVar20 + 0x18))(&local_b8);
          local_78 = (long *)0x0;
          uStack_70 = 0;
          if ((long *)local_b8[2] == plVar20 + 5) {
            FUN_01ab09f0(&local_78,&local_b8);
          }
          plVar20 = local_b8;
          if (local_b8 != (long *)0x0) {
            plVar17 = local_b8 + 3;
            do {
              sVar19 = (short)*plVar17;
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar11) {
                *(short *)plVar17 = sVar19 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar19 == 1) {
              piVar4 = (int *)((long)local_b8 + 0x1c);
              do {
                iVar12 = *piVar4;
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar11) {
                  *piVar4 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar12 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar16 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar16;
                local_c8 = (long *)*plVar20;
                FUN_00c44438(lVar16 + 0x8040,&local_c8);
              }
            }
            else if (sVar19 == 0) goto LAB_010158a8;
          }
        }
        plVar20 = (long *)plVar13[1];
        if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar16 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01015ae8;
        *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar20;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        plVar17 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x2a8,8);
        if (plVar17 == (long *)0x0) goto LAB_01015aec;
        local_b8 = (long *)((ulong)local_b8 & 0xffffffffffffff00);
        FUN_01f96028(plVar17,&local_b8);
        puVar9 = PTR_DAT_047daf28;
        *plVar17 = (long)(PTR_DAT_047daf28 + 0x10);
        plVar22 = plVar17 + 4;
        *plVar22 = (long)(puVar9 + 0x178);
        plVar17[5] = (long)(puVar9 + 0x2a0);
        plVar17[6] = (long)(puVar9 + 0x2f8);
        plVar17[7] = (long)(puVar9 + 800);
        plVar17[0x24] = (long)(puVar9 + 0x358);
        plVar17[0x2e] = (long)local_90;
        plVar17[0x2f] = lStack_88;
        plVar17[0x32] = 0;
        plVar17[0x33] = 0;
        plVar17[0x30] = local_80;
        plVar17[0x31] = 0;
        plVar17[0x36] = 0;
        plVar17[0x34] = plVar17[1];
        plVar17[0x35] = 0x1c71c71c71c71c7;
        *(undefined4 *)(plVar17 + 0x37) = 0;
        FUN_017bbe08(plVar17 + 0x38);
        plVar17[0x47] = 0;
        plVar17[0x46] = 0;
        plVar17[0x45] = 0;
        FUN_010645f0(plVar17 + 0x48);
        plVar17[0x2b] = -0x1df9b2ce36988751;
        plVar17[0x2c] = (long)"OrbitsPropertyHolder";
        plVar17[0x2d] = 0x14;
        FUN_015c9634(plVar17,&local_78);
        *(undefined4 *)(plVar17 + 3) = 0x802a8;
        plVar17[1] = (long)plVar20;
        plVar17[2] = (long)plVar17;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        (**(code **)(*plVar17 + 0x58))(plVar17);
        (**(code **)(*plVar22 + 0xe8))(plVar22,plVar13);
        (**(code **)(*plVar22 + 0x68))(plVar22);
        local_b8 = plVar17;
        FUN_00df8c30(plVar13 + 0x21,&local_b8);
        if (local_b8 != (long *)0x0) {
          lVar16 = local_b8[0x13];
          psVar5 = (short *)(lVar16 + 0x1a);
          do {
            sVar19 = *psVar5;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar11) {
              *psVar5 = sVar19 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar19 == 1) {
            *(undefined8 *)(lVar16 + 0x10) = 0;
            (**(code **)(*local_b8 + 0x50))();
          }
          else if (sVar19 == 0) goto LAB_010154e8;
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar22);
        plVar20 = plVar13 + 0x88;
        lVar21 = *plVar20;
        lVar16 = nn::os::GetCurrentThread();
        if (lVar16 == lVar21) {
          plVar20 = (long *)0x0;
          bVar11 = true;
        }
        else {
          lVar16 = nn::os::GetCurrentThread();
          do {
            if (*plVar20 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x89));
                while (*plVar20 == 0) {
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar11) {
                    *plVar20 = lVar16;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_01014cf8;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar11) {
              *plVar20 = lVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_01014cf8:
          bVar11 = false;
        }
        if ((*(byte *)(plVar13 + 0x8b) >> 2 & 1) == 0) {
          FUN_00d37964(plVar13,0,0);
        }
        else {
          (**(code **)(*plVar22 + 0xf8))(plVar22);
        }
        if (!bVar11) {
          *plVar20 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar20 + 1));
        }
        plVar13 = local_78;
        if (local_78 != (long *)0x0) {
          plVar20 = local_78 + 3;
          do {
            sVar19 = (short)*plVar20;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar11) {
              *(short *)plVar20 = sVar19 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar19 == 1) {
            piVar4 = (int *)((long)local_78 + 0x1c);
            do {
              iVar12 = *piVar4;
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar11) {
                *piVar4 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar12 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar16 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar16;
              local_b8 = (long *)*plVar13;
              FUN_00c44438(lVar16 + 0x8040,&local_b8);
            }
          }
          else if (sVar19 == 0) goto LAB_010158a8;
        }
        if (local_d8 != (long *)0x0) {
          plVar13 = local_d8 + 5;
          do {
            lVar16 = *plVar13;
            iVar12 = (int)lVar16 + -1;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar11) {
              *(int *)plVar13 = iVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*local_d8 + 0x10))();
          }
          else if ((int)lVar16 == 0) goto LAB_01015a48;
        }
        if (local_e0 != (long **)0x0) {
          (*(code *)(*local_e0)[0xc])();
        }
        FUN_01933a6c(&local_b8,plVar17);
        FUN_01bd6068((long *)(param_1 + 0xd98),&local_b8);
        FUN_01bd5a84(&local_b8);
        if ((char)local_98 != '\0') {
          local_98 = (long *)((ulong)local_98 & 0xffffffffffffff00);
        }
      }
    }
  }
  if ((*(long *)(param_1 + 0xda8) == 0) || (*(short *)(*(long *)(param_1 + 0xda8) + 0x1a) == 0)) {
    lVar16 = param_1 + 0xe8;
    FUN_00c9e664(&local_98,lVar16);
    if (local_90 == (long ***)0x0) {
      pplVar23 = (long **)0x0;
    }
    else {
      pplVar23 = local_90[9];
    }
    pplVar1 = pplVar23 + 0x22;
    plVar20 = *pplVar1;
    plVar13 = (long *)nn::os::GetCurrentThread();
    if (plVar13 == plVar20) {
      bVar11 = true;
    }
    else {
      plVar13 = (long *)nn::os::GetCurrentThread();
      do {
        if (*pplVar1 != (long *)0x0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(pplVar23 + 0x23));
            while (*pplVar1 == (long *)0x0) {
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
              if (bVar11) {
                *pplVar1 = plVar13;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_01014e48;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
        if (bVar11) {
          *pplVar1 = plVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_01014e48:
      bVar11 = false;
    }
    puVar10 = PTR_DAT_047d5690;
    puVar9 = PTR_DAT_047d5688;
    plVar13 = pplVar23[0x25];
    plVar20 = pplVar23[0x26];
    if (plVar13 == plVar20) {
LAB_01014f0c:
      plVar13 = pplVar23[0x2c];
      plVar20 = pplVar23[0x2d];
      if (plVar13 == plVar20) {
        lVar21 = 0;
      }
      else {
        do {
          lVar21 = *plVar13;
          if (lVar21 != 0) {
            puVar14 = (undefined8 *)
                      (*(code *)**(undefined8 **)(lVar21 + 8))((undefined8 *)(lVar21 + 8));
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              uVar18 = FUN_01bd65a8();
              *(undefined8 *)puVar10 = uVar18;
              __cxa_guard_release(puVar9);
            }
            for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
              if (puVar14 == (undefined8 *)puVar10) {
                uVar15 = (**(code **)(*(long *)*plVar13 + 0xc0))();
                if (((uVar15 & 1) == 0) &&
                   (uVar15 = FUN_01f9219c(lVar21 + -0x20), (uVar15 & 1) != 0)) goto LAB_01014fa8;
                break;
              }
            }
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar20);
        plVar13 = plVar20;
LAB_01014fa8:
        if (plVar13 == pplVar23[0x2d]) {
          lVar21 = 0;
        }
        else {
          lVar21 = 0;
          if (*plVar13 != 0) {
            lVar21 = *plVar13 + -0x20;
          }
        }
      }
    }
    else {
      do {
        lVar21 = *plVar13;
        if (lVar21 != 0) {
          puVar14 = (undefined8 *)
                    (*(code *)**(undefined8 **)(lVar21 + 8))((undefined8 *)(lVar21 + 8));
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            uVar18 = FUN_01bd65a8();
            *(undefined8 *)puVar10 = uVar18;
            __cxa_guard_release(puVar9);
          }
          for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
            if (puVar14 == (undefined8 *)puVar10) {
              uVar15 = (**(code **)(*(long *)*plVar13 + 0xc0))();
              if (((uVar15 & 1) == 0) && (uVar15 = FUN_01f9219c(lVar21 + -0x20), (uVar15 & 1) != 0))
              goto LAB_01014f00;
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar20);
      plVar13 = plVar20;
LAB_01014f00:
      if ((plVar13 == pplVar23[0x26]) || (*plVar13 == 0)) goto LAB_01014f0c;
      lVar21 = *plVar13 + -0x20;
    }
    if (!bVar11) {
      pplVar23[0x22] = (long *)0x0;
      nn::os::SignalLightEvent((LightEventType *)(pplVar23 + 0x23));
    }
    ppplVar2 = local_90;
    if (local_90 != (long ***)0x0) {
      ppplVar3 = local_90 + 5;
      do {
        iVar12 = *(int *)ppplVar3;
        iVar8 = iVar12 + -1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(ppplVar3,0x10);
        if (bVar11) {
          *(int *)ppplVar3 = iVar8;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar8 == 0) {
        (*(code *)(*ppplVar2)[2])();
      }
      else if (iVar12 == 0) goto LAB_01015a48;
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x60))();
    }
    if (lVar21 != 0) {
      FUN_00c9e664(&local_b8,lVar16);
      lVar21 = 0;
      if (local_b0 != (long *)0x0) {
        lVar21 = local_b0[9];
      }
      local_e0 = &local_78;
      local_98 = (long *)(lVar21 + 0x108);
      local_90 = &local_e0;
      FUN_01f9220c(local_98,&local_98);
      if (local_b0 != (long *)0x0) {
        plVar13 = local_b0 + 5;
        do {
          lVar21 = *plVar13;
          iVar12 = (int)lVar21 + -1;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar11) {
            *(int *)plVar13 = iVar12;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
        else if ((int)lVar21 == 0) goto LAB_01015a48;
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x60))();
      }
    }
    if (*(long *)(param_1 + 0xd88) != 0) {
      local_a8 = 0x18;
      local_a0 = (long *)0x0;
      local_b8 = (long *)0x9337fbccbebbb439;
      local_b0 = (long *)0x3c49d37;
      FUN_02a24268(&local_98,*(long *)(param_1 + 0xd88),&local_b8);
      if ((char)local_98 != '\0') {
        FUN_00c9e664(&local_c8,lVar16);
        if (local_c0 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        else {
          plVar13 = (long *)local_c0[9];
        }
        local_b8 = (long *)&DAT_f44c6d62b8673425;
        local_b0 = (long *)&DAT_03c68983;
        local_a8 = 4;
        local_a0 = (long *)0x0;
        FUN_00d996a8(&local_e0,&local_90,&local_b8);
        plVar20 = *(long **)(param_1 + 0xd90);
        if (plVar20 == (long *)0x0) {
          local_f0 = (undefined8 *)0x0;
          uStack_e8 = 0;
        }
        else {
          (**(code **)(*plVar20 + 0x18))(&local_78);
          local_f0 = (undefined8 *)0x0;
          uStack_e8 = 0;
          if ((long *)local_78[2] == plVar20 + 5) {
            FUN_01ab09f0(&local_f0,&local_78);
          }
          plVar20 = local_78;
          if (local_78 != (long *)0x0) {
            plVar17 = local_78 + 3;
            do {
              sVar19 = (short)*plVar17;
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar11) {
                *(short *)plVar17 = sVar19 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar19 == 1) {
              piVar4 = (int *)((long)local_78 + 0x1c);
              do {
                iVar12 = *piVar4;
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar11) {
                  *piVar4 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar12 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar16 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar16;
                local_68 = *plVar20;
                FUN_00c44438(lVar16 + 0x8040,&local_68);
              }
            }
            else if (sVar19 == 0) goto LAB_010158a8;
          }
        }
        plVar20 = (long *)plVar13[1];
        if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar16 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_01015ae8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar20;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        plVar17 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x1a0,8);
        if (plVar17 == (long *)0x0) {
LAB_01015aec:
          (**(code **)(*plVar20 + 0xe8))(plVar20);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                     ,0x40);
        }
        local_78 = (long *)((ulong)local_78 & 0xffffffffffffff00);
        FUN_01f96028(plVar17,&local_78);
        puVar9 = PTR_DAT_047daf30;
        *plVar17 = (long)(PTR_DAT_047daf30 + 0x10);
        plVar22 = plVar17 + 4;
        *plVar22 = (long)(puVar9 + 0x178);
        plVar17[5] = (long)(puVar9 + 0x2a0);
        plVar17[6] = (long)(puVar9 + 0x2f8);
        plVar17[7] = (long)(puVar9 + 800);
        plVar17[0x24] = (long)(puVar9 + 0x358);
        plVar17[0x31] = 0;
        plVar17[0x32] = 0;
        plVar17[0x2f] = (long)local_d8;
        plVar17[0x30] = local_d0;
        plVar17[0x33] = 0;
        plVar17[0x2b] = -0x6cc8043341444bc7;
        plVar17[0x2c] = (long)"TransitionPropertyHolder";
        plVar17[0x2d] = 0x18;
        plVar17[0x2e] = (long)local_e0;
        FUN_017e0e10(plVar17,&local_f0);
        *(undefined4 *)(plVar17 + 3) = 0x801a0;
        plVar17[1] = (long)plVar20;
        plVar17[2] = (long)plVar17;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        (**(code **)(*plVar17 + 0x58))(plVar17);
        (**(code **)(*plVar22 + 0xe8))(plVar22,plVar13);
        (**(code **)(*plVar22 + 0x68))(plVar22);
        local_78 = plVar17;
        FUN_00df8c30(plVar13 + 0x21,&local_78);
        if (local_78 != (long *)0x0) {
          lVar16 = local_78[0x13];
          psVar5 = (short *)(lVar16 + 0x1a);
          do {
            sVar19 = *psVar5;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar11) {
              *psVar5 = sVar19 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar19 == 1) {
            *(undefined8 *)(lVar16 + 0x10) = 0;
            (**(code **)(*local_78 + 0x50))();
          }
          else if (sVar19 == 0) {
LAB_010154e8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar22);
        plVar20 = plVar13 + 0x88;
        lVar21 = *plVar20;
        lVar16 = nn::os::GetCurrentThread();
        if (lVar16 == lVar21) {
          plVar20 = (long *)0x0;
          bVar11 = true;
        }
        else {
          lVar16 = nn::os::GetCurrentThread();
          do {
            if (*plVar20 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x89));
                while (*plVar20 == 0) {
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar11) {
                    *plVar20 = lVar16;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_010152d4;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar11) {
              *plVar20 = lVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_010152d4:
          bVar11 = false;
        }
        if ((*(byte *)(plVar13 + 0x8b) >> 2 & 1) == 0) {
          FUN_00d37964(plVar13,0,0);
        }
        else {
          (**(code **)(*plVar22 + 0xf8))(plVar22);
        }
        if (!bVar11) {
          *plVar20 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar20 + 1));
        }
        puVar14 = local_f0;
        if (local_f0 != (undefined8 *)0x0) {
          psVar5 = (short *)(local_f0 + 3);
          do {
            sVar19 = *psVar5;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar11) {
              *psVar5 = sVar19 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar19 == 1) {
            piVar4 = (int *)((long)local_f0 + 0x1c);
            do {
              iVar12 = *piVar4;
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar11) {
                *piVar4 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar12 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar16 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar16;
              local_78 = (long *)*puVar14;
              FUN_00c44438(lVar16 + 0x8040,&local_78);
            }
          }
          else if (sVar19 == 0) {
LAB_010158a8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x20))();
        }
        if (local_c0 != (long *)0x0) {
          plVar13 = local_c0 + 5;
          do {
            lVar16 = *plVar13;
            iVar12 = (int)lVar16 + -1;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar11) {
              *(int *)plVar13 = iVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*local_c0 + 0x10))();
          }
          else if ((int)lVar16 == 0) {
LAB_01015a48:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        if (local_c8 != (long *)0x0) {
          (**(code **)(*local_c8 + 0x60))();
        }
        FUN_01934014(&local_b8,plVar17);
        FUN_01bdf958((long *)(param_1 + 0xda8),&local_b8);
        FUN_01bdf374(&local_b8);
        if ((char)local_98 != '\0') {
          local_98 = (long *)((ulong)local_98 & 0xffffffffffffff00);
        }
      }
    }
  }
  lVar16 = *(long *)(param_1 + 0xd98);
  if ((lVar16 == 0) || (*(short *)(lVar16 + 0x1a) == 0)) {
    plVar13 = (long *)0x0;
  }
  else {
    psVar5 = (short *)(lVar16 + 0x1a);
    sVar19 = *(short *)(lVar16 + 0x1a);
    do {
      sVar6 = *psVar5;
      if (sVar6 == sVar19) {
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar11) {
          *psVar5 = sVar19 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_010156f8;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_010156f8:
        bVar11 = false;
      }
      if (bVar11) {
        plVar13 = (long *)0x0;
        if (*(long *)(lVar16 + 0x10) != 0) {
          plVar13 = (long *)(*(long *)(lVar16 + 0x10) + -0x28);
        }
        break;
      }
      plVar13 = (long *)0x0;
      sVar19 = sVar6;
    } while (sVar6 != 0);
  }
  lVar16 = *(long *)(param_1 + 0xda8);
  if ((lVar16 == 0) || (*(short *)(lVar16 + 0x1a) == 0)) {
    plVar20 = (long *)0x0;
  }
  else {
    psVar5 = (short *)(lVar16 + 0x1a);
    sVar19 = *(short *)(lVar16 + 0x1a);
    do {
      sVar6 = *psVar5;
      if (sVar6 == sVar19) {
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar11) {
          *psVar5 = sVar19 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_01015744;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01015744:
        bVar11 = false;
      }
      if (bVar11) {
        plVar20 = (long *)0x0;
        if (*(long *)(lVar16 + 0x10) != 0) {
          plVar20 = (long *)(*(long *)(lVar16 + 0x10) + -0x28);
        }
        break;
      }
      plVar20 = (long *)0x0;
      sVar19 = sVar6;
    } while (sVar6 != 0);
  }
  if (plVar13 == (long *)0x0) {
    bVar11 = false;
    if (plVar20 == (long *)0x0) {
      return false;
    }
  }
  else {
    if (plVar20 == (long *)0x0) {
      bVar11 = false;
      goto LAB_01015468;
    }
    if ((((plVar13[0x27] == 0) || (*(short *)(plVar13[0x27] + 0x1a) == 0)) || (plVar13[0x29] == 0))
       || (((*(short *)(plVar13[0x29] + 0x1a) == 0 || (plVar20[0x27] == 0)) ||
           ((*(short *)(plVar20[0x27] + 0x1a) == 0 || (plVar20[0x29] == 0)))))) {
      bVar11 = false;
    }
    else {
      bVar11 = *(short *)(plVar20[0x29] + 0x1a) != 0;
    }
  }
  (**(code **)(*plVar20 + 0x60))();
  if (plVar13 == (long *)0x0) {
    return bVar11;
  }
LAB_01015468:
  (**(code **)(*plVar13 + 0x60))(plVar13);
  return bVar11;
}


