/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e8e44; name: FUN_010e8e44
 */


void FUN_010e8e44(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  long *plVar11;
  
  plVar11 = (long *)(param_1 + 8);
  lVar7 = *plVar11;
  lVar2 = nn::os::GetCurrentThread();
  bVar9 = true;
  if (lVar2 != lVar7) {
    lVar2 = nn::os::GetCurrentThread();
LAB_010e8e84:
    if (*plVar11 == 0) goto code_r0x010e8e8c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar11 == 0) {
            cVar1 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar9) {
              *plVar11 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_010e8e94;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar9) {
        *plVar11 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_010e8e94:
    bVar9 = false;
  }
  uVar10 = *(ulong *)(param_1 + 600);
  cVar1 = *(char *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(ulong *)(param_1 + 600) = uVar10 | 4;
  if (cVar1 == '\0') {
    *(undefined1 **)(param_1 + 0xa8) = &LAB_02c814cc;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  plVar11 = *(long **)(param_1 + 0x20);
  plVar8 = *(long **)(param_1 + 0x28);
  if (plVar11 != plVar8) {
    if (((long *)*plVar11 != (long *)0x0) &&
       (uVar3 = (**(code **)(*(long *)*plVar11 + 0xb8))(), (uVar3 & 1) != 0)) {
      plVar6 = (long *)*plVar11;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar6 = (long *)*plVar11;
      }
      (**(code **)(*plVar6 + 0xf0))(plVar6,0);
      plVar6 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar6 = plVar11 + 1;
    if (plVar6 != plVar8) {
      if (((long *)*plVar6 != (long *)0x0) &&
         (uVar3 = (**(code **)(*(long *)*plVar6 + 0xb8))(), (uVar3 & 1) != 0)) {
        plVar4 = (long *)*plVar6;
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          (**(code **)(*plVar4 + 0x18))(plVar4);
          plVar4 = (long *)*plVar6;
        }
        (**(code **)(*plVar4 + 0xf0))(plVar4,0);
        plVar4 = (long *)*plVar6;
        *plVar6 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      for (plVar11 = plVar11 + 2; plVar11 != plVar8; plVar11 = plVar11 + 1) {
        if (((long *)*plVar11 != (long *)0x0) &&
           (uVar3 = (**(code **)(*(long *)*plVar11 + 0xb8))(), (uVar3 & 1) != 0)) {
          plVar6 = (long *)*plVar11;
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)0x0;
          }
          else {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            (**(code **)(*plVar6 + 0x18))(plVar6);
            plVar6 = (long *)*plVar11;
          }
          (**(code **)(*plVar6 + 0xf0))(plVar6,0);
          plVar6 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
      }
    }
  }
  plVar11 = *(long **)(param_1 + 0x58);
  plVar8 = *(long **)(param_1 + 0x60);
  if (plVar11 != plVar8) {
    do {
      if (((long *)*plVar11 != (long *)0x0) &&
         (uVar3 = (**(code **)(*(long *)*plVar11 + 0xb8))(), (uVar3 & 1) != 0)) {
        lVar2 = 0;
        if (*plVar11 != 0) {
          lVar2 = *plVar11 + -0x20;
        }
        FUN_010e96c0(param_1 + 0xb8,lVar2);
        (**(code **)(*(long *)*plVar11 + 0xf0))((long *)*plVar11,0);
        plVar6 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar8 != plVar11);
  }
  if (cVar1 == '\0') {
    plVar11 = *(long **)(param_1 + 0x20);
    plVar8 = *(long **)(param_1 + 0x28);
    if ((plVar11 != plVar8) && (*plVar11 != 0)) {
      do {
        plVar11 = plVar11 + 1;
        if (plVar8 == plVar11) {
          plVar11 = plVar8;
          goto LAB_010e90b8;
        }
      } while (*plVar11 != 0);
    }
    if (plVar11 != plVar8) {
      plVar6 = plVar11 + 1;
      if (plVar6 != plVar8) {
        plVar4 = plVar11;
        if (*plVar6 != 0) {
          plVar4 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))();
          }
          lVar2 = *plVar6;
          *plVar6 = 0;
          plVar4 = plVar11 + 1;
          *plVar11 = lVar2;
        }
        plVar6 = plVar11 + 2;
        if (plVar6 != plVar8) {
          if (*plVar6 != 0) {
            plVar5 = (long *)*plVar4;
            *plVar4 = 0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x18))();
            }
            lVar2 = *plVar6;
            *plVar6 = 0;
            *plVar4 = lVar2;
            plVar4 = plVar4 + 1;
          }
          plVar6 = plVar11 + 3;
          if (plVar6 != plVar8) {
            if (*plVar6 != 0) {
              plVar5 = (long *)*plVar4;
              *plVar4 = 0;
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x18))();
              }
              lVar2 = *plVar6;
              *plVar6 = 0;
              *plVar4 = lVar2;
              plVar4 = plVar4 + 1;
            }
            plVar6 = plVar11 + 4;
            if (plVar6 != plVar8) {
              if (*plVar6 != 0) {
                plVar5 = (long *)*plVar4;
                *plVar4 = 0;
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x18))();
                }
                lVar2 = *plVar6;
                *plVar6 = 0;
                *plVar4 = lVar2;
                plVar4 = plVar4 + 1;
              }
              plVar6 = plVar11 + 5;
              if (plVar6 != plVar8) {
                plVar5 = plVar4;
                if (*plVar6 != 0) {
                  plVar5 = (long *)*plVar4;
                  *plVar4 = 0;
                  if (plVar5 != (long *)0x0) {
                    (**(code **)(*plVar5 + 0x18))();
                  }
                  lVar2 = *plVar6;
                  *plVar6 = 0;
                  plVar5 = plVar4 + 1;
                  *plVar4 = lVar2;
                }
                plVar4 = plVar5;
                for (plVar11 = plVar11 + 6; plVar11 != plVar8; plVar11 = plVar11 + 1) {
                  plVar6 = plVar4;
                  if (*plVar11 != 0) {
                    plVar6 = (long *)*plVar4;
                    *plVar4 = 0;
                    if (plVar6 != (long *)0x0) {
                      (**(code **)(*plVar6 + 0x18))();
                    }
                    lVar2 = *plVar11;
                    *plVar11 = 0;
                    plVar6 = plVar4 + 1;
                    *plVar4 = lVar2;
                  }
                  plVar4 = plVar6;
                }
              }
            }
          }
        }
        plVar8 = *(long **)(param_1 + 0x28);
        plVar11 = plVar4;
      }
    }
LAB_010e90b8:
    lVar2 = (long)plVar8 - (long)plVar11;
    if (lVar2 != 0) {
      plVar6 = (long *)((long)plVar11 + lVar2);
      plVar4 = plVar11;
      if (plVar6 != plVar8) {
        plVar4 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x18))();
        }
        lVar7 = *plVar6;
        *plVar6 = 0;
        plVar4 = plVar11 + 1;
        *plVar11 = lVar7;
        if (plVar6 + 1 != plVar8) {
          lVar2 = lVar2 >> 3;
          plVar11 = plVar4;
          do {
            plVar6 = (long *)*plVar11;
            *plVar11 = 0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x18))();
            }
            lVar7 = plVar11[lVar2];
            plVar11[lVar2] = 0;
            plVar4 = plVar11 + 1;
            *plVar11 = lVar7;
            plVar11 = plVar4;
          } while (plVar8 + -lVar2 != plVar4);
        }
        plVar8 = *(long **)(param_1 + 0x28);
      }
      if (plVar8 != plVar4) {
        plVar8 = plVar8 + -1;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
        }
        while (plVar8 != plVar4) {
          plVar8 = plVar8 + -1;
          if ((long *)*plVar8 != (long *)0x0) {
            (**(code **)(*(long *)*plVar8 + 0x18))();
          }
        }
      }
      *(long **)(param_1 + 0x28) = plVar4;
    }
    plVar11 = *(long **)(param_1 + 0x58);
    plVar8 = *(long **)(param_1 + 0x60);
    if ((plVar11 != plVar8) && (*plVar11 != 0)) {
      do {
        plVar11 = plVar11 + 1;
        if (plVar8 == plVar11) {
          plVar11 = plVar8;
          goto LAB_010e9204;
        }
      } while (*plVar11 != 0);
    }
    if (plVar11 != plVar8) {
      plVar6 = plVar11 + 1;
      if (plVar6 != plVar8) {
        plVar4 = plVar11;
        if (*plVar6 != 0) {
          plVar4 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))();
          }
          lVar2 = *plVar6;
          *plVar6 = 0;
          plVar4 = plVar11 + 1;
          *plVar11 = lVar2;
        }
        plVar6 = plVar11 + 2;
        if (plVar6 != plVar8) {
          if (*plVar6 != 0) {
            plVar5 = (long *)*plVar4;
            *plVar4 = 0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x18))();
            }
            lVar2 = *plVar6;
            *plVar6 = 0;
            *plVar4 = lVar2;
            plVar4 = plVar4 + 1;
          }
          plVar6 = plVar11 + 3;
          if (plVar6 != plVar8) {
            if (*plVar6 != 0) {
              plVar5 = (long *)*plVar4;
              *plVar4 = 0;
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x18))();
              }
              lVar2 = *plVar6;
              *plVar6 = 0;
              *plVar4 = lVar2;
              plVar4 = plVar4 + 1;
            }
            plVar6 = plVar11 + 4;
            if (plVar6 != plVar8) {
              if (*plVar6 != 0) {
                plVar5 = (long *)*plVar4;
                *plVar4 = 0;
                if (plVar5 != (long *)0x0) {
                  (**(code **)(*plVar5 + 0x18))();
                }
                lVar2 = *plVar6;
                *plVar6 = 0;
                *plVar4 = lVar2;
                plVar4 = plVar4 + 1;
              }
              plVar6 = plVar11 + 5;
              if (plVar6 != plVar8) {
                plVar5 = plVar4;
                if (*plVar6 != 0) {
                  plVar5 = (long *)*plVar4;
                  *plVar4 = 0;
                  if (plVar5 != (long *)0x0) {
                    (**(code **)(*plVar5 + 0x18))();
                  }
                  lVar2 = *plVar6;
                  *plVar6 = 0;
                  plVar5 = plVar4 + 1;
                  *plVar4 = lVar2;
                }
                plVar4 = plVar5;
                for (plVar11 = plVar11 + 6; plVar11 != plVar8; plVar11 = plVar11 + 1) {
                  plVar6 = plVar4;
                  if (*plVar11 != 0) {
                    plVar6 = (long *)*plVar4;
                    *plVar4 = 0;
                    if (plVar6 != (long *)0x0) {
                      (**(code **)(*plVar6 + 0x18))();
                    }
                    lVar2 = *plVar11;
                    *plVar11 = 0;
                    plVar6 = plVar4 + 1;
                    *plVar4 = lVar2;
                  }
                  plVar4 = plVar6;
                }
              }
            }
          }
        }
        plVar8 = *(long **)(param_1 + 0x60);
        plVar11 = plVar4;
      }
    }
LAB_010e9204:
    lVar2 = (long)plVar8 - (long)plVar11;
    if (lVar2 != 0) {
      plVar6 = (long *)((long)plVar11 + lVar2);
      plVar4 = plVar11;
      if (plVar6 != plVar8) {
        plVar4 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x18))();
        }
        lVar7 = *plVar6;
        *plVar6 = 0;
        plVar4 = plVar11 + 1;
        *plVar11 = lVar7;
        if (plVar6 + 1 != plVar8) {
          lVar2 = lVar2 >> 3;
          plVar11 = plVar4;
          do {
            plVar6 = (long *)*plVar11;
            *plVar11 = 0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x18))();
            }
            lVar7 = plVar11[lVar2];
            plVar11[lVar2] = 0;
            plVar4 = plVar11 + 1;
            *plVar11 = lVar7;
            plVar11 = plVar4;
          } while (plVar8 + -lVar2 != plVar4);
        }
        plVar8 = *(long **)(param_1 + 0x60);
      }
      if (plVar8 != plVar4) {
        plVar8 = plVar8 + -1;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
        }
        while (plVar8 != plVar4) {
          plVar8 = plVar8 + -1;
          if ((long *)*plVar8 != (long *)0x0) {
            (**(code **)(*(long *)*plVar8 + 0x18))();
          }
        }
      }
      *(long **)(param_1 + 0x60) = plVar4;
    }
    *(ulong *)(param_1 + 600) = uVar10;
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (!bVar9) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    return;
  }
  return;
code_r0x010e8e8c:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar9) {
    *plVar11 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_010e8e94;
  goto LAB_010e8e84;
}


