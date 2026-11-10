/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011eb858; name: FUN_011eb858
 */


void FUN_011eb858(long param_1,long param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long *plVar16;
  long *plVar15;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  plVar1 = (long *)(param_1 + 0xe08);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_011eb89c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe10));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe10));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_011eb89c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011eb89c:
  if (*(long *)(param_1 + 0xe00) == 0) {
    local_70 = 0;
    plVar11 = (long *)FUN_0145b26c(auStack_68,*(undefined8 *)(param_1 + 8),&local_70);
    if (plVar11 != (long *)0x0) {
      FUN_00f1b0c8(plVar11);
      lVar8 = plVar11[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar3 = (short *)(lVar8 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar20;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar18 = *(long **)(param_1 + 0xe00);
    *(undefined8 *)(param_1 + 0xe00) = 0;
    if (plVar18 != (long *)0x0) {
      lVar8 = plVar18[6];
      psVar3 = (short *)(lVar8 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar18 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(long **)(param_1 + 0xe00) = plVar11;
    (**(code **)(*plVar11 + 0x88))(plVar11,0);
    lVar8 = *(long *)(param_1 + 0xe00);
    pcVar14 = *(code **)(lVar8 + 0x388);
    if (pcVar14 != (code *)0x0) {
      *(undefined8 *)(lVar8 + 0x390) = 0;
      *(undefined8 *)(lVar8 + 0x398) = 0;
      *(undefined8 *)(lVar8 + 0x380) = 0;
      *(undefined8 *)(lVar8 + 0x388) = 0;
      (*pcVar14)(lVar8 + 0x3a0);
    }
    *(undefined1 **)(lVar8 + 0x380) = &LAB_02bb0260;
    *(undefined1 **)(lVar8 + 0x388) = &LAB_02bb0430;
    *(undefined1 **)(lVar8 + 0x390) = &LAB_02bb0434;
    *(long *)(lVar8 + 0x3a0) = param_1;
    *(undefined1 **)(lVar8 + 0x398) = &LAB_02bb0440;
    lVar12 = *(long *)(param_1 + 0xe00);
    plVar11 = (long *)(lVar12 + 0x1d0);
    lVar8 = nn::os::GetCurrentThread();
LAB_011ebccc:
    if (*plVar11 == 0) goto code_r0x011ebcd4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
          while (*plVar11 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_011ebcdc;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_011ebcdc:
    if (((*PTR_DAT_047d91d0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d91d0);
    }
    lVar8 = *(long *)PTR_DAT_047d91d8;
    *(long *)PTR_DAT_047d91e0 = lVar8;
    uVar20 = *(undefined8 *)(lVar8 + 0x40);
    if (((*PTR_DAT_047d8d80 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8d80);
    }
    lVar8 = *(long *)PTR_DAT_047d8d88;
    *(long *)PTR_DAT_047d8d90 = lVar8;
    uVar19 = *(undefined8 *)(lVar8 + 0x28);
    FUN_00e220f4(lVar12,uVar20,0);
    FUN_00e220f4(lVar12,0,uVar19);
    *(undefined8 *)(lVar12 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1d8));
  }
  plVar11 = *(long **)(param_1 + 0xdc8);
  plVar18 = *(long **)(param_1 + 0xdd0);
  if (plVar11 == plVar18) {
LAB_011eb8cc:
    plVar15 = (long *)(param_1 + 0xdc8);
    plVar16 = (long *)(param_1 + 0xdd0);
    if (plVar18 < *(long **)(param_1 + 0xdd8)) {
      uVar20 = *(undefined8 *)(param_1 + 0xde0);
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        *plVar18 = param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_011ebfe4;
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar20;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *plVar18 = param_2;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      *plVar16 = (long)(plVar18 + 1);
    }
    else {
      uVar17 = *(ulong *)(param_1 + 0xde8);
      lVar8 = (long)plVar18 - (long)plVar11 >> 3;
      uVar10 = lVar8 + 1;
      if (0x7ffffffffffffffe < uVar17) {
        uVar17 = 0x7fffffffffffffff;
      }
      if (uVar17 < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar12 = (long)*(long **)(param_1 + 0xdd8) - (long)plVar11;
      uVar13 = lVar12 >> 2;
      if (uVar10 <= uVar13) {
        uVar10 = uVar13;
      }
      if (uVar17 >> 1 <= (ulong)(lVar12 >> 3)) {
        uVar10 = uVar17;
      }
      if (uVar10 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = (**(code **)(**(long **)(param_1 + 0xde0) + 0x10))
                           (*(long **)(param_1 + 0xde0),uVar10 << 3,8);
        if (lVar12 == 0) {
          (**(code **)(**(long **)(param_1 + 0xde0) + 0xe8))();
        }
      }
      uVar20 = *(undefined8 *)(param_1 + 0xde0);
      plVar11 = (long *)(lVar12 + lVar8 * 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        *plVar11 = param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_011ebfe4;
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar20;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *plVar11 = param_2;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      lVar8 = *plVar15;
      lVar21 = *plVar16;
      plVar18 = plVar11;
      if (lVar21 != lVar8) {
        do {
          uVar20 = *(undefined8 *)(param_1 + 0xde0);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar9 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar9 == 0) {
            plVar18[-1] = *(long *)(lVar21 + -8);
          }
          else {
            if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_011ebfe4:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar20;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            plVar18[-1] = *(long *)(lVar21 + -8);
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          }
          lVar21 = lVar21 + -8;
          plVar18 = plVar18 + -1;
        } while (lVar8 != lVar21);
        lVar8 = *plVar15;
      }
      *(long **)(param_1 + 0xdd0) = plVar11 + 1;
      lVar21 = *(long *)(param_1 + 0xdd8);
      *(long **)(param_1 + 0xdc8) = plVar18;
      *(ulong *)(param_1 + 0xdd8) = lVar12 + uVar10 * 8;
      if (lVar8 != 0) {
        plVar11 = *(long **)(param_1 + 0xde0);
        lVar21 = lVar21 - lVar8;
        uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,lVar21,8);
        }
        else {
          FUN_00c48fe8(plVar11,lVar8,lVar21,8);
        }
      }
    }
    if (1 < (ulong)(*plVar16 - *plVar15 >> 3)) {
      pLVar2 = (LightEventType *)(param_1 + 0xe10);
      *(undefined8 *)(param_1 + 0xe08) = 0;
      nn::os::SignalLightEvent(pLVar2);
      lVar8 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_011eb97c;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent(pLVar2);
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar2);
            while (*plVar1 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_011eb97c;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_011eb97c:
      if (1 < (ulong)(*plVar16 - *plVar15 >> 3)) {
        FUN_011e4ae0();
      }
      *plVar1 = 0;
      goto LAB_011eb99c;
    }
  }
  else {
    plVar15 = plVar11;
    while (plVar16 = plVar15 + 1, *plVar15 != param_2) {
      plVar15 = plVar16;
      if (plVar18 == plVar16) goto LAB_011eb8cc;
    }
  }
  *(undefined8 *)(param_1 + 0xe08) = 0;
LAB_011eb99c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe10));
  return;
code_r0x011ebcd4:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar6) {
    *plVar11 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_011ebcdc;
  goto LAB_011ebccc;
}


