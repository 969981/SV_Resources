/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fa9474; name: FUN_00fa9474
 */


/* WARNING: Removing unreachable block (ram,0x00fa9e00) */
/* WARNING: Removing unreachable block (ram,0x00fa9e04) */
/* WARNING: Removing unreachable block (ram,0x00fa9e0c) */
/* WARNING: Removing unreachable block (ram,0x00fa9e14) */
/* WARNING: Removing unreachable block (ram,0x00faa1ac) */
/* WARNING: Removing unreachable block (ram,0x00faa1b4) */
/* WARNING: Removing unreachable block (ram,0x00faa1b8) */
/* WARNING: Removing unreachable block (ram,0x00faa1c0) */
/* WARNING: Removing unreachable block (ram,0x00faa1c8) */
/* WARNING: Removing unreachable block (ram,0x00faab34) */
/* WARNING: Removing unreachable block (ram,0x00faab44) */
/* WARNING: Removing unreachable block (ram,0x00faa1d0) */
/* WARNING: Removing unreachable block (ram,0x00fa9e1c) */
/* WARNING: Removing unreachable block (ram,0x00fa9e20) */

void FUN_00fa9474(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  short *psVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  byte bVar7;
  short sVar8;
  char cVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined2 uVar14;
  bool bVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  char *pcVar22;
  ulong uVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  undefined4 uVar27;
  long lVar28;
  ulong uVar29;
  byte *pbVar30;
  ulong uVar31;
  short sVar32;
  byte *pbVar33;
  long *plVar34;
  long *plVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  long *local_110;
  ulong local_108;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  byte *local_e0;
  size_t local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  long local_b8;
  ulong local_b0;
  long local_a8;
  undefined4 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (((*PTR_DAT_047d8af8 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8af8), iVar16 != 0)) {
    FUN_00100190(PTR_LAB_047dd260,PTR_DAT_047d8b00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8af8);
  }
  *(undefined8 *)PTR_DAT_047d8b08 = *(undefined8 *)PTR_DAT_047d8b00;
  FUN_00fac970(&local_e8);
  puVar10 = PTR_DAT_047d3908;
  puVar1 = (undefined8 *)(param_1 + 0x48);
  do {
    pbVar33 = local_e0;
    cVar9 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(&local_e0,0x10);
    if (bVar15) {
      local_e0 = (byte *)0x0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar12 = PTR_DAT_047d3918;
  puVar11 = PTR_DAT_047d3910;
  uVar17 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar17;
  FUN_00c44204(&local_a8,uVar17,pbVar33);
  puVar37 = local_e8;
  local_e8 = (long *)0x0;
  if (puVar37 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar37 + 3);
    do {
      sVar32 = *psVar3;
      cVar9 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar15) {
        *psVar3 = sVar32 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar32 == 1) {
      piVar2 = (int *)((long)puVar37 + 0x1c);
      do {
        iVar16 = *piVar2;
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar16 != -1) {
        if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0))
        {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)puVar11;
        *(long *)puVar12 = lVar18;
        local_88 = (long *)*puVar37;
        FUN_00c44438(lVar18 + 0x8040,&local_88);
      }
    }
    else if (sVar32 == 0) goto LAB_00fa9e44;
  }
  if (local_a8 == 0) {
    FUN_00faddac(puVar1);
  }
  else {
    puVar37 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    if (puVar37 != (undefined8 *)0x0) {
      psVar3 = (short *)(puVar37 + 3);
      do {
        sVar32 = *psVar3;
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar15) {
          *psVar3 = sVar32 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar32 == 1) {
        piVar2 = (int *)((long)puVar37 + 0x1c);
        do {
          iVar16 = *piVar2;
          cVar9 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 != -1) {
          if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)
             ) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)puVar11;
          *(long *)puVar12 = lVar18;
          local_88 = (long *)*puVar37;
          FUN_00c44438(lVar18 + 0x8040,&local_88);
        }
      }
      else if (sVar32 == 0) goto LAB_00fa9e44;
    }
    lVar18 = local_a8;
    local_a8 = 0;
    *(long *)(param_1 + 0x48) = lVar18;
    *(byte **)(param_1 + 0x50) = pbVar33;
  }
  plVar19 = local_e8;
  if (local_e8 != (long *)0x0) {
    plVar35 = local_e8 + 3;
    do {
      sVar32 = (short)*plVar35;
      cVar9 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar15) {
        *(short *)plVar35 = sVar32 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar32 == 1) {
      piVar2 = (int *)((long)local_e8 + 0x1c);
      do {
        iVar16 = *piVar2;
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar16 != -1) {
        if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0))
        {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)puVar11;
        *(long *)puVar12 = lVar18;
        local_88 = (long *)*plVar19;
        FUN_00c44438(lVar18 + 0x8040,&local_88);
      }
    }
    else if (sVar32 == 0) {
LAB_00fa9e44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar18 = FUN_00fac5e8(&local_e8,*(undefined8 *)(param_1 + 8),param_1 + 0x40);
  if (lVar18 != 0) {
    piVar2 = (int *)(lVar18 + 0x28);
    do {
      iVar16 = *piVar2;
      cVar9 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar15) {
        *piVar2 = iVar16 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar16 == -1) goto LAB_00faac14;
  }
  plVar19 = *(long **)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x330) = 0;
  if (plVar19 == (long *)0x0) {
LAB_00fa95a0:
    *(long *)(param_1 + 0x330) = lVar18;
    lVar18 = FUN_00fac840(&local_e8,*(undefined8 *)(param_1 + 8),param_1 + 0x40);
    if (lVar18 != 0) {
      piVar2 = (int *)(lVar18 + 0x28);
      do {
        iVar16 = *piVar2;
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = iVar16 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar16 == -1) goto LAB_00faac14;
    }
    plVar19 = *(long **)(param_1 + 0x338);
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (plVar19 != (long *)0x0) {
      plVar35 = plVar19 + 5;
      do {
        lVar20 = *plVar35;
        iVar16 = (int)lVar20 + -1;
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar15) {
          *(int *)plVar35 = iVar16;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*plVar19 + 0x10))();
      }
      else if ((int)lVar20 == 0) goto LAB_00fa9d90;
    }
    *(long *)(param_1 + 0x338) = lVar18;
    plVar19 = *(long **)(param_1 + 8);
    lVar18 = (**(code **)(*plVar19 + 0x10))(plVar19,0x60,8);
    if (lVar18 == 0) {
      plVar19 = (long *)0x0;
      uVar17 = 0;
      uVar38 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar20 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_00faabcc;
      *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar19;
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
      FUN_00fab5bc(lVar18);
      uVar38 = 8;
      uVar17 = 0x60;
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
    }
    plVar35 = *(long **)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar18;
    if (plVar35 != (long *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar18 = FUN_00c4e600();
      iVar6 = *(int *)(lVar18 + 0x12c8);
      iVar16 = iVar6 + 1;
      *(int *)(lVar18 + 0x12c8) = iVar16;
      if (*(int *)(lVar18 + 0x12cc) <= iVar6) {
        *(int *)(lVar18 + 0x12cc) = iVar16;
      }
      (**(code **)(*plVar35 + 8))(plVar35);
      plVar21 = *(long **)(param_1 + 0x68);
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      uVar36 = *(undefined8 *)(param_1 + 0x78);
      uVar23 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar23 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,plVar35,uVar5,uVar36);
      }
      else {
        FUN_00c48fe8(plVar21,plVar35,uVar5,uVar36);
      }
      lVar18 = FUN_00c4e600();
      iVar16 = *(int *)(lVar18 + 0x12c8) + -1;
      *(int *)(lVar18 + 0x12c8) = iVar16;
      if (iVar16 == 0) {
        plVar35 = (long *)FUN_00c4e600();
        if (plVar35[600] != 0) {
          local_88 = plVar35 + plVar35[600] * 3;
          local_e8 = plVar35;
          FUN_00c4ea30(&local_e8,&local_88);
          plVar34 = (long *)*plVar35;
          plVar21 = plVar35;
          if (plVar35[600] != 0) {
            plVar21 = plVar35 + plVar35[600] * 3;
          }
          if (plVar21 == plVar35) {
            local_108 = 0;
            uVar23 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar35 + 0xd0))();
            if ((long *)*plVar35 != plVar34) {
              (**(code **)(*plVar34 + 0x100))(plVar34,plVar35,plVar35);
              plVar34 = (long *)*plVar35;
            }
            plVar4 = plVar35 + 3;
            if (plVar21 == plVar4) {
              local_108 = 0;
              uVar23 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar4 + 0xd0))();
              bVar15 = (long *)*plVar4 != plVar34;
              if (bVar15) {
                (**(code **)(*plVar34 + 0x100))(plVar34,plVar35,plVar35 + 3);
                plVar34 = (long *)plVar35[3];
              }
              local_108 = (ulong)bVar15;
              plVar4 = plVar35 + 6;
              if (plVar21 == plVar4) {
                uVar23 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar4 + 0xd0))();
                if ((long *)*plVar4 != plVar34) {
                  (**(code **)(*plVar34 + 0x100))(plVar34,plVar35 + local_108 * 3,plVar35 + 6);
                  plVar34 = (long *)plVar35[6];
                  local_108 = 2;
                }
                plVar4 = plVar35 + 9;
                if (plVar21 == plVar4) {
                  uVar23 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar4 + 0xd0))();
                  if ((long *)*plVar4 != plVar34) {
                    (**(code **)(*plVar34 + 0x100))(plVar34,plVar35 + local_108 * 3,plVar35 + 9);
                    plVar34 = (long *)plVar35[9];
                    local_108 = 3;
                  }
                  plVar4 = plVar35 + 0xc;
                  if (plVar21 == plVar4) {
                    uVar23 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar4 + 0xd0))();
                    if ((long *)*plVar4 != plVar34) {
                      (**(code **)(*plVar34 + 0x100))(plVar34,plVar35 + local_108 * 3,plVar35 + 0xc)
                      ;
                      plVar34 = (long *)plVar35[0xc];
                      local_108 = 4;
                    }
                    plVar4 = plVar35 + 0xf;
                    if (plVar21 == plVar4) {
                      uVar23 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar4 + 0xd0))();
                      if ((long *)*plVar4 != plVar34) {
                        (**(code **)(*plVar34 + 0x100))
                                  (plVar34,plVar35 + local_108 * 3,plVar35 + 0xf);
                        plVar34 = (long *)plVar35[0xf];
                        local_108 = 5;
                      }
                      local_110 = plVar35 + 0x12;
                      uVar23 = 6;
                      if (plVar21 != local_110) {
                        do {
                          (**(code **)(*(long *)*local_110 + 0xd0))();
                          if ((long *)*local_110 != plVar34) {
                            (**(code **)(*plVar34 + 0x100))
                                      (plVar34,plVar35 + local_108 * 3,local_110);
                            plVar34 = (long *)*local_110;
                            local_108 = uVar23;
                          }
                          local_110 = local_110 + 3;
                          uVar23 = uVar23 + 1;
                        } while (plVar21 != local_110);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar34 + 0x100))(plVar34,plVar35 + local_108 * 3,plVar35 + uVar23 * 3);
          plVar35[600] = 0;
        }
        *(undefined4 *)(lVar18 + 0x12cc) = 0;
      }
    }
    *(long **)(param_1 + 0x68) = plVar19;
    *(undefined8 *)(param_1 + 0x70) = uVar17;
    *(undefined8 *)(param_1 + 0x78) = uVar38;
    plVar19 = DAT_0485a0d0;
    lVar18 = *(long *)(*(long *)(param_1 + 0x40) + 0xb8);
    pbVar33 = (byte *)param_2[2];
    if (pbVar33 == (byte *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar16 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_e8 = *(long **)PTR_DAT_047d3e30;
      local_e0 = *(byte **)(PTR_DAT_047d3e30 + 8);
      local_d8 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      local_d0 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x18))();
      }
    }
    else {
      local_d8 = strlen((char *)pbVar33);
      bVar7 = *pbVar33;
      pbVar30 = pbVar33;
      local_e8 = (long *)&DAT_cbf29ce484222645;
      while (bVar7 != 0) {
        pbVar30 = pbVar30 + 1;
        local_e8 = (long *)(((ulong)local_e8 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar30;
      }
      local_d0 = (long *)0x0;
      local_e0 = pbVar33;
    }
    lVar20 = *(long *)(param_1 + 8);
    if (lVar20 == 0) {
      lVar20 = plVar19[1];
    }
    local_88 = plVar19;
    lVar20 = FUN_00dfee60(&local_a8,lVar20,&local_88,&local_e8);
    if (lVar20 != 0) {
      piVar2 = (int *)(lVar20 + 0x28);
      do {
        iVar16 = *piVar2;
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = iVar16 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar16 == -1) goto LAB_00faac14;
    }
    if (**(char **)(lVar18 + 0x40) != '\0') {
      FUN_00eac828(lVar20,lVar18 + 0x38);
    }
    plVar19 = *(long **)(param_1 + 0x3a8);
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    if (plVar19 != (long *)0x0) {
      plVar35 = plVar19 + 5;
      do {
        lVar18 = *plVar35;
        iVar16 = (int)lVar18 + -1;
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar15) {
          *(int *)plVar35 = iVar16;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*plVar19 + 0x10))();
      }
      else if ((int)lVar18 == 0) goto LAB_00fa9d90;
    }
    *(long *)(param_1 + 0x3a8) = lVar20;
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
      lVar20 = *(long *)(param_1 + 0x3a8);
    }
    local_e8 = (long *)0x121d7307bd58c49b;
    local_e0 = PTR_DAT_047d8e40;
    local_d8 = 0x1f;
    local_d0 = (long *)0x0;
    FUN_00eac828(lVar20,&local_e8);
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (*(long *)(param_1 + 0x3a8) != 0) {
      *(uint *)(*(long *)(param_1 + 0x3a8) + 0xf0) =
           ((*(ushort *)(param_1 + 0x3a1) & 0xff00) << 8 |
           (uint)*(ushort *)(param_1 + 0x3a1) << 0x18) >> 0x10;
    }
    FUN_00fab548(&local_f8);
    plVar19 = (long *)param_2[4];
    if (plVar19 == (long *)0x0) {
      plVar35 = *(long **)(param_1 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar18 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00faabcc;
      *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar35;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
      plVar21 = (long *)(**(code **)(*plVar35 + 0x10))(plVar35,0xb0,8);
      puVar10 = PTR_DAT_047d66f8;
      if (plVar21 == (long *)0x0) goto LAB_00faac4c;
      plVar21[2] = 0;
      *(undefined4 *)(plVar21 + 3) = 0;
      *plVar21 = (long)(puVar10 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar20 = nn::os::GetTlsValue(DAT_04865a30);
      puVar10 = PTR_DAT_047d8c78;
      if (lVar20 == 0) {
        lVar28 = 0;
      }
      else {
        lVar28 = 0;
        if (*(long *)(lVar20 + 0x80) != 0) {
          lVar28 = *(long *)(lVar20 + *(long *)(lVar20 + 0x80) * 8 + -8);
        }
      }
      *plVar21 = (long)(PTR_DAT_047d8c78 + 0x10);
      plVar21[1] = lVar28;
      plVar21[4] = (long)(puVar10 + 0x88);
      plVar34 = plVar21 + 5;
      *plVar34 = (long)(puVar10 + 0xd8);
      plVar21[7] = 0;
      plVar21[6] = 0;
      FUN_00d1a3f4(plVar21 + 6,plVar34);
      puVar10 = PTR_DAT_047dd300;
      plVar19 = plVar21 + 8;
      *plVar19 = (long)(PTR_DAT_047dd300 + 0x148);
      *plVar21 = (long)(puVar10 + 0x10);
      plVar21[4] = (long)(puVar10 + 0xa0);
      *plVar34 = (long)(puVar10 + 0xf0);
      plVar21[0xd] = 0;
      plVar21[0xb] = plVar21[1];
      plVar21[0xc] = 0x2e8ba2e8ba2e8ba;
      *(undefined4 *)(plVar21 + 0xe) = 0;
      plVar21[0xf] = 0;
      plVar21[0x10] = plVar21[1];
      plVar21[9] = 0;
      plVar21[10] = 0;
      *(undefined4 *)(plVar21 + 0x15) = 0x3f800000;
      *(undefined4 *)(plVar21 + 0x13) = 0;
      plVar21[0x11] = 0x2e8ba2e8ba2e8ba;
      plVar21[0x12] = 0;
      plVar21[0x14] = 0;
      *(undefined4 *)(plVar21 + 3) = 0x800b0;
      plVar21[1] = (long)plVar35;
      plVar21[2] = (long)plVar21;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
      (**(code **)(*plVar21 + 0x58))(plVar21);
      plVar35 = *(long **)(param_1 + 0x638);
      *(undefined8 *)(param_1 + 0x638) = 0;
      if (plVar35 != (long *)0x0) {
        (**(code **)(*plVar35 + 0x60))();
      }
      *(long **)(param_1 + 0x638) = plVar21;
    }
    local_e8 = (long *)0x0;
    local_c8 = 0x101;
    local_d0 = (long *)0x10000;
    local_e0 = (byte *)0x0;
    local_d8 = 0;
    lVar20 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
    uVar38 = *(undefined8 *)(param_1 + 0x60);
    lVar18 = param_2[3];
    plVar35 = *(long **)(*param_2 + 0x38);
    uVar17 = (**(code **)(*plVar35 + 0x50))(plVar35,0x626c7974,param_2[2]);
    FUN_00facfc8(uVar38,&local_f8,&DAT_00003010 + lVar20,plVar35,plVar19,lVar18,uVar17,&local_e8,0);
    local_f0 = local_f0 + param_2[6];
    local_e8 = (long *)0x0;
    local_b8 = 0;
    local_b0 = 0;
    local_e0 = (byte *)0x0;
    local_c8 = 0;
    local_c0 = (undefined1 *)0x0;
    local_f8 = local_f8 + param_2[5];
    local_d8 = 0;
    local_d0 = (long *)0x0;
    FUN_0145b670(&local_e8);
    local_e8 = (long *)((ulong)local_e8 & 0xfffffffcffffffff);
    FUN_0145b6a4(*(long *)(param_1 + 0x330) + 0x80,
                 &DAT_00003010 + *(long *)(*(long *)(*(long *)(param_1 + 0x330) + 0x30) + 0x30),
                 &local_e8);
    local_b8 = 0;
    local_b0 = 0;
    local_c8 = 0;
    local_c0 = (undefined1 *)0x0;
    local_d8 = 0;
    local_d0 = (long *)0x0;
    local_e8 = (long *)0x0;
    local_e0 = (byte *)0x0;
    FUN_00fab5ec(&local_e8);
    uVar17 = local_e8;
    uVar14 = local_e8._4_2_;
    local_e8._0_3_ = (uint3)(ushort)local_e8;
    uVar38 = local_e8;
    local_e8._6_2_ = SUB82(uVar17,6);
    local_e8._0_4_ = (undefined4)uVar38;
    local_e8 = (long *)(CONCAT26(local_e8._6_2_,CONCAT24(uVar14,(undefined4)local_e8)) | 0xc00000000
                       );
    FUN_00facacc(*(long *)(param_1 + 0x330) + 0x9c,
                 &DAT_00003010 + *(long *)(*(long *)(*(long *)(param_1 + 0x330) + 0x30) + 0x30),
                 &local_e8);
    local_c8 = 0;
    local_c0 = (undefined1 *)0x0;
    local_d8 = 0;
    local_d0 = (long *)0x0;
    local_e8 = (long *)0x0;
    local_e0 = (byte *)0x0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (long *)0x0;
    uStack_80 = 0;
    FUN_00fab594(&local_e8);
    FUN_00fab56c(&local_88);
    uVar17 = local_88;
    local_88 = (long *)CONCAT17(0xf,(undefined7)local_88);
    uVar38 = local_88;
    local_e8 = (long *)CONCAT71(local_e8._1_7_,1);
    local_88._0_3_ = CONCAT21(0x706,(byte)uVar17 | 1);
    local_88 = (long *)(CONCAT53((int5)((ulong)uVar38 >> 0x18),(undefined3)local_88) &
                       0xffffffff00ffffff);
    local_d0 = &local_88;
    FUN_00fac4c8(*(undefined8 *)(param_1 + 0x330),&local_e8);
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (long *)0x0;
    uStack_80 = 0;
    FUN_00fab560(&local_88);
    local_88 = (long *)CONCAT44(local_88._4_4_,0x22);
    pbVar33 = (byte *)(local_f0 + local_f8);
    lVar18 = FUN_00fab550(&DAT_00003010 + *(long *)(*(long *)(param_1 + 0x40) + 0x30),&local_88);
    uStack_90 = FUN_00fab558(&DAT_00003010 + *(long *)(*(long *)(param_1 + 0x40) + 0x30),&local_88);
    local_a8 = *(long *)(*(long *)PTR_DAT_047db018 + 0x10);
    local_a0 = 0;
    local_98 = (lVar18 + (long)pbVar33 * 2) - 1U & -lVar18;
    FUN_00fac718(*(undefined8 *)(param_1 + 0x338),&local_a8);
    local_e8 = (long *)CONCAT44(local_e8._4_4_,0x10);
    local_d0 = (long *)(*(long *)(param_1 + 0x338) + 0x58);
    local_c8 = *(undefined8 *)(*(long *)(param_1 + 0x338) + 0x48);
    lVar18 = param_1 + 0x340;
    local_d8 = CONCAT44(local_d8._4_4_,2);
    local_b0 = local_b0 & 0xffffffffffff0000;
    local_c0 = &LAB_01aa35d4;
    local_e0 = pbVar33;
    local_b8 = param_1;
    FUN_00facc7c(lVar18,&DAT_00003010 + *(long *)(*(long *)(param_1 + 0x40) + 0x30),&local_e8);
    *(byte *)(param_1 + 0x20e) = *(byte *)(param_1 + 0x20e) | 8;
    lVar20 = *(long *)(param_1 + 0x48);
    if ((lVar20 != 0) && (*(short *)(lVar20 + 0x1a) != 0)) {
      psVar3 = (short *)(lVar20 + 0x1a);
      sVar32 = *(short *)(lVar20 + 0x1a);
LAB_00faa2c0:
      sVar8 = *psVar3;
      if (sVar8 == sVar32) {
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar15) {
          *psVar3 = sVar32 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 != '\0') goto LAB_00faa2e4;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00faa2e4:
        bVar15 = false;
      }
      if (!bVar15) goto code_r0x00faa2ec;
      lVar20 = *(long *)(lVar20 + 0x10);
      if (lVar20 != 0) {
        *(long *)(param_1 + 0x138) = lVar20 + 0x20;
        lVar28 = *(long *)(lVar20 + 8);
        psVar3 = (short *)(lVar28 + 0x1a);
        do {
          sVar32 = *psVar3;
          cVar9 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar15) {
            *psVar3 = sVar32 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar32 == 1) {
          *(undefined8 *)(lVar28 + 0x10) = 0;
          (**(code **)(*(long *)(lVar20 + -0x28) + 0x50))();
        }
        else if (sVar32 == 0) goto LAB_00faa0c0;
        goto LAB_00fa9b80;
      }
    }
LAB_00fa9b78:
    *(undefined8 *)(param_1 + 0x138) = 0x48;
LAB_00fa9b80:
    *(long *)(param_1 + 0x148) = lVar18;
    *(long *)(param_1 + 0x150) = lVar18;
    iVar16 = FUN_00c40e00(*(undefined8 *)(param_1 + 0x60));
    if (0 < iVar16) {
      plVar35 = *(long **)(param_1 + 8);
      if (((*PTR_DAT_047d8af8 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8af8), iVar16 != 0)) {
        FUN_00100190(PTR_LAB_047dd260,PTR_DAT_047d8b00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8af8);
      }
      lVar18 = *(long *)PTR_DAT_047d8b00;
      *(long *)PTR_DAT_047d8b08 = lVar18;
      if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar20 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar20 + 0x80)) {
LAB_00faabcc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar35;
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
      lVar28 = (**(code **)(*plVar35 + 0x10))(plVar35,0x158,8);
      if (lVar28 == 0) {
LAB_00faac4c:
        (**(code **)(*plVar35 + 0xe8))(plVar35);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      FUN_00fad864(lVar28,plVar35,lVar18 + 0xd8);
      *(undefined4 *)(lVar28 + 0x18) = 0x80158;
      *(long **)(lVar28 + 8) = plVar35;
      *(long *)(lVar28 + 0x10) = lVar28;
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
      lVar18 = *(long *)(lVar28 + 0x30);
      if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar3 = (short *)(lVar18 + 0x1a);
      do {
        sVar32 = *psVar3;
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar15) {
          *psVar3 = sVar32 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar32 == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar17;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
      }
      else if (sVar32 == -1) {
        pcVar22 = "count != 0";
        pcVar24 = "AddReference";
        pcVar25 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar26 = "Reference counter overflows.";
        goto LAB_00fa9db0;
      }
      plVar19 = *(long **)(param_1 + 0x630);
      *(undefined8 *)(param_1 + 0x630) = 0;
      if (plVar19 != (long *)0x0) {
        lVar18 = plVar19[6];
        psVar3 = (short *)(lVar18 + 0x1a);
        do {
          sVar32 = *psVar3;
          cVar9 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar15) {
            *psVar3 = sVar32 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar32 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar19 + 0x50))();
        }
        else if (sVar32 == 0) {
LAB_00faa0c0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *(long *)(param_1 + 0x630) = lVar28;
      *(code **)(param_1 + 0x1f8) = FUN_00d8cf2c;
      *(long *)(param_1 + 0x200) = lVar28;
    }
    if ((int)param_2[1] == 0) {
      uVar27 = 0;
    }
    else {
      FUN_00fadfd0(&local_e8,*(undefined8 *)(param_1 + 8));
      plVar19 = local_e8;
      local_e8 = (long *)0x0;
      lVar18 = *(long *)(param_1 + 0x228);
      *(long **)(param_1 + 0x228) = plVar19;
      if (lVar18 != 0) {
        FUN_00fae4c4(param_1 + 0x230);
      }
      *(size_t *)(param_1 + 0x238) = local_d8;
      *(long **)(param_1 + 0x240) = local_d0;
      *(byte **)(param_1 + 0x230) = local_e0;
      uVar27 = (undefined4)param_2[1];
    }
    *(undefined4 *)(param_1 + 0x248) = uVar27;
    lVar18 = *param_2;
    if (lVar18 != 0) {
      piVar2 = (int *)(lVar18 + 0x28);
      do {
        iVar16 = *piVar2;
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = iVar16 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar16 == -1) {
LAB_00faac14:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar19 = *(long **)(param_1 + 0x328);
    *(long *)(param_1 + 0x328) = lVar18;
    if (plVar19 == (long *)0x0) {
LAB_00fa9bd4:
      puVar13 = PTR_DAT_047d20a0;
      puVar12 = PTR_DAT_047d2098;
      puVar11 = PTR_DAT_047d2090;
      puVar10 = PTR_DAT_047d2088;
      plVar19 = *(long **)(*(long *)(param_1 + 0x60) + 0x18);
      do {
        if (plVar19 == (long *)0x0) {
          if (*(long *)(param_1 + 0x638) != 0) {
            for (plVar19 = *(long **)(*(long *)(param_1 + 0x638) + 0x78); plVar19 != (long *)0x0;
                plVar19 = (long *)*plVar19) {
              lVar20 = plVar19[7];
              for (lVar18 = plVar19[6]; lVar18 != lVar20; lVar18 = lVar18 + 0x68) {
                plVar35 = (long *)FUN_0104b388(lVar18);
                if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar10), iVar16 != 0)) {
                  if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar12), iVar16 != 0))
                  {
                    *(undefined8 *)puVar13 = 0;
                    __cxa_guard_release(puVar12);
                  }
                  *(undefined **)puVar11 = puVar13;
                  __cxa_guard_release(puVar10);
                }
                if (plVar35 != (long *)0x0) {
                  for (plVar21 = (long *)(**(code **)(*plVar35 + 0x10))(plVar35);
                      plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
                    if (plVar21 == (long *)puVar11) {
                      lVar28 = FUN_00d36bcc(plVar35,0x14);
                      *(long *)(*(long *)(lVar28 + 8) + 0x70) = lVar18;
                      break;
                    }
                  }
                }
              }
            }
          }
          plVar19 = (long *)(param_1 + 0x680);
          if (*(long *)(param_1 + 0x6d8) != 0) {
            plVar35 = (long *)*(long *)(param_1 + 0x6b0);
            while (plVar35 != (long *)0x0) {
              plVar21 = (long *)*plVar35;
              if ((long *)plVar35[5] != (long *)0x0) {
                (**(code **)(*(long *)plVar35[5] + 0x20))();
              }
              plVar34 = *(long **)(param_1 + 0x6b8);
              uVar23 = (**(code **)(*plVar34 + 0xf8))(plVar34);
              if (((uVar23 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
                (**(code **)(*plVar34 + 0x18))(plVar34,plVar35,0x38,8);
                plVar35 = plVar21;
              }
              else {
                FUN_00c48fe8(plVar34,plVar35,0x38,8);
                plVar35 = plVar21;
              }
            }
            uVar23 = *(ulong *)(param_1 + 0x688);
            *(undefined8 *)(param_1 + 0x6b0) = 0;
            if (uVar23 != 0) {
              uVar29 = uVar23 & 3;
              if (uVar23 - 1 < 3) {
                uVar31 = 0;
              }
              else {
                uVar31 = 0;
                do {
                  *(undefined8 *)(*plVar19 + uVar31 * 8) = 0;
                  *(undefined8 *)(*plVar19 + uVar31 * 8 + 8) = 0;
                  *(undefined8 *)(*plVar19 + uVar31 * 8 + 0x10) = 0;
                  lVar18 = uVar31 * 8;
                  uVar31 = uVar31 + 4;
                  *(undefined8 *)(*plVar19 + lVar18 + 0x18) = 0;
                } while ((uVar23 & 0xfffffffffffffffc) != uVar31);
              }
              if (uVar29 != 0) {
                lVar18 = uVar31 << 3;
                do {
                  *(undefined8 *)(*plVar19 + lVar18) = 0;
                  uVar29 = uVar29 - 1;
                  lVar18 = lVar18 + 8;
                } while (uVar29 != 0);
              }
            }
            *(undefined8 *)(param_1 + 0x6d8) = 0;
          }
          lVar18 = *(long *)(*(long *)(param_1 + 0x60) + 0x18);
          local_e8 = (long *)lVar18;
          while (lVar18 != 0) {
            FUN_00faae34(&local_88,lVar18);
            FUN_00fab02c(plVar19,&local_88,&local_e8);
            lVar18 = FUN_00faadf0(lVar18);
            local_e8 = (long *)lVar18;
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
          }
          if (*(long *)(param_1 + 0x740) != 0) {
            plVar19 = (long *)*(long *)(param_1 + 0x718);
            while (plVar19 != (long *)0x0) {
              plVar35 = (long *)*plVar19;
              if ((long *)plVar19[5] != (long *)0x0) {
                (**(code **)(*(long *)plVar19[5] + 0x20))();
              }
              plVar21 = *(long **)(param_1 + 0x720);
              uVar23 = (**(code **)(*plVar21 + 0xf8))(plVar21);
              if (((uVar23 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
                (**(code **)(*plVar21 + 0x18))(plVar21,plVar19,0x38,8);
                plVar19 = plVar35;
              }
              else {
                FUN_00c48fe8(plVar21,plVar19,0x38,8);
                plVar19 = plVar35;
              }
            }
            uVar23 = *(ulong *)(param_1 + 0x6f0);
            *(undefined8 *)(param_1 + 0x718) = 0;
            if (uVar23 != 0) {
              uVar29 = uVar23 & 3;
              if (uVar23 - 1 < 3) {
                uVar31 = 0;
              }
              else {
                uVar31 = 0;
                do {
                  *(undefined8 *)(*(long *)(param_1 + 0x6e8) + uVar31 * 8) = 0;
                  *(undefined8 *)(*(long *)(param_1 + 0x6e8) + uVar31 * 8 + 8) = 0;
                  *(undefined8 *)(*(long *)(param_1 + 0x6e8) + uVar31 * 8 + 0x10) = 0;
                  lVar18 = uVar31 * 8;
                  uVar31 = uVar31 + 4;
                  *(undefined8 *)(*(long *)(param_1 + 0x6e8) + lVar18 + 0x18) = 0;
                } while ((uVar23 & 0xfffffffffffffffc) != uVar31);
              }
              if (uVar29 != 0) {
                lVar18 = uVar31 << 3;
                do {
                  *(undefined8 *)(*(long *)(param_1 + 0x6e8) + lVar18) = 0;
                  uVar29 = uVar29 - 1;
                  lVar18 = lVar18 + 8;
                } while (uVar29 != 0);
              }
            }
            *(undefined8 *)(param_1 + 0x740) = 0;
          }
          *(undefined2 *)(param_1 + 0x58) = 0x101;
          *(undefined1 *)(param_1 + 0x642) = 1;
          return;
        }
        if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar10), iVar16 != 0)) {
          if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar12), iVar16 != 0)) {
            *(undefined8 *)puVar13 = 0;
            __cxa_guard_release(puVar12);
          }
          *(undefined **)puVar11 = puVar13;
          __cxa_guard_release(puVar10);
        }
        for (plVar35 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19); plVar35 != (long *)0x0;
            plVar35 = (long *)*plVar35) {
          if (plVar35 == (long *)puVar11) {
            FUN_00fab630(param_1,plVar19);
            break;
          }
        }
        plVar19 = (long *)FUN_00faadf0(plVar19);
      } while( true );
    }
    plVar35 = plVar19 + 5;
    do {
      lVar18 = *plVar35;
      iVar16 = (int)lVar18 + -1;
      cVar9 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar15) {
        *(int *)plVar35 = iVar16;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar19 + 0x10))();
      goto LAB_00fa9bd4;
    }
    if ((int)lVar18 != 0) goto LAB_00fa9bd4;
  }
  else {
    plVar35 = plVar19 + 5;
    do {
      lVar20 = *plVar35;
      iVar16 = (int)lVar20 + -1;
      cVar9 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar15) {
        *(int *)plVar35 = iVar16;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar19 + 0x10))();
      goto LAB_00fa95a0;
    }
    if ((int)lVar20 != 0) goto LAB_00fa95a0;
  }
LAB_00fa9d90:
  pcVar22 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar24 = "DecrementReferenceInternal";
  pcVar25 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar26 = "Reference counter underflows.";
LAB_00fa9db0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar22,pcVar24,pcVar25,0x58,pcVar26);
code_r0x00faa2ec:
  sVar32 = sVar8;
  if (sVar8 == 0) goto LAB_00fa9b78;
  goto LAB_00faa2c0;
}


