/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f02cac; name: FUN_00f02cac
 */


void FUN_00f02cac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined4 local_34;
  
  local_90 = *(long *)(param_1 + 8);
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0x1fffffffffffffff;
  local_80 = 0;
  plVar12 = (long *)(param_1 + 0x1d8);
  local_78 = local_78 & 0xffffffff00000000;
  local_98 = 0;
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar10) {
      *plVar12 = lVar11;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_00f02d04;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
        while (*plVar12 == 0) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar10) {
            *plVar12 = lVar11;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_00f02d04;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar10) {
      *plVar12 = lVar11;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_00f02d04:
  plVar12 = *(long **)(param_1 + 0x1a0);
  plVar6 = *(long **)(param_1 + 0x1a8);
  if (*(long *)(param_1 + 0x40) == 0) {
    if (plVar12 != plVar6) {
      do {
        local_70 = *plVar12;
        if (local_70 != 0) {
          local_34 = 2;
          (*(code *)*param_2)(param_2 + 4,&local_34,&local_70);
        }
        plVar12 = plVar12 + 1;
      } while (plVar6 != plVar12);
    }
    lVar11 = *(long *)(param_1 + 0x168);
    lVar18 = *(long *)(param_1 + 0x170);
    if (lVar11 != lVar18) {
      do {
        local_70 = *(long *)(lVar11 + 8);
        if (local_70 != 0) {
          local_34 = 1;
          (*(code *)*param_2)(param_2 + 4,&local_34,&local_70);
        }
        lVar11 = lVar11 + 0x10;
      } while (lVar18 != lVar11);
    }
  }
  else {
    if (plVar12 != plVar6) {
      local_70 = *plVar12;
      if ((local_70 != 0) &&
         (uVar13 = (**(code **)(param_1 + 0x40))(param_1 + 0x60,&local_70), (uVar13 & 1) != 0)) {
        local_70 = *plVar12;
        local_34 = 2;
        (*(code *)*param_2)(param_2 + 4,&local_34,&local_70);
      }
      while (plVar12 = plVar12 + 1, plVar12 != plVar6) {
        local_70 = *plVar12;
        if ((local_70 != 0) &&
           (uVar13 = (**(code **)(param_1 + 0x40))(param_1 + 0x60,&local_70), (uVar13 & 1) != 0)) {
          local_70 = *plVar12;
          local_34 = 2;
          (*(code *)*param_2)(param_2 + 4,&local_34,&local_70);
        }
      }
    }
    lVar11 = *(long *)(param_1 + 0x168);
    lVar18 = *(long *)(param_1 + 0x170);
    if (lVar11 != lVar18) {
      local_70 = *(long *)(lVar11 + 8);
      lVar14 = param_1 + 0x60;
      puVar1 = param_2 + 4;
      if ((local_70 != 0) &&
         (uVar13 = (**(code **)(param_1 + 0x40))(lVar14,&local_70), (uVar13 & 1) != 0)) {
        local_70 = *(long *)(lVar11 + 8);
        local_34 = 1;
        (*(code *)*param_2)(puVar1,&local_34,&local_70);
      }
      if (lVar11 + 0x10 != lVar18) {
        local_70 = *(long *)(lVar11 + 0x18);
        if ((local_70 != 0) &&
           (uVar13 = (**(code **)(param_1 + 0x40))(lVar14,&local_70), (uVar13 & 1) != 0)) {
          local_70 = *(long *)(lVar11 + 0x18);
          local_34 = 1;
          (*(code *)*param_2)(puVar1,&local_34,&local_70);
        }
        for (lVar11 = lVar11 + 0x20; lVar11 != lVar18; lVar11 = lVar11 + 0x10) {
          local_70 = *(long *)(lVar11 + 8);
          if ((local_70 != 0) &&
             (uVar13 = (**(code **)(param_1 + 0x40))(lVar14,&local_70), (uVar13 & 1) != 0)) {
            local_70 = *(long *)(lVar11 + 8);
            local_34 = 1;
            (*(code *)*param_2)(puVar1,&local_34,&local_70);
          }
        }
      }
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = local_a8;
  uVar15 = *(undefined8 *)(param_1 + 0x1a8);
  uVar4 = *(undefined8 *)(param_1 + 0x1b0);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1a8) = local_a0;
  *(undefined8 *)(param_1 + 0x1b0) = local_98;
  local_70 = local_90;
  uStack_68 = local_88;
  local_60 = local_80;
  uStack_58 = local_78;
  uVar17 = *(undefined8 *)(param_1 + 0x1c0);
  uVar5 = *(undefined8 *)(param_1 + 0x1c8);
  uVar8 = *(undefined8 *)(param_1 + 0x1d0);
  *(long *)(param_1 + 0x1b8) = local_90;
  *(undefined8 *)(param_1 + 0x1c0) = local_88;
  lVar11 = *(long *)(param_1 + 0x168);
  lVar18 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x1c8) = local_80;
  *(ulong *)(param_1 + 0x1d0) = local_78;
  local_a8 = uVar16;
  local_a0 = uVar15;
  local_98 = uVar4;
  local_90 = uVar7;
  local_88 = uVar17;
  local_80 = uVar5;
  local_78 = uVar8;
  do {
    if (lVar18 == lVar11) {
      *(long *)(param_1 + 0x170) = lVar11;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e0));
      FUN_00f030b8(&local_a8);
      return;
    }
    plVar12 = *(long **)(lVar18 + -8);
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      psVar2 = (short *)(lVar14 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar10) {
          *psVar2 = sVar3 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    lVar18 = lVar18 + -0x10;
  } while( true );
}


