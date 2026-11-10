/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0100fa74; name: FUN_0100fa74
 */


/* WARNING: Removing unreachable block (ram,0x0100fe20) */
/* WARNING: Removing unreachable block (ram,0x0100fe24) */
/* WARNING: Removing unreachable block (ram,0x0100fe2c) */
/* WARNING: Removing unreachable block (ram,0x0100fe34) */
/* WARNING: Removing unreachable block (ram,0x01010114) */
/* WARNING: Removing unreachable block (ram,0x0101011c) */
/* WARNING: Removing unreachable block (ram,0x01010120) */
/* WARNING: Removing unreachable block (ram,0x01010128) */
/* WARNING: Removing unreachable block (ram,0x01010130) */
/* WARNING: Removing unreachable block (ram,0x010104e8) */
/* WARNING: Removing unreachable block (ram,0x010104f8) */
/* WARNING: Removing unreachable block (ram,0x01010138) */
/* WARNING: Removing unreachable block (ram,0x0100fe3c) */
/* WARNING: Removing unreachable block (ram,0x0100fe40) */

void FUN_0100fa74(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  pMVar1 = (MutexType *)(param_2 + 0x24);
  nn::os::LockMutex(pMVar1);
  plVar20 = (long *)*param_2;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_01010614:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x410,0x10);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar20 + 0xe8))(plVar20);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  local_68 = (long *)param_2[1];
  if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
    plVar22 = local_68 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = *plVar22 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_00d0a71c(&local_78,param_3);
  FUN_01010f10(plVar11,&local_68,&local_78);
  plVar19 = local_78;
  puVar7 = PTR_DAT_047d3918;
  plVar22 = (long *)PTR_DAT_047d3910;
  if (local_78 != (long *)0x0) {
    plVar23 = local_78 + 3;
    do {
      sVar4 = (short)*plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(short *)plVar23 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *plVar22;
        *(long *)puVar7 = lVar15;
        local_90 = (undefined8 *)*plVar19;
        FUN_00c44438(lVar15 + 0x8040,&local_90);
      }
    }
    else if (sVar4 == 0) goto LAB_0100fed0;
  }
  if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
    plVar19 = local_68 + 2;
    do {
      lVar15 = *plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  *(undefined4 *)(plVar11 + 3) = 0x100410;
  plVar11[1] = (long)plVar20;
  plVar11[2] = (long)plVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  lVar10 = plVar11[6];
  local_80 = plVar11;
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar2 = (short *)(lVar10 + 0x1a);
  do {
    sVar4 = *psVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar6) {
      *psVar2 = sVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 == 0) {
    uVar17 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar17;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar11 = (long *)param_2[5];
  plVar20 = plVar11 + 3;
  lVar10 = plVar11[1];
  if (lVar10 == plVar11[2]) {
    uVar16 = plVar11[4];
    lVar10 = lVar10 - *plVar11 >> 3;
    uVar12 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = plVar11[2] - *plVar11;
    uVar14 = lVar15 >> 2;
    if (uVar12 <= uVar14) {
      uVar12 = uVar14;
    }
    if (uVar16 >> 1 <= (ulong)(lVar15 >> 3)) {
      uVar12 = uVar16;
    }
    if (uVar12 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*plVar20 + 0x10))((long *)*plVar20,uVar12 << 3,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*plVar20 + 0xe8))();
      }
    }
    lVar10 = lVar15 + lVar10 * 8;
    FUN_01010a74(plVar20,lVar10,&local_80);
    plVar19 = (long *)*plVar11;
    plVar22 = (long *)plVar11[1];
    lVar21 = lVar10;
    if (plVar22 == plVar19) {
      plVar23 = plVar19;
    }
    else {
      do {
        lVar24 = *plVar20;
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 == 0) {
          lVar24 = plVar22[-1];
          plVar22[-1] = 0;
          *(long *)(lVar21 + -8) = lVar24;
        }
        else {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01010614;
          *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar24;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          lVar24 = plVar22[-1];
          plVar22[-1] = 0;
          *(long *)(lVar21 + -8) = lVar24;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        plVar22 = plVar22 + -1;
        lVar21 = lVar21 + -8;
      } while (plVar19 != plVar22);
      plVar19 = (long *)plVar11[1];
      plVar23 = (long *)*plVar11;
    }
    *plVar11 = lVar21;
    plVar11[1] = lVar10 + 8;
    lVar10 = plVar11[2];
    plVar11[2] = lVar15 + uVar12 * 8;
    plVar22 = (long *)PTR_DAT_047d3910;
    do {
      while( true ) {
        do {
          if (plVar19 == plVar23) {
            if (plVar23 != (long *)0x0) {
              plVar20 = (long *)*plVar20;
              uVar12 = (**(code **)(*plVar20 + 0xf8))(plVar20);
              if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar20 + 0x18))(plVar20,plVar23,lVar10 - (long)plVar23,8);
              }
              else {
                FUN_00c48fe8(plVar20,plVar23,lVar10 - (long)plVar23,8);
              }
            }
            goto LAB_0100fc1c;
          }
          plVar19 = plVar19 + -1;
          plVar11 = (long *)*plVar19;
        } while (plVar11 == (long *)0x0);
        lVar15 = plVar11[6];
        psVar2 = (short *)(lVar15 + 0x1a);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 != 1) break;
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))();
      }
    } while (sVar4 != 0);
LAB_0100fdd4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  FUN_01010a74(plVar20,lVar10,&local_80);
  plVar11[1] = lVar10 + 8;
LAB_0100fc1c:
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_00d0a71c(&local_90,param_3);
  nn::os::LockMutex(pMVar1);
  lVar15 = param_2[0x48];
  lVar10 = lVar15 + 2;
  if (lVar15 != -2) {
    lVar10 = lVar15 + 1;
  }
  plVar20 = param_2 + 0x48;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  param_2[0x48] = lVar10;
  uVar12 = FUN_010106e4(param_2 + 0x41,plVar20,&local_90);
  plVar11 = (long *)PTR_DAT_047d3918;
  lVar10 = param_2[0x48];
  while ((uVar12 & 1) == 0) {
    lVar15 = lVar10 + 2;
    if (lVar10 != -2) {
      lVar15 = lVar10 + 1;
    }
    if (lVar15 == 0) {
      lVar15 = 1;
    }
    *plVar20 = lVar15;
    uVar12 = FUN_010106e4(param_2 + 0x41,plVar20,&local_90);
    lVar10 = *plVar20;
  }
  nn::os::UnlockMutex(pMVar1);
  plVar19 = local_80;
  local_80[0x15] = lVar10;
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_00c43ef0(&local_78,local_80 + 6);
  *param_1 = 0;
  param_1[1] = 0;
  plVar20 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 5;
  }
  if ((long *)local_78[2] == plVar20) {
    FUN_01010bec(param_1,&local_78);
  }
  plVar20 = local_78;
  pbVar18 = PTR_DAT_047d3908;
  if (local_78 != (long *)0x0) {
    plVar19 = local_78 + 3;
    do {
      sVar4 = (short)*plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(short *)plVar19 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*pbVar18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *plVar22;
        *plVar11 = lVar10;
        local_68 = (long *)*plVar20;
        FUN_00c44438(lVar10 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) goto LAB_0100fed0;
  }
  local_a0 = (long *)0x0;
  local_98 = 0;
  uVar17 = param_1[1];
  if (((*pbVar18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  lVar10 = *plVar22;
  *plVar11 = lVar10;
  FUN_00c44204(&local_68,lVar10,uVar17);
  plVar20 = local_a0;
  if (local_68 == (long *)0x0) {
    FUN_00d53ca8(&local_a0);
  }
  else {
    local_a0 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      plVar19 = plVar20 + 3;
      do {
        sVar4 = (short)*plVar19;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *(short *)plVar19 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)plVar20 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*pbVar18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *plVar22;
          *plVar11 = lVar10;
          local_78 = (long *)*plVar20;
          FUN_00c44438(lVar10 + 0x8040,&local_78);
        }
      }
      else if (sVar4 == 0) goto LAB_0100fed0;
    }
    local_a0 = local_68;
    local_68 = (long *)0x0;
    local_98 = uVar17;
  }
  if (param_2[0x28] != 0) {
    local_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_0129746c(&local_78,&local_a0);
    FUN_01011298(param_2 + 0x28,&local_78);
    plVar20 = local_78;
    if (local_78 != (long *)0x0) {
      plVar11 = local_78 + 3;
      do {
        sVar4 = (short)*plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *(short *)plVar11 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        pbVar18 = PTR_DAT_047d3908;
        plVar11 = (long *)PTR_DAT_047d3918;
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          plVar11 = (long *)PTR_DAT_047d3918;
          lVar10 = *plVar22;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_68 = (long *)*plVar20;
          FUN_00c44438(lVar10 + 0x8040,&local_68);
          pbVar18 = PTR_DAT_047d3908;
        }
      }
      else {
        pbVar18 = PTR_DAT_047d3908;
        plVar11 = (long *)PTR_DAT_047d3918;
        if (sVar4 == 0) goto LAB_0100fed0;
      }
    }
  }
  plVar20 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar19 = local_a0 + 3;
    do {
      sVar4 = (short)*plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(short *)plVar19 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*pbVar18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *plVar22;
        *plVar11 = lVar10;
        local_78 = (long *)*plVar20;
        FUN_00c44438(lVar10 + 0x8040,&local_78);
      }
    }
    else if (sVar4 == 0) goto LAB_0100fed0;
  }
  puVar8 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_90 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*pbVar18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *plVar22;
        *plVar11 = lVar10;
        local_78 = (long *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_78);
      }
    }
    else if (sVar4 == 0) {
LAB_0100fed0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_80 != (long *)0x0) {
    lVar10 = local_80[6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_80 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0100fdd4;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


