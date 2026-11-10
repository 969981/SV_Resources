/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0fb3c; name: FUN_01e0fb3c
 */


void FUN_01e0fb3c(undefined8 param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  ulong local_e0;
  long *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long *local_b0;
  undefined4 *puStack_a8;
  undefined1 *local_a0;
  undefined4 local_44;
  
  uVar5 = *param_2;
  FUN_00d64f48(&local_d8);
  if (local_d8 == (long *)0x0) {
    return;
  }
  plVar3 = local_d8 + 0x60;
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *plVar3 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01e0fb88;
  }
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
          if (cVar6 == '\0') goto LAB_01e0fb88;
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
LAB_01e0fb88:
  plVar3 = (long *)local_d8[0x10];
  plVar4 = (long *)local_d8[0x11];
  plVar10 = plVar3;
  if ((plVar3 != plVar4) && (*plVar3 != -0x21f6500806b4f1a5)) {
    do {
      plVar10 = plVar10 + 0xb;
      if (plVar4 == plVar10) {
        plVar10 = plVar4;
        goto LAB_01e0fbcc;
      }
    } while (*plVar10 != -0x21f6500806b4f1a5);
  }
LAB_01e0fbcc:
  if (plVar4 == plVar10) {
    local_d8[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
    local_e0 = 0;
  }
  else {
    local_d8[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
    local_e0 = (ulong)(uint)((int)((ulong)((long)plVar10 - (long)plVar3) >> 3) * -0x45d1745d) <<
               0x20 | 1;
    if (local_d8[0x37] == 0) {
      local_b0 = (long *)&local_44;
      local_d0 = &LAB_02e657b0;
      local_c8 = FUN_02e657f0;
      local_c0 = &LAB_02e657f4;
      puStack_b8 = &LAB_02e65800;
    }
    else {
      puStack_a8 = &local_44;
      local_b0 = local_d8;
      local_d0 = &LAB_029e901c;
      local_c8 = FUN_02e65784;
      local_c0 = &LAB_02e65788;
      puStack_b8 = &LAB_02e6579c;
      local_a0 = (undefined1 *)&local_e0;
    }
    local_44 = uVar5;
    FUN_00c837c0(local_d8,local_d8 + 0x10,&local_e0,&local_d0);
    pcVar8 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar8)(&local_b0);
    }
  }
  lVar9 = local_d8[6];
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*local_d8 + 0x50))(local_d8);
    return;
  }
  if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


