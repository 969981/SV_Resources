/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e96c0; name: FUN_010e96c0
 */


void FUN_010e96c0(long *param_1,long param_2)

{
  void *pvVar1;
  char cVar2;
  bool bVar3;
  size_t sVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = param_1 + 0x27;
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_010e96f8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_010e96f8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_010e96f8:
  plVar8 = (long *)param_1[8];
  plVar6 = (long *)param_1[9];
  if ((plVar8 == plVar6) || (*(long *)(*plVar8 + 8) == param_2)) {
LAB_010e9738:
    if (plVar8 != plVar6) {
      if (plVar8 + 1 != plVar6) {
        lVar5 = plVar8[1];
        plVar7 = plVar8;
        if (*(long *)(lVar5 + 8) != param_2) {
          plVar7 = plVar8 + 1;
          *plVar8 = lVar5;
        }
        if (plVar8 + 2 != plVar6) {
          lVar5 = plVar8[2];
          if (*(long *)(lVar5 + 8) != param_2) {
            *plVar7 = lVar5;
            plVar7 = plVar7 + 1;
          }
          if (plVar8 + 3 != plVar6) {
            lVar5 = plVar8[3];
            if (*(long *)(lVar5 + 8) != param_2) {
              *plVar7 = lVar5;
              plVar7 = plVar7 + 1;
            }
            if (plVar8 + 4 != plVar6) {
              lVar5 = plVar8[4];
              if (*(long *)(lVar5 + 8) != param_2) {
                *plVar7 = lVar5;
                plVar7 = plVar7 + 1;
              }
              if (plVar8 + 5 != plVar6) {
                lVar5 = plVar8[5];
                plVar9 = plVar7;
                if (*(long *)(lVar5 + 8) != param_2) {
                  plVar9 = plVar7 + 1;
                  *plVar7 = lVar5;
                }
                plVar7 = plVar9;
                for (plVar8 = plVar8 + 6; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                  plVar9 = plVar7;
                  if (*(long *)(*plVar8 + 8) != param_2) {
                    plVar9 = plVar7 + 1;
                    *plVar7 = *plVar8;
                  }
                  plVar7 = plVar9;
                }
              }
            }
          }
        }
        plVar6 = (long *)param_1[9];
        plVar8 = plVar7;
      }
    }
  }
  else {
    while (plVar8 = plVar8 + 1, plVar6 != plVar8) {
      if (*(long *)(*plVar8 + 8) == param_2) goto LAB_010e9738;
    }
    plVar8 = plVar6;
  }
  if ((long)plVar6 - (long)plVar8 != 0) {
    pvVar1 = (void *)((long)plVar8 + ((long)plVar6 - (long)plVar8));
    sVar4 = (long)plVar6 - (long)pvVar1;
    if (sVar4 != 0) {
      memmove(plVar8,pvVar1,sVar4);
    }
    param_1[9] = (long)plVar8 + sVar4;
  }
  plVar8 = (long *)param_1[1];
  plVar6 = (long *)param_1[2];
  if ((plVar8 != plVar6) && (*(long *)(*plVar8 + 8) != param_2)) {
    plVar7 = plVar8;
    do {
      if (plVar6 + -1 == plVar7) goto LAB_010e9bf4;
      plVar8 = plVar7 + 1;
      plVar9 = plVar7 + 1;
      plVar7 = plVar8;
    } while (*(long *)(*plVar9 + 8) != param_2);
  }
  plVar7 = plVar8;
  if ((plVar8 != plVar6) && (plVar8 + 1 != plVar6)) {
    lVar5 = plVar8[1];
    if (*(long *)(lVar5 + 8) != param_2) {
      plVar7 = plVar8 + 1;
      *plVar8 = lVar5;
    }
    if (plVar8 + 2 != plVar6) {
      lVar5 = plVar8[2];
      if (*(long *)(lVar5 + 8) != param_2) {
        *plVar7 = lVar5;
        plVar7 = plVar7 + 1;
      }
      if (plVar8 + 3 != plVar6) {
        lVar5 = plVar8[3];
        if (*(long *)(lVar5 + 8) != param_2) {
          *plVar7 = lVar5;
          plVar7 = plVar7 + 1;
        }
        if (plVar8 + 4 != plVar6) {
          lVar5 = plVar8[4];
          if (*(long *)(lVar5 + 8) != param_2) {
            *plVar7 = lVar5;
            plVar7 = plVar7 + 1;
          }
          if (plVar8 + 5 != plVar6) {
            lVar5 = plVar8[5];
            if (*(long *)(lVar5 + 8) != param_2) {
              *plVar7 = lVar5;
              plVar7 = plVar7 + 1;
            }
            if (plVar8 + 6 != plVar6) {
              lVar5 = plVar8[6];
              plVar9 = plVar7;
              if (*(long *)(lVar5 + 8) != param_2) {
                plVar9 = plVar7 + 1;
                *plVar7 = lVar5;
              }
              plVar7 = plVar9;
              for (plVar8 = plVar8 + 7; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                plVar9 = plVar7;
                if (*(long *)(*plVar8 + 8) != param_2) {
                  plVar9 = plVar7 + 1;
                  *plVar7 = *plVar8;
                }
                plVar7 = plVar9;
              }
            }
          }
        }
      }
    }
    plVar6 = (long *)param_1[2];
  }
  if (plVar7 == plVar6) goto LAB_010e9bf4;
  lVar5 = *plVar7;
  while( true ) {
    *(undefined8 *)(lVar5 + 0x10) = 0;
    sVar4 = param_1[2] - (long)(plVar7 + 1);
    if (sVar4 == 0) break;
    memmove(plVar7,plVar7 + 1,sVar4);
    param_1[2] = (long)plVar7 + sVar4;
    lVar5 = *plVar7;
  }
  plVar8 = (long *)param_1[0xf];
  plVar6 = (long *)param_1[0x10];
  param_1[2] = (long)plVar7;
  if ((plVar8 == plVar6) || (*plVar8 == param_2)) {
LAB_010e99e8:
    if (plVar8 != plVar6) {
      if (plVar8 + 1 != plVar6) {
        lVar5 = plVar8[1];
        plVar7 = plVar8;
        if (lVar5 != param_2) {
          plVar7 = plVar8 + 1;
          *plVar8 = lVar5;
        }
        if (plVar8 + 2 != plVar6) {
          lVar5 = plVar8[2];
          if (lVar5 != param_2) {
            *plVar7 = lVar5;
            plVar7 = plVar7 + 1;
          }
          if (plVar8 + 3 != plVar6) {
            lVar5 = plVar8[3];
            if (lVar5 != param_2) {
              *plVar7 = lVar5;
              plVar7 = plVar7 + 1;
            }
            if (plVar8 + 4 != plVar6) {
              lVar5 = plVar8[4];
              plVar9 = plVar7;
              if (lVar5 != param_2) {
                plVar9 = plVar7 + 1;
                *plVar7 = lVar5;
              }
              plVar7 = plVar9;
              for (plVar8 = plVar8 + 5; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                plVar9 = plVar7;
                if (*plVar8 != param_2) {
                  plVar9 = plVar7 + 1;
                  *plVar7 = *plVar8;
                }
                plVar7 = plVar9;
              }
            }
          }
        }
        plVar6 = (long *)param_1[0x10];
        plVar8 = plVar7;
      }
    }
  }
  else {
    while (plVar8 = plVar8 + 1, plVar6 != plVar8) {
      if (*plVar8 == param_2) goto LAB_010e99e8;
    }
    plVar8 = plVar6;
  }
  if ((long)plVar6 - (long)plVar8 != 0) {
    pvVar1 = (void *)((long)plVar8 + ((long)plVar6 - (long)plVar8));
    sVar4 = (long)plVar6 - (long)pvVar1;
    if (sVar4 != 0) {
      memmove(plVar8,pvVar1,sVar4);
    }
    param_1[0x10] = (long)plVar8 + sVar4;
  }
  plVar8 = (long *)param_1[0x16];
  plVar6 = (long *)param_1[0x17];
  if ((plVar8 == plVar6) || (*plVar8 == param_2)) {
LAB_010e9aa8:
    if (plVar8 != plVar6) {
      if (plVar8 + 1 != plVar6) {
        lVar5 = plVar8[1];
        plVar7 = plVar8;
        if (lVar5 != param_2) {
          plVar7 = plVar8 + 1;
          *plVar8 = lVar5;
        }
        if (plVar8 + 2 != plVar6) {
          lVar5 = plVar8[2];
          if (lVar5 != param_2) {
            *plVar7 = lVar5;
            plVar7 = plVar7 + 1;
          }
          if (plVar8 + 3 != plVar6) {
            lVar5 = plVar8[3];
            if (lVar5 != param_2) {
              *plVar7 = lVar5;
              plVar7 = plVar7 + 1;
            }
            if (plVar8 + 4 != plVar6) {
              lVar5 = plVar8[4];
              plVar9 = plVar7;
              if (lVar5 != param_2) {
                plVar9 = plVar7 + 1;
                *plVar7 = lVar5;
              }
              plVar7 = plVar9;
              for (plVar8 = plVar8 + 5; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                plVar9 = plVar7;
                if (*plVar8 != param_2) {
                  plVar9 = plVar7 + 1;
                  *plVar7 = *plVar8;
                }
                plVar7 = plVar9;
              }
            }
          }
        }
        plVar6 = (long *)param_1[0x17];
        plVar8 = plVar7;
      }
    }
  }
  else {
    while (plVar8 = plVar8 + 1, plVar6 != plVar8) {
      if (*plVar8 == param_2) goto LAB_010e9aa8;
    }
    plVar8 = plVar6;
  }
  if ((long)plVar6 - (long)plVar8 != 0) {
    pvVar1 = (void *)((long)plVar8 + ((long)plVar6 - (long)plVar8));
    sVar4 = (long)plVar6 - (long)pvVar1;
    if (sVar4 != 0) {
      memmove(plVar8,pvVar1,sVar4);
    }
    param_1[0x17] = (long)plVar8 + sVar4;
  }
  plVar8 = (long *)param_1[0x1d];
  plVar6 = (long *)param_1[0x1e];
  if ((plVar8 == plVar6) || (*plVar8 == param_2)) {
LAB_010e9b68:
    if (plVar8 != plVar6) {
      if (plVar8 + 1 != plVar6) {
        lVar5 = plVar8[1];
        plVar7 = plVar8;
        if (lVar5 != param_2) {
          plVar7 = plVar8 + 1;
          *plVar8 = lVar5;
        }
        if (plVar8 + 2 != plVar6) {
          lVar5 = plVar8[2];
          if (lVar5 != param_2) {
            *plVar7 = lVar5;
            plVar7 = plVar7 + 1;
          }
          if (plVar8 + 3 != plVar6) {
            lVar5 = plVar8[3];
            if (lVar5 != param_2) {
              *plVar7 = lVar5;
              plVar7 = plVar7 + 1;
            }
            if (plVar8 + 4 != plVar6) {
              lVar5 = plVar8[4];
              plVar9 = plVar7;
              if (lVar5 != param_2) {
                plVar9 = plVar7 + 1;
                *plVar7 = lVar5;
              }
              plVar7 = plVar9;
              for (plVar8 = plVar8 + 5; plVar8 != plVar6; plVar8 = plVar8 + 1) {
                plVar9 = plVar7;
                if (*plVar8 != param_2) {
                  plVar9 = plVar7 + 1;
                  *plVar7 = *plVar8;
                }
                plVar7 = plVar9;
              }
            }
          }
        }
        plVar6 = (long *)param_1[0x1e];
        plVar8 = plVar7;
      }
    }
  }
  else {
    while (plVar8 = plVar8 + 1, plVar6 != plVar8) {
      if (*plVar8 == param_2) goto LAB_010e9b68;
    }
    plVar8 = plVar6;
  }
  if ((long)plVar6 - (long)plVar8 != 0) {
    pvVar1 = (void *)((long)plVar8 + ((long)plVar6 - (long)plVar8));
    sVar4 = (long)plVar6 - (long)pvVar1;
    if (sVar4 != 0) {
      memmove(plVar8,pvVar1,sVar4);
    }
    param_1[0x1e] = (long)plVar8 + sVar4;
  }
  (**(code **)(*param_1 + 0x10))(param_1);
LAB_010e9bf4:
  param_1[0x27] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return;
}


