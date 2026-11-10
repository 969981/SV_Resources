/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0ec5c; name: FUN_01e0ec5c
 */


void FUN_01e0ec5c(float param_1)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  short sVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  float local_ec;
  float fStack_e8;
  float local_e4;
  ulong local_e0;
  float *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  float *local_b0;
  float *pfStack_a8;
  ulong *local_a0;
  float local_44;
  
  local_ec = 2.0;
  fStack_e8 = 0.0;
  pfVar2 = &local_ec;
  if (param_1 <= 2.0) {
    pfVar2 = &local_e4;
  }
  local_e4 = param_1;
  pfVar3 = &fStack_e8;
  if (0.0 <= param_1) {
    pfVar3 = pfVar2;
  }
  fVar7 = *pfVar3;
  FUN_00d64f48(&local_d8);
  if (local_d8 == (float *)0x0) {
    return;
  }
  pfVar2 = local_d8 + 0xc0;
  uVar11 = nn::os::GetCurrentThread();
  while (*(long *)pfVar2 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pfVar2,0x10);
    if (bVar9) {
      *(undefined8 *)pfVar2 = uVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_01e0ecd4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0xc2));
  do {
    if (*(long *)pfVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0xc2));
        while (*(long *)pfVar2 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pfVar2,0x10);
          if (bVar9) {
            *(undefined8 *)pfVar2 = uVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_01e0ecd4;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pfVar2,0x10);
    if (bVar9) {
      *(undefined8 *)pfVar2 = uVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_01e0ecd4:
  plVar5 = *(long **)(local_d8 + 0x2e);
  plVar6 = *(long **)(local_d8 + 0x30);
  plVar13 = plVar5;
  if ((plVar5 != plVar6) && (*plVar5 != -0x2a14d0669961102c)) {
    do {
      plVar13 = plVar13 + 0xb;
      if (plVar6 == plVar13) {
        plVar13 = plVar6;
        goto LAB_01e0ed18;
      }
    } while (*plVar13 != -0x2a14d0669961102c);
  }
LAB_01e0ed18:
  if (plVar6 == plVar13) {
    local_d8[0xc0] = 0.0;
    local_d8[0xc1] = 0.0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0xc2));
    local_e0 = 0;
  }
  else {
    local_d8[0xc0] = 0.0;
    local_d8[0xc1] = 0.0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0xc2));
    local_e0 = (ulong)(uint)((int)((ulong)((long)plVar13 - (long)plVar5) >> 3) * -0x45d1745d) <<
               0x20 | 1;
    if (*(long *)(local_d8 + 0x88) == 0) {
      local_b0 = &local_44;
      local_d0 = &LAB_02e65838;
      local_c8 = FUN_02e65878;
      local_c0 = &LAB_02e6587c;
      puStack_b8 = &LAB_02e65888;
    }
    else {
      pfStack_a8 = &local_44;
      local_b0 = local_d8;
      local_a0 = &local_e0;
      local_d0 = &LAB_029e9340;
      local_c8 = FUN_02e6580c;
      local_c0 = &LAB_02e65810;
      puStack_b8 = &LAB_02e65824;
    }
    local_44 = fVar7;
    FUN_00c837c0(local_d8,local_d8 + 0x2e,&local_e0,&local_d0);
    pcVar10 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar10)(&local_b0);
    }
  }
  lVar12 = *(long *)(local_d8 + 0xc);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar4 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar4 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*(long *)local_d8 + 0x50))(local_d8);
    return;
  }
  if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


