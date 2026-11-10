/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a85858; name: FUN_01a85858
 */


void FUN_01a85858(long param_1,byte param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x150) != 0) {
    if ((param_2 & 1) == 0) {
      FUN_0129e570();
    }
    else {
      FUN_0129e8c0();
    }
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    FUN_01df060c(&local_38);
    FUN_015d81e0(local_38,param_2 & 1);
    FUN_014a3154(&local_38);
  }
  if ((((*(long *)(param_1 + 0x38) != 0) && (*(short *)(*(long *)(param_1 + 0x38) + 0x1a) != 0)) &&
      (lVar6 = *(long *)(param_1 + 0x38), lVar6 != 0)) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
LAB_01a859b4:
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01a859d8;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a859d8:
      bVar8 = false;
    }
    if (!bVar8) goto code_r0x01a859e0;
    lVar6 = *(long *)(lVar6 + 0x10);
    plVar7 = (long *)(lVar6 + -0x28);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xb0);
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
            while (*plVar2 == 0) {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01a85bcc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01a85bcc:
      if (*(byte *)(lVar6 + 0x5a) != (param_2 & 1)) {
        *(byte *)(lVar6 + 0x5a) = param_2 & 1;
        (**(code **)(*plVar7 + 0xd8))(plVar7);
      }
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xb8));
      lVar6 = *(long *)(lVar6 + 8);
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar9 == 0) goto LAB_01a85ee4;
    }
  }
LAB_01a858d0:
  if (((*(long *)(param_1 + 0x48) != 0) && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)) &&
     ((lVar6 = *(long *)(param_1 + 0x48), lVar6 != 0 && (*(short *)(lVar6 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
LAB_01a859fc:
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01a85a20;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a85a20:
      bVar8 = false;
    }
    if (!bVar8) goto code_r0x01a85a28;
    lVar6 = *(long *)(lVar6 + 0x10);
    plVar7 = (long *)(lVar6 + -0x28);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xb0);
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
            while (*plVar2 == 0) {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01a85c44;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01a85c44:
      if (*(byte *)(lVar6 + 0x5a) != (param_2 & 1)) {
        *(byte *)(lVar6 + 0x5a) = param_2 & 1;
        (**(code **)(*plVar7 + 0xd8))(plVar7);
      }
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xb8));
      lVar6 = *(long *)(lVar6 + 8);
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar9 == 0) goto LAB_01a85ee4;
    }
  }
LAB_01a858f0:
  if (((*(long *)(param_1 + 0x58) != 0) && (*(short *)(*(long *)(param_1 + 0x58) + 0x1a) != 0)) &&
     ((lVar6 = *(long *)(param_1 + 0x58), lVar6 != 0 && (*(short *)(lVar6 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
LAB_01a85a44:
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01a85a68;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a85a68:
      bVar8 = false;
    }
    if (!bVar8) goto code_r0x01a85a70;
    lVar6 = *(long *)(lVar6 + 0x10);
    plVar7 = (long *)(lVar6 + -0x28);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xb0);
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
            while (*plVar2 == 0) {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01a85cbc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01a85cbc:
      if (*(byte *)(lVar6 + 0x5a) != (param_2 & 1)) {
        *(byte *)(lVar6 + 0x5a) = param_2 & 1;
        (**(code **)(*plVar7 + 0xd8))(plVar7);
      }
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xb8));
      lVar6 = *(long *)(lVar6 + 8);
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar9 == 0) goto LAB_01a85ee4;
    }
  }
LAB_01a85910:
  if ((((*(long *)(param_1 + 0x78) != 0) && (*(short *)(*(long *)(param_1 + 0x78) + 0x1a) != 0)) &&
      (lVar6 = *(long *)(param_1 + 0x78), lVar6 != 0)) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
LAB_01a85a8c:
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01a85ab0;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a85ab0:
      bVar8 = false;
    }
    if (!bVar8) goto code_r0x01a85ab8;
    lVar6 = *(long *)(lVar6 + 0x10);
    plVar7 = (long *)(lVar6 + -0x28);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xb0);
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
            while (*plVar2 == 0) {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01a85d34;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01a85d34:
      if (*(byte *)(lVar6 + 0x5a) != (param_2 & 1)) {
        *(byte *)(lVar6 + 0x5a) = param_2 & 1;
        (**(code **)(*plVar7 + 0xd8))(plVar7);
      }
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xb8));
      lVar6 = *(long *)(lVar6 + 8);
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar9 == 0) goto LAB_01a85ee4;
    }
  }
LAB_01a85930:
  if (((*(long *)(param_1 + 0x68) != 0) && (*(short *)(*(long *)(param_1 + 0x68) + 0x1a) != 0)) &&
     ((lVar6 = *(long *)(param_1 + 0x68), lVar6 != 0 && (*(short *)(lVar6 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
LAB_01a85ad4:
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01a85af8;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a85af8:
      bVar8 = false;
    }
    if (!bVar8) goto code_r0x01a85b00;
    lVar6 = *(long *)(lVar6 + 0x10);
    plVar7 = (long *)(lVar6 + -0x28);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xb0);
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
            while (*plVar2 == 0) {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01a85dac;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01a85dac:
      if (*(byte *)(lVar6 + 0x5a) != (param_2 & 1)) {
        *(byte *)(lVar6 + 0x5a) = param_2 & 1;
        (**(code **)(*plVar7 + 0xd8))(plVar7);
      }
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xb8));
      lVar6 = *(long *)(lVar6 + 8);
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar9 == 0) goto LAB_01a85ee4;
    }
  }
LAB_01a85950:
  if (((*(long *)(param_1 + 0x88) != 0) && (*(short *)(*(long *)(param_1 + 0x88) + 0x1a) != 0)) &&
     ((lVar6 = *(long *)(param_1 + 0x88), lVar6 != 0 && (*(short *)(lVar6 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
LAB_01a85b1c:
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01a85b40;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a85b40:
      bVar8 = false;
    }
    if (!bVar8) goto code_r0x01a85b48;
    lVar6 = *(long *)(lVar6 + 0x10);
    plVar7 = (long *)(lVar6 + -0x28);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xb0);
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
            while (*plVar2 == 0) {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01a85e24;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01a85e24:
      if (*(byte *)(lVar6 + 0x5a) != (param_2 & 1)) {
        *(byte *)(lVar6 + 0x5a) = param_2 & 1;
        (**(code **)(*plVar7 + 0xd8))(plVar7);
      }
      *(undefined8 *)(lVar6 + 0xb0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xb8));
      lVar6 = *(long *)(lVar6 + 8);
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar9 == 0) goto LAB_01a85ee4;
    }
  }
LAB_01a85970:
  if ((((*(long *)(param_1 + 0x98) != 0) && (*(short *)(*(long *)(param_1 + 0x98) + 0x1a) != 0)) &&
      (lVar6 = *(long *)(param_1 + 0x98), lVar6 != 0)) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a85b88;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a85b88:
        bVar8 = false;
      }
      if (bVar8) {
        lVar6 = *(long *)(lVar6 + 0x10);
        plVar7 = (long *)(lVar6 + -0x28);
        if (lVar6 == 0) {
          return;
        }
        plVar2 = (long *)(lVar6 + 0xb0);
        lVar5 = nn::os::GetCurrentThread();
        do {
          if (*plVar2 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xb8));
              while (*plVar2 == 0) {
                cVar4 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar5;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_01a85ea0;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_01a85ea0:
        if (*(byte *)(lVar6 + 0x5a) != (param_2 & 1)) {
          *(byte *)(lVar6 + 0x5a) = param_2 & 1;
          (**(code **)(*plVar7 + 0xd8))(plVar7);
        }
        *(undefined8 *)(lVar6 + 0xb0) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xb8));
        lVar6 = *(long *)(lVar6 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7);
          return;
        }
        if (sVar9 != 0) {
          return;
        }
LAB_01a85ee4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
code_r0x01a859e0:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_01a858d0;
  goto LAB_01a859b4;
code_r0x01a85a28:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_01a858f0;
  goto LAB_01a859fc;
code_r0x01a85a70:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_01a85910;
  goto LAB_01a85a44;
code_r0x01a85ab8:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_01a85930;
  goto LAB_01a85a8c;
code_r0x01a85b00:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_01a85950;
  goto LAB_01a85ad4;
code_r0x01a85b48:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_01a85970;
  goto LAB_01a85b1c;
}


