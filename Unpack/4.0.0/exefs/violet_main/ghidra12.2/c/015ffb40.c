/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ffb40; name: FUN_015ffb40
 */


void FUN_015ffb40(long param_1,long *param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xe0));
  uVar9 = *(ulong *)(param_1 + 0x78);
  puVar1 = (undefined8 *)(param_1 + 0x88);
  if (uVar9 < *(ulong *)(param_1 + 0x80)) {
    FUN_01600088(puVar1,uVar9,param_2);
    *(ulong *)(param_1 + 0x78) = uVar9 + 8;
LAB_015ffd0c:
    plVar16 = (long *)(*param_2 + 0x68);
LAB_015ffd14:
    lVar15 = *(long *)(param_1 + 0x30);
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar15 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar18;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
LAB_015ffd44:
    plVar10 = (long *)*plVar16;
    *plVar16 = param_1;
    if (plVar10 != (long *)0x0) {
      lVar15 = plVar10[6];
      psVar2 = (short *)(lVar15 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_015fff44;
    }
    if (*(long *)(param_1 + 0x68) == 0) {
      lVar15 = *param_2;
      plVar16 = *(long **)(lVar15 + 0x40);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
      plVar10 = *(long **)(lVar15 + 0x48);
      *(long **)(lVar15 + 0x48) = plVar16;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    else {
      FUN_015fffc0(&local_68,param_1 + 0x48,*param_2 + 0x40);
      lVar15 = *param_2;
      plVar16 = *(long **)(lVar15 + 0x48);
      *(undefined8 *)(lVar15 + 0x48) = 0;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x20))();
      }
      *(undefined8 *)(lVar15 + 0x48) = local_68;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xe0));
    return;
  }
  uVar14 = *(ulong *)(param_1 + 0x90);
  lVar15 = (long)(uVar9 - *(long *)(param_1 + 0x70)) >> 3;
  uVar9 = lVar15 + 1;
  if (0x7ffffffffffffffe < uVar14) {
    uVar14 = 0x7fffffffffffffff;
  }
  if (uVar14 < uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar11 = *(ulong *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
  uVar12 = lVar11 >> 2;
  if (uVar9 <= uVar12) {
    uVar9 = uVar12;
  }
  if (uVar14 >> 1 <= (ulong)(lVar11 >> 3)) {
    uVar9 = uVar14;
  }
  if (uVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 << 3,8);
    if (lVar11 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xe8))();
    }
  }
  lVar15 = lVar11 + lVar15 * 8;
  FUN_01600088(puVar1,lVar15,param_2);
  plVar16 = *(long **)(param_1 + 0x70);
  plVar10 = *(long **)(param_1 + 0x78);
  lVar17 = lVar15;
  if (plVar10 == plVar16) {
    plVar10 = plVar16;
  }
  else {
    do {
      uVar18 = *puVar1;
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 == 0) {
        lVar7 = plVar10[-1];
        plVar10[-1] = 0;
        *(long *)(lVar17 + -8) = lVar7;
      }
      else {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar18;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        lVar13 = plVar10[-1];
        plVar10[-1] = 0;
        *(long *)(lVar17 + -8) = lVar13;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      plVar10 = plVar10 + -1;
      lVar17 = lVar17 + -8;
    } while (plVar16 != plVar10);
    plVar16 = *(long **)(param_1 + 0x78);
    plVar10 = *(long **)(param_1 + 0x70);
  }
  lVar7 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x70) = lVar17;
  *(long *)(param_1 + 0x78) = lVar15 + 8;
  *(ulong *)(param_1 + 0x80) = lVar11 + uVar9 * 8;
  do {
    while( true ) {
      do {
        if (plVar16 == plVar10) {
          if (plVar10 == (long *)0x0) {
            plVar16 = (long *)(*param_2 + 0x68);
            if (param_1 == 0) goto LAB_015ffd44;
            goto LAB_015ffd14;
          }
          plVar16 = (long *)*puVar1;
          lVar7 = lVar7 - (long)plVar10;
          uVar9 = (**(code **)(*plVar16 + 0xf8))(plVar16);
          if (((uVar9 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar16 + 0x18))(plVar16,plVar10,lVar7,8);
          }
          else {
            FUN_00c48fe8(plVar16,plVar10,lVar7,8);
          }
          goto LAB_015ffd0c;
        }
        plVar16 = plVar16 + -1;
        plVar8 = (long *)*plVar16;
      } while (plVar8 == (long *)0x0);
      lVar15 = plVar8[6];
      psVar2 = (short *)(lVar15 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 != 1) break;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
  } while (sVar3 != 0);
LAB_015fff44:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


