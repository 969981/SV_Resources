/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011798b4; name: FUN_011798b4
 */


void FUN_011798b4(long *param_1)

{
  short *psVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long *local_110;
  undefined8 local_108;
  long *local_100;
  long *local_f8 [4];
  long *local_d8;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  (**(code **)(*param_1 + 0x18))(local_f8);
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  plVar17 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar17 = param_1 + 5;
  }
  if ((long *)local_f8[0][2] == plVar17) {
    FUN_0117ad88(&local_c8,local_f8);
  }
  plVar17 = local_f8[0];
  if (local_f8[0] != (long *)0x0) {
    plVar13 = local_f8[0] + 3;
    do {
      sVar6 = (short)*plVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(short *)plVar13 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)local_f8[0] + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_98 = (long *)*plVar17;
        FUN_00c44438(lVar18 + 0x8040,&local_98);
      }
    }
    else if (sVar6 == 0) goto LAB_01179ed8;
  }
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar10 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar10;
  FUN_00e55738(local_f8,uVar10,param_1 + 0x10);
  uVar11 = FUN_00dc5c18(param_1 + 8,1,local_f8,0,0);
  if ((uVar11 & 1) == 0) {
    plVar17 = (long *)0x0;
  }
  else {
    plVar17 = (long *)param_1[0xc];
    if (plVar17 != (long *)0x0) {
      lVar18 = plVar17[6];
      if (*(long *)(lVar18 + 0x10) == 0) goto LAB_0117a4e4;
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar6 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar10;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
      }
      else if (sVar6 == -1) goto LAB_01179f30;
    }
  }
  local_110 = (long *)0x0;
  local_108 = 0;
  FUN_0117a50c(&local_110,&local_c8);
  if (((*PTR_DAT_047d8c58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar10 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar10;
  FUN_00cfc734(&local_100,uVar10,plVar17[1]);
  local_a8 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  FUN_0117a770(&local_b0,&local_110);
  local_a0 = local_100;
  if (local_100 != (long *)0x0) {
    lVar18 = local_100[6];
    if (*(long *)(lVar18 + 0x10) == 0) {
LAB_0117a4e4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar10;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar6 == -1) {
LAB_01179f30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar13 = (long *)0x0;
  if (local_100 != (long *)0x0) {
    plVar13 = local_100 + 0xb;
  }
  if ((*(byte *)((long)plVar17 + 0x6d) & 1) == 0) {
    if ((*(byte *)((long)plVar17 + 0x6c) & 1) == 0) {
      plVar2 = plVar17 + 0xf;
      lVar18 = nn::os::GetCurrentThread();
LAB_01179a68:
      if (*plVar2 == 0) goto code_r0x01179a70;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar17 + 0x10));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar17 + 0x10));
            while (*plVar2 == 0) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar18;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_01179a78;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar18;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_01179a78:
      if ((*(byte *)((long)plVar17 + 0x6c) & 1) == 0) {
        local_88 = 0;
        local_98 = local_b8;
        local_90 = (undefined8 *)0x0;
        FUN_0117a50c(&local_90,&local_b0);
        local_80 = local_a0;
        if (local_a0 != (long *)0x0) {
          lVar18 = local_a0[6];
          if (*(long *)(lVar18 + 0x10) == 0) goto LAB_0117a4e4;
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar6 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
            *(undefined8 *)(lVar18 + 8) = uVar10;
            *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
          }
          else if (sVar6 == -1) goto LAB_01179f30;
        }
        local_78 = plVar13;
        if ((ulong)plVar17[0x1a] < (ulong)plVar17[0x1b]) {
          FUN_0117b1d4(plVar17 + 0x19,&local_98);
        }
        else {
          uVar11 = plVar17[0x1d];
          lVar18 = plVar17[0x1a] - plVar17[0x19] >> 4;
          if (0x7ffffffffffffffe < uVar11) {
            uVar11 = 0x7fffffffffffffff;
          }
          uVar3 = lVar18 * -0x71c71c71c71c71c7 + 1;
          if (uVar11 < uVar3) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar14 = plVar17[0x1b] - plVar17[0x19] >> 4;
          uVar16 = lVar14 * 0x1c71c71c71c71c72;
          if (uVar3 <= uVar16) {
            uVar3 = uVar16;
          }
          plVar13 = plVar17 + 0x1c;
          if (uVar11 >> 1 <= (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
            uVar3 = uVar11;
          }
          if (uVar3 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar3 * 0x90,0x10);
            if (lVar14 == 0) {
              (**(code **)(*(long *)*plVar13 + 0xe8))();
            }
          }
          lVar19 = *plVar13;
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar12 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar12 != 0) {
            if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar19;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          }
          puVar20 = (undefined8 *)(lVar14 + lVar18 * 0x10);
          lVar18 = lVar14 + lVar18 * 0x10;
          puVar20[2] = 0;
          puVar20[3] = 0;
          *puVar20 = 0;
          puVar20[1] = 0;
          *(undefined8 *)(lVar18 + 0x28) = 0;
          *(long **)(lVar18 + 0x20) = local_98;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          FUN_0117a770((undefined8 *)(lVar18 + 0x28),&local_90);
          plVar2 = local_80;
          local_80 = (long *)0x0;
          *(long **)(lVar18 + 0x38) = plVar2;
          *puVar20 = &LAB_0219e41c;
          *(undefined1 **)(lVar18 + 8) = &LAB_0219e42c;
          *(undefined1 **)(lVar18 + 0x10) = &LAB_0219e59c;
          *(undefined1 **)(lVar18 + 0x18) = &LAB_0219e680;
          *(long **)(lVar18 + 0x80) = local_78;
          if (lVar12 != 0) {
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          }
          lVar18 = plVar17[0x19];
          lVar19 = plVar17[0x1a];
          puVar4 = puVar20 + 0x12;
          if (lVar19 == lVar18) {
            lVar19 = lVar18;
          }
          else {
            do {
              puVar20 = puVar20 + -0x12;
              lVar19 = lVar19 + -0x90;
              FUN_00cbf394(plVar13,puVar20,lVar19);
            } while (lVar18 != lVar19);
            lVar18 = plVar17[0x19];
            lVar19 = plVar17[0x1a];
          }
          plVar17[0x19] = (long)puVar20;
          plVar17[0x1a] = (long)puVar4;
          lVar12 = plVar17[0x1b];
          plVar17[0x1b] = lVar14 + uVar3 * 0x90;
          while (lVar14 = lVar19, lVar14 != lVar18) {
            pcVar15 = *(code **)(lVar14 + -0x88);
            lVar19 = lVar14 + -0x90;
            if (pcVar15 != (code *)0x0) {
              *(undefined8 *)(lVar14 + -0x80) = 0;
              *(undefined8 *)(lVar14 + -0x78) = 0;
              *(undefined8 *)(lVar14 + -0x90) = 0;
              *(undefined8 *)(lVar14 + -0x88) = 0;
              (*pcVar15)(lVar14 + -0x70);
            }
          }
          if (lVar18 != 0) {
            plVar13 = (long *)*plVar13;
            uVar11 = (**(code **)(*plVar13 + 0xf8))(plVar13);
            if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
              (**(code **)(*plVar13 + 0x18))(plVar13,lVar18,lVar12 - lVar18,0x10);
            }
            else {
              FUN_00c48fe8(plVar13,lVar18,lVar12 - lVar18,0x10);
            }
          }
        }
        if (local_80 != (long *)0x0) {
          lVar18 = local_80[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*local_80 + 0x50))();
          }
          else if (sVar6 == 0) goto LAB_01179e88;
        }
        puVar20 = local_90;
        if (local_90 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_90 + 3);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar5 = (int *)((long)local_90 + 0x1c);
            do {
              iVar9 = *piVar5;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar8) {
                *piVar5 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar18 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar18;
              local_70[0] = *puVar20;
              FUN_00c44438(lVar18 + 0x8040,local_70);
            }
          }
          else if (sVar6 == 0) goto LAB_01179ed8;
        }
      }
      else {
        FUN_0117aa94(&local_b8,plVar17[0xc],(int)plVar17[0xd]);
      }
      plVar17[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar17 + 0x10));
      goto LAB_01179cdc;
    }
    FUN_0117aa94(&local_b8,plVar17[0xc],(int)plVar17[0xd]);
  }
LAB_01179cdc:
  if (local_a0 != (long *)0x0) {
    lVar18 = local_a0[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*local_a0 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_01179e88;
  }
  plVar13 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar2 = local_b0 + 3;
    do {
      sVar6 = (short)*plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(short *)plVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_98 = (long *)*plVar13;
        FUN_00c44438(lVar18 + 0x8040,&local_98);
      }
    }
    else if (sVar6 == 0) goto LAB_01179ed8;
  }
  plVar13 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar13 != (long *)0x0) {
    lVar18 = plVar13[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_01179e88;
  }
  plVar2 = local_100;
  plVar13 = local_110;
  local_100 = (long *)0x0;
  param_1[0x16] = (long)plVar2;
  if (local_110 != (long *)0x0) {
    plVar2 = local_110 + 3;
    do {
      sVar6 = (short)*plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(short *)plVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)local_110 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_98 = (long *)*plVar13;
        FUN_00c44438(lVar18 + 0x8040,&local_98);
      }
    }
    else if (sVar6 == 0) goto LAB_01179ed8;
  }
  lVar18 = plVar17[6];
  psVar1 = (short *)(lVar18 + 0x1a);
  do {
    sVar6 = *psVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar6 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar6 == 1) {
    *(undefined8 *)(lVar18 + 0x10) = 0;
    (**(code **)(*plVar17 + 0x50))(plVar17);
  }
  else if (sVar6 == 0) {
LAB_01179e88:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_f8[0] != (long *)0x0) {
    (**(code **)(*local_f8[0] + 0x20))();
  }
  puVar20 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_c8 + 3);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_f8[0] = (long *)*puVar20;
        FUN_00c44438(lVar18 + 0x8040,local_f8);
      }
    }
    else if (sVar6 == 0) {
LAB_01179ed8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01179a70:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar8) {
    *plVar2 = lVar18;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01179a78;
  goto LAB_01179a68;
}


