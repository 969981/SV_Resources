/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e06e8; name: FUN_020e06e8
 */


void FUN_020e06e8(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = (long *)(param_1 + 0x100);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_020e0724;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x108));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x108));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_020e0724;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_020e0724:
  plVar6 = *(long **)(param_1 + 0xd0);
  plVar7 = *(long **)(param_1 + 200);
  do {
    while( true ) {
      if (plVar7 == plVar6) {
        *(undefined8 *)(param_1 + 0x100) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x108));
        return;
      }
      if (*plVar7 == *param_2) break;
      plVar7 = plVar7 + 0x34;
    }
    plVar8 = plVar7;
    if (plVar7 + 0x34 == plVar6) {
LAB_020e0758:
      pcVar5 = (code *)plVar6[-0xf];
      if (pcVar5 != (code *)0x0) {
        plVar6[-0xe] = 0;
        plVar6[-0xd] = 0;
        plVar6[-0x10] = 0;
        plVar6[-0xf] = 0;
        (*pcVar5)(plVar6 + -0xc);
      }
      pcVar5 = (code *)plVar6[-0x1f];
      if (pcVar5 != (code *)0x0) {
        plVar6[-0x1e] = 0;
        plVar6[-0x1d] = 0;
        plVar6[-0x20] = 0;
        plVar6[-0x1f] = 0;
        (*pcVar5)(plVar6 + -0x1c);
      }
      pcVar5 = (code *)plVar6[-0x2f];
      if (pcVar5 != (code *)0x0) {
        plVar6[-0x2d] = 0;
        plVar6[-0x2e] = 0;
        plVar6[-0x2f] = 0;
        plVar6[-0x30] = 0;
        (*pcVar5)(plVar6 + -0x2c);
      }
      if ((long *)plVar6[-0x31] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[-0x31] + 0x20))();
      }
      if (plVar6 + -0x34 != plVar8) {
        pcVar5 = (code *)plVar6[-0x43];
        if (pcVar5 != (code *)0x0) {
          plVar6[-0x41] = 0;
          plVar6[-0x42] = 0;
          plVar6[-0x43] = 0;
          plVar6[-0x44] = 0;
          (*pcVar5)(plVar6 + -0x40);
        }
        pcVar5 = (code *)plVar6[-0x53];
        if (pcVar5 != (code *)0x0) {
          plVar6[-0x51] = 0;
          plVar6[-0x52] = 0;
          plVar6[-0x53] = 0;
          plVar6[-0x54] = 0;
          (*pcVar5)(plVar6 + -0x50);
        }
        pcVar5 = (code *)plVar6[-99];
        if (pcVar5 != (code *)0x0) {
          plVar6[-0x61] = 0;
          plVar6[-0x62] = 0;
          plVar6[-99] = 0;
          plVar6[-100] = 0;
          (*pcVar5)(plVar6 + -0x60);
        }
        if ((long *)plVar6[-0x65] != (long *)0x0) {
          (**(code **)(*(long *)plVar6[-0x65] + 0x20))();
        }
        if (plVar6 + -0x68 != plVar8) {
          lVar3 = 0;
          do {
            pcVar5 = *(code **)((long)plVar6 + lVar3 + -0x3b8);
            if (pcVar5 != (code *)0x0) {
              *(undefined8 *)((long)plVar6 + lVar3 + -0x3b0) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x3a8) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x3c0) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x3b8) = 0;
              (*pcVar5)((long)plVar6 + lVar3 + -0x3a0);
            }
            pcVar5 = *(code **)((long)plVar6 + lVar3 + -0x438);
            if (pcVar5 != (code *)0x0) {
              *(undefined8 *)((long)plVar6 + lVar3 + -0x430) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x428) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x440) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x438) = 0;
              (*pcVar5)((long)plVar6 + lVar3 + -0x420);
            }
            pcVar5 = *(code **)((long)plVar6 + lVar3 + -0x4b8);
            if (pcVar5 != (code *)0x0) {
              *(undefined8 *)((long)plVar6 + lVar3 + -0x4b0) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x4a8) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x4c0) = 0;
              *(undefined8 *)((long)plVar6 + lVar3 + -0x4b8) = 0;
              (*pcVar5)((long)plVar6 + lVar3 + -0x4a0);
            }
            plVar4 = *(long **)((long)plVar6 + lVar3 + -0x4c8);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x20))();
            }
            lVar3 = lVar3 + -0x1a0;
          } while ((long)plVar8 + (0x340 - (long)plVar6) != lVar3);
        }
      }
    }
    else {
      do {
        *plVar8 = plVar8[0x34];
        plVar8[1] = plVar8[0x35];
        plVar4 = (long *)plVar8[3];
        plVar8[2] = plVar8[0x36];
        plVar8[3] = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))();
        }
        lVar3 = plVar8[0x37];
        plVar8[0x37] = 0;
        plVar8[3] = lVar3;
        pcVar5 = (code *)plVar8[5];
        if (pcVar5 != (code *)0x0) {
          plVar8[6] = 0;
          plVar8[7] = 0;
          plVar8[4] = 0;
          plVar8[5] = 0;
          (*pcVar5)(plVar8 + 8);
        }
        if ((code *)plVar8[0x3b] != (code *)0x0) {
          (*(code *)plVar8[0x3b])(plVar8 + 0x3c,plVar8 + 8);
          pcVar5 = (code *)plVar8[0x39];
          plVar8[4] = plVar8[0x38];
          plVar8[5] = (long)pcVar5;
          plVar8[6] = plVar8[0x3a];
          plVar8[7] = plVar8[0x3b];
          if (pcVar5 != (code *)0x0) {
            plVar8[0x3a] = 0;
            plVar8[0x3b] = 0;
            plVar8[0x38] = 0;
            plVar8[0x39] = 0;
            (*pcVar5)(plVar8 + 0x3c);
          }
        }
        pcVar5 = (code *)plVar8[0x15];
        if (pcVar5 != (code *)0x0) {
          plVar8[0x16] = 0;
          plVar8[0x17] = 0;
          plVar8[0x14] = 0;
          plVar8[0x15] = 0;
          (*pcVar5)(plVar8 + 0x18);
        }
        if ((code *)plVar8[0x4b] != (code *)0x0) {
          (*(code *)plVar8[0x4b])(plVar8 + 0x4c,plVar8 + 0x18);
          pcVar5 = (code *)plVar8[0x49];
          plVar8[0x14] = plVar8[0x48];
          plVar8[0x15] = (long)pcVar5;
          plVar8[0x16] = plVar8[0x4a];
          plVar8[0x17] = plVar8[0x4b];
          if (pcVar5 != (code *)0x0) {
            plVar8[0x4a] = 0;
            plVar8[0x4b] = 0;
            plVar8[0x48] = 0;
            plVar8[0x49] = 0;
            (*pcVar5)(plVar8 + 0x4c);
          }
        }
        pcVar5 = (code *)plVar8[0x25];
        if (pcVar5 != (code *)0x0) {
          plVar8[0x26] = 0;
          plVar8[0x27] = 0;
          plVar8[0x24] = 0;
          plVar8[0x25] = 0;
          (*pcVar5)(plVar8 + 0x28);
        }
        if ((code *)plVar8[0x5b] != (code *)0x0) {
          (*(code *)plVar8[0x5b])(plVar8 + 0x5c,plVar8 + 0x28);
          pcVar5 = (code *)plVar8[0x59];
          plVar8[0x24] = plVar8[0x58];
          plVar8[0x25] = (long)pcVar5;
          plVar8[0x26] = plVar8[0x5a];
          plVar8[0x27] = plVar8[0x5b];
          if (pcVar5 != (code *)0x0) {
            plVar8[0x5a] = 0;
            plVar8[0x5b] = 0;
            plVar8[0x58] = 0;
            plVar8[0x59] = 0;
            (*pcVar5)(plVar8 + 0x5c);
          }
        }
        plVar8 = plVar8 + 0x34;
      } while (plVar6 + -0x34 != plVar8);
      plVar6 = *(long **)(param_1 + 0xd0);
      if (plVar6 != plVar8) goto LAB_020e0758;
    }
    plVar6 = plVar8;
    *(long **)(param_1 + 0xd0) = plVar6;
  } while( true );
}


