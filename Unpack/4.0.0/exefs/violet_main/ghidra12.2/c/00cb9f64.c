/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb9f64; name: FUN_00cb9f64
 */


void FUN_00cb9f64(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  
  plVar4 = (long *)(param_1 + 0x1f0);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00cb9f98;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1f8));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1f8));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00cb9f98;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00cb9f98:
  plVar4 = *(long **)(param_1 + 0xc0);
  plVar6 = *(long **)(param_1 + 200);
  if (plVar4 != plVar6) {
    *(undefined8 *)(*plVar4 + 0x10) = 0;
    while (plVar4 = plVar4 + 1, plVar4 != plVar6) {
      *(undefined8 *)(*plVar4 + 0x10) = 0;
    }
    plVar4 = *(long **)(param_1 + 0xc0);
  }
  *(long **)(param_1 + 200) = plVar4;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined2 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1f8));
  plVar4 = (long *)(param_1 + 8);
  lVar5 = *plVar4;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar7 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    bVar7 = false;
    do {
      if (*plVar4 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        bVar7 = false;
        do {
          if (*plVar4 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
              while (*plVar4 == 0) {
                cVar1 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar7) {
                  *plVar4 = lVar3;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                bVar7 = false;
                if (cVar1 == '\0') goto LAB_00cb9ff4;
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
        break;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
LAB_00cb9ff4:
  plVar4 = *(long **)(param_1 + 0x20);
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar4 != plVar6) {
    (**(code **)(*(long *)*plVar4 + 0xa8))();
    (**(code **)(*(long *)*plVar4 + 0xf0))((long *)*plVar4,0);
    while (plVar4 = plVar4 + 1, plVar4 != plVar6) {
      (**(code **)(*(long *)*plVar4 + 0xa8))();
      (**(code **)(*(long *)*plVar4 + 0xf0))((long *)*plVar4,0);
    }
    plVar4 = *(long **)(param_1 + 0x20);
    if (*(long **)(param_1 + 0x28) != plVar4) {
      plVar6 = *(long **)(param_1 + 0x28) + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x18))();
      }
      while (plVar6 != plVar4) {
        plVar6 = plVar6 + -1;
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0x18))();
        }
      }
    }
  }
  *(long **)(param_1 + 0x28) = plVar4;
  plVar4 = *(long **)(param_1 + 0x58);
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar4 != plVar6) {
    (**(code **)(*(long *)*plVar4 + 0xa8))();
    (**(code **)(*(long *)*plVar4 + 0xf0))((long *)*plVar4,0);
    while (plVar4 = plVar4 + 1, plVar4 != plVar6) {
      (**(code **)(*(long *)*plVar4 + 0xa8))();
      (**(code **)(*(long *)*plVar4 + 0xf0))((long *)*plVar4,0);
    }
    plVar4 = *(long **)(param_1 + 0x58);
    if (*(long **)(param_1 + 0x60) != plVar4) {
      plVar6 = *(long **)(param_1 + 0x60) + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x18))();
      }
      while (plVar6 != plVar4) {
        plVar6 = plVar6 + -1;
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0x18))();
        }
      }
    }
  }
  *(long **)(param_1 + 0x60) = plVar4;
  if (bVar7) {
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  return;
}


