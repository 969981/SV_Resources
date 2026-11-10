/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01552cc4; name: FUN_01552cc4
 */


void FUN_01552cc4(undefined8 param_1,int *param_2)

{
  float *pfVar1;
  short *psVar2;
  short sVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  ulong local_e0;
  float *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  float *local_b0;
  float *pfStack_a8;
  undefined1 *local_a0;
  float local_44;
  
  iVar12 = *param_2;
  FUN_00d64f48(&local_d8);
  if (local_d8 == (float *)0x0) {
    return;
  }
  pfVar1 = local_d8 + 0xc0;
  uVar9 = nn::os::GetCurrentThread();
  while (*(long *)pfVar1 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pfVar1,0x10);
    if (bVar7) {
      *(undefined8 *)pfVar1 = uVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01552d18;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0xc2));
  do {
    if (*(long *)pfVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0xc2));
        while (*(long *)pfVar1 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pfVar1,0x10);
          if (bVar7) {
            *(undefined8 *)pfVar1 = uVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01552d18;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pfVar1,0x10);
    if (bVar7) {
      *(undefined8 *)pfVar1 = uVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01552d18:
  plVar4 = *(long **)(local_d8 + 0x2e);
  plVar5 = *(long **)(local_d8 + 0x30);
  plVar11 = plVar4;
  if ((plVar4 != plVar5) && (*plVar4 != -0x2a14d0669961102c)) {
    do {
      plVar11 = plVar11 + 0xb;
      if (plVar5 == plVar11) {
        plVar11 = plVar5;
        goto LAB_01552d5c;
      }
    } while (*plVar11 != -0x2a14d0669961102c);
  }
LAB_01552d5c:
  if (plVar5 == plVar11) {
    local_d8[0xc0] = 0.0;
    local_d8[0xc1] = 0.0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0xc2));
    local_e0 = 0;
  }
  else {
    local_d8[0xc0] = 0.0;
    local_d8[0xc1] = 0.0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0xc2));
    local_e0 = (ulong)(uint)((int)((ulong)((long)plVar11 - (long)plVar4) >> 3) * -0x45d1745d) <<
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
      local_d0 = &LAB_029e9340;
      local_c8 = FUN_02e6580c;
      local_c0 = &LAB_02e65810;
      puStack_b8 = &LAB_02e65824;
      local_a0 = (undefined1 *)&local_e0;
    }
    local_44 = (float)iVar12;
    FUN_00c837c0(local_d8,local_d8 + 0x2e,&local_e0,&local_d0);
    pcVar8 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar8)(&local_b0);
    }
  }
  lVar10 = *(long *)(local_d8 + 0xc);
  psVar2 = (short *)(lVar10 + 0x1a);
  do {
    sVar3 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar3 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*(long *)local_d8 + 0x50))(local_d8);
    return;
  }
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


