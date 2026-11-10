/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eb0b40; name: FUN_00eb0b40
 */


void FUN_00eb0b40(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  
  FUN_00eb10d8();
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00eb0b88;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x1b8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar5;
            *(undefined8 *)(param_1 + 0x1b8) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00eb0b88;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00eb0b88:
  plVar7 = *(long **)(param_1 + 0x170);
  if (plVar7 == *(long **)(param_1 + 0x178)) {
    uVar13 = *(ulong *)(param_1 + 0x188);
    lVar5 = (long)plVar7 - *(long *)(param_1 + 0x168) >> 3;
    uVar8 = lVar5 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)*(long **)(param_1 + 0x178) - *(long *)(param_1 + 0x168);
    uVar11 = lVar10 >> 2;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (uVar13 >> 1 <= (ulong)(lVar10 >> 3)) {
      uVar8 = uVar13;
    }
    if (uVar8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(**(long **)(param_1 + 0x180) + 0x10))
                         (*(long **)(param_1 + 0x180),uVar8 << 3,8);
      if (lVar10 == 0) {
        (**(code **)(**(long **)(param_1 + 0x180) + 0xe8))();
      }
    }
    uVar15 = *(undefined8 *)(param_1 + 0x180);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00eb10c4;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    lVar12 = *param_2;
    plVar7 = (long *)(lVar10 + lVar5 * 8);
    *plVar7 = lVar12;
    if (lVar12 != 0) {
      piVar2 = (int *)(lVar12 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = iVar4 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == -1) {
LAB_00eb0fd4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    plVar14 = *(long **)(param_1 + 0x168);
    plVar16 = *(long **)(param_1 + 0x170);
    plVar17 = plVar7;
    if (plVar16 == plVar14) {
      plVar16 = plVar14;
    }
    else {
      do {
        uVar15 = *(undefined8 *)(param_1 + 0x180);
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          lVar5 = plVar16[-1];
          plVar16[-1] = 0;
          plVar17[-1] = lVar5;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00eb10c4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar15;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          lVar6 = plVar16[-1];
          plVar16[-1] = 0;
          plVar17[-1] = lVar6;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        plVar16 = plVar16 + -1;
        plVar17 = plVar17 + -1;
      } while (plVar14 != plVar16);
      plVar16 = *(long **)(param_1 + 0x168);
      plVar14 = *(long **)(param_1 + 0x170);
    }
    lVar5 = *(long *)(param_1 + 0x178);
    *(long **)(param_1 + 0x168) = plVar17;
    *(long **)(param_1 + 0x170) = plVar7 + 1;
    *(ulong *)(param_1 + 0x178) = lVar10 + uVar8 * 8;
    while (plVar14 != plVar16) {
      plVar14 = plVar14 + -1;
      plVar7 = (long *)*plVar14;
      if (plVar7 != (long *)0x0) {
        plVar17 = plVar7 + 5;
        do {
          lVar10 = *plVar17;
          iVar4 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar9) {
            *(int *)plVar17 = iVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (plVar16 != (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x180);
      lVar5 = lVar5 - (long)plVar16;
      uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,plVar16,lVar5,8);
      }
      else {
        FUN_00c48fe8(plVar7,plVar16,lVar5,8);
      }
    }
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + 0x180);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00eb10c4;
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar15;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    lVar10 = *param_2;
    *plVar7 = lVar10;
    if (lVar10 != 0) {
      piVar2 = (int *)(lVar10 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = iVar4 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == -1) goto LAB_00eb0fd4;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x170) = plVar7 + 1;
  }
  *(undefined1 *)(param_1 + 0x1a2) = 1;
  *(undefined1 *)(*param_2 + 0x198) = 1;
  do {
    lVar5 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x1b8);
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x1b8) = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar6 = *plVar1;
    lVar12 = *(long *)(param_1 + 0x1b8);
    if (lVar6 != lVar5 || lVar12 != lVar10) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00eb0d90;
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x1b4) = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar9 = true;
LAB_00eb0d90:
  if (!bVar9) {
    do {
      lVar5 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x1b8);
      if (lVar5 != lVar6 || lVar10 != lVar12) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x00eb0f94;
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x1b4) = lVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar9 = true;
joined_r0x00eb0f94:
    if (!bVar9) {
      do {
        lVar6 = *plVar1;
        lVar12 = *(long *)(param_1 + 0x1b8);
        if (lVar6 != lVar5 || lVar12 != lVar10) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar5 = lVar6;
          lVar10 = lVar12;
          goto joined_r0x00eb0f94;
        }
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x1b4) = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar9 = true;
      lVar5 = lVar6;
      lVar10 = lVar12;
      goto joined_r0x00eb0f94;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return;
}


