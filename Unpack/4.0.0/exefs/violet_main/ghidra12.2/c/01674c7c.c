/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01674c7c; name: FUN_01674c7c
 */


undefined8 FUN_01674c7c(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (**(code **)(*param_1 + 0x68))(param_1,0);
  if ((param_3 & 1) == 0) {
    if (lVar4 != 0) {
      thunk_FUN_021f1018(lVar4,param_2);
    }
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,1);
    if (lVar4 != 0) {
      thunk_FUN_021f1018(lVar4,param_2 + 0x158);
    }
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,2);
    if (lVar4 != 0) {
      thunk_FUN_021f1018(lVar4,param_2 + 0x2b0);
    }
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,3);
    if (lVar4 != 0) {
      thunk_FUN_021f1018(lVar4,param_2 + 0x408);
    }
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,4);
    if (lVar4 != 0) {
      thunk_FUN_021f1018(lVar4,param_2 + 0x560);
    }
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,5);
    if (lVar4 != 0) {
      thunk_FUN_021f1018(lVar4,param_2 + 0x6b8);
    }
  }
  else {
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x70);
      plVar1 = (long *)(lVar5 + 0x20);
      lVar4 = nn::os::GetCurrentThread();
LAB_01674cc8:
      if (*plVar1 == 0) goto code_r0x01674cd0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01674cd8;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01674cd8:
      FUN_00f32a60(lVar5,param_2,param_2 + 0x148);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x28));
    }
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,1);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x70);
      plVar1 = (long *)(lVar5 + 0x20);
      lVar4 = nn::os::GetCurrentThread();
LAB_01674d24:
      if (*plVar1 == 0) goto code_r0x01674d2c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01674d34;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01674d34:
      FUN_00f32a60(lVar5,param_2 + 0x158,param_2 + 0x2a0);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x28));
    }
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,2);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x70);
      plVar1 = (long *)(lVar5 + 0x20);
      lVar4 = nn::os::GetCurrentThread();
LAB_01674d80:
      if (*plVar1 == 0) goto code_r0x01674d88;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01674d90;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01674d90:
      FUN_00f32a60(lVar5,param_2 + 0x2b0,param_2 + 0x3f8);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x28));
    }
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,3);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x70);
      plVar1 = (long *)(lVar5 + 0x20);
      lVar4 = nn::os::GetCurrentThread();
LAB_01674ddc:
      if (*plVar1 == 0) goto code_r0x01674de4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01674dec;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01674dec:
      FUN_00f32a60(lVar5,param_2 + 0x408,param_2 + 0x550);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x28));
    }
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,4);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x70);
      plVar1 = (long *)(lVar5 + 0x20);
      lVar4 = nn::os::GetCurrentThread();
LAB_01674e38:
      if (*plVar1 == 0) goto code_r0x01674e40;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01674e48;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01674e48:
      FUN_00f32a60(lVar5,param_2 + 0x560,param_2 + 0x6a8);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x28));
    }
    lVar4 = (**(code **)(*param_1 + 0x68))(param_1,5);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x70);
      plVar1 = (long *)(lVar5 + 0x20);
      lVar4 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_01674ea4;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01674ea4;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01674ea4:
      FUN_00f32a60(lVar5,param_2 + 0x6b8,param_2 + 0x800);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x28));
    }
  }
  *(char *)(param_2 + 0x810) = (char)param_1[0x12];
  *(undefined1 *)(param_2 + 0x811) = *(undefined1 *)((long)param_1 + 0x91);
  *(undefined2 *)(param_2 + 0x812) = 0;
  return 0x814;
code_r0x01674cd0:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01674cd8;
  goto LAB_01674cc8;
code_r0x01674d2c:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01674d34;
  goto LAB_01674d24;
code_r0x01674d88:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01674d90;
  goto LAB_01674d80;
code_r0x01674de4:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01674dec;
  goto LAB_01674ddc;
code_r0x01674e40:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01674e48;
  goto LAB_01674e38;
}


