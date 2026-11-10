/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e284f8; name: FUN_00e284f8
 */


void FUN_00e284f8(long param_1,long param_2,int *param_3)

{
  short *psVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  long *plVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  uint *puVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  long *local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  plVar15 = (long *)(param_1 + 0x2a0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00e28540;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
        while (*plVar15 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00e28540;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00e28540:
  local_90 = (long *)0x0;
  uStack_88 = 0;
  FUN_00c43ef0(&local_90,param_2 + 0x30);
  lVar9 = FUN_00e2ab04(param_1 + 0x1e8,&local_90);
  if (lVar9 == 0) {
    FUN_00e2ac2c(param_1 + 0x1e8,&local_90,&local_90);
    uVar22 = *(undefined8 *)(param_1 + 8);
    lVar9 = tpidr_el0;
    if (*(long *)(lVar9 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(undefined8 *)(lVar9 + 0x30) = DAT_04859430;
    }
    local_a0 = *(undefined8 *)(lVar9 + 0x30);
    local_98 = *(undefined8 *)(lVar9 + 0x38);
    *(undefined8 *)(lVar9 + 0x30) = uVar22;
    *(undefined2 *)(lVar9 + 0x38) = 1;
    uVar22 = *(undefined8 *)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00e29724;
    *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar22;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    local_c0 = *(long **)(param_1 + 8);
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_a8 = 0;
    local_c8 = (long *)0x0;
    local_b8 = 0x1fffffffffffffff;
    uStack_b0 = 0;
    puVar2 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (4 - (long)*param_3)));
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    puVar26 = puVar2 + 1;
    uVar13 = (ulong)*puVar2;
    if (uVar13 != 0) {
      puVar2 = puVar26 + uVar13;
      lVar12 = 0;
      if (param_2 != 0) {
        lVar12 = param_2 + 0x28;
      }
      do {
        piVar3 = (int *)((long)puVar26 + (ulong)*puVar26);
        puVar14 = (ushort *)((long)piVar3 - (long)*piVar3);
        if (*puVar14 < 5) {
          piVar21 = (int *)0x0;
        }
        else {
          piVar21 = (int *)0x0;
          if ((ulong)puVar14[2] != 0) {
            puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[2]);
            piVar21 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if (*puVar14 < 5) {
          piVar16 = (int *)0x0;
        }
        else {
          piVar16 = (int *)0x0;
          if ((ulong)puVar14[2] != 0) {
            puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[2]);
            piVar16 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        uVar13 = *(ulong *)(param_1 + 0x70);
        uVar18 = (ulong)(((*(float *)((long)piVar21 +
                                     (ulong)*(ushort *)((long)piVar21 + (6 - (long)*piVar21))) -
                          (float)*(undefined8 *)(param_1 + 0x60)) * (float)uVar13) /
                        (float)*(undefined8 *)(param_1 + 0x50));
        uVar20 = (ulong)(((*(float *)((long)piVar16 +
                                     (ulong)*(ushort *)((long)piVar16 + (6 - (long)*piVar16)) + 8) -
                          (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20)) * (float)uVar13)
                        / (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20));
        plVar15 = local_c8;
        if (uVar18 < uVar13 && uVar20 < uVar13) {
          pcVar11 = (char *)FUN_00e29ce8(param_1,uVar18 + uVar13 * uVar20);
          lVar27 = *(long *)(pcVar11 + 8);
          local_80 = (long *)0x0;
          uStack_78 = 0;
          FUN_00c43ef0(&local_80,param_2 + 0x30);
          local_e8 = (long *)0x0;
          uStack_e0 = 0;
          if (local_80[2] == lVar12) {
            FUN_00e29918(&local_e8,&local_80);
          }
          plVar15 = local_80;
          if (local_80 != (long *)0x0) {
            plVar23 = local_80 + 3;
            do {
              sVar5 = (short)*plVar23;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar7) {
                *(short *)plVar23 = sVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 1) {
              piVar21 = (int *)((long)local_80 + 0x1c);
              do {
                iVar8 = *piVar21;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                if (bVar7) {
                  *piVar21 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar28 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar28;
                local_70[0] = *plVar15;
                FUN_00c44438(lVar28 + 0x8040,local_70);
              }
            }
            else if (sVar5 == 0) goto LAB_00e291d4;
          }
          plVar15 = local_e8;
          if (local_e8 == (long *)0x0) {
            lVar28 = 0;
          }
          else {
            plVar23 = local_e8 + 3;
            lVar28 = *local_e8;
            do {
              sVar5 = (short)*plVar23;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar7) {
                *(short *)plVar23 = sVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 1) {
              piVar21 = (int *)((long)local_e8 + 0x1c);
              do {
                iVar8 = *piVar21;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                if (bVar7) {
                  *piVar21 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar19 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar19;
                local_80 = (long *)*plVar15;
                FUN_00c44438(lVar19 + 0x8040,&local_80);
              }
            }
            else if (sVar5 == 0) goto LAB_00e291d4;
          }
          plVar23 = *(long **)(lVar27 + 0x50);
          plVar15 = *(long **)(lVar27 + 0x58);
          if (plVar23 != plVar15) {
            do {
              lVar19 = 0;
              if (*(long **)(*plVar23 + 0x40) != (long *)0x0) {
                lVar19 = **(long **)(*plVar23 + 0x40);
              }
              if (lVar19 == lVar28) goto LAB_00e287cc;
              plVar23 = plVar23 + 1;
            } while (plVar15 != plVar23);
            plVar23 = plVar15;
          }
LAB_00e287cc:
          if (plVar15 == plVar23) {
            plVar15 = *(long **)(param_1 + 8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar28 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_00e29724;
            *(long **)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = plVar15;
            *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
            plVar23 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xb0,8);
            if (plVar23 == (long *)0x0) {
              (**(code **)(*plVar15 + 0xe8))(plVar15);
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("ptr","Create",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                         ,0x40);
            }
            FUN_00e2a7a8();
            *(undefined4 *)(plVar23 + 3) = 0x800b0;
            plVar23[1] = (long)plVar15;
            plVar23[2] = (long)plVar23;
            *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
            lVar28 = plVar23[6];
            local_80 = plVar23;
            if (*(long *)(lVar28 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar28 + 0x1a);
            do {
              sVar5 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar5 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
              *(undefined8 *)(lVar28 + 8) = uVar22;
              *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
            }
            else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            if (*(ulong *)(lVar27 + 0x58) < *(ulong *)(lVar27 + 0x60)) {
              FUN_00e2b404((undefined8 *)(lVar27 + 0x50),&local_80);
            }
            else {
              uVar18 = *(ulong *)(lVar27 + 0x70);
              lVar28 = (long)(*(ulong *)(lVar27 + 0x58) - *(long *)(lVar27 + 0x50)) >> 3;
              uVar13 = lVar28 + 1;
              if (0x7ffffffffffffffe < uVar18) {
                uVar18 = 0x7fffffffffffffff;
              }
              if (uVar18 < uVar13) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar19 = *(ulong *)(lVar27 + 0x60) - *(long *)(lVar27 + 0x50);
              uVar20 = lVar19 >> 2;
              if (uVar13 <= uVar20) {
                uVar13 = uVar20;
              }
              if (uVar18 >> 1 <= (ulong)(lVar19 >> 3)) {
                uVar13 = uVar18;
              }
              if (uVar13 == 0) {
                lVar19 = 0;
              }
              else {
                lVar19 = (**(code **)(**(long **)(lVar27 + 0x68) + 0x10))
                                   (*(long **)(lVar27 + 0x68),uVar13 << 3,8);
                if (lVar19 == 0) {
                  (**(code **)(**(long **)(lVar27 + 0x68) + 0xe8))();
                }
              }
              uVar22 = *(undefined8 *)(lVar27 + 0x68);
              plVar15 = (long *)(lVar19 + lVar28 * 8);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar28 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar28 == 0) {
                *plVar15 = (long)local_80;
              }
              else {
                if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_00e29724;
                *(undefined8 *)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = uVar22;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
                *plVar15 = (long)local_80;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
              }
              local_80 = (long *)0x0;
              plVar23 = *(long **)(lVar27 + 0x50);
              plVar29 = *(long **)(lVar27 + 0x58);
              plVar24 = plVar15;
              if (plVar29 == plVar23) {
                plVar29 = plVar23;
              }
              else {
                do {
                  uVar22 = *(undefined8 *)(lVar27 + 0x68);
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar28 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar28 == 0) {
                    lVar28 = plVar29[-1];
                    plVar29[-1] = 0;
                    plVar24[-1] = lVar28;
                  }
                  else {
                    if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_00e29724;
                    *(undefined8 *)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = uVar22;
                    *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
                    lVar17 = plVar29[-1];
                    plVar29[-1] = 0;
                    plVar24[-1] = lVar17;
                    *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
                  }
                  plVar29 = plVar29 + -1;
                  plVar24 = plVar24 + -1;
                } while (plVar23 != plVar29);
                plVar29 = *(long **)(lVar27 + 0x50);
                plVar23 = *(long **)(lVar27 + 0x58);
              }
              lVar28 = *(long *)(lVar27 + 0x60);
              *(long **)(lVar27 + 0x50) = plVar24;
              *(long **)(lVar27 + 0x58) = plVar15 + 1;
              *(ulong *)(lVar27 + 0x60) = lVar19 + uVar13 * 8;
              while (plVar23 != plVar29) {
                plVar23 = plVar23 + -1;
                plVar15 = (long *)*plVar23;
                if (plVar15 != (long *)0x0) {
                  lVar19 = plVar15[6];
                  psVar1 = (short *)(lVar19 + 0x1a);
                  do {
                    sVar5 = *psVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar7) {
                      *psVar1 = sVar5 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar5 == 1) {
                    *(undefined8 *)(lVar19 + 0x10) = 0;
                    (**(code **)(*plVar15 + 0x50))();
                  }
                  else if (sVar5 == 0) goto LAB_00e29868;
                }
              }
              if (plVar29 != (long *)0x0) {
                plVar15 = *(long **)(lVar27 + 0x68);
                lVar28 = lVar28 - (long)plVar29;
                uVar13 = (**(code **)(*plVar15 + 0xf8))(plVar15);
                if (((uVar13 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar15 + 0x18))(plVar15,plVar29,lVar28,8);
                }
                else {
                  FUN_00c48fe8(plVar15,plVar29,lVar28,8);
                }
              }
            }
            if (local_80 != (long *)0x0) {
              lVar28 = local_80[6];
              psVar1 = (short *)(lVar28 + 0x1a);
              do {
                sVar5 = *psVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar28 + 0x10) = 0;
                (**(code **)(*local_80 + 0x50))();
              }
              else if (sVar5 == 0) {
LAB_00e29868:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            FUN_00e2a578(*(undefined8 *)(*(long *)(lVar27 + 0x58) + -8),param_2);
            plVar23 = (long *)(*(long *)(lVar27 + 0x58) + -8);
          }
          FUN_00e2a068(*plVar23,piVar3);
          plVar24 = local_c0;
          plVar29 = local_d0;
          plVar15 = local_c8;
          if (*pcVar11 != '\0') {
            lVar27 = *plVar23;
            if (local_d0 < local_c8) {
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar28 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar28 == 0) {
                *plVar29 = lVar27;
              }
              else {
                if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_00e29724;
                *(long **)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = plVar24;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
                *plVar29 = lVar27;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
              }
              local_d0 = plVar29 + 1;
              plVar15 = local_c8;
            }
            else {
              lVar28 = (long)local_d0 - (long)local_d8 >> 3;
              uVar13 = lVar28 + 1;
              uVar18 = local_b8;
              if (0x7ffffffffffffffe < local_b8) {
                uVar18 = 0x7fffffffffffffff;
              }
              if (uVar18 < uVar13) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              uVar20 = (long)local_c8 - (long)local_d8 >> 2;
              if (uVar13 <= uVar20) {
                uVar13 = uVar20;
              }
              if (uVar18 >> 1 <= (ulong)((long)local_c8 - (long)local_d8 >> 3)) {
                uVar13 = uVar18;
              }
              if (uVar13 == 0) {
                lVar19 = 0;
              }
              else {
                lVar19 = (**(code **)(*local_c0 + 0x10))(local_c0,uVar13 << 3,8);
                if (lVar19 == 0) {
                  (**(code **)(*local_c0 + 0xe8))();
                }
              }
              plVar23 = local_c0;
              plVar15 = (long *)(lVar19 + lVar28 * 8);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar28 = nn::os::GetTlsValue(DAT_04865a30);
              plVar29 = local_d8;
              if (lVar28 == 0) {
                *plVar15 = lVar27;
              }
              else {
                if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_00e29724;
                *(long **)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = plVar23;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
                *plVar15 = lVar27;
                *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
              }
              plVar23 = plVar15;
              plVar24 = local_d0;
              if (local_d0 != local_d8) {
                do {
                  plVar25 = local_c0;
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar27 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar27 == 0) {
                    plVar23[-1] = plVar24[-1];
                  }
                  else {
                    if (0xf < *(ulong *)(lVar27 + 0x80)) goto LAB_00e29724;
                    *(long **)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = plVar25;
                    *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
                    plVar23[-1] = plVar24[-1];
                    *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
                  }
                  plVar24 = plVar24 + -1;
                  plVar23 = plVar23 + -1;
                } while (plVar29 != plVar24);
                plVar29 = local_d8;
              }
              plVar24 = local_c0;
              local_d0 = plVar15 + 1;
              plVar15 = (long *)(lVar19 + uVar13 * 8);
              local_d8 = plVar23;
              if (plVar29 != (long *)0x0) {
                lVar27 = (long)local_c8 - (long)plVar29;
                local_c8 = plVar15;
                uVar13 = (**(code **)(*local_c0 + 0xf8))(local_c0);
                if (((uVar13 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar24 + 0x18))(plVar24,plVar29,lVar27,8);
                  plVar15 = local_c8;
                }
                else {
                  FUN_00c48fe8(plVar24,plVar29,lVar27,8);
                  plVar15 = local_c8;
                }
              }
            }
          }
        }
        local_c8 = plVar15;
        puVar26 = puVar26 + 1;
      } while (puVar26 != puVar2);
    }
    plVar15 = (long *)(param_1 + 0x250);
    lVar27 = *plVar15;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 != lVar27) {
      lVar12 = nn::os::GetCurrentThread();
LAB_00e28e50:
      if (*plVar15 == 0) goto code_r0x00e28e58;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 600));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 600));
            while (*plVar15 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar7) {
                *plVar15 = lVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_00e28e60;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = lVar12;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00e28e60:
      bVar7 = false;
      goto LAB_00e28e64;
    }
    plVar15 = (long *)0x0;
    bVar7 = true;
LAB_00e28e64:
    plVar23 = local_d0;
    if (local_d8 != local_d0) {
      plVar29 = local_d8;
      do {
        plVar24 = *(long **)(param_1 + 0x270);
        lVar12 = *plVar29;
        if (plVar24 == *(long **)(param_1 + 0x278)) {
          uVar18 = *(ulong *)(param_1 + 0x288);
          lVar27 = (long)plVar24 - *(long *)(param_1 + 0x268) >> 3;
          uVar13 = lVar27 + 1;
          if (0x7ffffffffffffffe < uVar18) {
            uVar18 = 0x7fffffffffffffff;
          }
          if (uVar18 < uVar13) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar28 = (long)*(long **)(param_1 + 0x278) - *(long *)(param_1 + 0x268);
          uVar20 = lVar28 >> 2;
          if (uVar13 <= uVar20) {
            uVar13 = uVar20;
          }
          if (uVar18 >> 1 <= (ulong)(lVar28 >> 3)) {
            uVar13 = uVar18;
          }
          if (uVar13 == 0) {
            lVar28 = 0;
          }
          else {
            lVar28 = (**(code **)(**(long **)(param_1 + 0x280) + 0x10))
                               (*(long **)(param_1 + 0x280),uVar13 << 3,8);
            if (lVar28 == 0) {
              (**(code **)(**(long **)(param_1 + 0x280) + 0xe8))();
            }
          }
          plVar24 = (long *)(lVar28 + lVar27 * 8);
          uVar22 = *(undefined8 *)(param_1 + 0x280);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar27 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar27 == 0) {
            *plVar24 = lVar12;
          }
          else {
            if (0xf < *(ulong *)(lVar27 + 0x80)) goto LAB_00e29724;
            *(undefined8 *)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = uVar22;
            *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
            *plVar24 = lVar12;
            *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
          }
          lVar27 = *(long *)(param_1 + 0x268);
          lVar12 = *(long *)(param_1 + 0x270);
          plVar25 = plVar24;
          if (lVar12 != lVar27) {
            do {
              uVar22 = *(undefined8 *)(param_1 + 0x280);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar19 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar19 == 0) {
                plVar25[-1] = *(long *)(lVar12 + -8);
              }
              else {
                if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00e29724;
                *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar22;
                *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                plVar25[-1] = *(long *)(lVar12 + -8);
                *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
              }
              lVar12 = lVar12 + -8;
              plVar25 = plVar25 + -1;
            } while (lVar27 != lVar12);
            lVar27 = *(long *)(param_1 + 0x268);
          }
          *(long **)(param_1 + 0x270) = plVar24 + 1;
          lVar12 = *(long *)(param_1 + 0x278);
          *(long **)(param_1 + 0x268) = plVar25;
          *(ulong *)(param_1 + 0x278) = lVar28 + uVar13 * 8;
          if (lVar27 != 0) {
            plVar24 = *(long **)(param_1 + 0x280);
            lVar12 = lVar12 - lVar27;
            uVar13 = (**(code **)(*plVar24 + 0xf8))(plVar24);
            if (((uVar13 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
              (**(code **)(*plVar24 + 0x18))(plVar24,lVar27,lVar12,8);
            }
            else {
              FUN_00c48fe8(plVar24,lVar27,lVar12,8);
            }
          }
        }
        else {
          uVar22 = *(undefined8 *)(param_1 + 0x280);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar27 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar27 == 0) {
            *plVar24 = lVar12;
          }
          else {
            if (0xf < *(ulong *)(lVar27 + 0x80)) {
LAB_00e29724:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = uVar22;
            *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
            *plVar24 = lVar12;
            *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
          }
          *(long **)(param_1 + 0x270) = plVar24 + 1;
        }
        plVar29 = plVar29 + 1;
      } while (plVar29 != plVar23);
    }
    if (!bVar7) {
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    }
    plVar23 = local_c0;
    plVar15 = local_d8;
    if (local_d8 != (long *)0x0) {
      local_d0 = local_d8;
      lVar12 = (long)local_c8 - (long)local_d8;
      uVar13 = (**(code **)(*local_c0 + 0xf8))(local_c0);
      if (((uVar13 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,plVar15,lVar12,8);
      }
      else {
        FUN_00c48fe8(plVar23,plVar15,lVar12,8);
      }
    }
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    *(undefined8 *)(lVar9 + 0x30) = local_a0;
    *(undefined2 *)(lVar9 + 0x38) = (undefined2)local_98;
  }
  plVar15 = local_90;
  if (local_90 != (long *)0x0) {
    plVar23 = local_90 + 3;
    do {
      sVar5 = (short)*plVar23;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar7) {
        *(short *)plVar23 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_d8 = (long *)*plVar15;
        FUN_00c44438(lVar9 + 0x8040,&local_d8);
      }
    }
    else if (sVar5 == 0) {
LAB_00e291d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a8));
  return;
code_r0x00e28e58:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar7) {
    *plVar15 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00e28e60;
  goto LAB_00e28e50;
}


