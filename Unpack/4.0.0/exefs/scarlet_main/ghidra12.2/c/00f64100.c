/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f64100; name: FUN_00f64100
 */


void FUN_00f64100(undefined8 *param_1,long *param_2,int param_3,uint param_4,undefined8 *param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined **ppuVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long local_1b0;
  code *local_1a8;
  long local_1a0;
  long local_198;
  undefined1 auStack_190 [96];
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 *local_120;
  code *local_118;
  code *local_110;
  long local_108;
  undefined1 auStack_100 [104];
  undefined8 *local_98;
  undefined8 uStack_90;
  uint local_88;
  long *local_80 [2];
  long local_70 [2];
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x24));
  if (param_3 == 3) {
    uVar14 = 0xe000;
LAB_00f64150:
    (**(code **)(*(long *)param_2[1] + 0x250))
              ((long *)param_2[1],(ulong)param_4 | 0x8000000000000000,uVar14,0,0);
  }
  else {
    if (param_3 == 0) {
      uVar14 = 0x100;
      goto LAB_00f64150;
    }
    if (param_3 == 2) {
      uVar14 = 0x1c00;
      goto LAB_00f64150;
    }
  }
  plVar22 = (long *)*param_2;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00f64bf4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar22;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x150,0x10);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar22 + 0xe8))(plVar22);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  local_110 = (code *)0x0;
  local_108 = 0;
  local_120 = (undefined8 *)0x0;
  local_118 = (code *)0x0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_100);
    local_108 = param_5[3];
    local_118 = (code *)param_5[1];
    local_120 = (undefined8 *)*param_5;
    local_110 = (code *)param_5[2];
  }
  puVar6 = PTR_DAT_047d66f8;
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  *plVar10 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar11 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *plVar10 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar10[1] = lVar15;
  plVar10[4] = (long)(puVar6 + 0x88);
  plVar21 = plVar10 + 5;
  *plVar21 = (long)(puVar6 + 0xd8);
  plVar10[7] = 0;
  plVar10[6] = 0;
  FUN_00d1a3f4(plVar10 + 6,plVar21);
  ppuVar16 = &PTR_FUN_045ab3a8;
  *plVar10 = (long)&PTR_FUN_045ab3a8;
  plVar10[4] = (long)&PTR_FUN_045ab420;
  *plVar21 = (long)&DAT_045ab470;
  plVar10[0xb] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  if (local_110 != (code *)0x0) {
    (*local_110)(auStack_100,plVar10 + 0xc);
    plVar10[8] = (long)local_120;
    plVar10[9] = (long)local_118;
    plVar10[10] = (long)local_110;
    plVar10[0xb] = local_108;
    ppuVar16 = (undefined **)*plVar10;
  }
  plVar10[0x1d] = 0;
  *(undefined2 *)(plVar10 + 0x18) = 1;
  *(int *)((long)plVar10 + 0xc4) = param_3;
  *(uint *)(plVar10 + 0x19) = param_4;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  (*(code *)ppuVar16[3])(local_80,plVar10);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  if ((long *)local_80[0][2] == plVar21) {
    FUN_00f650ec(&local_98,local_80);
  }
  plVar21 = local_80[0];
  if (local_80[0] != (long *)0x0) {
    plVar23 = local_80[0] + 3;
    do {
      sVar3 = (short)*plVar23;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(short *)plVar23 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_80[0] + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_70[0] = *plVar21;
        FUN_00c44438(lVar11 + 0x8040,local_70);
      }
    }
    else if (sVar3 == 0) goto LAB_00f645d8;
  }
  pcVar17 = (code *)plVar10[0x1b];
  local_88 = param_4;
  if (pcVar17 != (code *)0x0) {
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    (*pcVar17)(plVar10 + 0x1e);
  }
  plVar10[0x1e] = 0;
  plVar10[0x1f] = 0;
  FUN_00f65410(plVar10 + 0x1e,&local_98);
  puVar7 = local_98;
  *(uint *)(plVar10 + 0x20) = local_88;
  plVar10[0x1a] = (long)&LAB_02b772cc;
  plVar10[0x1b] = (long)FUN_02219eec;
  plVar10[0x1c] = (long)FUN_00d92508;
  plVar10[0x1d] = (long)FUN_02219ffc;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_98 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_80[0] = (long *)*puVar7;
        FUN_00c44438(lVar11 + 0x8040,local_80);
      }
    }
    else if (sVar3 == 0) goto LAB_00f645d8;
  }
  pcVar17 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (code *)0x0;
    local_108 = 0;
    local_120 = (undefined8 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar17)(auStack_100);
  }
  *(undefined4 *)(plVar10 + 3) = 0x100150;
  plVar10[1] = (long)plVar22;
  plVar10[2] = (long)plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  lVar9 = plVar10[6];
  local_80[0] = plVar10;
  if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 0) {
    uVar14 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar14;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar10 = (long *)param_2[0xd];
  plVar22 = plVar10 + 3;
  lVar9 = plVar10[1];
  if (lVar9 != plVar10[2]) {
    FUN_00f64f74(plVar22,lVar9,local_80);
    plVar10[1] = lVar9 + 8;
LAB_00f64434:
    plVar10 = local_80[0];
    plVar21 = local_80[0] + 5;
    (**(code **)(*local_80[0] + 0x18))(&local_120,local_80[0]);
    local_130 = (undefined8 *)0x0;
    uStack_128 = 0;
    plVar22 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar22 = plVar21;
    }
    if ((long *)local_120[2] == plVar22) {
      FUN_00f650ec(&local_130,&local_120);
    }
    puVar7 = local_120;
    if (local_120 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_120 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_120 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_98 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_98);
        }
      }
      else if (sVar3 == 0) goto LAB_00f645d8;
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d92540(param_1,&local_130);
    puVar7 = local_130;
    if (local_130 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_130 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_130 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_120 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_120);
        }
      }
      else if (sVar3 == 0) {
LAB_00f645d8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    plVar22 = local_80[0];
    uVar14 = FUN_00f64ddc(*(undefined8 *)(param_2[1] + 0x908),param_3,(ulong)param_4);
    local_1b0 = 0;
    local_1a8 = (code *)0x0;
    local_1a0 = 0;
    local_198 = 0;
    if ((code *)plVar22[0x1c] != (code *)0x0) {
      (*(code *)plVar22[0x1c])(plVar22 + 0x1e,auStack_190);
      local_198 = plVar22[0x1d];
      local_1a8 = (code *)plVar22[0x1b];
      local_1b0 = plVar22[0x1a];
      local_1a0 = plVar22[0x1c];
    }
    FUN_00f64c9c(uVar14,&local_1b0);
    pcVar17 = local_1a8;
    if (local_1a8 != (code *)0x0) {
      local_1a0 = 0;
      local_198 = 0;
      local_1b0 = 0;
      local_1a8 = (code *)0x0;
      (*pcVar17)(auStack_190);
    }
    if (plVar22 != (long *)0x0) {
      lVar9 = plVar22[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar22 + 0x50))(plVar22);
      }
      else if (sVar3 == 0) goto LAB_00f64630;
    }
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x24));
    return;
  }
  uVar19 = plVar10[4];
  lVar9 = lVar9 - *plVar10 >> 3;
  uVar13 = lVar9 + 1;
  if (0x7ffffffffffffffe < uVar19) {
    uVar19 = 0x7fffffffffffffff;
  }
  if (uVar19 < uVar13) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar11 = plVar10[2] - *plVar10;
  uVar18 = lVar11 >> 2;
  if (uVar13 <= uVar18) {
    uVar13 = uVar18;
  }
  if (uVar19 >> 1 <= (ulong)(lVar11 >> 3)) {
    uVar13 = uVar19;
  }
  if (uVar13 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*(long *)*plVar22 + 0x10))((long *)*plVar22,uVar13 << 3,8);
    if (lVar11 == 0) {
      (**(code **)(*(long *)*plVar22 + 0xe8))();
    }
  }
  lVar9 = lVar11 + lVar9 * 8;
  FUN_00f64f74(plVar22,lVar9,local_80);
  plVar21 = (long *)*plVar10;
  plVar23 = (long *)plVar10[1];
  lVar15 = lVar9;
  if (plVar23 == plVar21) {
    plVar23 = plVar21;
  }
  else {
    do {
      lVar20 = *plVar22;
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 == 0) {
        lVar20 = plVar23[-1];
        plVar23[-1] = 0;
        *(long *)(lVar15 + -8) = lVar20;
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00f64bf4;
        *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar20;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        lVar20 = plVar23[-1];
        plVar23[-1] = 0;
        *(long *)(lVar15 + -8) = lVar20;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      plVar23 = plVar23 + -1;
      lVar15 = lVar15 + -8;
    } while (plVar21 != plVar23);
    plVar21 = (long *)plVar10[1];
    plVar23 = (long *)*plVar10;
  }
  lVar20 = plVar10[2];
  plVar10[2] = lVar11 + uVar13 * 8;
  *plVar10 = lVar15;
  plVar10[1] = lVar9 + 8;
  do {
    while( true ) {
      do {
        if (plVar21 == plVar23) {
          if (plVar23 != (long *)0x0) {
            plVar22 = (long *)*plVar22;
            uVar13 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar13 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,plVar23,lVar20 - (long)plVar23,8);
            }
            else {
              FUN_00c48fe8(plVar22,plVar23,lVar20 - (long)plVar23,8);
            }
          }
          goto LAB_00f64434;
        }
        plVar21 = plVar21 + -1;
        plVar10 = (long *)*plVar21;
      } while (plVar10 == (long *)0x0);
      lVar9 = plVar10[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 != 1) break;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
  } while (sVar3 != 0);
LAB_00f64630:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


