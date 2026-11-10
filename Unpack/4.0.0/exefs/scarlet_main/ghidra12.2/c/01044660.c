/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01044660; name: FUN_01044660
 */


void FUN_01044660(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  long *plVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 *local_118;
  undefined8 uStack_110;
  long *local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  
  *(undefined4 *)(param_1 + 0x130) = param_4;
  uVar11 = FUN_00dc5c18(param_1 + 0xf0,1,param_2,0,param_3);
  if ((uVar11 & 1) == 0) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = *(long **)(param_1 + 0x110);
    if (plVar21 != (long *)0x0) {
      lVar22 = plVar21[6];
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01045104;
      psVar1 = (short *)(lVar22 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar4 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        *(undefined8 *)(lVar22 + 8) = uVar14;
        *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) goto LAB_010449c4;
    }
  }
  plVar12 = (long *)*param_2;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
  }
  uVar18 = param_2[1];
  uVar15 = param_2[2];
  uVar14 = param_2[3];
  plVar5 = (long *)param_2[4];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  uVar6 = *(undefined4 *)(param_2 + 5);
  local_b0 = (long *)0x0;
  local_a8 = 0;
  FUN_00c43ef0(&local_b0,param_1 + 0x30);
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  if (local_b0[2] == param_1 + 0x28) {
    FUN_01187348(&local_118,&local_b0);
  }
  plVar23 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar2 = local_b0 + 3;
    do {
      sVar4 = (short)*plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(short *)plVar2 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_100 = (long *)*plVar23;
        FUN_00c44438(lVar22 + 0x8040,&local_100);
      }
    }
    else if (sVar4 == 0) goto LAB_0104496c;
  }
  if (((*PTR_DAT_047d8c58 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar13 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar13;
  FUN_00cbf5d4(&local_108,uVar13,plVar21[1]);
  local_100 = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
  }
  local_f8 = uVar18;
  uStack_f0 = uVar15;
  local_e8 = uVar14;
  local_e0 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  local_c0 = 0;
  local_c8 = (undefined8 *)0x0;
  local_d8 = uVar6;
  local_d0 = param_3;
  FUN_01365a38(&local_c8,&local_118);
  local_b8 = local_108;
  if (local_108 != (long *)0x0) {
    lVar22 = local_108[6];
    if (*(long *)(lVar22 + 0x10) == 0) {
LAB_01045104:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar14;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_010449c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar23 = (long *)0x0;
  if (local_108 != (long *)0x0) {
    plVar23 = local_108 + 0xb;
  }
  if ((*(byte *)((long)plVar21 + 0x6d) & 1) == 0) {
    if ((*(byte *)((long)plVar21 + 0x6c) & 1) == 0) {
      plVar2 = plVar21 + 0xf;
      lVar22 = nn::os::GetCurrentThread();
LAB_010449f8:
      if (*plVar2 == 0) goto code_r0x01044a00;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar21 + 0x10));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar21 + 0x10));
            while (*plVar2 == 0) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar22;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_01044a08;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar22;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_01044a08:
      if ((*(byte *)((long)plVar21 + 0x6c) & 1) == 0) {
        local_b0 = local_100;
        if (local_100 != (long *)0x0) {
          (**(code **)(*local_100 + 0x18))();
        }
        local_a8 = local_f8;
        uStack_a0 = uStack_f0;
        local_98 = local_e8;
        local_90 = local_e0;
        if (local_e0 != (long *)0x0) {
          (**(code **)(*local_e0 + 0x18))();
        }
        local_88 = local_d8;
        local_80 = local_d0;
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        FUN_01186804(&local_78,&local_c8);
        local_68 = local_b8;
        if (local_b8 != (long *)0x0) {
          lVar22 = local_b8[6];
          if (*(long *)(lVar22 + 0x10) == 0) goto LAB_01045104;
          psVar1 = (short *)(lVar22 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar4 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar4 == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
            *(undefined8 *)(lVar22 + 8) = uVar14;
            *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
          }
          else if (sVar4 == -1) goto LAB_010449c4;
        }
        uVar11 = plVar21[0x1a];
        local_60 = plVar23;
        if (uVar11 < (ulong)plVar21[0x1b]) {
          FUN_01045168(plVar21[0x1c],uVar11,&local_b0);
          plVar21[0x1a] = uVar11 + 0x90;
        }
        else {
          uVar20 = plVar21[0x1d];
          lVar22 = (long)(uVar11 - plVar21[0x19]) >> 4;
          if (0x7ffffffffffffffe < uVar20) {
            uVar20 = 0x7fffffffffffffff;
          }
          uVar11 = lVar22 * -0x71c71c71c71c71c7 + 1;
          if (uVar20 < uVar11) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar16 = plVar21[0x1b] - plVar21[0x19] >> 4;
          uVar19 = lVar16 * 0x1c71c71c71c71c72;
          if (uVar11 <= uVar19) {
            uVar11 = uVar19;
          }
          plVar23 = plVar21 + 0x1c;
          if (uVar20 >> 1 <= (ulong)(lVar16 * -0x71c71c71c71c71c7)) {
            uVar11 = uVar20;
          }
          if (uVar11 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = (**(code **)(*(long *)*plVar23 + 0x10))((long *)*plVar23,uVar11 * 0x90,0x10);
            if (lVar16 == 0) {
              (**(code **)(*(long *)*plVar23 + 0xe8))();
            }
          }
          lVar26 = lVar16 + lVar22 * 0x10;
          FUN_01045168(plVar21[0x1c],lVar26,&local_b0);
          lVar25 = plVar21[0x19];
          lVar24 = plVar21[0x1a];
          lVar22 = lVar26 + 0x90;
          if (lVar24 == lVar25) {
            lVar24 = lVar25;
          }
          else {
            do {
              lVar26 = lVar26 + -0x90;
              lVar24 = lVar24 + -0x90;
              FUN_00cbf394(plVar23,lVar26,lVar24);
            } while (lVar25 != lVar24);
            lVar25 = plVar21[0x19];
            lVar24 = plVar21[0x1a];
          }
          plVar21[0x19] = lVar26;
          plVar21[0x1a] = lVar22;
          lVar22 = plVar21[0x1b];
          plVar21[0x1b] = lVar16 + uVar11 * 0x90;
          while (lVar16 = lVar24, lVar16 != lVar25) {
            pcVar17 = *(code **)(lVar16 + -0x88);
            lVar24 = lVar16 + -0x90;
            if (pcVar17 != (code *)0x0) {
              *(undefined8 *)(lVar16 + -0x80) = 0;
              *(undefined8 *)(lVar16 + -0x78) = 0;
              *(undefined8 *)(lVar16 + -0x90) = 0;
              *(undefined8 *)(lVar16 + -0x88) = 0;
              (*pcVar17)(lVar16 + -0x70);
            }
          }
          if (lVar25 != 0) {
            plVar23 = (long *)*plVar23;
            uVar11 = (**(code **)(*plVar23 + 0xf8))(plVar23);
            if (((uVar11 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
              (**(code **)(*plVar23 + 0x18))(plVar23,lVar25,lVar22 - lVar25,0x10);
            }
            else {
              FUN_00c48fe8(plVar23,lVar25,lVar22 - lVar25,0x10);
            }
          }
        }
        if (local_68 != (long *)0x0) {
          lVar22 = local_68[6];
          psVar1 = (short *)(lVar22 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar22 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar4 == 0) goto LAB_010450dc;
        }
        puVar9 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar4 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar4 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_78 + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar22;
              local_58 = *puVar9;
              FUN_00c44438(lVar22 + 0x8040,&local_58);
            }
          }
          else if (sVar4 == 0) goto LAB_0104496c;
        }
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
      }
      else {
        FUN_010452e8(&local_100);
      }
      plVar21[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar21 + 0x10));
      goto LAB_0104483c;
    }
    FUN_010452e8(&local_100);
  }
LAB_0104483c:
  if (local_b8 != (long *)0x0) {
    lVar22 = local_b8[6];
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*local_b8 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_010450dc;
  }
  puVar9 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_c8 + 3);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*puVar9;
        FUN_00c44438(lVar22 + 0x8040,&local_b0);
      }
    }
    else if (sVar4 == 0) goto LAB_0104496c;
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_108 != (long *)0x0) {
    lVar22 = local_108[6];
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*local_108 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_010450dc;
  }
  puVar9 = local_118;
  if (local_118 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_118 + 3);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_118 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_b0 = (long *)*puVar9;
        FUN_00c44438(lVar22 + 0x8040,&local_b0);
      }
    }
    else if (sVar4 == 0) {
LAB_0104496c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  lVar22 = plVar21[6];
  psVar1 = (short *)(lVar22 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar4 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar4 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*plVar21 + 0x50))(plVar21);
  }
  else if (sVar4 == 0) {
LAB_010450dc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
code_r0x01044a00:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar8) {
    *plVar2 = lVar22;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01044a08;
  goto LAB_010449f8;
}


