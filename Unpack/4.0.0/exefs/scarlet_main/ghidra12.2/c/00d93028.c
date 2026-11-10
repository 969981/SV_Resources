/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d93028; name: FUN_00d93028
 */


uint FUN_00d93028(undefined8 param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  ulong local_e0;
  long *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  char *local_b0 [13];
  char local_44 [4];
  
  FUN_00d64f48(&local_d8);
  if (local_d8 == (long *)0x0) {
LAB_00d93180:
    uVar11 = 0;
LAB_00d93184:
    return uVar11 & 1;
  }
  plVar12 = local_d8 + 0x1e;
  plVar3 = local_d8 + 0x60;
  lVar9 = nn::os::GetCurrentThread();
LAB_00d93064:
  if (*plVar3 == 0) goto code_r0x00d9306c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x61));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x61));
        while (*plVar3 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00d93074;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *plVar3 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00d93074:
  plVar3 = (long *)local_d8[0x1e];
  plVar4 = (long *)local_d8[0x1f];
  plVar10 = plVar3;
  if ((plVar3 != plVar4) && (*plVar3 != *param_2)) {
    do {
      plVar10 = plVar10 + 0xb;
      if (plVar4 == plVar10) {
        plVar10 = plVar4;
        goto LAB_00d930ac;
      }
    } while (*plVar10 != *param_2);
  }
LAB_00d930ac:
  if (plVar4 == plVar10) {
    local_d8[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
    bVar7 = true;
  }
  else {
    local_d8[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
    local_e0 = (ulong)(uint)((int)((ulong)((long)plVar10 - (long)plVar3) >> 3) * -0x45d1745d) <<
               0x20 | 1;
    local_b0[0] = local_44;
    local_44[0] = '\0';
    local_d0 = &LAB_02e65afc;
    local_c8 = FUN_02e65b40;
    local_c0 = &LAB_02e65b44;
    puStack_b8 = &LAB_02e65b50;
    FUN_00c837c0(local_d8,plVar12,&local_e0,&local_d0);
    pcVar8 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar8)(local_b0);
    }
    bVar7 = false;
    plVar12 = (long *)(ulong)(local_44[0] != '\0');
  }
  uVar11 = (uint)plVar12;
  lVar9 = local_d8[6];
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*local_d8 + 0x50))(local_d8);
  }
  else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (!bVar7) goto LAB_00d93184;
  goto LAB_00d93180;
code_r0x00d9306c:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar7) {
    *plVar3 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00d93074;
  goto LAB_00d93064;
}


