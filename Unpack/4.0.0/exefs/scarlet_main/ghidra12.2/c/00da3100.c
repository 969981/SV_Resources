/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da3100; name: FUN_00da3100
 */


void FUN_00da3100(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long local_48;
  
  if (param_2 != 0) {
    lVar3 = param_1;
    if (*(long *)(param_1 + 0x1a8) != 0) {
      lVar3 = *(long *)(param_1 + 0x1a8);
    }
    plVar5 = *(long **)(lVar3 + 0xc0);
    plVar4 = *(long **)(lVar3 + 200);
    if ((plVar5 != plVar4) && (*plVar5 != param_2)) {
      do {
        plVar5 = plVar5 + 1;
        if (plVar4 == plVar5) {
          plVar5 = plVar4;
          goto LAB_00da3178;
        }
      } while (*plVar5 != param_2);
    }
LAB_00da3178:
    if (plVar4 == plVar5) {
      local_48 = param_2;
      FUN_00e22354((long *)(lVar3 + 0xc0),&local_48);
      FUN_00e231c0(*(undefined8 *)(lVar3 + 0xc0),*(undefined8 *)(lVar3 + 200));
    }
    if (((uint)*(ulong *)(lVar3 + 0x1b8) >> 1 & 1) == 0) {
      lVar6 = *(long *)(lVar3 + 0x1e8);
      *(ulong *)(lVar3 + 0x1b8) = *(ulong *)(lVar3 + 0x1b8) | 2;
      plVar5 = (long *)(lVar6 + 0x50);
      local_48 = lVar3;
      lVar3 = nn::os::GetCurrentThread();
LAB_00da3244:
      if (*plVar5 == 0) goto code_r0x00da324c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x58));
      do {
        if (*plVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x58));
            while (*plVar5 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00da3254;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00da3254:
      FUN_00e227ac(lVar6 + 0xd0,&local_48);
      *(undefined8 *)(lVar6 + 0x50) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x58));
    }
  }
  if (param_3 != 0) {
    if (*(long *)(param_1 + 0x1b0) != 0) {
      param_1 = *(long *)(param_1 + 0x1b0);
    }
    plVar5 = *(long **)(param_1 + 0xf8);
    plVar4 = *(long **)(param_1 + 0x100);
    if ((plVar5 != plVar4) && (*plVar5 != param_3)) {
      do {
        plVar5 = plVar5 + 1;
        if (plVar4 == plVar5) {
          plVar5 = plVar4;
          goto LAB_00da31f0;
        }
      } while (*plVar5 != param_3);
    }
LAB_00da31f0:
    if (plVar4 == plVar5) {
      local_48 = param_3;
      FUN_00e22354((long *)(param_1 + 0xf8),&local_48);
      FUN_00e22b60(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100));
    }
    if (((uint)*(ulong *)(param_1 + 0x1b8) >> 1 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x1e8);
      *(ulong *)(param_1 + 0x1b8) = *(ulong *)(param_1 + 0x1b8) | 2;
      plVar5 = (long *)(lVar6 + 0x50);
      local_48 = param_1;
      lVar3 = nn::os::GetCurrentThread();
      while (*plVar5 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') goto LAB_00da32a0;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x58));
      do {
        if (*plVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x58));
            while (*plVar5 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00da32a0;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00da32a0:
      FUN_00e227ac(lVar6 + 0xd0,&local_48);
      *(undefined8 *)(lVar6 + 0x50) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x58));
    }
  }
  return;
code_r0x00da324c:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar2) {
    *plVar5 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00da3254;
  goto LAB_00da3244;
}


