/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012a7dd0; name: FUN_012a7dd0
 */


void FUN_012a7dd0(long param_1,ulong *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  
  plVar16 = (long *)(param_1 + 0xd0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012a7e14;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
        while (*plVar16 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012a7e14;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *plVar16 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012a7e14:
  plVar16 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_012a8520;
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0xb0,8);
  puVar6 = PTR_DAT_047d66f8;
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar16 + 0xe8))(plVar16);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar9[2] = 0;
  *(undefined4 *)(plVar9 + 3) = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar12 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *plVar9 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar9[1] = lVar12;
  plVar9[4] = (long)(puVar6 + 0x88);
  plVar15 = plVar9 + 5;
  *plVar15 = (long)(puVar6 + 0xd8);
  plVar11 = plVar9 + 6;
  *plVar11 = 0;
  plVar9[7] = 0;
  FUN_00d1a3f4(plVar11,plVar15);
  *plVar9 = (long)&DAT_045dc600;
  plVar9[4] = (long)&PTR_FUN_045dc678;
  *plVar15 = (long)&DAT_045dc6c8;
  uVar13 = *param_2;
  plVar9[10] = 0;
  plVar9[8] = uVar13;
  plVar9[9] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  uVar13 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(uVar13 + 0x30), lVar10 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar10 = DAT_04859430;
    *(long *)(uVar13 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(plVar9 + 0xe) = 0;
  plVar9[0xb] = lVar10;
  plVar9[0xf] = 0;
  plVar9[0xc] = 0x7ffffffffffffff;
  plVar9[0xd] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(uVar13 + 0x30), lVar10 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar10 = DAT_04859430;
    *(long *)(uVar13 + 0x30) = DAT_04859430;
  }
  plVar9[0x10] = lVar10;
  *(undefined4 *)(plVar9 + 0x15) = 0x3f800000;
  *(undefined4 *)(plVar9 + 0x13) = 0;
  plVar9[0x14] = 0;
  *(undefined4 *)(plVar9 + 3) = 0x800b0;
  plVar9[0x11] = 0x7ffffffffffffff;
  plVar9[0x12] = 0;
  plVar9[1] = (long)plVar16;
  plVar9[2] = (long)plVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  lVar8 = plVar9[6];
  if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  plVar16 = (long *)(param_1 + 0x48);
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar19 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar19;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  uVar17 = *param_2;
  uVar18 = *(ulong *)(param_1 + 0x50);
  if (uVar18 != 0) {
    uVar14 = uVar18 - 1;
    if ((uVar18 & uVar14) == 0) {
      uVar13 = uVar14 & uVar17;
      plVar15 = *(long **)(*plVar16 + uVar13 * 8);
      if (plVar15 != (long *)0x0) {
        while ((plVar15 = (long *)*plVar15, plVar15 != (long *)0x0 &&
               (plVar15[1] == uVar17 || (plVar15[1] & uVar14) == uVar13))) {
          if (plVar15[2] == uVar17) goto LAB_012a805c;
        }
      }
    }
    else {
      uVar13 = uVar17;
      if (uVar18 <= uVar17) {
        uVar13 = 0;
        if (uVar18 != 0) {
          uVar13 = uVar17 / uVar18;
        }
        uVar13 = uVar17 - uVar13 * uVar18;
      }
      plVar15 = *(long **)(*plVar16 + uVar13 * 8);
      if (plVar15 != (long *)0x0) {
        while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
          uVar14 = plVar15[1];
          if (uVar14 != uVar17) {
            if (uVar18 <= uVar14) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar14 / uVar18;
              }
              uVar14 = uVar14 - uVar5 * uVar18;
            }
            if (uVar14 != uVar13) break;
          }
          if (plVar15[2] == uVar17) {
LAB_012a805c:
            lVar8 = *plVar11;
            psVar1 = (short *)(lVar8 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))(plVar9);
            }
            else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            goto LAB_012a822c;
          }
        }
      }
    }
  }
  plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x80) + 0x10))
                              (*(long **)(param_1 + 0x80),0x20,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0xe8))();
  }
  uVar19 = *(undefined8 *)(param_1 + 0x80);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    plVar11[2] = *param_2;
    plVar11[3] = (long)plVar9;
  }
  else {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_012a8520:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar19;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    plVar11[2] = *param_2;
    plVar11[3] = (long)plVar9;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  *plVar11 = 0;
  plVar11[1] = uVar17;
  fVar20 = (float)(*(long *)(param_1 + 0xa0) + 1);
  if ((uVar18 == 0) || (*(float *)(param_1 + 0xa8) * (float)uVar18 < fVar20)) {
    uVar13 = (ulong)(uVar18 < 3 || (uVar18 & uVar18 - 1) != 0) | uVar18 << 1;
    uVar18 = (ulong)(fVar20 / *(float *)(param_1 + 0xa8));
    if (uVar18 <= uVar13) {
      uVar18 = uVar13;
    }
    FUN_012a8648(plVar16,uVar18);
    uVar18 = *(ulong *)(param_1 + 0x50);
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar13 = uVar18 - 1 & uVar17;
    }
    else {
      uVar13 = uVar17;
      if (uVar18 <= uVar17) {
        uVar13 = 0;
        if (uVar18 != 0) {
          uVar13 = uVar17 / uVar18;
        }
        uVar13 = uVar17 - uVar13 * uVar18;
      }
    }
  }
  plVar9 = *(long **)(*plVar16 + uVar13 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)(param_1 + 0x78);
    *plVar11 = *plVar9;
    *plVar9 = (long)plVar11;
    *(long **)(*(long *)(param_1 + 0x48) + uVar13 * 8) = plVar9;
    if (*plVar11 != 0) {
      uVar13 = *(ulong *)(*plVar11 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar13 = uVar13 & uVar18 - 1;
      }
      else if (uVar18 <= uVar13) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = uVar13 / uVar18;
        }
        uVar13 = uVar13 - uVar17 * uVar18;
      }
      plVar9 = (long *)(*plVar16 + uVar13 * 8);
      goto LAB_012a821c;
    }
  }
  else {
    *plVar11 = *plVar9;
LAB_012a821c:
    *plVar9 = (long)plVar11;
  }
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_012a822c:
  *(undefined8 *)(param_1 + 0xd0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd8));
  return;
}


