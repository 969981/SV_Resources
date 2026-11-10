/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021da868; name: FUN_021da868
 */


void FUN_021da868(long param_1,long param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar6 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    bVar7 = true;
LAB_021da8b8:
    if (param_2 != param_3) {
      lVar6 = *(long *)(param_2 + 8);
      lVar4 = param_1 + 0x38;
      if (lVar6 != 0) {
        bVar2 = *(byte *)(lVar6 + -1);
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
        uVar5 = *(ulong *)((lVar6 - (ulong)bVar2) + -0x10);
        lVar6 = uVar5 + 0x18;
        if (uVar5 < 0x11) {
          lVar6 = 0x28;
        }
        *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) - lVar6;
        FUN_00c6c244(lVar4);
      }
      if (param_2 + 0x18 != param_3) {
        lVar6 = *(long *)(param_2 + 0x20);
        if (lVar6 != 0) {
          bVar2 = *(byte *)(lVar6 + -1);
          *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
          uVar5 = *(ulong *)((lVar6 - (ulong)bVar2) + -0x10);
          lVar6 = uVar5 + 0x18;
          if (uVar5 < 0x11) {
            lVar6 = 0x28;
          }
          *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) - lVar6;
          FUN_00c6c244(lVar4);
        }
        if (param_2 + 0x30 != param_3) {
          lVar6 = *(long *)(param_2 + 0x38);
          if (lVar6 != 0) {
            bVar2 = *(byte *)(lVar6 + -1);
            *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
            uVar5 = *(ulong *)((lVar6 - (ulong)bVar2) + -0x10);
            lVar6 = uVar5 + 0x18;
            if (uVar5 < 0x11) {
              lVar6 = 0x28;
            }
            *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) - lVar6;
            FUN_00c6c244(lVar4);
          }
          if (param_2 + 0x48 != param_3) {
            lVar6 = *(long *)(param_2 + 0x50);
            if (lVar6 != 0) {
              bVar2 = *(byte *)(lVar6 + -1);
              *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
              uVar5 = *(ulong *)((lVar6 - (ulong)bVar2) + -0x10);
              lVar6 = uVar5 + 0x18;
              if (uVar5 < 0x11) {
                lVar6 = 0x28;
              }
              *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) - lVar6;
              FUN_00c6c244(lVar4);
            }
            if (param_2 + 0x60 != param_3) {
              lVar6 = *(long *)(param_2 + 0x68);
              if (lVar6 != 0) {
                bVar2 = *(byte *)(lVar6 + -1);
                *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
                uVar5 = *(ulong *)((lVar6 - (ulong)bVar2) + -0x10);
                lVar6 = uVar5 + 0x18;
                if (uVar5 < 0x11) {
                  lVar6 = 0x28;
                }
                *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) - lVar6;
                FUN_00c6c244(lVar4);
              }
              if (param_2 + 0x78 != param_3) {
                lVar6 = *(long *)(param_2 + 0x80);
                if (lVar6 != 0) {
                  bVar2 = *(byte *)(lVar6 + -1);
                  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
                  uVar5 = *(ulong *)((lVar6 - (ulong)bVar2) + -0x10);
                  lVar6 = uVar5 + 0x18;
                  if (uVar5 < 0x11) {
                    lVar6 = 0x28;
                  }
                  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) - lVar6;
                  FUN_00c6c244(lVar4);
                }
                for (param_2 = param_2 + 0x90; param_2 != param_3; param_2 = param_2 + 0x18) {
                  lVar6 = *(long *)(param_2 + 8);
                  if (lVar6 != 0) {
                    bVar2 = *(byte *)(lVar6 + -1);
                    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
                    uVar5 = *(ulong *)((lVar6 - (ulong)bVar2) + -0x10);
                    lVar6 = uVar5 + 0x18;
                    if (uVar5 < 0x11) {
                      lVar6 = 0x28;
                    }
                    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) - lVar6;
                    FUN_00c6c244(lVar4);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (bVar7) {
      return;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_021da8b4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_021da8b4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_021da8b4:
  bVar7 = false;
  goto LAB_021da8b8;
}


