/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a1730; name: FUN_021a1730
 */


void FUN_021a1730(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  short sVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  plVar21 = (long *)(param_1 + 0x428);
  lVar15 = *plVar21;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar15) {
    lVar9 = nn::os::GetCurrentThread();
LAB_021a1774:
    if (*plVar21 == 0) goto code_r0x021a177c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x430));
    do {
      if (*plVar21 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x430));
          while (*plVar21 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar6) {
              *plVar21 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_021a1784;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_021a1784:
    bVar6 = false;
    goto LAB_021a1788;
  }
  plVar21 = (long *)0x0;
  bVar6 = true;
LAB_021a1788:
  if (*(char *)(param_1 + 0x440) != '\0') {
    (**(code **)(*param_2 + 0x18))(local_78,param_2);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    plVar16 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar16 = param_2 + 5;
    }
    if ((long *)local_78[0][2] == plVar16) {
      FUN_00cbc6dc(&local_88,local_78);
    }
    puVar7 = local_78[0];
    if (local_78[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78[0] + 3);
      do {
        sVar13 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_78[0] + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_68 = *puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_68);
        }
      }
      else if (sVar13 == 0) goto LAB_021a1930;
    }
    if (local_88 == (undefined8 *)0x0) {
      lVar9 = 0;
    }
    else if (*(short *)((long)local_88 + 0x1a) == 0) {
      lVar9 = 0;
    }
    else {
      psVar1 = (short *)((long)local_88 + 0x1a);
      sVar13 = *(short *)((long)local_88 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar13) {
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_021a1da0;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_021a1da0:
          bVar4 = false;
        }
        if (bVar4) {
          lVar9 = 0;
          if (local_88[2] != 0) {
            lVar9 = local_88[2] + -0x28;
          }
          break;
        }
        lVar9 = 0;
        sVar13 = sVar3;
      } while (sVar3 != 0);
    }
    plVar16 = *(long **)(param_1 + 0x340);
    if (plVar16 < *(long **)(param_1 + 0x348)) {
      uVar18 = *(undefined8 *)(param_1 + 0x350);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar15 == 0) {
        *plVar16 = lVar9;
      }
      else {
        if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_021a1e5c;
        *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar18;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
        *plVar16 = lVar9;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      }
      *(long **)(param_1 + 0x340) = plVar16 + 1;
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x358);
      lVar15 = (long)plVar16 - *(long *)(param_1 + 0x338) >> 3;
      uVar10 = lVar15 + 1;
      if (0x7ffffffffffffffe < uVar14) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar11 = (long)*(long **)(param_1 + 0x348) - *(long *)(param_1 + 0x338);
      uVar12 = lVar11 >> 2;
      if (uVar10 <= uVar12) {
        uVar10 = uVar12;
      }
      if (uVar14 >> 1 <= (ulong)(lVar11 >> 3)) {
        uVar10 = uVar14;
      }
      if (uVar10 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = (**(code **)(**(long **)(param_1 + 0x350) + 0x10))
                           (*(long **)(param_1 + 0x350),uVar10 << 3,8);
        if (lVar11 == 0) {
          (**(code **)(**(long **)(param_1 + 0x350) + 0xe8))();
        }
      }
      uVar18 = *(undefined8 *)(param_1 + 0x350);
      plVar16 = (long *)(lVar11 + lVar15 * 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar15 == 0) {
        *plVar16 = lVar9;
      }
      else {
        if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_021a1e5c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar18;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
        *plVar16 = lVar9;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      }
      plVar17 = *(long **)(param_1 + 0x338);
      plVar20 = *(long **)(param_1 + 0x340);
      plVar19 = plVar16;
      if (plVar20 == plVar17) {
        plVar20 = plVar17;
      }
      else {
        do {
          uVar18 = *(undefined8 *)(param_1 + 0x350);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar9 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar9 == 0) {
            lVar9 = plVar20[-1];
            plVar20[-1] = 0;
            plVar19[-1] = lVar9;
          }
          else {
            if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_021a1e5c;
            *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar18;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            lVar15 = plVar20[-1];
            plVar20[-1] = 0;
            plVar19[-1] = lVar15;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          }
          plVar20 = plVar20 + -1;
          plVar19 = plVar19 + -1;
        } while (plVar17 != plVar20);
        plVar17 = *(long **)(param_1 + 0x340);
        plVar20 = *(long **)(param_1 + 0x338);
      }
      lVar9 = *(long *)(param_1 + 0x348);
      *(long **)(param_1 + 0x338) = plVar19;
      *(long **)(param_1 + 0x340) = plVar16 + 1;
      *(ulong *)(param_1 + 0x348) = lVar11 + uVar10 * 8;
      while (plVar17 != plVar20) {
        plVar17 = plVar17 + -1;
        plVar16 = (long *)*plVar17;
        if (plVar16 != (long *)0x0) {
          lVar15 = plVar16[6];
          psVar1 = (short *)(lVar15 + 0x1a);
          do {
            sVar13 = *psVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar15 + 0x10) = 0;
            (**(code **)(*plVar16 + 0x50))();
          }
          else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      if (plVar20 != (long *)0x0) {
        plVar16 = *(long **)(param_1 + 0x350);
        lVar9 = lVar9 - (long)plVar20;
        uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,plVar20,lVar9,8);
        }
        else {
          FUN_00c48fe8(plVar16,plVar20,lVar9,8);
        }
      }
    }
    puVar7 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar13 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_78[0] = (undefined8 *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,local_78);
        }
      }
      else if (sVar13 == 0) {
LAB_021a1930:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  if (!bVar6) {
    *plVar21 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
  }
  lVar9 = *(long *)(param_1 + 0x1c8);
  *(undefined1 *)(param_1 + 0x451) = 1;
  for (; (lVar9 != 0 && (lVar9 = *(long *)(lVar9 + 0x10), lVar9 != 0));
      lVar9 = *(long *)(lVar9 + 0x1a0)) {
    *(undefined1 *)(lVar9 + 0x429) = 1;
  }
  return;
code_r0x021a177c:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar6) {
    *plVar21 = lVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_021a1784;
  goto LAB_021a1774;
}


