/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014171c4; name: FUN_014171c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014171c4(long param_1,int *param_2,undefined8 param_3)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *local_e0 [4];
  long *local_c0;
  undefined **local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  plVar9 = (long *)(param_1 + 0x180);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01417204;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01417204;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01417204:
  local_70 = (long *)0x0;
  local_b0 = &PTR_FUN_04595338;
  uStack_a8 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_50 = 0;
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_58 = _UNK_03caaaa8;
  local_60 = _DAT_03caaaa0;
  FUN_0105016c(local_e0,param_3);
  uVar8 = FUN_00f2babc(&local_b0,1,local_e0,0,0);
  plVar9 = local_90;
  if (((uVar8 & 1) != 0) && (local_90 != (long *)0x0)) {
    lVar7 = local_90[6];
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_014175d0;
    psVar2 = (short *)(lVar7 + 0x1a);
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
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar10;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
LAB_01417404:
      lVar7 = plVar9[6];
      psVar2 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar3 == 0) goto LAB_01417428;
      goto LAB_01417264;
    }
    if (sVar3 != -1) goto LAB_01417404;
LAB_014174e4:
    pcVar11 = "count != 0";
    pcVar12 = "AddReference";
    pcVar13 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar14 = "Reference counter overflows.";
    goto LAB_014175a0;
  }
LAB_01417264:
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0[0] != (long *)0x0) {
    (**(code **)(*local_e0[0] + 0x20))();
  }
  lVar15 = (long)*param_2;
  lVar16 = param_1 + lVar15 * 0x70;
  FUN_00faf010(lVar16 + 0x1a0);
  FUN_010e8680(lVar16 + 0x1a8,(ulong)&local_b0 | 8);
  lVar7 = local_98;
  if (local_98 != 0) {
    lVar17 = *(long *)(local_98 + 0x30);
    if (*(long *)(lVar17 + 0x10) == 0) {
LAB_014175d0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar17 + 0x1a);
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
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar10;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_014174e4;
  }
  plVar9 = *(long **)(lVar16 + 0x1b8);
  *(long *)(lVar16 + 0x1b8) = lVar7;
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[6];
    psVar2 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_01417428:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar7 = param_1 + lVar15 * 0x70;
  FUN_00cef9d0(lVar7 + 0x1c0,&local_90);
  FUN_00ceffd4(lVar7 + 0x1d0,&local_80);
  if (local_70 != (long *)0x0) {
    plVar9 = local_70 + 5;
    do {
      lVar16 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)lVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar16 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = *(long **)(lVar7 + 0x1e0);
  *(long **)(lVar7 + 0x1e0) = local_70;
  if (plVar9 == (long *)0x0) {
LAB_01417324:
    lVar7 = param_1 + lVar15 * 0x70;
    *(undefined1 *)(lVar7 + 0x200) = local_50;
    *(undefined8 *)(lVar7 + 0x1f0) = local_60;
    *(undefined8 *)(lVar7 + 0x1f8) = uStack_58;
    if (local_70 == (long *)0x0) {
LAB_01417360:
      FUN_00faeeac(&local_b0);
      *(undefined8 *)(param_1 + 0x180) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x188));
      return;
    }
    plVar9 = local_70 + 5;
    do {
      lVar7 = *plVar9;
      iVar6 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_70 + 0x10))();
      goto LAB_01417360;
    }
    if ((int)lVar7 != 0) goto LAB_01417360;
  }
  else {
    plVar1 = plVar9 + 5;
    do {
      lVar7 = *plVar1;
      iVar6 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
      goto LAB_01417324;
    }
    if ((int)lVar7 != 0) goto LAB_01417324;
  }
  pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar12 = "DecrementReferenceInternal";
  pcVar13 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar14 = "Reference counter underflows.";
LAB_014175a0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
}


