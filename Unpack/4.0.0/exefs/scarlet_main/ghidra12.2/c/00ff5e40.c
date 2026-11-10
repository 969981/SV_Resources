/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff5e40; name: FUN_00ff5e40
 */


void FUN_00ff5e40(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  
  plVar1 = (long *)(param_1 + 0x110);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x118) == 0) {
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x118) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00ff5e8c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x120));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x118) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x120));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x118) == 0) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x118) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ff5e8c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x118) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ff5e8c:
  if ((ulong)(long)param_3 <
      (ulong)((*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 3) * 0x6db6db6db6db6db7)) {
    plVar19 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00ff6920:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar19;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    plVar8 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x100,0x10);
    puVar5 = PTR_DAT_047d66f8;
    if (plVar8 == (long *)0x0) {
      (**(code **)(*plVar19 + 0xe8))(plVar19);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    plVar8[2] = 0;
    *(undefined4 *)(plVar8 + 3) = 0;
    *plVar8 = (long)(puVar5 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      if (*(long *)(lVar9 + 0x80) != 0) {
        lVar12 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
      }
    }
    plVar8[1] = lVar12;
    plVar18 = plVar8 + 5;
    *(int *)plVar18 = 0;
    *plVar8 = (long)&DAT_045de460;
    plVar8[4] = (long)&PTR_LAB_045de498;
    lVar9 = *param_2;
    plVar8[6] = lVar9;
    if (lVar9 != 0) {
      piVar2 = (int *)(lVar9 + 0x28);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) goto LAB_00ff66f0;
    }
    plVar8[8] = 0;
    plVar8[9] = 0;
    plVar8[7] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    lVar9 = tpidr_el0;
    if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
        (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
       (lVar12 = *(long *)(lVar9 + 0x30), lVar12 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar12 = DAT_04859430;
      *(long *)(lVar9 + 0x30) = DAT_04859430;
    }
    *(undefined4 *)(plVar8 + 0xd) = 0;
    plVar8[10] = lVar12;
    plVar8[0xb] = 0x222222222222222;
    plVar8[0xc] = 0;
    plVar8[0xe] = 0;
    plVar8[0xf] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
        (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
       (lVar12 = *(long *)(lVar9 + 0x30), lVar12 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar12 = DAT_04859430;
      *(long *)(lVar9 + 0x30) = DAT_04859430;
    }
    *(undefined4 *)(plVar8 + 0x13) = 0;
    plVar8[0x10] = lVar12;
    plVar8[0x14] = 0;
    plVar8[0x11] = 0xfffffffffffffff;
    plVar8[0x12] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
        (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
       (lVar12 = *(long *)(lVar9 + 0x30), lVar12 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar12 = DAT_04859430;
      *(long *)(lVar9 + 0x30) = DAT_04859430;
    }
    *(undefined4 *)(plVar8 + 0x18) = 0;
    plVar8[0x15] = lVar12;
    plVar8[0x19] = 0;
    plVar8[0x16] = 0xfffffffffffffff;
    plVar8[0x17] = 0;
    puVar5 = PTR_DAT_047e2020;
    *(undefined4 *)(plVar8 + 0x1a) = 0x3f800000;
    do {
      iVar6 = *(int *)puVar5;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar11) {
        *(int *)puVar5 = iVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(int *)(plVar8 + 0x1b) = iVar6;
    *(undefined4 *)((long)plVar8 + 0xfc) = 1;
    plVar8[0x1c] = 0;
    plVar8[0x1d] = 0;
    nn::os::InitializeLightEvent(plVar8 + 0x1e,0,1);
    *(undefined4 *)(plVar8 + 3) = 0x100100;
    plVar8[1] = (long)plVar19;
    plVar8[2] = (long)plVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    do {
      lVar7 = *plVar18;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *(int *)plVar18 = (int)lVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar7 == -1) {
LAB_00ff66f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar18 = (long *)(*(long *)(param_1 + 0xd0) + (long)param_3 * 0x38);
    plVar19 = plVar18 + 3;
    plVar20 = plVar18 + 1;
    puVar15 = (undefined8 *)*plVar20;
    plVar21 = plVar18 + 2;
    if (puVar15 < (undefined8 *)*plVar21) {
      lVar7 = *plVar19;
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar9 == 0) {
        *puVar15 = plVar8;
      }
      else {
        if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00ff6920;
        *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar7;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        *puVar15 = plVar8;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      }
      *plVar20 = (long)(puVar15 + 1);
    }
    else {
      lVar7 = (long)puVar15 - *plVar18 >> 3;
      uVar14 = *(ulong *)(*(long *)(param_1 + 0xd0) + (long)param_3 * 0x38 + 0x20);
      uVar10 = lVar7 + 1;
      if (0x7ffffffffffffffe < uVar14) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar9 = *plVar21 - *plVar18;
      uVar13 = lVar9 >> 2;
      if (uVar10 <= uVar13) {
        uVar10 = uVar13;
      }
      if (uVar14 >> 1 <= (ulong)(lVar9 >> 3)) {
        uVar10 = uVar14;
      }
      if (uVar10 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (**(code **)(*(long *)*plVar19 + 0x10))((long *)*plVar19,uVar10 << 3,8);
        if (lVar9 == 0) {
          (**(code **)(*(long *)*plVar19 + 0xe8))();
        }
      }
      puVar15 = (undefined8 *)(lVar9 + lVar7 * 8);
      lVar7 = *plVar19;
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 == 0) {
        *puVar15 = plVar8;
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00ff6920;
        *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar7;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        *puVar15 = plVar8;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      plVar8 = (long *)*plVar18;
      plVar17 = (long *)*plVar20;
      puVar16 = puVar15;
      if (plVar17 == plVar8) {
        plVar17 = plVar8;
      }
      else {
        do {
          lVar7 = *plVar19;
          if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar12 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar12 == 0) {
            lVar7 = plVar17[-1];
            plVar17[-1] = 0;
            puVar16[-1] = lVar7;
          }
          else {
            if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00ff6920;
            *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar7;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            lVar7 = plVar17[-1];
            plVar17[-1] = 0;
            puVar16[-1] = lVar7;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          }
          plVar17 = plVar17 + -1;
          puVar16 = puVar16 + -1;
        } while (plVar8 != plVar17);
        plVar8 = (long *)*plVar18;
        plVar17 = (long *)*plVar20;
      }
      *plVar18 = (long)puVar16;
      *plVar20 = (long)(puVar15 + 1);
      lVar7 = *plVar21;
      *plVar21 = lVar9 + uVar10 * 8;
      while (plVar17 != plVar8) {
        plVar17 = plVar17 + -1;
        plVar18 = (long *)*plVar17;
        if (plVar18 != (long *)0x0) {
          plVar20 = plVar18 + 5;
          do {
            lVar9 = *plVar20;
            iVar6 = (int)lVar9 + -1;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar11) {
              *(int *)plVar20 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar18 + 0x10))();
          }
          else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      if (plVar8 != (long *)0x0) {
        plVar19 = (long *)*plVar19;
        uVar10 = (**(code **)(*plVar19 + 0xf8))(plVar19);
        if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar19 + 0x18))(plVar19,plVar8,lVar7 - (long)plVar8,8);
        }
        else {
          FUN_00c48fe8(plVar19,plVar8,lVar7 - (long)plVar8,8);
        }
      }
    }
  }
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x118);
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x118) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar12 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x118);
    if (lVar12 != lVar7 || lVar3 != lVar9) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00ff6298;
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x114) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar11 = true;
LAB_00ff6298:
  if (!bVar11) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x118);
      if (lVar7 != lVar12 || lVar9 != lVar3) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ff66ac;
      }
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x114) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar11 = true;
joined_r0x00ff66ac:
    if (!bVar11) {
      do {
        lVar12 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x118);
        if (lVar12 != lVar7 || lVar3 != lVar9) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar7 = lVar12;
          lVar9 = lVar3;
          goto joined_r0x00ff66ac;
        }
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x114) = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar11 = true;
      lVar7 = lVar12;
      lVar9 = lVar3;
      goto joined_r0x00ff66ac;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x120));
  return;
}


