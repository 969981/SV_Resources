/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b611fc; name: FUN_00b611fc
 */


/* WARNING: Removing unreachable block (ram,0x00b616c0) */
/* WARNING: Removing unreachable block (ram,0x00b616c4) */
/* WARNING: Removing unreachable block (ram,0x00b616cc) */
/* WARNING: Removing unreachable block (ram,0x00b616d4) */
/* WARNING: Removing unreachable block (ram,0x00b61a28) */
/* WARNING: Removing unreachable block (ram,0x00b61a2c) */
/* WARNING: Removing unreachable block (ram,0x00b61a30) */
/* WARNING: Removing unreachable block (ram,0x00b61a38) */
/* WARNING: Removing unreachable block (ram,0x00b61a40) */
/* WARNING: Removing unreachable block (ram,0x00b61e44) */
/* WARNING: Removing unreachable block (ram,0x00b61e54) */
/* WARNING: Removing unreachable block (ram,0x00b61a50) */
/* WARNING: Removing unreachable block (ram,0x00b616dc) */
/* WARNING: Removing unreachable block (ram,0x00b616e0) */

void FUN_00b611fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  byte bVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined1 local_a8;
  long *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  long local_80;
  undefined1 local_78;
  long *local_70;
  long local_68;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar22 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar22;
  if (lVar22 != 0) {
    if (DAT_045dfcb0 != 0) {
      bVar19 = 0;
      puVar1 = PTR_DAT_047d66f8 + 0x10;
      do {
        lVar18 = *(long *)(lVar22 + 0x70);
        if ((lVar18 == 0) || (3 < bVar19)) {
LAB_00b6129c:
          plVar20 = (long *)0x0;
        }
        else {
          plVar13 = *(long **)(param_1 + 8);
          lVar15 = *(long *)(lVar18 + (ulong)bVar19 * 0x10 + 0x100);
          if ((lVar15 != 0) && (*(short *)(lVar15 + 0x1a) != 0)) goto LAB_00b6129c;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar15 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar13;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          plVar20 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x170,8);
          if (plVar20 == (long *)0x0) {
            (**(code **)(*plVar13 + 0xe8))(plVar13);
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("ptr","Create",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                       ,0x40);
          }
          local_90 = (long *)0x0;
          local_88 = 0;
          FUN_00c43ef0(&local_90,lVar18 + 0x48);
          local_80 = *(long *)(lVar18 + 0x58);
          local_78 = *(undefined1 *)(lVar18 + 0x60);
          *plVar20 = (long)puVar1;
          plVar20[2] = 0;
          *(undefined4 *)(plVar20 + 3) = 0;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          puVar9 = PTR_DAT_047d8c78;
          if (lVar11 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = 0;
            if (*(long *)(lVar11 + 0x80) != 0) {
              lVar16 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
            }
          }
          puVar2 = PTR_DAT_047d8c78 + 0x88;
          *plVar20 = (long)(PTR_DAT_047d8c78 + 0x10);
          plVar20[1] = lVar16;
          plVar20[4] = (long)puVar2;
          plVar23 = plVar20 + 5;
          *plVar23 = (long)(puVar9 + 0xd8);
          plVar21 = plVar20 + 6;
          *plVar21 = 0;
          plVar20[7] = 0;
          FUN_00d1a3f4(plVar21,plVar23);
          *plVar20 = (long)&PTR_FUN_045588e0;
          plVar20[4] = (long)&PTR_LAB_04558960;
          *plVar23 = (long)&PTR_LAB_045589b0;
          plVar20[8] = (long)plVar13;
          plVar20[10] = 0;
          plVar20[9] = 0;
          FUN_00c43ef0(plVar20 + 9,&local_90);
          *(byte *)(plVar20 + 0xd) = bVar19;
          *(undefined1 *)((long)plVar20 + 0x69) = 0xfd;
          plVar20[0xe] = 0;
          plVar20[0xf] = 0;
          *(undefined1 *)(plVar20 + 0xc) = local_78;
          plVar20[0xb] = local_80;
          plVar20[0x10] = 0;
          *(undefined1 *)(plVar20 + 0x11) = 0;
          memset(plVar20 + 0x12,0,0xe0);
          plVar17 = local_90;
          if (local_90 != (long *)0x0) {
            plVar3 = local_90 + 3;
            do {
              sVar6 = (short)*plVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar8) {
                *(short *)plVar3 = sVar6 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar6 == 1) {
              piVar5 = (int *)((long)local_90 + 0x1c);
              do {
                iVar10 = *piVar5;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar8) {
                  *piVar5 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_a0 = (long *)*plVar17;
                FUN_00c44438(lVar11 + 0x8040,&local_a0);
              }
            }
            else if (sVar6 == 0) goto LAB_00b62170;
          }
          *(undefined4 *)(plVar20 + 3) = 0x80170;
          plVar20[1] = (long)plVar13;
          plVar20[2] = (long)plVar20;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
          lVar15 = plVar20[6];
          if (*(long *)(lVar15 + 0x10) == 0) {
LAB_00b62128:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar4 = (short *)(lVar15 + 0x1a);
          do {
            sVar6 = *psVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar8) {
              *psVar4 = sVar6 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
            *(undefined8 *)(lVar15 + 8) = uVar14;
            *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
          }
          else if (sVar6 == -1) goto LAB_00b62148;
          local_90 = (long *)0x0;
          local_88 = 0;
          FUN_00c43ef0(&local_90,plVar21);
          local_a0 = (long *)0x0;
          local_98 = 0;
          plVar13 = local_90;
          if ((long *)local_90[2] == plVar23) {
            do {
              uVar14 = local_88;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(&local_88,0x10);
              if (bVar8) {
                local_88 = 0;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            uVar12 = *(undefined8 *)PTR_DAT_047d3910;
            *(undefined8 *)PTR_DAT_047d3918 = uVar12;
            FUN_00c44204(&local_70,uVar12,uVar14);
            plVar13 = local_90;
            local_90 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              plVar17 = plVar13 + 3;
              do {
                sVar6 = (short)*plVar17;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar8) {
                  *(short *)plVar17 = sVar6 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar6 == 1) {
                piVar5 = (int *)((long)plVar13 + 0x1c);
                do {
                  iVar10 = *piVar5;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                  if (bVar8) {
                    *piVar5 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar15 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar15;
                  local_68 = *plVar13;
                  FUN_00c44438(lVar15 + 0x8040,&local_68);
                }
              }
              else if (sVar6 == 0) goto LAB_00b62170;
            }
            plVar13 = local_a0;
            local_a0 = (long *)0x0;
            if (local_70 == (long *)0x0) {
              if (plVar13 != (long *)0x0) {
                plVar17 = plVar13 + 3;
                do {
                  sVar6 = (short)*plVar17;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar8) {
                    *(short *)plVar17 = sVar6 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (sVar6 == 1) {
                  piVar5 = (int *)((long)plVar13 + 0x1c);
                  do {
                    iVar10 = *piVar5;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar8) {
                      *piVar5 = -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar10 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar15 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar15;
                    local_68 = *plVar13;
                    FUN_00c44438(lVar15 + 0x8040,&local_68);
                  }
                }
                else if (sVar6 == 0) goto LAB_00b62170;
              }
              uVar14 = 0;
            }
            else {
              if (plVar13 != (long *)0x0) {
                plVar17 = plVar13 + 3;
                do {
                  sVar6 = (short)*plVar17;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar8) {
                    *(short *)plVar17 = sVar6 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (sVar6 == 1) {
                  piVar5 = (int *)((long)plVar13 + 0x1c);
                  do {
                    iVar10 = *piVar5;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                    if (bVar8) {
                      *piVar5 = -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar10 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar15 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar15;
                    local_68 = *plVar13;
                    FUN_00c44438(lVar15 + 0x8040,&local_68);
                  }
                }
                else if (sVar6 == 0) goto LAB_00b62170;
              }
              local_a0 = local_70;
              local_70 = (long *)0x0;
            }
            plVar17 = local_70;
            local_98 = uVar14;
            plVar13 = local_90;
            if (local_70 != (long *)0x0) {
              plVar23 = local_70 + 3;
              do {
                sVar6 = (short)*plVar23;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar8) {
                  *(short *)plVar23 = sVar6 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar6 == 1) {
                piVar5 = (int *)((long)local_70 + 0x1c);
                do {
                  iVar10 = *piVar5;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                  if (bVar8) {
                    *piVar5 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar15 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar15;
                  local_68 = *plVar17;
                  FUN_00c44438(lVar15 + 0x8040,&local_68);
                  plVar13 = local_90;
                }
              }
              else if (sVar6 == 0) goto LAB_00b62170;
            }
          }
          local_90 = plVar13;
          if (plVar13 != (long *)0x0) {
            plVar17 = plVar13 + 3;
            do {
              sVar6 = (short)*plVar17;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar8) {
                *(short *)plVar17 = sVar6 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar6 == 1) {
              piVar5 = (int *)((long)plVar13 + 0x1c);
              do {
                iVar10 = *piVar5;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar8) {
                  *piVar5 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar15;
                local_68 = *plVar13;
                FUN_00c44438(lVar15 + 0x8040,&local_68);
              }
            }
            else if (sVar6 == 0) goto LAB_00b62170;
          }
          lVar18 = lVar18 + (ulong)bVar19 * 0x10;
          plVar13 = (long *)(lVar18 + 0x100);
          do {
            uVar14 = local_98;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(&local_98,0x10);
            if (bVar8) {
              local_98 = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          uVar12 = *(undefined8 *)PTR_DAT_047d3910;
          *(undefined8 *)PTR_DAT_047d3918 = uVar12;
          FUN_00c44204(&local_68,uVar12,uVar14);
          plVar17 = local_a0;
          local_a0 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            plVar23 = plVar17 + 3;
            do {
              sVar6 = (short)*plVar23;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar8) {
                *(short *)plVar23 = sVar6 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar6 == 1) {
              piVar5 = (int *)((long)plVar17 + 0x1c);
              do {
                iVar10 = *piVar5;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar8) {
                  *piVar5 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar15;
                local_90 = (long *)*plVar17;
                FUN_00c44438(lVar15 + 0x8040,&local_90);
              }
            }
            else if (sVar6 == 0) goto LAB_00b62170;
          }
          if (local_68 == 0) {
            FUN_0179552c(plVar13);
          }
          else {
            puVar24 = (undefined8 *)*plVar13;
            *plVar13 = 0;
            if (puVar24 != (undefined8 *)0x0) {
              psVar4 = (short *)(puVar24 + 3);
              do {
                sVar6 = *psVar4;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                if (bVar8) {
                  *psVar4 = sVar6 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar6 == 1) {
                piVar5 = (int *)((long)puVar24 + 0x1c);
                do {
                  iVar10 = *piVar5;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                  if (bVar8) {
                    *piVar5 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar15 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar15;
                  local_90 = (long *)*puVar24;
                  FUN_00c44438(lVar15 + 0x8040,&local_90);
                }
              }
              else if (sVar6 == 0) goto LAB_00b62170;
            }
            lVar15 = local_68;
            local_68 = 0;
            *plVar13 = lVar15;
            *(undefined8 *)(lVar18 + 0x108) = uVar14;
          }
          plVar13 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar17 = local_a0 + 3;
            do {
              sVar6 = (short)*plVar17;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar8) {
                *(short *)plVar17 = sVar6 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar6 == 1) {
              piVar5 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar10 = *piVar5;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar8) {
                  *piVar5 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar18 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar18;
                local_90 = (long *)*plVar13;
                FUN_00c44438(lVar18 + 0x8040,&local_90);
              }
            }
            else if (sVar6 == 0) goto LAB_00b62170;
          }
          lVar18 = *plVar21;
          if (*(long *)(lVar18 + 0x10) == 0) goto LAB_00b62128;
          psVar4 = (short *)(lVar18 + 0x1a);
          do {
            sVar6 = *psVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar8) {
              *psVar4 = sVar6 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
            *(undefined8 *)(lVar18 + 8) = uVar14;
            *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
          }
          else if (sVar6 == -1) {
LAB_00b62148:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          lVar18 = *plVar21;
          psVar4 = (short *)(lVar18 + 0x1a);
          do {
            sVar6 = *psVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar8) {
              *psVar4 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*plVar20 + 0x50))(plVar20);
          }
          else if (sVar6 == 0) goto LAB_00b62100;
        }
        plVar17 = (long *)(param_1 + (ulong)bVar19 * 8 + 0x40);
        plVar13 = (long *)*plVar17;
        *plVar17 = 0;
        if (plVar13 != (long *)0x0) {
          lVar18 = plVar13[6];
          psVar4 = (short *)(lVar18 + 0x1a);
          do {
            sVar6 = *psVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar8) {
              *psVar4 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))();
          }
          else if (sVar6 == 0) {
LAB_00b62100:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        *plVar17 = (long)plVar20;
        bVar19 = bVar19 + 1;
      } while (bVar19 < DAT_045dfcb0);
    }
    local_b0 = 0;
    if (param_1 != 0) {
      local_b0 = param_1 + 0x28;
    }
    local_c0 = (long *)0x0;
    uStack_b8 = 0;
    local_a8 = 1;
    FUN_01667c7c(lVar22,&local_c0);
    plVar13 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar20 = local_c0 + 3;
      do {
        sVar6 = (short)*plVar20;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar8) {
          *(short *)plVar20 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar5 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar10 = *piVar5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar8) {
            *piVar5 = -1;
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
          local_90 = (long *)*plVar13;
          FUN_00c44438(lVar22 + 0x8040,&local_90);
        }
      }
      else if (sVar6 == 0) {
LAB_00b62170:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  if (((*PTR_DAT_047d8cc8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar22 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar22;
  if (lVar22 != 0) {
    FUN_01793e80(lVar22,param_1 + 0x38);
  }
  return;
}


