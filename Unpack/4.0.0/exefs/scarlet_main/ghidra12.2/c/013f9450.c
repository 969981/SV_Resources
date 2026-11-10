/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013f9450; name: FUN_013f9450
 */


void FUN_013f9450(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x26));
  plVar20 = (long *)*param_2;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_013f9ba0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar20;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x5b0,0x10);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar20 + 0xe8))(plVar20);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar11,0,0x5b0);
  puVar6 = PTR_DAT_047d66f8;
  plVar11[2] = 0;
  *(undefined4 *)(plVar11 + 3) = 0;
  *plVar11 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar12 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar16 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  *plVar11 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar11[1] = lVar16;
  plVar11[4] = (long)(puVar6 + 0x88);
  plVar22 = plVar11 + 5;
  *plVar22 = (long)(puVar6 + 0xd8);
  plVar19 = plVar11 + 6;
  *plVar19 = 0;
  plVar11[7] = 0;
  FUN_00d1a3f4(plVar19,plVar22);
  *plVar11 = (long)&PTR_FUN_0460c8b8;
  *(undefined4 *)(plVar11 + 8) = 0;
  plVar11[4] = (long)&PTR_LAB_0460c930;
  *plVar22 = (long)&DAT_0460c980;
  plVar11[0x2a] = 0x3f80000040c00000;
  plVar11[0x2b] = 0x42c800003f800000;
  plVar11[0x2c] = 0x3f000000;
  plVar11[0x2d] = 0;
  plVar11[9] = 0;
  plVar11[0x26] = 0;
  plVar11[0x44] = 0;
  plVar11[0x45] = 0;
  plVar11[0x46] = 0;
  plVar11[0x47] = 0;
  plVar11[0x54] = 0;
  plVar11[0x55] = 0;
  plVar11[0x56] = 0;
  plVar11[0x57] = 0;
  plVar11[100] = 0;
  plVar11[0x65] = 0;
  plVar11[0x66] = 0;
  plVar11[0x67] = 0;
  *(undefined2 *)(plVar11 + 0x74) = 0x101;
  *(undefined1 *)((long)plVar11 + 0x3a2) = 1;
  *(undefined4 *)((long)plVar11 + 0x3a4) = 0xffffffff;
  plVar11[0x77] = 0xffffffff;
  plVar11[0x78] = 1;
  plVar11[0xc] = 0;
  plVar11[0xd] = 0;
  plVar11[0xe] = 0;
  plVar11[0xf] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[0x20] = 0;
  plVar11[0x21] = 0;
  plVar11[0x22] = 0;
  plVar11[0x23] = 0;
  plVar11[0x36] = 0;
  plVar11[0x37] = 0;
  plVar11[0x34] = 0;
  plVar11[0x35] = 0;
  memset(plVar11 + 0x7a,0xff,0x104);
  puVar7 = PTR_DAT_047e3310;
  plVar11[0x9b] = 0;
  plVar11[0x9d] = 0xffffffff;
  puVar6 = PTR_DAT_047dde08;
  plVar11[0x9e] = 1;
  plVar11[0x76] = (long)(puVar7 + 0x10);
  plVar11[0x9c] = (long)(puVar6 + 0x10);
  memset(plVar11 + 0x9f,0,0x84);
  *(undefined2 *)((long)plVar11 + 0x57c) = 1;
  nn::os::InitializeMutex((MutexType *)(plVar11 + 0xb0),true,0);
  *(undefined4 *)(plVar11 + 3) = 0x1005b0;
  plVar11[1] = (long)plVar20;
  plVar11[2] = (long)plVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  lVar10 = *plVar19;
  local_80 = plVar11;
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar10 + 0x1a);
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
    uVar15 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar15;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar11 = (long *)param_2[0x21];
  plVar20 = plVar11 + 3;
  lVar10 = plVar11[1];
  if (lVar10 != plVar11[2]) {
    FUN_013f9c48(plVar20,lVar10,&local_80);
    plVar11[1] = lVar10 + 8;
LAB_013f96ec:
    plVar11 = local_80;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00c43ef0(&local_78,local_80 + 6);
    *param_1 = 0;
    param_1[1] = 0;
    plVar20 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      plVar20 = plVar11 + 5;
    }
    if ((long *)local_78[2] == plVar20) {
      FUN_013f9dc0(param_1,&local_78);
    }
    puVar8 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
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
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_68 = *puVar8;
          FUN_00c44438(lVar10 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_80 != (long *)0x0) {
      lVar10 = local_80[6];
      psVar1 = (short *)(lVar10 + 0x1a);
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
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_013f9918;
    }
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x26));
    return;
  }
  uVar18 = plVar11[4];
  lVar10 = lVar10 - *plVar11 >> 3;
  uVar14 = lVar10 + 1;
  if (0x7ffffffffffffffe < uVar18) {
    uVar18 = 0x7fffffffffffffff;
  }
  if (uVar18 < uVar14) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar12 = plVar11[2] - *plVar11;
  uVar17 = lVar12 >> 2;
  if (uVar14 <= uVar17) {
    uVar14 = uVar17;
  }
  if (uVar18 >> 1 <= (ulong)(lVar12 >> 3)) {
    uVar14 = uVar18;
  }
  if (uVar14 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = (**(code **)(*(long *)*plVar20 + 0x10))((long *)*plVar20,uVar14 << 3,8);
    if (lVar12 == 0) {
      (**(code **)(*(long *)*plVar20 + 0xe8))();
    }
  }
  lVar10 = lVar12 + lVar10 * 8;
  FUN_013f9c48(plVar20,lVar10,&local_80);
  plVar19 = (long *)*plVar11;
  plVar22 = (long *)plVar11[1];
  lVar16 = lVar10;
  if (plVar22 == plVar19) {
    plVar22 = plVar19;
  }
  else {
    do {
      lVar21 = *plVar20;
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar13 == 0) {
        lVar21 = plVar22[-1];
        plVar22[-1] = 0;
        *(long *)(lVar16 + -8) = lVar21;
      }
      else {
        if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_013f9ba0;
        *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar21;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        lVar21 = plVar22[-1];
        plVar22[-1] = 0;
        *(long *)(lVar16 + -8) = lVar21;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      }
      plVar22 = plVar22 + -1;
      lVar16 = lVar16 + -8;
    } while (plVar19 != plVar22);
    plVar19 = (long *)plVar11[1];
    plVar22 = (long *)*plVar11;
  }
  lVar21 = plVar11[2];
  *plVar11 = lVar16;
  plVar11[1] = lVar10 + 8;
  plVar11[2] = lVar12 + uVar14 * 8;
  do {
    while( true ) {
      do {
        if (plVar19 == plVar22) {
          if (plVar22 != (long *)0x0) {
            plVar20 = (long *)*plVar20;
            uVar14 = (**(code **)(*plVar20 + 0xf8))(plVar20);
            if (((uVar14 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar20 + 0x18))(plVar20,plVar22,lVar21 - (long)plVar22,8);
            }
            else {
              FUN_00c48fe8(plVar20,plVar22,lVar21 - (long)plVar22,8);
            }
          }
          goto LAB_013f96ec;
        }
        plVar19 = plVar19 + -1;
        plVar11 = (long *)*plVar19;
      } while (plVar11 == (long *)0x0);
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
  } while (sVar3 != 0);
LAB_013f9918:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


