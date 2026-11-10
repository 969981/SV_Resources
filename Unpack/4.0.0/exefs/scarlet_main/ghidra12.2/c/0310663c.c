/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0310663c; name: FUN_0310663c
 */


void FUN_0310663c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  switch(*(undefined2 *)(param_1 + 4)) {
  case 0:
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6[1] != 0) {
      plVar5 = plVar6 + 2;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x10);
    lVar8 = plVar6[4];
    if (0 < (int)lVar8) {
      plVar6 = (long *)plVar6[3];
      iVar9 = 0;
      do {
        plVar5 = (long *)*plVar6;
        if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
          plVar1 = plVar5 + 2;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        iVar9 = iVar9 + 1;
        plVar6 = plVar6 + 1;
      } while (iVar9 != (int)lVar8);
      plVar6 = *(long **)(param_1 + 0x10);
    }
    if (plVar6[1] != 0) {
      plVar5 = plVar6 + 2;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x18);
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar5 = plVar6 + 2;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x20);
    lVar8 = plVar6[4];
    if (0 < (int)lVar8) {
      plVar6 = (long *)plVar6[3];
      iVar9 = 0;
      do {
        plVar5 = (long *)*plVar6;
        if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
          plVar1 = plVar5 + 2;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        iVar9 = iVar9 + 1;
        plVar6 = plVar6 + 1;
      } while (iVar9 != (int)lVar8);
      plVar6 = *(long **)(param_1 + 0x20);
    }
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 1:
  case 3:
  case 5:
  case 6:
  case 9:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x25:
  case 0x26:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2e:
  case 0x30:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x50:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
    goto switchD_03106670_caseD_1;
  case 2:
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6[1] != 0) {
      plVar5 = plVar6 + 2;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x10);
    lVar8 = plVar6[4];
    if (0 < (int)lVar8) {
      plVar6 = (long *)plVar6[3];
      iVar9 = 0;
      do {
        plVar5 = (long *)*plVar6;
        if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
          plVar1 = plVar5 + 2;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        iVar9 = iVar9 + 1;
        plVar6 = plVar6 + 1;
      } while (iVar9 != (int)lVar8);
      plVar6 = *(long **)(param_1 + 0x10);
    }
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6[1] != 0) {
      plVar5 = plVar6 + 2;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x10);
    lVar8 = plVar6[4];
    if (0 < (int)lVar8) {
      plVar6 = (long *)plVar6[3];
      iVar9 = 0;
      do {
        plVar5 = (long *)*plVar6;
        if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
          plVar1 = plVar5 + 2;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        iVar9 = iVar9 + 1;
        plVar6 = plVar6 + 1;
      } while (iVar9 != (int)lVar8);
      plVar6 = *(long **)(param_1 + 0x10);
    }
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 7:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 8:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 10:
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0xb:
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0xc:
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x22:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x24:
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x27:
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x28:
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x2d:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x2f:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x31:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x46:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6[1] != 0) {
      plVar5 = plVar6 + 2;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x4f:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x51:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x5b:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6[1] == 0) {
      return;
    }
    plVar5 = plVar6 + 2;
    do {
      bVar4 = *plVar5 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  default:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (bVar4) {
                    /* WARNING: Could not recover jumptable at 0x03106be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))();
    return;
  }
switchD_03106670_caseD_1:
  return;
}


