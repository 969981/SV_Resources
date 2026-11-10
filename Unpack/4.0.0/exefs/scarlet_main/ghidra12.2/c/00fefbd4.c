/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fefbd4; name: FUN_00fefbd4
 */


void FUN_00fefbd4(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long lVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  
  uVar6 = *param_2;
  lVar8 = param_1[2];
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar10 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00fefcdc;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00fefcdc:
        bVar13 = false;
      }
      if (bVar13) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          lVar9 = *param_1;
          uVar7 = uVar6;
          if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) goto LAB_00fefd20;
          psVar1 = (short *)(lVar9 + 0x1a);
          sVar10 = *(short *)(lVar9 + 0x1a);
          goto LAB_00fefe34;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_00fefbf8;
LAB_00fefe90:
  if (*plVar11 == 0) goto code_r0x00fefe98;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
        while (*plVar11 == 0) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar13) {
            *plVar11 = lVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
          uVar7 = extraout_x1_03;
          if (cVar4 == '\0') goto LAB_00fefea0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar13) {
      *plVar11 = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
    uVar7 = extraout_x1_02;
  } while (cVar4 != '\0');
LAB_00fefea0:
  bVar13 = false;
LAB_00fefea4:
  plVar11 = *(long **)(lVar9 + 0x100);
  plVar2 = *(long **)(lVar9 + 0x108);
  if (plVar11 != plVar2) {
    do {
      if (*plVar11 != 0) {
        lVar12 = *plVar11 + 8;
        auVar14 = FUN_01fb4780(lVar12);
        uVar7 = auVar14._8_8_;
        if ((auVar14._0_8_ & 1) == 0) goto LAB_00fefee4;
        auVar14 = (**(code **)(*(long *)*plVar11 + 0xc0))();
        uVar7 = auVar14._8_8_;
        if ((lVar8 != lVar12) || ((auVar14._0_8_ & 1) != 0)) goto LAB_00fefee4;
        goto LAB_00fefef4;
      }
LAB_00fefee4:
      plVar11 = plVar11 + 1;
    } while (plVar2 != plVar11);
    plVar11 = plVar2;
LAB_00fefef4:
    if (plVar11 != *(long **)(lVar9 + 0x108)) {
      (**(code **)(*(long *)*plVar11 + 0xa8))();
      *(undefined **)(lVar9 + 0x188) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar9 + 400) = 0;
      uVar7 = extraout_x1;
    }
  }
  plVar11 = *(long **)(lVar9 + 0x138);
  plVar2 = *(long **)(lVar9 + 0x140);
  if (plVar11 != plVar2) {
    do {
      if (*plVar11 != 0) {
        lVar12 = *plVar11 + 8;
        auVar14 = FUN_01fb4780(lVar12);
        uVar7 = auVar14._8_8_;
        if ((auVar14._0_8_ & 1) == 0) goto LAB_00feff5c;
        auVar14 = (**(code **)(*(long *)*plVar11 + 0xc0))();
        uVar7 = auVar14._8_8_;
        if ((lVar8 != lVar12) || ((auVar14._0_8_ & 1) != 0)) goto LAB_00feff5c;
        goto LAB_00feff6c;
      }
LAB_00feff5c:
      plVar11 = plVar11 + 1;
    } while (plVar2 != plVar11);
    plVar11 = plVar2;
LAB_00feff6c:
    if (plVar11 != *(long **)(lVar9 + 0x140)) {
      (**(code **)(*(long *)*plVar11 + 0xa8))();
      *(undefined **)(lVar9 + 0x188) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar9 + 400) = 0;
      uVar7 = extraout_x1_00;
    }
  }
  if ((*(byte *)(lVar9 + 0x338) & 7) != 0) {
    FUN_016a9abc(lVar9 + 0xe0);
    uVar7 = extraout_x1_05;
  }
  if (!bVar13) {
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
    uVar7 = extraout_x1_01;
  }
  lVar12 = *(long *)(lVar9 + 8);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar10 = *psVar1;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar10 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
    uVar7 = extraout_x1_04;
  }
  else if (sVar10 == 0) goto LAB_00fefd4c;
  goto LAB_00fefd20;
code_r0x00fefe98:
  cVar4 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar13) {
    *plVar11 = lVar12;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00fefea0;
  goto LAB_00fefe90;
  while (sVar10 = sVar3, sVar3 != 0) {
LAB_00fefe34:
    sVar3 = *psVar1;
    if (sVar3 == sVar10) {
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00fefe58;
      bVar13 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00fefe58:
      bVar13 = false;
    }
    if (bVar13) {
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        plVar11 = (long *)(lVar9 + 0xe8);
        lVar12 = *plVar11;
        auVar14 = nn::os::GetCurrentThread();
        uVar7 = auVar14._8_8_;
        if (auVar14._0_8_ == lVar12) {
          bVar13 = true;
          goto LAB_00fefea4;
        }
        auVar14 = nn::os::GetCurrentThread();
        uVar7 = auVar14._8_8_;
        lVar12 = auVar14._0_8_;
        goto LAB_00fefe90;
      }
      break;
    }
  }
LAB_00fefd20:
  lVar9 = *(long *)(lVar8 + 0x70);
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar10 = *psVar1;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar10 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28),uVar7);
  }
  else if (sVar10 == 0) {
LAB_00fefd4c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00fefbf8:
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8,uVar6), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar8 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar8;
  plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x38) + 0x48) + 0x148);
  if (plVar11 == (long *)0x0) {
    FUN_00ff0050(0,uVar6);
    return;
  }
  plVar2 = plVar11 + 5;
  do {
    lVar8 = *plVar2;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar13) {
      *(int *)plVar2 = (int)lVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  FUN_00ff0050(plVar11,uVar6);
  do {
    lVar8 = *plVar2;
    iVar5 = (int)lVar8 + -1;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar13) {
      *(int *)plVar2 = iVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00fefca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    return;
  }
  if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


