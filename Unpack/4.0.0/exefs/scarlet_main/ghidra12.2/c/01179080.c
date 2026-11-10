/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01179080; name: FUN_01179080
 */


undefined8 FUN_01179080(long param_1,undefined8 param_2,long param_3)

{
  short *psVar1;
  bool bVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 auStack_b0 [13];
  long local_48;
  
  plVar8 = (long *)(param_1 + 0x30);
  lVar9 = *plVar8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar9) {
    bVar11 = true;
LAB_011790d4:
    lVar7 = FUN_011f243c(param_1,param_2);
    bVar2 = **(char **)(param_3 + 0x10) != '\0';
    if (bVar2) {
      local_d0 = &LAB_02b67fb0;
      local_c8 = FUN_02b680b0;
      local_c0 = &LAB_02b680b4;
      local_b8 = &LAB_02b680c0;
      auStack_b0[0] = param_2;
      FUN_01179460(&local_48,param_3,&local_d0);
    }
    else {
      local_48 = 0;
    }
    plVar10 = (long *)(lVar7 + 8);
    plVar8 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    lVar9 = local_48;
    pcVar6 = local_c8;
    local_48 = 0;
    *plVar10 = lVar9;
    if ((bVar2) && (local_c8 != (code *)0x0)) {
      local_c0 = (undefined1 *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar6)(auStack_b0);
    }
    FUN_01179260(lVar7 + 0x10,plVar10);
    if (!bVar11) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
    }
    return 1;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar11) {
      *plVar8 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_011790d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar8 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar11) {
            *plVar8 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_011790d0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar11) {
      *plVar8 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011790d0:
  bVar11 = false;
  goto LAB_011790d4;
}


