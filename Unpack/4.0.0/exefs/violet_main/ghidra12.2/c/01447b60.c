/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01447b60; name: FUN_01447b60
 */


void FUN_01447b60(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  int iVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 uVar23;
  long *local_188;
  long *local_180;
  undefined8 local_178;
  long *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long *plStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *plStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long *plStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  long *local_78;
  long local_70 [2];
  
  local_170 = (long *)0x0;
  local_168 = 0;
  FUN_00c43ef0(&local_170,param_1 + 0x98);
  local_180 = (long *)0x0;
  local_178 = 0;
  lVar16 = 0;
  if (param_1 != 0) {
    lVar16 = param_1 + 0x28;
  }
  if (local_170[2] == lVar16) {
    FUN_00e04b04(&local_180,&local_170);
  }
  plVar17 = local_170;
  puVar10 = PTR_DAT_047d3918;
  puVar9 = PTR_DAT_047d3910;
  puVar8 = PTR_DAT_047d3908;
  if (local_170 != (long *)0x0) {
    plVar21 = local_170 + 3;
    do {
      sVar5 = (short)*plVar21;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(short *)plVar21 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_170 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)puVar9;
        *(long *)puVar10 = lVar16;
        local_70[0] = *plVar17;
        FUN_00c44438(lVar16 + 0x8040,local_70);
      }
    }
    else if (sVar5 == 0) goto LAB_01447f2c;
  }
  local_170 = (long *)0x0;
  local_168 = 0;
  do {
    uVar23 = local_178;
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(&local_178,0x10);
    if (bVar11) {
      local_178 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar13 = *(undefined8 *)puVar9;
  *(undefined8 *)puVar10 = uVar13;
  FUN_00c44204(&local_78,uVar13,uVar23);
  plVar17 = local_180;
  local_180 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    plVar21 = plVar17 + 3;
    do {
      sVar5 = (short)*plVar21;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(short *)plVar21 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)plVar17 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)puVar9;
        *(long *)puVar10 = lVar16;
        local_70[0] = *plVar17;
        FUN_00c44438(lVar16 + 0x8040,local_70);
      }
    }
    else if (sVar5 == 0) goto LAB_01447f2c;
  }
  plVar17 = local_170;
  local_170 = (long *)0x0;
  if (local_78 == (long *)0x0) {
    if (plVar17 != (long *)0x0) {
      plVar21 = plVar17 + 3;
      do {
        sVar5 = (short)*plVar21;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *(short *)plVar21 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)plVar17 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar9;
          *(long *)puVar10 = lVar16;
          local_70[0] = *plVar17;
          FUN_00c44438(lVar16 + 0x8040,local_70);
        }
      }
      else if (sVar5 == 0) goto LAB_01447f2c;
    }
    uVar23 = 0;
  }
  else {
    if (plVar17 != (long *)0x0) {
      plVar21 = plVar17 + 3;
      do {
        sVar5 = (short)*plVar21;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *(short *)plVar21 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)plVar17 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar9;
          *(long *)puVar10 = lVar16;
          local_70[0] = *plVar17;
          FUN_00c44438(lVar16 + 0x8040,local_70);
        }
      }
      else if (sVar5 == 0) goto LAB_01447f2c;
    }
    local_170 = local_78;
    local_78 = (long *)0x0;
  }
  plVar17 = local_78;
  local_168 = uVar23;
  if (local_78 != (long *)0x0) {
    plVar21 = local_78 + 3;
    do {
      sVar5 = (short)*plVar21;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(short *)plVar21 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)puVar9;
        *(long *)puVar10 = lVar16;
        local_70[0] = *plVar17;
        FUN_00c44438(lVar16 + 0x8040,local_70);
      }
    }
    else if (sVar5 == 0) goto LAB_01447f2c;
  }
  local_160 = *(undefined8 *)(param_1 + 0x120);
  uStack_158 = *(undefined8 *)(param_1 + 0x128);
  local_150 = *(undefined8 *)(param_1 + 0x130);
  plStack_148 = *(long **)(param_1 + 0x138);
  if (plStack_148 != (long *)0x0) {
    (**(code **)(*plStack_148 + 0x18))();
  }
  local_140 = *(undefined8 *)(param_1 + 0x160);
  uStack_138 = *(undefined8 *)(param_1 + 0x168);
  local_130 = *(undefined8 *)(param_1 + 0x170);
  plStack_128 = *(long **)(param_1 + 0x178);
  if (plStack_128 != (long *)0x0) {
    (**(code **)(*plStack_128 + 0x18))();
  }
  local_120 = *(undefined8 *)(param_1 + 0x180);
  uStack_118 = *(undefined8 *)(param_1 + 0x188);
  local_110 = *(undefined8 *)(param_1 + 400);
  plStack_108 = *(long **)(param_1 + 0x198);
  if (plStack_108 != (long *)0x0) {
    (**(code **)(*plStack_108 + 0x18))();
  }
  local_100 = 0;
  uStack_f8 = 0;
  FUN_00e4dbbc(&local_100,param_1 + 0x1a0);
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_00e4de20(&local_f0,param_1 + 0x1b0);
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_00e4e084(&local_e0,param_1 + 0x1c0);
  local_d0 = *(long *)(param_1 + 0x1d0);
  if (local_d0 != 0) {
    lVar16 = *(long *)(local_d0 + 0x30);
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_01448638;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar5 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar23;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_01448658;
  }
  local_c8 = *(long *)(param_1 + 0x1d8);
  if (local_c8 != 0) {
    lVar16 = *(long *)(local_c8 + 0x30);
    if (*(long *)(lVar16 + 0x10) == 0) {
LAB_01448638:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar5 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar23;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
LAB_01448658:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_c0 = *(undefined8 *)(param_1 + 8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x1e0);
  local_b0 = *(undefined1 *)(param_1 + 0x1e8);
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_00e499d4(&local_a8,param_1 + 0x1f0);
  local_98 = 0;
  uStack_90 = 0;
  FUN_00c43ef0(&local_98,param_1 + 0x200);
  plVar17 = local_180;
  local_88 = *(undefined8 *)(param_1 + 0x210);
  local_80 = *(undefined1 *)(param_1 + 0x2a1);
  if (local_180 != (long *)0x0) {
    plVar21 = local_180 + 3;
    do {
      sVar5 = (short)*plVar21;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(short *)plVar21 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_180 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)puVar9;
        *(long *)puVar10 = lVar16;
        local_70[0] = *plVar17;
        FUN_00c44438(lVar16 + 0x8040,local_70);
      }
    }
    else if (sVar5 == 0) {
LAB_01447f2c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  plVar17 = *(long **)(param_1 + 8);
  lVar16 = (**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  if (lVar16 == 0) {
    plVar17 = (long *)0x0;
    uVar13 = 0;
    uVar23 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    FUN_01448d74(lVar16,&local_170);
    uVar23 = 8;
    uVar13 = 0x20;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  }
  FUN_01448764(&local_170);
  lVar14 = *(long *)(param_1 + 0x2b0);
  *(long *)(param_1 + 0x2b0) = lVar16;
  if (lVar14 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar16 = FUN_00c4e600();
    iVar6 = *(int *)(lVar16 + 0x12c8);
    iVar12 = iVar6 + 1;
    *(int *)(lVar16 + 0x12c8) = iVar12;
    if (*(int *)(lVar16 + 0x12cc) <= iVar6) {
      *(int *)(lVar16 + 0x12cc) = iVar12;
    }
    FUN_00e45164(lVar14);
    plVar21 = *(long **)(param_1 + 0x2b8);
    uVar18 = *(undefined8 *)(param_1 + 0x2c0);
    uVar19 = *(undefined8 *)(param_1 + 0x2c8);
    uVar15 = (**(code **)(*plVar21 + 0xf8))(plVar21);
    if (((uVar15 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar21 + 0x18))(plVar21,lVar14,uVar18,uVar19);
    }
    else {
      FUN_00c48fe8(plVar21,lVar14,uVar18,uVar19);
    }
    lVar16 = FUN_00c4e600();
    iVar12 = *(int *)(lVar16 + 0x12c8) + -1;
    *(int *)(lVar16 + 0x12c8) = iVar12;
    if (iVar12 == 0) {
      plVar21 = (long *)FUN_00c4e600();
      if (plVar21[600] != 0) {
        local_180 = plVar21 + plVar21[600] * 3;
        local_170 = plVar21;
        FUN_00c4ea30(&local_170,&local_180);
        plVar20 = (long *)*plVar21;
        plVar4 = plVar21;
        if (plVar21[600] != 0) {
          plVar4 = plVar21 + plVar21[600] * 3;
        }
        if (plVar4 == plVar21) {
          uVar22 = 0;
          uVar15 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar21 + 0xd0))();
          if ((long *)*plVar21 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar21,plVar21);
            plVar20 = (long *)*plVar21;
          }
          plVar3 = plVar21 + 3;
          if (plVar4 == plVar3) {
            uVar22 = 0;
            uVar15 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar11 = (long *)*plVar3 != plVar20;
            if (bVar11) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar21,plVar21 + 3);
              plVar20 = (long *)plVar21[3];
            }
            uVar22 = (ulong)bVar11;
            plVar3 = plVar21 + 6;
            if (plVar4 == plVar3) {
              uVar15 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar22 * 3,plVar21 + 6);
                plVar20 = (long *)plVar21[6];
                uVar22 = 2;
              }
              plVar3 = plVar21 + 9;
              if (plVar4 == plVar3) {
                uVar15 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar22 * 3,plVar21 + 9);
                  plVar20 = (long *)plVar21[9];
                  uVar22 = 3;
                }
                plVar3 = plVar21 + 0xc;
                if (plVar4 == plVar3) {
                  uVar15 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar22 * 3,plVar21 + 0xc);
                    plVar20 = (long *)plVar21[0xc];
                    uVar22 = 4;
                  }
                  plVar3 = plVar21 + 0xf;
                  if (plVar4 == plVar3) {
                    uVar15 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar22 * 3,plVar21 + 0xf);
                      plVar20 = (long *)plVar21[0xf];
                      uVar22 = 5;
                    }
                    uVar15 = 6;
                    for (local_188 = plVar21 + 0x12; plVar4 != local_188; local_188 = local_188 + 3)
                    {
                      (**(code **)(*(long *)*local_188 + 0xd0))();
                      if ((long *)*local_188 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar22 * 3,local_188);
                        plVar20 = (long *)*local_188;
                        uVar22 = uVar15;
                      }
                      uVar15 = uVar15 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar22 * 3,plVar21 + uVar15 * 3);
        plVar21[600] = 0;
      }
      *(undefined4 *)(lVar16 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x2b8) = plVar17;
  *(undefined8 *)(param_1 + 0x2c0) = uVar13;
  *(undefined8 *)(param_1 + 0x2c8) = uVar23;
  return;
}


