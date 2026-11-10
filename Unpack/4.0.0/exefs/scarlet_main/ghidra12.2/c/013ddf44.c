/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013ddf44; name: FUN_013ddf44
 */


void FUN_013ddf44(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar18;
  long *plVar17;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_013ddf8c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x1b8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = lVar10;
            *(undefined8 *)(param_1 + 0x1b8) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_013ddf8c;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_013ddf8c:
  plVar19 = *(long **)(param_1 + 0x1d8);
  plVar20 = *(long **)(param_1 + 0x1e0);
  if (plVar19 == plVar20) {
    plVar20 = plVar19;
LAB_013ddf9c:
    if (plVar20 == *(long **)(param_1 + 0x1e8)) {
      uVar16 = *(ulong *)(param_1 + 0x1f8);
      lVar10 = (long)plVar20 - (long)plVar19 >> 4;
      uVar11 = lVar10 + 1;
      if (0x7ffffffffffffffe < uVar16) {
        uVar16 = 0x7fffffffffffffff;
      }
      if (uVar16 < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar13 = (long)*(long **)(param_1 + 0x1e8) - (long)plVar19;
      uVar14 = lVar13 >> 3;
      if (uVar11 <= uVar14) {
        uVar11 = uVar14;
      }
      if (uVar16 >> 1 <= (ulong)(lVar13 >> 4)) {
        uVar11 = uVar16;
      }
      if (uVar11 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = (**(code **)(**(long **)(param_1 + 0x1f0) + 0x10))
                           (*(long **)(param_1 + 0x1f0),uVar11 << 4,8);
        if (lVar13 == 0) {
          (**(code **)(**(long **)(param_1 + 0x1f0) + 0xe8))();
        }
      }
      uVar21 = *(undefined8 *)(param_1 + 0x1f0);
      puVar3 = (undefined8 *)(lVar13 + lVar10 * 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 == 0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        FUN_013de424(puVar3,param_2);
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_013de408;
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar21;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *puVar3 = 0;
        puVar3[1] = 0;
        FUN_013de424(puVar3,param_2);
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      plVar19 = *(long **)(param_1 + 0x1d8);
      plVar20 = *(long **)(param_1 + 0x1e0);
      puVar8 = puVar3;
      if (plVar20 == plVar19) {
        puVar15 = puVar3;
        plVar20 = plVar19;
      }
      else {
        do {
          puVar15 = puVar8 + -2;
          uVar21 = *(undefined8 *)(param_1 + 0x1f0);
          plVar20 = plVar20 + -2;
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar10 == 0) {
            *puVar15 = 0;
            puVar8[-1] = 0;
            FUN_013de5a4(puVar15,plVar20);
          }
          else {
            if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_013de408:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar21;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            *puVar15 = 0;
            puVar8[-1] = 0;
            FUN_013de5a4(puVar15,plVar20);
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          puVar8 = puVar15;
        } while (plVar19 != plVar20);
        plVar19 = *(long **)(param_1 + 0x1d8);
        plVar20 = *(long **)(param_1 + 0x1e0);
      }
      lVar10 = *(long *)(param_1 + 0x1e8);
      *(undefined8 **)(param_1 + 0x1d8) = puVar15;
      *(undefined8 **)(param_1 + 0x1e0) = puVar3 + 2;
      *(ulong *)(param_1 + 0x1e8) = lVar13 + uVar11 * 0x10;
      while (plVar20 != plVar19) {
        plVar20 = plVar20 + -2;
        if (*plVar20 != 0) {
          psVar2 = (short *)(*plVar20 + 0x18);
          do {
            sVar6 = *psVar2;
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar12) {
              *psVar2 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            FUN_0116e168();
          }
          else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
      if (plVar19 != (long *)0x0) {
        plVar20 = *(long **)(param_1 + 0x1f0);
        lVar10 = lVar10 - (long)plVar19;
        uVar11 = (**(code **)(*plVar20 + 0xf8))(plVar20);
        if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar20 + 0x18))(plVar20,plVar19,lVar10,8);
        }
        else {
          FUN_00c48fe8(plVar20,plVar19,lVar10,8);
        }
      }
    }
    else {
      FUN_013de768(param_1 + 0x1d8,param_2);
    }
  }
  else {
    plVar17 = plVar19;
    while (plVar18 = plVar17 + 2, *plVar17 != *param_2) {
      plVar17 = plVar18;
      if (plVar20 == plVar18) goto LAB_013ddf9c;
    }
  }
  do {
    lVar10 = *plVar1;
    lVar13 = *(long *)(param_1 + 0x1b8);
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x1b8) = lVar13;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar4 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x1b8);
    if (lVar4 != lVar10 || lVar5 != lVar13) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_013de180;
    }
    cVar7 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x1b4) = lVar13;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar12 = true;
LAB_013de180:
  if (!bVar12) {
    do {
      lVar10 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x1b8);
      if (lVar10 != lVar4 || lVar13 != lVar5) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x013de3b4;
      }
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x1b4) = lVar5;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar12 = true;
joined_r0x013de3b4:
    if (!bVar12) {
      do {
        lVar4 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x1b8);
        if (lVar4 != lVar10 || lVar5 != lVar13) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar10 = lVar4;
          lVar13 = lVar5;
          goto joined_r0x013de3b4;
        }
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x1b4) = lVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar12 = true;
      lVar10 = lVar4;
      lVar13 = lVar5;
      goto joined_r0x013de3b4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return;
}


