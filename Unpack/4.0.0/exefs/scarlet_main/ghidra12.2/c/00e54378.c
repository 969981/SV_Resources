/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e54378; name: FUN_00e54378
 */


void FUN_00e54378(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 *puVar5;
  short sVar6;
  char cVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  bool bVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  long *local_110;
  undefined8 local_108;
  long *local_100;
  long *local_f8;
  undefined8 uStack_f0;
  long *local_d8;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  long local_98;
  undefined8 *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  local_f8 = (long *)0x0;
  uStack_f0 = 0;
  FUN_00c43ef0(&local_f8,param_1 + 0x30);
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  lVar19 = 0;
  if (param_1 != 0) {
    lVar19 = param_1 + 0x28;
  }
  if (local_f8[2] == lVar19) {
    FUN_00e29918(&local_c8,&local_f8);
  }
  plVar20 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar11 = local_f8 + 3;
    do {
      sVar6 = (short)*plVar11;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar18) {
        *(short *)plVar11 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar18) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_98 = *plVar20;
        FUN_00c44438(lVar10 + 0x8040,&local_98);
      }
    }
    else if (sVar6 == 0) goto LAB_00e549e4;
  }
  plVar20 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00e5561c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x50,8);
  puVar8 = PTR_DAT_047d66f8;
  if (plVar11 == (long *)0x0) {
    lVar19 = *plVar20;
LAB_00e55648:
    (**(code **)(lVar19 + 0xe8))(plVar20);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar11[2] = 0;
  *(undefined4 *)(plVar11 + 3) = 0;
  *plVar11 = (long)(puVar8 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar12 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar15 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  *plVar11 = (long)&PTR_LAB_045a1098;
  plVar11[1] = lVar15;
  plVar11[4] = (long)&PTR_LAB_045a1110;
  plVar21 = plVar11 + 5;
  *plVar21 = (long)&PTR_LAB_045a1170;
  plVar11[6] = 0;
  plVar11[7] = 0;
  FUN_00d1a3f4(plVar11 + 6,plVar21);
  *plVar11 = (long)&PTR_LAB_045a11c8;
  plVar11[4] = (long)&PTR_LAB_045a1250;
  *plVar21 = (long)&PTR_LAB_045a12b0;
  local_f8 = (long *)0x0;
  uStack_f0 = 0;
  FUN_00c43ef0(&local_f8,param_1 + 0x30);
  plVar11[8] = 0;
  plVar11[9] = 0;
  if (local_f8[2] == lVar19) {
    FUN_00e29918(plVar11 + 8,&local_f8);
  }
  plVar21 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar2 = local_f8 + 3;
    do {
      sVar6 = (short)*plVar2;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar18) {
        *(short *)plVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar18) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_98 = *plVar21;
        FUN_00c44438(lVar19 + 0x8040,&local_98);
      }
    }
    else if (sVar6 == 0) goto LAB_00e549e4;
  }
  *(undefined4 *)(plVar11 + 3) = 0x80050;
  plVar11[1] = (long)plVar20;
  plVar11[2] = (long)plVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  lVar19 = plVar11[6];
  if (*(long *)(lVar19 + 0x10) == 0) goto LAB_00e555fc;
  psVar1 = (short *)(lVar19 + 0x1a);
  do {
    sVar6 = *psVar1;
    cVar7 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar18) {
      *psVar1 = sVar6 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar6 == 0) {
    uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
    *(undefined8 *)(lVar19 + 8) = uVar13;
    *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
  }
  else if (sVar6 == -1) goto LAB_00e54a84;
  plVar20 = *(long **)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (plVar20 != (long *)0x0) {
    lVar19 = plVar20[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_00e54b84;
  }
  *(long **)(param_1 + 0x1b8) = plVar11;
  plVar20 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00e5561c;
  *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar20;
  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x90,8);
  if (plVar11 == (long *)0x0) {
    lVar19 = *plVar20;
    goto LAB_00e55648;
  }
  memset(plVar11 + 1,0,0x88);
  *plVar11 = (long)(puVar8 + 0x10);
  plVar11[2] = 0;
  *(undefined4 *)(plVar11 + 3) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar12 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *plVar11 = (long)&PTR_LAB_045a1098;
  plVar11[1] = lVar12;
  plVar11[4] = (long)&PTR_LAB_045a1110;
  plVar21 = plVar11 + 5;
  *plVar21 = (long)&PTR_LAB_045a1170;
  plVar11[6] = 0;
  plVar11[7] = 0;
  FUN_00d1a3f4(plVar11 + 6,plVar21);
  *plVar11 = (long)&PTR_LAB_045a0f18;
  plVar11[4] = (long)&PTR_LAB_045a0fa0;
  *plVar21 = (long)&PTR_LAB_045a1000;
  plVar11[8] = 0;
  *(undefined4 *)((long)plVar11 + 0x54) = 1;
  nn::os::InitializeLightEvent(plVar11 + 9,0,1);
  plVar11[0x10] = 0;
  plVar11[0x11] = 0;
  plVar11[0xb] = 0;
  plVar11[0xe] = 0;
  plVar11[0xf] = 0;
  plVar11[0xc] = 0;
  plVar11[0xd] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar12 = tpidr_el0;
    lVar10 = *(long *)(lVar12 + 0x30);
    if (lVar10 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar10 = DAT_04859430;
      *(long *)(lVar12 + 0x30) = DAT_04859430;
    }
  }
  plVar11[0xe] = lVar10;
  *(undefined4 *)(plVar11 + 0x11) = 0;
  *(undefined4 *)(plVar11 + 3) = 0x80090;
  plVar11[0xf] = 0x1fffffffffffffff;
  plVar11[0x10] = 0;
  plVar11[1] = (long)plVar20;
  plVar11[2] = (long)plVar11;
  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
  lVar19 = plVar11[6];
  if (*(long *)(lVar19 + 0x10) == 0) goto LAB_00e555fc;
  psVar1 = (short *)(lVar19 + 0x1a);
  do {
    sVar6 = *psVar1;
    cVar7 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar18) {
      *psVar1 = sVar6 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar6 == 0) {
    uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
    *(undefined8 *)(lVar19 + 8) = uVar13;
    *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
  }
  else if (sVar6 == -1) {
LAB_00e54a84:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar20 = *(long **)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar20 != (long *)0x0) {
    lVar19 = plVar20[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_00e54b84;
  }
  *(long **)(param_1 + 0x1c0) = plVar11;
  if ((*(long *)(param_1 + 0x118) != 0) && (**(char **)(*(long *)(param_1 + 0x118) + 0x38) != '\0'))
  {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    uVar13 = *(undefined8 *)PTR_DAT_047d4e00;
    *(undefined8 *)PTR_DAT_047d4e08 = uVar13;
    FUN_00e55738(&local_f8,uVar13,param_1 + 0x118);
    bVar18 = true;
    lVar19 = param_1;
    do {
      if (bVar18) {
        if (*(char *)(lVar19 + 1099) == '\x01') goto LAB_00e547a0;
        *(undefined1 *)(lVar19 + 1099) = 1;
      }
      else {
        psVar1 = (short *)(lVar19 + 0x420);
        do {
          cVar7 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar18) {
            *psVar1 = *psVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if ((*(long *)(lVar19 + 0x1c8) == 0) ||
         (lVar19 = *(long *)(*(long *)(lVar19 + 0x1c8) + 0x10), lVar19 == 0)) goto LAB_00e547a0;
      bVar18 = false;
      lVar19 = lVar19 + -0x28;
    } while( true );
  }
LAB_00e54954:
  puVar22 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_c8 + 3);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar18) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_f8 = (long *)*puVar22;
        FUN_00c44438(lVar19 + 0x8040,&local_f8);
      }
    }
    else if (sVar6 == 0) {
LAB_00e549e4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_00e547a0:
  uVar14 = FUN_00e55d70(param_1 + 0x148,1,&local_f8,0,0);
  if ((uVar14 & 1) == 0) {
    plVar20 = (long *)0x0;
  }
  else {
    plVar20 = *(long **)(param_1 + 0x168);
    if (plVar20 != (long *)0x0) {
      lVar19 = plVar20[6];
      if (*(long *)(lVar19 + 0x10) == 0) goto LAB_00e555fc;
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar6 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
        *(undefined8 *)(lVar19 + 8) = uVar13;
        *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
      }
      else if (sVar6 == -1) goto LAB_00e54a84;
    }
  }
  local_110 = (long *)0x0;
  local_108 = 0;
  FUN_00dddfdc(&local_110,&local_c8);
  if (((*PTR_DAT_047d8c58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar13 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar13;
  FUN_00cbf5d4(&local_100,uVar13,plVar20[1]);
  local_a8 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  FUN_00dbd160(&local_b0,&local_110);
  local_a0 = local_100;
  if (local_100 != (long *)0x0) {
    lVar19 = local_100[6];
    if (*(long *)(lVar19 + 0x10) == 0) {
LAB_00e555fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar13;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar6 == -1) goto LAB_00e54a84;
  }
  plVar11 = (long *)0x0;
  if (local_100 != (long *)0x0) {
    plVar11 = local_100 + 0xb;
  }
  if ((*(byte *)((long)plVar20 + 0x6d) & 1) == 0) {
    if ((*(byte *)((long)plVar20 + 0x6c) & 1) == 0) {
      plVar21 = plVar20 + 0xf;
      lVar19 = nn::os::GetCurrentThread();
LAB_00e54dfc:
      if (*plVar21 == 0) goto code_r0x00e54e04;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar20 + 0x10));
      do {
        if (*plVar21 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar20 + 0x10));
            while (*plVar21 == 0) {
              cVar7 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar18) {
                *plVar21 = lVar19;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00e54e0c;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar18) {
          *plVar21 = lVar19;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00e54e0c:
      if ((*(byte *)((long)plVar20 + 0x6c) & 1) == 0) {
        local_88 = 0;
        local_98 = local_b8;
        local_90 = (undefined8 *)0x0;
        FUN_00dddfdc(&local_90,&local_b0);
        local_80 = local_a0;
        if (local_a0 != (long *)0x0) {
          lVar19 = local_a0[6];
          if (*(long *)(lVar19 + 0x10) == 0) goto LAB_00e555fc;
          psVar1 = (short *)(lVar19 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar18) {
              *psVar1 = sVar6 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
            *(undefined8 *)(lVar19 + 8) = uVar13;
            *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
          }
          else if (sVar6 == -1) goto LAB_00e54a84;
        }
        local_78 = plVar11;
        if ((ulong)plVar20[0x1a] < (ulong)plVar20[0x1b]) {
          FUN_00e5b7d0(plVar20 + 0x19,&local_98);
        }
        else {
          uVar14 = plVar20[0x1d];
          lVar19 = plVar20[0x1a] - plVar20[0x19] >> 4;
          if (0x7ffffffffffffffe < uVar14) {
            uVar14 = 0x7fffffffffffffff;
          }
          uVar4 = lVar19 * -0x71c71c71c71c71c7 + 1;
          if (uVar14 < uVar4) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar10 = plVar20[0x1b] - plVar20[0x19] >> 4;
          uVar17 = lVar10 * 0x1c71c71c71c71c72;
          if (uVar4 <= uVar17) {
            uVar4 = uVar17;
          }
          plVar11 = plVar20 + 0x1c;
          if (uVar14 >> 1 <= (ulong)(lVar10 * -0x71c71c71c71c71c7)) {
            uVar4 = uVar14;
          }
          if (uVar4 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar4 * 0x90,0x10);
            if (lVar10 == 0) {
              (**(code **)(*(long *)*plVar11 + 0xe8))();
            }
          }
          lVar12 = *plVar11;
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar15 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar15 != 0) {
            if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_00e5561c;
            *(long *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = lVar12;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          }
          puVar22 = (undefined8 *)(lVar10 + lVar19 * 0x10);
          lVar19 = lVar10 + lVar19 * 0x10;
          puVar22[2] = 0;
          puVar22[3] = 0;
          *puVar22 = 0;
          puVar22[1] = 0;
          *(undefined8 *)(lVar19 + 0x28) = 0;
          *(long *)(lVar19 + 0x20) = local_98;
          *(undefined8 *)(lVar19 + 0x30) = 0;
          FUN_00dbd160((undefined8 *)(lVar19 + 0x28),&local_90);
          plVar21 = local_80;
          local_80 = (long *)0x0;
          *(long **)(lVar19 + 0x38) = plVar21;
          *puVar22 = &LAB_021a3e18;
          *(undefined1 **)(lVar19 + 8) = &LAB_021a3e28;
          *(undefined1 **)(lVar19 + 0x10) = &LAB_021a3f98;
          *(undefined1 **)(lVar19 + 0x18) = &LAB_021a407c;
          *(long **)(lVar19 + 0x80) = local_78;
          if (lVar15 != 0) {
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
          }
          puVar5 = puVar22 + 0x12;
          lVar19 = plVar20[0x19];
          lVar12 = plVar20[0x1a];
          if (lVar12 == lVar19) {
            lVar12 = lVar19;
          }
          else {
            do {
              puVar22 = puVar22 + -0x12;
              lVar12 = lVar12 + -0x90;
              FUN_00cbf394(plVar11,puVar22,lVar12);
            } while (lVar19 != lVar12);
            lVar19 = plVar20[0x19];
            lVar12 = plVar20[0x1a];
          }
          plVar20[0x19] = (long)puVar22;
          plVar20[0x1a] = (long)puVar5;
          lVar15 = plVar20[0x1b];
          plVar20[0x1b] = lVar10 + uVar4 * 0x90;
          while (lVar10 = lVar12, lVar10 != lVar19) {
            pcVar16 = *(code **)(lVar10 + -0x88);
            lVar12 = lVar10 + -0x90;
            if (pcVar16 != (code *)0x0) {
              *(undefined8 *)(lVar10 + -0x80) = 0;
              *(undefined8 *)(lVar10 + -0x78) = 0;
              *(undefined8 *)(lVar10 + -0x90) = 0;
              *(undefined8 *)(lVar10 + -0x88) = 0;
              (*pcVar16)(lVar10 + -0x70);
            }
          }
          if (lVar19 != 0) {
            plVar11 = (long *)*plVar11;
            uVar14 = (**(code **)(*plVar11 + 0xf8))(plVar11);
            if (((uVar14 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar11 + 0x18))(plVar11,lVar19,lVar15 - lVar19,0x10);
            }
            else {
              FUN_00c48fe8(plVar11,lVar19,lVar15 - lVar19,0x10);
            }
          }
        }
        if (local_80 != (long *)0x0) {
          lVar19 = local_80[6];
          psVar1 = (short *)(lVar19 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar18) {
              *psVar1 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar19 + 0x10) = 0;
            (**(code **)(*local_80 + 0x50))();
          }
          else if (sVar6 == 0) goto LAB_00e54b84;
        }
        puVar22 = local_90;
        if (local_90 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_90 + 3);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar18) {
              *psVar1 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar3 = (int *)((long)local_90 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar7 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar18) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar19 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar19;
              local_70[0] = *puVar22;
              FUN_00c44438(lVar19 + 0x8040,local_70);
            }
          }
          else if (sVar6 == 0) goto LAB_00e549e4;
        }
      }
      else {
        FUN_00e57fe0(&local_b8,plVar20[0xc],(int)plVar20[0xd]);
      }
      plVar20[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar20 + 0x10));
      goto LAB_00e548a8;
    }
    FUN_00e57fe0(&local_b8,plVar20[0xc],(int)plVar20[0xd]);
  }
LAB_00e548a8:
  if (local_a0 != (long *)0x0) {
    lVar19 = local_a0[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*local_a0 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_00e54b84;
  }
  plVar11 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar21 = local_b0 + 3;
    do {
      sVar6 = (short)*plVar21;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar18) {
        *(short *)plVar21 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar18) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_98 = *plVar11;
        FUN_00c44438(lVar19 + 0x8040,&local_98);
      }
    }
    else if (sVar6 == 0) goto LAB_00e549e4;
  }
  plVar11 = *(long **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar11 != (long *)0x0) {
    lVar19 = plVar11[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_00e54b84;
  }
  plVar21 = local_100;
  plVar11 = local_110;
  local_100 = (long *)0x0;
  *(long **)(param_1 + 0x188) = plVar21;
  if (local_110 != (long *)0x0) {
    plVar21 = local_110 + 3;
    do {
      sVar6 = (short)*plVar21;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar18) {
        *(short *)plVar21 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar18) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_98 = *plVar11;
        FUN_00c44438(lVar19 + 0x8040,&local_98);
      }
    }
    else if (sVar6 == 0) goto LAB_00e549e4;
  }
  lVar19 = plVar20[6];
  psVar1 = (short *)(lVar19 + 0x1a);
  do {
    sVar6 = *psVar1;
    cVar7 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar18) {
      *psVar1 = sVar6 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar6 == 1) {
    *(undefined8 *)(lVar19 + 0x10) = 0;
    (**(code **)(*plVar20 + 0x50))(plVar20);
  }
  else if (sVar6 == 0) {
LAB_00e54b84:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  goto LAB_00e54954;
code_r0x00e54e04:
  cVar7 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar18) {
    *plVar21 = lVar19;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00e54e0c;
  goto LAB_00e54dfc;
}


