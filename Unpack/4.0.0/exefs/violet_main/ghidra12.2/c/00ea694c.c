/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea694c; name: FUN_00ea694c
 */


/* WARNING: Removing unreachable block (ram,0x00ea6fc4) */
/* WARNING: Removing unreachable block (ram,0x00ea6fc8) */
/* WARNING: Removing unreachable block (ram,0x00ea6fd0) */
/* WARNING: Removing unreachable block (ram,0x00ea6fd8) */
/* WARNING: Removing unreachable block (ram,0x00ea7280) */
/* WARNING: Removing unreachable block (ram,0x00ea7288) */
/* WARNING: Removing unreachable block (ram,0x00ea728c) */
/* WARNING: Removing unreachable block (ram,0x00ea7294) */
/* WARNING: Removing unreachable block (ram,0x00ea729c) */
/* WARNING: Removing unreachable block (ram,0x00ea75b4) */
/* WARNING: Removing unreachable block (ram,0x00ea75c4) */
/* WARNING: Removing unreachable block (ram,0x00ea72a4) */
/* WARNING: Removing unreachable block (ram,0x00ea6fe0) */
/* WARNING: Removing unreachable block (ram,0x00ea6fe4) */
/* WARNING: Removing unreachable block (ram,0x00ea6f58) */
/* WARNING: Removing unreachable block (ram,0x00ea6f5c) */
/* WARNING: Removing unreachable block (ram,0x00ea6f64) */
/* WARNING: Removing unreachable block (ram,0x00ea6f6c) */
/* WARNING: Removing unreachable block (ram,0x00ea71a8) */
/* WARNING: Removing unreachable block (ram,0x00ea71b0) */
/* WARNING: Removing unreachable block (ram,0x00ea71b4) */
/* WARNING: Removing unreachable block (ram,0x00ea71bc) */
/* WARNING: Removing unreachable block (ram,0x00ea71c4) */
/* WARNING: Removing unreachable block (ram,0x00ea7500) */
/* WARNING: Removing unreachable block (ram,0x00ea7510) */
/* WARNING: Removing unreachable block (ram,0x00ea71cc) */
/* WARNING: Removing unreachable block (ram,0x00ea6f74) */
/* WARNING: Removing unreachable block (ram,0x00ea6f78) */

undefined8 FUN_00ea694c(long param_1)

{
  short *psVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  bool bVar27;
  long *plVar28;
  undefined8 *puVar29;
  char local_9c [4];
  long *local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  long local_48;
  
  plVar24 = (long *)(param_1 + 0x140);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar24 == 0) {
    cVar6 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar27) {
      *plVar24 = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00ea698c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar24 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar24 == 0) {
          cVar6 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar27) {
            *plVar24 = lVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00ea698c;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar27) {
      *plVar24 = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00ea698c:
  local_9c[0] = '\0';
  plVar24 = *(long **)(param_1 + 0x188);
  if (plVar24 == (long *)0x0) {
LAB_00ea6a60:
    FUN_00c9e664(&local_88,param_1 + 0xe8);
    if (local_88 != (long *)0x0) {
      lVar12 = 0;
      if (local_80 != (long *)0x0) {
        lVar12 = local_80[9];
      }
      lVar12 = FUN_00ea7754(lVar12 + 0x108,&local_78);
      if (lVar12 != 0) goto LAB_00ea6e10;
      if (local_80 == (long *)0x0) {
        plVar24 = (long *)0x0;
      }
      else {
        plVar24 = (long *)local_80[9];
      }
      plVar25 = *(long **)(param_1 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar25;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      plVar14 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x160,0x10);
      if (plVar14 == (long *)0x0) {
        (**(code **)(*plVar25 + 0xe8))(plVar25);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      FUN_00d1a240(plVar14,0x8009809f);
      puVar7 = PTR_DAT_047e1fe8;
      plVar26 = plVar14 + 4;
      *plVar26 = (long)(PTR_DAT_047e1fe8 + 0x170);
      plVar14[5] = (long)(puVar7 + 0x298);
      *plVar14 = (long)(puVar7 + 0x10);
      puVar20 = puVar7 + 0x318;
      plVar14[0x24] = 0;
      plVar14[6] = (long)(puVar7 + 0x2f0);
      plVar28 = plVar14 + 7;
      *plVar28 = (long)puVar20;
      plVar14[0x26] = 0;
      plVar14[0x27] = 0;
      plVar14[0x28] = 0;
      plVar14[0x29] = 0;
      *(undefined4 *)((long)plVar14 + 0x114) = 0;
      plVar14[0x2a] = 0;
      plVar14[0x2b] = 0;
      if (((char)plVar14[0xb] != '\0') || (*(char *)((long)plVar14 + 0x59) != '\n')) {
        lVar21 = plVar14[0xb];
        *(undefined2 *)(plVar14 + 0xb) = 0xa00;
        if (plVar14[9] != 0) {
          FUN_00c6a584(plVar14[9],plVar28);
          puVar20 = (undefined *)*plVar28;
        }
        (**(code **)(puVar20 + 0x20))(plVar28,(short)lVar21);
      }
      *(undefined4 *)(plVar14 + 3) = 0x100160;
      plVar14[1] = (long)plVar25;
      plVar14[2] = (long)plVar14;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      lVar12 = plVar14[0x13];
      if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar27) {
          *psVar1 = sVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 0) {
        uVar22 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar22;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
        pcVar16 = "count != 0";
        pcVar17 = "AddReference";
        pcVar18 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar19 = "Reference counter overflows.";
        goto LAB_00ea764c;
      }
      (**(code **)(plVar14[4] + 0xe8))(plVar26,plVar24);
      (**(code **)(plVar14[4] + 0x68))(plVar26);
      local_78 = plVar14;
      FUN_00df8c30(plVar24 + 0x21,&local_78);
      if (local_78 != (long *)0x0) {
        lVar12 = local_78[0x13];
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar27) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*local_78 + 0x50))();
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      (**(code **)(*plVar24 + 0x100))(plVar24,plVar26);
      plVar25 = plVar24 + 0x88;
      lVar21 = *plVar25;
      lVar12 = nn::os::GetCurrentThread();
      if (lVar12 == lVar21) {
        plVar25 = (long *)0x0;
        bVar27 = true;
LAB_00ea6c60:
        if ((*(byte *)(plVar24 + 0x8b) >> 2 & 1) == 0) {
          FUN_00d37964(plVar24,0,0);
        }
        else {
          (**(code **)(*plVar26 + 0xf8))(plVar26);
        }
        if (!bVar27) {
          *plVar25 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar25 + 1));
        }
        lVar12 = *(long *)(param_1 + 0x120);
        if (lVar12 != 0) {
          piVar2 = (int *)(lVar12 + 0x28);
          do {
            iVar11 = *piVar2;
            cVar6 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar27) {
              *piVar2 = iVar11 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        plVar24 = (long *)plVar14[0x24];
        plVar14[0x24] = lVar12;
        if (plVar24 == (long *)0x0) {
LAB_00ea6cd4:
          (**(code **)(*plVar14 + 0x130))(plVar14);
          local_78 = (long *)0x0;
          local_70 = 0;
          FUN_00c43ef0(&local_78,plVar14 + 0x13);
          puVar8 = PTR_DAT_047d3918;
          puVar7 = PTR_DAT_047d3910;
          puVar20 = PTR_DAT_047d3908;
          local_98 = (long *)0x0;
          local_90 = 0;
          if ((long *)local_78[2] == plVar14 + 5) {
            do {
              uVar22 = local_70;
              cVar6 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(&local_70,0x10);
              if (bVar27) {
                local_70 = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            uVar15 = *(undefined8 *)puVar7;
            *(undefined8 *)puVar8 = uVar15;
            FUN_00c44204(&local_68,uVar15,uVar22);
            plVar24 = local_78;
            local_78 = (long *)0x0;
            if (plVar24 != (long *)0x0) {
              plVar25 = plVar24 + 3;
              do {
                sVar4 = (short)*plVar25;
                cVar6 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar27) {
                  *(short *)plVar25 = sVar4 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar4 == 1) {
                piVar2 = (int *)((long)plVar24 + 0x1c);
                do {
                  iVar11 = *piVar2;
                  cVar6 = '\x01';
                  bVar27 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar27) {
                    *piVar2 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar11 != -1) {
                  if (((*puVar20 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar12 = *(long *)puVar7;
                  *(long *)puVar8 = lVar12;
                  local_48 = *plVar24;
                  FUN_00c44438(lVar12 + 0x8040,&local_48);
                }
              }
              else if (sVar4 == 0) goto LAB_00ea7008;
            }
            plVar24 = local_98;
            if (local_68 == (long *)0x0) {
              FUN_00ede0f0(&local_98);
            }
            else {
              local_98 = (long *)0x0;
              if (plVar24 != (long *)0x0) {
                plVar25 = plVar24 + 3;
                do {
                  sVar4 = (short)*plVar25;
                  cVar6 = '\x01';
                  bVar27 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar27) {
                    *(short *)plVar25 = sVar4 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar4 == 1) {
                  piVar2 = (int *)((long)plVar24 + 0x1c);
                  do {
                    iVar11 = *piVar2;
                    cVar6 = '\x01';
                    bVar27 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar27) {
                      *piVar2 = -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar11 != -1) {
                    if (((*puVar20 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar12 = *(long *)puVar7;
                    *(long *)puVar8 = lVar12;
                    local_48 = *plVar24;
                    FUN_00c44438(lVar12 + 0x8040,&local_48);
                  }
                }
                else if (sVar4 == 0) goto LAB_00ea7008;
              }
              local_98 = local_68;
              local_68 = (long *)0x0;
              local_90 = uVar22;
            }
          }
          plVar24 = local_78;
          if (local_78 != (long *)0x0) {
            plVar25 = local_78 + 3;
            do {
              sVar4 = (short)*plVar25;
              cVar6 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar27) {
                *(short *)plVar25 = sVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar4 == 1) {
              piVar2 = (int *)((long)local_78 + 0x1c);
              do {
                iVar11 = *piVar2;
                cVar6 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar27) {
                  *piVar2 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar11 != -1) {
                if (((*puVar20 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar12 = *(long *)puVar7;
                *(long *)puVar8 = lVar12;
                local_48 = *plVar24;
                FUN_00c44438(lVar12 + 0x8040,&local_48);
              }
            }
            else if (sVar4 == 0) goto LAB_00ea7008;
          }
          puVar3 = (undefined8 *)(param_1 + 0x300);
          do {
            uVar22 = local_90;
            cVar6 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(&local_90,0x10);
            if (bVar27) {
              local_90 = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (((*puVar20 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)
             ) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          uVar15 = *(undefined8 *)puVar7;
          *(undefined8 *)puVar8 = uVar15;
          FUN_00c44204(&local_48,uVar15,uVar22);
          plVar24 = local_98;
          local_98 = (long *)0x0;
          if (plVar24 != (long *)0x0) {
            plVar25 = plVar24 + 3;
            do {
              sVar4 = (short)*plVar25;
              cVar6 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar27) {
                *(short *)plVar25 = sVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar4 == 1) {
              piVar2 = (int *)((long)plVar24 + 0x1c);
              do {
                iVar11 = *piVar2;
                cVar6 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar27) {
                  *piVar2 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar11 != -1) {
                if (((*puVar20 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar12 = *(long *)puVar7;
                *(long *)puVar8 = lVar12;
                local_78 = (long *)*plVar24;
                FUN_00c44438(lVar12 + 0x8040,&local_78);
              }
            }
            else if (sVar4 == 0) goto LAB_00ea7008;
          }
          if (local_48 == 0) {
            FUN_00ede0f0(puVar3);
          }
          else {
            puVar29 = (undefined8 *)*puVar3;
            *puVar3 = 0;
            if (puVar29 != (undefined8 *)0x0) {
              psVar1 = (short *)(puVar29 + 3);
              do {
                sVar4 = *psVar1;
                cVar6 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar27) {
                  *psVar1 = sVar4 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar4 == 1) {
                piVar2 = (int *)((long)puVar29 + 0x1c);
                do {
                  iVar11 = *piVar2;
                  cVar6 = '\x01';
                  bVar27 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar27) {
                    *piVar2 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar11 != -1) {
                  if (((*puVar20 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar12 = *(long *)puVar7;
                  *(long *)puVar8 = lVar12;
                  local_78 = (long *)*puVar29;
                  FUN_00c44438(lVar12 + 0x8040,&local_78);
                }
              }
              else if (sVar4 == 0) goto LAB_00ea7008;
            }
            lVar12 = local_48;
            local_48 = 0;
            *(long *)(param_1 + 0x300) = lVar12;
            *(undefined8 *)(param_1 + 0x308) = uVar22;
          }
          plVar24 = local_98;
          if (local_98 != (long *)0x0) {
            plVar25 = local_98 + 3;
            do {
              sVar4 = (short)*plVar25;
              cVar6 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar27) {
                *(short *)plVar25 = sVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar4 == 1) {
              piVar2 = (int *)((long)local_98 + 0x1c);
              do {
                iVar11 = *piVar2;
                cVar6 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar27) {
                  *piVar2 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar11 != -1) {
                if (((*puVar20 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar12 = *(long *)puVar7;
                *(long *)puVar8 = lVar12;
                local_78 = (long *)*plVar24;
                FUN_00c44438(lVar12 + 0x8040,&local_78);
              }
            }
            else if (sVar4 == 0) {
LAB_00ea7008:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          goto LAB_00ea6e10;
        }
        plVar25 = plVar24 + 5;
        do {
          lVar12 = *plVar25;
          iVar11 = (int)lVar12 + -1;
          cVar6 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar27) {
            *(int *)plVar25 = iVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar24 + 0x10))();
          goto LAB_00ea6cd4;
        }
        if ((int)lVar12 != 0) goto LAB_00ea6cd4;
LAB_00ea762c:
        pcVar16 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar17 = "DecrementReferenceInternal";
        pcVar18 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar19 = "Reference counter underflows.";
LAB_00ea764c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar16,pcVar17,pcVar18,0x58,pcVar19);
      }
      lVar12 = nn::os::GetCurrentThread();
      while (*plVar25 == 0) {
        cVar6 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar27) {
          *plVar25 = lVar12;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB_00ea6c5c;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar24 + 0x89));
      do {
        if (*plVar25 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar24 + 0x89));
            while (*plVar25 == 0) {
              cVar6 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar27) {
                *plVar25 = lVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_00ea6c5c;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar27) {
          *plVar25 = lVar12;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00ea6c5c:
      bVar27 = false;
      goto LAB_00ea6c60;
    }
LAB_00ea6e10:
    if (local_80 != (long *)0x0) {
      plVar24 = local_80 + 5;
      do {
        lVar12 = *plVar24;
        iVar11 = (int)lVar12 + -1;
        cVar6 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar27) {
          *(int *)plVar24 = iVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
      else if ((int)lVar12 == 0) goto LAB_00ea762c;
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x60))();
    }
    FUN_00ea7e24(param_1);
    *(undefined4 *)(param_1 + 0x130) = 3;
  }
  else {
    uVar23 = 0;
    while( true ) {
      local_9c[0] = '\0';
      uVar9 = FUN_00ea783c(plVar24[6],local_9c);
      while (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0) {
        uVar10 = FUN_00ea783c(plVar24[6],local_9c);
        uVar9 = uVar9 & uVar10;
      }
      if ((uVar9 & 1) != 0) goto LAB_00ea6a60;
      if (*(char *)(param_1 + 0x119) != '\0') break;
      for (plVar24 = *(long **)(param_1 + 0x188); plVar24 != (long *)0x0; plVar24 = (long *)*plVar24
          ) {
        lVar12 = *(long *)(plVar24[6] + 0x70);
        if (((*(int *)(lVar12 + 0x15c) != 1) || (uVar13 = FUN_00ea79f4(lVar12), (uVar13 & 1) == 0))
           || (lVar21 = *(long *)(lVar12 + 0x108), lVar21 == 0)) goto LAB_00ea773c;
        for (lVar5 = *(long *)(lVar21 + 0x38); lVar5 != *(long *)(lVar21 + 0x40);
            lVar5 = lVar5 + 0x40) {
          if ((*(long *)(lVar5 + 8) == 0) || ((*(byte *)(*(long *)(lVar5 + 8) + 0x1e8) & 1) == 0))
          goto LAB_00ea773c;
        }
        if (((*(long *)(lVar12 + 0x110) != 0) &&
            ((lVar21 = *(long *)(*(long *)(lVar12 + 0x110) + 0x38), lVar21 == 0 ||
             ((*(byte *)(lVar21 + 0x1e8) & 1) == 0)))) ||
           ((*(long *)(lVar12 + 0x118) != 0 &&
            ((lVar12 = *(long *)(*(long *)(lVar12 + 0x118) + 0x38), lVar12 == 0 ||
             ((*(byte *)(lVar12 + 0x1e8) & 1) == 0)))))) goto LAB_00ea773c;
      }
      if (local_9c[0] == '\0') {
LAB_00ea773c:
        uVar22 = 0;
        goto LAB_00ea76f4;
      }
      uVar23 = uVar23 + 1;
      if (4 < uVar23) {
        nn::os::YieldThread();
      }
      local_9c[0] = '\0';
      plVar24 = *(long **)(param_1 + 0x188);
      if (plVar24 == (long *)0x0) goto LAB_00ea6a60;
    }
  }
  uVar22 = 1;
LAB_00ea76f4:
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  return uVar22;
}


