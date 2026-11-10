/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e5510; name: FUN_029e5510
 */


void FUN_029e5510(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar4 = (long *)(param_1 + 0x48);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_029e5540;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_029e5540;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_029e5540:
  plVar4 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  plVar4 = *(long **)(param_1 + 0x78);
  plVar6 = *(long **)(param_1 + 0x80);
  if (plVar6 != plVar4) {
    plVar5 = (long *)plVar6[-1];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    if (plVar6 + -1 != plVar4) {
      plVar5 = (long *)plVar6[-2];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      if (plVar6 + -2 != plVar4) {
        plVar5 = (long *)plVar6[-3];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))();
        }
        if (plVar6 + -3 != plVar4) {
          do {
            if ((long *)plVar6[-4] != (long *)0x0) {
              (**(code **)(*(long *)plVar6[-4] + 0x18))();
            }
            plVar6 = plVar6 + -1;
          } while (plVar4 + 3 != plVar6);
        }
      }
    }
  }
  *(long **)(param_1 + 0x80) = plVar4;
  plVar4 = *(long **)(param_1 + 0xb0);
  plVar6 = *(long **)(param_1 + 0xb8);
  if (plVar6 != plVar4) {
    plVar5 = (long *)plVar6[-1];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    if (plVar6 + -1 != plVar4) {
      plVar5 = (long *)plVar6[-2];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      if (plVar6 + -2 != plVar4) {
        plVar5 = (long *)plVar6[-3];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))();
        }
        if (plVar6 + -3 != plVar4) {
          do {
            if ((long *)plVar6[-4] != (long *)0x0) {
              (**(code **)(*(long *)plVar6[-4] + 0x18))();
            }
            plVar6 = plVar6 + -1;
          } while (plVar4 + 3 != plVar6);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  *(long **)(param_1 + 0xb8) = plVar4;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
  return;
}


